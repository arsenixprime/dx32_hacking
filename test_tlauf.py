#!/usr/bin/env python3
"""
TLAUF board bench test script.

Sends short '&' packets to the TLAUF board over an RS422 serial adapter
and displays decoded input status.  Supports VMC pocket commands.
Does NOT require LinuxCNC — runs on any Linux system with pyserial.

Usage:
  python3 test_tlauf.py /dev/ttyUSB0              # monitor inputs
  python3 test_tlauf.py /dev/ttyUSB0 --raw         # show raw packet hex
  python3 test_tlauf.py /dev/ttyUSB0 --once        # single exchange then exit
  python3 test_tlauf.py /dev/ttyUSB0 --pocket 5    # send VMC pocket command

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


def send_short_exchange(ser, n0, n1, n2, raw=False):
    """Send a TLAUF short TX and read short RX response."""
    tx = proto.build_short_tx(proto.SYNC_TLAUF, n0, n1, n2)
    rx = proto.send_and_receive(ser, tx, proto.SHORT_RX_LEN, rx_timeout=0.05)

    if raw:
        print(proto.hex_dump(tx, "TX: "))
        if rx:
            print(proto.hex_dump(rx, "RX: "))
        else:
            print("RX: (no response)")

    nibs = None
    if rx:
        nibs = proto.parse_short_rx(rx, proto.SYNC_TLAUF)
    return nibs


def send_vmc_pocket(ser, target_pocket, verbose=True):
    """Send a VMC pocket command to the TLAUF.

    Implements the two-nibble pocket send protocol from 0x2e2ee:
      1. Send high nibble (cmd 0x07)
      2. Heartbeat
      3. Send low nibble (cmd 0x08)
      4. Heartbeat
      5. Poll until pocket matches

    In the original firmware, these are layered on top of the '&' short
    TX using command types.  For bench testing, we send the raw command
    nibbles directly.

    The command type 3 encoding packs cmd_byte and data_nibble into
    the 3 short TX nibbles.  Exact encoding TBD — this is a best-effort
    implementation based on firmware analysis.
    """
    if not 1 <= target_pocket <= 24:
        print(f"Error: pocket must be 1-24, got {target_pocket}")
        return False

    hi_nib = (target_pocket >> 4) & 0x0F
    lo_nib = target_pocket & 0x0F

    if verbose:
        print(f"Sending VMC pocket command: target={target_pocket} "
              f"(hi=0x{hi_nib:x}, lo=0x{lo_nib:x})")

    # Step 1: Send high nibble — cmd 0x07, data = hi_nib
    # Command type 3 encoding: n0 = cmd_byte(0x07), n1 = data(hi_nib), n2 = type(3)
    # NOTE: This encoding is TENTATIVE — the exact mapping of command type 3
    # into the 3 short TX nibbles needs verification with a logic analyzer.
    if verbose:
        print("  Step 1: Pocket high nibble (cmd=0x07)")
    nibs = send_short_exchange(ser, 0x07, hi_nib, 0x03, raw=verbose)
    time.sleep(0.005)

    # Step 2: Heartbeat (command type 2)
    if verbose:
        print("  Step 2: Heartbeat")
    nibs = send_short_exchange(ser, 0x00, 0x00, 0x02, raw=verbose)
    time.sleep(0.005)

    # Step 3: Send low nibble — cmd 0x08, data = lo_nib
    if verbose:
        print("  Step 3: Pocket low nibble (cmd=0x08)")
    nibs = send_short_exchange(ser, 0x08, lo_nib, 0x03, raw=verbose)
    time.sleep(0.005)

    # Step 4: Heartbeat
    if verbose:
        print("  Step 4: Heartbeat")
    nibs = send_short_exchange(ser, 0x00, 0x00, 0x02, raw=verbose)
    time.sleep(0.005)

    # Step 5: Poll until pocket matches (with timeout)
    if verbose:
        print(f"  Step 5: Polling for pocket {target_pocket}...")
    timeout = time.monotonic() + 30.0  # 30 second timeout
    while time.monotonic() < timeout:
        # Send heartbeat while polling
        nibs = send_short_exchange(ser, 0x00, 0x00, 0x02)
        if nibs and len(nibs) >= 7:
            pocket = (nibs[5] << 4) | nibs[6]
            if verbose:
                print(f"    Current pocket: {pocket}")
            if pocket == target_pocket:
                if verbose:
                    print(f"  Pocket {target_pocket} reached!")
                return True
        time.sleep(0.1)

    print(f"  TIMEOUT waiting for pocket {target_pocket}")
    return False


def monitor_loop(ser, args):
    """Continuously poll TLAUF and display status."""
    n0 = 0  # short TX nibble 0
    n1 = 0  # short TX nibble 1
    n2 = 0  # short TX nibble 2

    cycle = 0
    ok = 0
    err = 0

    print("TLAUF Monitor — Ctrl+C to stop")

    try:
        while True:
            cycle += 1

            tx = proto.build_short_tx(proto.SYNC_TLAUF, n0, n1, n2)
            rx = proto.send_and_receive(ser, tx, proto.SHORT_RX_LEN, rx_timeout=0.05)

            nibs = None
            if rx:
                nibs = proto.parse_short_rx(rx, proto.SYNC_TLAUF)
                if nibs:
                    ok += 1
                else:
                    err += 1
            else:
                err += 1

            if not args.raw:
                clear_screen()

            print(f"=== TLAUF Status  cycle={cycle}  ok={ok}/{ok+err} ===")
            print()

            if args.raw:
                print(proto.hex_dump(tx, "TX: "))
                if rx:
                    print(proto.hex_dump(rx, "RX: "))
                else:
                    print("RX: (no response)")
                print()

            if nibs:
                signals = proto.decode_tlauf_short_rx(nibs)
                print("Inputs (TENTATIVE mapping):")
                print(format_signals(signals))
                print()
                raw_str = ' '.join(f'n{i}={v:x}' for i, v in enumerate(nibs))
                print(f"  Raw nibbles: {raw_str}")
            else:
                print("No valid response")

            print()
            print(f"TX nibbles: n0=0x{n0:x} n1=0x{n1:x} n2=0x{n2:x}")

            if args.once:
                return

            if args.interactive:
                print()
                print("Commands: 0-B=toggle output bit, p<N>=pocket cmd, q=quit")
                import select
                if select.select([sys.stdin], [], [], 0.05)[0]:
                    cmd = sys.stdin.readline().strip().lower()
                    if cmd == 'q':
                        return
                    elif cmd.startswith('p') and len(cmd) > 1:
                        try:
                            pocket = int(cmd[1:])
                            send_vmc_pocket(ser, pocket, verbose=True)
                        except ValueError:
                            print("  Invalid pocket number")
                    elif len(cmd) == 1 and cmd in '0123456789ab':
                        bit = int(cmd, 16)
                        if bit < 4:
                            n0 ^= (1 << bit)
                        elif bit < 8:
                            n1 ^= (1 << (bit - 4))
                        else:
                            n2 ^= (1 << (bit - 8))
                        print(f"  -> Toggled bit {bit}")
                else:
                    time.sleep(0.05)
            else:
                time.sleep(0.1)

    except KeyboardInterrupt:
        print("\nStopped.")


def main():
    parser = argparse.ArgumentParser(description="TLAUF board bench test")
    parser.add_argument("port", help="Serial port device (e.g. /dev/ttyUSB0)")
    parser.add_argument("--raw", action="store_true",
                        help="Show raw hex packets")
    parser.add_argument("--once", action="store_true",
                        help="Single exchange then exit")
    parser.add_argument("--interactive", "-i", action="store_true",
                        help="Interactive output control and pocket commands")
    parser.add_argument("--pocket", type=int, default=None,
                        help="Send VMC pocket command (1-24) then exit")
    parser.add_argument("--timeout", type=float, default=0.05,
                        help="RX timeout in seconds (default 0.05)")
    args = parser.parse_args()

    print(f"Opening {args.port} at {proto.BAUDRATE} baud...")
    ser = proto.open_port(args.port, timeout=args.timeout)
    print(f"Port open. Talking to TLAUF board (sync '&').")
    print()

    try:
        if args.pocket is not None:
            send_vmc_pocket(ser, args.pocket, verbose=True)
        else:
            monitor_loop(ser, args)
    finally:
        ser.close()
        print("Port closed.")


if __name__ == "__main__":
    main()
