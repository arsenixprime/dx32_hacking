# BMDC axis outputs: analog DACs versus the PWMINT card

How the firmware decides whether the X/Y/Z/C servo commands go to the on-board analog DACs or
to the PWMINT accessory (an FPGA card, fitted on TC22-class machines, that produces duty-cycle
drive for the axis amplifiers). Addresses are BMDC.BIN load addresses; parameter numbers refer
to `BMDC_PARAM_TABLE.md`. Everything here was traced in the firmware image (CONFIRMED) unless
marked TENTATIVE.

## Summary

- There is no parameter, mailbox command or jumper that selects analog or PWM. The boot code
  probes the PWMINT register block for a hardware signature and stores the result in the flag
  at 0xafc4 (0 = analog, 4 = PWMINT present). That flag is written nowhere else.
- The servo tick writes the four axis commands to exactly one register bank: the DACs at
  0x01300100 when the flag is zero, the PWMINT at 0x01300040 when it is set. Never both.
- The spindle command is a separate DAC and is always analog, whichever bank the axes use.
- With the PWMINT removed the same firmware drives the analog DACs, provided the DAC chips are
  fitted and read back at boot; otherwise the card halts with code 0xa1.

## Boot detection (0xd5bc)

After the RAM and dual-port sizing (see `PROTOCOL_NOTES.md`, "RAM and dual-port sizing at
boot") the boot code runs two hardware probes:

1. **PWMINT signature.** `movem.l` reads six longs from 0x01300040..0x01300054, masks bits
   13-15 of each and expects channel IDs 0, 1, 2, 3, 4, 5 in order (0x0000, 0x2000, 0x4000,
   0x6000, 0x8000, 0xa000). If all six match, 0xafc4 is set to 4 (0xd618). It was cleared to 0
   at 0xd362.
2. **DAC readback.** 0xd622 writes 0x111..0x888 into the eight DAC registers at
   0x01300100..0x0130011c, reads them back masked to 12 bits and counts matches into 0xafbc.

The sanity checks that follow halt the firmware with 0xDEADDEAD at dual-port +0 and a code at
dual-port +4:

| Code | Site   | Condition |
|------|--------|-----------|
| 0xa1 | 0xda02 | fewer than 4 axis DACs read back **and** no PWMINT found (no axis output at all) |
| 0xa2 | 0xda34 | PWMINT found on board class 0-2 (0xaf9c, the CPU-speed class; PWM needs a BMDC3 or BMDC4) |

0xafc4 is only ever tested (`tst.l`, `cmpi.l #0/#1/#4`); the comparisons against 1 and 4 are
equivalent because the only non-zero value is 4.

## PWMINT register block (0x01300040..0x01300054)

| Address    | Write | Read |
|------------|-------|------|
| 0x01300040 | X axis duty command | status word (see "Status and faults"); bits 13-15 = channel ID 0 |
| 0x01300044 | Y axis duty command | channel ID 1 in bits 13-15 |
| 0x01300048 | Z axis duty command | channel ID 2 |
| 0x0130004c | C axis duty command | channel ID 3 |
| 0x01300050 | output disable strobe (any value) | channel ID 4 |
| 0x01300054 | output enable strobe (any value) | channel ID 5 |

The command format is 11 bits around a centre of 0x400 (0x400 = zero duty, 0x7ff and 0 the
extremes). 0x400 is written to all four channels by the drive-off path at 0x116bc and is the
rest value loaded into 0x282c at 0x120fe when the flag is set. The enable/disable strobes are
issued at 0x12e16 and 0x14012 when the drives-on bit (0x31ed bit 0) changes, and only when
the flag is set.

## Servo tick output path (0x11492)

The per-tick servo routine (called from the 4 ms phase of the timer schedule) computes the four
axis commands in the loop at 0x115b4:

```
D0 = following-error term (0x2ad0)  >> (servo gain 0x29bc + D2)   ; D2 = 2 on analog BMDC3, else 0
D0 = small-value lookup (0x11772)                                  ; dead-band shaping
D0 += centre value (0x282c)
D0 = clamp(D0, 0x2a98 low[axis], 0x2a98 high[axis])
store D0 -> 0x2840 (parameters 232-235 "DAC Value")  and  -> (A6)+
```

A6 is chosen once per tick at 0x11594: `lea 0x01300100` when 0xafc4 is zero, `lea 0x01300040`
otherwise. After the loop 0x115fa clears 0x01300140, the DAC latch strobe, unconditionally.

What differs between the two modes:

| Item | Analog BMDC3 (class <= 3) | Analog BMDC4 (class 4) | PWMINT |
|------|---------------------------|------------------------|--------|
| Centre value 0x282c (0x120d8/0x120fe) | 0x800 | 0x2000 | 0x400 |
| Clamp window 0x2a98 | fixed 0..0xfff (0x1721e) | fixed 0..0x3fff (0x17226) | recomputed every pass at 0x17244, see below |
| Servo-gain shift | parameter + 2 (0x11578) | parameter | parameter |
| Built-in default parameter block copied to 0xf9c (0x1c178) | table 0x1c2d0 | table 0x1c2d0 | table 0x1c3b0 |
| Default encoder lines per rev 0x2a08 (0x12196) | 250 | 250 | 2000 |
| Default bus voltage 0x2a1c / PWM offset 0x2a94 (0x121be) | 110 / 32 (unused) | same | 110 / 32 |

### PWM clamp window (0x17244)

For each axis the window is centred on the duty that should hold the commanded velocity, not on
zero:

```
nominal[axis]   = (2 * commanded velocity 0x2854) * CntsToPwm 0x2a30 >> 8        -> 0x2a40
deviation[axis] = table 0x2b6c[(|2v| * 0x2b38 >> 5) & 0x7f] * PWMax 0x29d0 >> 8   -> 0x29e4
low  = nominal - deviation - PwmOffset 0x2a94, floored at 0x2b34
high = nominal + deviation + PwmOffset 0x2a94, capped  at 0x2b30
window = (low + 0x400, high + 0x400)                                              -> 0x2a98
```

This is the "Maximum PWM Deviation" semantics from the parameter file comments (parameters
124-127): the servo term may only move the duty a bounded amount away from the velocity-derived
nominal. CntsToPwm (0x2a30) and the related scale 0x2b38 are built at 0x11e66 from the motor
volts per 1000 RPM (130-133), encoder lines per motor revolution (134-138) and bus voltage
(139); 0x11e66 is called from the drive sequencer at 0x2825c on every pass while drives are on,
so parameter edits take effect without a reboot.

### The rest-value writer (0x11fd6)

0x11fd6 copies the centre values 0x282c..0x283c to 0x2840.. and writes them to the DAC bank
unconditionally (0x01300100.. for X/Y/Z/C, 0x01300180 for the spindle on class <= 3 or DAC 5 at
0x01300110 on class 4), then to the PWMINT bank only when 0xafc4 >= 1 (0x1203a). It is called
from:

- 0x12112, firmware initialisation (reached from the boot code at 0xd108);
- 0x2835c, the drive-enable sequencer, just before setting 0x31ed bit 7;
- 0x28554, the drive-disable path, after clearing 0x31ed bits 0, 6 and 7;
- 0x369e6, only when dual-port +0x815 bit 7 (test/diagnostic mode) is set.

So on a PWMINT machine the axis DACs are written only at init and at drive enable/disable, and
then with the PWM rest value 0x400 rather than the DAC mid-scale 0x800. They are parked, not
driven; the servo command never reaches them. (On a 12-bit bipolar DAC 0x400 is a fixed
negative offset, which only matters if something is still wired to those outputs.)

## Spindle output

The spindle command is computed in the same tick routine (0x11600..0x116b6) and does not look
at 0xafc4:

- class <= 3: clamp to 0xffff and write the 16-bit DAC at 0x01300180, then clear 0x013001c0
  (0x1168e);
- class 4: clamp to 0x3fff and write DAC 5 at 0x01300110, then clear 0x01300140 (0x116aa).

Open-loop spindles (0x26e0 non-zero) use the command × parameter 71 (0x28f4) path at 0x1160e;
closed-loop ones use the feedback error path at 0x1162e with parameters 69 (0x29cc), 118
(0x29a4) and 123 (0x29b8). Either way the result is an analog DAC write. On the TC22 the
spindle therefore stays analog with the PWMINT fitted, as observed.

## Status and faults (PWMINT only)

Reads of 0x01300040 return a status word. Three checks run while the flag is set:

| Site | Caller | Check |
|------|--------|-------|
| 0x11d9c | drive sequencer 0x28256, every pass with drives on | bits 4-7 must all be set (channel ready); each clear bit raises an alarm. Bits 0-3 are per-axis fault flags; a set bit raises an alarm if that axis is enabled (velocity gain 0x2980.. non-zero) |
| 0x10090 | (same sequencer, not in test mode) | bits 8-11 must be set, ORed over the current read and the three-sample history 0x3110/0x3114/0x3118 captured by 0x1357a |
| 0x17390 | drive sequencer, every pass | amplifier load integrator: squared duty excess above the nominal, filtered through 0x2a60/0x2a80, is compared with parameter 141 (0x2abc); exceeding it clears the integrators and raises a per-axis alarm |

Each alarm is a `trap #14` with a six-byte data block after it (0x0300, 0x0003, then an
offset: 0x6f/0x8f/0xb0/0xd1/0xf2 for the ready bits, 0x13/0x2e/0x49/0x64 for the per-axis
faults). The trap 14 handler is at 0x366a0. The only matching string in the image is "Axis Drive
Fault"; which message each offset selects has not been traced (TENTATIVE). 0x170c2 additionally
derates the feed limit as the load integrator approaches the limit (steps at 1/16, 1/8 and 1/4
of parameter 141), skipped when the master-parameter nibble at 0xaf58 bits 16-19 is 0xf.

## Removing the PWMINT, or forcing a mode

- **PWMINT removed:** the signature read fails, 0xafc4 stays 0, and the servo loop addresses
  the DAC bank with the analog centre, clamp and gain shift. The DAC readback must then find at
  least four working axis DACs or the card halts with 0xa1. B3T's "Could not find DAC. Cannot
  Determine Board Type" message is the same readback from the PC side, so its DAC/ADC tests
  (`readqdac`/`writeqdac`/`write4dac` in BRDBIOS) will show whether a given card has the DAC
  chips fitted before trying it. The analog default parameter block differs from the PWM one, so
  the servo gains in `BMDCPRMS.SYS` need re-tuning; the file's PWM-only parameters (124-145) are
  simply ignored.
- **Force analog with the PWMINT fitted:** replace the `move.l #4,0xafc4` at 0xd618 with NOPs.
  Nothing else references the card once the flag is zero.
- **Force PWM without the card:** not possible; the status reads at 0x11d9c/0x10090 would alarm
  on the first drive-enable pass.

## Tuning parameters: analog versus PWM

The servo loop is one code path. Both modes run the same stages on the same parameters and
none of these stages tests 0xafc4:

| Stage | Site | Parameters |
|-------|------|------------|
| Lead compensation and velocity feed-forward (0x27f0) | 0x11918 | 146-149 lead-comp interval, 60-63 axis velocity gain |
| Proportional and differential error term (0x2ad0) | 0x114bc | 119-122 following error gain, 114-117 differential following error gain |
| Integral term | 0x11512 | 77 and 79 integral gains, 80 integral magnitude limiter, 81 integral loss; the accumulator is the "DAC offset" slots 237-240 (0x278c) |
| Four-stage digital filter | 0x11802 | 142-145 "PWM digital filter constants" (see below) |
| Output shift | 0x115b8 | 65-68 axis servo gain |

The parameter file's comments calling 114-123 and 142-145 "for the PWM drive system" are
misleading: the firmware applies them on an analog board as well. What differs:

- **Servo gain scaling.** On an analog BMDC3 the shift count is the servo gain parameter plus 2
  (0x11578), one quarter of the output per count of filtered error. A BMDC4 and any PWMINT board
  use the parameter as written.
- **Output span.** Analog is 12 bits around 0x800 (14 bits around 0x2000 on a BMDC4); PWM is
  11 bits around 0x400. Together with the shift, a given gain value is a different volts (or
  duty) per count on each hardware.
- **PWM-only block.** Parameters 124-127, 130-141 feed only the clamp window (0x17244) and the
  load integrator (0x17390), both skipped when the flag is zero. On an analog board they are
  loaded into memory and never read.
- **Built-in defaults.** The two tables at 0x1c2d0 (analog) and 0x1c3b0 (PWM) differ, for
  example acceleration 847 versus 400 and deceleration 974 versus 350, and the analog table
  appears shifted by one slot from parameter 9 onward. They matter only until BXX pushes
  `BMDCPRMS.SYS`, which overwrites them.

A parameter file tuned on a PWMINT machine is therefore numerically the wrong set for the same
card running analog: the P, I, D, feed-forward and filter values carry over, the servo gain has
to be re-scaled for the extra shift and the 12-bit span, and the PWM-only block becomes dead
weight.

## The four-stage digital filter (0x11802, CONFIRMED)

Runs every tick in both modes, on the summed error term in 0x2ad0 (P + D + integral + velocity
feed-forward) before the servo-gain shift, for X, Y, Z and C with one set of constants. The
history is four longs per axis at 0x2ae0, 0x2af0, 0x2b00 and 0x2b10, holding the last four
**unfiltered** inputs; the filter output is written back into 0x2ad0 but is not fed into the
history. It is therefore a 5-tap FIR, not a recursive filter:

```
y[n] = x[n] - ( K1*(x[n-1]>>8) + K2*(x[n-2]>>8) + K3*(x[n-3]>>8) + K4*(x[n-4]>>8) )
K1..K4 = parameters 142..145 (0x2ac0..0x2acc)
```

Details that matter for tuning:

- The history value is arithmetic-shifted right by 8 **before** the multiply, so each tap is
  K/256 in gain but with 256-unit resolution: an error term below 256 contributes nothing
  (or exactly -K for small negatives, because `asr` rounds toward minus infinity). The filter
  is inactive for small following errors.
- The constants are multipliers, not shift amounts as the parameter file comment says.
- Positive K subtracts a fraction of the recent past, which lowers DC gain slightly and adds a
  small phase lead; negative K would average in the past and smooth. With the file's values
  K = 8, 2, 3, 4 the sum of the taps is 17/256, so DC gain is 0.934 and the response at the
  250 Hz tick rate is:

| Hz | gain | phase (deg) |
|----|------|-------------|
| 0 | 0.934 | -0.0 |
| 5 | 0.937 | +1.1 |
| 10 | 0.947 | +2.0 |
| 25 | 0.990 | +2.7 |
| 50 | 1.001 | +0.7 |
| 62.5 | 0.992 | +1.1 |
| 100 | 1.032 | +0.7 |
| 125 | 1.020 | -0.0 |

  In other words, with these constants it is a 6.6 % trim of the error gain with a few degrees of
  lead around 10-50 Hz, not a smoothing filter. Setting all four to 0 removes it exactly.
- 0x2ac0..0x2acc have no built-in default (not in either default table) and are only ever read
  here, so a parameter file that omits 142-145 leaves whatever was in RAM at power-up (zero after
  a cold start).

## Open items

- The meaning of PWMINT status bits 8-11 versus 4-7 (both are "must be set"; one is probably
  per-channel power/ready, the other a fault input polarity).
- The alarm message selected by each trap-14 offset.
- Whether the velocity feed-forward enters the PWM command only through the clamp window, as the
  tick code suggests, or whether the PWMINT itself adds a velocity term (0x2a40 is written but
  never read by the tick loop).
