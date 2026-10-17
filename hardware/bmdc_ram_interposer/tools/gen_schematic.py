#!/usr/bin/env python3
"""Generate bmdc_ram_interposer.kicad_sch, .kicad_pro, sym-lib-table and fp-lib-table.

Single sheet.  Every SRAM pin and every host castellation pin carries a net label named after
the HOST signal (tools/params.py HOST_NET / CHIP_NET), so the permutation table in README.md is
the schematic.  Symbol origins are on the 1.27 mm grid, wires end exactly on pin ends,
lib_symbols are copied from the installed KiCad 10 libraries and the project library.
UUIDs are deterministic (uuid5) so tools/build_pcb.py writes matching footprint paths.
"""
import json
import os
import sys
import uuid

sys.path.insert(0, os.path.dirname(__file__))
import params as P  # noqa: E402
from gen_symbols import extract_symbol, KICAD_SYMBOLS  # noqa: E402

PROJECT = "bmdc_ram_interposer"
NS = uuid.UUID("5d7e3b1e-6c2a-4f8b-9a1d-2b3c4d5e6f70")
ROOT_UUID = str(uuid.uuid5(NS, PROJECT + "/root"))
DATASHEET_SRAM = ("https://www.infineon.com/dgdl/Infineon-CY7C1049G_and_CY7C1049GE_are_high-performance_CMOS_fast_static_RAM_"
                  "devices_with_embedded_ECC-DataSheet-v07_00-EN.pdf?fileId=8ac78c8c7d0d8da4017d0ed7e2c15966")
# Custom fields per reference: identical in the schematic symbols and the PCB footprints (schematic parity)
FIELDS = {
    "U1": {"Datasheet": DATASHEET_SRAM,
           "Description": "4-Mbit (512K x 8) 5 V fast SRAM with ECC, 10 ns, 36-SOJ (Infineon/Cypress)",
           "MPN": "CY7C1049G-10VXI", "Manufacturer": "Infineon Technologies (Cypress)",
           "DigiKey": "CY7C1049G-10VXI-ND", "Package": "36-SOJ 400 mil (51-85090)"},
    "J1": {"Datasheet": "", "Description": "Bridgeport BMDC3 32-lead wide SOJ RAM site (U8..U11); castellated interposer edge"},
    "C": {"Datasheet": "https://www.samsungsem.com/resources/file/global/support/product_catalog/MLCC.pdf",
          "Description": "100 nF 16 V X7R 0402 decoupling", "MPN": "CL05B104KO5NNNC",
          "Manufacturer": "Samsung Electro-Mechanics", "LCSC": "C1525", "DigiKey": "1276-1004-1-ND"},
    "JP1": {"Datasheet": "", "Description": "A17 to castellation 30 (host E2) - open unless the card drives 68030 A19 there"},
    "JP2": {"Datasheet": "", "Description": "A18 to castellation 1 (host NC) - open unless the card drives 68030 A20 there"},
    "TP1": {"Datasheet": "", "Description": "wire pad: 30 AWG to 68030 A19 on the card"},
    "TP2": {"Datasheet": "", "Description": "wire pad: 30 AWG to 68030 A20 on the card"},
}

STOCK = {"Device:C": "Device.kicad_sym", "Jumper:SolderJumper_2_Open": "Jumper.kicad_sym",
         "Connector:TestPoint": "Connector.kicad_sym", "power:+5V": "power.kicad_sym",
         "power:GND": "power.kicad_sym", "power:PWR_FLAG": "power.kicad_sym"}


def U(key):
    return str(uuid.uuid5(NS, PROJECT + "/" + key))


def f(v):
    s = f"{v:.4f}".rstrip("0").rstrip(".")
    return "0" if s in ("-0", "") else s


def lib_symbols():
    out = []
    here = os.path.join(os.path.dirname(__file__), "..", "bmdc_interposer.kicad_sym")
    for name in ("CY7C1049G-10VXI", "BMDC3_SOJ32_Site"):
        s = extract_symbol(here, name)
        s = s.replace(f'(symbol "{name}"', f'(symbol "bmdc_interposer:{name}"', 1)
        out.append(s)
    for lib_id, fn in STOCK.items():
        name = lib_id.split(":")[1]
        s = extract_symbol(os.path.join(KICAD_SYMBOLS, fn), name)
        s = s.replace(f'(symbol "{name}"', f'(symbol "{lib_id}"', 1)
        out.append(s)
    return "\t(lib_symbols\n" + "\n".join(out) + "\n\t)"


def wire(x1, y1, x2, y2, key):
    return f'''\t(wire
\t\t(pts
\t\t\t(xy {f(x1)} {f(y1)}) (xy {f(x2)} {f(y2)})
\t\t)
\t\t(stroke
\t\t\t(width 0)
\t\t\t(type default)
\t\t)
\t\t(uuid "{U('wire/' + key)}")
\t)'''


def label(text, x, y, rot, key):
    """global label: net names then carry no sheet-path prefix and match the PCB nets"""
    just = "right" if rot == 180 else "left"
    return f'''\t(global_label "{text}"
\t\t(shape passive)
\t\t(at {f(x)} {f(y)} {rot})
\t\t(fields_autoplaced yes)
\t\t(effects
\t\t\t(font
\t\t\t\t(size 1.27 1.27)
\t\t\t)
\t\t\t(justify {just})
\t\t)
\t\t(uuid "{U('label/' + key)}")
\t\t(property "Intersheetrefs" "${{INTERSHEET_REFS}}"
\t\t\t(at {f(x)} {f(y)} 0)
\t\t\t(show_name no)
\t\t\t(do_not_autoplace no)
\t\t\t(hide yes)
\t\t\t(effects
\t\t\t\t(font
\t\t\t\t\t(size 1.27 1.27)
\t\t\t\t)
\t\t\t\t(justify {just})
\t\t\t)
\t\t)
\t)'''


def prop(name, value, x, y, rot=0, hide=False, justify=None):
    h = "\n\t\t\t(hide yes)" if hide else ""
    j = f"\n\t\t\t\t(justify {justify})" if justify else ""
    return f'''\t\t(property "{name}" "{value}"
\t\t\t(at {f(x)} {f(y)} {rot})
\t\t\t(show_name no)
\t\t\t(do_not_autoplace no){h}
\t\t\t(effects
\t\t\t\t(font
\t\t\t\t\t(size 1.27 1.27)
\t\t\t\t){j}
\t\t\t)
\t\t)'''


def symbol(ref, lib_id, x, y, rot, pins, props, in_bom=True, on_board=True, exclude_sim=False):
    pin_lines = "\n".join(f'\t\t(pin "{p}"\n\t\t\t(uuid "{U(f"pin/{ref}/{p}")}")\n\t\t)' for p in pins)
    return f'''\t(symbol
\t\t(lib_id "{lib_id}")
\t\t(at {f(x)} {f(y)} {rot})
\t\t(unit 1)
\t\t(exclude_from_sim {"yes" if exclude_sim else "no"})
\t\t(in_bom {"yes" if in_bom else "no"})
\t\t(on_board {"yes" if on_board else "no"})
\t\t(dnp no)
\t\t(fields_autoplaced yes)
\t\t(uuid "{U('sym/' + ref)}")
{chr(10).join(props)}
{pin_lines}
\t\t(instances
\t\t\t(project "{PROJECT}"
\t\t\t\t(path "/{ROOT_UUID}"
\t\t\t\t\t(reference "{ref}")
\t\t\t\t\t(unit 1)
\t\t\t\t)
\t\t\t)
\t\t)
\t)'''


def power(ref, kind, x, y, rot=0):
    """kind: +5V, GND or PWR_FLAG"""
    val_dy = {"+5V": -3.556, "GND": 3.81, "PWR_FLAG": -3.81}[kind]
    props = [prop("Reference", ref, x, y + (3.81 if kind != "GND" else 6.35), hide=True),
             prop("Value", kind, x, y + (val_dy if rot == 0 else -val_dy)),
             prop("Footprint", "", x, y, hide=True), prop("Datasheet", "", x, y, hide=True),
             prop("Description", "", x, y, hide=True)]
    return symbol(ref, f"power:{kind}", x, y, rot, ["1"], props)


def main():
    out_dir = os.path.join(os.path.dirname(__file__), "..")
    items = []
    # ------------------------------------------------------------------ U1 SRAM
    ux, uy = 152.4, 101.6
    u1_props = [prop("Reference", "U1", ux + 3.81, uy - 36.83, justify="left"),
                prop("Value", "CY7C1049G-10VXI", ux + 3.81, uy - 34.29, justify="left"),
                prop("Footprint", "bmdc_interposer:SOJ-36_10.16x23.495mm_P1.27mm_ShortPads", ux, uy + 35.56, hide=True)]
    u1_props += [prop(k, v, ux, uy, hide=True) for k, v in FIELDS["U1"].items()]
    items.append(symbol("U1", "bmdc_interposer:CY7C1049G-10VXI", ux, uy, 0, [str(i) for i in range(1, 37)], u1_props))
    # library pin positions (symbol coords, y up) -> schematic (x + px, y - py)
    sram_pins = {1: (-15.24, 27.94), 2: (-15.24, 25.4), 3: (-15.24, 22.86), 4: (-15.24, 20.32), 5: (-15.24, 17.78),
                 6: (-15.24, -22.86), 7: (15.24, 27.94), 8: (15.24, 25.4), 11: (15.24, 22.86), 12: (15.24, 20.32),
                 13: (-15.24, -27.94), 14: (-15.24, 15.24), 15: (-15.24, 12.7), 16: (-15.24, 10.16), 17: (-15.24, 7.62),
                 18: (-15.24, 5.08), 20: (-15.24, 2.54), 21: (-15.24, 0), 22: (-15.24, -2.54), 23: (-15.24, -5.08),
                 24: (-15.24, -7.62), 25: (15.24, 17.78), 26: (15.24, 15.24), 29: (15.24, 12.7), 30: (15.24, 10.16),
                 31: (-15.24, -25.4), 32: (-15.24, -10.16), 33: (-15.24, -12.7), 34: (-15.24, -15.24), 35: (-15.24, -17.78)}
    for j, (px, py) in sram_pins.items():
        x, y = ux + px, uy - py
        net = P.CHIP_NET[j]
        if px < 0:
            items.append(wire(x, y, x - 5.08, y, f"U1/{j}"))
            items.append(label(net, x - 5.08, y, 180, f"U1/{j}"))
        else:
            items.append(wire(x, y, x + 5.08, y, f"U1/{j}"))
            items.append(label(net, x + 5.08, y, 0, f"U1/{j}"))
    items.append(power("#PWR01", "+5V", ux, uy - 33.02))      # pin 9 (27 stacked)
    items.append(power("#PWR02", "GND", ux, uy + 33.02))      # pin 10 (28 stacked)
    # ------------------------------------------------------------------ J1 host site
    jx, jy = 76.2, 101.6
    j1_props = [prop("Reference", "J1", jx - 12.7, jy - 26.67, justify="left"),
                prop("Value", "BMDC3_SOJ32_Site", jx - 12.7, jy - 24.13, justify="left"),
                prop("Footprint", "bmdc_interposer:BMDC3_SOJ32_Castellated", jx, jy + 25.4, hide=True)]
    j1_props += [prop(k, v, jx, jy, hide=True) for k, v in FIELDS["J1"].items()]
    items.append(symbol("J1", "bmdc_interposer:BMDC3_SOJ32_Site", jx, jy, 0, [str(i) for i in range(1, 33)], j1_props,
                        in_bom=False, exclude_sim=True))
    for k in range(1, 33):
        if k <= 16:
            x, y = jx - 15.24, jy - (19.05 - (k - 1) * 2.54)
        else:
            x, y = jx + 15.24, jy - (19.05 - (32 - k) * 2.54)
        net = P.HOST_NET[k]
        if k == 16:
            items.append(wire(x, y, x - 5.08, y, "J1/16"))
            items.append(power("#PWR03", "GND", x - 5.08, y))
        elif k == 32:
            items.append(wire(x, y, x + 5.08, y, "J1/32"))
            items.append(power("#PWR04", "+5V", x + 5.08, y))
        elif k <= 16:
            items.append(wire(x, y, x - 5.08, y, f"J1/{k}"))
            items.append(label(net, x - 5.08, y, 180, f"J1/{k}"))
        else:
            items.append(wire(x, y, x + 5.08, y, f"J1/{k}"))
            items.append(label(net, x + 5.08, y, 0, f"J1/{k}"))
    # ------------------------------------------------------------------ decoupling caps
    for i, cx in enumerate([203.2, 215.9, 228.6, 241.3], start=1):
        cy = 101.6
        props = [prop("Reference", f"C{i}", cx + 2.54, cy - 1.27, justify="left"),
                 prop("Value", "100nF", cx + 2.54, cy + 1.27, justify="left"),
                 prop("Footprint", "Capacitor_SMD:C_0402_1005Metric", cx, cy, hide=True)]
        props += [prop(k, v, cx, cy, hide=True) for k, v in FIELDS["C"].items()]
        items.append(symbol(f"C{i}", "Device:C", cx, cy, 0, ["1", "2"], props))
        items.append(wire(cx, cy - 3.81, cx, cy - 7.62, f"C{i}/1"))
        items.append(power(f"#PWR{10 + i:02d}", "+5V", cx, cy - 7.62))
        items.append(wire(cx, cy + 3.81, cx, cy + 7.62, f"C{i}/2"))
        items.append(power(f"#PWR{20 + i:02d}", "GND", cx, cy + 7.62))
    # ------------------------------------------------------------------ PWR_FLAGs
    fx = 190.5
    items.append(power("#PWR05", "+5V", fx, 93.98))
    items.append(wire(fx, 93.98, fx, 96.52, "flag5v"))
    items.append(power("#FLG01", "PWR_FLAG", fx, 96.52, rot=180))
    items.append(power("#PWR06", "GND", fx, 109.22))
    items.append(wire(fx, 109.22, fx, 106.68, "flaggnd"))
    items.append(power("#FLG02", "PWR_FLAG", fx, 106.68))
    # ------------------------------------------------------------------ jumpers and wire pads
    for ref, y, neta, netb in [("JP1", 142.24, "A17", "E2"), ("JP2", 149.86, "A18", "HOST_PIN1")]:
        x = 76.2
        props = [prop("Reference", ref, x, y - 2.54), prop("Value", "SolderJumper_2_Open", x, y + 2.54),
                 prop("Footprint", "bmdc_interposer:SolderJumper-2_P1.3mm_Open_Pad1.0x1.5mm", x, y, hide=True)]
        props += [prop(k, v, x, y, hide=True) for k, v in FIELDS[ref].items()]
        items.append(symbol(ref, "Jumper:SolderJumper_2_Open", x, y, 0, ["1", "2"], props, in_bom=False))
        items.append(wire(x - 5.08, y, x - 10.16, y, f"{ref}/1"))
        items.append(label(neta, x - 10.16, y, 180, f"{ref}/1"))
        items.append(wire(x + 5.08, y, x + 10.16, y, f"{ref}/2"))
        items.append(label(netb, x + 10.16, y, 0, f"{ref}/2"))
    for ref, y, net in [("TP1", 142.24, "A17"), ("TP2", 149.86, "A18")]:
        x = 116.84
        props = [prop("Reference", ref, x - 2.54, y - 3.81, justify="right"), prop("Value", f"{net} wire pad", x + 1.27, y - 3.81, justify="left"),
                 prop("Footprint", "bmdc_interposer:WirePad_1.5x1.0mm", x, y, hide=True)]
        props += [prop(k, v, x, y, hide=True) for k, v in FIELDS[ref].items()]
        items.append(symbol(ref, "Connector:TestPoint", x, y, 0, ["1"], props, in_bom=False))
        items.append(wire(x, y, x + 5.08, y, f"{ref}/1"))
        items.append(label(net, x + 5.08, y, 0, f"{ref}/1"))
    # ------------------------------------------------------------------ notes
    note = ("BMDC3 2 MB RAM interposer: CY7C1049G (512K x 8, 36-SOJ) on the 32-SOJ site of U8..U11.\\n"
            "Net names = host signal names. Address and data lines are permuted (see README table);\\n"
            "controls and power are not. A17/A18 come from 68030 A19/A20 by wire (TP1/TP2); JP1/JP2 stay open\\n"
            "unless the card is verified to drive A19/A20 on castellations 30/1. Firmware: patch_bmdc_ram.py --max 16M.")
    items.append(f'''\t(text "{note}"
\t\t(exclude_from_sim no)
\t\t(at 55.88 170.18 0)
\t\t(effects
\t\t\t(font
\t\t\t\t(size 1.524 1.524)
\t\t\t)
\t\t\t(justify left bottom)
\t\t)
\t\t(uuid "{U('text/note')}")
\t)''')
    sch = f'''(kicad_sch
\t(version 20250114)
\t(generator "gen_schematic.py")
\t(generator_version "10.0")
\t(uuid "{ROOT_UUID}")
\t(paper "A3")
\t(title_block
\t\t(title "BMDC3 2 MB RAM interposer")
\t\t(date "2026-10-16")
\t\t(rev "A")
\t\t(company "dx32_hacking")
\t\t(comment 1 "CY7C1049G-10VXI 36-SOJ on the 32-SOJ site of U8..U11")
\t)
{lib_symbols()}
{chr(10).join(items)}
\t(sheet_instances
\t\t(path "/"
\t\t\t(page "1")
\t\t)
\t)
\t(embedded_fonts no)
)
'''
    with open(os.path.join(out_dir, PROJECT + ".kicad_sch"), "w") as fh:
        fh.write(sch)
    # ------------------------------------------------------------------ project + lib tables
    pro = {
        "board": {"design_settings": {
            "defaults": {"board_outline_line_width": 0.1, "copper_line_width": 0.2, "silk_line_width": 0.15,
                         "silk_text_size_h": 1.0, "silk_text_size_v": 1.0, "silk_text_thickness": 0.15},
            "rules": {"min_clearance": P.TRACE_CLEARANCE, "min_track_width": P.TRACE_W, "min_via_diameter": P.VIA_DIA,
                      "min_through_hole_diameter": P.VIA_DRILL, "min_copper_edge_clearance": P.EDGE_CLEARANCE,
                      "min_hole_clearance": P.HOLE_CLEARANCE, "min_hole_to_hole": 0.25, "min_via_annular_width": 0.15,
                      "min_microvia_diameter": 0.2, "min_microvia_drill": 0.1, "min_resolved_spokes": 2,
                      "min_silk_clearance": 0.0, "min_text_height": 0.8, "min_text_thickness": 0.08,
                      "solder_mask_clearance": P.MASK_EXPANSION, "solder_mask_min_width": 0.1, "solder_mask_to_copper_clearance": 0.0,
                      "use_height_for_length_calcs": True},
            "track_widths": [0.0, P.TRACE_W, P.POWER_TRACE_W, 0.3],
            "via_dimensions": [{"diameter": 0.0, "drill": 0.0}, {"diameter": P.VIA_DIA, "drill": P.VIA_DRILL}],
            "diff_pair_dimensions": [], "drc_exclusions": []},
            "ipc2581": {"dist": "", "distpn": "", "internal_id": "", "mfg": "", "mpn": ""},
            "layer_presets": [], "viewports": []},
        "boards": [], "cvpcb": {"equivalence_files": []},
        "erc": {"erc_exclusions": [], "meta": {"version": 0}, "pin_map": [], "rule_severities": {}},
        "libraries": {"pinned_footprint_libs": ["bmdc_interposer"], "pinned_symbol_libs": ["bmdc_interposer"]},
        "meta": {"filename": PROJECT + ".kicad_pro", "version": 3},
        "net_settings": {"classes": [{"name": "Default", "clearance": P.TRACE_CLEARANCE, "track_width": P.TRACE_W,
                                      "via_diameter": P.VIA_DIA, "via_drill": P.VIA_DRILL,
                                      "microvia_diameter": 0.3, "microvia_drill": 0.1, "diff_pair_gap": 0.25,
                                      "diff_pair_via_gap": 0.25, "diff_pair_width": 0.2, "bus_width": 12,
                                      "line_style": 0, "pcb_color": "rgba(0, 0, 0, 0.000)", "schematic_color": "rgba(0, 0, 0, 0.000)",
                                      "wire_width": 6, "priority": 2147483647, "tuning_profile": ""}],
                         "meta": {"version": 5}, "net_colors": None, "netclass_assignments": None, "netclass_patterns": []},
        "pcbnew": {"last_paths": {"gencad": "", "idf": "", "netlist": "", "plot": "", "pos_files": "", "specctra_dsn": "",
                                  "step": "", "svg": "", "vrml": ""}, "page_layout_descr_file": ""},
        "schematic": {"drawing": {"label_size_ratio": 0.375, "pin_symbol_size": 25.0, "text_offset_ratio": 0.15},
                      "legacy_lib_dir": "", "legacy_lib_list": [], "meta": {"version": 1}},
        "sheets": [[ROOT_UUID, "Root"]], "text_variables": {},
    }
    with open(os.path.join(out_dir, PROJECT + ".kicad_pro"), "w") as fh:
        json.dump(pro, fh, indent=2)
    with open(os.path.join(out_dir, "sym-lib-table"), "w") as fh:
        fh.write('(sym_lib_table\n\t(version 7)\n\t(lib (name "bmdc_interposer")(type "KiCad")(uri "${KIPRJMOD}/bmdc_interposer.kicad_sym")(options "")(descr "project symbols"))\n)\n')
    with open(os.path.join(out_dir, "fp-lib-table"), "w") as fh:
        fh.write('(fp_lib_table\n\t(version 7)\n\t(lib (name "bmdc_interposer")(type "KiCad")(uri "${KIPRJMOD}/bmdc_interposer.pretty")(options "")(descr "project footprints"))\n)\n')
    print("wrote", PROJECT + ".kicad_sch / .kicad_pro / lib tables; root uuid", ROOT_UUID)


if __name__ == "__main__":
    main()
