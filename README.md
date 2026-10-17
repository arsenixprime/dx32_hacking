
This project is focused on reverse engineering the Bridgeport DX32 CNC controller. This system uses a DOS based PC, running a custom CNC user interface applicaiton. It has an ISA card in it called the "BMDC", which has a Motorolla 68k family microcontroller on it. This card talks to two other cards via RS422 serial ports, the AUF and the TCLAuf. The AUF is used for general purpose I/O control and the TCLAuf is used for driving tool change related I/O.

Binaries provided:
* B3T.EXE - A simple system test application that exercises the functions of the BMDC board.
* BXX.EXE - The primary DX32 user interface application
* BMDC.BIN - The BMDC binary firmware, loaded by B3T or BXX when they start.
* MAINTPG.EXE - Maintenance program for viewing real-time I/O status (AUF inputs/outputs, TLAUF inputs/outputs)
* MAINTPG1.DAT - Data file for MAINTPG.EXE containing parameter bit definitions for all status/command words

More information about the BMDC board hardware. The various devices are connected via a number of programmable PALs for which the circuit diagrams are unavailable so the address mapping is unknown. The components on the board are:
* MC68EC030FE40C - Primary CPU running the firmware
* MC68882FN25A - Math coprocessor
* MAX161ACPI
* 2x ADM5180JP
* SCN2681AC1A44 - Two port async serial port

The address map is unknown

The AUF Board has:
* MC68HC811E2FN - Microcontroller
** Does have an 8ch 8bit ADC
* 4 Bit Switches for Address Select (Default 0000)
* 2x LTC485 RS422 Driver Chips
* 24x Input Channels
* 8x 24V DC Outputs. 7x Low Side. 1x High Side.
* 4x AC Outputs
* 2x LEDs, D11 and D12

## Reverse Engineering Documentation

* [PROTOCOL_NOTES.md](PROTOCOL_NOTES.md) — Master protocol document. Serial protocol between BMDC, AUF, and TLAUF (UART configuration, packet formats), ISA I/O port map, dual-port RAM layout, 68030 memory map, the TLAUF TX command protocol (VMC vs non-VMC modes), the timer/interrupt schedule (4 ms servo tick), the boot-time RAM/dual-port sizing probe, the key firmware function table, and the complete PC→BMDC mailbox command table with the DOS-side names (doMove, armProbe, wrPartPgm, ...).
* [HOMING_SEQUENCE.md](HOMING_SEQUENCE.md) — How the carousel homes on startup. Traces the full call chain from drive-ready detection through the task dispatcher to the pocket-send protocol that commands the TLAUF to move to pocket 1.
* [TOOL_CHANGE_STATE_MACHINE.md](TOOL_CHANGE_STATE_MACHINE.md) — Non-VMC tool change step machine. Documents the outer state machine (subroutine call stack) and inner step machine (carousel seek, orient, rotate) that runs when the BMDC directly controls motor outputs.
* [AUF_PACKET_FORMAT.md](AUF_PACKET_FORMAT.md) — Detailed AUF packet encoding/decoding. Covers the nibble packing for short and long packets, input debounce logic, and output bit assignments.
* [MOTION_PLANNER.md](MOTION_PLANNER.md) — How the BMDC firmware plans motion. Firmware units (10 nm, 4 ms tick), the trapezoid vs S-curve velocity planners and what parameter 010 (accel/decel profile, values 0-5) changes, when the S-curve falls back to the trapezoid, G8/G9/G99 and the P (precision) word with the corner-blending classifier, how the F word is scaled and used in combined X/Y/Z/C moves (F after a C word is the C-axis rate in deg/min, caps from parameters 7/8/47), the G117/G118/G119 rotary-coordinated moves, the move-type dispatch table, and the touch-probe engine (PC-driven via mailbox; there are no G-code probing cycles).
* [BMDC_PARAM_TABLE.md](BMDC_PARAM_TABLE.md) — All 288 firmware parameter slots (number, 68030 address, data type, title) extracted from the firmware's parameter table at 0x2a536. Use it to find where a `BMDCPRMS.SYS` parameter lives in BMDC RAM.
* [BMDC_RAM_UPGRADE.md](BMDC_RAM_UPGRADE.md) — Adding main RAM to a BMDC3 for a larger part-program buffer (the "part program memory full" alarm). Documents the fitted SRAM (MCM6226BBXJ20, 4 × 128K×8 = 512 KB), its full pin assignment, the 300-mil and 400-mil SOJ package dimensions (pitch, lead span, land pattern), the 36-lead package used by 512K×8 parts, how the firmware sizes RAM at boot and why a stock BMDC3 halts above 512 KB, the two-byte firmware patch (`tools/patch_bmdc_ram.py`), the castellated-adapter plan for 2 MB, the ISA-window test for the address decoder, and the DNC alternative.
* [BMDC_RAM_INTERPOSER_PROMPT.md](BMDC_RAM_INTERPOSER_PROMPT.md) — Ready-to-use Claude Code prompt (kicad-happy skills, KiCad 10) for designing the castellated interposer PCB that puts a 36-lead SOJ 512K×8 SRAM (CY7C1049G-10VXI) on the BMDC3's 32-lead wide SOJ site: 4-layer stack with +5 V pour over a GND plane, four 0402 decoupling caps, the host and chip pinouts, the free address/data permutation that makes it routable, a suggested net map, jumpers for A17/A18, the pad-vs-castellation clearance arithmetic, the measurements to confirm on the card, and the deliverables checklist.
* [hardware/bmdc_ram_interposer/](hardware/bmdc_ram_interposer/README.md) — The interposer itself, rev A (KiCad 10): generated 4-layer castellated board (11.83 × 27.6 mm, 32 castellations at 1.27 mm, short-pad SOJ-36 on top, four 0402 caps, JP1/JP2 solder jumpers and A17/A18 wire pads), ERC/DRC/schematic-parity clean, with gerbers/drill/CPL/BOM for JLCPCB, 3D renders, STEP, datasheets and kicad-happy analyzer reports. Everything is regenerated from `tools/params.py`; the row pitch, host pad size, chip-to-chip pitch and end clearance are still nominal and must be measured on the card before ordering.

## Decompiled Sources

* `decompiled/BMDC.c`, `decompiled/BXX.c`, `decompiled/B3T.c`, `decompiled/MAINTPG.c` — Ghidra decompilation of each binary, one file per binary. Grep here first rather than re-running Ghidra. `B3T.c` has real function names from the CodeView symbols.
* `decompiled/BMDC.asm` — Full Ghidra disassembly listing of the firmware. Use it whenever a `BMDC.c` function is truncated: the decompiler cannot model the 68882 `FMOVECR` / packed-decimal instructions and silently drops everything after them.
* `decompiled/B3T_symbols.txt` — CodeView symbols from `B3T.EXE` (address, kind, name, source module). The DOS-side names of the mailbox commands come from here.
* `decompiled/B3T_types.txt` — CodeView struct/union/enum records from `B3T.EXE`: the MOVEBUFFER, MOVCMD, MOVFLGS, dualPortRAM, MCCMD and parameter-block layouts shared between the DOS software and the firmware.

## Tools and Scripts

* `tools/cv_nb09.py` — Parses the CodeView NB09 debug block at the end of `B3T.EXE` and prints the symbol table (source of `decompiled/B3T_symbols.txt`).
* `tools/cv_types.py` — Dumps CodeView type records (structs, bit fields) from `B3T.EXE` by type index (source of `decompiled/B3T_types.txt`).
* `tools/m68k_dis.py` — Capstone disassembler for `BMDC.BIN` (`python3 tools/m68k_dis.py START END`) with resync after undecodable words and decoded extended-precision immediates. Needed for the mailbox, G-code-letter and move-type handlers that Ghidra never disassembled because they are only reached through jump tables.
* `tools/patch_bmdc_ram.py` — Produces a patched `BMDC.BIN` that lets a BMDC3 use more than 512 KB of RAM (`--max 1M` or `--max 16M`, `--check` to inspect an image). See `BMDC_RAM_UPGRADE.md`.
* `ghidra_scripts/ExportAllDecompiled.java` — Headless Ghidra post-script that writes every function's decompilation to one `.c` file.
* `ghidra_scripts/ExportListing.java` — Headless post-script that writes the full disassembly listing (`decompiled/BMDC.asm`).
* `ghidra_scripts/ApplyCvSymbols.java` — Applies a CSV of CodeView names (address, kind, name) to a Ghidra program before export.
* `ghidra_scripts/DisableNoReturnDiscovery.java` — Pre-script for the DOS executables. Without it Ghidra marks the Microsoft C `__chkstk` as non-returning and every function body is cut off after its first line.
* `CLAUDE.md` — Working notes for AI-assisted analysis: how to regenerate the decompiled sources with headless Ghidra, tool pitfalls, and the conventions used in the documents.

## Bench Test Scripts (no LinuxCNC needed, `pip install pyserial`)

* `dx32_proto.py` — Python reference implementation of the RS422 protocol: packet building/parsing, checksums, AUF/TLAUF bit maps.
* `test_auf.py` — Poll an AUF board over a USB-RS422 adapter and display decoded inputs; interactive output control.
* `test_tlauf.py` — Poll a TLAUF board; send VMC pocket commands.
* `test_sniff.py` — Passive bus sniffer/decoder and loopback self-test.

## LinuxCNC Integration

* [dx32_pktuart.comp](dx32_pktuart.comp) — LinuxCNC HAL component for communicating with AUF and TLAUF boards via Mesa PktUART over multidrop RS422. Supports `mode=0` (both), `mode=1` (AUF only), `mode=2` (TLAUF only) for independent testing. Build with `sudo halcompile --install dx32_pktuart.comp`.
* [LINUXCNC_COMPONENT_PROMPT.md](LINUXCNC_COMPONENT_PROMPT.md) — Full specification and design document for the PktUART component, including all HAL pin definitions, protocol details, and testing strategy.
