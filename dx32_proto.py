"""
DX32 AUF/TLAUF serial protocol library.

Implements the hex-ASCII nibble-encoded packet protocol used by the
Bridgeport DX32 BMDC board to communicate with AUF and TLAUF boards
over multidrop RS422 at 38400 baud, 8N1.

Packet types:
  Short TX (5 bytes):  [sync] [n0] [n1] [n2] [checksum]
  Short RX (9 bytes):  [sync] [n0] [n1] [n2] [n3] [n4] [n5] [n6] [checksum]
  Long TX/RX (18 bytes): [sync] [n0..n15] [checksum]

Nibble encoding: value 0x0-0xF -> ASCII '0'-'9','a'-'f'
Checksum: (sum of data byte ASCII values & 0x0F) + 0x40
"""

import serial
import time
import struct

BAUDRATE = 38400
SYNC_AUF = ord('#')    # 0x23
SYNC_TLAUF = ord('&')  # 0x26
SYNC_LONG = ord(')')   # 0x29

SHORT_TX_LEN = 5
SHORT_RX_LEN = 9
LONG_PKT_LEN = 18


def nibble_encode(val):
    """Encode a 4-bit value (0-15) as a hex ASCII byte."""
    val &= 0x0F
    if val < 10:
        return 0x30 + val  # '0'-'9'
    return 0x61 + (val - 10)  # 'a'-'f'


def nibble_decode(byte):
    """Decode a hex ASCII byte to a 4-bit value. Returns -1 on error."""
    if 0x30 <= byte <= 0x39:
        return byte - 0x30
    if 0x61 <= byte <= 0x66:
        return byte - 0x61 + 10
    if 0x41 <= byte <= 0x46:
        return byte - 0x41 + 10  # accept uppercase too
    return -1


def checksum(data_bytes):
    """Compute checksum over the data portion of a packet (excludes sync)."""
    s = sum(data_bytes) & 0x0F
    return s + 0x40


def build_short_tx(sync, n0, n1, n2):
    """Build a 5-byte short TX packet."""
    d0 = nibble_encode(n0)
    d1 = nibble_encode(n1)
    d2 = nibble_encode(n2)
    cs = checksum([d0, d1, d2])
    return bytes([sync, d0, d1, d2, cs])


def build_long_tx(data_bytes):
    """Build an 18-byte long TX packet from 8 data bytes.

    Byte order matches firmware: data_bytes[7] is sent first (MSB),
    data_bytes[0] is sent last (LSB).
    """
    nibs = []
    for i in range(7, -1, -1):
        nibs.append(nibble_encode((data_bytes[i] >> 4) & 0x0F))
        nibs.append(nibble_encode(data_bytes[i] & 0x0F))
    cs = checksum(nibs)
    return bytes([SYNC_LONG] + nibs + [cs])


def parse_short_rx(data, expected_sync):
    """Parse a 9-byte short RX packet.

    Returns list of 7 nibble values on success, or None on error.
    """
    if len(data) < SHORT_RX_LEN:
        return None
    if data[0] != expected_sync:
        return None
    nibs = []
    for i in range(1, 8):
        v = nibble_decode(data[i])
        if v < 0:
            return None
        nibs.append(v)
    expected_cs = checksum(data[1:8])
    if data[8] != expected_cs:
        return None
    return nibs


def parse_long_rx(data):
    """Parse an 18-byte long RX packet (sync ')').

    Returns 8 data bytes on success (index 0 = LSB, 7 = MSB), or None.
    """
    if len(data) < LONG_PKT_LEN:
        return None
    if data[0] != SYNC_LONG:
        return None
    nibs = []
    for i in range(1, 17):
        v = nibble_decode(data[i])
        if v < 0:
            return None
        nibs.append(v)
    expected_cs = checksum(data[1:17])
    if data[17] != expected_cs:
        return None
    # Reconstruct 8 bytes: wire nibbles 0,1 = data_bytes[7] (MSB first)
    result = [0] * 8
    for i in range(8):
        hi = nibs[2 * i]
        lo = nibs[2 * i + 1]
        result[7 - i] = (hi << 4) | lo
    return result


def open_port(device, timeout=0.1):
    """Open a serial port for DX32 communication."""
    return serial.Serial(
        port=device,
        baudrate=BAUDRATE,
        bytesize=serial.EIGHTBITS,
        parity=serial.PARITY_NONE,
        stopbits=serial.STOPBITS_ONE,
        timeout=timeout,
    )


def send_and_receive(ser, tx_packet, rx_len, rx_timeout=0.05):
    """Send a TX packet and read the RX response.

    Since this is full-duplex RS422, the response may start arriving
    during transmission.  We flush the RX buffer first, send, then
    read with a short timeout.
    """
    ser.reset_input_buffer()
    ser.write(tx_packet)
    ser.flush()

    # Read response — may need to wait for full packet
    deadline = time.monotonic() + rx_timeout
    buf = b''
    while len(buf) < rx_len and time.monotonic() < deadline:
        chunk = ser.read(rx_len - len(buf))
        if chunk:
            buf += chunk
    return buf


def hex_dump(data, prefix=""):
    """Format bytes as hex string for display."""
    hex_str = ' '.join(f'{b:02x}' for b in data)
    ascii_str = ''.join(chr(b) if 32 <= b < 127 else '.' for b in data)
    return f"{prefix}[{len(data):2d}] {hex_str}  |{ascii_str}|"


# --- AUF short RX nibble mapping (CONFIRMED from FUN_00014f9e) ---

AUF_SHORT_RX_MAP = {
    # (nibble_index, bit) : (name, inverted)
    (0, 3): ("E-Stop", True),
    (0, 2): ("Low Lube", True),
    (0, 1): ("Spindle Overload", True),
    (0, 0): ("Orient Confirmed", False),
    (1, 3): ("Z Axis Limit", True),
    (1, 2): ("Clamp Confirmed", False),
    (1, 1): ("X Axis Limit", True),
    (1, 0): ("X Home", False),
    (2, 3): ("Y Axis Limit", True),
    (2, 2): ("Y Home", False),
    (2, 1): ("Drive Fault", False),
    (2, 0): ("Z Home", False),
    (3, 3): ("A Axis Home", False),
    (3, 2): ("Status Flag", False),
    (3, 1): ("Rotary Brake", False),
    (3, 0): ("Index Out", False),
    (4, 3): ("Index In", False),
    (4, 2): ("Perimeter Door", False),
    (4, 1): ("Rotary Active", True),
    (4, 0): ("Low Air", True),
}

# --- TLAUF short RX nibble mapping (TENTATIVE) ---

TLAUF_SHORT_RX_MAP = {
    (0, 0): ("Tool Count", False),
    (0, 1): ("Arm Out", False),
    (0, 2): ("Arm Back", False),
    (0, 3): ("Unclamped", False),
    (1, 0): ("Clamped", False),
    (1, 1): ("Arm Down", False),
    (1, 2): ("Arm Up", False),
}


def decode_auf_short_rx(nibs):
    """Decode AUF short RX nibbles into a dict of signal states."""
    signals = {}
    for (ni, bit), (name, inverted) in AUF_SHORT_RX_MAP.items():
        if ni < len(nibs):
            raw = (nibs[ni] >> bit) & 1
            signals[name] = raw ^ (1 if inverted else 0)
    return signals


def decode_tlauf_short_rx(nibs):
    """Decode TLAUF short RX nibbles into a dict of signal states.

    NOTE: Bit mapping is TENTATIVE — needs hardware verification.
    """
    signals = {}
    for (ni, bit), (name, inverted) in TLAUF_SHORT_RX_MAP.items():
        if ni < len(nibs):
            raw = (nibs[ni] >> bit) & 1
            signals[name] = raw ^ (1 if inverted else 0)
    # Current pocket from nibbles 5-6 (TENTATIVE)
    if len(nibs) >= 7:
        pocket = (nibs[5] << 4) | nibs[6]
        signals["Current Pocket"] = pocket if 1 <= pocket <= 24 else 0
    return signals
