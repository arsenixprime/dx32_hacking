
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
