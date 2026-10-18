# BMDC Motion Planner: Accel/Decel Profiles (Parameter 010)

How the BMDC firmware plans velocity along a move, and what parameter 010
("Accel/Decel Profile Selection") actually changes. All addresses are in
`BMDC.BIN` loaded at 0. Disassembly references are to `decompiled/BMDC.asm`
(Ghidra's decompiler drops most of this code because it cannot model
`FMOVECR` and packed-decimal FPU instructions; use the listing).

## How parameters reach the firmware

The firmware keeps a parameter table at **0x2a536**: 288 entries of
`{u32 address, u16 type}` indexed by parameter number (full dump in
`BMDC_PARAM_TABLE.md`). The DOS side sets or reads a parameter through the
0x400 mailbox (`PROTOCOL_NOTES.md`, "PC-to-BMDC mailbox commands"):

| mailbox cmd | handler | action |
|---|---|---|
| 0x1b | 0x2abf6 | read: index at +0x404, value returned as 68882 packed decimal (BCD) at +0x406 |
| 0x1c | 0x2ad24 | write: index at +0x404, BCD value at +0x406, stored at `table[idx].address` using `table[idx].type` (0 byte, 1 word, 2 long, 3 extended, 4 packed bit field unpacked into the long array at 0x1038) |
| 0x24 | 0x2b3b8 | `installParams`: recompute derived values (lead/encoder scaling at 0x12064, tool-change timing at 0x364ea). The first call, 0x2c230, is a stub `rts` in this build |

Parameter values are integers in firmware position units per interpolator
tick. **1 unit is 10 nm**: the finalizer converts program units with
0x23fe0, which multiplies by 2,540,000 per inch or 100,000 per mm (`BMDCPRMS.SYS`
param 18 = 56,388,000 = 22.2 in of X travel; `BMDCPRMS.INI` 101,600,000 = 40 in).
The C axis uses 250,000 units per degree (C-word handler 0x1f088).
**The interpolator tick is 4 ms (250 Hz)**: the SCN2681 counter/timer (3.6864 MHz,
CTUR:CTLR = 230, timer mode) interrupts at 8.01 kHz, and the level-2 ISR walks a
32-entry phase table at 0x111d0 that runs the servo/interpolator routine
0x16860 in one phase only. The feed-word scale constants confirm it: 1 in/min
is 169.333 units/tick = 2,540,000 / (60 * 250), 1 mm/min is 6.667 and
1 deg/min is 16.667. Param 11 in `BMDCPRMS.SYS` is 169 (1 ipm), param 3 is
8467 (50 ipm), param 9 is 6773 (40 ipm), param 7 is 79,925 (472 ipm).

Motion-related parameters and their firmware variables (all 32-bit longs):

| # | address | meaning |
|---|---|---|
| 1 | 0x0f9c | Lo-speed acceleration (units/tick per tick) |
| 2 | 0x0fa0 | Hi-speed acceleration |
| 3 | 0x0fa4 | Acceleration breakpoint velocity |
| 4 | 0x0fa8 | Deceleration |
| 5 | 0x0fac | Spindle (S axis) acceleration |
| 6 | 0x0fb0 | Spindle deceleration |
| 7 | 0x0fb4 | Max traverse rate X/Y/C |
| 8 | 0x0fb8 | Z traverse rate |
| 10 | 0x11c8 | **Accel/decel profile selection** |
| 11 | 0x0fc4 | Residual feedrate for DLT ramp (floor velocity at end of move) |

The firmware also carries two built-in default parameter sets at 0x1c2d0 and
0x1c3b0 (selected by the long at 0xafc4), copied into 0x0f9c.. at init by
0x1c174. The PC overwrites them from `BMDCPRMS.SYS` at startup.

## Where the profile is chosen

Each interpolator iteration ends in 0x16df6, which computes the commanded
velocity for this tick (feed/rapid target, override, traverse-rate clamps,
look-ahead distance limit) and then selects the planner:

```
if (param10 == 0)             trapezoid  (0x1b956)
else if ((0xbd9 bit0) == 0)   S-curve    (0x1ba5a)
else                          trapezoid
```

Bit 0 of 0xbd9 is never set anywhere in this firmware, so in practice
parameter 10 alone decides. The S-curve planner additionally falls back to the
trapezoid for some motion modes: mode byte 0x10d9 equal to 0x0c, 0x0d, 0x0f or
0x13, or mode 0 when the extended values at 0xdb0/0xdbc are nonzero, when
0x10d8 bit 3 is set, or when 0x7784 bit 6 is set. The modes are named in the
move-type table below (0xc rotary-coordinated, 0xd spindle orient, 0xf threading,
0x13 drive-enable rapid); 0x10d8 bit 3 and 0x7784 bit 6 are the straight-through
block and its mid-block cancellation, explained under "mcBit3 and 0x7784 bit 6".

Register convention inside both planners: `D3` = current velocity
(units/tick), `D2` = target velocity for this tick. The planner returns the new
`D3`.

## Parameter 10 = 0: trapezoidal planner (0x1b956)

Classic constant-acceleration ramping, one step per tick:

1. **Accelerating** (`D2 > D3`): step = param 1 if `D3 < param 3`
   (breakpoint), else param 2. If the S axis is involved (extended 0xd38
   nonzero and 0x26e0 == 0), step = param 5 instead.
2. Apply the feed-override creep factor (0x1702a scales `D3` by
   0.9995..0.997 depending on 0x11c4).
3. **Decelerating** (`D2 < D3`): step = -param 4 (or -param 6 for spindle).
4. `D3 += step`, clamped at 0 and at the target `D2`.
5. **End-of-move ("DLT") ramp**: unless the mode byte is 0x0d or 0x03 or
   0x10d8 bit 3 is set, compute the velocity that can still be stopped from
   within the remaining distance `d` (0x10f0, or 0x1340 when 0x10d8 bit 5):
   `vlim = sqrt(2 * decel * d) - decel/2`. If `D3 > vlim`, set
   `D3 = max(vlim, param 11)`. Param 11 is the "stop on a dime" floor.

So with parameter 10 = 0 the acceleration is piecewise constant (two levels
split at the breakpoint), deceleration is a separate constant, and the end of
the move is a square-root ramp-down. Jerk is unlimited at every corner of the
velocity profile.

The stopping-distance helper used by the look-ahead for this mode is 0x18116:
`dist = v*n + a*(n + n^2)/2` with `n = dv/a + 15` ticks, split across lo/hi
acceleration at the breakpoint.

## Parameter 10 != 0: S-curve planner (0x1ba5a)

This planner ignores parameters 2, 3 and 4 entirely. It is "based solely on
parameter 1" (param 5 replaces param 1 when the S axis is involved). The active
value is copied to 0x11cc.

### Ramp setup (0x1bf30)

Whenever the target velocity changes (acceleration, deceleration, or the
look-ahead deciding the move must start stopping), the planner starts a new
ramp from `v0 = D3` to `v1 = D2`:

```
N      = trunc(|v1 - v0| / param1) + 15        ticks (0x11e0)
theta  = pi                                    (0x11ec, float)
dtheta = pi / N                                (0x11e8)
0x11d0 = v0,  0x11d8 = v1 - v0
```

The `+15` guarantees a minimum ramp length of 15 ticks (60 ms) even for
tiny velocity changes. Over the whole ramp the average acceleration is
`|dv| / N`, which approaches param 1 for large changes.

### Per-tick evaluation (0x1be60)

```
theta += dtheta
if theta >= 2*pi: theta = 2*pi, ramp finished (clear 0x11f0/0x11f1/0x11f2)
f = shape(theta)                       -- 0x1bfee, selected by param 10
v = v0 + (v1 - v0) * (1 + f) / 2
if v != 0 and v < min(param11, programmed feed): v = that minimum
```

`shape()` maps theta in [pi, 2pi] onto [-1, +1], so `(1+f)/2` runs 0 -> 1 and
the velocity glides from `v0` to `v1`. The shape of that glide is the only
thing parameter 10 changes:

| param 10 | shape(theta) on [pi, 2pi] | character |
|---|---|---|
| 1 | three straight segments: slope 1/(2pi) until 1.1pi, slope 0.756 until 1.9pi, slope 1/(2pi) to 2pi (values -1, -0.95, +0.95, +1) | almost a straight ramp; only the first and last 5% are softened. Closest to the trapezoid |
| 2 | three straight segments: slope 1/pi until 1.25pi, slope 0.955 until 1.75pi, slope 1/pi to 2pi (values -1, -0.75, +0.75, +1) | piecewise-linear S: half-rate accel for the first and last quarter, 1.5x in the middle |
| 3 | cos(theta), with the arc between 1.25pi and 1.75pi replaced by its chord (slope 0.900) | cosine ends, straight middle |
| 4 | cos(theta), with the arc between 1.375pi and 1.625pi replaced by its chord (slope 0.972) | cosine with a short straight middle |
| 5 and above | cos(theta) | pure sinusoidal S-curve |
| negative | returns theta unchanged (not meaningful, do not use) | |

The breakpoints and slopes are chosen so every curve is continuous and passes
through the same end points; the chords in 3 and 4 are exactly the straight
line between the two cosine points they replace.

### What that means for acceleration

Instantaneous acceleration during a ramp is `dv/dtick = (dv/2) * f'(theta) * pi/N`,
i.e. roughly `(pi/2) * param1 * f'(theta)`. Relative to param 1:

| param 10 | accel at ramp start/end | peak accel (mid-ramp) |
|---|---|---|
| 0 (trapezoid) | 1.00 | 1.00 (param 1 or 2 by breakpoint) |
| 1 | 0.25 | 1.19 |
| 2 | 0.50 | 1.50 |
| 3 | 0 | 1.41 |
| 4 | 0 | 1.53 |
| 5+ | 0 | 1.57 |

Higher settings give a smoother start and stop (3, 4 and 5 start with zero
acceleration, which is what limits jerk) at the price of a higher peak
acceleration for the same param 1, because the ramp still has to complete in
roughly the same number of ticks. Setting 1 is the "safe" S-curve: nearly the
trapezoid's timing with the corners knocked off. Setting 5 is the smoothest and
demands the most from the drives mid-ramp. If a machine was moved from
profile 0 or 1 to 5 without lowering parameter 1, its peak acceleration went up
by about 57%.

### Deceleration and look-ahead in S-curve mode

The same ramp machinery is used to stop. 0x1bf6a computes the distance an
S-curve ramp from the current velocity to zero will cover,
`n = trunc(v / param1) + 15`, `dist = v * (n - 1) / 2`, and compares it with the
remaining distance of the move. When the remaining distance drops to that
figure (0x1bd00 region), the planner starts a ramp to 0 with the appropriate
phase offset (0x11e4) so the stop lands on the end point. The per-tick floor of
`min(param 11, feed)` still applies, so the final approach is at the residual
feedrate just like the trapezoid's DLT ramp.

Flags: 0x11f0 = accelerating ramp active, 0x11f1 = decelerating ramp active,
0x11f2 = stopping ramp (end of move) active, 0x11dc = velocity cap from the
stopping-distance check. 0x133d forces a re-plan.

### Debug trace

While a ramp is active the planner appends `{N, programmed feed, v}` triples to
a 248-byte ring at 0x7660 (pointer 0x14ca). This is a leftover development
trace; nothing reads it.

## Practical summary for the DIY controller

* Parameter 10 = 0: trapezoid, accel param 1 below the breakpoint (param 3),
  param 2 above it, decel param 4, square-root end ramp floored at param 11.
* Parameter 10 = 1, 2, 3, 4, 5: symmetric S-curve, ramp time
  `|dv|/param1 + 15 ticks`, velocity shape from the table above. Params 2, 3,
  4 are ignored. Decel uses the same param 1.
* Machines seen with 0, 1, 2 and 5: these are, respectively, trapezoid,
  near-trapezoid S, piecewise-linear S, and full cosine S. Values 3 and 4 are
  valid but apparently unused in the field.
* LinuxCNC's trajectory planner is trapezoidal with optional jerk limiting
  depending on version. To match a DX32 set to 5, use the DX32's param 1
  (converted from units/tick^2 to in/s^2 using the 4 ms tick and 2.54e6
  units/in) as the average acceleration and expect about 1.57x that as the
  peak.

## Trapezoid fallback conditions, decoded

The active block's header bytes at 0x10d8..0x10db are the `MOVCMD` word plus
`movQparam` from B3T's `MOVEBUFFER` struct (CodeView types in `B3T.EXE`):

| byte | B3T name | bits |
|---|---|---|
| 0x10d8 | MOVCMD high byte | bit7 mcValid, bit6 mcFdOvr, bit5 **mcNoDecel**, bit4 mcSpReqd, bit3..0 mcBit3..mcBit0 |
| 0x10d9 | mcMoveType | move type code (below) |
| 0x10e4 | block flag byte (entry +0x1d3) | bit0 = no end-of-block ramp at all |

Move type codes are written by the block finalizer (0x22874) into 0x408b and
loaded to 0x10d9. The interpolator dispatches on them through the 20-entry
table at 0x16d74 (`jsr ([A1],D1*4)` at 0x16ce8):

| type | executor | meaning |
|---|---|---|
| 0 | 0x17824 | G1 linear feed move (finalizer: motion code 1 -> type 0) |
| 1 | 0x184f2 | linear variant, probably arcs are built on this; not confirmed |
| 2 | 0x19126 | G0 rapid (finalizer: motion code 0 -> type 2, with traverse-rate feed) |
| 3 | 0x1a1cc | homing move: feed = param 9, param word = axis mask (0 means all), per-axis switch tables. Queued by the finalizer (0x2315a) and by mailbox homeAxes (0x28716) |
| 4 | 0x1963c | queued only by the drive-enable sequencer (0xf204 in FUN_0000f15c, param word 0xc or 0x10); purpose not identified |
| 5 | 0x1aa46 | **touch-probe move**: feed = param 14, arms the probe interrupt, after a hit continues param 15 then backs off param 16 |
| 6 | 0x1ac3a | latch encoder positions into the position registers (set-zero / capture) |
| 7 | 0x1af6c | encoder index-pulse seek on one axis (param = axis, bit 7 = direction), creeps at param 11; produced by G100 |
| 8, 9 | 0x1888c, 0x1adc4 | not identified (9 restores positions with limit clamping) |
| 10, 11 | 0x1abaa, 0x1ac06 | arm / disarm the probe interrupt |
| 0xc | 0x191f4 | **G117/G118/G119 rotary-coordinated linear move** (see below) |
| 0xd | 0x1b10e | spindle index search (orient) using param 36 resolution. **Producer: the tool-change orient step 0x2f5d4** (called from the tool-change sequencer at 0x2e240, 0x2e540, 0x2e56e, 0x2e5fe, 0x2ed9e) writes 0xd straight into the pending block slot at 0x2f766 (`move.w #0xd,(2,A0)` with A0 = the next-block pointer 0x5bc, after 0xe2fa refreshed that slot from the 0x9d8 working block), then hands it to 0x30d26. Only when master configuration parameter 98 (0xaf58) bits 8-11 == 2. No G-code and no mailbox command can produce it |
| 0xe | 0x19ce8 | **jog move**: queued by mailbox setJog (command 5, subcommand 2, at 0x28804) |
| 0xf | 0x1945e | G33/G34 threading |
| 0x10, 0x11 | 0x1990a, 0x19a74 | special moves (B3T doMove types 8, 9) |
| 0x12 | 0x18c0a | G7 block |
| 0x13 | 0x191ee | wraps the rapid executor; queued only by the drive-enable sequencer (0xed62 in FUN_0000eb14 and 0xf070 in FUN_0000ee4e), each time with the continuation address written to 0x9fd2 first |

Every queued block goes through 0x2b4d6 (type in the low word of D0, param in the
high word; it sets mcValid and copies 0xaef8 bit 7 into byte 1 bit 2 of the entry)
except the finalizer, which fills the build area 0x4088 directly, and the orient step
above, which patches the type into an existing slot. The PC's doMove (mailbox 1)
puts its type 0-9 in movQflags and the handler 0x27e20 maps it through the table at
0x27e0c to mcMoveType 0, 1, 2, 2, 4, 5, 8, 9, 0x10, 0x11 (anything above 9 sets the
error bit at dual-port +0x402), so the PC cannot queue types 3, 6, 7, 0xa-0xf, 0x12 or
0x13 directly; probePoint (0x2b302) queues type 5 and homeAxes (0x28716) type 3.

The S-curve planner (0x1ba5a) hands the block to the trapezoid when:

* mcMoveType is 0xc (G117-119 rotary-coordinated), 0xd (spindle index search), 0xf (threading) or 0x13 (enable-path rapid);
* the block is a **rapid** (type 0) and the 4th or 5th axis participates
  (direction cosines at 0xdb0 / 0xdbc nonzero), or header bit 3 (mcBit3) is set,
  or machine flag 0x7784 bit 6 is set (a straight-through block that lost its
  no-decel permission mid-block, see "mcBit3 and 0x7784 bit 6" below).

The trapezoid's end-of-block ramp is skipped for types 0xd (spindle index) and 3
(homing move), and when mcBit3 is set. Everything else (G1/G2/G3, arcs, G12/13, canned-cycle feed
moves) runs the S-curve whenever parameter 10 is nonzero.

## G8 / G9 / G99 and the P word

The firmware parses part-program text itself. Letter handlers are dispatched
from the table at 0x1ee84 (indexed by ASCII), G numbers from the table at
0x205e2 (126 entries, G codes above 125 handled separately). Handlers that
matter here:

| code | handler | effect |
|---|---|---|
| G9 | 0x21380 | modal **precision cornering ON**: set 0x32e0 bit 7, initialise the corner machinery (0x1e0e8) on first use, arm the P word as a tolerance (0x32e9 bit 4) and mark the tolerance invalid until P is seen (clear bit 5). Ignored inside a canned-cycle sequence (0x32f4 != 0), which instead clears the flag |
| G8 | 0x213a8 | precision cornering OFF (clear 0x32e0 bit 7): every block decelerates to a stop at its end |
| G99 | 0x21348 | one-shot: set 0x32ed bit 2 = "do not decelerate at the end of this block". Cleared by the finalizer after each block |
| G4 | 0x20b90 | arms P as dwell: P*100 ticks stored at 0x3fcc |
| G61, G64, G98 | 0x20b46 | rejected (program error trap). This firmware has no Fanuc-style exact-stop/continuous mode codes |

P word handler (0x1f7a4): after G4 it is a dwell. If the G9 handler has armed it
in the **same block** (0x32e9 bit 4, which the per-block clear at 0x23a30 resets
after every block), P is the corner tolerance in position units, stored as
extended at 0x43a4, and 0x32e9 bit 5 marks it valid; **P0 is replaced by the
default 12700 units = 0.005 in**. Otherwise P is a cycle parameter (P1/P2/P3
slots via 0x32e5).

So the tolerance is only ever set by a block of the form `G9 Pn` or `G9 P0`.
A bare `G9` does the opposite: its handler clears the valid bit, so the
tolerance is unknown and the classifier below blends nothing. The finalizer
still gives the block mcNoDecel (0x23086), but at load time the sequencer runs
0x47b8c for every mcNoDecel block while the tolerance is invalid (gate at 0x47844):
it keeps mcNoDecel only when this and the next block are plain G1 blocks whose
directions agree within 4 degrees (cos > 0.99756 at 0x47c36), in which case it
marks the block mcBit3 "straight through" (0x47c4a); at any larger corner it
clears mcNoDecel (0x47c52) and the block decelerates to a stop at its end. The interpreter reset routine 0x2349a (called from
0x23384 and from the look-ahead's restart path at 0x1c752) also sets 0x32e0 bit 7
and clears 0x32e9 bit 5, i.e. **a program starts in G9 mode with no valid
tolerance** (CONFIRMED for the flag writes; exactly which events run 0x2349a is
TENTATIVE). A program that wants blended corners must therefore say `G9 P0` (or
`G9 P<tolerance>`) explicitly, once; a later bare `G9` turns blending back off
until the next `G9 P`.

### How the flags reach the planners

Block finalizer 0x22874, from 0x23064:

1. If G9 mode is on, the block is not in a cycle, and 0x3c40 == 0, set
   mcNoDecel.
2. If the G99 one-shot is set, set mcNoDecel unconditionally, and copy
   0x32e4 bit 5 into the block's "no end ramp at all" flag (0x425b bit 0, loaded
   to 0x10e4). **0x32e4 bit 5 = "this block has a C word"** (set by the C letter
   handler at 0x1f216 / 0x1f090, cleared per block at 0x23a42). C-word blocks are
   excluded from the look-ahead (0x1c832 sends them down the path that writes -1
   to the stop-distance 0x3c6c at 0x1c84c, and 0x1cb10 then skips the corner
   computation), so no look-ahead distance 0x1340 exists for them. mcNoDecel alone
   would make the trapezoid ramp towards an undefined distance, hence for a G99
   block that moves C the firmware disables the end ramp outright instead.
   CONFIRMED.
3. mcNoDecel is then cleared again if the block is a rapid (0x32f1 == 0), a
   zero-length linear move, single-block / hold conditions (0x3c40, 0xaefa bit 5,
   0x7784 bit 1), or a cycle condition.

The look-ahead (0x1c494) also sets the 0x32ed bit-2 request itself when its
corner computation succeeds, so in G9 mode most feed-move boundaries end up
with mcNoDecel.

In the planners, mcNoDecel (0x10d8 bit 5) changes the stopping target:

* **Trapezoid**: the end-of-block square-root ramp uses the look-ahead
  distance 0x1340 (distance to the next real stop) instead of this block's
  remaining length, so the velocity runs through the boundary. With 0x10e4 bit 0
  the remaining distance is replaced by a huge constant and no end ramp happens
  at all.
* **S-curve**: the stop target becomes "reach velocity 0x1350 at distance
  0x1340" instead of "reach zero at the end of the block". 0x1350 is the corner
  velocity computed by the look-ahead, so the S-curve ramps down to the corner
  speed, not to zero, then ramps up again in the next block.

### What P (precision) controls: corner classification 0x1e706

Called from the look-ahead with FP0 = angle between the outgoing and incoming
directions (radians). Tolerance = 0x43a4.

| corner angle | P needed | result |
|---|---|---|
| < 8 deg | any | pass through, corner speed capped at 16933 units/tick (100 ipm) |
| 8..32 deg | any | blend with 4 inserted sub-segments (scale 0.75/0.5/0.25) |
| 32..64 deg | P > 2540 (0.001 in) | blend with 8 sub-segments, blend size x2 |
| 64..96 deg | P > 5080 (0.002 in) | blend with 12 sub-segments (0.83..0.16), blend size x3 |
| otherwise | | no blend: the block ends with a full stop (exact stop) |

**P is only ever compared, never used in arithmetic.** The tolerance at 0x43a4 is
read in exactly two places in the image (0x1e7aa and 0x1e7d8, the two threshold
tests above) and written only by the P handler. The blend geometry comes from
constants: base blend size 8890 units (0.0035 in) times 2 or 3 by angle class, a
fixed sub-segment count and scale list per class, and the corner-speed formula
below with the class index. So P is a two-step permission switch: P <= 0.001 in
blends only corners under 32 degrees, 0.001 < P <= 0.002 in adds the 32-64 degree
class, P > 0.002 in (including the P0 default of 0.005 in) adds the 64-96 degree
class. P0.1 blends no more loosely than P0.003, and the deviation at a blended
corner is set by the 0.0035 in base size and class multiplier, not by P.
The inserted polyline therefore stays within roughly 0.004 to 0.01 in of the
programmed corner regardless of the P value. The corner speed
for a blended corner is `2032 * (shorter adjacent block - 1778) / blend size`,
capped at 12192 units/tick (72 ipm) and at the neighbouring block's
limit at 0x45b4; an unblended corner gets 1693 units/tick (10 ipm). If the tolerance is
not valid (0x32e9 bit 5 clear: no `G9 P` seen yet, or a bare `G9` since), the check at
0x1e84a skips the blend for every corner of 8 degrees or more; corners under 8 degrees
return early at 0x1e770 and pass through regardless. Whatever corner speed this
computes is moot without a valid tolerance, because 0x47b8c then strips mcNoDecel
from every junction over 4 degrees (see the bare-G9 note above).

With `G9 P0` (0.005 in) every corner up to 96 degrees is blended, so
the practical effect of G9 is: feed moves flow through corners at a reduced
corner speed instead of stopping, and the parameter-10 ramp shape governs the
decel into and accel out of each corner. G8 restores stop-at-every-block.
G99 forces one boundary to be crossed without any deceleration, regardless of
geometry, and is the only way to get a true no-decel junction for rapids.

### mcBit3 and 0x7784 bit 6

**mcBit3 (MOVCMD bit 11, 0x10d8 bit 3 once loaded) = "straight-through block":
do not ramp down at the end, the next block continues in the same direction.**
It is never set by the parser or the finalizer (no writer of 0x408a bit 3). Its
only producer is the load-time check 0x47b8c (0x47c4a), which runs for mcNoDecel
blocks when no `G9 P` tolerance is valid and marks blocks whose successor is a
plain G1 within 4 degrees. The G1 executor re-validates it at block start
(0x17996): 0x17e8e computes the angle to the next block (0x5bc) and clears both
mcBit3 and mcNoDecel if it is 0.1498 rad (8.6 degrees) or more, and 0x18330
clears both if the next block is too short to absorb the velocity. While an
mcBit3 block runs, the loop at 0x17ad8 keeps extending the per-tick target and
0x17cc6 ends the block wherever motion is when the next block takes over. The
trapezoid skips its end ramp for mcBit3 blocks and the S-curve defers to the
trapezoid for them; a C-axis delta clears mcBit3 (0x178da).

**0x7784 bit 6 = "an mcBit3 block lost its no-decel permission mid-block".**
Each tick of the G1 executor (0x17ca6) tests `mcNoDecel clear && mcBit3 set`; that
can only become true when something clears mcNoDecel in the running block, which
is the hold path 0x16dd4 (called from the interpolator at 0x16ab6, 0x16ada,
0x16b12) and the block sequencer at 0xe822. The executor then sets 0x7784 bit 6,
clears mcBit3 and restarts the block at 0x17a44. From there the planner select at
0x1bad4 picks the trapezoid (the S-curve cannot re-plan a block in flight) and,
with mcBit3 gone, the trapezoid performs a normal end ramp, so the block stops at
its end. The bit is cleared when the block finishes (0x17cc6) and at the start of
every G1 block (0x17a3e). CONFIRMED.

Open items: the purpose of move types 4, 8 and 9, the meaning of 0x3c48 (cycle
code), the 0x7780 mode values (0 at 0x2c1d0, 1 = hold at 0x16de0, 2 at 0xea9c,
3 at 0x289b6, 4 at 0xe168, and 5 which 0x30d26 and 0xe322 require for the
tool-change block path), and exactly which events run the interpreter reset
0x2349a.

## Feedrate: how F is scaled and used in combined 4-axis (C) moves

### F word parsing (0x1f2c0)

The parser walks the block text left to right (0x1ed20) and calls one handler
per letter, so word order matters. The F handler:

1. Parses the number. With the implied-decimal option (0xaef9 bit 2) and no
   decimal point, inch-mode F is divided by 10 (`F1000` = 100.0 ipm).
2. Scales it to units/tick and stores the result in 0x3f00 and 0x3d70:
   * if the block has already had a **C word** (0x32e4 bit 5, set by 0x1f216
     and cleared for every block by 0x23a30): `F * 16.667` = **F in
     degrees/min of the C axis** (250,000 units/deg / (60 * 250 ticks))
   * otherwise 0x24048: `F * 169.333` (inch, 2,540,000 / 15,000) or
     `F * 6.667` (mm, 0x4089 bit 2).
3. Inside a canned-cycle definition (0x32e3 bit 5) the raw F is kept as a cycle
   parameter instead (0x5054 / 0x5060 / 0x506c).

So `G1 X1 C90 F100` makes F mean 100 deg/min, while `G1 F100 X1 C90` (F before
C) scales F as 100 ipm. The scaled value is modal: a following block without
an F word reuses 0x3f00 unchanged, whatever scale it was parsed with.

The finalizer copies 0x3f00 into the queue entry at +0x1e (0x40a6); rapids get
param 7 (or param 8 on the Z-only-traverse configuration, 0xaf58 bits 0-3 = 3)
instead. The loader 0x1a6e4 puts it in 0x1150 (extended) and 0x10e8 (long).

### Path length and direction cosines (G1 executor 0x17824)

Every linear block carries five targets (0xc6c..): X, Y, Z, **C (4th)** and
S (5th, spindle position, used by threading/tapping). The executor forms the
five deltas (0xd08..), then:

```
L_v   = sqrt(dX^2 + dY^2 + dZ^2 + dC^2)      -> 0xbdc   (C is INCLUDED, in its own units)
L_tot = sqrt(L_v^2 + dS^2)                   -> 0x10f0  (remaining distance)
cos_i = d_i / L_v                            -> 0xd8c.. (0xdb0 = C cosine, 0xdbc = S)
```

If X, Y, Z and C are all zero the spindle delta alone forms the length (0xbd9
bit 1). The velocity integrates along L_v, so with the raw per-axis units a
1 degree C move counts the same as 250,000 linear units (0.098 in). A nonzero
C delta also clears header bit 3 (0x10d8), which switches off the look-ahead
corner blending for that block; 0x1eca8 likewise excludes any block with a C
word from the blend eligibility test.

### Target velocity per tick (0x16df6)

```
D2 = block feed (0x10e8)                 or feed * |spindle speed| if mcSpReqd
if move type is 0 (G1) or 3 (homing) and cos_C != 0:
    D2 = D2 / |cos_C|                    <- F is the C-AXIS rate, not the vector rate
unless MOVCMD bit 6 (mcFdOvr): D2 = D2 * 0x3280 / 1600   (feed override)
D2 = min(D2, param 7)                                      (vector traverse cap)
if cos_Z != 0: D2 = min(D2, param 8 / |cos_Z|)              (Z component cap)
if cos_C != 0: D2 = min(D2, param 47 / |cos_C|)             (C component cap)
```

(the Z-only-traverse configuration swaps the roles of params 7 and 8). Then
the parameter-10 planner ramps D3 toward D2 as described above, and the per-tick
step is distributed to the axes as `step * cos_i`.

Put together, for a G1 block that moves X/Y/Z together with C:

* The programmed F (if it followed the C word) is the **angular rate of the C
  axis in degrees per minute**. The vector speed is F / |cos_C|, so the C axis
  runs at exactly F deg/min and the linear axes take whatever speed completes
  their travel in the same time. The linear feed that results is
  `F * (linear distance in inches) / (C travel in degrees) * 0.0984 ipm`.
* That speed is then clipped so the whole vector never exceeds param 7, the Z
  component never exceeds param 8, and the C component never exceeds param 47
  (C-Axis Traverse Rate, 30,000 units/tick = 1800 deg/min in `BMDCPRMS.SYS`).
  When a cap bites, all axes slow together and the move stays coordinated.
* Rapids (type 2, 0x19126) go through the same executor, but are first split
  in two: a Z-up rapid runs Z alone and then X/Y/C together; otherwise X/Y/C
  run first and Z last. Each half is capped by params 7, 8 and 47 the same way,
  and the C cosine division does not apply to type 2, so a rapid runs at param 7
  along the combined X/Y/C vector.
* Arcs (G2/G3, type 1) never read the C target, delta or cosine, so a C word in
  an arc block moves nothing.
* The feed the firmware reports back to the PC (status refresh routine 0x2b556, selected through the table at 0x27d0c next
  to the mailbox table, writing dual-port +0x500) is converted the same way: when the current block has a C cosine it
  divides `v * |cos_C|` by 16.667 and displays **deg/min**, otherwise it divides
  v by 169.333 (ipm) or 6.667 (mm/min).

### G117 / G118 / G119 are the "inches per minute" rotary mode

The type 0xc executor (0x191f4) does what the plain G1 does not: it computes
the radius of the two selected linear axes from the centre of rotation (params
87/88/89), converts the C delta to radians (`dC / 45,000,000 * pi`, i.e.
250,000 units/deg * 180) and multiplies by that radius, so the C contribution
to the path length is its **arc length at the feature radius**. The feed is
then a true path feed along the combined motion and no cosine division is
applied (type 0xc is not 0 or 3 in 0x16df6). Note that the F word in such a
block still follows the parser rule above: with the C word before F it is
scaled by 16.667, so F100 in a G117 block yields 1667 units/tick = 9.8 ipm of
path feed. This looks like a firmware quirk rather than intent; verify on the
machine before relying on it. The param 47 cap is applied to the converted
(arc-length) C component in this mode.

## G117 / G118 / G119

Handlers 0x21356/0x2135e/0x21366 set 0x32ed bits 3/4/5. The finalizer turns a
G1 block that also carries a **C word** (0x32e4 bit 5, set by the C handler at
0x1f216) into move type 0xc with parameter 0x00 (G117), 0x40 (G118) or 0x20
(G119). The executor 0x191f4 indexes the table at 0x193fe with that parameter;
each entry names two linear axes plus two of the "Center-Of-Rotation for Rotary
Axis" parameters (87/88/89 at 0xae76/0xae82/0xae8e):

| code | param | axes | rotation centre params |
|---|---|---|---|
| G117 | 0x00 | X, Y | 87, 88 |
| G119 | 0x20 | Y, Z | 88, 89 |
| G118 | 0x40 | X, Z | 87, 89 |

So G117/G118/G119 are plane-select variants of a linear move coordinated with
the rotary (C) axis about a configured centre of rotation, i.e. the DX32's
rotary-table (polar/cylindrical style) interpolation for the XY, XZ and YZ
planes. Because the rotary axis takes part, these blocks always use the
trapezoid planner. G17/G18/G19 (0x20bba..) are the ordinary plane selects.

## Probing

The firmware has a complete touch-probe engine, but it is driven from the PC,
not from G-code cycles:

* **Input**: the probe is a direct digital input on the BMDC card, bit 9 of the
  input port at 0x01300200, mapped to 0x31e5 bit 7 at 0x12518 (MAINTPG's
  "Home Switch Word" bit 7, "Touch-Probe Switch"). It does not go through the
  AUF.
* **Arming**: block types 10/11 or mailbox command 0x18 (`armProbe`, arg 1/0)
  set/clear 0xaef8 bit 2 and enable the probe interrupt via 0x013000b8/bc.
* **Hit handling**: every servo tick (0x16926) while armed, if the input is
  active the current positions 0x2750.. are latched into 0xe84.. and 0x7788
  bit 3 is set; the move is stopped unless it is type 4.
* **Probe move**: type 5 (0x1aa46) runs at param 14 (measuring feed); after the
  hit it continues param 15 (post-hit continuation) along the move direction,
  then backs off param 16 (0xaf60), restoring the programmed feed. B3T's
  `doMove` type 5 and mailbox command 0x22 (`probePoint`: arm + move to a point)
  create these blocks.
* **Readback**: mailbox 0x0d (`rdProbe`) returns the latched X/Y/Z/W positions
  (0xe70..) converted to inches or mm as BCD.
* **PC side**: `BXX.EXE` has an interactive PROBE / DIGITIZE menu (PROBEPT,
  SAVEPTS, "CALCULATE GEOMETRY", "SAVE Z UP or DOWN PTS", "PROBE XYZ") built on
  those three commands.

G-code side: the finalizer would emit a type-5 probe block for motion code 60,
but no parser path sets that code, so the hook is either vestigial or meant for
PC-generated blocks. G60 itself (0x211cc) only queues action 60, the same tool
change action the T word queues. G31/G32 are not skip/probe codes here; their
flags (0x32ec bits 3/4) feed the arc builder at 0x224b4. The only
G-code-reachable special moves are G100 (index-pulse seek, type 7, axis and
direction from the following axis word) and G117-G119.
