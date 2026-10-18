# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

Reverse engineering the Bridgeport DX32 CNC controller. The end goal is a DIY replacement
controller (LinuxCNC + Mesa PktUART) that drives the original AUF and TLAUF I/O boards, so the
RS422 serial protocol between the BMDC card and those boards is the primary target. The original
firmware and DOS apps are analyzed only as far as needed to recover that protocol and the machine
I/O semantics.

## System Architecture

```
PC (DOS) <--ISA bus / dual-port RAM--> BMDC card (68030) <--RS422 port A ('#', ')')--> AUF   (general I/O)
                                                           <--RS422 port B ('&')------> TLAUF (tool changer)
```

- **BMDC** — ISA card, MC68EC030 @ 40 MHz (no MMU), MC68882 FPU, SCN2681 dual UART. `BMDC.BIN` is
  loaded into card RAM at **0x00000000** by `B3T.EXE`/`BXX.EXE` at startup; entry point is 0xC630.
  PAL-based address decoding, no schematics. The recovered 68030 memory map (dual-port RAM at
  0x01200000, UART at 0x01300080, encoders/DACs/digital I/O at 0x013000xx) is in `PROTOCOL_NOTES.md`.
- **AUF** — MC68HC811E2 board, 24 inputs, 8 DC + 4 AC outputs. Talks on UART port A.
- **TLAUF** — tool-change I/O board on UART port B. Two operating modes matter:
  - **VMC mode**: TLAUF's HC11 runs the carousel itself; BMDC just sends pocket numbers and arm
    commands. This is the recommended path for the DIY controller.
  - **Non-VMC mode**: BMDC bit-bangs the motor outputs through a large step machine
    (`TOOL_CHANGE_STATE_MACHINE.md`).

### Serial protocol in one paragraph

38400 8N1 multidrop RS422. Every packet is a sync byte, hex-ASCII nibbles (`'0'-'9'`, `'a'-'f'`),
and a checksum `(sum of data bytes & 0x0F) + 0x40`. Short TX is 5 bytes (3 nibbles), short RX is 9
bytes (7 nibbles), long TX/RX is 18 bytes (16 nibbles = 8 data bytes, MSB byte sent first). One
communication cycle runs per servo tick: short TX to AUF, short TX to TLAUF, short RX from both,
long TX/RX with AUF. `dx32_proto.py` is the reference implementation of all of this.

## Repository Layout

| Path | What it is |
|------|------------|
| `BMDC.BIN`, `B3T.EXE`, `BXX.EXE`, `MAINTPG.EXE` | Original binaries (firmware, board test, main UI, maintenance I/O viewer) |
| `BMDCPRMS.SYS`, `BMDCPRMS.INI`, `MAINTPG1.DAT` | Machine parameter files and MAINTPG bit-definition data; used to confirm I/O bit names. The INI is a per-model override table, explained line by line in `BMDCPRMS_INI.md` |
| `decompiled/*.c` | Ghidra decompilation of each binary, one file per binary. **This is the primary RE source** — grep here rather than re-running Ghidra. `B3T.c` has real function names from CodeView symbols |
| `decompiled/BMDC.asm` | Full Ghidra disassembly listing of the firmware. Use it whenever a `BMDC.c` function ends in `halt_baddata()` or looks truncated: the decompiler cannot model `FMOVECR` or packed-decimal (`fmove.p`) 68882 instructions and silently drops everything after them |
| `decompiled/B3T_symbols.txt` | CodeView symbols from `B3T.EXE` (Ghidra address, kind, name, module). The DOS-side names of mailbox commands come from here |
| `ghidra_scripts/*.java` | `ExportAllDecompiled` (→ `*.c`), `ExportListing` (→ `BMDC.asm`), `ApplyCvSymbols` (names from a CSV), `DisableNoReturnDiscovery` (pre-script; without it Ghidra marks MSC's `__chkstk` as non-returning and every DOS function body is cut off after its first line) |
| `tools/cv_nb09.py`, `tools/cv_types.py` | Parse the CodeView NB09 block at the end of `B3T.EXE`: symbols (→ `decompiled/B3T_symbols.txt`) and struct/union/enum type records (`python3 tools/cv_types.py B3T.EXE 0x10bc ...` → `decompiled/B3T_types.txt`, which names the MOVEBUFFER/MOVCMD/dualPortRAM layouts) |
| `tools/patch_bmdc_ram.py` | Branch/NOP patch of the boot-time RAM-size checks so a BMDC3 accepts >512 KB (`--max 1M` or `--max 16M`, `--check` to inspect an image); background in `PROTOCOL_NOTES.md` "RAM and dual-port sizing at boot" |
| `tools/m68k_dis.py` | `python3 tools/m68k_dis.py START END` capstone disassembly of `BMDC.BIN` with resync after undecodable words and decoded extended-precision immediates. Use for the mailbox handlers and G-code handlers that Ghidra never disassembled (they are only reached through jump tables) |
| `PROTOCOL_NOTES.md` | Master protocol doc: UART config, packet formats, ISA port map, dual-port RAM, 68030 memory map, TLAUF VMC command protocol, key firmware function table, PC→BMDC mailbox command table |
| `AUF_PACKET_FORMAT.md` | Bit-level AUF packet encoding, input/output bit maps, debounce |
| `HOMING_SEQUENCE.md`, `TOOL_CHANGE_STATE_MACHINE.md` | Tool changer behavior traced through the firmware |
| `BMDC_RAM_UPGRADE.md` | Original SRAM part (MCM6226BBXJ20) pinout and SOJ package dimensions, firmware RAM-size probe, patch and adapter plan for more part-program memory |
| `BMDC_RAM_INTERPOSER_PROMPT.md` | Prompt for a separate Claude Code/KiCad session: castellated 32-SOJ-site to 36-SOJ interposer PCB for the 2 MB upgrade (pinouts, net map, mechanical rules, deliverables) |
| `hardware/bmdc_ram_interposer/` | The interposer KiCad 10 project built from that prompt (rev A, ERC/DRC clean, fab outputs in `fab/`). Fully generated: edit `tools/params.py`, run the generators listed in its README section 10, never hand-edit the `.kicad_pcb`. ROW_PITCH/host pad/CHIP_PITCH/END_CLEAR are unmeasured nominals that gate the order |
| `BMDC3_VS_BMDC4.md` | All 51 board-class (0xaf9c) branches: classification at boot, 68030 vs 68040 setup, halt codes, DAC/encoder/ADC/input-port differences, TC22-on-BMDC4 assessment |
| `BMDC_AXIS_OUTPUTS.md` | Analog axis DACs vs the PWMINT duty-cycle card: boot detection flag 0xafc4, halt codes 0xa1/0xa2, PWMINT register block at 0x01300040, servo-tick output path, PWM clamp window, spindle always analog |
| `BMDC_PROBE_INTERNALS.md` | Touch-probe internals on both sides (BXX probe mode and PROBEPT overlay, firmware probe cycle, setAxes offset copies, setActvTool); research notes only |
| `MOTION_PLANNER.md`, `BMDC_PARAM_TABLE.md` | Velocity planners (trapezoid vs S-curve, parameter 010) and the firmware parameter table (number → 68030 address/type) |
| `dx32_proto.py` | Python protocol library (pyserial) |
| `test_auf.py`, `test_tlauf.py`, `test_sniff.py` | Bench scripts: poll a board, send pocket commands, sniff/decode the bus |
| `dx32_pktuart.comp`, `LINUXCNC_COMPONENT_PROMPT.md` | LinuxCNC HAL component and its full specification |

## Commands

### Regenerate decompiled sources (Ghidra headless, installed at `/opt/ghidra`)

```bash
H=/opt/ghidra/support/analyzeHeadless; mkdir -p /tmp/ghidra_projects
# firmware: decompile + full listing
$H /tmp/ghidra_projects BMDC -import BMDC.BIN -processor 68000:BE:32:default -scriptPath ./ghidra_scripts \
   -postScript ExportListing.java ./decompiled/BMDC.asm -postScript ExportAllDecompiled.java ./decompiled/BMDC.c -overwrite
# B3T: apply CodeView names (python3 tools/cv_nb09.py B3T.EXE > syms.txt, then make the addr,kind,name CSV)
$H /tmp/ghidra_projects B3T -import B3T.EXE -scriptPath ./ghidra_scripts -preScript DisableNoReturnDiscovery.java \
   -postScript ApplyCvSymbols.java b3t_syms.csv -postScript ExportAllDecompiled.java ./decompiled/B3T.c -overwrite
# BXX / MAINTPG have no symbols; always use the pre-script or every function body is truncated
$H /tmp/ghidra_projects BXX -import BXX.EXE -scriptPath ./ghidra_scripts -preScript DisableNoReturnDiscovery.java \
   -postScript ExportAllDecompiled.java ./decompiled/BXX.c -overwrite
```

DOS executables auto-detect as `x86:LE:16:Real Mode`. `/tmp/ghidra_projects` does not survive reboots;
recreate it. The BMDC run takes a few minutes; the DOS ones longer. Ghidra silently stops
disassembling 68k code after an `FMOVECR`/`fmove.p`, so gaps in `BMDC.asm` are expected; fill them
with capstone (`python3 -c 'import capstone'` works here, mode `CS_MODE_M68K_040`), but capstone
mislabels packed/absolute FPU operands as `invalid` and misdecodes `FBcc`, so decode those by hand.

### Quick disassembly with Rizin

```bash
rizin -a m68k -b 32 -m 0x0 BMDC.BIN     # firmware loads at 0x0, so -m 0x0 is correct
rizin BXX.EXE
```

Rizin's m68k backend prints every 68882 instruction as `invalid`, so it is only useful for integer
code. For raw DOS offsets note the MZ header sizes: B3T 0x1400, BXX 0x3c00, MAINTPG 0x200 (file
offset = linear address relative to 1000:0000 + header).

### Bench-test the boards (no LinuxCNC needed; `pip install pyserial`)

```bash
python3 test_auf.py   /dev/ttyUSB0 [--interactive|--raw|--once]
python3 test_tlauf.py /dev/ttyUSB0 [--pocket N|--raw|--once]
python3 test_sniff.py /dev/ttyUSB0 [--hex|--count N|--loopback]
```

### Build the LinuxCNC component (on the LinuxCNC machine; `halcompile` is not installed here)

```bash
sudo halcompile --install dx32_pktuart.comp
# loadrt dx32_pktuart names=hm2_7i96.0.pktuart.0 ; setp ...mode 0|1|2 (both / AUF only / TLAUF only)
```

## Working Conventions

- **Addresses are the shared vocabulary.** Docs, Python, and the `.comp` all refer to firmware
  functions and variables by Ghidra names (`FUN_00014f9e`, `DAT_00003050`). Keep using those names
  when adding findings so they stay greppable in `decompiled/BMDC.c`. The function table in
  `PROTOCOL_NOTES.md` ("Key BMDC Firmware Functions") is the index to start from.
- **Mark confidence.** Findings are labeled CONFIRMED (traced in firmware or verified against
  MAINTPG/hardware) or TENTATIVE. The AUF short-RX map is confirmed; the TLAUF short-RX bit map in
  `dx32_proto.py` and the `.comp` is still tentative and needs hardware verification.
- **Three sources must agree.** When a bit assignment changes, update the markdown doc,
  `dx32_proto.py`, and `dx32_pktuart.comp` together; they are hand-synchronized.
- MAINTPG.EXE + MAINTPG1.DAT are the ground truth for human-readable I/O bit names (they display
  the same status/command words the firmware uses). Cross-check new bit names against them.
- This repo contains binaries and generated C; don't try to "build" or lint it as a software project.
