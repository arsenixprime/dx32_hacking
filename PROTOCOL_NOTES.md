# DX32 Serial Protocol Analysis

## Architecture Summary

```
PC (DOS) <--ISA bus--> BMDC card (68030) <--RS422--> AUF (general I/O)
                                          <--RS422--> TLAUF (tool change I/O)
```

The PC communicates with the BMDC via **dual-port RAM** and **ISA I/O ports**. The BMDC then talks to AUF and TLAUF via two RS422 serial channels on the **SCN2681 dual UART**.

---

## SCN2681 UART Configuration

- **Base address (68030 side):** `0x01300080`
- **Register stride:** 4 bytes (32-bit aligned)
- **Port A → AUF** (general purpose I/O)
- **Port B → TLAUF** (tool change I/O)
- **Baud rate:** 19200 baud (both ports)
- **Format:** 8N1 (8 data bits, no parity, 1 stop bit)
- **ACR:** 0x6F (baud rate set A, crystal/16 timer mode)
- **CSR:** 0xCC (19200 baud for both ports)

### UART Register Map (68030 addresses)

| Address    | Read         | Write        | SCN2681 Reg |
|------------|-------------|-------------|-------------|
| 0x01300080 | MR1A/MR2A   | MR1A/MR2A   | 0  |
| 0x01300084 | SRA         | CSRA        | 1  |
| 0x01300088 | (BRG test)  | CRA         | 2  |
| 0x0130008C | RHRA        | THRA        | 3  |
| 0x01300090 | IPCR        | ACR         | 4  |
| 0x01300094 | ISR         | IMR         | 5  |
| 0x01300098 | CTU         | CTUR        | 6  |
| 0x0130009C | CTL         | CTLR        | 7  |
| 0x013000A0 | MR1B/MR2B   | MR1B/MR2B   | 8  |
| 0x013000A4 | SRB         | CSRB        | 9  |
| 0x013000A8 | (BRG test)  | CRB         | A  |
| 0x013000AC | RHRB        | THRB         | B  |
| 0x013000B0 | IVR         | IVR          | C  |
| 0x013000B4 | IP          | OPCR         | D  |
| 0x013000B8 | Start Ctr   | OPR Set      | E  |
| 0x013000BC | Stop Ctr    | OPR Reset    | F  |

---

## Serial Protocol

The protocol uses **hex-encoded ASCII** characters. Each data nibble is encoded as `'0'-'9'` (0x30-0x39) or `'a'-'f'` (0x61-0x66).

### Packet Formats

**Short TX packet (5 bytes) — BMDC → AUF or TLAUF:**
```
[sync] [d0] [d1] [d2] [checksum]
```
- Sync: `'#'` (0x23) for AUF, `'&'` (0x26) for TLAUF
- d0-d2: hex-encoded data (1.5 bytes of actual data)
- Checksum: `(sum_of_data_bytes & 0x0F) + 0x40`

**Short RX packet (9 bytes) — AUF or TLAUF → BMDC:**
```
[sync] [d0] [d1] [d2] [d3] [d4] [d5] [d6] [checksum]
```
- Same sync characters as TX
- d0-d6: hex-encoded data (3.5 bytes of actual data)
- Same checksum format

**Long TX/RX packet (18 bytes) — AUF only, bidirectional:**
```
[sync] [d0] ... [d15] [checksum]
```
- Sync: `')'` (0x29)
- d0-d15: hex-encoded data (8 bytes of actual data)
- Same checksum format

### Communication Cycle (State Machine)

Driven by `FUN_00012328` at 0x12328. Uses function pointer table.

**Mode 0 (normal — AUF + TLAUF):**
1. TX short `'#'` to AUF (output data)
2. TX short `'&'` to TLAUF (output data)
3. RX short `'#'` from AUF (input data)
4. RX short `'&'` from TLAUF (input data)
5. TX long `')'` to AUF (extended output)
6. Processing / encode-decode
7. RX long `')'` from AUF (extended input)

**Mode 1 (AUF only — no tool changer):**
1. TX long `')'` to AUF
2-4. Timing/processing
5. RX long `')'` from AUF

### Error Handling
- Error counters capped at 0xBAD (2989)
- Successful packet: counter -= 5
- Failed packet: counter += 16

---

## Serial Buffer Layout (68030 RAM)

| Buffer   | Base Address | Size | Mask | Description     |
|----------|-------------|------|------|-----------------|
| AUF RX   | 0x00002F00  | 64B  | 0x3F | AUF receive     |
| AUF TX   | 0x00002F40  | 64B  | 0x3F | AUF transmit    |
| TLAUF RX | 0x00002F80  | 64B  | 0x3F | TLAUF receive   |
| TLAUF TX | 0x00002FC0  | 64B  | 0x3F | TLAUF transmit  |

---

## ISA I/O Port Map (PC side)

| Port   | Direction | Function |
|--------|-----------|----------|
| 0x1A0  | Write     | Command/Reset — write firmware byte count or 0 to reset |
| 0x1A2  | Write     | Alarm reset — write 0 to clear |
| 0x1A4  | R/W       | Address register low (9-bit, masked 0x1FF) |
| 0x1A6  | R/W       | Address register high (9-bit, masked 0x1FF) |
| 0x1A8  | R/W       | Data register low (16-bit) |
| 0x1AA  | R/W       | Data register high (16-bit) |
| 0x1B0  | R/W       | UART data low |
| 0x1B2  | R/W       | UART data high |
| 0x1B4  | R/W       | UART status / DAC control |

68030 memory is accessed indirectly: write address to 0x1A4/0x1A6, then read/write data at 0x1A8/0x1AA. 9+9 = 18 bits = 1MB address space.

---

## Dual-Port RAM Layout (shared memory)

- **PC side:** ISA address 0xD4000 (segment D400:0000)
- **68030 side:** address 0x01200000

### Key Offsets

| Offset | 68030 Address | Size | Description |
|--------|--------------|------|-------------|
| +0x020 | 0x01200020   | word | Command word (bit 15 = pending) |
| +0x022 | 0x01200022   | word | Data length (max 0x20 dwords) |
| +0x024 | 0x01200024   | word | Status flags (0x40=ack, 0x80=complete) |
| +0x028 | 0x01200028   | word | Tick counter |
| +0x070 | 0x01200070   | word | Config word (init 0x3700) |
| +0x080 | 0x01200080   | dword| Data pointer |
| +0x100 | 0x01200100   | 128B | Data buffer (32 dwords) |
| +0x200 | 0x01200200   | var  | G-code/M-code string buffer |
| +0x400 | 0x01200400   | word | machControl (bit 15 = cmd pending) |
| +0x402 | 0x01200402   | word | machStatus (bit 0=busy, bit 1=error) |
| +0x404 | 0x01200404   | word | PC command ID (0=jog, 2=enable, 3=run, 4=ref, 5=Z-check) |
| +0x406 | 0x01200406   | word | Axis selector (0-4: X,Y,Z,4th,5th) |
| +0x480 | 0x01200480   | word | Machine status flags |
| +0x554 | 0x01200554   | word | Current tool number (1-24) |
| +0x558 | 0x01200558   | word | Requested tool number |
| +0x680 | 0x01200680   | word | Spindle status |
| +0x780 | 0x01200780   | word | Servo tick mirror |
| +0x784 | 0x01200784   | 16B  | Encoder positions (4 axes) |
| +0x808 | 0x01200808   | word | E-stop flag |

---

## 68030 Memory Map (BMDC card)

| Address Range      | Description |
|-------------------|-------------|
| 0x00000000-0x0004BFFF | RAM (firmware loaded here) |
| 0x01200000-0x01200818 | Dual-port RAM (shared with ISA host) |
| 0x01300004-0x0130001C | Encoder/counter inputs (up to 9 axes) |
| 0x01300040-0x0130004C | Motor DAC outputs (4 channels, alternate bank) |
| 0x01300050-0x01300054 | Digital output control |
| 0x01300080-0x013000BC | SCN2681 UART registers |
| 0x013000C0          | ADC reads |
| 0x01300100-0x0130011C | Motor DAC outputs (4 channels, primary bank) |
| 0x01300140          | Motor control flag |
| 0x01300180          | Spindle/feedrate DAC |
| 0x013001C0          | Spindle control |
| 0x01300200          | Digital input port |

---

## TLAUF — Tool Change I/O (Port B)

The TLAUF board is an **I/O expander** for tool change mechanics — 8 outputs (7 used) and 8 inputs (6 used), plus non-volatile memory (read/written by BMDC, not important for DIY). All tool change sequencing logic lives in the BMDC firmware. The BMDC sets/clears individual output bits and reads individual input bits via the `'&'` short packets.

### TLAUF Physical I/O (from schematic)

**6x Inputs:**

| Terminal | Function |
|----------|----------|
| I0 | Tool Pocket 1 |
| I1 | Tool Count |
| I2 | Tool Arm Out |
| I3 | Tool Arm Back |
| I4 | Tool Unclamped |
| I5 | Tool Clamped |

**7x AC Outputs:**

| Terminal | Function |
|----------|----------|
| ACOUT0 | Arm Brake |
| ACOUT1 | Arm Motor Out |
| ACOUT2 | Arm Motor Back |
| ACOUT3 | Carousel Motor Fwd |
| ACOUT4 | Carousel Motor Rev |
| ACOUT5 | Tool Unclamp |
| ACOUT6 | Air Blast |

### Data Flow

The TLAUF receives outputs via `'&'` short packets (3 nibbles at 0x308f), built by the shared short TX command table (`FUN_000138be`). This is a separate data path from `_DAT_000031f4` (which goes to the AUF).

```
Tool change state machine (DAT_00003c54, states 0-7)
  → TLAUF outputs via '&' short packet (5 bytes) on UART Port B
  → AUF outputs (stop pin, low gear, etc.) via ')' long packet on UART Port A
```

### TLAUF Input Bits

Read from the `'&'` RX packet, decoded and debounced. Proposed mapping (input terminal → packet bit, needs verification):

| Bit | Mask | Schematic Terminal | Function | Firmware Evidence |
|-----|------|--------------------|----------|------------------|
| 0 | 0x01 | I0: Tool Pocket 1 | Pocket 1 detection | Extensively checked in tool change steps |
| 1 | 0x02 | I1: Tool Count | Carousel position count | Used with bit 2 for direction detection (`DAT_0000af54`) |
| 2 | 0x04 | I2: Tool Arm Out | Arm extended sensor | Used with bit 1 for direction calc |
| 3 | 0x08 | I3: Tool Arm Back | Arm retracted sensor | Maps to `DAT_000031e7` bit 0 |
| 4 | 0x10 | I4: Tool Unclamped | Tool unclamped confirm | Position confirmation checks |
| 5 | 0x20 | I5: Tool Clamped | Tool clamped confirm | Debounced; gates clamp/unclamp ops |

Bits 6-7 unused on this machine.

**Note:** The bit-to-terminal mapping above is a guess based on input number → bit number. The actual mapping depends on the TLAUF board's internal firmware and needs physical verification.

### TLAUF Output Bits

The TLAUF short TX packet carries 3 nibbles (12 bits). The proposed mapping (ACOUT terminal → packet bit) needs verification:

| Bit | Schematic Terminal | Function |
|-----|-------------------|----------|
| 0 | ACOUT0 | Arm Brake |
| 1 | ACOUT1 | Arm Motor Out |
| 2 | ACOUT2 | Arm Motor Back |
| 3 | ACOUT3 | Carousel Motor Fwd |
| 4 | ACOUT4 | Carousel Motor Rev |
| 5 | ACOUT5 | Tool Unclamp |
| 6 | ACOUT6 | Air Blast |
| 7 | — | (not used) |

### Spindle Brake

The spindle brake is **not** controlled via the TLAUF serial link. It is driven directly by the SCN2681's hardware output port pins (OP4/OP5), bypassing the serial protocol entirely for faster response:

```
DAT_0000305c bits 5-6  →  SCN2681 OPR Set  (0x013000B8)
~DAT_0000305c bits 5-6 →  SCN2681 OPR Reset (0x013000BC)
```

This is handled by `FUN_00013628` at 0x13628. The source signal `DAT_0000305c` is set based on `DAT_000031ed` bit 0 (spindle enable) and bit 7 (spindle direction/brake).

### Tool Change State Machine

Variable `DAT_00003c54` (states 0-7), dispatched via jump table at `PTR_LAB_0001c8a0`.

The state machine is driven by `DAT_0000aeca` (step counter, values 0x01-0x0F) and `DAT_0000aecb` (flags). Key step handler: `FUN_00033f50` at 0x33f50.

### Key Insight for DIY Implementation

The TLAUF board is purely an I/O expander over RS422. To control it from a DIY system:

1. Send `'&'` short packets (5 bytes) at the polling rate to set 7 output bits (carousel fwd/rev, arm out/back/brake, tool unclamp, air blast)
2. Receive `'&'` short packets (9 bytes) to read 6 input bits (tool clamped/unclamped, arm out/back, tool count, pocket 1)
3. Implement the tool change sequencing logic in your own controller
4. The polling cycle runs at roughly the servo rate (~500 Hz / 2ms)

---

## AUF — General Purpose I/O (Port A)

### AUF Input Bits (`DAT_00003050`/`DAT_00003051`) — DX32 Machine Type 5

The AUF receives both short `'#'` packets (for basic I/O) and long `')'` packets (for extended I/O with 8 bytes of data).

Input bits are debounced using a 5-sample majority filter in `FUN_00012688`:
```
result = (sample[0] | sample[1] | sample[2] | sample[3] | sample[4] | new) &
         (sample[0] & sample[1] & sample[2] & sample[3] & sample[4] | new)
```

| Byte 1 (`DAT_00003051`) Bit | Machine Function |
|------------------------------|-----------------|
| 0 | Coolant pump status |
| 1 | Spindle enable status |
| 2 | Chip conveyor status |
| 3 | Lube pump status |
| 4 | Servo enable (inverted) |
| 5 | Spindle orient/clamp |
| 6 | Tool clamp |
| 7 | ATC arm |

| Byte 0 (`DAT_00003050`) Bit | Machine Function |
|------------------------------|-----------------|
| 0 | ATC carousel |
| 2 | Additional status (checked in multiple machine types) |
| 3 | Door lock |

### AUF Output Bits (`_DAT_000031f4` → `_DAT_00003218`)

The output word `_DAT_000031f4` is a 32-bit value where individual bits are set/cleared by the I/O mapping functions. The lower 16 bits go in the short packet, the full 32 bits go in the long packet.

| Bit | Mask | Function |
|-----|------|----------|
| 5 | 0x20 | Controlled by spindle/orient logic |
| 6 | 0x40 | Controlled by orient status |
| 7 | 0x80 | Controlled by spindle/orient logic |
| 8 | 0x100 | Machine-specific output |
| 9 | 0x200 | Machine-specific output |
| 10 | 0x400 | Machine-specific output |
| 11 | 0x800 | Machine-specific output |
| 12 | 0x1000 | Machine-specific output |
| 13 | 0x2000 | Machine-specific output |
| 14 | 0x4000 | Machine-specific output |
| 15 | 0x8000 | Machine-specific output |

---

## Key BMDC Firmware Functions

| Address  | Description |
|----------|-------------|
| 0x00C630 | Entry point / startup |
| 0x0108F0 | Main loop |
| 0x010AAE | Command dispatcher |
| 0x01111C | UART ISR (Level 2 autovector @ 0x68) |
| 0x01134C | Port A TX handler |
| 0x01138C | Port A RX handler |
| 0x0113DA | Port B TX handler |
| 0x01141A | Port B RX handler |
| 0x011CD6 | Servo tick ISR (Level 4 autovector @ 0x70) |
| 0x012328 | Protocol state machine driver |
| 0x012592 | Nibble encode/decode |
| 0x0128AE | AUF I/O bit mapping |
| 0x013A88 | Short packet receive (9-byte) |
| 0x013BA4 | Long packet receive (18-byte) |
| 0x013CF6 | Short packet transmit (Port A) |
| 0x013D14 | Long packet transmit (Port A) |
| 0x013D50 | Short packet builder (5-byte) |
| 0x013DA2 | Long packet builder (18-byte) |
| 0x013E08 | Hex character validator |
| 0x0167D6 | Serial buffer initialization |
| 0x028794 | Machine-level command handler |
| 0x033E1A | Tool change orchestrator |
| 0x033F50 | Tool change step dispatcher |
| 0x036AD8 | TLAUF I/O mapping (machine type A) |
| 0x036B84 | TLAUF I/O mapping (machine type B) |
| 0x036D76 | TLAUF I/O mapping (machine type C) |
| 0x036F1E | TLAUF I/O mapping (machine type D) |
| 0x037186 | TLAUF I/O mapping (machine type E) |

---

## Interrupt Configuration

| Vector | Address | Handler  | Description |
|--------|---------|----------|-------------|
| Level 2 | 0x68 | 0x01111C | UART RX/TX + counter/timer |
| Level 4 | 0x70 | 0x11CD6  | Servo tick (motion control) |

**IMR value:** 0x2A = RxRDY_A + Counter/Timer + RxRDY_B

**Counter/timer:** CTUR=0x00, CTLR=0xE6 → ~500 Hz (2ms servo period)
