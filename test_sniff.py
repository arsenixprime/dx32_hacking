#!/usr/bin/env python3
"""
DX32 serial bus sniffer / packet decoder.

Passively listens on the RS422 bus and decodes all packets.  Useful for
capturing traffic from a running BMDC system or verifying test script output.

Can also be used as a loopback test (send a known packet, verify echo).

Usage:
  python3 test_sniff.py /dev/ttyUSB0              # sniff and decode
  python3 test_sniff.py /dev/ttyUSB0 --hex        # show raw hex only
  python3 test_sniff.py /dev/ttyUSB0 --count 100  # capture N packets then exit
  python3 test_sniff.py /dev/ttyUSB0 --loopback   # TX/RX loopback test

Install:  pip install pyserial
"""

import argparse
import sys
import time

import dx32_proto as proto

# Sync bytes that start packets
SYNC_BYTES = {
    proto.SYNC_AUF: ("AUF short", proto.SHORT_RX_LEN),
    proto.SYNC_TLAUF: ("TLAUF short", proto.SHORT_RX_LEN),
    proto.SYNC_LONG: ("AUF long", proto.LONG_PKT_LEN),
}


def try_parse_packet(buf):
    """Try to parse a complete packet from the front of the buffer.

    Returns (packet_type, decoded_data, consumed_bytes) or None.
    """
    if len(buf) < 5:  # minimum packet size
        return None

    sync = buf[0]
    if sync not in SYNC_BYTES:
        return None

    pkt_type, expected_len = SYNC_BYTES[sync]

    # Could be TX (5 bytes) or RX (9 bytes) for short packets
    # Try short TX first (5 bytes)
    if sync in (proto.SYNC_AUF, proto.SYNC_TLAUF):
        if len(buf) >= proto.SHORT_TX_LEN:
            # Check if this looks like a valid 5-byte TX packet
            data_bytes = buf[1:4]
            all_valid = all(proto.nibble_decode(b) >= 0 for b in data_bytes)
            cs_ok = buf[4] == proto.checksum(data_bytes)

            if all_valid and cs_ok:
                # Could be TX (5) or start of RX (9).  If we have enough
                # bytes and they also parse as RX, prefer the longer parse.
                if len(buf) >= proto.SHORT_RX_LEN:
                    data_bytes_rx = buf[1:8]
                    all_valid_rx = all(proto.nibble_decode(b) >= 0 for b in data_bytes_rx)
                    cs_ok_rx = buf[8] == proto.checksum(data_bytes_rx)
                    if all_valid_rx and cs_ok_rx:
                        nibs = [proto.nibble_decode(b) for b in data_bytes_rx]
                        return (pkt_type + " RX", nibs, proto.SHORT_RX_LEN)

                # It's a 5-byte TX
                nibs = [proto.nibble_decode(b) for b in data_bytes]
                return (pkt_type + " TX", nibs, proto.SHORT_TX_LEN)

            # Not valid as TX, try as RX
            if len(buf) >= proto.SHORT_RX_LEN:
                data_bytes_rx = buf[1:8]
                all_valid_rx = all(proto.nibble_decode(b) >= 0 for b in data_bytes_rx)
                cs_ok_rx = buf[8] == proto.checksum(data_bytes_rx)
                if all_valid_rx and cs_ok_rx:
                    nibs = [proto.nibble_decode(b) for b in data_bytes_rx]
                    return (pkt_type + " RX", nibs, proto.SHORT_RX_LEN)

    elif sync == proto.SYNC_LONG:
        if len(buf) >= proto.LONG_PKT_LEN:
            data_bytes = buf[1:17]
            all_valid = all(proto.nibble_decode(b) >= 0 for b in data_bytes)
            cs_ok = buf[17] == proto.checksum(data_bytes)
            if all_valid and cs_ok:
                nibs = [proto.nibble_decode(b) for b in data_bytes]
                # Reconstruct 8 data bytes
                result = [0] * 8
                for i in range(8):
                    result[7 - i] = (nibs[2 * i] << 4) | nibs[2 * i + 1]
                return ("AUF long", result, proto.LONG_PKT_LEN)

    return None


def sniff_loop(ser, args):
    """Main sniff loop — read bytes, find sync, parse packets."""
    buf = bytearray()
    pkt_count = 0
    start_time = time.monotonic()
    last_pkt_time = start_time

    print(f"Sniffing at {proto.BAUDRATE} baud — Ctrl+C to stop")
    if args.count:
        print(f"Will stop after {args.count} packets")
    print()

    try:
        while True:
            # Read available bytes
            chunk = ser.read(256)
            if chunk:
                buf.extend(chunk)

            # Try to find and parse packets
            while len(buf) >= 5:
                # Scan for a sync byte
                sync_pos = -1
                for i, b in enumerate(buf):
                    if b in SYNC_BYTES:
                        sync_pos = i
                        break

                if sync_pos < 0:
                    # No sync found, discard buffer
                    if args.hex and len(buf) > 0:
                        print(f"  DISCARD: {buf.hex(' ')}")
                    buf.clear()
                    break

                # Discard bytes before sync
                if sync_pos > 0:
                    if args.hex:
                        print(f"  NOISE [{sync_pos}]: {buf[:sync_pos].hex(' ')}")
                    del buf[:sync_pos]

                # Try parsing
                result = try_parse_packet(buf)
                if result:
                    pkt_type, data, consumed = result
                    pkt_count += 1
                    now = time.monotonic()
                    dt = (now - last_pkt_time) * 1000  # ms
                    last_pkt_time = now
                    elapsed = now - start_time

                    if args.hex:
                        raw_hex = buf[:consumed].hex(' ')
                        print(f"[{elapsed:8.3f}s +{dt:6.1f}ms] "
                              f"{pkt_type:20s}  {raw_hex}")
                    else:
                        data_str = ' '.join(f'{d:x}' for d in data)
                        print(f"[{elapsed:8.3f}s +{dt:6.1f}ms] "
                              f"{pkt_type:20s}  data=[{data_str}]")

                        # Decode known packet types
                        if "AUF short RX" in pkt_type and len(data) == 7:
                            signals = proto.decode_auf_short_rx(data)
                            active = [n for n, v in signals.items() if v]
                            if active:
                                print(f"{'':>40s} active: {', '.join(active)}")

                        elif "TLAUF short RX" in pkt_type and len(data) == 7:
                            signals = proto.decode_tlauf_short_rx(data)
                            pocket = signals.get("Current Pocket", 0)
                            active = [n for n, v in signals.items()
                                       if v and n != "Current Pocket"]
                            info = []
                            if pocket:
                                info.append(f"pocket={pocket}")
                            if active:
                                info.append(', '.join(active))
                            if info:
                                print(f"{'':>40s} {'; '.join(info)}")

                    del buf[:consumed]

                    if args.count and pkt_count >= args.count:
                        print(f"\nCaptured {pkt_count} packets in {elapsed:.1f}s")
                        return
                else:
                    # Not enough data yet, or invalid — skip this sync byte
                    # and look for the next one
                    if len(buf) >= SYNC_BYTES.get(buf[0], ("", 18))[1]:
                        # We had enough bytes but it didn't parse — bad packet
                        if args.hex:
                            print(f"  BAD at sync 0x{buf[0]:02x}: "
                                  f"{buf[:1].hex()}")
                        del buf[:1]
                    else:
                        break  # need more data

            if not chunk:
                time.sleep(0.001)

    except KeyboardInterrupt:
        elapsed = time.monotonic() - start_time
        print(f"\nStopped. {pkt_count} packets in {elapsed:.1f}s")


def loopback_test(ser):
    """Send known packets and verify they parse correctly."""
    print("=== Loopback Test ===")
    print("Connect TX to RX on your RS422 adapter.\n")

    tests = [
        ("AUF short TX",
         proto.build_short_tx(proto.SYNC_AUF, 0x5, 0xA, 0x3)),
        ("TLAUF short TX",
         proto.build_short_tx(proto.SYNC_TLAUF, 0xF, 0x0, 0x7)),
        ("AUF long TX",
         proto.build_long_tx([0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0])),
    ]

    passed = 0
    failed = 0

    for name, tx in tests:
        ser.reset_input_buffer()
        ser.write(tx)
        ser.flush()
        time.sleep(0.01)
        rx = ser.read(len(tx) + 10)

        if rx == tx:
            print(f"  PASS  {name}: {tx.hex(' ')}")
            passed += 1
        else:
            print(f"  FAIL  {name}")
            print(f"    TX: {tx.hex(' ')}")
            print(f"    RX: {rx.hex(' ') if rx else '(empty)'}")
            failed += 1

    print(f"\n{passed} passed, {failed} failed")

    # Also test parse functions
    print("\n=== Parse Tests ===")

    # Build and parse short RX
    # Manually construct a valid '#' 9-byte packet
    nibs = [0x30 + i for i in range(7)]  # nibbles '0' through '6'
    cs = proto.checksum(nibs)
    pkt = bytes([proto.SYNC_AUF] + nibs + [cs])
    result = proto.parse_short_rx(pkt, proto.SYNC_AUF)
    if result == list(range(7)):
        print("  PASS  parse_short_rx")
    else:
        print(f"  FAIL  parse_short_rx: got {result}")

    # Build and parse long
    data = [0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88]
    pkt = proto.build_long_tx(data)
    result = proto.parse_long_rx(pkt)
    if result == data:
        print("  PASS  build/parse long roundtrip")
    else:
        print(f"  FAIL  long roundtrip: sent {data}, got {result}")

    # Checksum test
    cs = proto.checksum([0x35, 0x61, 0x33])  # '5', 'a', '3'
    expected = ((0x35 + 0x61 + 0x33) & 0x0F) + 0x40
    if cs == expected:
        print(f"  PASS  checksum: 0x{cs:02x}")
    else:
        print(f"  FAIL  checksum: got 0x{cs:02x}, expected 0x{expected:02x}")


def main():
    parser = argparse.ArgumentParser(description="DX32 serial bus sniffer")
    parser.add_argument("port", help="Serial port device (e.g. /dev/ttyUSB0)")
    parser.add_argument("--hex", action="store_true",
                        help="Show raw hex for all packets")
    parser.add_argument("--count", type=int, default=None,
                        help="Stop after N packets")
    parser.add_argument("--loopback", action="store_true",
                        help="Run TX/RX loopback and parse tests")
    parser.add_argument("--timeout", type=float, default=0.01,
                        help="Serial read timeout (default 0.01)")
    args = parser.parse_args()

    print(f"Opening {args.port} at {proto.BAUDRATE} baud...")
    ser = proto.open_port(args.port, timeout=args.timeout)

    try:
        if args.loopback:
            loopback_test(ser)
        else:
            sniff_loop(ser, args)
    finally:
        ser.close()
        print("Port closed.")


if __name__ == "__main__":
    main()
