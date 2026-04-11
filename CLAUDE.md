# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

Reverse engineering the Bridgeport DX32 CNC controller system. The goal is to understand the firmware and DOS applications that control this CNC machine.

## System Architecture

- **DOS PC** runs custom CNC UI software, communicates with an ISA card (BMDC)
- **BMDC board** — ISA card with MC68EC030 (68030) CPU running custom firmware. Components:
  - MC68EC030FE40C — primary CPU (40MHz 68030, no MMU)
  - MC68882FN25A — FPU (25MHz 68882)
  - SCN2681AC1A44 — dual UART for RS422 serial
  - MAX161ACPI, 2x ADM5180JP — ADC and RS-485 transceivers
  - Address map is unknown; PAL-based address decoding with no available schematics
- **AUF** — connected to BMDC via RS422, handles general purpose I/O
- **TCLAuf** — connected to BMDC via RS422, drives tool change I/O

## Target Binaries

| File | Type | Size | Description |
|------|------|------|-------------|
| `BMDC.BIN` | Raw 68030 firmware | 304 KB | Loaded onto BMDC card at startup by either DOS app |
| `B3T.EXE` | DOS MZ executable | 155 KB | Test utility that exercises BMDC board functions |
| `BXX.EXE` | DOS MZ executable | 564 KB | Primary DX32 CNC user interface application |

## Reverse Engineering Tools

Use **Ghidra headless analyzer** for decompilation and **Rizin** for quick CLI-based disassembly/analysis.

### Ghidra headless usage
```bash
# Analyze BMDC firmware (68030, big-endian, 32-bit)
analyzeHeadless /tmp/ghidra_projects DX32 -import BMDC.BIN -processor 68000:BE:32:default

# Analyze DOS executables (x86 16-bit real mode)
analyzeHeadless /tmp/ghidra_projects DX32 -import B3T.EXE -processor x86:LE:16:Real Mode
analyzeHeadless /tmp/ghidra_projects DX32 -import BXX.EXE -processor x86:LE:16:Real Mode
```

### Rizin quick analysis
```bash
# Disassemble BMDC firmware
rizin -a m68k -b 32 -m 0x0 BMDC.BIN

# Analyze DOS executables
rizin B3T.EXE
rizin BXX.EXE
```

## Key RE Questions

- BMDC board address map (memory-mapped I/O layout, determined by undocumented PALs)
- Communication protocol between DOS apps and BMDC board (ISA bus interface)
- RS422 serial protocol between BMDC, AUF, and TCLAuf
- BMDC.BIN load address and entry point
