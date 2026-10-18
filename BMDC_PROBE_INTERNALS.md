# BMDC / BXX touch-probe internals

Research notes gathered while assessing two possible features: automatically entering probe
mode when a given tool number is loaded, and automatically setting work zero after a probe
touch. Both are feasible; the firmware is the better place for both. Nothing below has been
implemented. Addresses are BMDC.BIN load addresses unless marked as BXX.EXE file offsets.
See `MOTION_PLANNER.md` (probe engine, move type 5) and `PROTOCOL_NOTES.md` (mailbox table).

## Probe mode in BXX

- The PROBE ON/OFF toggle is a function key in the root key handler (BXX.EXE file offset
  0x6fe7). ON writes parameter 7, the maximum traverse rate (firmware 0xfb4), with a slow value
  from a startup-initialised global, then sends armProbe(1). OFF restores parameter 7 from
  BXX's parameter table and sends armProbe(0).
- That is the whole feature: slow rapids plus an armed probe input.
- BXX keeps no state of its own. It reads "probe on" back from the firmware flag word at
  dual-port +0x480, which the status refresh copies from 0xaef8 every cycle; bit 2 of 0xaef8 is
  the armed flag. armProbe is mailbox 0x18; the firmware arms the probe interrupt at 0x1abaa and
  disarms at 0x1ac06.

## The PROBEPT primitive

- It lives in an overlay at BXX.EXE file offset 0x6c4cc, outside what Ghidra analysed, which
  is why the decompiled C shows no callers for the mailbox wrappers.
- Flow: check the status bit, send probePoint(1, x, y, z) (mailbox 0x22), poll the busy bit,
  then rdProbe(&x, &y, &z, &w) (mailbox 0x0d), which returns the latched touch position in work
  coordinates (latched machine position minus the zero at 0x9f88 and friends).

## The firmware probe cycle

- The probe ISR (0x11cd6) latches machine position into 0xe70/0xe74/0xe78/0xe7c at the instant
  of contact and sets 0xbd9 bit 5.
- The type-5 executor (0x1aa46) then runs the parameter 15 continuation and the parameter 16
  back-off, and finishes at 0x1aba8. The axis is therefore not at the touch point when the cycle
  ends.
- The no-hit path latches the end position (0x2750..) into 0xe70.. instead, so rdProbe always
  returns something.

## How SET X works

- The SET XYZ menu sends setAxes(n, pointers) (mailbox 0x08) with n read from dual-port
  +0x736, the active offset set. The G54-style handlers (0x20e6a ..) write that field with
  constants 1-4 after copying the selected table into the active copy.
- The firmware routine at 0x28f86 computes offset = current machine position minus the typed
  value and writes it to four places: the set-n table slot at 0xacc6 plus 0x3c per set, the
  active copy at 0xac8a, the working copy at 0xac4e, and the zero at 0x9f88. Y and Z follow at
  12-byte strides (0xac96/0xac5a/0x9f94 and 0xaca2/0xac66/0x9fa0).
- For Z it uses 0x26ec instead of 0x2758 as the current position when 0x2988 is nonzero, and
  when the master configuration nibble (0xaf58 bits 0-3) is zero it also rewrites the Z zero
  carried in every pending queue entry at +0xbe, because the block loader (0x1b4e2 ..) copies
  per-block zeros (+0xa6 X, +0xb2 Y, +0xbe Z) into 0x9f88.. at block start. The finalizer fills
  those per-block copies from 0xac8a (0x238be ..), so 0xac8a is the master copy.
- Displayed positions (status refresh 0x2b556, dual-port +0x500) are machine minus 0x9f88, so
  a change to the zero shows on the DRO immediately.

## Tool changes

- setActvTool (mailbox 0x12, handler 0x2992c) stores the tool number at 0x29984 into 0x42b0 and
  is the single point every tool change passes through, manual or program. It also copies the
  tool's length (table 0xa666, 12 bytes per tool) and diameter (table 0xa786) into working
  variables. The tool table is written by wrTool (0x10) and read by rdTool (0x11).

## Loader

- B3T's loadBMDC writes the file length to port 0x1a0, so an extended BMDC.BIN loads in full.
  The image ends at 0x4bffa and the stacks start at 0x4d000; the listing has no references into
  that range.

## Unresolved

- Whether 0x26ec is the Z position with tool-length compensation removed, which decides how a
  Z zero must be computed when compensation is active.
- Whether BXX ever pushes its cached offsets back to the firmware (setOffsets, mailbox 0x0a, two
  overlay call sites) without re-reading them first.
