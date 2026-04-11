# AUF Packet Format (18 inputs, 4 AC + 7 DC outputs, TLAUF 7+6)

## AUF Physical I/O (from schematic)

### 24x 24VDC Inputs (MAINTPG verified — VMC)

| Terminal | Function | BMDC Param.Bit | Short RX Nibble | Status |
|----------|----------|----------------|-----------------|--------|
| I0 | (spare) | N/C | — | N/A |
| I1 | Rotary Axis Active | p154.b2 | n4.1 | CONFIRMED |
| I2 | Perimeter Door | p154.b3 INV | n4.2 | CONFIRMED |
| I3 | Index In (Inhibit) | p156.b2 INV | n4.3 | CONFIRMED |
| I4 | Index Out (Reset) | p156.b3 INV | n3.0 | CONFIRMED |
| I5 | Rotary Table Brake | p154.b1 | n3.1 | CONFIRMED |
| I6 | Low Gear Switch | p164.b5 | nibbles 5-6? | MAINTPG |
| I7 | A Axis Home | p155.b3 | n3.3 | CONFIRMED |
| I8 | Z Home | p155.b2 INV | n2.0 | CONFIRMED |
| I9 | (spare) | N/C | — | N/A |
| I10 | Y Home | p155.b1 INV | n2.2 | CONFIRMED |
| I11 | Y Axis Limit | p151.b1 | n2.3 | CONFIRMED |
| I12 | X Home | p155.b0 INV | n1.0 | CONFIRMED |
| I13 | (N/C on VMC, X Axis Limit on EXP/TOR) | p151.b0 | n1.1 | CONFIRMED |
| I14 | High Gear Switch | p164.b6 INV | nibbles 5-6? | MAINTPG |
| I15 | Z Axis Limit | p151.b2 | n1.3 | CONFIRMED |
| I16 | Xmsn Shot Pin Switch | p164.b7 INV | nibbles 5-6? | MAINTPG |
| I17 | Spindle Motor Overload | p152.b1 | n0.1 | CONFIRMED |
| I18 | Low Lube | p156.b1 | n0.2 | CONFIRMED |
| I19 | E-Stop Input | p152.b0 | n0.3 | CONFIRMED |
| I20 | Low Air | p156.b0 | n4.0 | CONFIRMED |

18 connected, 3 spare (I0, I9, I13-on-VMC). 15 fully confirmed with nibble positions. 3 (I6, I14, I16) identified via MAINTPG but nibble position unknown — these are spindle gear switches (param 164) likely carried in nibbles 5-6 or long RX.

**Param 156 byte-level numbering:** MAINTPG uses byte-level bit numbering for 16-bit params. For param 156 (Option Status Word), MAINTPG b0-b7 = MSB byte at 0x31e6 = DAT b8-b15. So MAINTPG b0 = Low Air (DAT b8), b1 = Low Lube (DAT b9), b2 = Index In (DAT b10), b3 = Index Out (DAT b11).

### 4x 115V AC Outputs (MAINTPG verified — VMC)

| Terminal | Function | BMDC Param.Bit | Status |
|----------|----------|----------------|--------|
| AC Out 1 | Index Solenoid | p161.b4 INV (DAT b12 = Indexer) | CONFIRMED |
| AC Out 2 | Lube Motor | p161.b1 INV (DAT b9 = Lube Pump) | CONFIRMED |
| AC Out 3 | Mist Coolant | p161.b2 INV (DAT b10 = Mist) | CONFIRMED |
| AC Out 4 | Flood Coolant | p161.b3 INV (DAT b11 = Flood) | CONFIRMED |

All 4 AC outputs confirmed. Param 161 (Option Command Word) also uses byte-level numbering: MAINTPG b0-b7 = MSB byte = DAT b8-b15.

### 9x 24V DC Outputs (Low Side Drive — MAINTPG verified)

| Terminal | Function | BMDC Param.Bit | Status |
|----------|----------|----------------|--------|
| DCOUT0 | Z Axis Brake | not in MAINTPG | unknown (may be direct BMDC output) |
| DCOUT1 | Xmsn Shot Pin | p163.b0 INV | CONFIRMED |
| DCOUT2 | Spindle Safe Light | p163.b14 INV | CONFIRMED |
| DCOUT3 | Low Gear Solenoid | p163.b1 INV | CONFIRMED |
| DCOUT4 | A Axis Brake Solenoid | p160.b1 (Release Brake) | CONFIRMED |
| DCOUT5 | Door Shot Pin | p160.b2 INV (Door Guard Shot-Pin) | CONFIRMED |
| DCOUT6 | Spindle Drive Enable | p163.b8 INV | MAINTPG (schematic says "not populated") |
| DCOUT7 | Limit Override | p160.b7 INV | MAINTPG |
| DCOUT8 | (not populated) | — | N/A |

5 DC outputs fully confirmed (DCOUT1-5). DCOUT0 not in MAINTPG AUF DC table — Z Axis Brake may be a direct BMDC card output. DCOUT6 (Spindle Drive) and DCOUT7 (Limit Override) from MAINTPG but need physical verification.

---

## Machine Configuration (from BMDCPRMS.SYS)

```
Master Parameter (param 98): 555880992 = 0x21221220
  Family (bits 31:28):     2  → FUN_0001272e I/O dispatch (NOT FUN_000128ae)
  Spindle Type (bits 27:24): 1  → selects FUN_00036ad8 for TLAUF mapping
  Species (bits 19:16):   2  → selects FUN_00014f9e for AUF I/O mapping
  Spindle Feedback:        2
  Spindle Power Fb:        1

Feature flags (bytes of master param, big-endian):
  c544 = 0x21, c545 = 0x22, c546 = 0x12, c547 = 0x20

Tool Changer (param 91): 9
  Type:     Motor-Arm 'Discovery' (TT=01)
  Polarity: Active High (P=1)
  Tools:    22 (param 90)
  Orient:   177091 CUMs (param 92)
  Z offset: -11255375 CUMs (param 93)
  Carousel delay: 25 × 8.89ms = 222ms (param 96)

Spindle: 2-speed gear
  Motor max:   6000 RPM (param 73)
  Low gear:    1463 RPM max (param 74)
  High gear:   6000 RPM max (param 75)
  Shift speed: 15 RPM (param 49)

4th Axis (C): velocity gain = 0 → not installed
```

---

## Packet Types Summary

The AUF communicates using two packet types on UART Port A (sync '#' and ')'):

| Direction | Sync | Total Bytes | Data Nibbles | Payload Bits | Content |
|-----------|------|-------------|-------------|-------------|---------|
| BMDC → AUF (short) | `'#'` (0x23) | 5 | 3 | 12 | Command/output control |
| AUF → BMDC (short) | `'#'` (0x23) | 9 | 7 | 28 | Status/input response |
| BMDC → AUF (long)  | `')'` (0x29) | 18 | 16 | 64 | Extended output data (8 bytes) |
| AUF → BMDC (long)  | `')'` (0x29) | 18 | 16 | 64 | Extended input data (8 bytes) |

All nibbles are hex-encoded ASCII: `'0'-'9'` (0x30-0x39) or `'a'-'f'` (0x61-0x66).
Checksum: `(sum_of_data_nibbles & 0x0F) + 0x40`

---

## Communication Cycle (Mode 0: AUF + TLAUF)

Each complete cycle, run once per servo period, executes these steps:

```
Step 0: TX short '#' to AUF          (a5=0x3064, 3 nibbles → 12 bits output)
Step 1: TX short '&' to TLAUF         (a5=0x308f, 3 nibbles → 12 bits output)
Step 2: RX short '#' from AUF         (a5=0x305d, 7 nibbles → 28 bits input)
Step 3: RX short '&' from TLAUF       (a5=0x3088, 7 nibbles → 28 bits input)
Step 4: TX long  ')' to AUF           (a5=0x3077, 16 nibbles → 64 bits output)
Step 5: Process inputs (FUN_000124bc)
Step 6: Process encode (FUN_00013e42)
Step 7: Nibble encode (FUN_00012592)  — encodes _DAT_00003218 → 0x3077
Step 8: RX long  ')' from AUF         (a5=0x3067, 16 nibbles → 64 bits input)
```

---

## Long TX Packet: BMDC → AUF (')', 18 bytes) — Primary Output Path

### Wire Format
```
Byte 0:  ')' (0x29) — sync
Byte 1:  hi nibble of _DAT_00003218[7] (MSB)     ← _DAT_0000321f
Byte 2:  lo nibble of _DAT_00003218[7]
Byte 3:  hi nibble of _DAT_00003218[6]            ← _DAT_0000321e
Byte 4:  lo nibble of _DAT_00003218[6]
Byte 5:  hi nibble of _DAT_00003218[5]            ← _DAT_0000321d
Byte 6:  lo nibble of _DAT_00003218[5]
Byte 7:  hi nibble of _DAT_00003218[4]            ← _DAT_0000321c
Byte 8:  lo nibble of _DAT_00003218[4]
Byte 9:  hi nibble of _DAT_00003218[3]            ← _DAT_0000321b
Byte 10: lo nibble of _DAT_00003218[3]
Byte 11: hi nibble of _DAT_00003218[2]            ← _DAT_0000321a
Byte 12: lo nibble of _DAT_00003218[2]
Byte 13: hi nibble of _DAT_00003218[1]            ← _DAT_00003219
Byte 14: lo nibble of _DAT_00003218[1]
Byte 15: hi nibble of _DAT_00003218[0]            ← _DAT_00003218
Byte 16: lo nibble of _DAT_00003218[0]
Byte 17: checksum
```

Data source: 16 nibbles at `0x3077`-`0x3086`, encoded from `_DAT_00003218` (8 bytes) by `FUN_00012592`.

### Long TX Data Content (`_DAT_00003218`, 8 bytes = 64 bits)

```c
_DAT_00003218 = _DAT_000031f4;    // Primary 32-bit output word (lines 3479, 3688, etc.)
_DAT_0000321c = DAT_000031f0;     // Secondary 32-bit word (line 14737)
```

| Bytes in `_DAT_00003218` | Source | Content |
|--------------------------|--------|---------|
| [0..3] (0x3218-0x321b) | `_DAT_000031f4` | Primary output word — AUF output control bits |
| [4..7] (0x321c-0x321f) | `DAT_000031f0` | Secondary output word — additional data |

### Primary Output Word (`_DAT_000031f4`) — AUF Output Bit Map

**Machine config:** Master Parameter 0x21221220 → Feature flags c545=0x22, c546=0x12, c547=0x20.
TLAUF mapping: FUN_00036ad8 (Spindle Type=1), which only maps 2 bits (0 and 1).

The mapping from long TX bit positions to physical output terminals is not yet fully traced. The earlier proposed DCOUT0→bit0 sequential mapping is wrong because bits 2-4 are never driven in the long TX, yet DCOUT2/3/4 are populated. The MAINTPG table (see top of document) identifies which param bits control which physical outputs, but the mapping from long TX word bits → param bits → physical outputs has not been fully traced through the firmware encode logic (FUN_00013e42).

**Bits actively driven in long TX for this machine:**

| Bit | Mask | Firmware Source | Active? | Notes |
|-----|------|----------------|---------|-------|
| 0 | 0x01 | DAT_00003250 bit 6 | Always 0 | FUN_00036ad8; bit 6 never set |
| 1 | 0x02 | DAT_00003250 bit 0 | **YES** | FUN_00036ad8 (tool change) |
| 2 | 0x04 | — | **NO** | Not driven for Spindle Type 1 |
| 3 | 0x08 | — | **NO** | Not driven for Spindle Type 1 |
| 4 | 0x10 | — | **NO** | Not driven for Spindle Type 1 |
| 5 | 0x20 | DAT_000031ef bit 0 | **YES** | c545 & 2 = TRUE |
| 6 | 0x40 | DAT_000031ee bit 1 | **YES** | c547 & 0x20 = TRUE |
| 7 | 0x80 | DAT_000031ef bit 1 | **YES** | c545 & 2 = TRUE |
| 8 | 0x100 | DAT_000031ed bit 2 | **NO** | c547 & 0x40 = FALSE |
| 9 | 0x200 | DAT_000031ed bit 1 | **NO** | c547 & 0x80 = FALSE |
| 10 | 0x400 | DAT_000031ee bit 2 | **NO** | c546 & 1 = FALSE |
| 11 | 0x800 | DAT_000031ee bit 3 | **NO** | c546 & 1 = FALSE |
| 12 | 0x1000 | DAT_000031ee bit 5 | **YES** | c546 & 2 = TRUE |
| 13 | 0x2000 | DAT_000031ee bit 6 | **YES** | c546 & 2 = TRUE |
| 14 | 0x4000 | DAT_000031ee bit 4 | **YES** | c546 & 0x10 = TRUE |
| 15 | 0x8000 | DAT_00003100 cond. | **YES** | No feature gate |

**8 actively driven bits** in long TX: 1, 5, 6, 7, 12, 13, 14, 15.
**7 never driven**: 0(=0), 2, 3, 4, 8, 9, 10, 11.

The AUF board merges short and long TX data to drive its physical outputs (4 AC + 7 DC on VMC). The exact long-TX-bit-to-physical-output mapping requires tracing through FUN_00013e42 or physical verification.

### Secondary Output Word (`DAT_000031f0`)

Additional output data carried in bytes 4-7 of the long packet. Likely includes:
- Analog output values (DAC setpoints)
- Spindle speed commands
- Additional configuration data

---

## Long RX Packet: AUF → BMDC (')', 18 bytes) — Extended Input Path

### Wire Format
```
Byte 0:  ')' (0x29) — sync
Byte 1-16: 16 nibbles (8 bytes of data)
Byte 17: checksum
```

Data destination: 16 nibbles at `0x3067`-`0x3076`, decoded by `FUN_00012592` into:

| Nibbles | Destination | Content |
|---------|-------------|---------|
| 0x3067-0x306e (first 8) | `DAT_00003248` (4 bytes) | Primary input word — AUF digital inputs |
| 0x306f-0x3076 (last 8) | `DAT_0000324c` (4 bytes) | Secondary input word — additional data |

### Primary Input Word (`DAT_00003248`) — AUF Long RX Input Bits

**IMPORTANT:** For this machine (Family 2, Species 2), the long RX input word is **NOT used for home switch or limit switch mapping**. Those come from the short RX packet instead (see Short RX section below). The long RX data (`DAT_00003248`) is used by Family 5 machines (FUN_000128ae) and for tool change logic. The long RX primary word likely carries the same input data as the short RX but in a different format, plus additional inputs and analog data.

The mapping tables in FUN_000128ae (Family 5) are documented here for reference but are NOT active on this machine:

| Byte.Bit | FUN_000128ae Usage | Notes |
|----------|-------------------|-------|
| byte0.0-7 | Tool change logic (DAT_00003252, direction detect) | Used by tool change state machine |
| byte1.0 | 31e5.1 (Home Y) in Family 5 | NOT active for Family 2 |
| byte1.1 | 31e5.2 (Home Z) in Family 5 | NOT active for Family 2 |
| byte2.7 | 31e5.0 (Home X) in Family 5 | NOT active for Family 2 |
| byte2.3 | 31e3 bits (Drive Faults) | Gated by DAT_000031ed & 1 |

### Secondary Input Word (`DAT_0000324c`) — Additional Data

The second 4 bytes from the long RX packet. Stored at `DAT_0000324c` and then copied:

```c
DAT_00003224 = DAT_0000324c;   // (line 14738)
DAT_00003220 = DAT_00003248;   // (line 14739 — copy of primary for double-buffering)
```

Byte 1 of `DAT_0000324c` is used in the AUF I/O mapping (FUN_000128ae):
- Bits 0-7 map to DAT_000031e9 and DAT_00003268 (reversed bit order into DAT_00003268)

This likely carries analog input values or additional status.

---

## Short TX Packet: BMDC → AUF ('#', 5 bytes)

### Wire Format
```
Byte 0: '#' (0x23) — sync
Byte 1: nibble[0] at (a5+0)
Byte 2: nibble[1] at (a5+1)     — primary control byte
Byte 3: nibble[2] at (a5+2)     — copy of byte 1 after each command
Byte 4: checksum
```

Data source: 3 nibbles at `0x3064`-`0x3066`, built by `FUN_000138be` which dispatches through a 16-entry command table at `PTR_LAB_000138f4`.

### Short TX Command Table

| Command | Action on (a1+1) | Meaning |
|---------|-----------------|---------|
| 0 | NOP (rts) | No change |
| 1 | `(a1+1) = (a1+0)` | Copy byte 0 to byte 1 |
| 4 | `(a1+1) = (a1+2)` | Copy byte 2 to byte 1 |
| 5 | Clear all 3 bytes | Reset all outputs |
| 6 | Set bit 3, clear bit 4 | Spindle direction A |
| 7 | Set bit 3, clear bit 4 | Spindle direction A (same) |
| 8 | Set bit 4, clear bit 3 | Spindle direction B |
| 9 | Set bit 3, clear bit 4 | Spindle direction A |
| 10 | Set bit 1, clear bit 2, set bit 0 | Motor direction A + enable |
| 11 | Set bit 2, clear bit 1, set bit 0 | Motor direction B + enable |
| 12 | Clear bit 7 | Disable output 7 |
| 13 | Set bit 7 | Enable output 7 |
| 14 | Clear bits 5,6 | Disable outputs 5,6 |
| 15 | Set bits 5,6 | Enable outputs 5,6 |

### Short TX Bit Assignments (byte 1)

The relationship between short TX bits and the long TX output word is not yet fully understood. The short TX may provide a fast-update path for time-critical outputs, while the long TX carries the full output state.

| Bit | Function |
|-----|----------|
| 0 | Motor enable |
| 1 | Direction A |
| 2 | Direction B |
| 3 | Spindle direction A |
| 4 | Spindle direction B |
| 5 | Output group 5 |
| 6 | Output group 6 |
| 7 | General enable/disable |

---

## Short RX Packet: AUF → BMDC ('#', 9 bytes) — PRIMARY Input Path for This Machine

### Wire Format
```
Byte 0: '#' (0x23) — sync
Byte 1-7: nibble[0..6] at (a5+0..6) — 7 nibbles = 28 bits
Byte 8: checksum
```

Data destination: 7 nibbles at `0x305d`-`0x3063`.

### I/O Dispatch (Critical Discovery)

The I/O mapping function is selected by the Master Parameter nibbles:
- **Family nibble** (bits 31:28 of 0xAF58) = 2 → enters Family 2 block
- **Species nibble** (bits 19:16) = 2 → calls **FUN_00014f9e** (at 0x14F9E, not in Ghidra decompiled output)

The dispatch chain is: `FUN_000124bc → FUN_00012712 → FUN_0001272e → FUN_00014f9e`
(NOT through FUN_000128ae, which is Family 5 only)

### Short RX Nibble-to-Status Mapping (CONFIRMED — FUN_00014f9e)

The first 5 nibbles (0x305d-0x3061) carry digital input status. Each nibble has 4 data bits (0-3).

| Nibble Addr | Bit | → Status Byte.Bit | Meaning | Schematic Terminal | Status |
|---|---|---|---|---|---|
| 0x305d (n0) | 3 | → 31e2.0 | **E-Stop** (inverted) | **I19 E-Stop Input** | **CONFIRMED** |
| 0x305d (n0) | 2 | → 31e6.1 | **Low Lube** (inverted) | **I18 Low Lube** | **CONFIRMED** |
| 0x305d (n0) | 1 | → 31e2.1 | **Spindle Motor Overload** (inverted) | **I17 (Spindle Motor Overload)** | **CONFIRMED** |
| 0x305d (n0) | 0 | → 3252.7 | Orient confirmed flag | — (internal) | internal |
| 0x305e (n1) | 3 | → 31e1.2 | **Z Axis Limit** (inverted) | **I15 Z Axis Limit** | **CONFIRMED** |
| 0x305e (n1) | 2 | → 3252.6 | Clamp confirmed flag | — (internal) | internal |
| 0x305e (n1) | 1 | → 31e1.0 | **X Axis Limit** (inverted) | **(I13 — N/C on VMC)** | **CONFIRMED** |
| 0x305e (n1) | 0 | → 31e5.0 | **X Home** | **I12 X Home** | **CONFIRMED** |
| 0x305f (n2) | 3 | → 31e1.1 | **Y Axis Limit** (inverted) | **I11 Y Axis Limit** | **CONFIRMED** |
| 0x305f (n2) | 2 | → 31e5.1 | **Y Home** | **I10 Y Home** | **CONFIRMED** |
| 0x305f (n2) | 1 | → 31e3.4 | Drive Fault | — | FW trace |
| 0x305f (n2) | 0 | → 31e5.2 | **Z Home** | **I8 Z Home** | **CONFIRMED** |
| 0x3060 (n3) | 3 | → 31e5.3 | **A Axis Home** (not installed) | **I7 A Axis Home** | **CONFIRMED** |
| 0x3060 (n3) | 2 | → 3252.5 | Status flag | — (internal) | internal |
| 0x3060 (n3) | 1 | → 31e4.1 | **Rotary Table Brake** | **I5 Rotary Table Brake** | **CONFIRMED** |
| 0x3060 (n3) | 0 | → 31e6.3 | **Index Out (Reset)** | **I4 Index Out** | **CONFIRMED** |
| 0x3061 (n4) | 3 | → 31e6.2 | **Index In (Inhibit)** | **I3 Index Back** | **CONFIRMED** |
| 0x3061 (n4) | 2 | → 31e4.3 | **Perimeter Door / Guards** | **I2 Perimeter Door** | **CONFIRMED** |
| 0x3061 (n4) | 1 | → 31e4.2 | **Rotary Axis Active** (inverted) | **I1 A Axis Installed** | **CONFIRMED** |
| 0x3061 (n4) | 0 | → 31e6.0 | **Low Air** (inverted) | **I20 Low Air** | **CONFIRMED** |

**Status legend:** **CONFIRMED** = verified by cross-referencing MAINTPG.EXE I/O table + FUN_00014f9e nibble mapping + firmware alarm strings. **internal** = firmware internal flag, not a physical AUF input pin. **FW trace** = status byte.bit confirmed from disassembly, physical source uncertain.

**Correction from MAINTPG cross-reference:** n1.1 carries X Axis Limit (p151.b0) but I13 is N/C on VMC — the nibble is present but unused. n2.3 carries Y Axis Limit = I11 (not I13 as previously guessed). n3.0 = I4 Index Out (not I14 High Gear as previously guessed). I6/I14/I16 (gear switches, param 164) are NOT in nibbles 0-4 — they arrive via nibbles 5-6 or the long RX packet.

**Alarm string verification (BMDC.BIN inline strings):**
- 31e2.0 → "Emergency Stop Activated" (0x327e1) → **I19 E-Stop**
- 31e6.1 → "auxFuncs: Low Lube Level" (0x32dca) / "dpCom: Low Lube Level" (0x3359e) → **I18 Low Lube**
- 31e6.0 → "auxFuncs: Low Air Pressure" (0x32de3) / "dpCom: Low Air Pressure" (0x335b4) → **I20 Low Air**
- 31e4.3 → "Guards Not In Place" (0x32764) → **I2 Perimeter Door**

**Home switch verification:** Homing parameter (param 38 = 0xA960BD00) decodes as 4×6-bit fields [axis(2), home_bit(2), direction(2)]:
- Pass 0: Z axis, bit 2, reverse → confirmed nibble 2 bit 0 = I8
- Pass 1: Y axis, bit 1, reverse → confirmed nibble 2 bit 2 = I10
- Pass 2: X axis, bit 0, reverse → confirmed nibble 1 bit 0 = I12
- Pass 3: W axis, bit 3, normal (skipped) → nibble 3 bit 3 = I7

**MAINTPG.EXE cross-reference (session 3):** Binary I/O mapping table at file offset 0x47887 contains per-machine-type pin assignments. VMC column (column 3) extracted for all 21 AUF inputs, 5 AC outputs, 8 DC outputs, 8 TLAUF inputs, 8 TLAUF outputs. Cross-referencing MAINTPG param.bit → MAINTPG1.DAT labels → FUN_00014f9e nibble mapping confirmed 15 of 18 connected AUF inputs, all 4 AC outputs, and 5 of 7 DC outputs. Remaining 3 inputs (I6/I14/I16 = gear switches) map to param 164 and likely arrive via nibbles 5-6 or the long RX packet.

Nibbles 5-6 (0x3062-0x3063) carry spindle gear switch status (I6/I14/I16 → param 164) and/or TLAUF echo data.

The function also reads TLAUF short RX nibbles (0x3088-0x3089) → DAT_00003268 (8 bits, reversed), and debounced BMDC direct inputs (0x3051) → DAT_000031e8 (Switch Status).

---

## TLAUF I/O Map (from MAINTPG — VMC)

### TLAUF Inputs (param 171)

| Pin | Function | Param.Bit | Status |
|-----|----------|-----------|--------|
| TI0 | (N/C on VMC, Tool#1 on other types) | p171.b0 | N/A |
| TI1 | Tool Count | p171.b1 | MAINTPG |
| TI2 | Arm Out | p171.b2 | MAINTPG |
| TI3 | Arm Back | p171.b3 | MAINTPG |
| TI4 | Unclamped | p171.b4 | MAINTPG |
| TI5 | Clamped | p171.b5 | MAINTPG |
| TI6 | Arm Down | p171.b6 | MAINTPG |
| TI7 | Arm Up | p171.b7 | MAINTPG |

### TLAUF Outputs (param 172)

| Pin | Function | Param.Bit | Status |
|-----|----------|-----------|--------|
| TO0 | (N/C on VMC, Brake Release on other types) | p172.b0 | N/A |
| TO1 | Arm Out | p172.b1 | MAINTPG |
| TO2 | Arm Back | p172.b2 | MAINTPG |
| TO3 | Carousel Forward | p172.b3 | MAINTPG |
| TO4 | Carousel Reverse | p172.b4 | MAINTPG |
| TO5 | Draw Bar | p172.b5 | MAINTPG |
| TO6 | Air Blast | p172.b6 | MAINTPG |
| TO7 | (N/C on VMC) | — | N/A |

---

## Input Debouncing

AUF inputs (`_DAT_00003050`) are debounced using a **5-sample majority filter** in `FUN_00012688`:

```c
result = (hist[0] | hist[1] | hist[2] | hist[3] | hist[4] | new)
       & (hist[0] & hist[1] & hist[2] & hist[3] & hist[4] | new);

hist[4] = hist[3]; hist[3] = hist[2]; hist[2] = hist[1]; hist[1] = hist[0]; hist[0] = result;
```

The `new` value combines:
- `_DAT_01300200` — direct digital input port on BMDC card (bits 0-9)
- `_DAT_013000b4` bits 5-6 shifted to bits 10-11 — SCN2681 input port pins (IP4/IP5)

The debounced result in `_DAT_00003050` feeds into Switch Status (DAT_000031e8) mapping in FUN_00014f9e.

---

## Memory Map Summary

```
0x3000-0x3013: AUF RX buffer structure (circular buffer, 64B, mask 0x3F)
0x3014-0x3027: AUF TX buffer structure
0x3028-0x303b: TLAUF RX buffer structure
0x303c-0x304f: TLAUF TX buffer structure
0x3050-0x305b: Debounced input registers (AUF digital inputs)
0x305c:        Direct output control (SCN2681 OPR bits — spindle brake)
0x305d-0x3063: AUF short RX nibbles (7 nibbles)
0x3064-0x3066: AUF short TX nibbles (3 nibbles)
0x3067-0x3076: AUF long RX nibbles (16 nibbles)
0x3077-0x3086: AUF long TX nibbles (16 nibbles)
0x3088-0x308e: TLAUF short RX nibbles (7 nibbles)
0x308f-0x3091: TLAUF short TX nibbles (3 nibbles)

0x30a8-0x30b4: Analog input raw values
0x30dc-0x30f0: Analog filtered values

0x3218-0x321f: Long TX data staging (_DAT_00003218, 8 bytes)
0x3220-0x3227: Input snapshot (copy of DAT_00003248/324c)
0x3248-0x324b: Long RX decoded primary (DAT_00003248, 4 bytes — AUF inputs)
0x324c-0x324f: Long RX decoded secondary (DAT_0000324c, 4 bytes)
0x3250:        Tool change output byte (tool change state machine → AUF bits 0-4)
0x3251:        Tool change extra byte (gear/direction → AUF bits 2-4)
0x3252:        Status flags (orient/clamp confirmed)

0x3260-0x3268: Decoded short RX status fields
0x3270-0x327f: Indexed data array (from short RX nibble pair)

0x31e0-0x31ef: Machine status bytes (mapped from inputs)
0x31f0-0x31f3: Secondary output word (DAT_000031f0)
0x31f4-0x31f7: Primary output word (_DAT_000031f4 — AUF output control)
```

---

## For DIY Implementation

To replicate AUF communication:

1. **Send short '#' packet every cycle** (3 nibbles) — carries command/control bits for spindle direction, motor enables
2. **Receive short '#' response** (7 nibbles) — **PRIMARY input path** for home switches, limits, and machine status
3. **Send long ')' packet every cycle** (16 nibbles) — carries 8 bytes: primary output word (4 AC + 7 DC output control) + secondary word
4. **Receive long ')' response** (16 nibbles) — carries 8 bytes: extended input data + secondary word (analog/additional)

### Input reading — short RX is primary (CONFIRMED)

For this machine (Family 2, Species 2), the **short RX packet carries all critical digital inputs**:
- Home switches (X, Y, Z, A) in nibbles 1-3
- Axis limits (X, Y, Z) in nibbles 1-2
- Aux limits (E-Stop, Low Lube/Air, Spindle Overload) in nibble 0
- Machine status (Rotary Brake, Rotary Active, Door Guard) in nibbles 3-4
- Machine options (Index In/Out, Low Air) in nibbles 3-4
- Spindle gear switches (Low Gear, High Gear, Xmsn Pin) in nibbles 5-6 (param 164)

See the Short RX nibble mapping table above for the exact bit assignments (nibbles 0-4 fully mapped, nibbles 5-6 carry I6/I14/I16).

The long RX packet carries additional data (tool change state, analog values) but is NOT the source for home/limit/status inputs on this machine.

### Output control — two paths

The AUF board receives BOTH short and long TX packets each cycle. Outputs are split between them:

**Long TX** (`_DAT_000031f4`): 8 actively driven bits (1, 5, 6, 7, 12, 13, 14, 15) for this machine config. Controls a subset of the 11 AUF outputs.

**Short TX** (3 nibbles, 12 bits via command table): Controls spindle direction, motor direction/enable, and general enables. Likely drives the remaining outputs.

### Complete output map (from MAINTPG — VMC)

**AC Outputs** (all confirmed):
- AC1: Index Solenoid (p161.b4 INV)
- AC2: Lube Motor (p161.b1 INV)
- AC3: Mist Coolant (p161.b2 INV)
- AC4: Flood Coolant (p161.b3 INV)

**DC Outputs** (5 confirmed, 2 need verification):
- DCOUT1: Xmsn Shot Pin (p163.b0 INV)
- DCOUT2: Spindle Safe Light (p163.b14 INV)
- DCOUT3: Low Gear Solenoid (p163.b1 INV)
- DCOUT4: A Axis Brake Release (p160.b1)
- DCOUT5: Door Shot Pin (p160.b2 INV)
- DCOUT6: Spindle Drive Enable (p163.b8 INV) — schematic says "not populated"
- DCOUT7: Limit Override (p160.b7 INV)

**Not in MAINTPG AUF table:** DCOUT0 (Z Axis Brake) — likely a direct BMDC card output via SCN2681 OPR register at 0x305c.
