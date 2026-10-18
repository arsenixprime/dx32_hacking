# BMDCPRMS.INI: what every line does

`BMDCPRMS.INI` is a 36-line text file of **per-model parameter overrides**. Each `[section]`
names a machine model, a spindle option or a rotary-table option, and each line under it is
`<parameter number> <value>` in the numbering of `BMDCPRMS.SYS` and `BMDC_PARAM_TABLE.md`. A
section with no lines (most of the machine models) means "no overrides for this model". The
values are in the firmware's native units unless noted below (10 nm position units, units per
4 ms tick for rates; see `MOTION_PLANNER.md`).

**Who reads it is not in this repo.** None of `BXX.EXE`, `B3T.EXE` or `MAINTPG.EXE` contains the
file name, any section name, or any INI-parsing code; they only know `BMDCPRMS.SYS` and
`CFGPRMS.SYS`. The numbers and values are exactly the ones a setup program would need to patch
into `BMDCPRMS.SYS` for a chosen model, spindle and table, and the `BMDCPRMS.SYS` comments for
parameters 130-139 ("default to V2XT values ... may be updated from the parameter file") describe
that kind of workflow. TENTATIVE: it is the input to a factory or dealer installation utility
that was not shipped on this machine. The firmware never sees the file; it only sees whatever
ended up in `BMDCPRMS.SYS`.

## Machine-model sections

| Section | Lines | Effect |
|---------|-------|--------|
| `[VMC-760/16]` | none | no overrides |
| `[VMC-800/22]` | none | no overrides |
| `[VMC-1000/22]` | `18 101600000.0` | parameter 18, X positive travel limit = 101,600,000 units = 40.000 in. The VMC 1000 has 40 in of X; the base `BMDCPRMS.SYS` value is 56,388,000 (22.2 in, a VMC 760 class table) |
| `[TC-22]` | none | no overrides (this machine) |
| `[TC-30]` | none | no overrides |
| `[TC-1]` | none | no overrides |
| `[TC-2]` | `08 120227.0` | parameter 8, Z-axis traverse rate = 120,227 units/tick = 710 ipm (18.0 m/min). Base file: 50,800 = 300 ipm |
| `[TC-3]` | `20 50800000.0` | parameter 20, Y positive travel limit = 50,800,000 units = 20.000 in. Base file: 41,148,000 = 16.2 in |
| `[TC-4]` | `20 50800000.0` | same as TC-3 |

Where the firmware uses them:

- **17-20 travel limits** (0xfd8..0xfe4) are compared against the programmed end point by the
  block checker (0xebb6/0xec20), the interpreter's limit test (0x2321e/0x2324c) and the jog
  limiter (0x2c2d0/0x2c2fe). Exceeding one raises the travel-limit alarm before the move starts.
- **8 Z traverse** (0xfb8) is the rapid and feed cap for Z in the feedrate limiter at 0x16eac
  (`MOTION_PLANNER.md`, "caps from parameters 7/8/47"), the probe approach cap at 0x1ab7e, and
  the G0 planner at 0x22be2.

## Spindle sections

Each sets parameters 73, 74 and 75 (0xaf0c, 0xaf10, 0xaf14): spindle-motor maximum RPM, gear
range 1 maximum RPM and gear range 2 maximum RPM. The firmware uses 74 and 75 to pick the gear
range for a programmed S word and to scale the spindle DAC command within the range (0xe8be,
0x31074, 0x341b8, 0x34690, 0x34fec, 0x35d56 and neighbours); 73 is the absolute cap (0x35ffe).

| Section | 73 motor max | 74 range 1 max | 75 range 2 max | Notes |
|---------|-------------|----------------|----------------|-------|
| `[6K SPINDLE]` | 6000 | 1463 | 6000 | two-range head, low gear to 1463 rpm. Identical to the base `BMDCPRMS.SYS`, so this machine is a 6K two-range spindle |
| `[7.5K SPINDLE]` | 600 | 1825 | 7500 | `73 600.0` is almost certainly a typo for 6000 or 7500; as written the motor cap would be below range 1 |
| `[8K SPINDLE]` | 8000 | 8000 | 8000 | single range |
| `[10K SPINDLE]` | 10000 | 10000 | 10000 | single range |

With 74 = 75 the range-selection logic never asks for a gear change, which is how a direct-drive
head is expressed.

## Rotary-table section

`[10 INCH TABLE]` sets the C-axis (4th axis) parameters for the 10-inch rotary table option:

| Line | Parameter | Base file | Effect |
|------|-----------|-----------|--------|
| `44 12.0` | C-axis applied motor voltage (0x2a7c) | 256 | motor resistance × maximum current; used only by the PWM amplifier load integrator (0x17468, `BMDC_AXIS_OUTPUTS.md`) and defaulted to 120 at 0x121e6 |
| `47 1800.0` | C-axis traverse rate (0xfbc) | 30000 | cap for the C axis in the feedrate limiter at 0x16ed6 and the rotary planner at 0x1a304. 1800 units/tick is 1.8 deg/s (108 deg/min); the base 30000 is 1800 deg/min. TENTATIVE: the INI author may have written deg/min here, which would make it equal to the base value |
| `68 9` | C-axis servo gain (0x29c8) | 10 | output shift count in the servo loop (0x115b8); one less means twice the output per count of error |
| `117 400` | C-axis differential following-error gain (0x29a0) | 400 | derivative term at 0x114c8 |
| `122 25.0` | C-axis following-error gain (0x29b4) | 30 | proportional term at 0x114cc |
| `127 200.0` | maximum C-axis PWM deviation (0x29dc) | 200 | half-width of the PWM clamp window at 0x17244; PWMINT machines only |

Three of the six lines equal the base file (117, 127, and 47 if read as deg/min), so the section
appears to have been written against this same base and only re-tunes the gain and voltage
for the heavier table.

## Format notes

- Parameter numbers are written with a leading zero when below 10 (`08`, not `8`); values may
  be integer or carry a `.0`, with no visible rule (gains are integers, most others floats).
- Lines are CRLF. There are no comments, no `key=value` pairs and no global section.
- Nothing in the file mentions the AUF, TLAUF or the serial protocol; it only touches travel,
  rate, spindle and C-axis tuning parameters.

## Open items

- The program that consumes this file. Candidates outside the repo: a Bridgeport install or
  setup utility that writes `BMDCPRMS.SYS` from a base file plus these sections.
- Whether `47 1800.0` is in units/tick or deg/min, which decides if the 10-inch table section
  slows the C axis 16x or leaves it alone.
- Whether `73 600.0` in the 7.5K section is a typo in the shipped file.
