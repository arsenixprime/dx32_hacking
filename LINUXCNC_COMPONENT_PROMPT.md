# LinuxCNC PktUART HAL Component for DX32 AUF/TLAUF

## Task

Write a LinuxCNC HAL component (userspace, in C) that communicates with the Bridgeport DX32's AUF and TLAUF boards over a multidrop RS422 serial port using a Mesa FPGA card's PktUART interface. The component should expose all I/O signals as HAL pins so that a LinuxCNC configuration can directly control this CNC machine.

Both the AUF and TLAUF are on the same multidrop RS422 bus (separate TX and RX wire pairs, full-duplex). They are distinguished by their sync bytes — `'#'` (0x23) for AUF, `'&'` (0x26) for TLAUF, and `')'` (0x29) for AUF long packets. Trace measurements confirm that RX responses begin arriving during TX transmission.

### Operating Modes

The component must support three operating modes, selectable via a `mode=` command-line parameter:

| Mode | Value | Description |
|------|-------|-------------|
| `both` | `mode=both` (default) | Communicate with both AUF and TLAUF. Full communication cycle. |
| `auf` | `mode=auf` | AUF only. Only AUF HAL pins are registered. TLAUF packets are not sent/received. |
| `tlauf` | `mode=tlauf` | TLAUF only. Only TLAUF HAL pins are registered. AUF packets are not sent/received. |

This allows each board to be brought up and tested independently before combining them on the shared bus. Diagnostic pins (`dx32.*`) are always registered; board-specific diagnostic pins (e.g., `dx32.auf-rx-errors`) are only registered when that board is enabled.

Usage:
```
loadusr -W dx32_pktuart mode=auf       # AUF testing only
loadusr -W dx32_pktuart mode=tlauf     # TLAUF testing only
loadusr -W dx32_pktuart mode=both      # full operation (default)
```

## Background

The DX32 is a Bridgeport VMC (Vertical Machining Center) with a 22-tool carousel tool changer. The original controller uses a BMDC ISA card (MC68EC030 CPU) that talks to two I/O boards:

- **AUF** — General purpose I/O: home switches, limit switches, E-stop, coolant, lube, spindle interlocks, door guard, gear switches, etc. Has 24 inputs, 4 AC outputs, 9 DC outputs. Uses an MC68HC811E2 microcontroller.
- **TLAUF** — Tool change I/O: carousel motor, arm motor, drawbar, air blast, clamp/unclamp sensors. Has 8 inputs, 7 AC outputs. Also MC68HC811E2. In VMC mode, the TLAUF's HC11 handles carousel motor control internally — the host sends a target pocket number and the TLAUF drives the carousel to it autonomously.

Both boards communicate at **38400 baud, 8N1** over multidrop RS422 (full-duplex, separate TX/RX pairs).

## Serial Protocol

### Packet Formats

All data nibbles are hex-encoded ASCII: values 0x0-0xF are sent as characters `'0'-'9'` (0x30-0x39) or `'a'-'f'` (0x61-0x66).

Checksum for all packet types: `(sum_of_all_data_bytes & 0x0F) + 0x40`

**Short TX (host → board, 5 bytes):**
```
[sync] [nibble0] [nibble1] [nibble2] [checksum]
```
- Sync: `'#'` for AUF, `'&'` for TLAUF
- 3 data nibbles = 12 bits of output data

**Short RX (board → host, 9 bytes):**
```
[sync] [n0] [n1] [n2] [n3] [n4] [n5] [n6] [checksum]
```
- Same sync bytes as TX
- 7 data nibbles = 28 bits of input data

**Long TX/RX (AUF only, 18 bytes):**
```
[sync] [n0] [n1] ... [n15] [checksum]
```
- Sync: `')'` (0x29)
- 16 data nibbles = 64 bits (8 bytes) of data
- Byte order: MSB first. Nibbles 0-1 = byte 7 (MSB), nibbles 14-15 = byte 0 (LSB)

### Communication Cycle

The original firmware runs this cycle once per servo period (~2ms, 500Hz). For a LinuxCNC component running at the servo thread rate (typically 1kHz), run one complete cycle per servo period.

**Full cycle (`mode=both`):**
```
1. TX short '#' to AUF          (3 nibbles of output data)
2. TX short '&' to TLAUF         (3 nibbles of TLAUF command)
3. RX short '#' from AUF         (7 nibbles of input data)
4. RX short '&' from TLAUF       (7 nibbles of input data)
5. TX long  ')' to AUF           (16 nibbles = 8 bytes of extended output data)
6. RX long  ')' from AUF         (16 nibbles = 8 bytes of extended input data)
```

**AUF-only cycle (`mode=auf`):**
```
1. TX short '#' to AUF
2. RX short '#' from AUF
3. TX long  ')' to AUF
4. RX long  ')' from AUF
```

**TLAUF-only cycle (`mode=tlauf`):**
```
1. TX short '&' to TLAUF
2. RX short '&' from TLAUF
```

Allow sufficient inter-packet delay for the HC11 to process and respond. The original system uses about 2ms total cycle time at 38400 baud. A complete cycle involves 72 bytes on the wire (5+5+9+9+18+18+sync gaps), which at 38400 baud takes ~18.75ms minimum. The original system interleaves packets with processing, so the actual cycle time is longer. **Start with a conservative approach: send one packet, wait for response, then proceed to the next. Tune timing later.**

**Note:** When running in single-board mode, the unused board is completely ignored — no packets are sent to it and no responses are expected. This is safe because the boards only respond to their own sync byte.

### Error Handling

- Validate checksums on all received packets
- If a packet fails checksum or times out, increment an error counter and retry on the next cycle
- Track consecutive errors; if too many consecutive failures occur, set a fault HAL pin
- The original firmware caps error counters at 0xBAD (2989), decrements by 5 on success, increments by 16 on failure

## AUF I/O Pin Definitions

### AUF Inputs (from short RX packet, nibbles 0-4)

These are the confirmed physical inputs from the AUF board. Each maps to a specific nibble and bit position in the short RX response.

| HAL Pin Name | Type | Nibble.Bit | Schematic Terminal | Description |
|---|---|---|---|---|
| `auf.estop` | bit, IN* | n0.3 | I19 | E-Stop input (active when grounded) |
| `auf.low-lube` | bit, IN | n0.2 | I18 | Low lube level alarm |
| `auf.spindle-overload` | bit, IN | n0.1 | I17 | Spindle motor overload |
| `auf.z-limit` | bit, IN | n1.3 | I15 | Z axis limit switch |
| `auf.x-limit` | bit, IN | n1.1 | I13 | X axis limit switch (N/C on VMC, expose anyway) |
| `auf.x-home` | bit, IN | n1.0 | I12 | X home switch |
| `auf.y-limit` | bit, IN | n2.3 | I11 | Y axis limit switch |
| `auf.y-home` | bit, IN | n2.2 | I10 | Y home switch |
| `auf.z-home` | bit, IN | n2.0 | I8 | Z home switch |
| `auf.a-home` | bit, IN | n3.3 | I7 | A axis home switch (not installed but wired) |
| `auf.rotary-brake` | bit, IN | n3.1 | I5 | Rotary table brake feedback |
| `auf.index-out` | bit, IN | n3.0 | I4 | Index solenoid retracted |
| `auf.index-in` | bit, IN | n4.3 | I3 | Index solenoid extended |
| `auf.door-guard` | bit, IN | n4.2 | I2 | Perimeter door / guard interlock |
| `auf.rotary-active` | bit, IN | n4.1 | I1 | Rotary axis installed/active |
| `auf.low-air` | bit, IN | n4.0 | I20 | Low air pressure alarm |

*IN from the perspective of LinuxCNC (reading from hardware).

Additionally, nibbles 5-6 carry spindle gear switch status (I6 Low Gear, I14 High Gear, I16 Xmsn Shot Pin). The exact bit positions within nibbles 5-6 are not confirmed. Expose as raw nibble values for now:

| HAL Pin Name | Type | Source | Description |
|---|---|---|---|
| `auf.short-rx-n5` | u32, IN | n5 (4 bits) | Short RX nibble 5 raw value |
| `auf.short-rx-n6` | u32, IN | n6 (4 bits) | Short RX nibble 6 raw value |

There are also 3 internal status flags decoded from the short RX:

| HAL Pin Name | Type | Nibble.Bit | Description |
|---|---|---|---|
| `auf.orient-confirmed` | bit, IN | n0.0 | Spindle orient confirmed |
| `auf.clamp-confirmed` | bit, IN | n1.2 | Tool clamp confirmed |
| `auf.status-n3b2` | bit, IN | n3.2 | Unknown status flag |

### AUF Inputs (from long RX packet)

The long RX packet carries 8 bytes (64 bits). Expose as raw bytes since the per-bit mapping to physical inputs is not fully traced for this machine type:

| HAL Pin Name | Type | Description |
|---|---|---|
| `auf.long-rx-byte-0` through `auf.long-rx-byte-7` | u32, IN | Raw bytes from long RX (byte 0 = LSB, byte 7 = MSB) |

### AUF Short TX Outputs (3 nibbles = 12 bits)

The short TX packet carries fast-update output controls. The bit assignments from the original firmware's command table:

| HAL Pin Name | Type | Bit | Description |
|---|---|---|---|
| `auf.motor-enable` | bit, OUT | 0 | Motor enable |
| `auf.motor-dir-a` | bit, OUT | 1 | Motor direction A |
| `auf.motor-dir-b` | bit, OUT | 2 | Motor direction B |
| `auf.spindle-dir-a` | bit, OUT | 3 | Spindle direction A |
| `auf.spindle-dir-b` | bit, OUT | 4 | Spindle direction B |
| `auf.output-5` | bit, OUT | 5 | Output group 5 |
| `auf.output-6` | bit, OUT | 6 | Output group 6 |
| `auf.output-7` | bit, OUT | 7 | General enable |

Pack bits 0-3 into nibble 1, bits 4-7 into nibble 0, nibble 2 = copy of nibble 1 (per original protocol).

### AUF Long TX Outputs (8 bytes = 64 bits)

The long TX packet carries the full output state. 8 actively driven bits are confirmed for this machine. Expose all 64 bits but document the known ones:

| HAL Pin Name | Type | Bit | Description |
|---|---|---|---|
| `auf.long-tx-bit-01` | bit, OUT | 1 | Tool change related |
| `auf.long-tx-bit-05` | bit, OUT | 5 | Spindle/orient control |
| `auf.long-tx-bit-06` | bit, OUT | 6 | Orient status |
| `auf.long-tx-bit-07` | bit, OUT | 7 | Spindle/orient control |
| `auf.long-tx-bit-12` | bit, OUT | 12 | Index solenoid |
| `auf.long-tx-bit-13` | bit, OUT | 13 | Lube/mist/flood |
| `auf.long-tx-bit-14` | bit, OUT | 14 | Coolant control |
| `auf.long-tx-bit-15` | bit, OUT | 15 | Conditional output |

For flexibility, also expose the full 8-byte long TX as raw bytes:

| HAL Pin Name | Type | Description |
|---|---|---|
| `auf.long-tx-byte-0` through `auf.long-tx-byte-7` | u32, OUT | Raw bytes for long TX (byte 0 = LSB, byte 7 = MSB) |

If both individual bit pins and raw byte pins are set, individual bit pins take priority (OR'd into the raw byte values).

## TLAUF I/O Pin Definitions

### TLAUF Inputs (from short RX packet, 7 nibbles = 28 bits)

| HAL Pin Name | Type | Description |
|---|---|---|
| `tlauf.tool-count` | bit, IN | TI1: Tool count pulse |
| `tlauf.arm-out` | bit, IN | TI2: Arm extended sensor |
| `tlauf.arm-back` | bit, IN | TI3: Arm retracted sensor |
| `tlauf.unclamped` | bit, IN | TI4: Tool unclamped |
| `tlauf.clamped` | bit, IN | TI5: Tool clamped |
| `tlauf.arm-down` | bit, IN | TI6: Arm down sensor |
| `tlauf.arm-up` | bit, IN | TI7: Arm up sensor |

Also expose all 7 nibbles raw for debugging:

| HAL Pin Name | Type | Description |
|---|---|---|
| `tlauf.short-rx-n0` through `tlauf.short-rx-n6` | u32, IN | Raw nibble values (4 bits each) |

**Note:** TI0 (Tool#1 home sensor) is consumed internally by the TLAUF HC11 for pocket counting and is NOT reported back as an individual bit. The current pocket number is reported via the long RX parameters instead (see below).

### TLAUF Current Pocket (from long RX parameters)

The TLAUF reports the current carousel pocket position via parameters in its long RX response. The pocket number is encoded as two nibbles at parameter indices 7-8 of the TLAUF's parameter array:

| HAL Pin Name | Type | Description |
|---|---|---|
| `tlauf.current-pocket` | s32, IN | Current carousel pocket (1-24, 0 = unknown, -1 = invalid) |

The exact location of these nibbles within the short/long RX packet structure needs to be determined during testing. In the BMDC firmware, the values are at `DAT_00003277` and `DAT_00003278` (nibble indices 7-8 from TLAUF RX base 0x3088), meaning they come from nibbles at offset 7 and 8 within the TLAUF's RX nibble array:
- Pocket = `(nibble_7 << 4) | nibble_8`

**IMPORTANT: The TLAUF short RX packet only has 7 nibbles (indices 0-6). Nibble indices 7-8 may come from a different mechanism — possibly a long RX exchange with the TLAUF, or multi-cycle parameter polling. The original BMDC firmware may use additional packet exchanges not yet fully documented. During initial bring-up, capture and log all TLAUF RX data to determine how pocket number is communicated. Start with short RX only and add long/extended exchanges as needed.**

### TLAUF Short TX Outputs (3 nibbles = 12 bits)

In non-VMC / direct-control mode, these are individual output bits:

| HAL Pin Name | Type | Bit | Description |
|---|---|---|---|
| `tlauf.arm-out-cmd` | bit, OUT | 1 | TO1: Arm out motor |
| `tlauf.arm-back-cmd` | bit, OUT | 2 | TO2: Arm back motor |
| `tlauf.carousel-fwd` | bit, OUT | 3 | TO3: Carousel forward |
| `tlauf.carousel-rev` | bit, OUT | 4 | TO4: Carousel reverse |
| `tlauf.drawbar` | bit, OUT | 5 | TO5: Drawbar (tool unclamp) |
| `tlauf.air-blast` | bit, OUT | 6 | TO6: Air blast |

### TLAUF VMC Command Interface

In VMC mode, the TLAUF accepts structured commands via the short TX packet. The component should support sending pocket number commands:

| HAL Pin Name | Type | Description |
|---|---|---|
| `tlauf.target-pocket` | s32, OUT | Target pocket to move to (write 1-24 to command, 0 = no command) |
| `tlauf.pocket-cmd-go` | bit, OUT | Rising edge triggers pocket move command |
| `tlauf.pocket-cmd-done` | bit, IN | Goes high when TLAUF reports matching pocket |
| `tlauf.pocket-cmd-active` | bit, IN | High while a pocket command is in progress |
| `tlauf.pocket-cmd-error` | bit, IN | High if pocket command timed out |

The pocket number command protocol (from BMDC firmware at 0x2e2ee):
1. Send command type 3: `326c=0x07`, `326d=(pocket>>4)` (high nibble)
2. Send command type 2: heartbeat
3. Send command type 3: `326c=0x08`, `326d=(pocket&0xF)` (low nibble)
4. Send command type 2: heartbeat
5. Poll `current-pocket` until it matches target

The command types are encoded into the 3-nibble short TX packet by a protocol state machine. The encoding is:
- Command type is stored in the low nibble of a state byte, bit 7 = send pending
- The protocol builder reads the command type and modifies the TX nibble accordingly
- **The exact on-wire encoding of each command type into the 3 TX nibbles is not yet fully reverse-engineered.** The jump table at 0x138f4 in the BMDC firmware handles this, but the nibble packing details need to be captured with a logic analyzer during initial testing.

**Implementation strategy:** For initial bring-up, implement direct output bit control (non-VMC mode). Add VMC pocket command protocol after capturing actual on-wire packets with a logic analyzer.

### TLAUF Arm Motor Control (VMC Mode)

In VMC mode, arm clamp/unclamp uses command type 1 with `DAT_00003269`:

| HAL Pin Name | Type | Description |
|---|---|---|
| `tlauf.arm-motor-on` | bit, OUT | Arm motor enable |
| `tlauf.arm-motor-cw` | bit, OUT | Arm motor CW |
| `tlauf.arm-motor-ccw` | bit, OUT | Arm motor CCW |

## Diagnostic / Status HAL Pins

| HAL Pin Name | Type | Description |
|---|---|---|
| `dx32.auf-rx-errors` | u32, IN | AUF RX error counter |
| `dx32.tlauf-rx-errors` | u32, IN | TLAUF RX error counter |
| `dx32.auf-tx-count` | u32, IN | AUF packets transmitted |
| `dx32.tlauf-tx-count` | u32, IN | TLAUF packets transmitted |
| `dx32.cycle-time-us` | u32, IN | Last complete cycle time in microseconds |
| `dx32.fault` | bit, IN | Comms fault (too many consecutive errors) |
| `dx32.auf-online` | bit, IN | AUF responding to packets |
| `dx32.tlauf-online` | bit, IN | TLAUF responding to packets |

## Implementation Notes

### Mesa PktUART Interface

The component should use the Mesa FPGA card's PktUART channel. The PktUART provides framed serial I/O with configurable baud rate and frame gaps. Access via the `hostmot2` API:

- Use `hm2_pktuart_setup()` to configure baud rate (19200), 8N1
- Use `hm2_pktuart_send()` to transmit packets
- Use `hm2_pktuart_read()` to receive packets
- The PktUART handles byte-level framing; the component must handle packet-level protocol (sync, data, checksum)

Refer to the Mesa `hostmot2` PktUART documentation and existing components (e.g., `mesa_uart`, smart-serial components) for the API.

### Component Structure

```
dx32_pktuart.c  — single-file userspace HAL component

hal_init("dx32_pktuart")
  ├── Parse command-line args (PktUART channel name, mode, debug level)
  ├── Based on mode, register HAL pins:
  │     mode=auf:   AUF pins + general diagnostic pins
  │     mode=tlauf: TLAUF pins + general diagnostic pins
  │     mode=both:  All pins
  ├── Configure PktUART (38400 baud, 8N1)
  └── Register update function on servo thread

update() — called each servo cycle:
  ├── if (auf_enabled):
  │     ├── Build AUF short TX packet from output HAL pins
  │     ├── Send AUF short TX
  │     ├── Receive AUF short RX, validate checksum, update input HAL pins
  │     ├── Build AUF long TX packet from output HAL pins
  │     ├── Send AUF long TX
  │     └── Receive AUF long RX, validate checksum, update input HAL pins
  ├── if (tlauf_enabled):
  │     ├── Build TLAUF short TX packet from output HAL pins / command state
  │     ├── Send TLAUF short TX
  │     ├── Receive TLAUF short RX, validate checksum, update input HAL pins
  │     └── If VMC pocket command active: manage command state machine
  └── Update diagnostic counters
```

The `auf_enabled` and `tlauf_enabled` flags are set at init based on the `mode=` parameter and do not change at runtime.

### Checksum Calculation

```c
uint8_t calc_checksum(uint8_t *data_nibbles, int count) {
    uint8_t sum = 0;
    for (int i = 0; i < count; i++) {
        sum += data_nibbles[i];
    }
    return (sum & 0x0F) + 0x40;
}
```

### Nibble Encoding/Decoding

```c
// Encode a 4-bit value to hex ASCII
uint8_t nibble_to_ascii(uint8_t nibble) {
    nibble &= 0x0F;
    return (nibble < 10) ? ('0' + nibble) : ('a' + nibble - 10);
}

// Decode hex ASCII to 4-bit value, returns -1 on error
int ascii_to_nibble(uint8_t ch) {
    if (ch >= '0' && ch <= '9') return ch - '0';
    if (ch >= 'a' && ch <= 'f') return ch - 'a' + 10;
    return -1;
}
```

### Long Packet Byte Order

The long packet (18 bytes) encodes 8 data bytes MSB-first:
- Wire nibbles 0-1 → data byte 7 (MSB)
- Wire nibbles 2-3 → data byte 6
- ...
- Wire nibbles 14-15 → data byte 0 (LSB)

### Build

Standard LinuxCNC userspace component build:
```
sudo halcompile --install dx32_pktuart.c
```

Or if using the Mesa hostmot2 PktUART API directly (not via halcompile):
```
gcc -o dx32_pktuart dx32_pktuart.c -llinuxcnchal -lhostmot2
```

### Testing Strategy

Each phase can be run independently using the `mode=` parameter. This allows testing one board at a time without the other board connected.

1. **Phase 1 — AUF short packets (`mode=auf`):** Send `'#'` short TX with all outputs off, verify short RX response. Confirm home switches, E-stop, limit switches match physical state. Use `halcmd show pin auf.*` to monitor.
2. **Phase 2 — AUF long packets (`mode=auf`):** Verify long TX/RX exchange. Test extended I/O (coolant, lube, door guard outputs). AUF can be fully exercised without TLAUF connected.
3. **Phase 3 — TLAUF short packets (`mode=tlauf`):** Send `'&'` short TX, verify short RX inputs (arm sensors, clamp status). TLAUF can be tested with the AUF disconnected or absent.
4. **Phase 4 — TLAUF VMC commands (`mode=tlauf`):** Capture on-wire packets with logic analyzer. Implement pocket number command protocol. Test carousel homing (send pocket 1).
5. **Phase 5 — Combined operation (`mode=both`):** Connect both boards on the shared multidrop RS422 bus. Verify correct packet routing (each board only responds to its sync byte). Test full tool change cycle with all HAL pins connected to LinuxCNC config.

## Reference Documents

All in the same directory as this file:

- `PROTOCOL_NOTES.md` — Full serial protocol spec, UART config, memory maps, TLAUF command protocol
- `AUF_PACKET_FORMAT.md` — Detailed AUF packet encoding, nibble-to-pin mapping, machine config
- `HOMING_SEQUENCE.md` — Carousel homing startup sequence
- `TOOL_CHANGE_STATE_MACHINE.md` — Non-VMC tool change step machine
- `README.md` — Project overview, hardware description
