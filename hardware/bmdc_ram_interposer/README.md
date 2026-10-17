# BMDC3 2 MB RAM interposer

Castellated 4-layer interposer that puts a 36-lead 400-mil SOJ 512K x 8 SRAM (Infineon/Cypress
**CY7C1049G-10VXI**, 5 V, 10 ns) on the 32-lead wide SOJ site of the Bridgeport BMDC3 card. Four of
them replace U8..U11 (MCM6226BBXJ20, 128K x 8) and take the card from 512 KB to 2 MB. The card is not
modified beyond swapping the chips and adding two jumper wires per interposer; the PAL address decoder
is untouched. Background: `../../BMDC_RAM_UPGRADE.md`.

Revision A, KiCad 10.0.6, 2026-10-16. **Do not order until the measurements in the first table are
confirmed on the card** (see "Regenerating").

**Status:** design complete and clean (ERC 0/0; DRC 0 violations, 0 unconnected, 0 schematic-parity
issues; fab outputs exported) but **waiting on the card measurements and meter checks** listed in
section 9 "Open items before ordering". Checklist for the bench session:

- [ ] ROW_PITCH: centre-to-centre of the two host pad rows (nominal 11.43 mm)
- [ ] host pad length (across the rows) and width (along the row), nominal 2.0 x 0.6 mm
- [ ] CHIP_PITCH: U8-U9-U10-U11 centre spacing along the row (board length 27.6 must be <= CHIP_PITCH - 0.5)
- [ ] END_CLEAR: free board area beyond each end of the 32-pad field (board overhangs it by 4.3 mm per end)
- [ ] pad 30 (E2) tied to +5 V on all four sites, or driven by 68030 A19 (decides JP1)
- [ ] pad 1 (NC) floating, or driven by 68030 A20 (decides JP2)
- [ ] where on the card 68030 A19/A20 are reachable for the two jumper wires

```
bmdc_ram_interposer.kicad_pro / .kicad_sch / .kicad_pcb   project, schematic, board
bmdc_interposer.pretty/        generated footprints (tools/gen_footprints.py)
bmdc_interposer.kicad_sym      CY7C1049G-10VXI (copied from Memory_RAM:IS61C5128AL-10KLI) and the host site symbol
tools/params.py                ALL geometry, pinouts and the net permutation (single source of truth)
tools/gen_footprints.py        footprint library generator (plain s-expressions)
tools/gen_symbols.py           symbol library generator
tools/gen_schematic.py         schematic + project file + lib tables generator
tools/build_pcb.py             board generator: placement, L1 stubs, maze router (L3/L4), zones, silk
tools/finalize_pcb.py          writes the stack-up block and plot defaults into the board
tools/export_fab.sh            gerbers, drill, CPL, BOM, renders, STEP into fab/
tools/gen_readme_tables.py     the net tables below, from params.py
datasheets/                    CY7C1049G (DigiKey API, Infineon 001-95412 Rev *F) and the 0402 capacitor
analysis/                      ERC/DRC reports and kicad-happy analyzer JSON + text reports
fab/                           fabrication outputs (regenerate with tools/export_fab.sh)
```

## 1. Measurements to confirm on the card

| name | value used | status | what it is |
|---|---|---|---|
| ROW_PITCH | 11.43 mm (450 mil) | **nominal** (user's figure) | centre-to-centre of the two host pad rows of the wide 32-pad outline |
| HOST_PAD_LEN x HOST_PAD_W | 2.0 x 0.6 mm | **nominal** | host pad size (across the row pitch x along the edge) |
| HOST_PAD_OUTER | 6.715 mm | derived | ROW_PITCH/2 + HOST_PAD_LEN/2: outer end of host pad copper from the chip centreline |
| CHIP_PITCH | unknown | **not measured** | U8/U9/U10/U11 spacing along the row of chips; board length must be <= CHIP_PITCH - 0.5 mm |
| END_CLEAR | unknown | **not measured** | free distance beyond each end of the 32-pad field; the board overhangs the pad field by 4.3 mm at each end |

Derived board size: width **11.83 mm** (ROW_PITCH + 0.4), length **27.6 mm**. The 400-mil SOJ in
`BMDC_RAM_UPGRADE.md` would give rows about 10.3 mm apart; 450 mil means the wide outline is probably
a gull-wing land, so measure it. Everything is parametric: change the values at the top of
`tools/params.py` and regenerate (section 10).

### Why 27.6 mm and not 26-27

The two solder jumpers (pads 1.0 x 1.5 mm, stock KiCad geometry) and the two wire pads must be
reachable with the SRAM fitted, so they sit in the strips beyond the SRAM body ends together with the
decoupling capacitors. The strip needs 1.6 mm (body end 11.81 + 0.1, jumper pad 1.5, 0.25 to the
edge), which sets the minimum length at 27.4 mm; 27.6 mm adds 0.1 mm per end of margin. If
CHIP_PITCH - 0.5 turns out smaller than 27.4 mm, the fallback the brief allows is to move the caps
(and, here, the jumpers) under the SRAM body between the pad rows (SOJ standoff 0.64 mm minimum, an
0402 is 0.5 mm tall) and keep only the wire pads in the end strips, which then need 1.1 mm (board
>= 26.0 mm). That variant is **not implemented in rev A**: it needs new placements in
`tools/build_pcb.py` (the router and footprints need no change). Below 26.0 mm the wire pads have
no accessible place and the design needs rethinking (e.g. flying leads from the castellations).

## 2. Host <-> SRAM net assignment

Net names are the **host** signal names. Address lines and data lines are permuted (the SRAM does not
care which host address bit drives which pin as long as reads and writes see the same mapping, which
they do); controls and power are not. The permutation was chosen so that, on each edge, every group
of nets that shares a routing layer is monotone (no crossings), which is what makes the board
routable with no vias other than the fan-out vias. Generated by `tools/gen_readme_tables.py`; the
schematic carries the same labels.

| host pin | host signal | net | SRAM pin (name) | edge / note |
|---|---|---|---|---|
| 1 | NC | HOST_PIN1 | - | A: JP2 (open) to A18; nothing else |
| 2 | A16 | A16 | 33 (A16) | A: crosses the board |
| 3 | A14 | A14 | 1 (A0) | A: same edge |
| 4 | A12 | A12 | 2 (A1) | A: same edge |
| 5 | A7 | A7 | 3 (A2) | A: same edge |
| 6 | A6 | A6 | 4 (A3) | A: same edge |
| 7 | A5 | A5 | 5 (A4) | A: same edge |
| 8 | A4 | A4 | 14 (A5) | A: same edge |
| 9 | A3 | A3 | 15 (A6) | A: same edge |
| 10 | A2 | A2 | 16 (A7) | A: same edge |
| 11 | A1 | A1 | 17 (A8) | A: same edge |
| 12 | A0 | A0 | 18 (A9) | A: same edge |
| 13 | DQ0 | DQ0 | 8 (I/O1) | A: same edge |
| 14 | DQ1 | DQ1 | 11 (I/O2) | A: same edge |
| 15 | DQ2 | DQ2 | 12 (I/O3) | A: same edge |
| 16 | VSS | GND | 10 (GND), 28 (GND) | A: L2 plane, SRAM 10 and 28, C1-C4 |
| 17 | DQ3 | DQ3 | 7 (I/O0) | B: crosses the board |
| 18 | DQ4 | DQ4 | 25 (I/O4) | B: same edge |
| 19 | DQ5 | DQ5 | 26 (I/O5) | B: same edge |
| 20 | DQ6 | DQ6 | 29 (I/O6) | B: same edge |
| 21 | DQ7 | DQ7 | 30 (I/O7) | B: same edge |
| 22 | ~{E1} | ~{CE1} | 6 (~{CE}) | B: crosses the board |
| 23 | A10 | A10 | 20 (A10) | B: same edge |
| 24 | ~{G} | ~{OE} | 31 (~{OE}) | B: same edge |
| 25 | A11 | A11 | 21 (A11) | B: same edge |
| 26 | A9 | A9 | 22 (A12) | B: same edge |
| 27 | A8 | A8 | 23 (A13) | B: same edge |
| 28 | A13 | A13 | 24 (A14) | B: same edge |
| 29 | ~{W} | ~{WE} | 13 (~{WE}) | B: crosses the board |
| 30 | E2 | E2 | - | B: JP1 (open) to A17; nothing else |
| 31 | A15 | A15 | 32 (A15) | B: same edge |
| 32 | VCC | +5V | 9 (VCC), 27 (VCC) | B: L1 pour, SRAM 9 and 27, C1-C4 |

| SRAM pin | SRAM name | net | from |
|---|---|---|---|
| 1 | A0 | A14 | host 3 (A14) |
| 2 | A1 | A12 | host 4 (A12) |
| 3 | A2 | A7 | host 5 (A7) |
| 4 | A3 | A6 | host 6 (A6) |
| 5 | A4 | A5 | host 7 (A5) |
| 6 | ~{CE} | ~{CE1} | host 22 (~{E1}) |
| 7 | I/O0 | DQ3 | host 17 (DQ3) |
| 8 | I/O1 | DQ0 | host 13 (DQ0) |
| 9 | VCC | +5V | host 32 (VCC) |
| 10 | GND | GND | host 16 (VSS) |
| 11 | I/O2 | DQ1 | host 14 (DQ1) |
| 12 | I/O3 | DQ2 | host 15 (DQ2) |
| 13 | ~{WE} | ~{WE} | host 29 (~{W}) |
| 14 | A5 | A4 | host 8 (A4) |
| 15 | A6 | A3 | host 9 (A3) |
| 16 | A7 | A2 | host 10 (A2) |
| 17 | A8 | A1 | host 11 (A1) |
| 18 | A9 | A0 | host 12 (A0) |
| 19 | NC | NC | no connection |
| 20 | A10 | A10 | host 23 (A10) |
| 21 | A11 | A11 | host 25 (A11) |
| 22 | A12 | A9 | host 26 (A9) |
| 23 | A13 | A8 | host 27 (A8) |
| 24 | A14 | A13 | host 28 (A13) |
| 25 | I/O4 | DQ4 | host 18 (DQ4) |
| 26 | I/O5 | DQ5 | host 19 (DQ5) |
| 27 | VCC | +5V | host 32 (VCC) |
| 28 | GND | GND | host 16 (VSS) |
| 29 | I/O6 | DQ6 | host 20 (DQ6) |
| 30 | I/O7 | DQ7 | host 21 (DQ7) |
| 31 | ~{OE} | ~{OE} | host 24 (~{G}) |
| 32 | A15 | A15 | host 31 (A15) |
| 33 | A16 | A16 | host 2 (A16) |
| 34 | A17 | A17 | TP1 wire pad (68030 A19); JP1 to host 30 |
| 35 | A18 | A18 | TP2 wire pad (68030 A20); JP2 to host 1 |
| 36 | NC | NC | no connection |

Four nets cross the board: host 2 (A16) to SRAM pin 33 at the pin-1 end, host 17 (DQ3) to SRAM pin 7,
and the two controls ~E1 -> ~CE and ~W -> ~WE, which are fixed by function.

## 3. Jumper and wire-pad policy (A17/A18 = 68030 A19/A20)

The two extra address bits of a 512K x 8 part must come from 68030 **A19 and A20**, which do not
reach the SOJ site unless the card happens to route them to pads 30 and 1.

* **TP1 (A17)** and **TP2 (A18)** are 1.5 x 1.0 mm wire pads on L1 at the far (+Y, pin-18/19) end.
  Run 30 AWG wire from them to 68030 A19 (TP1) and A20 (TP2) on the card. All four interposers are
  bussed to the same two CPU pins.
* **JP1** bridges A17 to castellation 30 (host pin 30, today E2). **JP2** bridges A18 to castellation 1
  (host pin 1, today NC). Both are **open by default** and sit at the pin-1 (-Y) end. Castellations 1
  and 30 have no other connection, so with the jumpers open those two host pads are electrically
  unused by the interposer.
* Close a jumper only after verifying with a meter, chips removed, that the card drives 68030
  A19/A20 on that pad. Whether A19/A20 are decoded at all is decided by the ISA-window aliasing test
  in `BMDC_RAM_UPGRADE.md` (write through the dual-port window at an address and at the same address
  + 512 KB with the original chips fitted; if they alias, the PAL ignores A19 and the extra bits are
  simply unused above the first 512 KB word of each bank until the jumper wires are added).

**E2 assumption and risk.** Host pin 30 is E2, the active-HIGH chip enable of the MCM6226. The design
assumes the card ties it high (the MCM6226 datasheet treats E1/E2 as one enable of opposite
polarity, and the pad is unused by the 36-SOJ part). If pin 30 turns out to be a decode term from
the PAL (E2 driven per bank), the CY7C1049G has no second enable to receive it and the interposer
would need an extra gate (~CE = ~E1 OR ~E2) - out of scope for this board. Check with a meter that
pin 30 sits at +5 V on all four sites before relying on ~E1 alone.

## 4. Layout

Coordinates: origin at the SRAM centre, X across the board (edge A at -X carries host pins 1-16, edge
B at +X carries 17-32), Y along the board (pin 1 end at -Y).

| layer | content |
|---|---|
| L1 F.Cu | SRAM (custom short-pad SOJ-36), C1-C4, JP1/JP2, TP1/TP2, solid +5 V pour, 0.2 mm stubs from every SRAM signal pad inward to a fan-out via at X = +-1.905 mm (no via-in-pad) |
| L2 In1.Cu (named GND_L2, power layer) | unbroken GND plane, solid for X within +-5.165; connects castellation 16 (via at -2.54, 8.89), SRAM 10/28 (through their fan-out vias), C1-C4 GND pads (shared via per end, 0.82 mm from each pad centre) |
| L3 In2.Cu | signal routing: castellation entries come straight out of the plated half-hole (1.1 mm ring, track end inside it at X = 5.461), then run in the 1.9 mm channel between the castellations and the via column, or through the central strip |
| L4 B.Cu | castellation lands (1.2 mm inward reach) and the rest of the signal routing. Nothing mounted, no silk; everything but the lands is under solder mask |

Castellations: 32 plated 0.6 mm holes centred exactly on the long board edges, 1.27 mm pitch, 16 per
edge, 19.05 mm first-to-last, numbered 1..16 down edge A and 17..32 back up edge B (32 opposite 1).
Each is a KiCad pad with the *castellated* property and a per-layer pad stack: 1.0 mm circle on L1
(0.2 mm ring), 1.1 mm circle on L2 and L3 (0.25 mm ring; the 32 idle L2 rings are half outside the
board and the plane keeps 0.2 mm from them), and a 1.7 x 1.0 mm land on L4 shifted 0.35 mm inward
(copper 1.2 mm inside the edge, 0.5 mm outside the edge is milled away). KiCad's "remove unused
layers" is deliberately not used: KiCad 10 drops the L3 ring even when a trace ends inside it.
Castellations 16 (GND) and 32 (+5 V) have solid zone connection; both also reach their plane/pour
through a dedicated via next to the pad row (GND at -2.54, 8.89; +5 V at 2.54, -8.89).

Fan-out: the via column sits 1.905 mm from the centreline, 1.9 mm inboard of the SRAM pad ends.
Earlier revisions of the generator put it at 3.05 mm; that leaves only a 3-track channel per layer
between the vias and the castellations, and the groups host 8-12 -> SRAM 14-18 are pairwise
overlapping on one side of the column, which cannot be routed on two layers without a via per net.
At 1.905 mm each edge has a 6-track two-sided channel per layer plus a free central strip, and every
net routes with zero extra vias. The +5 V pour on L1 is consequently a comb under the SRAM (fingers
between the stubs, a 2.8 mm solid centre strip) and solid elsewhere; it feeds SRAM 9/27 directly and
castellation 32 through a via at (2.54, -8.89).

Router: `tools/build_pcb.py` contains a small grid (0.127 mm) maze router with negotiated-congestion
re-routing; fixed copper (pads, stubs, lands, rings) is a hard obstacle with the clearances below,
other nets' traces are soft obstacles whose penalty grows each pass. It converged with zero conflicts
for this geometry. It is deterministic (seeded), so a regenerate reproduces the same board.

Silkscreen (L1): U1 reference and "BMDC3 2MB rev A" under the SRAM body (visible before the chip is
fitted), JP1/JP2 and A17/A18 labels just inside the body ends next to the parts they name, SRAM pin-1
triangle beside pad 1, castellation-1 marker dot in the pin-1 corner of the board.

## 5. Clearance arithmetic (ROW_PITCH = 11.43, board width 11.83)

* Hole centre at X = +-5.915. Hole radius 0.3, L1 ring 0.2 -> L1 ring copper reaches inward to
  **5.415** (inner-layer rings 1.1 mm reach 5.365; those layers carry no SRAM pads; ring to ring
  along the edge 1.27 - 1.1 = 0.17 >= 0.15).
* SRAM pads: 1.365 x 0.6 mm at X = +-4.4825, copper from **3.8 to 5.165**. Ring to pad gap =
  5.415 - 5.165 = **0.25 mm** (>= 0.2 required; JLCPCB minimum 0.09). The J-lead contact point is at
  +-4.7 (contact span 0.360-0.380 in = 9.14-9.65 mm per datasheet drawing 51-85090), i.e. 0.47 mm
  inside the pad end with 0.9 mm of pad under the lead; the stock KiCad SOJ-36 pads (3.875-6.025)
  would overlap the rings.
* Solder mask: expansion 0 (KiCad default, JLCPCB applies 1:1), so the mask web between a ring
  opening and the neighbouring pad opening is the full 0.25 mm (>= 0.1 required).
* Hole to hole along the edge: 1.27 - 0.6 = 0.67 mm (JLCPCB >= 0.5 for castellations); hole to the
  short board edges: 3.9 mm (>= 1 mm).
* Castellation L4 lands: 1.0 mm wide at 1.27 pitch -> 0.27 mm copper gap and 0.27 mm mask web.
* Design rules: track 0.2 mm, clearance 0.15 mm (DRC net class), via 0.6/0.3 mm, copper to edge
  0.25 mm (castellated pads exempt), hole to copper 0.25 mm, zone clearance 0.2 mm, zone min width
  0.25 mm, thermal reliefs 0.3 spoke / 0.2 gap (cap +5 V pads and SRAM power pads solid).
* If the measured ROW_PITCH lets the board be wider, `CHIP_PAD_OUTER_X` in `params.py` grows
  automatically (it is min(6.025, ring inner X - 0.25)).

## 6. Stack-up and fab options (JLCPCB; PCBWay equivalent)

| option | value |
|---|---|
| layers / thickness | 4 / **1.0 mm** (card + interposer + SOJ must clear the neighbouring ISA slot) |
| stack-up | **JLC04101H-3313**: 1 oz outer copper, 3313 prepreg (about 0.1 mm, Er 4.1) between L1 (+5 V) and L2 (GND) for maximum interplane capacitance, 0.5 oz inner copper, core about 0.58 mm. (JLC04161H-3313 in the brief is the same family at 1.6 mm.) Fallback: the standard 7628 stack if 3313 is not offered for 1.0 mm. |
| finish | **ENIG** (castellations and the 1.27 mm pitch pads solder better than with HASL) |
| castellated holes | **yes - tick "Castellated holes" in the order**, 0.6 mm, on the two long edges |
| panel | none required; if JLCPCB panelises, mouse-bites on the short ends only, no V-score |
| mask / silk | green, white silk top only; "remove order number: specify a location" (there is no free silk area; let them put it on L4, which is hidden against the card) |
| quantity | 5 minimum; you need 4 |

The gerber set in `fab/` was exported with Protel extensions, mask subtracted from silk, Excellon
drill (decimal, mm, absolute origin) with a Gerber X2 drill map, plus a JLCPCB-format CPL and BOM.

## 7. BOM

| ref | qty/board | part | MPN | notes |
|---|---|---|---|---|
| U1 | 1 | 512K x 8 SRAM, 5 V, 10 ns, 36-SOJ | **CY7C1049G-10VXI** (Infineon/Cypress), DigiKey CY7C1049G-10VXI-ND | datasheet 001-95412 Rev *F; pinout verified against Figure 1, package 51-85090 |
| C1-C4 | 4 | 100 nF 16 V X7R 0402 | **CL05B104KO5NNNC** (Samsung), LCSC C1525 (JLCPCB basic part), DigiKey 1276-1004-1-ND | any 0402 X7R 100 nF >= 16 V works (Murata GRM155R71C104KA88D, etc.). Note: the file DigiKey served into `datasheets/` is Samsung's generic CL05 spec (named for the Y5V sibling CL05F104ZO5NNNC); CL05**B** is the X7R code |
| JP1, JP2 | 2 | solder jumper, open | - | no part |
| TP1, TP2 | 2 | wire pad | - | no part; 30 AWG wire-wrap wire to 68030 A19/A20 |
| J1 | 1 | castellated host interface | - | the board edge itself |

Four interposers: 4 x CY7C1049G-10VXI, 16 x 0402 capacitors.

## 8. Assembly order

1. Reflow or hot-air the SRAM and the four capacitors onto the interposer first (top side only; the
   bottom is flat). Check the SRAM pin 1 (silk triangle beside pad 1, chamfered corner on the fab
   outline) is at the end with the castellation-1 dot and JP1/JP2.
2. Decide the jumpers (section 3) while the card is still fitted with its original chips, then
   remove U8..U11 from the card and clean the pads.
3. Solder the interposers to the card by hand with the card flat: tack castellation 1 and 32, check
   the half-holes sit on the outer half of the host pads with copper visible outside the board edge,
   then run the remaining 30 castellations with a fine tip and flux. Pin 1 of the interposer (dot
   and chamfer) goes to pin 1 of the site (the end marked on the card's silk outline).
4. Run the wires from TP1/TP2 of all four interposers to 68030 A19/A20.
5. Patch the firmware before the card will boot with more than 512 KB:
   `python3 tools/patch_bmdc_ram.py --max 16M` (repository root), background in `BMDC_RAM_UPGRADE.md`.

## 9. Verification

All checks below were run on the files in this directory as delivered (KiCad 10.0.6 `kicad-cli`,
kicad-happy 1.3.1 analyzers). Reports are in `analysis/`.

| check | result |
|---|---|
| `kicad-cli sch erc --severity-all` | **0 errors, 0 warnings** (`analysis/erc.rpt`) |
| `kicad-cli pcb drc --severity-all --schematic-parity` | **0 violations, 0 unconnected items, 0 schematic-parity issues** (`analysis/drc.rpt`, `drc.json`) |
| routing | 34 nets, 426 track segments, 54 vias (0.6/0.3), all nets complete; router converged with 0 conflicts |
| `analyze_schematic.py` | 0 errors, 1 warning (RS-001 "+5V has no declared source": it is the host card, through castellation 32) |
| `analyze_pcb.py --full` | 4 "errors", 6 warnings, all PM-002 edge-distance and TE-001 (see below); routing_complete true |
| `cross_analysis.py` | 9 findings: RP-002 x8 and PS-002 (see below) |
| `analyze_emc.py` | GP-001 / RP-001 / SU-001 / DC-002 (see below); no other rule fired |
| `analyze_thermal.py` | nothing to report (45 mA part) |
| `analyze_gerbers.py` | 0 errors, 1 warning (GR-004 paste coverage 32%: only U1 and C1-C4 have paste; castellations, jumpers and wire pads deliberately have none); all 9 expected layers present, drill file complete, 54 x 0.3 mm vias + 32 x 0.6 mm castellation holes, outline closed, 11.93 x 27.7 mm bounding box (outline line width included) |
| SPICE | not applicable: no analog subcircuits |

Explained analyzer findings (none of them are design defects for this board):

* **PM-002 "JP1/JP2 0.15 mm, TP1/TP2 0.4 mm, C1-C4 0.54 mm from board edge"**: courtyard-to-edge
  distances. The brief puts these parts in the 1.6 mm strips beyond the SRAM body; copper to edge is
  0.25 mm (JLCPCB minimum 0.2), checked by DRC.
* **GP-001 / SU-001 "reference plane gap", "adjacent signal layers"**: the brief's stack-up is
  SIG-GND-SIG-SIG. Traces on L4 reference the GND plane through the core (~0.8 mm away) and L3
  through 0.1 mm of prepreg; that is the chosen trade-off (thin L1-L2 prepreg for the +5 V / GND
  interplane capacitance). At 40 MHz bus rate and 10 ns edges over <= 25 mm this has no effect.
* **RP-002 / PS-002 "signals cross a GND plane gap", "plane split: 7 islands"**: the GND plane is a
  single polygon (252 mm2, 78% of the board) that stops 0.2 mm short of the castellation rings; the
  L3 entry traces run 0.3 mm over that edge strip. The analyzer's island count comes from its own
  connectivity graph treating the 32 half-hole rings on L2 as plane pieces.
* **RP-001 "missing stitching via at layer transition"**: the only layer transitions are the fan-out
  vias next to the SRAM pads and the entries; there is no room for a GND via per signal, and the
  plane is 0.1 mm away on L1's side.
* **DC-002 "no decoupling cap near U1"**: the caps are in the end strips (brief requirement), 2 mm
  from the SRAM body ends; the +5 V / GND plane pair under the chip is the high-frequency path.
* **TB-001 tombstoning risk (info)**: the cap GND pads go to a shared via through a short stub, the
  +5 V pads sit in the solid pour (solid connection, no thermal relief, because the end strip is too
  narrow for two spokes). Hot-air or reflow with a stencil; do not drag-solder the caps.
* **TE-001 / FD-001 / EP-AUD / IO-00x** (test points, fiducials, ESD, connector filtering): not
  applicable to a 11 x 28 mm interposer inside an ISA card.

### Acceptance checklist (from the brief)

- [x] ERC 0 errors, DRC 0 errors (0 warnings as well; analyzer warnings explained above)
- [x] analyze_schematic.py, analyze_pcb.py, cross_analysis.py, analyze_gerbers.py run; no single-pin nets, no unconnected pads except castellations 1 and 30 (JP2/JP1 open) and SRAM NC pins 19/36
- [x] every castellation 1-32 present, numbered 1 opposite 32, 1.27 mm pitch, 19.05 mm first-to-last (`BMDC3_SOJ32_Castellated`)
- [x] 36 SRAM pads, custom shortened footprint, 0.25 mm from every foreign-net castellation ring on L1
- [x] L2 unbroken GND plane; L1 +5 V pour connected to castellation 32 (via at 2.54, -8.89) and both VCC pins (solid connection)
- [x] four 0402 caps, two per end, each GND pad 0.82 mm from the shared L2 via at that end
- [x] address/data permutation table generated from the same file as the schematic labels
- [ ] board length <= CHIP_PITCH - 0.5 mm, width = ROW_PITCH + 0.4 **- waits for the measurements**
- [x] fab export against the JLCPCB rules in the `jlcpcb` skill (4-layer: 0.09 mm trace/space minimum vs 0.2/0.15 used, via 0.25/0.15 minimum vs 0.6/0.3, castellated hole >= 0.5 mm vs 0.6, hole-to-hole >= 0.5 vs 0.67, copper to edge >= 0.2 vs 0.25, silk >= 0.15 mm lines / 0.8 mm text) - tick "castellated holes" when ordering

### Open items before ordering

1. Measure ROW_PITCH, host pad size, CHIP_PITCH and END_CLEAR on the card; put them in
   `tools/params.py`; regenerate; re-run ERC/DRC and `tools/export_fab.sh`.
2. Meter check on the card: pin 30 (E2) tied to +5 V on all four sites; whether 68030 A19/A20 reach
   pads 30/1 (decides JP1/JP2).
3. The 36-SOJ J-leads overhang the castellation rings by ~0.5 mm at the outer bend; the rings are
   exposed copper 0.25 mm outside the pads under a mask dam. Solder the SRAM with a stencil-sized
   paste deposit on the pads only; excess paste can bridge the fillet to the ring.


## 10. Regenerating

```bash
cd hardware/bmdc_ram_interposer
# edit tools/params.py (measured ROW_PITCH, HOST_PAD_*, CHIP_PITCH, END_CLEAR, BOARD_LEN ...)
python3 tools/gen_footprints.py            # bmdc_interposer.pretty/
python3 tools/gen_symbols.py               # bmdc_interposer.kicad_sym
python3 tools/gen_schematic.py             # .kicad_sch, .kicad_pro, lib tables
python3 tools/build_pcb.py                 # .kicad_pcb (3-4 minutes, prints routing passes)
python3 tools/finalize_pcb.py              # stack-up block
kicad-cli sch erc --severity-all -o analysis/erc.rpt bmdc_ram_interposer.kicad_sch
kicad-cli pcb drc --severity-all --schematic-parity -o analysis/drc.rpt bmdc_ram_interposer.kicad_pcb
tools/export_fab.sh                        # fab/
```

The generators need KiCad 10 (`kicad-cli`, the `pcbnew` Python module) and numpy. The board is
rebuilt from scratch each time; hand edits to the .kicad_pcb are lost, so put changes into the
generators. Routing is deterministic for a given geometry.
