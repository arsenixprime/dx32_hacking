#!/usr/bin/env python3
"""Generate bmdc_interposer.kicad_sym:
  CY7C1049G-10VXI   copied from the installed KiCad library symbol Memory_RAM:IS61C5128AL-10KLI
                    (identical JEDEC 36-SOJ 512K x 8 pin numbering, verified against the CY7C1049G
                    datasheet 001-95412 Rev *F Figure 1), renamed, with datasheet URL and MPN fields
  BMDC3_SOJ32_Site  the host card's 32-lead SOJ RAM site (passive pins, JEDEC byte-wide names)
"""
import os
import re
import sys

sys.path.insert(0, os.path.dirname(__file__))
import params as P  # noqa: E402

KICAD_SYMBOLS = os.environ.get("KICAD10_SYMBOL_DIR", "/usr/share/kicad/symbols")
SRC_LIB = os.path.join(KICAD_SYMBOLS, "Memory_RAM.kicad_sym")
SRC_NAME = "IS61C5128AL-10KLI"
NEW_NAME = "CY7C1049G-10VXI"
DATASHEET = ("https://www.infineon.com/dgdl/Infineon-CY7C1049G_and_CY7C1049GE_are_high-performance_CMOS_fast_"
             "static_RAM_devices_with_embedded_ECC-DataSheet-v07_00-EN.pdf?fileId=8ac78c8c7d0d8da4017d0ed7e2c15966")


def extract_symbol(path, name):
    s = open(path).read()
    i = s.find(f'(symbol "{name}"')
    assert i >= 0, f"{name} not found in {path}"
    depth, j = 0, i
    while True:
        c = s[j]
        if c == "(":
            depth += 1
        elif c == ")":
            depth -= 1
            if depth == 0:
                break
        j += 1
    return s[i:j + 1]


def prop(name, value, x, y, hide=True, extra=""):
    h = "\n\t\t\t(hide yes)" if hide else ""
    return f'''\t\t(property "{name}" "{value}"
\t\t\t(at {x} {y} 0)
\t\t\t(show_name no)
\t\t\t(do_not_autoplace no){h}
\t\t\t(effects
\t\t\t\t(font
\t\t\t\t\t(size 1.27 1.27)
\t\t\t\t){extra}
\t\t\t)
\t\t)'''


def make_sram():
    s = extract_symbol(SRC_LIB, SRC_NAME)
    s = s.replace(f'"{SRC_NAME}', f'"{NEW_NAME}')          # symbol and unit names
    s = re.sub(r'\(property "Value" "[^"]*"', f'(property "Value" "{NEW_NAME}"', s)
    s = re.sub(r'\(property "Footprint" "[^"]*"',
               '(property "Footprint" "bmdc_interposer:SOJ-36_10.16x23.495mm_P1.27mm_ShortPads"', s)
    s = re.sub(r'\(property "Datasheet" "[^"]*"', f'(property "Datasheet" "{DATASHEET}"', s)
    s = re.sub(r'\(property "Description" "[^"]*"',
               '(property "Description" "4-Mbit (512K x 8) 5 V fast SRAM with ECC, 10 ns, 36-SOJ (Infineon/Cypress)"', s)
    s = re.sub(r'\(property "ki_fp_filters" "[^"]*"', '(property "ki_fp_filters" "SOJ*36*P1.27mm*"', s)
    # extra fields before the first sub-symbol
    extra = "\n".join([prop("MPN", NEW_NAME, 0, 0), prop("Manufacturer", "Infineon Technologies (Cypress)", 0, 0),
                       prop("DigiKey", "CY7C1049G-10VXI-ND", 0, 0),
                       prop("Package", "36-SOJ 400 mil (51-85090)", 0, 0)])
    k = s.find(f'\t\t(symbol "{NEW_NAME}_0_1"')
    s = s[:k] + extra + "\n" + s[k:]
    # sanity: pin numbers/names match the datasheet table in params
    found = {}
    for blk in s.split("(pin ")[1:]:
        nm = re.search(r'\(name "([^"]*)"', blk).group(1)
        num = int(re.search(r'\(number "(\d+)"', blk).group(1))
        found[num] = nm.replace("VDD", "VCC")
    assert found == P.CHIP_PINS, {k: (found.get(k), P.CHIP_PINS[k]) for k in P.CHIP_PINS if found.get(k) != P.CHIP_PINS[k]}
    return s


def make_host_site():
    pins = []
    for k in range(1, 33):
        if k <= 16:
            x, y, rot = -15.24, round(19.05 - (k - 1) * 2.54, 2), 0
        else:
            x, y, rot = 15.24, round(19.05 - (32 - k) * 2.54, 2), 180
        pins.append(f'''\t\t\t(pin passive line
\t\t\t\t(at {x} {y} {rot})
\t\t\t\t(length 2.54)
\t\t\t\t(name "{P.HOST_PINS[k]}"
\t\t\t\t\t(effects
\t\t\t\t\t\t(font
\t\t\t\t\t\t\t(size 1.27 1.27)
\t\t\t\t\t\t)
\t\t\t\t\t)
\t\t\t\t)
\t\t\t\t(number "{k}"
\t\t\t\t\t(effects
\t\t\t\t\t\t(font
\t\t\t\t\t\t\t(size 1.27 1.27)
\t\t\t\t\t\t)
\t\t\t\t\t)
\t\t\t\t)
\t\t\t)''')
    name = "BMDC3_SOJ32_Site"
    return f'''\t(symbol "{name}"
\t\t(exclude_from_sim yes)
\t\t(in_bom no)
\t\t(on_board yes)
\t\t(in_pos_files no)
\t\t(duplicate_pin_numbers_are_jumpers no)
{prop("Reference", "J", -12.7, 22.86, hide=False)}
{prop("Value", name, 12.7, 22.86, hide=False)}
{prop("Footprint", "bmdc_interposer:BMDC3_SOJ32_Castellated", 0, -22.86)}
{prop("Datasheet", "", 0, 0)}
{prop("Description", "Bridgeport BMDC3 32-lead wide SOJ RAM site (U8..U11), JEDEC byte-wide pinout as the card uses it; castellated interposer edge", 0, 0)}
{prop("ki_keywords", "BMDC3 SOJ-32 castellated", 0, 0)}
{prop("ki_fp_filters", "BMDC3_SOJ32*", 0, 0)}
\t\t(symbol "{name}_0_1"
\t\t\t(rectangle
\t\t\t\t(start -12.7 21.59)
\t\t\t\t(end 12.7 -21.59)
\t\t\t\t(stroke
\t\t\t\t\t(width 0.254)
\t\t\t\t\t(type default)
\t\t\t\t)
\t\t\t\t(fill
\t\t\t\t\t(type background)
\t\t\t\t)
\t\t\t)
\t\t)
\t\t(symbol "{name}_1_1"
{chr(10).join(pins)}
\t\t)
\t\t(embedded_fonts no)
\t)'''


def main():
    out = sys.argv[1] if len(sys.argv) > 1 else os.path.join(os.path.dirname(__file__), "..", "bmdc_interposer.kicad_sym")
    text = ('(kicad_symbol_lib\n\t(version 20251024)\n\t(generator "gen_symbols.py")\n\t(generator_version "10.0")\n'
            + make_sram() + "\n" + make_host_site() + "\n)\n")
    with open(out, "w") as fh:
        fh.write(text)
    print("wrote", out)


if __name__ == "__main__":
    main()
