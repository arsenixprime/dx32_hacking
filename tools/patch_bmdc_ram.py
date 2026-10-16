#!/usr/bin/env python3
"""
Patch BMDC.BIN so a BMDC3 (board class 0-3) accepts more than 512 KB of main RAM.

The firmware sizes RAM at boot (0xD32C, see PROTOCOL_NOTES.md "RAM and dual-port sizing")
but then halts with error 0xA5 when a class 0-3 board has more than 512 KB, and it only
probes beyond 1 MB on a class-4 (BMDC4) board.  The RAM top (0xAFA8) is used solely as the
end of the part-program buffer that starts at 0x4E000, so a larger RAM means a larger
part-program buffer and nothing else changes.

Patches (both are branch/NOP edits, no code is moved):
  A  0xDB12: 'ble.b' -> 'bra.b'   skip the ">512 KB on class 0-3" halt           (--max 1M)
  B  0xD476: 'bne.w' -> nop;nop   probe 2/4/8/16 MB regardless of board class    (--max 16M)

Usage:
  python3 tools/patch_bmdc_ram.py BMDC.BIN BMDC_1MB.BIN  --max 1M
  python3 tools/patch_bmdc_ram.py BMDC.BIN BMDC_16MB.BIN --max 16M
  python3 tools/patch_bmdc_ram.py --check BMDC_xx.BIN      (report which patches are present)
"""
import argparse
import sys

PATCHES = {
    "A": (0xDB12, bytes.fromhex("6f1a"), bytes.fromhex("601a"),
          "0xDB12 ble.b -> bra.b : no halt on >512 KB for board class 0-3"),
    "B": (0xD476, bytes.fromhex("66000112"), bytes.fromhex("4e714e71"),
          "0xD476 bne.w -> nop nop : probe beyond 1 MB on any board class"),
}
# context bytes that must match so we know this is the same firmware build
CONTEXT = {
    0xD3C2: bytes.fromhex("23fc0007fffc0000afa8"),   # move.l #0x7fffc,0xafa8
    0xDB08: bytes.fromhex("0cb90007fffc0000afa8"),   # cmpi.l #0x7fffc,0xafa8
    0xD46C: bytes.fromhex("0cb9000000040000af9c"),   # cmpi.l #4,0xaf9c
}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("src")
    ap.add_argument("dst", nargs="?")
    ap.add_argument("--max", choices=["1M", "16M"], default="1M")
    ap.add_argument("--check", action="store_true")
    a = ap.parse_args()

    data = bytearray(open(a.src, "rb").read())
    for off, want in CONTEXT.items():
        if data[off:off + len(want)] != want:
            sys.exit(f"{a.src}: bytes at 0x{off:X} do not match the known firmware build; refusing")

    if a.check:
        for k, (off, orig, new, desc) in PATCHES.items():
            cur = bytes(data[off:off + len(orig)])
            state = "PATCHED" if cur == new else ("original" if cur == orig else f"UNKNOWN {cur.hex()}")
            print(f"patch {k}: {state:9s} {desc}")
        return

    if not a.dst:
        sys.exit("need an output file name")
    wanted = ["A"] if a.max == "1M" else ["A", "B"]
    for k in wanted:
        off, orig, new, desc = PATCHES[k]
        cur = bytes(data[off:off + len(orig)])
        if cur == new:
            print(f"patch {k}: already applied")
            continue
        if cur != orig:
            sys.exit(f"patch {k}: unexpected bytes {cur.hex()} at 0x{off:X}")
        data[off:off + len(orig)] = new
        print(f"patch {k}: applied  ({desc})")
    open(a.dst, "wb").write(data)
    print(f"wrote {a.dst} ({len(data)} bytes)")


if __name__ == "__main__":
    main()
