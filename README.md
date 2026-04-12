
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

* [PROTOCOL_NOTES.md](PROTOCOL_NOTES.md) — Serial protocol between BMDC, AUF, and TLAUF. Covers UART configuration, packet formats, ISA I/O port map, dual-port RAM layout, 68030 memory map, and the TLAUF TX command protocol (VMC vs non-VMC modes).
* [HOMING_SEQUENCE.md](HOMING_SEQUENCE.md) — How the carousel homes on startup. Traces the full call chain from drive-ready detection through the task dispatcher to the pocket-send protocol that commands the TLAUF to move to pocket 1.
* [TOOL_CHANGE_STATE_MACHINE.md](TOOL_CHANGE_STATE_MACHINE.md) — Non-VMC tool change step machine. Documents the outer state machine (subroutine call stack) and inner step machine (carousel seek, orient, rotate) that runs when the BMDC directly controls motor outputs.
* [AUF_PACKET_FORMAT.md](AUF_PACKET_FORMAT.md) — Detailed AUF packet encoding/decoding. Covers the nibble packing for short and long packets, input debounce logic, and output bit assignments.

## LinuxCNC Integration

* [dx32_pktuart.comp](dx32_pktuart.comp) — LinuxCNC HAL component for communicating with AUF and TLAUF boards via Mesa PktUART over multidrop RS422. Supports `mode=0` (both), `mode=1` (AUF only), `mode=2` (TLAUF only) for independent testing. Build with `sudo halcompile --install dx32_pktuart.comp`.
* [LINUXCNC_COMPONENT_PROMPT.md](LINUXCNC_COMPONENT_PROMPT.md) — Full specification and design document for the PktUART component, including all HAL pin definitions, protocol details, and testing strategy.
