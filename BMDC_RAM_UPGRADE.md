# BMDC3 Main RAM: original parts, package, and the upgrade path

Source for the chip data: Motorola/Freescale datasheet **MCM6226BB/D** ("128K x 8 Bit Static
Random Access Memory", 8 pages). Board facts are from a BMDC3 photo (U8-U11) and the firmware
probe described in `PROTOCOL_NOTES.md` ("RAM and dual-port sizing at boot").

## What is fitted

| | |
|---|---|
| Positions | U8, U9, U10, U11 (one 32-bit bank, one chip per byte lane) |
| Part | **MCM6226BBXJ20** |
| Organisation | 128K x 8 (1,048,576 bit); 4 chips = 512 KB, which is what the firmware detects |
| Speed grade | 20 ns address/chip-enable access (family offers 15/17/20/25/35 ns) |
| Supply | 5 V; VOH 2.4 V at -4 mA; TTL inputs; 4-6 pF inputs, 5-8 pF controls/DQ |
| Active current | 165 mA max for the -20 grade (190/180/165/150/130 mA for 15/17/20/25/35 ns); AC standby 45 mA, CMOS standby 5 mA |
| Package | **XJ = 400-mil 32-lead SOJ, Motorola case 857A-02**. EJ = 300-mil 32-lead SOJ, case 857-02, is the other option for the same die and is what the inner outline on the board is for |

So the two outlines around each chip are both 32-lead; the inner one is the 300-mil variant of
the same 1 Mbit part. Neither is a footprint for a denser device.

## Pin assignment (32-lead SOJ, both widths)

JEDEC byte-wide ("evolutionary") pinout, corner power.

| pin | signal | pin | signal |
|---|---|---|---|
| 1 | **NC** | 32 | VCC |
| 2 | A16 | 31 | A15 |
| 3 | A14 | 30 | **E2** (chip enable, active HIGH) |
| 4 | A12 | 29 | W (write enable, active low) |
| 5 | A7 | 28 | A13 |
| 6 | A6 | 27 | A8 |
| 7 | A5 | 26 | A9 |
| 8 | A4 | 25 | A11 |
| 9 | A3 | 24 | G (output enable, active low) |
| 10 | A2 | 23 | A10 |
| 11 | A1 | 22 | **E1** (chip enable, active low) |
| 12 | A0 | 21 | DQ7 |
| 13 | DQ0 | 20 | DQ6 |
| 14 | DQ1 | 19 | DQ5 |
| 15 | DQ2 | 18 | DQ4 |
| 16 | VSS | 17 | DQ3 |

Truth table: not selected when E1 = H or E2 = L (both enables must be active); outputs disabled
when G = H; write when W = L. The datasheet treats E1 and E2 as one enable "E" of opposite
polarity. On the board, pin 30 is therefore either tied to +5 V or driven by the address decoder;
pin 1 is unused by the part. In the same JEDEC layout a 512K x 8 device uses **pin 1 = A18 and
pin 30 = A17**, and a 256K x 8 uses pin 30 = A17 with pin 1 NC.

Chip address A0-A16 correspond to 68030 A2-A18 (the four chips are byte lanes of a 32-bit word).
A17/A18 of a larger chip would therefore need 68030 **A19/A20**.

## Package dimensions, 400-mil SOJ (case 857A-02, controlling dimension inch)

| dim | mm min | mm max | inch min | inch max | what it is |
|---|---|---|---|---|---|
| A | 20.83 | 21.08 | 0.820 | 0.830 | body length (mold protrusion up to 0.15 mm per side not included) |
| B | 10.03 | 10.29 | 0.395 | 0.405 | body width |
| C | 3.26 | 3.75 | 0.128 | 0.148 | overall height, seating plane to top |
| D | 0.41 | 0.50 | 0.016 | 0.020 | lead width (32 places) |
| E | 2.24 | 2.48 | 0.088 | 0.098 | body thickness |
| F | 0.67 | 0.81 | 0.026 | 0.032 | J-lead foot length under the body (32 places) |
| G | 1.27 BSC | | 0.050 BSC | | **lead pitch** |
| K | 0.89 | 1.14 | 0.035 | 0.045 | standoff, board to body |
| L | 0.64 BSC | | 0.025 BSC | | end lead to body-end reference (half pitch) |
| N | 0.76 | 1.14 | 0.030 | 0.045 | lead emergence to body edge |
| P | 11.05 | 11.30 | 0.435 | 0.445 | **overall width across the leads** |
| R | 9.27 | 9.52 | 0.365 | 0.375 | **span between the J-lead contact points** (inner) |
| S | 0.77 | 1.01 | 0.030 | 0.040 | J-lead bend radius |

Derived land pattern (the one the board carries for the outer outline):

* two rows of 16 pads, 1.27 mm pitch, 15 x 1.27 = 19.05 mm from first to last pad centre
* row-to-row pad centre spacing about 10.3 mm (midway between R and P), pads roughly
  0.6 x 2.0 mm so they cover 9.0 to 11.5 mm across
* the leads tuck under the body: nothing extends beyond P = 11.3 mm wide or A = 21.1 mm long

## Package dimensions, 300-mil SOJ (case 857-02), for the inner outline

Same A, B(~7.6 mm), C, D, E, G, K as above except for the width-related dimensions:

| dim | mm min | mm max | inch min | inch max |
|---|---|---|---|---|
| P (overall width) | 8.38 | 8.64 | 0.330 | 0.340 |
| R (contact span) | 6.60 | 6.86 | 0.260 | 0.270 |
| N | 0.76 | 1.14 | 0.030 | 0.045 |
| S | 0.77 | 1.01 | 0.030 | 0.040 |

Pad rows about 7.6 mm apart.

## The 36-lead 400-mil SOJ used by 512K x 8 fast SRAM (MCM6246, CY7C1049G, AS7C4096A, K6R4008C1D)

Same width family (body ~10.16 mm, overall across leads ~11.2 mm, contact span ~9.4 mm, pitch
1.27 mm) but 18 leads per side and a body about **23.4 to 23.6 mm** long (0.920-0.930 in).
Pinout is the JEDEC centre-power one and differs completely from the 32-lead layout
(CY7C1049G, single-CE variant: 1-5 A0-A4, 6 CE, 7-8 I/O0-1, 9 VCC, 10 GND, 11-12 I/O2-3, 13 WE,
14-18 A5-A9, 19 NC, 20-24 A10-A14, 25-26 I/O4-5, 27 VCC, 28 GND, 29-30 I/O6-7, 31 OE, 32-35
A15-A18, 36 NC). No 5 V part rated 20 ns or faster exists in the 32-lead layout; the
32-lead 5 V 512K x 8 parts are 25 ns in SOP/TSOP-II (ISSI IS61C5128AS-25) or 55-70 ns.

## Upgrade plan (castellated adapter, 2 MB)

> **Status (2026-10-16):** the adapter is designed as `hardware/bmdc_ram_interposer/` (rev A, see its README).
> The plan below is the original sketch; the implemented board follows the interposer prompt instead: pad rows taken
> as 450 mil (11.43 mm) apart, board 11.83 x 27.6 mm with the caps, solder jumpers and wire pads in the strips beyond
> the SRAM body ends, addresses/data permuted for routability (net tables in the interposer README). The row pitch,
> host pad size, chip-to-chip pitch and end clearance are still unmeasured; the E2 tie and whether A19/A20 reach pads
> 30/1 still need a meter check on the card (step 4 below and interposer README section 9, open items).

1. **Adapter PCB** per chip: ~10.6-11.0 mm wide, >= 23 mm long, 16 castellations per long edge at
   1.27 mm pitch landing on the 400-mil pad rows (10.3 mm apart). It overhangs the 32-pad field
   by about 1 mm at each end, so measure the chip-to-chip gap on the board (needs >= 2.5 mm).
   Top side carries the 36-lead SOJ; the board remaps 36-pin centre-power signals to the
   32-pin byte-wide castellations: CE -> 22, OE -> 24, WE -> 29, VCC -> 32, GND -> 16, data and
   A0-A16 per the tables above.
2. **A17/A18** go to two wire pads on the adapter, bussed by jumper wires to 68030 A19/A20.
   Leave castellations 1 and 30 unconnected unless the board is verified to carry A20/A19 there
   (pin 30 currently carries E2; cutting or ignoring it is only safe if E1 alone selects the bank).
3. **Firmware**: `python3 tools/patch_bmdc_ram.py BMDC.BIN BMDC_2MB.BIN --max 16M`. Patch A skips
   the class-0..3 ">512 KB" halt, patch B lets the probe run past 1 MB. After boot the long at
   0xAFA8 should read 0x1FFFFC; the part-program buffer is then 0x4E000-0x1FFFFC (~1.7 MB).
4. **Before buying anything** test the address decoder with the present chips: through the ISA
   window (ports 0x1A4/0x1A6 = longword address in 9+9 bits, data at 0x1AA then 0x1A8) write a
   longword at 68030 byte address 0xCE000 and read 0x4E000. If the value appears there the PAL
   ignores A19 and the bank select already covers the upper space; if not, the PAL decodes A19
   and the upgrade is blocked without PAL changes.

**Maximum**: 4 x 512K x 8 = 2 MB. Nothing larger exists as a 5 V fast part in a 36-lead SOJ, and
the firmware's PC-side window reaches only the first 1 MB anyway (which does not matter, since
the PC never accesses the program buffer directly).

**No-hardware alternative**: BXX's DNC mode ("SET DNC", "RUN from DISK", firmware command 0x23
`wrDNCpgmBlk`) streams a program through dual-port RAM and bypasses the part-program buffer.
