#!/usr/bin/env python3
"""Post-process bmdc_ram_interposer.kicad_pcb after tools/build_pcb.py:
  - write the physical stack-up (JLCPCB JLC04101H-3313: 4 layers, 1.0 mm, thin 3313 prepreg between
    L1 (+5V) and L2 (GND), ENIG) into the board setup block
  - set the plot defaults used for the gerber export (protel extensions, subtract mask from silk)
The stack-up is documentation for the fab order form; it does not change any copper.
"""
import os
import re
import sys

sys.path.insert(0, os.path.dirname(__file__))
import params as P  # noqa: E402

PCB = os.path.join(os.path.dirname(__file__), "..", "bmdc_ram_interposer.kicad_pcb")

# JLC04101H-3313 (JLCPCB 4-layer, 1.0 mm): outer copper 1 oz, 3313 prepreg ~0.1 mm (Er 4.1), inner
# copper 0.5 oz, core ~0.565 mm.  Total with masks ~1.0 mm.
CORE = round(P.BOARD_THICKNESS - 2 * 0.035 - 2 * 0.1 - 2 * 0.0175 - 2 * 0.01, 4)
STACKUP = f'''		(stackup
			(layer "F.SilkS"
				(type "Top Silk Screen")
			)
			(layer "F.Paste"
				(type "Top Solder Paste")
			)
			(layer "F.Mask"
				(type "Top Solder Mask")
				(color "Green")
				(thickness 0.01)
			)
			(layer "F.Cu"
				(type "copper")
				(thickness 0.035)
			)
			(layer "dielectric 1"
				(type "prepreg")
				(thickness 0.1)
				(material "FR4 3313")
				(epsilon_r 4.1)
				(loss_tangent 0.02)
			)
			(layer "In1.Cu"
				(type "copper")
				(thickness 0.0175)
			)
			(layer "dielectric 2"
				(type "core")
				(thickness {CORE})
				(material "FR4")
				(epsilon_r 4.5)
				(loss_tangent 0.02)
			)
			(layer "In2.Cu"
				(type "copper")
				(thickness 0.0175)
			)
			(layer "dielectric 3"
				(type "prepreg")
				(thickness 0.1)
				(material "FR4 3313")
				(epsilon_r 4.1)
				(loss_tangent 0.02)
			)
			(layer "B.Cu"
				(type "copper")
				(thickness 0.035)
			)
			(layer "B.Mask"
				(type "Bottom Solder Mask")
				(color "Green")
				(thickness 0.01)
			)
			(layer "B.Paste"
				(type "Bottom Solder Paste")
			)
			(layer "B.SilkS"
				(type "Bottom Silk Screen")
			)
			(copper_finish "ENIG")
			(dielectric_constraints no)
		)
'''


def main():
    s = open(PCB).read()
    s = re.sub(r"\t\t\(stackup[\s\S]*?\n\t\t\)\n", "", s, count=1)       # drop an existing block
    m = re.search(r"\t\(setup\n", s)
    assert m, "no (setup block"
    s = s[:m.end()] + STACKUP + s[m.end():]
    s = s.replace("(usegerberextensions no)", "(usegerberextensions yes)")
    s = s.replace("(subtractmaskfromsilk no)", "(subtractmaskfromsilk yes)")
    open(PCB, "w").write(s)
    print("stack-up written; core", CORE, "mm")


if __name__ == "__main__":
    main()
