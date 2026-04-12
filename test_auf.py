#!/usr/bin/env python3
"""
AUF board bench test script.

Sends short '#' and long ')' packets to the AUF board over an RS422
serial adapter and displays decoded input status.  Does NOT require
LinuxCNC — runs on any Linux system with pyserial.

Usage:
  python3 test_auf.py /dev/ttyUSB0              # monitor inputs (all outputs off)
  python3 test_auf.py /dev/ttyUSB0 --interactive # interactive output control
  python3 test_auf.py /dev/ttyUSB0 --raw         # show raw packet hex
  python3 test_auf.py /dev/ttyUSB0 --once        # single exchange, then exit

Install:  pip install pyserial
"""

import argparse
import sys
import time
import os

import dx32_proto as proto


def clear_screen():
    os.system('clear' if os.name == 'posix' else 'cls')


def format_signals(signals, columns=2):
    """Format signal dict into aligned columns."""
    items = list(signals.items())
    lines = []
    col_width = 30
    for i in range(0, len(items), columns):
        parts = []
        for j in range(columns):
            if i + j < len(items):
                name, val = items[i + j]
                if isinstance(val, int) and val > 1:
                    parts.append(f"  {name:22s} = {val}")
                else:
                    marker = "*" if val else "."
                    parts.append(f"  {marker} {name:22s} {'ON' if val else 'off':>3s}")
        lines.append("".join(parts))
    return "\n".join(lines)


def monitor_loop(ser, args):
    """Continuously poll AUF and display status."""
    short_n0 = 0  # short TX nibble 0 (bits 4-7)
    short_n1 = 0  # short TX nibble 1 (bits 0-3, primary control)
    long_data = [0] * 8  # long TX data bytes

    cycle = 0
    short_ok = 0
    short_err = 0
    long_ok = 0
    long_err = 0

    print("AUF Monitor — Ctrl+C to stop")
    if args.interactive:
        print("Commands: q=quit, 0-7=toggle short TX bit, L0-L7=toggle long TX byte 0 bit")

    try:
        while True:
            cycle += 1

            # --- Short packet exchange ---
            tx = proto.build_short_tx(proto.SYNC_AUF, short_n0, short_n1, short_n1)
            rx = proto.send_and_receive(ser, tx, proto.SHORT_RX_LEN, rx_timeout=0.05)

            short_nibs = None
            if rx:
                short_nibs = proto.parse_short_rx(rx, proto.SYNC_AUF)
                if short_nibs:
                    short_ok += 1
                else:
                    short_err += 1
            else:
                short_err += 1

            # Small gap before long packet
            time.sleep(0.002)

            # --- Long packet exchange ---
            ltx = proto.build_long_tx(long_data)
            lrx = proto.send_and_receive(ser, ltx, proto.LONG_PKT_LEN, rx_timeout=0.05)

            long_bytes = None
            if lrx:
                long_bytes = proto.parse_long_rx(lrx)
                if long_bytes:
                    long_ok += 1
                else:
                    long_err += 1
            else:
                long_err += 1

            # --- Display ---
            if not args.raw:
                clear_screen()

            print(f"=== AUF Status  cycle={cycle}  "
                  f"short={short_ok}/{short_ok+short_err}  "
                  f"long={long_ok}/{long_ok+long_err} ===")
            print()

            if args.raw:
                print(proto.hex_dump(tx, "TX short: "))
                if rx:
                    print(proto.hex_dump(rx, "RX short: "))
                else:
                    print("RX short: (no response)")
                print(proto.hex_dump(ltx, "TX long:  "))
                if lrx:
                    print(proto.hex_dump(lrx, "RX long:  "))
                else:
                    print("RX long:  (no response)")
                print()

            if short_nibs:
                signals = proto.decode_auf_short_rx(short_nibs)
                print("Short RX inputs:")
                print(format_signals(signals))
                print()
                raw_str = ' '.join(f'n{i}={v:x}' for i, v in enumerate(short_nibs))
                print(f"  Raw nibbles: {raw_str}")
            else:
                print("Short RX: no valid response")

            print()

            if long_bytes:
                print("Long RX data (8 bytes):")
                for i, b in enumerate(long_bytes):
                    print(f"  byte[{i}] = 0x{b:02x} = {b:08b}")
            else:
                print("Long RX: no valid response")

            print()
            print(f"Short TX control: n0=0x{short_n0:x} n1=0x{short_n1:x}  "
                  f"(bits: {short_n1:04b}|{short_n0:04b})")
            print(f"Long TX byte[0]: 0x{long_data[0]:02x} = {long_data[0]:08b}")

            if args.once:
                return

            # --- Interactive input ---
            if args.interactive:
                print()
                print("Toggle: 0-7=short TX bit, L0-L7=long byte0 bit, q=quit")
                # Non-blocking check for input
                import select
                if select.select([sys.stdin], [], [], 0.05)[0]:
                    cmd = sys.stdin.readline().strip().lower()
                    if cmd == 'q':
                        return
                    elif cmd.startswith('l') and len(cmd) == 2 and cmd[1].isdigit():
                        bit = int(cmd[1])
                        long_data[0] ^= (1 << bit)
                        print(f"  -> Toggled long byte[0] bit {bit}")
                    elif len(cmd) == 1 and cmd.isdigit():
                        bit = int(cmd)
                        if bit < 4:
                            short_n1 ^= (1 << bit)
                        else:
                            short_n0 ^= (1 << (bit - 4))
                        print(f"  -> Toggled short TX bit {bit}")
                else:
                    time.sleep(0.05)
            else:
                time.sleep(0.1)

    except KeyboardInterrupt:
        print("\nStopped.")


def main():
    parser = argparse.ArgumentParser(description="AUF board bench test")
    parser.add_argument("port", help="Serial port device (e.g. /dev/ttyUSB0)")
    parser.add_argument("--raw", action="store_true",
                        help="Show raw hex packets")
    parser.add_argument("--once", action="store_true",
                        help="Single exchange then exit")
    parser.add_argument("--interactive", "-i", action="store_true",
                        help="Interactive output bit toggling")
    parser.add_argument("--timeout", type=float, default=0.05,
                        help="RX timeout in seconds (default 0.05)")
    args = parser.parse_args()

    print(f"Opening {args.port} at {proto.BAUDRATE} baud...")
    ser = proto.open_port(args.port, timeout=args.timeout)
    print(f"Port open. Talking to AUF board (sync '#').")
    print()

    try:
        monitor_loop(ser, args)
    finally:
        ser.close()
        print("Port closed.")


if __name__ == "__main__":
    main()
