# BMDC Firmware Parameter Table

Extracted from `BMDC.BIN` at 0x2a536: 288 entries of `{u32 address, u16 type}` indexed by parameter number. The PC reads a parameter with mailbox command 0x1b and writes one with 0x1c (see `MOTION_PLANNER.md`). Titles come from `MAINTPG1.DAT`. Type codes: 0 = byte, 1 = word, 2 = long (32-bit int), 3 = 68882 extended (12 bytes), 4 = packed axis-config bit field (unpacked into the long array at 0x1038), 0xffff = not connected.

| # | 68030 address | type | title |
|---|---|---|---|
| 0 | 0x2a52e | long | BMDC Executive Revision Level |
| 1 | 0x00f9c | long | Lo-Speed (below breakpoint) Acceleration |
| 2 | 0x00fa0 | long | Hi-Speed (above breakpoint) Acceleration |
| 3 | 0x00fa4 | long | Acceleration Break-Point |
| 4 | 0x00fa8 | long | Deceleration |
| 5 | 0x00fac | long | Spindle Acceleration |
| 6 | 0x00fb0 | long | Spindle Deceleration |
| 7 | 0x00fb4 | long | Maximum Traverse Rate |
| 8 | 0x00fb8 | long | Z-Axis Traverse Rate |
| 9 | 0x00fc0 | long | Homing Speed |
| 10 | 0x011c8 | long | Accel/Decel Profile Selection |
| 11 | 0x00fc4 | long | Residual Feedrate for DLT ramp |
| 12 | 0x00fc8 | long | Minimum reduction of following error per Tick |
| 13 | 0x00fcc | long | Portion of Jog following error used as FDRT per Tick |
| 14 | 0x00fd0 | long | Measuring Feed |
| 15 | 0x00fd4 | long | Probing post-hit continuation distance |
| 16 | 0x0af60 | long | Touch-Probe back-off distance |
| 17 | 0x00fd8 | long | X (1st) Axis move negative limit of travel |
| 18 | 0x00fdc | long | X (1st) Axis move positive limit of travel |
| 19 | 0x00fe0 | long | Y (2nd) Axis move negative limit of travel |
| 20 | 0x00fe4 | long | Y (2nd) Axis move positive limit of travel |
| 21 | 0x00fe8 | long | Z (3rd) Axis move negative limit of travel |
| 22 | 0x00fec | long | Z (3rd) Axis move positive limit of travel |
| 23 | 0x00ff0 | long | C (4th) Axis move negative limit of travel |
| 24 | 0x00ff4 | long | C (4th) Axis move positive limit of travel |
| 25 | 0x00ff8 | long | S (5th) Axis move negative limit of travel |
| 26 | 0x00ffc | long | S (5th) Axis move positive limit of travel |
| 27 | 0x01000 | long | X (1st) Axis Home switch offset |
| 28 | 0x01004 | long | Y (2nd) Axis Home switch offset |
| 29 | 0x01008 | long | Z (3rd) Axis Home switch offset |
| 30 | 0x0100c | long | C (4th) Axis Home switch offset |
| 31 | 0x01010 | long | S (5th) Axis Home switch offset |
| 32 | 0x01014 | long | X (1st) Axis encoder resolution |
| 33 | 0x01018 | long | Y (2nd) Axis encoder resolution |
| 34 | 0x0101c | long | Z (3rd) Axis encoder resolution |
| 35 | 0x01020 | long | C (4th) Axis encoder resolution |
| 36 | 0x01024 | long | S (5th) Axis encoder resolution |
| 37 | 0x01028 | long | JogKnob encoder resolution |
| 38 | 0x00004 | packed bits (axis-config array @0x1038) | The 'Homing Sequence' configuration parameter |
| 39 | 0x01140 | long | Dead-Band (Null Zone) for Joy-Sticks |
| 40 | 0x01144 | long | Scale Factor for Joy-Sticks |
| 41 | 0x02a70 | long | X (1st) Axis Applied Motor Voltage |
| 42 | 0x02a74 | long | Y (2nd) Axis Applied Motor Voltage |
| 43 | 0x02a78 | long | Z (3rd) Axis Applied Motor Voltage |
| 44 | 0x02a7c | long | C (4th) Axis Applied Motor Voltage |
| 45 | 0x028ec | long | Spindle Velocity Filter Period |
| 46 | 0x02d70 | not connected | Advanced Servo Options |
| 47 | 0x00fbc | long | C-Axis Traverse Rate |
| 48 | 0x0c454 | long | Spindle Accel/Decel Rate |
| 49 | 0x0c44c | long | Transmission Shift Speed |
| 50 | 0x01068 | long | In-Position Tolerance |
| 51 | 0x01070 | long | Following Error Shutdown Point |
| 52 | 0x0106c | long | Maximum Following Error |
| 53 | 0x01074 | long | Maximum Spindle Slip |
| 54 | 0x01078 | long | Spindle Slip Limit |
| 55 | 0x02804 | long | X (1st) Axis Backlash |
| 56 | 0x02808 | long | Y (2nd) Axis Backlash |
| 57 | 0x0280c | long | Z (3rd) Axis Backlash |
| 58 | 0x02810 | long | C (4th) Axis Backlash |
| 59 | 0x02814 | long | S (5th) Axis Backlash |
| 60 | 0x02980 | long | X (1st) Axis Velocity Gain |
| 61 | 0x02984 | long | Y (2nd) Axis Velocity Gain |
| 62 | 0x02988 | long | Z (3rd) Axis Velocity Gain |
| 63 | 0x0298c | long | C (4th) Axis Velocity Gain |
| 64 | 0x02990 | long | S (5th) Axis Velocity Gain |
| 65 | 0x029bc | long | X (1st) Axis Servo Gain |
| 66 | 0x029c0 | long | Y (2nd) Axis Servo Gain |
| 67 | 0x029c4 | long | Z (3rd) Axis Servo Gain |
| 68 | 0x029c8 | long | C (4th) Axis Servo Gain |
| 69 | 0x029cc | long | S (5th) Axis Servo Gain |
| 70 | 0x028e0 | long | Spindle Velocity Sample Period |
| 71 | 0x028f4 | long | Spindle Command Gain |
| 72 | 0x0af08 | long | Spindle-Motor Minimum RPM |
| 73 | 0x0af0c | long | Spindle-Motor Maximum RPM |
| 74 | 0x0af10 | long | Spindle-Range #1 Maximum RPM |
| 75 | 0x0af14 | long | Spindle-Range #2 Maximum RPM |
| 76 | 0x0af18 | long | Spindle-Range #3 Maximum RPM |
| 77 | 0x027ac | long | Integral Following Error Gain |
| 78 | 0x027b0 | long | Change-In-Direction Counter Initializer |
| 79 | 0x027a0 | long | Normal Gain For Integral Following Error Term |
| 80 | 0x027a4 | long | Following Error Integral Term Magnitude Limiter |
| 81 | 0x027a8 | long | Integral Following Error Loss |
| 82 | 0x0af30 | long | Spindle Analog-Feedback Gain |
| 83 | 0x0ae9a | long | Lube Pump Interval |
| 84 | 0x0ae9e | long | Lube Pump Duration |
| 85 | 0x0ae2e | extended | X Axis Clearance Point |
| 86 | 0x0ae3a | extended | Y Axis Clearance Point |
| 87 | 0x0ae76 | extended | X Center-Of-Rotation for Rotary Axis |
| 88 | 0x0ae82 | extended | Y Center-Of-Rotation for Rotary Axis |
| 89 | 0x0ae8e | extended | Z Center-Of-Rotation for Rotary Axis |
| 90 | 0x0c5cc | byte | Tool-Changer Number Of Tools |
| 91 | 0x0af05 | byte | Tool-Changer Configuration |
| 92 | 0x0aefc | long | Tool-Changer Orient Position |
| 93 | 0x0af00 | long | Tool-Changer Z-Axis Offset |
| 94 | 0x0bfec | long | Jogging Feedrate |
| 95 | 0x0c448 | long | Swarf Conveyor Reversal Time |
| 96 | 0x0af06 | byte | Tool-Changer Carousel Delay Time |
| 97 | 0x0bff4 | long | Time-Out for PLC Driver |
| 98 | 0x0af58 | long | The 'Master' configuration parameter |
| 99 | 0x01120 | long | X (1st) Axis Home Position |
| 100 | 0x01124 | long | Y (2nd) Axis Home Position |
| 101 | 0x01128 | long | Z (3rd) Axis Home Position |
| 102 | 0x0112c | long | C (4th) Axis Home Position |
| 103 | 0x01130 | long | S (5th) Axis Home Position |
| 104 | 0x0af5c | long | Tool-Change Clearance |
| 105 | 0x028fc | long | 1st (X) Axis Leadscrew Compensation |
| 106 | 0x02900 | long | 2nd (Y) Axis Leadscrew Compensation |
| 107 | 0x02904 | long | 3rd (Z) Axis Leadscrew Compensation |
| 108 | 0x02908 | long | 4th (C) Axis Leadscrew Compensation |
| 109 | 0x01084 | long | Spindle Horsepower Limit - Power |
| 110 | 0x01088 | long | Spindle Horsepower Limit - Speed |
| 111 | 0x0108c | long | Spindle Current Sense Gain |
| 112 | 0x0af70 | long | Axis Run-Away Test Velocity Difference |
| 113 | 0x0af74 | long | Axis Run-Away Test Hysteresis |
| 114 | 0x02994 | long | X (1st) Axis Differential Following Error Gain |
| 115 | 0x02998 | long | Y (2nd) Axis Differential Following Error Gain |
| 116 | 0x0299c | long | Z (3rd) Axis Differential Following Error Gain |
| 117 | 0x029a0 | long | C (4th) Axis Differential Following Error Gain |
| 118 | 0x029a4 | long | S (5th) Axis Differential Following Error Gain |
| 119 | 0x029a8 | long | X (1st) Axis Following Error Gain |
| 120 | 0x029ac | long | Y (2nd) Axis Following Error Gain |
| 121 | 0x029b0 | long | Z (3rd) Axis Following Error Gain |
| 122 | 0x029b4 | long | C (4th) Axis Following Error Gain |
| 123 | 0x029b8 | long | S (5th) Axis Following Error Gain |
| 124 | 0x029d0 | long | Maximum X (1st) Axis PWM Deviation |
| 125 | 0x029d4 | long | Maximum Y (2nd) Axis PWM Deviation |
| 126 | 0x029d8 | long | Maximum Z (3rd) Axis PWM Deviation |
| 127 | 0x029dc | long | Maximum C (4th) Axis PWM Deviation |
| 128 | 0x02d6c | long | Z Axis Velocity Balance Flag |
| 129 | 0x029f4 | long | X (1st) Axis Motor Volts Per 1000 RPM |
| 130 | 0x029f8 | long | Y (2nd) Axis Motor Volts Per 1000 RPM |
| 131 | 0x029fc | long | Z (3rd) Axis Motor Volts Per 1000 RPM |
| 132 | 0x02a00 | long | C (4th) Axis Motor Volts Per 1000 RPM |
| 133 | 0x02a04 | long | S (5th) Axis Motor Volts Per 1000 RPM |
| 134 | 0x02a08 | long | X (1st) Axis Encoder Lines Per Motor Revolution |
| 135 | 0x02a0c | long | Y (2nd) Axis Encoder Lines Per Motor Revolution |
| 136 | 0x02a10 | long | Z (3rd) Axis Encoder Lines Per Motor Revolution |
| 137 | 0x02a14 | long | C (4th) Axis Encoder Lines Per Motor Revolution |
| 138 | 0x02a18 | long | S (5th) Axis Encoder Lines Per Motor Revolution |
| 139 | 0x02a1c | long | Bus Voltage For Pwm Amplifier |
| 140 | 0x02a94 | long | Pwm Offset For X,Y,Z,W Axis |
| 141 | 0x02abc | long | Pwm Amp Load Integrator Limit |
| 142 | 0x02ac0 | long | PWM Digital Filter Constant #1 |
| 143 | 0x02ac4 | long | PWM Digital Filter Constant #2 |
| 144 | 0x02ac8 | long | PWM Digital Filter Constant #3 |
| 145 | 0x02acc | long | PWM Digital Filter Constant #4 |
| 146 | 0x0afd8 | long | X (1st) Axis Lead-Comp Interval |
| 147 | 0x0afdc | long | Y (2nd) Axis Lead-Comp Interval |
| 148 | 0x0afe0 | long | Z (3rd) Axis Lead-Comp Interval |
| 149 | 0x0afe4 | long | C (4th) Axis Lead-Comp Interval |
| 150 | 0x031e0 | byte | Machine Faults Word |
| 151 | 0x031e1 | byte | Axis Limits Word |
| 152 | 0x031e2 | byte | Auxiliary Limits Word |
| 153 | 0x031e3 | byte | Drive Faults Word |
| 154 | 0x031e4 | byte | Machine Status Word |
| 155 | 0x031e5 | byte | Home Switch Word |
| 156 | 0x031e6 | word | Option Status Word |
| 157 | 0xffffffff | not connected | Unimplemented |
| 158 | 0x031e8 | long | Back-End Switch Status Word |
| 159 | 0x031ec | byte | Front-End Switch Status Word |
| 160 | 0x031ed | byte | Machine Command Word |
| 161 | 0x031ee | word | Option Command Word |
| 162 | 0xffffffff | not connected | Unimplemented |
| 163 | 0x03250 | word | Spindle Command Word |
| 164 | 0x03252 | byte | Spindle Status Word |
| 165 | 0x03254 | long | Spindle Speed Command Word |
| 166 | 0x03260 | byte | Tool-Changer Command Word |
| 167 | 0x03261 | byte | Tool-Changer Status Register |
| 168 | 0x03262 | byte | Tool-Changer Control Register |
| 169 | 0x03266 | byte | Desired Tool Register |
| 170 | 0x03267 | byte | Carousel Position Register |
| 171 | 0x03268 | byte | TLAUF Input Register |
| 172 | 0x0326a | byte | TLAUF Output Register |
| 173 | 0x0326c | byte | NV RAM Write Address Register |
| 174 | 0x0326d | byte | NV RAM Write Data Register |
| 175 | 0x0326e | byte | NV RAM Address Register |
| 176 | 0x0326f | byte | NV RAM Pointer Register |
| 177 | 0x03270 | byte | NV RAM Data Register - Nybble 0 |
| 178 | 0x03271 | byte | NV RAM Data Register - Nybble 1 |
| 179 | 0x03272 | byte | NV RAM Data Register - Nybble 2 |
| 180 | 0x03273 | byte | NV RAM Data Register - Nybble 3 |
| 181 | 0x03274 | byte | NV RAM Data Register - Nybble 4 |
| 182 | 0x03275 | byte | NV RAM Data Register - Nybble 5 |
| 183 | 0x03276 | byte | NV RAM Data Register - Nybble 6 |
| 184 | 0x03277 | byte | NV RAM Data Register - Nybble 7 |
| 185 | 0x03278 | byte | NV RAM Data Register - Nybble 8 |
| 186 | 0x03279 | byte | NV RAM Data Register - Nybble 9 |
| 187 | 0x0327a | byte | NV RAM Data Register - Nybble 10 |
| 188 | 0x0327b | byte | NV RAM Data Register - Nybble 11 |
| 189 | 0x0327c | byte | NV RAM Data Register - Nybble 12 |
| 190 | 0x0327d | byte | NV RAM Data Register - Nybble 13 |
| 191 | 0x0327e | byte | NV RAM Data Register - Nybble 14 |
| 192 | 0x0327f | byte | NV RAM Data Register - Nybble 15 |
| 193 | 0x0c458 | long | Spindle Ramp Up Max Time |
| 194 | 0x0c460 | long | Spindle Shot-pin Switch Make Max Time |
| 195 | 0x0c464 | long | Spindle Switch Settling In Max Time |
| 196 | 0x0c468 | long | Spindle Range Switch Make Max Time |
| 197 | 0x0c46c | long | Gear settling-in Max Time |
| 198 | 0x0c470 | long | Shot-pin settling-in Max Time |
| 199 | 0x0c474 | long | Backing out/in Max Time |
| 200 | 0x0c478 | long | Maximum Number of Retries |
| 201 | 0x0c4e0 | long | Maximum Shifting Torque |
| 202 | 0x0c4ee | long | Spndl Temp Gain |
| 203 | 0x0c51b | byte | Number of GPAUF Boards |
| 204 | 0x0c544 | long | GPAUF Use |
| 205 | 0x0c5c2 | long | Z Brake Timer |
| 206 | 0xffffffff | not connected | Unimplemented |
| 207 | 0xffffffff | not connected | Unimplemented |
| 208 | 0xffffffff | not connected | Unimplemented |
| 209 | 0xffffffff | not connected | Unimplemented |
| 210 | 0xffffffff | not connected | Unimplemented |
| 211 | 0xffffffff | not connected | Unimplemented |
| 212 | 0xffffffff | not connected | Unimplemented |
| 213 | 0xffffffff | not connected | Unimplemented |
| 214 | 0xffffffff | not connected | Unimplemented |
| 215 | 0xffffffff | not connected | Unimplemented |
| 216 | 0xffffffff | not connected | Unimplemented |
| 217 | 0xffffffff | not connected | Unimplemented |
| 218 | 0xffffffff | not connected | Unimplemented |
| 219 | 0xffffffff | not connected | Unimplemented |
| 220 | 0x03280 | long | Analog Input #1 - Feedrate Override Value |
| 221 | 0x03284 | long | Analog Input #2 - Spindle Speed Feedback |
| 222 | 0x03288 | long | Analog Input #3 - JoyStick Pot #1 (X) |
| 223 | 0x0328c | long | Analog Input #4 - JoyStick Pot #2 (Y) |
| 224 | 0x03290 | long | Analog Input #5 - JoyStick Pot #3 (Z) |
| 225 | 0x03294 | long | Analog Input #6 - JoyStick Pot #4 (C) |
| 226 | 0x03298 | long | Analog Input #7 - JoyStick Pot #5 (S) |
| 227 | 0x02778 | long | Axis #1 (X) Following Error |
| 228 | 0x0277c | long | Axis #2 (Y) Following Error |
| 229 | 0x02780 | long | Axis #3 (Z) Following Error |
| 230 | 0x02784 | long | Axis #4 (C) Following Error |
| 231 | 0x02788 | long | Axis #5 (S) Following Error |
| 232 | 0x02840 | long | Axis #1 (X) DAC Value |
| 233 | 0x02844 | long | Axis #2 (Y) DAC Value |
| 234 | 0x02848 | long | Axis #3 (Z) DAC Value |
| 235 | 0x0284c | long | Axis #4 (C) DAC Value |
| 236 | 0x02850 | long | Axis #5 (S) DAC Value |
| 237 | 0x0278c | long | Axis #1 (X) DAC Offset |
| 238 | 0x02790 | long | Axis #2 (Y) DAC Offset |
| 239 | 0x02794 | long | Axis #3 (Z) DAC Offset |
| 240 | 0x02798 | long | Axis #4 (C) DAC Offset |
| 241 | 0x0279c | long | Axis #5 (S) DAC Offset |
| 242 | 0x0c47c | long | Spindle up-to-speed timer |
| 243 | 0x0c480 | long | Spindle shot-pin make timer |
| 244 | 0x0c484 | long | Settling-in timer |
| 245 | 0x0c488 | long | Spindle range switch make timer |
| 246 | 0x0c48c | long | Gear settling-in timer |
| 247 | 0x0c490 | long | Shot-pin settling-in timer |
| 248 | 0x0c494 | long | Backing out/in timer |
| 249 | 0x0c498 | long | Timer 8 |
| 250 | 0x0c49c | long | Timer 9 |
| 251 | 0x0c4a0 | long | Timer 10 |
| 252 | 0x0c4a4 | long | Timer 11 |
| 253 | 0x0c4a8 | long | Timer 12 |
| 254 | 0x0c4ac | long | Timer 13 |
| 255 | 0x0c4b0 | long | Timer 14 |
| 256 | 0x0c4b4 | long | Timer 15 |
| 257 | 0x0c4b8 | long | Timer 16 |
| 258 | 0x0c4bc | long | Number of Re-tries counter |
| 259 | 0x0c4c0 | long | Counter 2 |
| 260 | 0x0c4c4 | long | Counter 3 |
| 261 | 0x0c4c8 | long | Counter 4 |
| 262 | 0x0c4cc | long | Counter 5 |
| 263 | 0x0c4d0 | long | Counter 6 |
| 264 | 0x0c4d4 | long | Counter 7 |
| 265 | 0x0c4d8 | long | Counter 8 |
| 266 | 0xffffffff | not connected | Spindle Usage Time |
| 267 | 0x0c4f2 | long | Spndl Temp Corr |
| 268 | 0x0c4f6 | long | Ambient Temperature |
| 269 | 0x0c4fa | long | Spindle Head Temp |
| 270 | 0x0c4fe | long | Accumulated Spindle Temperature Correction |
| 271 | 0x0c506 | long | Cycle Time |
| 272 | 0x0c50a | long | Peck Clearance |
| 273 | 0x0ae46 | extended | X Pallet1 Clearance |
| 274 | 0x0ae52 | extended | Y Pallet1 Clearance |
| 275 | 0x0ae5e | extended | X Pallet2 Clearance |
| 276 | 0x0ae6a | extended | Y Pallet2 Clearance |
| 277 | 0x03248 | long | GPAUF1 Inputs 0-31 |
| 278 | 0x0324c | long | GPAUF1 Inputs 32-63 |
| 279 | 0x031f0 | long | GPAUF1 Outputs 0-31 |
| 280 | 0x031f4 | long | GPAUF1 Outputs 32-63 |
| 281 | 0x03228 | long | GPAUF2 Inputs 0-31 |
| 282 | 0x0322c | long | GPAUF2 Inputs 32-63 |
| 283 | 0x031f8 | long | GPAUF2 Outputs 0-31 |
| 284 | 0x031fc | long | GPAUF2 Outputs 32-63 |
| 285 | 0x0c516 | long | Control Options |
| 286 | 0x2a532 | long |  |
| 287 | 0x4bff8 | word |  |
