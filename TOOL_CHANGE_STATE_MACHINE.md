# Tool Change State Machine (Non-VMC / Direct I/O Mode)

## Overview

**Note:** This document describes the **non-VMC** tool change path where the BMDC directly controls carousel motor outputs and uses encoder-based positioning. In **VMC mode**, the BMDC instead sends target pocket numbers to the TLAUF, which handles motor control internally. See `HOMING_SEQUENCE.md` and the TLAUF TX Command Protocol section in `PROTOCOL_NOTES.md` for VMC mode details.

The tool change is driven by two nested state machines:

1. **Outer state machine** (`DAT_00003c54`, states 0-7) — manages the call stack of tool change subroutines
2. **Inner step machine** (`DAT_0000aeca`, steps 0x01-0x0F) — executes the actual physical tool change sequence

The outer state machine is a subroutine call/return mechanism (with a 4-deep stack at `DAT_00003c1c`). The inner step machine does the real work, driven by `FUN_0003407a` and `FUN_00034620`.

## Key Variables

```
DAT_00003c54  - outer state (0-7)
DAT_00003c44  - tool change active count (0 = idle)
DAT_00003c40  - subroutine stack pointer
DAT_00003c1c  - subroutine return address stack (4 entries)
DAT_00003c4c  - current tool change context
DAT_00003c50  - saved program pointer
DAT_00003c60  - completion flag (-1 = done)
DAT_00003c64  - secondary completion flag
DAT_00003c6c  - gear ratio target (-1 = none)

DAT_0000aeca  - inner step number (0x01-0x0F), bit 7 = "step complete" flag
DAT_0000aecb  - step flags:
                  bit 1 (0x02) = direction flag (for carousel)
                  bit 2 (0x04) = "at position" (carousel position sensor near)
                  bit 3 (0x08) = "position locked" (carousel sensor confirmed)
                  bit 5 (0x20) = error/abort
                  bit 6 (0x40) = "waiting for completion"
                  bit 7 (0x80) = "step acknowledged / advance"

DAT_0000aecc  - target carousel position (encoder counts)
DAT_0000aed0  - current carousel position (from encoder)
DAT_0000aedc  - reference carousel position (captured at step start)
DAT_0000aed8  - speed ratio (0x640 = 100%)

DAT_00003250  - TLAUF output byte (8 physical outputs)
DAT_00003248  - TLAUF input word (from '&' RX packet)
DAT_00003252  - status flags:
                  bit 0 (0x01) = orient/position confirmed
                  bit 2 (0x04) = clamp confirmed
                  bit 5 (0x20) = spindle orient
                  bit 6 (0x40) = carousel direction indicator

DAT_00007778  - system tick counter (2ms per tick)
DAT_0000af68  - timeout reference tick
DAT_00003254  - encoder accumulator
```

## Outer State Machine (DAT_00003c54)

```
State 0: IDLE / TIMER_WAIT
    - Check if timer-based tool changes are pending (DAT_00003b88)
    - If pending: decrement timer, when expired load next subroutine
    - Otherwise: fall through to common processing

State 1: LOAD_SEQUENCE
    - Decrement sequence counter (DAT_00003b40)
    - Bounds check (0 <= counter <= 8)
    - Load next G-code block from sequence table
    - If counter == 0: TRAP error (sequence exhausted)
    - Set DAT_0000aeb2 = program pointer
    - Set state = 0

State 2: POP_AND_CONTINUE
    - Decrement sequence counter (DAT_00003b40)
    - Load tool offset from table at 0x3344[counter]
    - Copy to working offset at 0x336c
    - Set state = 0
    - Jump to common processing

State 3: LOAD_FROM_TABLE
    - Load from error string table at 0x268f6
    - Bounds check tool change depth (0 <= DAT_00003c4c <= 11)
    - Set DAT_0000aeb2 = table entry
    - Set state = 0

State 4: VALIDATE_POCKET
    - Load pocket table at 0x3c74
    - Bounds check pocket number (1 <= DAT_00003c4c <= 29)
    - Validate pocket pointer is non-null
    - Set DAT_0000aeb2 = pocket data
    - Set state = 0

State 5: PUSH_SUBROUTINE (called by FUN_00020422)
    - Push return address onto stack (DAT_00003c1c[stack_ptr])
    - Increment stack pointer (DAT_00003c40), max depth = 4
    - Set state = 0 (will execute the loaded subroutine)

State 6: POP_SUBROUTINE
    - Decrement stack pointer (DAT_00003c40)
    - Pop return address from stack
    - Save to DAT_00003c50
    - If stack empty (DAT_00003c40 == 0):
        - Clear "in motion" bit
        - If mode == 2: set "jog complete" bit
        - If gear change pending: apply gear change, set state = 0
        - Else: done
    - Set state = 0

State 7: COMPLETE
    - Clear error bits in DAT_000032e0 (bits 2,3,4)
    - Set DAT_00003c60 = -1 (completion flag)
    - If DAT_00003c64 != -1: set secondary flag, OR 0x10 into DAT_00004089
    - Else: call FUN_0000df20 (notify completion)
    - Restore program pointer (DAT_0000aeb2 = DAT_00003c50)
    - Clear counters
    - Set state = 0
    - Reload all axis positions from encoders
```

## Inner Step Machine (DAT_0000aeca)

This runs inside the outer state 0 processing. Each servo cycle (~2ms), `FUN_0003407a` is called. It:

1. Reads the current carousel encoder position via `FUN_00036148`
2. Checks if the carousel position has changed significantly (triggers re-seek)
3. Checks for E-stop (`DAT_01200815` bit 7) — aborts if set
4. Dispatches based on `DAT_0000aeca` step number

### Step Execution Flow

Each step has two phases:
- **Initiate** (`FUN_00034620`): Called when `aecb` bit 7 is set and bit 6 is clear — sets up outputs for this step
- **Wait/Monitor** (`FUN_0003407a`): Called each cycle when `aecb` bit 6 is set — checks if step is complete

When a step completes, bit 6 of `aecb` is cleared and bit 7 is set, advancing to the next step.

### Pseudocode

```
function tool_change_tick():
    // Called every servo cycle (~2ms)

    current_position = read_carousel_encoder()

    // Check for position drift (carousel moved unexpectedly)
    if carousel_position_confirmed:
        drift = abs(abs(encoder_accumulator) - current_position)
        if drift > current_position / 16:
            // Position lost! Re-seek from step 1
            if step not in [0x0F, 0x0B, 0x0A]:
                step = 1
                flags = WAITING
    
    // Check E-stop
    if DPRAM[0x815] & 0x80:
        step &= 0x7F        // clear completion bit
        flags |= ERROR
        clear_orient_confirmed()
        abort_tool_change()
        return
    
    // Nothing to do if no step pending
    if not (step & 0x80) and not (flags & WAITING):
        return
    
    raw_step = step & 0x7F

    // === CAROUSEL ROTATION STEPS (0x0A, 0x0B) ===
    if raw_step == 0x0A or raw_step == 0x0B:
        step &= 0x7F
        flags = WAITING | POSITION_LOCKED
        speed_ratio = (current_pos * 1600) / reference_pos
        
        // Check if reached target pocket
        if current_pos <= pocket_boundary[direction] and raw_step == 0x0B:
            flags = ACKNOWLEDGED
            outputs &= 0xCF     // stop carousel motors
            step = 0             // done with this rotation
            return
        if current_pos >= pocket_boundary[direction] and raw_step == 0x0A:
            flags = ACKNOWLEDGED
            outputs &= 0xCF     // stop carousel motors
            step = 0             // done with this rotation
            return
        
        // Still rotating — set motor direction
        if door_interlock_clear:
            if raw_step == 0x0A:
                outputs = (outputs & ~0x20) | 0x10   // motor CW
            else:
                outputs = (outputs & ~0x10) | 0x20   // motor CCW
        return

    // === STEP INITIATION (flags.bit7 set, flags.bit6 clear) ===
    if (step & 0x80) and not (flags & WAITING):
        step &= 0x7F
        flags = (flags & 0x5F) | WAITING
        initiate_step(step)
        return

    // === STEP MONITORING (flags & WAITING) ===
    // (flags.bit6 set, waiting for completion)

    switch raw_step:

        case 0x01:  // SEEK TO TARGET POCKET
            // Check if carousel at target
            drift = abs(abs(encoder_accum) - current_pos)
            if drift <= current_pos / 16:
                // Reached target
                outputs &= 0xCF          // stop carousel motors
                flags = ACKNOWLEDGED
                record_pocket_position()
                return
            // Still seeking — set direction
            if abs(encoder_accum) < current_pos:
                outputs = (outputs & ~0x10) | 0x20  // CCW
            else:
                outputs = (outputs & ~0x20) | 0x10  // CW
            return

        case 0x05:  // WAIT FOR ORIENT
            elapsed = system_tick - timeout_ref
            if elapsed > 25:         // ~50ms timeout
                if orient_confirmed:
                    flags = ACKNOWLEDGED
                    return
                if elapsed > 45:     // ~90ms hard timeout
                    TRAP(error)
                    flags = ERROR
                return
            return

        case 0x06:  // ADVANCE (simple acknowledge)
            flags = ACKNOWLEDGED
            return

        case 0x07:  // WAIT FOR ORIENT RELEASE
            if not orient_confirmed:
                flags = ACKNOWLEDGED
                return
            if elapsed > 45:         // ~90ms timeout
                TRAP(error)
                flags = ERROR
            return

        case 0x08:  // SEEK CW WITH ORIENT CHECK
            // Check if oriented AND at CW position
            if (outputs & 0x01) and (outputs & 0x04):
                orient_flag |= CONFIRMED
                flags = ACKNOWLEDGED
                return
            reference_pos = target_pos
            read_encoder()
            if not (outputs & 0x01):
                timeout_ref = system_tick
            outputs = (outputs & 0x77) | 0x05  // enable + CW
            if not orient_confirmed:
                if elapsed > 45:     // ~90ms timeout
                    TRAP(error); abort(); return
                return
            record_pocket_position()
            orient_flag |= CONFIRMED
            flags = ACKNOWLEDGED
            return

        case 0x09:  // SEEK CCW WITH ORIENT CHECK
            // Same as 0x08 but CCW direction
            if (outputs & 0x01) and (outputs & 0x08):
                orient_flag |= CONFIRMED
                flags = ACKNOWLEDGED
                return
            reference_pos = target_pos
            read_encoder()
            if not (outputs & 0x01):
                timeout_ref = system_tick
            outputs = (outputs & 0x7B) | 0x09  // enable + CCW
            if not orient_confirmed:
                if elapsed > 45:
                    TRAP(error); abort(); return
                return
            record_pocket_position()
            orient_flag |= CONFIRMED
            flags = ACKNOWLEDGED
            return

    // If step has completion bit set and not in WAITING state:
    if (step & 0x80) and not (flags & WAITING):
        step &= 0x7F
        flags = (flags & 0x5F) | WAITING
        initiate_step(step)
```

### Step Initiation (`FUN_00034620`)

```
function initiate_step(step):
    switch step:

        case 0x01:  // START CAROUSEL SEEK
            target = target_pocket_position
            if abs(target) out of bounds:
                clamp to limits; TRAP error; abort
                return
            if not (outputs & 0x01):        // spindle not oriented
                reference_pos = target
                read_encoder()
                flags = ACKNOWLEDGED        // skip orient, go straight to seek
            else:
                // Oriented — check direction
                if carousel_dir_indicator:
                    if target > upper_bound: abort; return
                else:
                    if target < lower_bound: abort; return
                reference_pos = target
                if direction_flag:
                    reference_pos = -target
                read_encoder()
            return

        case 0x05:  // REVERSE CAROUSEL DIRECTION
            if not (outputs & 0x04) and not (outputs & 0x08):
                // Motors already stopped — advance
                flags = ACKNOWLEDGED | ERROR  
                return
            orient_flag &= ~CONFIRMED
            flags &= ~POSITION_LOCKED
            outputs ^= 0x0C          // toggle CW/CCW bits
            flags ^= DIRECTION       // toggle direction flag
            read_encoder()
            timeout_ref = system_tick
            return

        case 0x06:  // SIMPLE ADVANCE
            flags = ACKNOWLEDGED
            return

        case 0x07:  // STOP ALL MOTORS, SET CYCLE ACTIVE
            encoder_accum = 0
            outputs = (outputs & 0xC2) | 0x80   // clear motors, set cycle_active
            timeout_ref = system_tick
            return

        case 0x08:  // START CW ROTATION
            if target < 0: target = -target
            flags &= ~DIRECTION
            validate_and_start()
            return

        case 0x09:  // START CCW ROTATION
            if target < 0: target = -target
            flags |= DIRECTION
            validate_and_start()
            return

        case 0x0F:  // COMPLETE — CALCULATE SPEED RATIO
            flags = ACKNOWLEDGED | ERROR
            outputs &= 0xCF              // stop carousel motors
            if reference_pos == 0:
                speed_ratio = 0x640       // 100%
            else:
                speed_ratio = (current_pos * 0x640) / reference_pos
            return

        default:
            flags = ACKNOWLEDGED | ERROR
            return
```

### Abort Function (`FUN_00034984`)

```
function abort_tool_change():
    encoder_accum = 0
    outputs = (outputs & 0xC2) | 0x80    // stop motors, keep cycle_active
    flags = ACKNOWLEDGED
    clear_safety_interlock()
```

## Timeouts

All timeouts are based on `DAT_00007778` (system tick, 2ms per tick):

| Timeout | Ticks | Time | Used In |
|---------|-------|------|---------|
| Orient wait | 25 | ~50ms | Step 0x05: initial orient settle time |
| Hard timeout | 45 (0x2D) | ~90ms | Steps 0x05, 0x07, 0x08, 0x09: max wait for sensor confirmation |
| Debounce | 12 (0x0C) | ~24ms | `DAT_00003104`: output change debounce timer |

## State Diagram

```
                            Tool Change Request
                                    |
                                    v
                    ┌───────────────────────────────┐
                    │     STATE 5: PUSH_SUBROUTINE  │
                    │  Push return addr onto stack   │
                    │  Load tool change program      │
                    └───────────────┬───────────────┘
                                    |
                                    v
                    ┌───────────────────────────────┐
                    │     STATE 0: IDLE / EXECUTE    │◄──────────────────┐
                    │  Run inner step machine        │                   │
                    │  (FUN_0003407a each 2ms)       │                   │
                    └───────────────┬───────────────┘                   │
                                    |                                    │
                         Step sequence                                   │
                         completes                                       │
                                    |                                    │
                                    v                                    │
                    ┌───────────────────────────────┐                   │
                    │     STATE 6: POP_SUBROUTINE   │                   │
                    │  Pop return address from stack │                   │
                    └──────────┬────────────────────┘                   │
                               |                                         │
                    ┌──────────┴──────────┐                             │
                    │                     │                              │
              Stack empty          Stack not empty                       │
                    │                     │                              │
                    v                     └──────────────────────────────┘
        ┌───────────────────────┐
        │  STATE 7: COMPLETE    │
        │  Clear errors         │
        │  Reload axis pos      │
        │  Notify host          │
        └───────────────────────┘


    ═══════════════════════════════════════════════════════
    INNER STEP MACHINE (runs inside State 0, every 2ms)
    ═══════════════════════════════════════════════════════

    ┌─────────────┐
    │ Step 0x07   │   STOP & PREP
    │ Stop motors │──────────────────────────────────┐
    │ Set ACTIVE  │                                   │
    └─────────────┘                                   │
                                                      v
    ┌─────────────┐     ┌─────────────┐     ┌─────────────┐
    │ Step 0x01   │     │ Step 0x08   │     │ Step 0x09   │
    │ SEEK TARGET │     │ SEEK CW     │     │ SEEK CCW    │
    │ (auto-dir)  │     │ + orient    │     │ + orient    │
    └──────┬──────┘     └──────┬──────┘     └──────┬──────┘
           │                   │                    │
           │    ┌──────────────┴────────────────────┘
           │    │
           v    v
    ┌─────────────┐
    │ Step 0x05   │   WAIT FOR ORIENT
    │ Wait ≤50ms  │   (orient sensor = input bit 5)
    │ Hard: 90ms  │
    └──────┬──────┘
           │
           v
    ┌─────────────┐
    │ Step 0x06   │   ADVANCE (acknowledge)
    │ Immediate   │
    └──────┬──────┘
           │
           v
    ┌─────────────────────┐
    │ Steps 0x0A / 0x0B   │   CAROUSEL ROTATE
    │ CW (0x0A) / CCW(0B) │   Monitor encoder
    │ Until pocket reached │   Update motor bits
    └──────┬──────────────┘
           │
           v
    ┌─────────────┐         ┌─────────────┐
    │ Step 0x05   │         │ Step 0x07   │
    │ REVERSE DIR │────────►│ WAIT RELEASE│
    │ Toggle CW↔CC│         │ ≤90ms       │
    └─────────────┘         └──────┬──────┘
                                   │
                                   v
                            ┌─────────────┐
                            │ Step 0x0F   │   COMPLETE
                            │ Stop motors │
                            │ Calc speed  │
                            └─────────────┘


    ═══════════════════════════════════════════════
    TLAUF OUTPUT BITS DURING TOOL CHANGE
    ═══════════════════════════════════════════════

    DAT_00003250 bit assignments (from code analysis):

    Bit 0 (0x01): Orient/enable
        Set by: steps 0x08 (|= 0x05), 0x09 (|= 0x09)
        Cleared by: step 0x07 (&= 0xC2)

    Bit 1 (0x02): (used in some machine types for clamp)
        Set by: specific machine-type mapping

    Bit 2 (0x04): Carousel motor CW
        Set by: step 0x08 (|= 0x05), seek CW
        Cleared by: step 0x07 (&= 0xC2), stop (&= 0xCF)
        Toggled by: step 0x05 (^= 0x0C)

    Bit 3 (0x08): Carousel motor CCW
        Set by: step 0x09 (|= 0x09), seek CCW
        Cleared by: step 0x07 (&= 0xC2), stop (&= 0xCF)
        Toggled by: step 0x05 (^= 0x0C)

    Bit 4 (0x10): Carousel fast CW
        Set by: rotation step 0x0A (|= 0x10)
        Cleared by: step 0x07 (&= 0xC2), stop (&= 0xCF)

    Bit 5 (0x20): Carousel fast CCW
        Set by: rotation step 0x0B (|= 0x20)
        Cleared by: step 0x07 (&= 0xC2), stop (&= 0xCF)

    Bit 6 (0x40): (never set — unused on this machine)

    Bit 7 (0x80): Cycle active
        Set by: step 0x07 (|= 0x80), abort (|= 0x80)
        Cleared by: completion (&= 0x7F)
```

## Typical Tool Change Sequence (Reconstructed)

```
1. G-code triggers M06 (tool change)
2. Outer state machine pushes subroutine (State 5)
3. Inner steps execute:

   Step 0x07: STOP & PREPARE
       outputs = 0x80 (cycle active, all motors off)
       timeout_ref = now

   Step 0x01: SEEK TO TARGET POCKET
       Set carousel direction based on shortest path
       Enable carousel motor (CW or CCW)
       Monitor encoder until target pocket reached
       (± 1/16 of reference position tolerance)

   Step 0x05: WAIT FOR ORIENT CONFIRM
       Wait up to 50ms for orient sensor
       Hard timeout at 90ms → error

   Step 0x08 or 0x09: SLOW SEEK WITH ORIENT
       Enable orient + slow carousel rotation
       outputs |= 0x05 (CW) or |= 0x09 (CCW)
       Wait for orient_confirmed AND position sensor
       Timeout: 90ms → error

   Step 0x0A or 0x0B: FAST CAROUSEL ROTATE
       Full speed CW (0x0A) or CCW (0x0B)
       Bits 4/5 set for fast rotation
       Monitor encoder, stop at pocket boundary
       Speed ratio calculated for diagnostics

   Step 0x05: REVERSE IF OVERSHOT
       Toggle CW↔CCW (XOR 0x0C on bits 2,3)
       Re-seek

   Step 0x0F: COMPLETE
       Stop all carousel motors
       Calculate actual vs expected speed ratio
       Advance to next G-code block

4. Outer state machine pops subroutine (State 6)
5. If stack empty → State 7 (COMPLETE)
6. Reload axis positions, notify host PC
```
