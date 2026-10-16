# Prompt: BMDC3 SRAM interposer PCB (32-lead SOJ site -> 36-lead SOJ 512K x 8)

Copy everything below the line into a Claude Code session started in the directory where the
hardware project should live (a sibling directory of this repo is fine). The session needs
KiCad 10 (`kicad-cli` 10.0.6 is installed here) and the **kicad-happy** plugin (skills `kicad`,
`jlcpcb`, `pcbway`, `digikey`, `datasheets`, `bom`). Background for every number in this prompt is
in `BMDC_RAM_UPGRADE.md` in this repo; read it first if anything is unclear.

---

## Task

Design and lay out, in KiCad 10, a castellated interposer PCB that lets a **36-lead 400-mil SOJ
512K x 8 SRAM** (reference part **Infineon/Cypress CY7C1049G-10VXI**, 5 V, 10 ns) be fitted on the
**32-lead wide SOJ site** of a Bridgeport BMDC3 motion-controller ISA card. Four interposers
replace the four fitted MCM6226BBXJ20 (128K x 8) chips, U8-U11, taking the card from 512 KB to
2 MB. The host card cannot be modified beyond swapping the chips and adding jumper wires; its
PAL address decoder cannot be changed.

Use the kicad-happy skills throughout: `kicad` for schematic/PCB/gerber analysis and the final
design review, `digikey` (or `element14`/`mouser`) to fetch and `datasheets` to extract the
CY7C1049G datasheet so the pinout below is verified rather than trusted, and `jlcpcb` (fallback
`pcbway`) for the 4-layer and castellated-edge design rules and for the fabrication export.

## Hard requirements

1. **4-layer board.** L1 (top): component side, solid **+5 V pour**. L2: solid **GND plane**
   directly under it. L3: signal routing. L4 (bottom): castellation lands and the remaining
   signal routing. Nothing is mounted on L4; the bottom face sits flat on the host card.
2. **Decoupling: two 0402 capacitors at each end of the SRAM** (four total), between +5 V and GND.
   Use 100 nF X7R 0402 (16 V or better) for all four unless the datasheet asks for something else.
   Put them on L1 beyond the ends of the SOJ body, with the shortest possible path to the pour and
   the plane (via to L2 right at the GND pad).
   Fallback only if the length budget in "Mechanical" cannot be met: place them on L1 **under the
   SOJ body** between the pad rows (SOJ standoff K = 0.89-1.14 mm; a 0402 is <= 0.6 mm tall) and
   say so in the README.
3. **Bottom interface = the host's 32-lead wide SOJ land pattern**, reproduced as
   **castellated half-holes on the two long edges**, 16 per edge, 1.27 mm pitch, numbered 1-32
   in the JEDEC SOJ-32 order (pin 1 at one end of edge A, 1-16 down edge A, 17-32 back up edge B,
   so 32 is opposite 1).
4. **Top interface = 36-lead 400-mil SOJ** (JEDEC MS-027 variation AE; KiCad's stock
   `Package_SO:SOJ-36_10.16x23.495mm_P1.27mm` is the right body but its pads are too long for
   this board, see "Mechanical"). The chip is centred on the board, long axis along the board.
5. Every net is named after the **host** signal it carries (`A0`..`A16`, `DQ0`..`DQ7`, `~CE1`,
   `~OE`, `~WE`, `+5V`, `GND`) plus `A17`, `A18` for the two new address bits.
6. ERC and DRC clean with `kicad-cli`, then clean through the kicad-happy analyzers, then gerbers
   exported and re-analysed. Deliverables are listed at the end.

## Board-side (host) pinout: 32-lead SOJ, JEDEC byte-wide, as the card uses it

| pin | signal | pin | signal |
|-----|--------|-----|--------|
| 1 | NC (A18 on a 512K x 8 in this layout) | 32 | VCC (+5 V) |
| 2 | A16 | 31 | A15 |
| 3 | A14 | 30 | E2, chip enable active HIGH (A17 on a 512K x 8 in this layout) |
| 4 | A12 | 29 | ~W (write enable) |
| 5 | A7 | 28 | A13 |
| 6 | A6 | 27 | A8 |
| 7 | A5 | 26 | A9 |
| 8 | A4 | 25 | A11 |
| 9 | A3 | 24 | ~G (output enable) |
| 10 | A2 | 23 | A10 |
| 11 | A1 | 22 | ~E1 (chip enable active low) |
| 12 | A0 | 21 | DQ7 |
| 13 | DQ0 | 20 | DQ6 |
| 14 | DQ1 | 19 | DQ5 |
| 15 | DQ2 | 18 | DQ4 |
| 16 | VSS (GND) | 17 | DQ3 |

Chip A0-A16 are 68030 A2-A18 (the four chips are the four byte lanes of a 32-bit word). The two
extra bits of a 512K x 8 part must come from 68030 **A19 and A20**, which do *not* reach the SOJ
site unless the card happens to route them to pads 30 and 1 (unknown; see jumpers below).

## Chip-side pinout: CY7C1049G, 36-lead SOJ (JEDEC centre-power) - VERIFY against the datasheet

| pin | signal | pin | signal |
|-----|--------|-----|--------|
| 1 | A0 | 36 | NC |
| 2 | A1 | 35 | A18 |
| 3 | A2 | 34 | A17 |
| 4 | A3 | 33 | A16 |
| 5 | A4 | 32 | A15 |
| 6 | ~CE | 31 | ~OE |
| 7 | I/O0 | 30 | I/O7 |
| 8 | I/O1 | 29 | I/O6 |
| 9 | VCC | 28 | GND |
| 10 | GND | 27 | VCC |
| 11 | I/O2 | 26 | I/O5 |
| 12 | I/O3 | 25 | I/O4 |
| 13 | ~WE | 24 | A14 |
| 14 | A5 | 23 | A13 |
| 15 | A6 | 22 | A12 |
| 16 | A7 | 21 | A11 |
| 17 | A8 | 20 | A10 |
| 18 | A9 | 19 | NC |

KiCad 10's stock symbol `Memory_RAM:IS61C5128AL-10KLI` has exactly this pin numbering (it is the
same JEDEC 36-SOJ 512K x 8 layout); reuse it, duplicated into a project library and renamed
`CY7C1049G-10VXI` with the correct datasheet URL and MPN fields, rather than drawing a new one.

## Net assignment rules (this is what makes the board routable)

* **Address lines may be permuted freely and data lines may be permuted freely.** An SRAM does
  not care which host address bit drives which chip address pin, or which host data bit lands on
  which chip I/O pin, as long as the mapping is fixed. Writes and reads go through the same
  permutation so it is invisible to the firmware. Use this to minimise crossings: assign each
  host address castellation to the nearest free chip address pin on the same edge, likewise for
  data. Do **not** permute control lines or power.
* Controls are fixed: host 22 ~E1 -> chip ~CE (6); host 24 ~G -> chip ~OE (31); host 29 ~W ->
  chip ~WE (13). Host 32 -> +5 V pour -> chip 9 and 27. Host 16 -> GND plane -> chip 10 and 28.
* Two chip address pins are left over (by default chip 34 = A17 and chip 35 = A18, at the far
  end of edge B, next to host pads 30 and 32). Bring each to a **wire pad** on L1 (SMD only, no
  hole, about 1.5 x 1.0 mm, labelled `A17` and `A18` on silk) so the user can run 30 AWG wire to
  68030 A19/A20 on the card. Also add two **open solder jumpers** (`Jumper:SolderJumper-2_P1.3mm_
  Open_Pad1.0x1.5mm`): JP1 bridges `A17` to castellation 30, JP2 bridges `A18` to castellation 1.
  They stay open unless the user verifies the card drives A19/A20 on those pads. Castellations 1
  and 30 have no other connection. (Host pin 30 is E2 today, active-high enable; the design
  assumes it is tied high on the card. If it turns out to be a decode term from the PAL the
  interposer would need an extra gate, which is out of scope; note this risk in the README.)
* Keep the mapping in one place: a table in the README and matching net labels in the schematic.

### Geometry you can use for the assignment

With the chip centred over the 32-pad field, chip pin j on edge A sits at position j (1..18,
in 1.27 mm steps from the board end), host castellation k on edge A sits at position k+1
(host 1 under chip 2, host 16 under chip 17; chip pins 1 and 18 overhang the field by one pitch).
On edge B, chip pin j sits at position 37-j and host pin k at position 34-k (host 32 under
chip 35, host 17 under chip 20; chip 19 and 36 overhang).

A starting assignment that needs only four board-crossing traces (CE, WE, one address, one data):

| host (edge A) | chip | | host (edge B) | chip |
|---|---|---|---|---|
| 1 NC | JP2 -> A18 (35) | | 17 DQ3 | 7 I/O0 (crosses from edge A) |
| 2 A16 | 1 A0 | | 18 DQ4 | 30 I/O7 |
| 3 A14 | 2 A1 | | 19 DQ5 | 29 I/O6 |
| 4 A12 | 3 A2 | | 20 DQ6 | 26 I/O5 |
| 5 A7 | 4 A3 | | 21 DQ7 | 25 I/O4 |
| 6 A6 | 5 A4 | | 22 ~E1 | 6 ~CE (crosses from edge A) |
| 7 A5 | 14 A5 | | 23 A10 | 21 A11 |
| 8 A4 | 15 A6 | | 24 ~G | 31 ~OE |
| 9 A3 | 16 A7 | | 25 A11 | 22 A12 |
| 10 A2 | 17 A8 | | 26 A9 | 23 A13 |
| 11 A1 | 18 A9 | | 27 A8 | 20 A10 |
| 12 A0 | 24 A14 (crosses from edge B, straight across) | | 28 A13 | 32 A15 |
| 13 DQ0 | 11 I/O2 | | 29 ~W | 13 ~WE (crosses from edge A) |
| 14 DQ1 | 12 I/O3 | | 30 E2 | JP1 -> A17 (34) |
| 15 DQ2 | 8 I/O1 | | 31 A15 | 33 A16 |
| 16 VSS | GND plane (10, 28) | | 32 VCC | +5 V pour (9, 27) |

On each edge the address group runs one way along the edge and the data group the other way, so
put one group on L3 and the other on L4 and they never cross. You may re-permute within the
address and data classes if it routes better; keep the README table in sync.

## Mechanical

**Parameters to confirm by measurement on the card before layout.** Put them at the top of the
footprint generator (below) and in the README with their status, and do not finalise gerbers
until the user has confirmed them:

| name | nominal | what it is |
|---|---|---|
| `ROW_PITCH` | **11.43 mm (450 mil)** per the user | centre-to-centre distance between the two rows of host pads on the wide 32-pad outline |
| `HOST_PAD_LEN`, `HOST_PAD_W` | ~2.0 x 0.6 mm | host pad size (along the row pitch direction x along the edge) |
| `HOST_PAD_OUTER` | ROW_PITCH/2 + HOST_PAD_LEN/2 | how far the host pad copper extends from the chip centreline |
| `CHIP_PITCH` | unknown | centre-to-centre spacing of U8/U9/U10/U11 along the row of chips |
| `END_CLEAR` | unknown | free distance from the end of the 32-pad field to the nearest component or tall part at each end |

The 400-mil SOJ in `BMDC_RAM_UPGRADE.md` would give rows about 10.3 mm apart, so the 450-mil
figure means the wide outline is probably a gull-wing SOP land. Design to the measured values.

* **Width** = `ROW_PITCH` (+0 to +0.5 mm), chosen so each castellation half-hole sits on the
  outer half of its host pad and leaves at least 0.3 mm of host pad outside the board edge for
  the fillet. Nominal 11.4-11.9 mm.
* **Length**: 36-lead SOJ body is 23.4-23.6 mm (18 x 1.27 = 22.86 mm pad span). Board length =
  body + room for the end capacitors, nominal 26-27 mm, and must be <= `CHIP_PITCH` - 0.5 mm and
  must not collide with anything within `END_CLEAR` of the pad field. The castellation field
  (19.05 mm first-to-last) is centred on the board.
* **Castellations**: plated holes 0.6 mm (confirm the fab's minimum castellation drill with the
  `jlcpcb` skill), centred exactly on the board edge, with an inward L4 land about 1.2 x 0.7 mm
  so there is copper to solder to after the edge is routed. Mark "castellated holes" in the fab
  options. No V-score; mousebites on the short ends only if panelised.
* **The clearance problem to solve explicitly**: the castellation annular rings exist on L1
  too, directly under the ends of the chip pads on the same edge, and most of them carry a
  different net from the pad above them. Do the arithmetic with the measured `ROW_PITCH`:
  hole radius 0.3 + annular ring 0.15 reaches (width/2 - 0.45) inward; the chip pad outer end
  must stay >= 0.2 mm inside that (JLCPCB 4-layer minimum copper spacing is 0.09 mm, use 0.2).
  With the stock SOJ-36 footprint the pads run from 3.875 to 6.025 mm from centre, which is too
  far. Make a **custom SOJ-36 footprint** with pads shortened on the outside: J-lead contact
  point is at ±4.7 mm (contact span R ~ 9.4 mm); pads of 1.2 x 0.6 mm centred at ±4.4 mm (copper
  3.8-5.0 mm) keep the contact point on the pad with 0.3 mm of outer fillet. If the measured
  `ROW_PITCH` lets the board be wider, lengthen the pads outward again up to the stock 6.0 mm.
  Where the castellation and the pad above it carry the same net they may merge.
  Alternatively or additionally, remove unused copper on the castellation pads on inner layers
  (KiCad pad property "remove unused layers"); do not remove it on L1 unless the `jlcpcb` skill
  confirms single-sided castellation copper is accepted.
* **Stack-up**: JLCPCB JLC04161H-3313 (thin L1-L2 prepreg, maximises the +5 V / GND interplane
  capacitance) or the standard 7628 stack if 3313 is unavailable. **Thickness 1.0 mm** (keeps the
  stack height down: card + interposer + SOJ must still clear the neighbouring ISA slot).
  ENIG finish (castellations and the 1.27 mm pitch chip pads solder better than with HASL).
* **Vias**: 0.3 mm drill / 0.6 mm pad, no via-in-pad on the chip pads (use a short stub to a via
  between pads or inboard). GND pads of the chip and the caps get a via to L2 within 1 mm.
* **L4 copper**: only the castellation lands and the traces you need. Everything on L4 is
  soldermask-covered except the lands; no L4 silk; the host card has traces and mask under the
  chip site and the interposer sits on them.
* **Silk (L1)**: reference `U1`, pin-1 marker for the chip, pin-1 marker for castellation 1,
  `A17`/`A18`/`JP1`/`JP2` labels, "BMDC3 2MB" and a revision.
* 5 V pour on L1 everywhere not used by pads/traces, stitched to the castellation 32 land and to
  chip pins 9 and 27; GND plane on L2 unbroken, connected to castellation 16, chip 10/28, cap
  GND pads.

## Build it parametrically

Write a small Python generator (`tools/gen_footprints.py`, plain s-expression output, no KiCad
Python bindings needed) that emits the project footprint library `bmdc_interposer.pretty` from
the parameters above: the castellated SOJ-32 land, the shortened SOJ-36, and the wire pad. Any
change to a measured value is then a regenerate, not a hand edit. Put the board outline in the
PCB from the same parameters (a comment in the generator with the formula is enough).

If you generate `.kicad_sch`/`.kicad_pcb` text directly instead of through the GUI: keep symbol
origins on the 1.27 mm grid, end wires exactly on pin ends, embed `lib_symbols` copied from the
installed KiCad 10 libraries, and write symbol instance paths `/<root-uuid>`. Validate with
`kicad-cli sch erc --severity-all` and `kicad-cli pcb drc --severity-all` and fix every item.

## Deliverables

```
bmdc_ram_interposer/
  bmdc_ram_interposer.kicad_pro / .kicad_sch / .kicad_pcb
  bmdc_interposer.pretty/               generated footprints
  bmdc_interposer.kicad_sym             CY7C1049G-10VXI (copied from IS61C5128AL-10KLI)
  tools/gen_footprints.py
  datasheets/                           CY7C1049G (fetched via digikey/element14 skill)
  analysis/                             kicad-happy analyzer JSON + text reports
  fab/                                  gerbers, drill, pick-and-place, BOM (jlcpcb skill export),
                                        3D render / SVG of top and bottom
  README.md
```

README must contain: the measurement table with status (nominal / confirmed), the final
host<->chip net table, the jumper policy (JP1/JP2 open by default; the ISA-window aliasing test
from `BMDC_RAM_UPGRADE.md` decides whether A19/A20 are even decoded), the E2 assumption and its
risk, BOM with MPNs (CY7C1049G-10VXI, caps), fab options (4-layer, 1.0 mm, ENIG, castellated
holes), the clearance arithmetic you used for the pad/castellation spacing, and assembly order
(reflow or hot-air the SOJ and caps on the interposer first, then solder the castellations to
the card by hand with the card flat; firmware must be patched with `tools/patch_bmdc_ram.py
--max 16M` before the card will boot with more than 512 KB).

## Acceptance checklist

- [ ] ERC 0 errors, DRC 0 errors (warnings explained in README)
- [ ] `analyze_schematic.py`, `analyze_pcb.py`, `cross_analysis.py`, `analyze_gerbers.py` run;
      no single-pin nets, no unconnected pads except castellations 1 and 30 (documented)
- [ ] every castellation 1-32 present, correct numbering direction (1 opposite 32), 1.27 mm
      pitch, 19.05 mm first-to-last
- [ ] 36 chip pads present, custom shortened footprint, >= 0.2 mm to every foreign-net
      castellation ring on L1
- [ ] L2 unbroken GND, L1 +5 V pour connected to castellation 32 and both VCC pins
- [ ] four 0402 caps, two per end, each GND pad within 1 mm of an L2 via
- [ ] address/data permutation table in README matches the schematic net labels
- [ ] board length <= `CHIP_PITCH` - 0.5 mm once measured; width = `ROW_PITCH` (+0..0.5)
- [ ] fab export passes the `jlcpcb` skill's DFM check with castellated holes enabled
