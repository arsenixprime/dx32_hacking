#!/usr/bin/env python3
"""
Parametric split cable grommet for a sheet-metal knockout — one or more cables.

Printed parts:
  body_half_A - rigid clamshell half, y>0.  M3 clearance holes, counterbored heads.
  body_half_B - rigid clamshell half, y<0.  M3 tap-drill holes (tap after printing).
                Bolted flange on side A, coarse-threaded skirt through the panel.
                PETG / ASA.
  grommet     - TPU 95A oblong (stadium) block with one bore per cable, captured in
                a closed pocket inside the flange.  Print solid; razor-cut a slit
                from each bore straight out to the nearest flat (+/-Y) face.
  nut         - thin hex nut on side B.  Its bore (SKIRT_MINOR + 2*THREAD_CLR) is
                what every connector has to pass through.  PETG / ASA.
  collar (2x) - sleeve seated in recesses on both parting faces; centres the halves.

Cable axes are parallel to +Z and lie in the parting plane y=0, spread along X.
Side A (flange) at z=0, side B (nut) at +Z.  Bolts run along Y, outboard of the
pocket in X.  The layout (cable positions, grommet/pocket size, flange length,
bolt positions) is computed from the CABLES list.

Usage:
    python split_grommet.py                # STEP + STL into ./out
    python split_grommet.py --no-threads   # plain cylinders, for quick fit checks
    python split_grommet.py --out mydir

All dimensions in mm.  Edit the PARAMETERS block.
"""

import argparse
import math
import os
import sys
import time

import cadquery as cq

# =============================================================================
# PARAMETERS
# =============================================================================

# --- Cables -----------------------------------------------------------------
# Listed in the order they sit along +X.  'bore' is the printed grommet bore;
# FDM TPU prints undersize, so measure the first article and adjust.
CABLES = [
    dict(name="small", d=6.35,  bore=5.7),    # 0.250"
    dict(name="large", d=9.525, bore=8.8),    # 0.375"
]
GROMMET_WEB   = 2.0    # rubber between adjacent cable bores (measured bore-to-bore)
GROMMET_WALL  = 4.0    # rubber from the largest bore to the grommet's outer surface
GROMMET_L     = 10.0   # axial length
GROMMET_BORE_CHAMFER = 0.5
POCKET_RADIAL_INTERF = 0.25   # per side; pocket outline = grommet outline inset by this
POCKET_AXIAL_INTERF  = 0.5    # pocket length = GROMMET_L - this
SKIRT_CABLE_CLR = 1.6  # diametral clearance of the skirt's guide slot around each cable

# --- Panel -------------------------------------------------------------------
HOLE_D   = 28.2    # knockout diameter.  3/4" trade size nominal = 1.109" (28.2).  Measure yours.
SHEET_T  = 1.8     # sheet thickness (0.07")
HOLE_CLR = 0.5     # diametral clearance between skirt major dia and the hole

# --- Flange (side A) --------------------------------------------------------------
FLANGE_Y        = 38.0   # across the parting plane = wrench flats (AF).  Also sets bolt length.
FLANGE_T        = 16.0   # axial thickness
FLANGE_CORNER_R = 4.0
POCKET_TO_RECESS_WALL = 2.5   # min plastic between pocket and collar recess
BOLT_TO_EDGE    = 6.0         # bolt axis to flange end (X)

# --- Skirt / thread ---------------------------------------------------------------
PITCH        = 3.0
THREAD_DEPTH = 1.5
SKIRT_MAJOR  = math.floor((HOLE_D - HOLE_CLR) * 2) / 2   # snap to 0.5 mm -> 27.5
SKIRT_MINOR  = SKIRT_MAJOR - 2 * THREAD_DEPTH
SKIRT_MIN_WALL = 2.0    # min wall between guide slot and thread minor dia (checked)
RELIEF_L     = 1.0      # unthreaded run-out at the flange, at minor dia
TIP_CHAMFER  = 1.0      # lead-in chamfer on skirt tip
CHAFE_R      = 1.0      # fillet on slot exits
FLANK_HALF_ANGLE = 15.0 # degrees; 30 deg included = trapezoidal
ROOT_W_FRAC  = 0.55     # thread root width as fraction of pitch
NUT_T        = 5.0      # nut thickness
NUT_AF       = 36.0     # nut hex across flats
SKIRT_L      = math.ceil(SHEET_T + NUT_T + 2.0 + RELIEF_L)   # 10
THREAD_CLR   = 0.3      # radial clearance nut-to-skirt (also applied to flanks)
NUT_BORE_CHAMFER = 0.6

# --- Bolts (M3) and centering collars -------------------------------------------
BOLT_CLR_D    = 3.4    # half A through-hole
BOLT_TAP_D    = 2.5    # half B, M3 tap drill (2.5 for plastic; 2.6-2.7 if it tears)
BOLT_CBORE_D  = 6.5    # fits M3 SHCS head (5.5)
BOLT_CBORE_DEPTH = 6.0 # from half A's outer flat
BOLT_Z        = FLANGE_T / 2.0
COLLAR_OD     = 6.0
COLLAR_ID     = 3.4
COLLAR_L      = 5.8    # a touch short of 2*RECESS_DEPTH so faces meet first
RECESS_D      = 6.3    # recess in each parting face; 0.15/side clearance on the collar
RECESS_DEPTH  = 3.0

# --- Reference panel in the assembly ---------------------------------------
PANEL_W = 70.0

THREAD_SEGMENTS_PER_TURN = 72    # polyline resolution of the thread cross-section (5 deg)


# =============================================================================
# LAYOUT (derived from CABLES)
# =============================================================================

def compute_layout():
    """Cable X positions (centred on the grommet), grommet/pocket/slot/flange sizes."""
    xs = [0.0]
    for a, b in zip(CABLES, CABLES[1:]):
        xs.append(xs[-1] + a["bore"] / 2 + b["bore"] / 2 + GROMMET_WEB)
    shift = (xs[0] + xs[-1]) / 2
    xs = [x - shift for x in xs]
    span = xs[-1] - xs[0]

    r_g = max(c["d"] for c in CABLES) / 2 + GROMMET_WALL
    r_p = r_g - POCKET_RADIAL_INTERF
    slot_r = [(c["d"] + SKIRT_CABLE_CLR) / 2 for c in CABLES]
    slot_len = span + slot_r[0] + slot_r[-1]
    slot_w = 2 * max(slot_r)

    pocket_half_len = span / 2 + r_p
    bolt_x = pocket_half_len + RECESS_D / 2 + POCKET_TO_RECESS_WALL
    flange_x = math.ceil(2 * (bolt_x + BOLT_TO_EDGE))

    return dict(
        xs=xs, span=span,
        grommet_r=r_g, grommet_len=span + 2 * r_g,
        pocket_r=r_p, pocket_len=span + 2 * r_p,
        pocket_L=GROMMET_L - POCKET_AXIAL_INTERF,
        pocket_z0=(FLANGE_T - (GROMMET_L - POCKET_AXIAL_INTERF)) / 2,
        slot_r=slot_r, slot_len=slot_len, slot_w=slot_w,
        bolt_x=bolt_x, flange_x=flange_x,
        body_L=FLANGE_T + SKIRT_L,
    )


LAY = compute_layout()
BODY_L = LAY["body_L"]


# =============================================================================
# THREAD BUILDER
# =============================================================================

def thread_section_points(r_minor, r_major, pitch, root_w, crest_w, n):
    """
    Perpendicular cross-section of a single-start trapezoidal thread: radius
    as a function of angle, with one tooth per turn.  Twist-extruding this by
    360 deg per pitch produces the helical thread as ONE solid (core + tooth).
    This is far more robust in OCC booleans than sweeping a profile along a helix.
    """
    t = math.tan(math.radians(FLANK_HALF_ANGLE))
    half_c, half_r = crest_w / 2, root_w / 2

    def r_of(z):
        d = abs(z - pitch / 2)          # tooth centred mid-pitch
        if d <= half_c:
            return r_major
        if d >= half_r:
            return r_minor
        return r_major - (d - half_c) / t

    pts = []
    for i in range(n):
        th = 2 * math.pi * i / n
        r = r_of(pitch * i / n)
        pts.append((r * math.cos(th), r * math.sin(th)))
    return pts


def threaded_cylinder(major, minor, pitch, z0, length, clearance=0.0,
                      tip_chamfer=0.0, threads=True):
    """
    External threaded cylinder from z0 to z0+length, as a single solid.
    clearance > 0 grows everything radially and widens the tooth on both flanks
    (used to make the 'tap' that cuts the nut).
    tip_chamfer chamfers the +Z end so the nut starts easily.
    """
    r_maj = major / 2 + clearance
    r_min = minor / 2 + clearance
    if not threads:
        return (cq.Workplane("XY").workplane(offset=z0)
                .circle(r_min + (r_maj - r_min) / 2).extrude(length))
    depth = r_maj - r_min
    t = math.tan(math.radians(FLANK_HALF_ANGLE))
    root_w = ROOT_W_FRAC * pitch + 2 * clearance
    crest_w = max(root_w - 2 * depth * t, 0.2)
    pts = thread_section_points(r_min, r_maj, pitch, root_w, crest_w,
                                THREAD_SEGMENTS_PER_TURN)
    turns = length / pitch
    body = (cq.Workplane("XY").workplane(offset=z0)
            .polyline(pts).close()
            .twistExtrude(length, 360.0 * turns))
    v = body.val().Volume()
    v_lo = math.pi * r_min ** 2 * length
    v_hi = math.pi * r_maj ** 2 * length
    if not (v_lo < v < v_hi):
        raise RuntimeError(f"threaded cylinder volume {v:.1f} not in ({v_lo:.1f}, {v_hi:.1f})")
    if tip_chamfer > 0:
        env = (cq.Workplane("XY").workplane(offset=z0)
               .circle(r_maj + 0.01).extrude(length)
               .faces(">Z").edges().chamfer(tip_chamfer))
        body = body.intersect(env)
        if body.val().Volume() >= v:
            raise RuntimeError("tip chamfer intersect failed")
    return body


# =============================================================================
# 2D OUTLINES
# =============================================================================

def stadium_prism(length, r, z0, h):
    """Stadium (slot) of overall length `length` and radius r, long axis X, extruded z0..z0+h."""
    if length <= 2 * r + 1e-6:
        return cq.Workplane("XY").workplane(offset=z0).circle(r).extrude(h)
    return cq.Workplane("XY").workplane(offset=z0).slot2D(length, 2 * r).extrude(h)


def hull_of_circles_prism(xs, rs, z0, h):
    """
    Convex hull of circles (xs[i], 0, rs[i]) extruded along Z.  Built as the union
    of the circles and the tangent quads between consecutive pairs.
    """
    wp = None
    for x, r in zip(xs, rs):
        c = cq.Workplane("XY").workplane(offset=z0).center(x, 0).circle(r).extrude(h)
        wp = c if wp is None else wp.union(c)
    for (x1, r1), (x2, r2) in zip(zip(xs, rs), zip(xs[1:], rs[1:])):
        d = x2 - x1
        phi = math.asin((r2 - r1) / d)
        s, c_ = math.sin(phi), math.cos(phi)
        quad = [(x1 - r1 * s,  r1 * c_), (x2 - r2 * s,  r2 * c_),
                (x2 - r2 * s, -r2 * c_), (x1 - r1 * s, -r1 * c_)]
        q = cq.Workplane("XY").workplane(offset=z0).polyline(quad).close().extrude(h)
        wp = wp.union(q)
    return wp


# =============================================================================
# PARTS
# =============================================================================

def make_body(threads=True):
    """Full (unsplit) body: flange + skirt, guide slot, grommet pocket."""
    flange = (cq.Workplane("XY")
              .rect(LAY["flange_x"], FLANGE_Y).extrude(FLANGE_T)
              .edges("|Z").fillet(FLANGE_CORNER_R))

    # Skirt: relief at minor dia next to the flange, then thread to the tip.
    relief = (cq.Workplane("XY").workplane(offset=FLANGE_T)
              .circle(SKIRT_MINOR / 2).extrude(RELIEF_L + 0.01))
    thr = threaded_cylinder(SKIRT_MAJOR, SKIRT_MINOR, PITCH,
                            z0=FLANGE_T + RELIEF_L,
                            length=SKIRT_L - RELIEF_L,
                            tip_chamfer=TIP_CHAMFER, threads=threads)
    body = flange.union(relief).union(thr)

    # Guide slot (chafe guide) through everything, and the grommet pocket.
    slot = hull_of_circles_prism(LAY["xs"], LAY["slot_r"], -1, BODY_L + 2)
    pocket = stadium_prism(LAY["pocket_len"], LAY["pocket_r"], LAY["pocket_z0"], LAY["pocket_L"])
    body = body.cut(slot).cut(pocket)

    # Chafe fillets on both slot exits (all edges of the slot outline at that z).
    hx = LAY["slot_len"] / 2 + 1
    hy = LAY["slot_w"] / 2 + 1
    for z in (0.0, BODY_L):
        sel = cq.selectors.BoxSelector((-hx, -hy, z - 0.05), (hx, hy, z + 0.05),
                                       boundingbox=True)
        try:
            body = body.edges(sel).fillet(CHAFE_R)
        except Exception as e:  # noqa: BLE001
            print(f"  warning: chafe fillet at z={z} skipped ({e})", file=sys.stderr)
    return body


def y_cylinder(x, y_start, length, d, z=BOLT_Z):
    """Cylinder of diameter d along +Y starting at (x, y_start, z)."""
    return cq.Workplane("XY").add(
        cq.Solid.makeCylinder(d / 2, length, pnt=cq.Vector(x, y_start, z),
                              dir=cq.Vector(0, 1, 0)))


def add_bolt_features(half, kind):
    """
    kind 'A': y>0 half.  M3 clearance through, counterbore on the outer flat (y=+W/2),
              collar recess on the parting face (y=0).
    kind 'B': y<0 half.  Tap-drill through, collar recess on the parting face.
    """
    W2 = FLANGE_Y / 2
    for sx in (+1, -1):
        x = sx * LAY["bolt_x"]
        if kind == "A":
            half = half.cut(y_cylinder(x, -1, W2 + 2, BOLT_CLR_D))
            half = half.cut(y_cylinder(x, W2 - BOLT_CBORE_DEPTH, BOLT_CBORE_DEPTH + 1, BOLT_CBORE_D))
            half = half.cut(y_cylinder(x, -1, RECESS_DEPTH + 1, RECESS_D))
        else:
            half = half.cut(y_cylinder(x, -W2 - 1, W2 + 2, BOLT_TAP_D))
            half = half.cut(y_cylinder(x, -RECESS_DEPTH, RECESS_DEPTH + 1, RECESS_D))
    return half


def make_collar():
    return (cq.Workplane("XY").circle(COLLAR_OD / 2).circle(COLLAR_ID / 2)
            .extrude(COLLAR_L)
            .edges().chamfer(0.3))


def split_half(body, positive=True):
    """Keep the y>0 (or y<0) half of the body."""
    big = 300.0
    y0 = 0.0 if positive else -big
    box = (cq.Workplane("XY")
           .box(big, big, big, centered=(True, False, True))
           .translate((0, y0, 0)))
    return body.intersect(box)


def make_grommet():
    g = stadium_prism(LAY["grommet_len"], LAY["grommet_r"], 0, GROMMET_L)
    for x, c in zip(LAY["xs"], CABLES):
        g = g.cut(cq.Workplane("XY").workplane(offset=-1).center(x, 0)
                  .circle(c["bore"] / 2).extrude(GROMMET_L + 2))
    # Chamfer every bore edge on both faces.
    for x, c in zip(LAY["xs"], CABLES):
        r = c["bore"] / 2 + 0.1
        for z in (0.0, GROMMET_L):
            sel = cq.selectors.BoxSelector((x - r, -r, z - 0.05), (x + r, r, z + 0.05),
                                           boundingbox=True)
            try:
                g = g.edges(sel).chamfer(GROMMET_BORE_CHAMFER)
            except Exception as e:  # noqa: BLE001
                print(f"  warning: grommet chamfer ({c['name']}, z={z}) skipped ({e})",
                      file=sys.stderr)
    return g


def make_nut(threads=True):
    circ_d = NUT_AF / math.cos(math.radians(30))
    blank = (cq.Workplane("XY").polygon(6, circ_d).extrude(NUT_T))
    bore_d = SKIRT_MAJOR + 2 * THREAD_CLR
    if not threads:
        return blank.faces(">Z").workplane().hole(bore_d)
    # "Tap": the skirt thread grown by the clearance, cut from the blank.
    tap = threaded_cylinder(SKIRT_MAJOR, SKIRT_MINOR, PITCH,
                            z0=-PITCH, length=NUT_T + 2 * PITCH,
                            clearance=THREAD_CLR, threads=True)
    v_blank = blank.val().Volume()
    nut = blank.cut(tap)
    v_threaded = nut.val().Volume()
    # Must remove at least the minor-diameter bore, and no more than the major bore.
    v_minor_bore = math.pi * (SKIRT_MINOR / 2 + THREAD_CLR) ** 2 * NUT_T
    v_major_bore = math.pi * (SKIRT_MAJOR / 2 + THREAD_CLR) ** 2 * NUT_T
    removed = v_blank - v_threaded
    if not (v_minor_bore < removed < v_major_bore):
        raise RuntimeError(f"nut tap cut failed: removed {removed:.0f} mm^3, expected "
                           f"between {v_minor_bore:.0f} and {v_major_bore:.0f}")
    # Lead-in chamfers on the bore, both faces.
    r_min = SKIRT_MINOR / 2 + THREAD_CLR
    c = NUT_BORE_CHAMFER
    for face_z, direction in ((0.0, +1), (NUT_T, -1)):
        cone = cq.Solid.makeCone(r_min + c + 0.01, r_min, c + 0.01,
                                 pnt=cq.Vector(0, 0, face_z - 0.01 * direction),
                                 dir=cq.Vector(0, 0, direction))
        nut = nut.cut(cq.Workplane("XY").add(cone))
    return nut


def place_nut(nut, z, phase_deg):
    """Nut rotated about Z by phase_deg (thread phase) and raised to z."""
    return nut.rotate((0, 0, 0), (0, 0, 1), phase_deg).translate((0, 0, z))


def make_panel():
    return (cq.Workplane("XY").workplane(offset=FLANGE_T)
            .rect(PANEL_W, PANEL_W).extrude(SHEET_T)
            .faces(">Z").workplane().hole(HOLE_D))


def make_cable(x, d):
    return (cq.Workplane("XY").workplane(offset=-15).center(x, 0)
            .circle(d / 2).extrude(BODY_L + 30))


# =============================================================================
# CHECKS
# =============================================================================

def report(name, wp, bores=()):
    """Validity, volume, bbox; and a through-probe for each (x, d) in bores."""
    s = wp.val()
    bb = s.BoundingBox()
    ok = s.isValid()
    print(f"  {name:12s} valid={ok}  vol={s.Volume():8.1f} mm^3  "
          f"bbox x[{bb.xmin:6.2f},{bb.xmax:6.2f}] y[{bb.ymin:6.2f},{bb.ymax:6.2f}] "
          f"z[{bb.zmin:6.2f},{bb.zmax:6.2f}]")
    for x, d in bores:
        probe = (cq.Workplane("XY").workplane(offset=bb.zmin - 1).center(x, 0)
                 .circle(d / 2 - 0.05).extrude(bb.zmax - bb.zmin + 2))
        v = probe.intersect(wp).val().Volume()
        through = v < 1e-3
        print(f"  {'':12s} through-bore D{d:.2f} at x={x:+.2f}: "
              f"{'clear' if through else f'BLOCKED ({v:.1f} mm^3)'}")
        ok = ok and through
    return ok


def thread_fit_check():
    """
    2D check that the nut's tap section clears the skirt section at every angle.
    Both are generated by the same section function, so this is exact for the
    model (and far cheaper than a boolean between two helical solids, which OCC
    struggles with).  Returns (min radial gap, min allowed).
    """
    n = THREAD_SEGMENTS_PER_TURN
    t = math.tan(math.radians(FLANK_HALF_ANGLE))
    rw = ROOT_W_FRAC * PITCH
    cw = max(rw - 2 * THREAD_DEPTH * t, 0.2)
    skirt = thread_section_points(SKIRT_MINOR / 2, SKIRT_MAJOR / 2, PITCH, rw, cw, n)
    rw2 = rw + 2 * THREAD_CLR
    cw2 = max(rw2 - 2 * THREAD_DEPTH * t, 0.2)
    tap = thread_section_points(SKIRT_MINOR / 2 + THREAD_CLR, SKIRT_MAJOR / 2 + THREAD_CLR,
                                PITCH, rw2, cw2, n)
    gaps = [math.hypot(*b) - math.hypot(*a) for a, b in zip(skirt, tap)]
    return min(gaps), 0.8 * THREAD_CLR


def layout_checks():
    """Geometric sanity on the computed layout.  Raises on hard failures."""
    problems = []
    wall_len = (SKIRT_MINOR - LAY["slot_len"]) / 2
    wall_w = (SKIRT_MINOR - LAY["slot_w"]) / 2
    print(f"  skirt wall at slot ends    {wall_len:5.2f} mm  (min {SKIRT_MIN_WALL})")
    print(f"  skirt wall at slot sides   {wall_w:5.2f} mm  (min {SKIRT_MIN_WALL})")
    if min(wall_len, wall_w) < SKIRT_MIN_WALL:
        problems.append("cables too big / too many for this skirt: thin wall at the guide slot")
    # pocket must stay inside the flange in Y, and bolts inside the flange in X
    if LAY["pocket_r"] + 3.0 > FLANGE_Y / 2:
        problems.append("pocket too close to the wrench flats (FLANGE_Y)")
    # grommet web between bores
    for (xa, a), (xb, b) in zip(zip(LAY["xs"], CABLES), zip(LAY["xs"][1:], CABLES[1:])):
        web = (xb - xa) - a["bore"] / 2 - b["bore"] / 2
        print(f"  grommet web {a['name']}->{b['name']}    {web:5.2f} mm")
    # pocket must be inside the thread-free region of the flange end walls
    if LAY["pocket_z0"] < 2.0 or FLANGE_T - (LAY["pocket_z0"] + LAY["pocket_L"]) < 2.0:
        problems.append("pocket end walls thinner than 2 mm; increase FLANGE_T")
    if problems:
        raise RuntimeError("layout: " + "; ".join(problems))


# =============================================================================
# MAIN
# =============================================================================

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--out", default="out")
    ap.add_argument("--no-threads", action="store_true",
                    help="plain cylinders instead of helical threads")
    ap.add_argument("--stl-tol", type=float, default=0.05)
    ap.add_argument("--stl-ang", type=float, default=0.3, help="angular tolerance, rad")
    ap.add_argument("--no-assembly", action="store_true", help="skip assembly.step")
    args = ap.parse_args()
    threads = not args.no_threads
    os.makedirs(args.out, exist_ok=True)

    t0 = time.time()

    def lap(msg):
        print(f"  [{time.time() - t0:5.1f}s] {msg}", flush=True)

    print("Layout:")
    for x, c in zip(LAY["xs"], CABLES):
        print(f"  cable {c['name']:8s} D{c['d']:.3f}  bore D{c['bore']:.2f}  at x={x:+.2f}")
    print(f"  grommet              stadium {LAY['grommet_len']:.2f} x {2*LAY['grommet_r']:.2f} x {GROMMET_L}")
    print(f"  pocket               stadium {LAY['pocket_len']:.2f} x {2*LAY['pocket_r']:.2f} x "
          f"{LAY['pocket_L']:.2f} at z={LAY['pocket_z0']:.2f}")
    print(f"  skirt guide slot     {LAY['slot_len']:.2f} long x {LAY['slot_w']:.2f} wide")
    print(f"  flange               {LAY['flange_x']:.0f} (X) x {FLANGE_Y:.0f} (Y, wrench AF) x {FLANGE_T:.0f}")
    print(f"  bolts                2x M3 at x=+/-{LAY['bolt_x']:.2f}, length "
          f"{5*round(((FLANGE_Y/2-BOLT_CBORE_DEPTH)+(FLANGE_Y/2-4))/5):.0f}  "
          f"(A: D{BOLT_CLR_D} clearance, B: D{BOLT_TAP_D} tap drill)")
    print(f"  collars              2x D{COLLAR_OD} x {COLLAR_L}, bore D{COLLAR_ID}, "
          f"in D{RECESS_D} x {RECESS_DEPTH} recesses")
    print(f"  skirt major/minor    {SKIRT_MAJOR:.2f} / {SKIRT_MINOR:.2f}  pitch {PITCH}, "
          f"length {SKIRT_L:.0f} (relief {RELIEF_L})")
    print(f"  nut bore             D{SKIRT_MINOR + 2*THREAD_CLR:.2f}  <- EVERY connector must clear this")
    layout_checks()
    print()

    print("Building parts...")
    body = make_body(threads=threads);                       lap("body")
    half_a = add_bolt_features(split_half(body, True), "A");  lap("half A")
    half_b = add_bolt_features(split_half(body, False), "B"); lap("half B")
    grommet = make_grommet();                                 lap("grommet")
    nut = make_nut(threads=threads);                          lap("nut")
    collar = make_collar();                                   lap("collar")
    panel = make_panel()
    cables = [make_cable(x, c["d"]) for x, c in zip(LAY["xs"], CABLES)]

    print("Checks:")
    all_ok = True
    all_ok &= report("body_half_A", half_a)
    all_ok &= report("body_half_B", half_b)
    all_ok &= report("grommet", grommet, bores=[(x, c["bore"]) for x, c in zip(LAY["xs"], CABLES)])
    all_ok &= report("nut", nut, bores=[(0.0, SKIRT_MINOR + 2 * THREAD_CLR)])
    all_ok &= report("collar", collar, bores=[(0.0, COLLAR_ID)])

    if threads:
        gap, gap_min = thread_fit_check()
        ok = gap >= gap_min
        print(f"  nut/skirt min radial gap   {gap:7.3f} mm  (want >= {gap_min:.2f})  {'ok' if ok else 'FAIL'}")
        all_ok &= ok
    v_panel = panel.intersect(body).val().Volume()
    v_grom = grommet.translate((0, 0, LAY["pocket_z0"])).intersect(body).val().Volume()
    v_cables = sum(c.intersect(body).val().Volume() for c in cables)
    collar_placed = (collar.rotate((0, 0, 0), (1, 0, 0), -90)      # axis -> +Y
                     .translate((LAY["bolt_x"], -COLLAR_L / 2, BOLT_Z)))
    v_collar = collar_placed.intersect(half_a).val().Volume() + \
               collar_placed.intersect(half_b).val().Volume()
    print(f"  panel/skirt interference   {v_panel:7.2f} mm^3  (want 0)")
    print(f"  cables/body interference   {v_cables:7.2f} mm^3  (want 0)")
    print(f"  collar/recess interference {v_collar:7.2f} mm^3  (want 0)")
    print(f"  grommet/pocket squeeze     {v_grom:7.2f} mm^3  (want > 0: designed)")
    if v_panel > 0.5 or v_collar > 0.5 or v_cables > 0.5:
        print("  FIT PROBLEM: panel, collar or a cable collides with the body", file=sys.stderr)
        all_ok = False
    lap("checks")

    parts = {
        "body_half_A": half_a,
        "body_half_B": half_b,
        "grommet": grommet,
        "nut": nut,
        "collar": collar,
    }
    print("Exporting:")
    for name, wp in parts.items():
        step = os.path.join(args.out, f"{name}.step")
        stl = os.path.join(args.out, f"{name}.stl")
        cq.exporters.export(wp, step)
        cq.exporters.export(wp, stl, tolerance=args.stl_tol, angularTolerance=args.stl_ang)
        print(f"  {name}.step / .stl")
    lap("exports")

    if not args.no_assembly:
        # Nut rotated to the skirt's thread phase: both threads are twist-extruded
        # from a section whose crest is at 180 deg at z0, advancing 360 deg/pitch.
        nut_z = FLANGE_T + SHEET_T
        phase = 360.0 * ((FLANGE_T + RELIEF_L) - (nut_z - PITCH)) / PITCH
        nut_placed = place_nut(nut, nut_z, phase)
        asm = cq.Assembly(name="split_grommet")
        asm.add(half_a, name="body_half_A", color=cq.Color(0.75, 0.75, 0.75))
        asm.add(half_b, name="body_half_B", color=cq.Color(0.6, 0.6, 0.6))
        asm.add(grommet, name="grommet", loc=cq.Location(cq.Vector(0, 0, LAY["pocket_z0"])),
                color=cq.Color(0.2, 0.6, 0.5))
        asm.add(nut_placed, name="nut", color=cq.Color(0.5, 0.5, 0.5))
        for i, sx in enumerate((+1, -1)):
            asm.add(collar, name=f"collar_{i}",
                    loc=cq.Location(cq.Vector(sx * LAY["bolt_x"], -COLLAR_L / 2, BOLT_Z),
                                    cq.Vector(1, 0, 0), -90),
                    color=cq.Color(0.9, 0.7, 0.2))
        asm.add(panel, name="panel", color=cq.Color(0.3, 0.5, 0.8, 0.5))
        for cbl, c in zip(cables, CABLES):
            asm.add(cbl, name=f"cable_{c['name']}", color=cq.Color(0.85, 0.35, 0.2))
        asm_path = os.path.join(args.out, "assembly.step")
        asm.save(asm_path)
        print("  assembly.step")
        lap("assembly")

    if not all_ok:
        print("\nWARNING: a check failed; inspect before printing.", file=sys.stderr)
        sys.exit(1)
    print("\nDone.")


if __name__ == "__main__":
    main()
