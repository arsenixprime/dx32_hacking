#!/usr/bin/env python3
"""Generate bmdc_interposer.pretty from tools/params.py (plain s-expression output).

Footprints:
  BMDC3_SOJ32_Castellated          host interface: 32 castellated half-holes, 16 per long edge
  SOJ-36_10.16x23.495mm_P1.27mm_ShortPads   CY7C1049G site, pads shortened on the outside
  WirePad_1.5x1.0mm                A17/A18 wire attachment pad
  SolderJumper-2_P1.3mm_Open_Pad1.0x1.5mm   copy of the stock jumper with a courtyard that
                                   fits the end strip (pads identical to the KiCad library part)

Board outline (put in the PCB by tools/build_pcb.py):
  rectangle  X = +-BOARD_W/2 = +-(ROW_PITCH + WIDTH_EXTRA)/2,  Y = +-BOARD_LEN/2
Castellation hole centres sit exactly on X = +-BOARD_W/2.

Run:  python3 tools/gen_footprints.py [output_dir]
"""
import os
import sys
import uuid

sys.path.insert(0, os.path.dirname(__file__))
import params as P  # noqa: E402

VERSION = "20260206"
GEN = '(generator "gen_footprints.py")\n\t(generator_version "10.0")'


def f(v):
    """Format a number for KiCad (no trailing zeros, -0 -> 0)."""
    s = f"{v:.4f}".rstrip("0").rstrip(".")
    return "0" if s in ("-0", "") else s


def uid():
    return str(uuid.uuid4())


def text_prop(name, value, x, y, layer, hide=False, size=1.0, thick=0.15):
    h = "\n\t\t(hide yes)" if hide else ""
    return f'''\t(property "{name}" "{value}"
\t\t(at {f(x)} {f(y)} 0)
\t\t(layer "{layer}"){h}
\t\t(uuid "{uid()}")
\t\t(effects
\t\t\t(font
\t\t\t\t(size {f(size)} {f(size)})
\t\t\t\t(thickness {f(thick)})
\t\t\t)
\t\t)
\t)'''


def line(x1, y1, x2, y2, layer, w):
    return f'''\t(fp_line
\t\t(start {f(x1)} {f(y1)})
\t\t(end {f(x2)} {f(y2)})
\t\t(stroke
\t\t\t(width {f(w)})
\t\t\t(type solid)
\t\t)
\t\t(layer "{layer}")
\t\t(uuid "{uid()}")
\t)'''


def rect(x1, y1, x2, y2, layer, w, fill=False):
    return f'''\t(fp_rect
\t\t(start {f(x1)} {f(y1)})
\t\t(end {f(x2)} {f(y2)})
\t\t(stroke
\t\t\t(width {f(w)})
\t\t\t(type solid)
\t\t)
\t\t(fill {"yes" if fill else "no"})
\t\t(layer "{layer}")
\t\t(uuid "{uid()}")
\t)'''


def circle(cx, cy, r, layer, w, fill=True):
    return f'''\t(fp_circle
\t\t(center {f(cx)} {f(cy)})
\t\t(end {f(cx + r)} {f(cy)})
\t\t(stroke
\t\t\t(width {f(w)})
\t\t\t(type solid)
\t\t)
\t\t(fill {"yes" if fill else "no"})
\t\t(layer "{layer}")
\t\t(uuid "{uid()}")
\t)'''


def poly(pts, layer, w, fill=True):
    p = " ".join(f"(xy {f(x)} {f(y)})" for x, y in pts)
    return f'''\t(fp_poly
\t\t(pts
\t\t\t{p}
\t\t)
\t\t(stroke
\t\t\t(width {f(w)})
\t\t\t(type solid)
\t\t)
\t\t(fill {"yes" if fill else "no"})
\t\t(layer "{layer}")
\t\t(uuid "{uid()}")
\t)'''


def fp_text(txt, x, y, layer, size=1.0, thick=0.15, rot=0):
    return f'''\t(fp_text user "{txt}"
\t\t(at {f(x)} {f(y)} {rot})
\t\t(layer "{layer}")
\t\t(uuid "{uid()}")
\t\t(effects
\t\t\t(font
\t\t\t\t(size {f(size)} {f(size)})
\t\t\t\t(thickness {f(thick)})
\t\t\t)
\t\t)
\t)'''


def smd_pad(num, x, y, sx, sy, shape="roundrect", rr=0.25, paste=True, rot=0):
    layers = '"F.Cu" "F.Mask" "F.Paste"' if paste else '"F.Cu" "F.Mask"'
    rrs = f"\n\t\t(roundrect_rratio {f(rr)})" if shape == "roundrect" else ""
    return f'''\t(pad "{num}" smd {shape}
\t\t(at {f(x)} {f(y)} {rot})
\t\t(size {f(sx)} {f(sy)})
\t\t(layers {layers}){rrs}
\t\t(uuid "{uid()}")
\t)'''


def castellated_pad(num, x, y, inward_sign, keep_all_layers=False, solid=False):
    """Castellated half-hole: hole centre on the board edge.
    L1: circle CAST_L1_DIA (ring CAST_RING).  L2/L3: circle CAST_INNER_DIA (kept on every layer).
    L4: land CAST_LAND_W along the edge x (CAST_LAND_IN + CAST_LAND_OUT) across it, shifted inward."""
    land_len = P.CAST_LAND_IN + P.CAST_LAND_OUT
    off = inward_sign * (P.CAST_LAND_IN - P.CAST_LAND_OUT) / 2   # shape centre relative to hole
    # copper layers: L1 ring, L3 ring (entry for traces), L4 land; L2 only for the power castellations
    # (the GND plane needs 16; 32 keeps all).  Signal castellations have no copper on L2 at all, so the
    # plane keeps only the hole clearance there.  No "remove unused layers" magic: explicit and reliable.
    # KiCad puts a plated pad on every copper layer whatever the layer list says, so the inner ring is
    # CAST_INNER_DIA on L2 and L3.  Signal castellations drop it where nothing connects (L2 always; L3
    # keeps it where an L3 trace ends inside the ring).  KiCad 10 reads any (remove_unused_layers ...)
    # token as "yes", so 16 (GND) and 32 (+5V), which must keep every layer, get no token at all.
    # Every castellation keeps its copper on all layers: with "remove unused layers" KiCad 10 drops the L3
    # ring even when a trace ends inside it (tested), which breaks the connection.  The idle L2 rings are
    # 1.1 mm circles half outside the board; the GND plane keeps 0.2 mm from them.
    unused = ""
    zc = "\n\t\t(zone_connect 2)" if solid else ""
    return f'''\t(pad "{num}" thru_hole circle
\t\t(at {f(x)} {f(y)})
\t\t(size {f(P.CAST_L1_DIA)} {f(P.CAST_L1_DIA)})
\t\t(drill {f(P.CAST_DRILL)}
\t\t\t(offset 0 0)
\t\t)
\t\t(property pad_prop_castellated)
\t\t(layers "*.Mask" "F.Cu" "B.Cu" "In1.Cu" "In2.Cu"){unused}{zc}
\t\t(uuid "{uid()}")
\t\t(padstack
\t\t\t(mode front_inner_back)
\t\t\t(layer "Inner"
\t\t\t\t(shape circle)
\t\t\t\t(size {f(P.CAST_INNER_DIA)} {f(P.CAST_INNER_DIA)})
\t\t\t)
\t\t\t(layer "B.Cu"
\t\t\t\t(shape rect)
\t\t\t\t(size {f(land_len)} {f(P.CAST_LAND_W)})
\t\t\t\t(offset {f(off)} 0)
\t\t\t)
\t\t)
\t)'''


def footprint(name, descr, tags, body, attr="smd", ref_xy=(0, 0), val_xy=(0, 0), ref_hide=False,
              extra_attr=""):
    parts = [f'(footprint "{name}"', f"\t(version {VERSION})", "\t" + GEN, '\t(layer "F.Cu")',
             f'\t(descr "{descr}")', f'\t(tags "{tags}")',
             text_prop("Reference", "REF**", ref_xy[0], ref_xy[1], "F.SilkS", hide=ref_hide),
             text_prop("Value", name, val_xy[0], val_xy[1], "F.Fab"),
             text_prop("Datasheet", "", 0, 0, "F.Fab", hide=True),
             text_prop("Description", descr, 0, 0, "F.Fab", hide=True),
             f"\t(attr {attr}{extra_attr})", "\t(duplicate_pad_numbers_are_jumpers no)"]
    parts += body
    parts.append("\t(embedded_fonts no)")
    parts.append(")")
    return "\n".join(parts) + "\n"


def gen_host_site():
    body = []
    for k in range(1, 33):
        x, y = P.cast_xy(k)
        inward = 1 if x < 0 else -1
        power = k in (16, 32)
        body.append(castellated_pad(k, x, y, inward, keep_all_layers=power, solid=power))
    # fab: board outline for reference and the host pad field
    hw, hl = P.HALF_W, P.HALF_L
    body.append(rect(-hw, -hl, hw, hl, "F.Fab", 0.1))
    body.append(fp_text("castellation 1", -hw + 2.3, -hl + 0.55, "F.Fab", 0.4, 0.06))
    # pin-1 marker for castellation 1: filled silk dot at the pin-1 corner (edge A, -Y end)
    body.append(circle(-hw + 0.6, -hl + 0.55, 0.2, "F.SilkS", 0.1, fill=True))
    # reference hidden (nothing to show on the host side)
    return footprint("BMDC3_SOJ32_Castellated",
                     f"BMDC3 32-lead wide SOJ RAM site reproduced as castellated half-holes: 16 per long edge, "
                     f"{P.PITCH} mm pitch, hole {P.CAST_DRILL} mm on the board edge (X=+-{f(P.HALF_W)}), "
                     f"L1 ring {P.CAST_RING} mm, inner-layer ring {P.CAST_INNER_DIA} mm dia on L3 (and L2 for 16/32), L4 land {P.CAST_LAND_IN}x{P.CAST_LAND_W} mm inward. "
                     f"Pin 1 at -X/-Y, 1-16 down edge A, 17-32 up edge B (32 opposite 1).",
                     "castellated SOJ-32 interposer BMDC3", body, attr="smd",
                     ref_xy=(0, -P.HALF_L + 0.5), ref_hide=True, val_xy=(0, P.HALF_L - 0.5),
                     extra_attr=" exclude_from_pos_files exclude_from_bom")


def gen_soj36():
    body = []
    for j in range(1, 37):
        x, y = P.chip_xy(j)
        body.append(smd_pad(j, x, y, P.CHIP_PAD_LEN, P.CHIP_PAD_W))
    bw, bl = P.CHIP_BODY_W / 2, P.CHIP_BODY_L / 2       # 5.08, 11.81
    # silk: end bars and short side ticks (clear of pads, rings and the end-strip parts)
    sx = bw + 0.11                                       # 5.19
    for s in (-1, 1):
        body.append(line(-sx, s * bl, sx, s * bl, "F.SilkS", 0.12))
        body.append(line(-sx, s * bl, -sx, s * (bl - 0.5), "F.SilkS", 0.12))
        body.append(line(sx, s * bl, sx, s * (bl - 0.5), "F.SilkS", 0.12))
    # pin-1 marker: filled triangle inside the board, beside pad 1, pointing at it
    body.append(poly([(-5.25, -11.55), (-5.65, -11.55), (-5.45, -11.2)], "F.SilkS", 0.1, fill=True))
    # fab outline with pin-1 chamfer
    body.append(poly([(-bw + 1.0, -bl), (bw, -bl), (bw, bl), (-bw, bl), (-bw, -bl + 1.0)],
                     "F.Fab", 0.1, fill=False))
    body.append(fp_text("${REFERENCE}", 0, 0, "F.Fab", 1.0, 0.15, rot=90))
    # courtyard: sideways only to the pad ends + 0.1 (the J-leads overhang the castellation rings, which
    # are part of the board edge, not a component); body +CHIP_CRTYD_END at the ends
    cx = P.CHIP_PAD_OUTER_X + 0.1                        # 5.265
    cy = bl + P.CHIP_CRTYD_END                           # 11.93
    body.append(rect(-cx, -cy, cx, cy, "F.CrtYd", 0.05))
    body.append(f'''\t(model "${{KICAD10_3DMODEL_DIR}}/Package_SO.3dshapes/SOJ-36_10.16x23.495mm_P1.27mm.step"
\t\t(offset
\t\t\t(xyz 0 0 0)
\t\t)
\t\t(scale
\t\t\t(xyz 1 1 1)
\t\t)
\t\t(rotate
\t\t\t(xyz 0 0 0)
\t\t)
\t)''')
    return footprint("SOJ-36_10.16x23.495mm_P1.27mm_ShortPads",
                     f"SOJ-36, 400 mil, JEDEC MS-027 AE, pads shortened on the outside for the BMDC3 interposer: "
                     f"{P.CHIP_PAD_LEN}x{P.CHIP_PAD_W} mm at +-{P.CHIP_PAD_CX} (copper {P.CHIP_PAD_INNER_X}..{P.CHIP_PAD_OUTER_X}), "
                     f"J-lead contact at +-{P.CHIP_CONTACT_X}",
                     "SOJ SO short pads", body, attr="smd", ref_xy=(0, -12.5), val_xy=(0, 12.5))


def gen_wirepad():
    w, h = P.WIREPAD_W, P.WIREPAD_H
    body = [smd_pad(1, 0, 0, w, h, shape="rect", paste=False),
            rect(-w / 2 - 0.1, -h / 2 - 0.1, w / 2 + 0.1, h / 2 + 0.1, "F.CrtYd", 0.05),
            rect(-w / 2, -h / 2, w / 2, h / 2, "F.Fab", 0.1)]
    return footprint("WirePad_1.5x1.0mm", "SMD wire attachment pad 1.5x1.0 mm, no paste (hand solder 30 AWG)",
                     "wire pad", body, attr="smd", ref_xy=(0, -1.2), ref_hide=True, val_xy=(0, 1.2),
                     extra_attr=" exclude_from_pos_files")


def gen_jumper():
    body = [f'''\t(fp_rect
\t\t(start -0.15 -0.75)
\t\t(end 0.15 0.75)
\t\t(stroke
\t\t\t(width 0)
\t\t\t(type default)
\t\t)
\t\t(fill yes)
\t\t(layer "F.Mask")
\t\t(uuid "{uid()}")
\t)''',
            rect(-1.4, -0.85, 1.4, 0.85, "F.CrtYd", 0.05),
            rect(-1.15, -0.75, 1.15, 0.75, "F.Fab", 0.1),
            smd_pad(1, -0.65, 0, 1.0, 1.5, shape="rect", paste=False),
            smd_pad(2, 0.65, 0, 1.0, 1.5, shape="rect", paste=False)]
    return footprint("SolderJumper-2_P1.3mm_Open_Pad1.0x1.5mm",
                     "SMD Solder Jumper, 1x1.5mm Pads, 0.3mm gap, open (KiCad library geometry, courtyard "
                     "reduced to 2.8x1.7 mm to fit the interposer end strip)",
                     "solder jumper open", body, attr="smd", ref_xy=(0, -1.3), ref_hide=True, val_xy=(0, 1.3),
                     extra_attr=" exclude_from_pos_files exclude_from_bom allow_soldermask_bridges")


def main():
    out = sys.argv[1] if len(sys.argv) > 1 else os.path.join(os.path.dirname(__file__), "..", "bmdc_interposer.pretty")
    os.makedirs(out, exist_ok=True)
    for name, text in [("BMDC3_SOJ32_Castellated", gen_host_site()),
                       ("SOJ-36_10.16x23.495mm_P1.27mm_ShortPads", gen_soj36()),
                       ("WirePad_1.5x1.0mm", gen_wirepad()),
                       ("SolderJumper-2_P1.3mm_Open_Pad1.0x1.5mm", gen_jumper())]:
        with open(os.path.join(out, name + ".kicad_mod"), "w") as fh:
            fh.write(text)
        print("wrote", os.path.join(out, name + ".kicad_mod"))


if __name__ == "__main__":
    main()
