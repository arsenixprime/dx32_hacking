"""Shared geometry, pinout and net-mapping parameters for the BMDC3 2 MB RAM interposer.

All dimensions in mm.  Board coordinate system: origin at the centre of the
SRAM, X across the board (edge A at -X, edge B at +X), Y along the board
(pin 1 end of the SRAM at -Y).  KiCad's PCB Y axis points down the page, so
"+Y" here is "down" in the editor; nothing depends on that.

MEASUREMENTS TO CONFIRM ON THE CARD (status in README.md):
    ROW_PITCH      nominal 11.43 (450 mil)   centre-to-centre of the two host pad rows
    HOST_PAD_LEN   nominal 2.0               host pad length (across the row pitch)
    HOST_PAD_W     nominal 0.6               host pad width (along the edge)
    CHIP_PITCH     unknown                   U8..U11 spacing along the row of chips
    END_CLEAR      unknown                   free distance beyond each end of the pad field
Change them here, re-run tools/gen_footprints.py, tools/gen_schematic.py and
tools/build_pcb.py, and re-run ERC/DRC.
"""

# ---------------------------------------------------------------- measured on card
ROW_PITCH = 11.43        # NOMINAL - confirm
HOST_PAD_LEN = 2.0       # NOMINAL - confirm
HOST_PAD_W = 0.6         # NOMINAL - confirm
CHIP_PITCH = None        # UNKNOWN - measure; board length must be <= CHIP_PITCH - 0.5
END_CLEAR = None         # UNKNOWN - measure
HOST_PAD_OUTER = ROW_PITCH / 2 + HOST_PAD_LEN / 2   # 6.715: outer end of host pad copper

# ---------------------------------------------------------------- board
WIDTH_EXTRA = 0.4                      # 0 .. 0.5 allowed; see README clearance arithmetic
BOARD_W = ROW_PITCH + WIDTH_EXTRA      # 11.83
BOARD_LEN = 27.6                       # >= 27.4 needed for JP1/JP2 in the end strips (see README)
BOARD_THICKNESS = 1.0
HALF_W = BOARD_W / 2                   # 5.915 = X of the castellation hole centres
HALF_L = BOARD_LEN / 2
CORNER_R = 0.0                         # square corners (no mousebites, no v-score)

# ---------------------------------------------------------------- castellations (host interface)
PITCH = 1.27
N_PER_EDGE = 16
CAST_DRILL = 0.6                       # JLCPCB castellated hole: diameter >= 0.5
CAST_RING = 0.2                        # annular ring on L1 (JLCPCB recommends >= 0.2)
CAST_L1_DIA = CAST_DRILL + 2 * CAST_RING          # 1.0 circle on L1 (limits the chip pad length)
CAST_INNER_DIA = 1.1                   # inner-layer ring (0.25): KiCad puts plated pads on every copper layer, so it must
                                       # stay below the 1.27 pitch minus clearance; L3 traces enter it from X = +-5.461
CAST_LAND_IN = 1.2                     # L4 land reach inward from the board edge
CAST_LAND_OUT = 0.5                    # L4 land reach beyond the edge (milled away)
CAST_LAND_W = CAST_DRILL + 2 * CAST_RING          # 1.0 along the edge (0.2 ring)
CAST_RING_INNER_X = HALF_W - CAST_L1_DIA / 2      # 5.415: innermost L1 copper of the rings
# host castellation k (1..32): edge A = k 1..16 at position k+1, edge B = k 17..32 at position 34-k
# position p (1..18) -> y = (p - 9.5) * PITCH  (chip pin j on edge A is at position j)

def cast_xy(k):
    """Board XY of host castellation k (1..32)."""
    if 1 <= k <= 16:
        pos = k + 1
        return (-HALF_W, (pos - 9.5) * PITCH)
    pos = 34 - k
    return (HALF_W, (pos - 9.5) * PITCH)

# ---------------------------------------------------------------- SRAM (36-SOJ, JEDEC MS-027 AE)
CHIP_N = 36
CHIP_CONTACT_X = 4.7                   # J-lead contact point (contact span 9.14..9.65 per datasheet 51-85090)
CHIP_PAD_W = 0.6
CHIP_PAD_RING_CLEAR = 0.25             # chip pad copper to castellation ring copper on L1 (>= 0.2 required)
CHIP_PAD_INNER_X = 3.8                 # inner end of the chip pads (stock footprint: 3.875)
CHIP_PAD_OUTER_X = min(6.025, CAST_RING_INNER_X - CHIP_PAD_RING_CLEAR)   # 5.165
CHIP_PAD_LEN = round(CHIP_PAD_OUTER_X - CHIP_PAD_INNER_X, 3)             # 1.365
CHIP_PAD_CX = round((CHIP_PAD_OUTER_X + CHIP_PAD_INNER_X) / 2, 4)        # 4.4825
CHIP_BODY_W = 10.16                    # 0.395..0.405 in
CHIP_BODY_L = 23.62                    # 0.920..0.930 in (max)
CHIP_LEAD_SPAN = 11.30                 # 0.435..0.445 in (max, outer lead extent)
CHIP_CRTYD_END = 0.12                  # courtyard excess beyond body ends (tight: end strips are small)
CHIP_CRTYD_SIDE = 0.25

def chip_xy(j):
    """Board XY of SRAM pad j (1..36). Pins 1..18 down edge A, 19..36 up edge B."""
    if 1 <= j <= 18:
        return (-CHIP_PAD_CX, (j - 9.5) * PITCH)
    return (CHIP_PAD_CX, (37 - j - 9.5) * PITCH)

# ---------------------------------------------------------------- vias, traces, rules
VIA_DRILL = 0.3
VIA_DIA = 0.6
TRACE_W = 0.2
POWER_TRACE_W = 0.25
CLEARANCE = 0.2                        # pad/via/plane clearance used by the router and zones
TRACE_CLEARANCE = 0.15                 # netclass (DRC) clearance for everything (JLCPCB 4-layer min 0.09)
EDGE_CLEARANCE = 0.25                  # copper to routed edge (JLCPCB >= 0.2); castellated pads exempt
HOLE_CLEARANCE = 0.25
MASK_EXPANSION = 0.0                   # KiCad default; JLCPCB applies its own 1:1 mask (stock 0402 silk needs 0)
ZONE_CLEARANCE = 0.2
ZONE_MIN_W = 0.25
VIA_COL_X = 1.905                      # X of the chip-pad fan-out via column: 15 grid cells inboard, leaves a
                                       # 6-track channel per layer between the vias and the castellations

# ---------------------------------------------------------------- end strips (beyond the chip body)
END_Y = HALF_L - 1.0                   # 12.8: centre line of the parts in the end strips
CAP_X = 1.3                            # caps at +-CAP_X, GND pads facing the centre, shared GND via at x=0
JP_X = 3.7                             # pin-1 (-Y) end: JP1 at +JP_X (edge B side, near chip A17 and castellation 30),
                                       # JP2 at -JP_X (edge A side, near castellation 1)
TP_X = 4.0                             # far (+Y) end: TP1 (A17) at +TP_X, TP2 (A18) at -TP_X
END_VIA_Y = HALF_L - 2.05              # 11.75: vias feeding the JP/TP pads sit just inboard of the strip

# ---------------------------------------------------------------- small footprints
WIREPAD_W, WIREPAD_H = 1.5, 1.0

# ---------------------------------------------------------------- pinouts
# host 32-SOJ site (JEDEC byte-wide, as the BMDC3 uses it)
HOST_PINS = {
    1: "NC", 2: "A16", 3: "A14", 4: "A12", 5: "A7", 6: "A6", 7: "A5", 8: "A4",
    9: "A3", 10: "A2", 11: "A1", 12: "A0", 13: "DQ0", 14: "DQ1", 15: "DQ2", 16: "VSS",
    17: "DQ3", 18: "DQ4", 19: "DQ5", 20: "DQ6", 21: "DQ7", 22: "~{E1}", 23: "A10", 24: "~{G}",
    25: "A11", 26: "A9", 27: "A8", 28: "A13", 29: "~{W}", 30: "E2", 31: "A15", 32: "VCC",
}
# CY7C1049G 36-SOJ (datasheet 001-95412 Rev *F, Figure 1, page 4)
CHIP_PINS = {
    1: "A0", 2: "A1", 3: "A2", 4: "A3", 5: "A4", 6: "~{CE}", 7: "I/O0", 8: "I/O1", 9: "VCC",
    10: "GND", 11: "I/O2", 12: "I/O3", 13: "~{WE}", 14: "A5", 15: "A6", 16: "A7", 17: "A8", 18: "A9",
    19: "NC", 20: "A10", 21: "A11", 22: "A12", 23: "A13", 24: "A14", 25: "I/O4", 26: "I/O5",
    27: "VCC", 28: "GND", 29: "I/O6", 30: "I/O7", 31: "~{OE}", 32: "A15", 33: "A16", 34: "A17",
    35: "A18", 36: "NC",
}

# ---------------------------------------------------------------- net assignment (host net name -> chip pin)
# Net names follow the HOST signal.  Addresses and data are permuted freely
# (invisible to firmware); controls and power are not.
HOST_NET = {          # host castellation -> net name
    1: "HOST_PIN1", 2: "A16", 3: "A14", 4: "A12", 5: "A7", 6: "A6", 7: "A5", 8: "A4",
    9: "A3", 10: "A2", 11: "A1", 12: "A0", 13: "DQ0", 14: "DQ1", 15: "DQ2", 16: "GND",
    17: "DQ3", 18: "DQ4", 19: "DQ5", 20: "DQ6", 21: "DQ7", 22: "~{CE1}", 23: "A10", 24: "~{OE}",
    25: "A11", 26: "A9", 27: "A8", 28: "A13", 29: "~{WE}", 30: "E2", 31: "A15", 32: "+5V",
}
CHIP_NET = {          # chip pin -> net name (host signal)
    # edge A: host A14..A5 (castellations 3..7) -> chip A0..A4 (pins 1..5); host A4..A0 (8..12) -> chip A5..A9 (14..18)
    1: "A14", 2: "A12", 3: "A7", 4: "A6", 5: "A5", 14: "A4", 15: "A3", 16: "A2", 17: "A1", 18: "A0",
    # edge B: host A15 (31) -> chip A15 (32); host A13,A8,A9,A11,A10 (28,27,26,25,23) -> chip A14..A10 (24..20)
    # (castellation positions 6,7,8,9,11 -> SRAM positions 13..17: monotone, no crossings);
    # host A16 (castellation 2, edge A) crosses to chip A16 (33) at the pin-1 end
    33: "A16", 32: "A15", 24: "A13", 23: "A8", 22: "A9", 21: "A11", 20: "A10",
    # data: host DQ0..DQ2 (13..15) -> chip I/O1..I/O3 (8,11,12); host DQ3 (17, edge B) crosses to I/O0 (7);
    # host DQ7,DQ6,DQ5,DQ4 (21,20,19,18) -> chip I/O7,I/O6,I/O5,I/O4 (30,29,26,25)
    8: "DQ0", 11: "DQ1", 12: "DQ2", 7: "DQ3", 30: "DQ7", 29: "DQ6", 26: "DQ5", 25: "DQ4",
    # controls and power: fixed
    6: "~{CE1}", 31: "~{OE}", 13: "~{WE}", 9: "+5V", 27: "+5V", 10: "GND", 28: "GND",
    34: "A17", 35: "A18",
}
# JP1: A17 <-> E2 (castellation 30).  JP2: A18 <-> HOST_PIN1 (castellation 1).  Both open.
# TP1 = A17 wire pad, TP2 = A18 wire pad.

def check_mapping():
    host_nets = [HOST_NET[k] for k in range(1, 33)]
    chip_nets = [CHIP_NET[j] for j in CHIP_NET]
    assert len(set(host_nets)) == 32, "host nets must be distinct"
    sig = [n for n in host_nets if n not in ("GND", "+5V", "HOST_PIN1", "E2")]
    chip_sig = [n for n in chip_nets if n not in ("GND", "+5V", "A17", "A18")]
    assert sorted(sig) == sorted(chip_sig), (sorted(sig), sorted(chip_sig))
    # controls are fixed
    assert CHIP_NET[6] == "~{CE1}" and CHIP_NET[31] == "~{OE}" and CHIP_NET[13] == "~{WE}"
    assert CHIP_NET[9] == CHIP_NET[27] == "+5V" and CHIP_NET[10] == CHIP_NET[28] == "GND"
    # address pins carry addresses, data pins carry data
    for j, n in CHIP_NET.items():
        name = CHIP_PINS[j]
        if name.startswith("A"):
            assert n.startswith("A"), (j, n)
        if name.startswith("I/O"):
            assert n.startswith("DQ"), (j, n)

check_mapping()

if __name__ == "__main__":
    print(f"BOARD_W={BOARD_W} BOARD_LEN={BOARD_LEN} ring inner X={CAST_RING_INNER_X} chip pad outer X={CHIP_PAD_OUTER_X} len={CHIP_PAD_LEN} cx={CHIP_PAD_CX}")
    for k in range(1, 33):
        print(k, HOST_PINS[k], HOST_NET[k], cast_xy(k))
