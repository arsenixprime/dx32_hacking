# Tool Change Homing Sequence (VMC Mode)

## Overview

On startup, the BMDC determines whether the TLAUF knows its current carousel position. If the position is unknown (pocket 0 or 0xFF), the BMDC commands the TLAUF to home to **pocket 1**. The TLAUF HC11 handles all motor control internally.

This document covers the VMC mode path (`DAT_0000c547` bit 0 == 0). Non-VMC mode uses direct I/O control with encoder-based positioning (see `TOOL_CHANGE_STATE_MACHINE.md`).

## Call Chain

```
Interrupt/main loop (0x0dfc4 or 0x0e1e6)
  → Task dispatcher (0x2ca1e)
      Restores saved context, calls FUN_0001b4d4 to get command flags
      Bit 3 set → call FUN_0002fbfc (tool change initialization)
        → FUN_0002f904 (TLAUF protocol setup)
        → FUN_0002e25e (send command 0x0a to TLAUF)
        → FUN_0002e3a6 (read current pocket from TLAUF)
        → If pocket invalid: FUN_0002e2ee (send pocket 1 = HOME)
```

### Firmware Addresses

| Address | Function | Description |
|---------|----------|-------------|
| 0x0dfc4 | — | Main loop caller of task dispatcher |
| 0x0e1e6 | — | Interrupt-driven caller of task dispatcher |
| 0x2ca1e | — | Task dispatcher: saves context, dispatches on flag bits |
| 0x1b4d4 | `FUN_0001b4d4` | Command block processor: returns action bitmask in D0 |
| 0x2fbfc | `FUN_0002fbfc` | Tool change initialization (triggered by D0 bit 3) |
| 0x2f904 | `FUN_0002f904` | TLAUF protocol setup |
| 0x2e25e | `FUN_0002e25e` | Send command byte to TLAUF (D0 = command byte) |
| 0x2e2ee | — | Send target pocket to TLAUF and wait for confirmation |
| 0x2e3a6 | `FUN_0002e3a6` | Read current pocket: `(DAT_00003277 << 4) \| DAT_00003278` |

## Detailed Flow

### Step 1: Drive-Ready (`FUN_0000fb6c` @ 0xfb6c)

When servo drives become ready (DAT_00003250 bit 0), a one-time initialization runs (gated by `DAT_00007785` bit 6):

```c
DAT_000031ee &= 0xf3;       // clear error flags
DAT_0000aecb &= 0xbf;       // clear waiting flag
DAT_0000aecb |= 0x80;       // set step-acknowledged flag
DAT_00007784 &= 0xfb;       // clear busy flag
DAT_0000aecc = 0;            // clear target position
DAT_00003254 = 0;            // clear encoder accumulator
DAT_0000aeca = 0x87;         // carousel state = 0x87 (init)
DAT_000026e0 = 1;            // *** ENABLE TOOL CHANGES ***
FUN_00023db6();              // further initialization
```

### Step 2: Task Dispatcher (0x2ca1e)

The task dispatcher is called from the main loop or interrupt context. It:

1. Saves all registers to `DAT_0000a1dc`
2. Sets up stack (`LEA 0xa65c, A7`)
3. Calls `FUN_0001b4d4` which processes DOS app command blocks and returns an action bitmask in D0
4. Dispatches based on bitmask:
   - **Bit 2**: Set/clear `DAT_0000aef8` bit 7 (FPU flag)
   - **Bit 3**: Call `FUN_0002fbfc` (tool change init / homing)
   - **Bit 8**: Call `FUN_0002d9e0` (axis motion init)
   - **Bit 13**: Additional processing

### Step 3: Tool Change Init (`FUN_0002fbfc` @ 0x2fbfc)

This is the core homing logic. For VMC mode:

```
0x303fc: Check DAT_0000c547 bit 0 (VMC flag)
         If bit set (non-VMC) → skip to 0x3047a (different path)

0x30408: Call FUN_0002f904            ; TLAUF protocol setup
0x30416: D0 = 0x0a
0x3041a: Call FUN_0002e25e            ; send command 0x0a to TLAUF

0x3042e: Call FUN_0002ecb2            ; check condition
         If error → branch to FUN_0002ed82 (abort)

0x30442: Call FUN_0002e3a6            ; read current pocket from TLAUF
0x30446: Compare pocket vs 0
0x3044c: Compare pocket vs 0xFF

         If pocket is valid (1-24):
             → skip to 0x30472 (keep current pocket, no homing needed)

         If pocket is 0 or 0xFF (unknown/invalid):
0x30452:     LEA 0x32737, A0          ; load message string
0x30458:     JSR 0x32176              ; display message (likely "HOMING" or similar)
0x3045e:     MOVEQ #1, D0             ; *** TARGET POCKET = 1 ***
0x30460:     JSR 0x2e2ee              ; *** SEND POCKET 1 TO TLAUF (HOME!) ***
0x30464:     Store result in DAT_00004092   (current tool)
0x30468:     Store result in DAT_00003efc   (tool tracking)
0x3046c:     Store result in _DAT_01200554  (ISA shared: current tool number)

0x30472: Call FUN_00028832            ; continue with tool change setup
         Return
```

### Step 4: Pocket Send Protocol (0x2e2ee)

The pocket number is sent to the TLAUF in two nibbles using command type 3:

```
Input: D0 = target pocket (e.g., 1 for home)

; --- Send high nibble ---
MOVE.B  D0, D1
LSR.B   #4, D1              ; D1 = high nibble (0 for pocket 1)
MOVE.B  D1, 0x326d.w        ; payload = high nibble
MOVE.B  #7, 0x326c.w        ; command byte = 0x07 ("pocket high")
MOVE.B  #3, 0x3260.w        ; command type 3
BSET.B  #7, 0x3260.w        ; set send-pending bit
; [wait for send complete]

; --- Heartbeat ---
MOVE.B  #2, 0x3260.w        ; command type 2 (heartbeat)
BSET.B  #7, 0x3260.w
; [wait for send complete]

; --- Send low nibble ---
MOVE.B  D0, D1
ANDI.B  #0xF, D1            ; D1 = low nibble (1 for pocket 1)
MOVE.B  D1, 0x326d.w        ; payload = low nibble
MOVE.B  #8, 0x326c.w        ; command byte = 0x08 ("pocket low")
MOVE.B  #3, 0x3260.w        ; command type 3
BSET.B  #7, 0x3260.w
; [wait for send complete]

; --- Heartbeat ---
MOVE.B  #2, 0x3260.w
BSET.B  #7, 0x3260.w
; [wait for send complete]

; --- Poll until TLAUF confirms arrival ---
MOVE.B  D0, D1              ; D1 = target pocket (saved)
loop:
    JSR     FUN_0002e3a6     ; D0 = current pocket from TLAUF
    CMP.B   D1, D0           ; target == actual?
    BNE     loop_with_timeout
    RTS                      ; success: carousel is at target pocket
```

### On-Wire Format

For homing to pocket 1, the actual commands sent are:

| Step | 326c (cmd) | 326d (data) | Type | Description |
|------|-----------|-------------|------|-------------|
| 1 | 0x07 | 0x00 | 3 | Pocket high nibble (0) |
| 2 | — | — | 2 | Heartbeat |
| 3 | 0x08 | 0x01 | 3 | Pocket low nibble (1) |
| 4 | — | — | 2 | Heartbeat |

These are encoded into `'&'` short packets (5 bytes each) by the TX protocol builder at 0x136fa and sent via UART Port B at 19200 baud.

## Summary

```
Power On
    │
    v
Drives Ready (DAT_00003250 bit 0)
    │
    v
FUN_0000fb6c: Enable tool changes (DAT_000026e0 = 1)
    │
    v
DOS app sends command block with bit 3 set
    │
    v
FUN_0002fbfc: Read current pocket from TLAUF
    │
    ├── Pocket valid (1-24): Keep it, no homing needed
    │
    └── Pocket invalid (0 or 0xFF):
            │
            v
        Send pocket 1 to TLAUF via command protocol
            │
            v
        TLAUF HC11 autonomously rotates carousel to pocket 1
            │
            v
        Poll until TLAUF reports pocket 1
            │
            v
        Store pocket 1 as current tool in ISA shared memory
```

## Key Insight

The BMDC firmware does **not** send raw motor CW/CCW commands for carousel positioning in VMC mode. The TLAUF's HC11 microcontroller receives a target pocket number and handles all motor control, position sensing, and confirmation internally. The BMDC only needs to:

1. Send the target pocket number (two nibbles via command type 3)
2. Wait for confirmation (poll current pocket via RX parameters 7-8)

Homing is simply "go to pocket 1" when the TLAUF reports an unknown position after power-up.
