# BMDC3 versus BMDC4: every board-class difference in the firmware

`BMDC.BIN` is one image that runs on both the 68030-based BMDC3 and the 68040-based BMDC4. It
classifies the board at boot into 0xaf9c (the "board class", 0-4) and branches on that value in
51 places. This page lists all of them, the hardware each implies, and what that means for
running a PWMINT-equipped TC22 on a BMDC4. Companion pages: `BMDC_AXIS_OUTPUTS.md` (analog
versus PWMINT output selection) and `PROTOCOL_NOTES.md` (memory map, RAM sizing). All items
are CONFIRMED by reading the image unless marked TENTATIVE.

## How the class is decided (0xd32c, 0xd0ae)

1. **CPU benchmark** (0xdbc6): count loop iterations between two edges of SCN2681 timer bit 3,
   result in 0xafa0. Thresholds at 0xd380: at least 0x20 iterations = class 1, 0x2f = class 2,
   0x39 = class 3; below 0x20 stays class 0. Class 2 is what B3T calls a **BMDC3L** and class 3
   a **BMDC3** (B3T's `check_board_type` menu: 1 = BMDC3L type 2, 2 = BMDC3/3 type 3,
   3 = BMDC4 type 4).
2. **RAM and dual-port probe** (0xd3c2..0xd58a): if main RAM is at least 1 MB **and** dual-port
   RAM is 8 KB, the class is forced to 4 regardless of the benchmark (0xd462). Only class 4
   then probes 2, 4, 8 and 16 MB. So the real BMDC4 identifier is the memory fit, not CPU speed.
3. **Cache and CPU setup** (0xd17e): class 1-3 writes 68030 `CACR = 0x2101` after two FPU
   register moves; class 4 programs 68040 `ITT0/DTT0 = 0xc000`, `ITT1/DTT1 = 0x0100c040`
   (the 0x01xxxxxx I/O space cache-inhibited, serialized), `CINVA`, `CACR = 0x80008000`. The
   benchmark is re-run with caches on (0xd0c8) and the first result kept in 0xafa4.
4. **68040 FPU software package** (0xdc52): class 4 installs vectors 11 (0x2c, unimplemented
   F-line) and 48-55 (0xc0..0xdc, FP exceptions and unimplemented data type) pointing at the
   Motorola M68040FPSP handlers linked at 0x3c74e..0x40adc (`fsave`/`frestore` frames). The
   68040 has no FMOVECR/FSIN/FTAN/FACOS in hardware; the FPU self-test that follows at
   0xcce6/0xcd00 (sqrt(12·3) must be 6, a trig identity must be 120) exercises exactly those.
5. **Class gate** (0xd0d4): class 0-2 halts with 0xDEADDEAD at dual-port +0 and no new code
   (+4 still holds 0x90 from the benchmark stage). **This firmware refuses a BMDC3L.**

### Boot halt codes (dual-port +0 = 0xDEADDEAD, +4 = code)

| Code | Site | Condition |
|------|------|-----------|
| 0x90 | 0xd0d4 | (left over from the benchmark stage) class 0-2 |
| 0xa0 | 0xd9d0 | class not 1-4 |
| 0xa1 | 0xda02 | fewer than 4 axis DACs read back (0xafbc) and no PWMINT (0xafc4) |
| 0xa2 | 0xda34 | PWMINT found on class 0-2 |
| 0xa3 | 0xda66 | class 4 but the 16-bit spindle DAC at 0x01300180 reads back (0xafc0 = 1) |
| 0xa4 | 0xda98 | class 4 without 8 KB dual-port |
| 0xa5 | 0xdaca/0xdafc | class 4 with less than 1 MB, or class 1-3 with more than 512 KB |
| 0xa6 | 0xdb2e | class 1-3 with more than 4 KB dual-port |
| 0xa7 | 0xdb60 | class 1-2 and the 0x01300000 register does not read back zero (0xafb0 != 1) |
| 0xa8 | 0xdb92 | class 3-4 and it does (0xafb0 = 1): old-board signature on a new board |
| 0xb0, 0xb8 | 0xcce6, 0xcd36 | FPU self-test failed (sqrt, trig); +8 holds the bad result |
| 0xc0+n, 0xd0+n, 0xe0+n | 0xcdc2 | DAC-to-ADC loopback self-test failed on channel n at full scale, zero, mid-scale; +8 the ADC byte, +0xc the expected band, +0x10 the channel count |

The DAC/ADC loopback test (0xcdc2) runs only when 0xafb8 and 0xafbc are both non-zero, which
excludes a PWMINT board with no DACs. It writes full scale (0xfff on class 3, 0x3fff on class 4)
to every DAC, waits three ticks and requires ADC bytes 0xd0..0xff; then zero and 0x00..0x30;
then mid-scale and 0x70..0x90. Class 4 checks eight channels (0x3098.. and 0x30b8..), class 3
four.

## Derived hardware constants set at boot

| Variable | Class 1-3 | Class 4 | Meaning (from its users) |
|----------|-----------|---------|--------------------------|
| 0xafa8 | 0x7fffc | up to 0xfffffc | RAM top, end of the part-program buffer (0x29c3a) |
| 0xafac | 0xffc | 0x1ffc | dual-port RAM top |
| 0xafb0 | 1 on class 1-2 boards | 0 | 0x01300000 reads back zero after writing 0xffffffff (old-board signature) |
| 0xafb4 | 6 (4 if 0xafb0) | 9 | encoder channel count |
| 0xafb8 | 8 if the spindle DAC is present, else 0 | 0x10 | DAC count for the self-test gate |
| 0xafbc | count of axis DACs that read back (normally 4) | normally 8 | |
| 0xafc0 | 1 if the 16-bit spindle DAC at 0x01300180 reads back | must be 0 | |
| 0xafc4 | 4 if PWMINT signature found, else 0 | same | see `BMDC_AXIS_OUTPUTS.md` |
| 0xafc8 | 2 | 2 | set at 0xd942, no reader found |
| 0xafcc | 10 | 16 | set at 0xd99c/0xd9b2, no reader found (TENTATIVE: ADC channel count) |
| 0xafd0 | 2 | 3 | set at 0xd964/0xd97a, no reader found |

## Runtime differences

Every `cmpi.l #n,0xaf9c` outside the boot code, grouped by subsystem:

### Analog axis outputs

| Site | Class 1-3 | Class 4 |
|------|-----------|---------|
| 0x11570 servo-gain shift | parameter 65-68 **plus 2** (analog only; PWMINT boards never add it) | parameter as written |
| 0x120d0 rest value 0x282c | 0x800 (axes), 0x8000 (spindle) | 0x2000 for all five |
| 0x17216 clamp window (analog) | 0..0xfff | 0..0x3fff |
| 0x11fea rest-value writer 0x11fd6 | X/Y/Z/C to 0x01300100..0x0130010c, spindle to 0x01300180, strobe 0x013001c0 | five values to 0x01300100..0x01300110, 0x2000 to DACs 6-8, strobe 0x01300140 |
| 0xcdf6/0xce72/0xced8/0xcfe0 self-test | 4 DACs, 12-bit, 4 ADC channels | 8 DACs, 14-bit, 8 ADC channels |

So the BMDC3 has four 12-bit axis DACs plus a separate 16-bit spindle DAC; the BMDC4 has eight
14-bit DACs in one bank and uses DAC 5 for the spindle.

### Spindle command

| Site | Class 1-3 | Class 4 |
|------|-----------|---------|
| 0x1161c open-loop path (0x26e0 set) | command × parameter 71 >> 12 | an extra >> 2 (14-bit DAC) |
| 0x11660 closed-loop path | shift = parameter 69 **minus 2** | parameter as written |
| 0x11678 output | clamp 0xffff, write 0x01300180, clear 0x013001c0 | clamp 0x3fff, write 0x01300110, clear 0x01300140 |

Spindle tuning parameters (69, 71, 118, 123) therefore do not carry between the two boards
without re-scaling, and the spindle analog signal comes out of a different DAC.

### Encoders

| Site | Class 1-3 | Class 4 |
|------|-----------|---------|
| 0x11b9c encoder read | 6 channels at 0x01300004.. | 3 more channels at 0x01300184..0x0130018c |
| 0x11c12 position accumulation | 6 channels | 9 channels |

### ADC

| Site | Class 1-3 | Class 4 |
|------|-----------|---------|
| 0x11330 tick phase | 0x11d0c: read one byte per tick from 0x013000c0 + 4·n, n cycling 0-7, into 0x3098[n] | 0x11d36: one read of 0x013000c0 gives two channels (low byte to 0x3098[n], high byte to 0x30b8[n]); then write the next select word from the table 0x11d7c (0x0808, 0x0909 .. 0x0f0f) back to 0x013000c0 |

The BMDC4 ADC is a mux-select register with 16 channels in pairs; the BMDC3 ADC is eight
memory-mapped byte registers.

### Digital input port

| Site | Class 1-3 | Class 4 |
|------|-----------|---------|
| 0x12692 read of 0x01300200 | masked to 10 bits | masked to 16 bits |

Both then OR in SCN2681 input-port bits 5-6 (0x013000b4) shifted up by 5.

### Probe arm/disarm

0x1aa70, 0x1aab6, 0x1abbe, 0x1ac0c: OPR set/reset bit 1, plus bit 2 when the class is 3 or 4.
Same on BMDC3 and BMDC4; only the BMDC3L/older boards differ.

### Memory

0x29c3a (`wrPartPgm`): part-program buffer ends at 0xafa8, so 512 KB on a BMDC3 and the probed
size (1-16 MB) on a BMDC4. The ISA indirect window still reaches only the first megabyte.

### What is **not** class-dependent

The servo loop maths, the digital filter, the PWMINT path, the trapezoid/S-curve planners, the
G-code interpreter, the AUF/TLAUF serial protocol and the mailbox interface are identical on
both boards. The dual-port layout used by BXX (up to +0x818) fits in either 4 KB or 8 KB.

## DOS side

B3T detects the type itself (`check_board_type`, B3T.c line 138): it writes 0xdd into card RAM
at 0x100 through the ISA window, then writes 0x2000 to the four axis DACs and reads DAC 8
(`read4dac(0x11c)`) back; a match means BMDC4 (type 4); otherwise it writes 0x8000 to the
spindle DAC and reads it back, a match meaning BMDC3 (type 3); otherwise it asks the operator
("Could not find DAC. Cannot Determine Board Type"). A PWMINT board with no DACs always lands
on that prompt. BXX and MAINTPG display a "Board Type:" field; where they read it from has not
been traced (TENTATIVE: a setup file, since the firmware never writes the class to dual-port).

## Can a TC22 (PWMINT) run on a BMDC4?

Nothing in the firmware prevents it:

- The PWMINT check at 0xd5bc does not look at the class, and the halt 0xa2 fires only for
  class 0-2. Class 4 with 0xafc4 = 4 passes every boot check (0xd9be..0xdbc4).
- The servo output path tests 0xafc4 before the class (0x11594, 0x120f2, 0x17208, 0x1203a), so
  the axes go to the PWMINT with the same 0x400 centre, the same clamp-window maths and the same
  load integrator as on a BMDC3. The analog-only "+2 shift" never applied to PWM, so the X/Y/Z/C
  tuning parameters carry over unchanged.
- The DAC/ADC self-test runs on a BMDC4 (eight DACs read back) but is a board-internal
  loopback, not a machine test.

What does change, and must be dealt with outside the firmware:

1. **Address decoding of the PWMINT.** The PWMINT lives at 0x01300040..0x01300054 behind the
   BMDC's PAL decode. Whether the BMDC4's PALs decode that block and bring it to the same
   connector is a hardware question this repo cannot answer (no schematics).
2. **Spindle output moves.** On a BMDC4 the spindle analog command is DAC 5 at 0x01300110,
   14-bit around 0x2000, not the 16-bit DAC at 0x01300180 (which must be absent, or halt
   0xa3). The spindle drive wiring and parameters 69/71 need to follow.
3. **Memory fit.** The class is 4 only with at least 1 MB of RAM and 8 KB dual-port; a BMDC4
   with less would be classed 3, get the 68030 cache setup and no FPSP vectors, and crash at
   the first FMOVECR.
4. **Encoders, ADC and inputs** use different register maps (9 encoder channels, mux ADC,
   16-bit input port), so the TC22's cabling to the card must be the BMDC4 variant.
5. **B3T** cannot auto-detect a PWMINT board on either card; select the type manually.

## Open items

- Readers of 0xafc8, 0xafcc and 0xafd0 (set per class, no reference found in the listing or by
  raw scan; they may be reached through a base-register addressing mode).
- Where BXX/MAINTPG get their "Board Type" string.
- What the 0x01300000 register is (0xafb0 signature) on the three board generations.
