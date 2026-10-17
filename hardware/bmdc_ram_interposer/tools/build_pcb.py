#!/usr/bin/env python3
"""Build bmdc_ram_interposer.kicad_pcb from tools/params.py with the pcbnew Python API.

Layout rules implemented here (see README "Layout"):
  L1  F.Cu   : SRAM, caps, JP1/JP2, TP1/TP2, +5V pour, short stubs from every SRAM pad to a via in the
               fan-out column at X = +-VIA_COL_X (no via-in-pad)
  L2  In1.Cu : unbroken GND plane
  L3  In2.Cu : signal routing (maze router)
  L4  B.Cu   : castellation lands + signal routing (maze router); nothing mounted, no silk
Castellation hole centres are on the board edge X = +-BOARD_W/2 (footprint BMDC3_SOJ32_Castellated).
Board outline: rectangle +-BOARD_W/2 x +-BOARD_LEN/2.

Run:  python3 tools/build_pcb.py            (writes ../bmdc_ram_interposer.kicad_pcb)
"""
import heapq
import math
import os
import sys
import uuid

import numpy as np
import pcbnew

sys.path.insert(0, os.path.dirname(__file__))
import params as P  # noqa: E402
from gen_schematic import ROOT_UUID, U, PROJECT, FIELDS  # noqa: E402

mm = pcbnew.FromMM
HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.join(HERE, "..")
LIB = os.path.join(ROOT, "bmdc_interposer.pretty")
STOCK_FP = os.environ.get("KICAD10_FOOTPRINT_DIR", "/usr/share/kicad/footprints")

G = 0.127                                   # router grid (1.27 / 10)
L_ROUTE = [pcbnew.In2_Cu, pcbnew.B_Cu]      # router layer index 0 = L3, 1 = L4
VIA_COL_X = round(P.VIA_COL_X / G) * G       # 3.048: snapped to the grid
END_VIA_Y = round(P.END_VIA_Y / G) * G       # 11.684
CAP_VIA_Y = round(P.END_Y / G) * G           # 12.827


def snap(v):
    return round(v / G) * G


# ============================================================================ board
def new_board():
    b = pcbnew.BOARD()
    b.SetCopperLayerCount(4)
    b.SetLayerType(pcbnew.In1_Cu, pcbnew.LT_POWER)       # L2 is the GND plane (helps stack-up aware analyzers)
    b.SetLayerName(pcbnew.In1_Cu, "GND_L2")
    b.SetLayerName(pcbnew.In2_Cu, "SIG_L3")
    ds = b.GetDesignSettings()
    ds.SetBoardThickness(mm(P.BOARD_THICKNESS))
    ds.m_MinClearance = mm(P.TRACE_CLEARANCE)
    nc = ds.m_NetSettings.GetDefaultNetclass()
    nc.SetClearance(mm(P.TRACE_CLEARANCE))
    nc.SetTrackWidth(mm(P.TRACE_W))
    nc.SetViaDiameter(mm(P.VIA_DIA))
    nc.SetViaDrill(mm(P.VIA_DRILL))
    ds.m_TrackMinWidth = mm(P.TRACE_W)
    ds.m_ViasMinSize = mm(P.VIA_DIA)
    ds.m_MinThroughDrill = mm(P.VIA_DRILL)
    ds.m_ViasMinAnnularWidth = mm(0.15)
    ds.m_CopperEdgeClearance = mm(P.EDGE_CLEARANCE)
    ds.m_HoleClearance = mm(P.HOLE_CLEARANCE)
    ds.m_HoleToHoleMin = mm(0.25)
    ds.m_SolderMaskExpansion = mm(P.MASK_EXPANSION)
    ds.m_SolderMaskMinWidth = mm(0.1)
    ds.m_MinSilkTextHeight = mm(0.8)
    ds.m_MinSilkTextThickness = mm(0.08)
    for attr in ("m_TentViasFront", "m_TentViasBack"):
        if hasattr(ds, attr):
            setattr(ds, attr, True)
    tb = b.GetTitleBlock()
    tb.SetTitle("BMDC3 2 MB RAM interposer")
    tb.SetRevision("A")
    tb.SetDate("2026-10-16")
    tb.SetCompany("dx32_hacking")
    tb.SetComment(0, "CY7C1049G-10VXI 36-SOJ on the 32-SOJ site of U8..U11; castellated, 4 layers, 1.0 mm, ENIG")
    return b


def add_outline(b):
    hw, hl = P.HALF_W, P.HALF_L
    pts = [(-hw, -hl), (hw, -hl), (hw, hl), (-hw, hl)]
    for i in range(4):
        x1, y1 = pts[i]
        x2, y2 = pts[(i + 1) % 4]
        s = pcbnew.PCB_SHAPE(b)
        s.SetShape(pcbnew.SHAPE_T_SEGMENT)
        s.SetLayer(pcbnew.Edge_Cuts)
        s.SetStart(pcbnew.VECTOR2I(mm(x1), mm(y1)))
        s.SetEnd(pcbnew.VECTOR2I(mm(x2), mm(y2)))
        s.SetWidth(mm(0.1))
        b.Add(s)


class Nets:
    def __init__(self, b):
        self.b = b
        self.by_name = {}

    def get(self, name):
        if name not in self.by_name:
            ni = pcbnew.NETINFO_ITEM(self.b, name)
            self.b.Add(ni)
            self.by_name[name] = ni
        return self.by_name[name]


def load_fp(lib, name, b):
    fp = pcbnew.FootprintLoad(lib, name)
    assert fp is not None, (lib, name)
    fp.SetFPID(pcbnew.LIB_ID(os.path.basename(lib).replace(".pretty", ""), name))
    return fp


def place(b, nets, lib, name, ref, value, x, y, rot, pad_nets, fields=None, show_ref=False, show_val=False, in_bom=True):
    fp = load_fp(lib, name, b)
    fp.SetReference(ref)
    fp.SetValue(value)
    fp.SetExcludedFromBOM(not in_bom)               # must match the schematic symbol (parity check)
    fp.SetPath(pcbnew.KIID_PATH(f"/{ROOT_UUID}/{U('sym/' + ref)}"))
    fp.SetPosition(pcbnew.VECTOR2I(mm(x), mm(y)))
    fp.SetOrientationDegrees(rot)
    for pad in fp.Pads():
        n = pad_nets.get(pad.GetNumber())
        if n:
            pad.SetNet(nets.get(n))
    fp.Reference().SetVisible(show_ref)
    fp.Value().SetVisible(show_val)
    if not show_ref:
        fp.Reference().SetLayer(pcbnew.F_Fab)        # hidden silk text still trips the silk DRC checks
    if not show_val:
        fp.Value().SetLayer(pcbnew.F_Fab)
    for k, v in (fields or {}).items():
        fp.SetField(k, v)
    for fld in fp.GetFields():
        if fld.GetName() not in ("Reference", "Value"):
            fld.SetVisible(False)                    # new fields default to visible silk text at the origin
            fld.SetLayer(pcbnew.F_Fab)
    b.Add(fp)
    return fp


def add_track(b, net, x1, y1, x2, y2, layer, w):
    t = pcbnew.PCB_TRACK(b)
    t.SetStart(pcbnew.VECTOR2I(mm(x1), mm(y1)))
    t.SetEnd(pcbnew.VECTOR2I(mm(x2), mm(y2)))
    t.SetLayer(layer)
    t.SetWidth(mm(w))
    t.SetNet(net)
    b.Add(t)
    return t


def add_via(b, net, x, y):
    v = pcbnew.PCB_VIA(b)
    v.SetPosition(pcbnew.VECTOR2I(mm(x), mm(y)))
    v.SetViaType(pcbnew.VIATYPE_THROUGH)
    v.SetDrill(mm(P.VIA_DRILL))
    v.SetWidth(mm(P.VIA_DIA))
    v.SetLayerPair(pcbnew.F_Cu, pcbnew.B_Cu)
    v.SetNet(net)
    b.Add(v)
    return v


def add_zone(b, net, layer, name, clearance=P.ZONE_CLEARANCE):
    z = pcbnew.ZONE(b)
    z.SetLayer(layer)
    z.SetNet(net)
    z.SetZoneName(name)
    z.SetLocalClearance(mm(clearance))
    z.SetMinThickness(mm(P.ZONE_MIN_W))
    z.SetPadConnection(pcbnew.ZONE_CONNECTION_THERMAL)
    z.SetThermalReliefGap(mm(0.2))
    z.SetThermalReliefSpokeWidth(mm(0.3))
    z.SetAssignedPriority(0)
    hw, hl = P.HALF_W - 0.05, P.HALF_L - 0.05
    o = z.Outline()
    o.NewOutline()
    for x, y in [(-hw, -hl), (hw, -hl), (hw, hl), (-hw, hl)]:
        o.Append(mm(x), mm(y))
    b.Add(z)
    return z


def add_text(b, txt, x, y, layer, size=1.0, thick=0.15, rot=0):
    t = pcbnew.PCB_TEXT(b)
    t.SetText(txt)
    t.SetPosition(pcbnew.VECTOR2I(mm(x), mm(y)))
    t.SetLayer(layer)
    t.SetTextSize(pcbnew.VECTOR2I(mm(size), mm(size)))
    t.SetTextThickness(mm(thick))
    t.SetTextAngleDegrees(rot)
    b.Add(t)
    return t


# ============================================================================ router
class Router:
    """Grid maze router on L3/L4 with vias and rip-up/re-route.  Clearance model (mm):
       trace centre to foreign copper edge >= CLEARANCE + TRACE_W/2            (0.32)
       trace centre to foreign trace centre >= CLEARANCE + TRACE_W (+margin)   (0.42)
       via centre to foreign copper edge  >= CLEARANCE + VIA_DIA/2             (0.52)
       via centre to foreign via centre   >= CLEARANCE + VIA_DIA               (0.82)
       trace centre to foreign via centre >= CLEARANCE + VIA_DIA/2 + TRACE_W/2 (0.62)
       via pad edge to castellation hole  >= HOLE_CLEARANCE
    Obstacles are kept per net in two tiers: `fixed` (pads, stubs, fan-out vias, entry stubs) and
    `routed` (paths produced here).  A net that cannot be routed around other nets' `routed`
    copper is routed through it at a penalty; the nets it crosses are ripped up and re-queued."""
    T_PAD = P.TRACE_CLEARANCE + P.TRACE_W / 2 + 0.03
    T_TRACE = P.TRACE_CLEARANCE + P.TRACE_W + 0.02
    V_PAD = P.CLEARANCE + P.VIA_DIA / 2 + 0.02
    V_VIA = P.CLEARANCE + P.VIA_DIA + 0.02
    T_VIA = P.CLEARANCE + P.VIA_DIA / 2 + P.TRACE_W / 2 + 0.02
    V_CAST = max(P.CAST_INNER_DIA / 2 + P.CLEARANCE + P.VIA_DIA / 2, P.CAST_DRILL / 2 + P.HOLE_CLEARANCE + P.VIA_DIA / 2) + 0.02
    VIA_COST = 25.0      # vias fragment the lanes: prefer single-layer routes where possible
    PRES_BASE = 2.0      # present-congestion penalty per contested cell (grows each pass)
    HIST_W = 4.0         # history penalty per recorded conflict

    def __init__(self):
        self.nx = int((P.HALF_W - P.EDGE_CLEARANCE - P.TRACE_W / 2) / G)      # 43
        self.ny = int((P.HALF_L - P.EDGE_CLEARANCE - P.TRACE_W / 2) / G)      # 105
        self.W = 2 * self.nx + 1
        self.H = 2 * self.ny + 1
        self.vx = int((P.HALF_W - 0.5) / G)                                    # vias >= 0.5 from the edge
        self.vy = int((P.HALF_L - 0.5) / G)
        self.fixed = {}     # net -> ([mask L3, mask L4], via mask)
        self.routed = {}    # net -> ([mask L3, mask L4], via mask)
        self.paths = {}     # net -> [path, ...]
        self.static_v = np.zeros((self.H, self.W), bool)
        yy, xx = np.mgrid[-self.ny:self.ny + 1, -self.nx:self.nx + 1]
        self.static_v |= (np.abs(xx) > self.vx) | (np.abs(yy) > self.vy)
        self.cost = [np.ones((self.H, self.W)), np.ones((self.H, self.W))]

    # ---- masks
    def _get(self, tier, net):
        if net not in tier:
            tier[net] = ([np.zeros((self.H, self.W), bool) for _ in range(2)], np.zeros((self.H, self.W), bool))
        return tier[net]

    def _disc(self, arr, cx, cy, r):
        ix, iy = cx / G, cy / G
        rr = r / G
        x0, x1 = max(0, int(math.floor(ix - rr)) + self.nx), min(self.W - 1, int(math.ceil(ix + rr)) + self.nx)
        y0, y1 = max(0, int(math.floor(iy - rr)) + self.ny), min(self.H - 1, int(math.ceil(iy + rr)) + self.ny)
        if x1 < x0 or y1 < y0:
            return
        yy, xx = np.mgrid[y0:y1 + 1, x0:x1 + 1]
        arr[y0:y1 + 1, x0:x1 + 1] |= ((xx - self.nx - ix) ** 2 + (yy - self.ny - iy) ** 2) <= rr * rr

    def _rect(self, arr, cx, cy, hw, hh, r):
        x0 = max(0, int(math.floor((cx - hw - r) / G)) + self.nx)
        x1 = min(self.W - 1, int(math.ceil((cx + hw + r) / G)) + self.nx)
        y0 = max(0, int(math.floor((cy - hh - r) / G)) + self.ny)
        y1 = min(self.H - 1, int(math.ceil((cy + hh + r) / G)) + self.ny)
        if x1 < x0 or y1 < y0:
            return
        yy, xx = np.mgrid[y0:y1 + 1, x0:x1 + 1]
        px = (xx - self.nx) * G
        py = (yy - self.ny) * G
        dx = np.maximum(np.abs(px - cx) - hw, 0)
        dy = np.maximum(np.abs(py - cy) - hh, 0)
        arr[y0:y1 + 1, x0:x1 + 1] |= (dx * dx + dy * dy) <= r * r

    def _segment(self, arr, x1, y1, x2, y2, r):
        n = max(1, int(math.hypot(x2 - x1, y2 - y1) / (G * 0.7)))
        for i in range(n + 1):
            t = i / n
            self._disc(arr, x1 + (x2 - x1) * t, y1 + (y2 - y1) * t, r)

    # ---- obstacle registration (mm, board coords); fixed tier
    def add_pad_rect(self, net, layer_idx, cx, cy, hw, hh):
        mt, mv = self._get(self.fixed, net)
        if layer_idx is not None:
            self._rect(mt[layer_idx], cx, cy, hw, hh, self.T_PAD)
        self._rect(mv, cx, cy, hw, hh, self.V_PAD)

    def add_castellation(self, net, k, keep_all_layers):
        x, y = P.cast_xy(k)
        mt, mv = self._get(self.fixed, net)
        inward = 1 if x < 0 else -1
        cxl = x + inward * (P.CAST_LAND_IN - P.CAST_LAND_OUT) / 2
        hw, hh = (P.CAST_LAND_IN + P.CAST_LAND_OUT) / 2, P.CAST_LAND_W / 2
        self._rect(mt[1], cxl, y, hw, hh, self.T_PAD)
        self._rect(mv, cxl, y, hw, hh, self.V_PAD)
        self._disc(mt[0], x, y, P.CAST_INNER_DIA / 2 + self.T_PAD)
        self._disc(mv, x, y, self.V_CAST)

    def _via(self, tier, net, x, y):
        mt, mv = self._get(tier, net)
        for l in range(2):
            self._disc(mt[l], x, y, self.T_VIA)
        self._disc(mv, x, y, self.V_VIA)

    def _trace(self, tier, net, layer_idx, x1, y1, x2, y2):
        mt, mv = self._get(tier, net)
        self._segment(mt[layer_idx], x1, y1, x2, y2, self.T_TRACE)
        self._segment(mv, x1, y1, x2, y2, self.T_VIA)

    def add_via(self, net, x, y):
        self._via(self.fixed, net, x, y)

    def add_stub(self, net, x1, y1, x2, y2):
        mt, mv = self._get(self.fixed, net)
        self._segment(mv, x1, y1, x2, y2, self.T_VIA)

    def add_trace(self, net, layer_idx, x1, y1, x2, y2):
        self._trace(self.fixed, net, layer_idx, x1, y1, x2, y2)

    # ---- obstacle maps for a net
    def maps_for(self, net, soft=False):
        """hard blocks (fixed copper of other nets) and, when soft, per-cell counts of other nets'
        routed copper (contested cells) instead of blocking them"""
        bt = [np.zeros((self.H, self.W), bool), np.zeros((self.H, self.W), bool)]
        bv = self.static_v.copy()
        pt = [np.zeros((self.H, self.W), np.int16), np.zeros((self.H, self.W), np.int16)]
        pv = np.zeros((self.H, self.W), np.int16)
        for n, (mt, mv) in self.fixed.items():
            if n == net:
                continue
            bt[0] |= mt[0]
            bt[1] |= mt[1]
            bv |= mv
        for n, (mt, mv) in self.routed.items():
            if n == net:
                continue
            if soft:
                pt[0] += mt[0]
                pt[1] += mt[1]
                pv += mv
            else:
                bt[0] |= mt[0]
                bt[1] |= mt[1]
                bv |= mv
        return bt, bv, pt, pv

    # ---- Dijkstra
    def route(self, net, sources, targets, soft=False, pres=0.0, hist=None):
        bt, bv, pt, pv = self.maps_for(net, soft)
        if hist is None:
            hist = [np.zeros((self.H, self.W)), np.zeros((self.H, self.W))]
        nx, ny, W, H = self.nx, self.ny, self.W, self.H
        dist = np.full((2, H, W), np.inf)
        prev = {}
        heap = []
        tset = set(targets)
        for (l, ix, iy) in sources:
            ax, ay = ix + nx, iy + ny
            if 0 <= ax < W and 0 <= ay < H:
                dist[l, ay, ax] = 0.0
                heapq.heappush(heap, (0.0, l, ax, ay))
        moves = [(1, 0, 1.0), (-1, 0, 1.0), (0, 1, 1.0), (0, -1, 1.0),
                 (1, 1, 1.4142), (1, -1, 1.4142), (-1, 1, 1.4142), (-1, -1, 1.4142)]
        found = None
        while heap:
            d, l, ax, ay = heapq.heappop(heap)
            if d > dist[l, ay, ax]:
                continue
            if (l, ax - nx, ay - ny) in tset:
                found = (l, ax, ay)
                break
            for dx, dy, c in moves:
                bx, by = ax + dx, ay + dy
                if not (0 <= bx < W and 0 <= by < H):
                    continue
                if bt[l][by, bx]:
                    continue
                if dx and dy and (bt[l][ay, bx] or bt[l][by, ax]):
                    continue
                nd = d + c * 0.5 * (self.cost[l][ay, ax] + self.cost[l][by, bx]) + pres * pt[l][by, bx] + self.HIST_W * hist[l][by, bx]
                if nd < dist[l, by, bx]:
                    dist[l, by, bx] = nd
                    prev[(l, bx, by)] = (l, ax, ay)
                    heapq.heappush(heap, (nd, l, bx, by))
            ol = 1 - l
            if not bv[ay, ax] and not bt[ol][ay, ax] and not bt[l][ay, ax]:
                nd = d + self.VIA_COST + 3 * pres * (pv[ay, ax] + pt[ol][ay, ax]) + self.HIST_W * hist[ol][ay, ax]
                if nd < dist[ol, ay, ax]:
                    dist[ol, ay, ax] = nd
                    prev[(ol, ax, ay)] = (l, ax, ay)
                    heapq.heappush(heap, (nd, ol, ax, ay))
        if found is None:
            return None
        path = []
        cur = found
        while cur in prev:
            path.append(cur)
            cur = prev[cur]
        path.append(cur)
        path.reverse()
        return [(l, ax - nx, ay - ny) for (l, ax, ay) in path]

    def conflicts(self, net, path):
        """path cells (and via cells) lying inside other nets' routed clearance masks"""
        out = []
        vias = [(a[1], a[2]) for a, b in zip(path, path[1:]) if a[0] != b[0]]
        for n, (mt, mv) in self.routed.items():
            if n == net:
                continue
            for (l, ix, iy) in path:
                if mt[l][iy + self.ny, ix + self.nx]:
                    out.append((n, l, ix, iy))
            for (ix, iy) in vias:
                if mv[iy + self.ny, ix + self.nx]:
                    out.append((n, 0, ix, iy))
                    out.append((n, 1, ix, iy))
        return out

    def commit(self, net, path):
        segs, vias = path_to_geometry(path)
        for (l, x1, y1, x2, y2) in segs:
            self._trace(self.routed, net, l, x1, y1, x2, y2)
        for (x, y) in vias:
            self._via(self.routed, net, x, y)
        self.paths.setdefault(net, []).append(path)

    def rip(self, net):
        self.routed.pop(net, None)
        self.paths.pop(net, None)


def path_to_geometry(path):
    """path nodes -> (segments [(layer_idx, x1,y1,x2,y2)], vias [(x,y)]) with collinear merging"""
    segs, vias = [], []
    runs = []
    cur = [path[0]]
    for a, b in zip(path, path[1:]):
        if a[0] != b[0]:
            vias.append((a[1] * G, a[2] * G))
            runs.append(cur)
            cur = [b]
        else:
            cur.append(b)
    runs.append(cur)
    for run in runs:
        if len(run) < 2:
            continue
        l = run[0][0]
        start = run[0]
        d = (run[1][1] - run[0][1], run[1][2] - run[0][2])
        for i in range(1, len(run)):
            nd = (run[i][1] - run[i - 1][1], run[i][2] - run[i - 1][2])
            if nd != d:
                segs.append((l, start[1] * G, start[2] * G, run[i - 1][1] * G, run[i - 1][2] * G))
                start = run[i - 1]
                d = nd
        segs.append((l, start[1] * G, start[2] * G, run[-1][1] * G, run[-1][2] * G))
    return segs, vias


# ============================================================================ build
def tent(v):
    for name in ("TENTING_MODE_TENTED",):
        m = getattr(pcbnew, name, None)
        if m is not None:
            v.SetFrontTentingMode(m)
            v.SetBackTentingMode(m)
            return


def main():
    b = new_board()
    nets = Nets(b)
    add_outline(b)
    r = Router()

    # ---------------------------------------------------------------- footprints
    host_nets = {str(k): P.HOST_NET[k] for k in range(1, 33)}
    j1 = place(b, nets, LIB, "BMDC3_SOJ32_Castellated", "J1", "BMDC3_SOJ32_Site", 0, 0, 0, host_nets, fields=FIELDS["J1"], in_bom=False)
    chip_nets = {str(j): n for j, n in P.CHIP_NET.items()}
    for j in (19, 36):                                  # no-connect pins: the net names the schematic gives them
        chip_nets[str(j)] = f"unconnected-(U1-NC-Pad{j})"
    u1 = place(b, nets, LIB, "SOJ-36_10.16x23.495mm_P1.27mm_ShortPads", "U1", "CY7C1049G-10VXI", 0, 0, 0, chip_nets,
               fields=FIELDS["U1"], show_ref=True)
    u1.Reference().SetPosition(pcbnew.VECTOR2I(0, mm(-9.5)))
    u1.Reference().SetTextAngleDegrees(90)
    for pad in u1.Pads():
        if pad.GetNumber() in ("9", "10", "27", "28"):
            pad.SetLocalZoneConnection(pcbnew.ZONE_CONNECTION_FULL)
    cap_lib = os.path.join(STOCK_FP, "Capacitor_SMD.pretty")
    cap_fields = FIELDS["C"]
    caps = {}
    for ref, x, y, rot in [("C1", -P.CAP_X, -P.END_Y, 0), ("C2", P.CAP_X, -P.END_Y, 180),
                           ("C3", -P.CAP_X, P.END_Y, 0), ("C4", P.CAP_X, P.END_Y, 180)]:
        caps[ref] = place(b, nets, cap_lib, "C_0402_1005Metric", ref, "100nF", x, y, rot, {"1": "+5V", "2": "GND"}, fields=cap_fields)
        for pad in caps[ref].Pads():
            if pad.GetNumber() == "1":
                pad.SetLocalZoneConnection(pcbnew.ZONE_CONNECTION_FULL)   # end strip too narrow for 2 spokes
    jp1 = place(b, nets, LIB, "SolderJumper-2_P1.3mm_Open_Pad1.0x1.5mm", "JP1", "SolderJumper_2_Open", P.JP_X, -P.END_Y, 0, {"1": "A17", "2": "E2"}, fields=FIELDS["JP1"], in_bom=False)
    jp2 = place(b, nets, LIB, "SolderJumper-2_P1.3mm_Open_Pad1.0x1.5mm", "JP2", "SolderJumper_2_Open", -P.JP_X, -P.END_Y, 180, {"1": "A18", "2": "HOST_PIN1"}, fields=FIELDS["JP2"], in_bom=False)
    tp1 = place(b, nets, LIB, "WirePad_1.5x1.0mm", "TP1", "A17 wire pad", P.TP_X, P.END_Y, 0, {"1": "A17"}, fields=FIELDS["TP1"], in_bom=False)
    tp2 = place(b, nets, LIB, "WirePad_1.5x1.0mm", "TP2", "A18 wire pad", -P.TP_X, P.END_Y, 0, {"1": "A18"}, fields=FIELDS["TP2"], in_bom=False)

    # ---------------------------------------------------------------- register fixed copper with the router
    for k in range(1, 33):
        r.add_castellation(P.HOST_NET[k], k, keep_all_layers=k in (16, 32))
    for j in range(1, 37):
        x, y = P.chip_xy(j)
        r.add_pad_rect(P.CHIP_NET.get(j, "NC"), None, x, y, P.CHIP_PAD_LEN / 2, P.CHIP_PAD_W / 2)
    for fp in [caps[c] for c in caps] + [jp1, jp2, tp1, tp2]:
        for pad in fp.Pads():
            pos = pad.GetPosition()
            sz = pad.GetSize(pcbnew.F_Cu)
            r.add_pad_rect(pad.GetNetname(), None, pcbnew.ToMM(pos.x), pcbnew.ToMM(pos.y),
                           pcbnew.ToMM(sz.x) / 2, pcbnew.ToMM(sz.y) / 2)

    # ---------------------------------------------------------------- L1 stubs, fan-out vias, L4 entry stubs
    terminals = {}   # net -> list of node groups [(layer_idx, ix, iy), ...]

    def via_terminal(net, x, y):
        tent(add_via(b, nets.get(net), x, y))
        r.add_via(net, x, y)
        ix, iy = int(round(x / G)), int(round(y / G))
        terminals.setdefault(net, []).append([(0, ix, iy), (1, ix, iy)])

    def stub(net, x1, y1, x2, y2, layer=pcbnew.F_Cu):
        add_track(b, nets.get(net), x1, y1, x2, y2, layer, P.TRACE_W)
        if layer == pcbnew.F_Cu:
            r.add_stub(net, x1, y1, x2, y2)
        else:
            r.add_trace(net, L_ROUTE.index(layer), x1, y1, x2, y2)

    for j, n in P.CHIP_NET.items():
        if j in (9, 27):
            continue                      # VCC pins: +5V pour only
        x, y = P.chip_xy(j)
        s = 1 if x > 0 else -1
        vx = s * VIA_COL_X
        stub(n, s * (P.CHIP_PAD_INNER_X + 0.2), y, vx, y)
        via_terminal(n, vx, y)
    for fp in (jp1, jp2, tp1, tp2):
        for pad in fp.Pads():
            n = pad.GetNetname()
            px, py = pcbnew.ToMM(pad.GetPosition().x), pcbnew.ToMM(pad.GetPosition().y)
            vx, vy = snap(px), math.copysign(END_VIA_Y, py)
            stub(n, px, py, vx, vy)
            via_terminal(n, vx, vy)
    for sgn in (-1, 1):                   # shared GND via between the two caps at each end
        vy = sgn * CAP_VIA_Y
        tent(add_via(b, nets.get("GND"), 0, vy))
        r.add_via("GND", 0, vy)
        for ref in (("C1", "C2") if sgn < 0 else ("C3", "C4")):
            for pad in caps[ref].Pads():
                if pad.GetNumber() == "2":
                    px, py = pcbnew.ToMM(pad.GetPosition().x), pcbnew.ToMM(pad.GetPosition().y)
                    stub("GND", px, py, 0, vy)
    # castellation entries: on L4 from inside the land, on L3 from inside the plated ring (KiCad keeps the
    # inner-layer ring only where a trace connects to it).  No vias needed on either layer.
    land_in = int(math.ceil((P.HALF_W - P.CAST_LAND_IN + 0.1) / G))        # 38
    for k in range(1, 33):
        n = P.HOST_NET[k]
        if n == "GND":
            continue
        x, y = P.cast_xy(k)
        s = 1 if x > 0 else -1
        iy = int(round(y / G))
        entry = [(1, s * ix, iy + dy) for ix in range(land_in, r.nx + 1) for dy in (-1, 0, 1)]
        entry += [(0, s * 43, iy + dy) for dy in (-1, 0, 1)]   # track end inside the L1 and L3 rings (X = 5.461)
        terminals.setdefault(n, []).append(entry)
    # +5V: castellation 32 feeds the L1 pour through a via just inboard of the pad row at the pin-1 end;
    # GND: castellation 16 feeds the L2 plane the same way at the other end (the plane also touches the
    # castellation's own L2 ring, but a via is the connection DRC can always see)
    for n, ix, iy in (("+5V", 20, -70), ("GND", -20, 70)):
        tent(add_via(b, nets.get(n), ix * G, iy * G))
        r.add_via(n, ix * G, iy * G)
        terminals[n] = [[(0, ix, iy), (1, ix, iy)], terminals[n][-1]]      # via, then the castellation entry

    # ---------------------------------------------------------------- route on L3/L4
    jobs = []
    for n, groups in terminals.items():
        if len(groups) >= 2:
            jobs.append((n, groups))
    dbg = os.environ.get("DEBUG_NET")
    if dbg:
        bt, bv = r.maps_for(dbg)
        (l0, ix0, iy0) = terminals[dbg][int(os.environ.get("DEBUG_TERM", "0"))][0]
        for l in (0, 1):
            print(f"net {dbg} layer idx {l} window around ({ix0},{iy0}); '#' trace-blocked, 'v' via-blocked only")
            for iy in range(iy0 - 12, iy0 + 13):
                row = ""
                for ix in range(ix0 - 26, ix0 + 22):
                    ax, ay = ix + r.nx, iy + r.ny
                    if not (0 <= ax < r.W and 0 <= ay < r.H):
                        row += " "; continue
                    row += "#" if bt[l][ay, ax] else ("v" if bv[ay, ax] else ".")
                print(f"{iy:+4d} {row}")
        sys.exit(0)

    def span(groups):
        pts = [(g[0][1], g[0][2]) for g in groups]
        return max(abs(a[0] - c[0]) + abs(a[1] - c[1]) for a in pts for c in pts)

    order = sorted(jobs, key=lambda j: (j[0] in ("A17", "A18"), -span(j[1])))
    by_name = {n: groups for n, groups in jobs}
    # negotiated congestion (PathFinder-style): every pass re-routes every net; cells inside other
    # nets' clearance masks cost extra, the penalty grows each pass and conflicts accumulate history
    hist = [np.zeros((r.H, r.W)), np.zeros((r.H, r.W))]
    failures = []
    import random
    random.seed(7)
    for it in range(90):
        pres = min(r.PRES_BASE * (1.5 ** it), 60.0)
        failures = []
        if it > 0:
            random.shuffle(order)
        for n, groups in order:
            r.rip(n)
            done_nodes = set(groups[0])
            for g in groups[1:]:
                path = r.route(n, set(g), done_nodes, soft=True, pres=pres, hist=hist)
                if path is None:
                    failures.append(n)
                    break
                r.commit(n, path)
                done_nodes |= set(path)
        confl = []
        for n, pl in r.paths.items():
            for path in pl:
                confl += r.conflicts(n, path)
        for (_, l, ix, iy) in confl:
            hist[l][iy + r.ny, ix + r.nx] += 1.0
        contested = sorted({c[0] for c in confl} | {n for n, pl in r.paths.items() if any(r.conflicts(n, p) for p in pl)})
        print(f"pass {it}: pres {pres:.1f} conflicts {len(confl)} in {len(contested)} nets, unroutable {failures}")
        if not confl and not failures:
            break
    # final cleanup: rip up only the nets still in conflict and re-route them against hard obstacles
    for k in range(60):
        bad = set(failures)
        for n, pl in r.paths.items():
            for p in pl:
                cf = r.conflicts(n, p)
                if cf:
                    bad.add(n)
                    bad |= {c[0] for c in cf}          # rip the partners too, not just the loser
        if not bad:
            break
        bad = list(bad)
        random.shuffle(bad)
        for n in bad:
            r.rip(n)
        failures = []
        for n in bad:
            groups = by_name[n]
            done_nodes = set(groups[0])
            for g in groups[1:]:
                path = r.route(n, set(g), done_nodes)
                if path is None:
                    path = r.route(n, set(g), done_nodes, soft=True, pres=60.0, hist=hist)
                if path is None:
                    failures.append(n)
                    break
                r.commit(n, path)
                done_nodes |= set(path)
        remaining = sum(len(r.conflicts(n, p)) for n, pl in r.paths.items() for p in pl)
        print(f"cleanup {k}: re-routed {len(bad)} nets, conflicts now {remaining}, unroutable {failures}")
    if failures:
        print("routing FAILED for", failures)
    for n, pl in r.paths.items():
        net = nets.get(n)
        for path in pl:
            segs, vias = path_to_geometry(path)
            for (l, x1, y1, x2, y2) in segs:
                add_track(b, net, x1, y1, x2, y2, L_ROUTE[l], P.TRACE_W)
            for (x, y) in vias:
                tent(add_via(b, net, x, y))
    print(f"routed {len(jobs)} nets, {len(failures)} failures")

    # ---------------------------------------------------------------- zones
    add_zone(b, nets.get("+5V"), pcbnew.F_Cu, "+5V pour")
    add_zone(b, nets.get("GND"), pcbnew.In1_Cu, "GND plane")

    # ---------------------------------------------------------------- silk (L1 only)
    add_text(b, "BMDC3 2MB rev A", 0, 0, pcbnew.F_SilkS, 1.0, 0.15, 90)
    add_text(b, "JP2", -2.4, -11.0, pcbnew.F_SilkS, 0.8, 0.12)
    add_text(b, "JP1", 2.4, -11.0, pcbnew.F_SilkS, 0.8, 0.12)
    add_text(b, "A18", -2.4, 11.0, pcbnew.F_SilkS, 0.8, 0.12)
    add_text(b, "A17", 2.4, 11.0, pcbnew.F_SilkS, 0.8, 0.12)

    # ---------------------------------------------------------------- fill and save
    filler = pcbnew.ZONE_FILLER(b)
    filler.Fill(b.Zones())
    out = os.path.join(ROOT, PROJECT + ".kicad_pcb")
    pcbnew.SaveBoard(out, b)
    print("wrote", out, "tracks", b.Tracks().size())
    return failures


if __name__ == "__main__":
    sys.exit(1 if main() else 0)
