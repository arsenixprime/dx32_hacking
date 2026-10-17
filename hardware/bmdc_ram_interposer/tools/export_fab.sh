#!/bin/bash
# Fabrication outputs for JLCPCB (4-layer, 1.0 mm, ENIG, castellated holes) into fab/
set -e
cd "$(dirname "$0")/.."
PCB=bmdc_ram_interposer.kicad_pcb
SCH=bmdc_ram_interposer.kicad_sch
rm -rf fab && mkdir -p fab/gerbers fab/render
# Gerbers: copper, mask, paste (top only is enough; bottom has no parts), silk (top only), outline
kicad-cli pcb export gerbers -o fab/gerbers/ \
  --layers "F.Cu,In1.Cu,In2.Cu,B.Cu,F.Mask,B.Mask,F.Paste,F.SilkS,Edge.Cuts" \
  --subtract-soldermask --no-netlist "$PCB"
# Drill: Excellon, merged PTH/NPTH, plus a Gerber X2 map
kicad-cli pcb export drill -o fab/gerbers/ --format excellon --excellon-units mm \
  --excellon-zeros-format decimal --drill-origin absolute --generate-map --map-format gerberx2 "$PCB"
(cd fab/gerbers && zip -q ../bmdc_ram_interposer_gerbers.zip ./*)
# Pick and place (JLCPCB CPL column names) and BOM
kicad-cli pcb export pos -o fab/pos_raw.csv --format csv --units mm --side front --smd-only --exclude-dnp "$PCB"
python3 - <<'PY'
import csv
rows=list(csv.DictReader(open('fab/pos_raw.csv')))
with open('fab/bmdc_ram_interposer_cpl.csv','w',newline='') as f:
    w=csv.writer(f); w.writerow(['Designator','Mid X','Mid Y','Rotation','Layer'])
    for r in rows:
        w.writerow([r['Ref'], r['PosX'], r['PosY'], r['Rot'], 'Top' if r['Side'].lower().startswith('top') else 'Bottom'])
PY
rm fab/pos_raw.csv
kicad-cli sch export bom -o fab/bmdc_ram_interposer_bom.csv \
  --fields "Reference,Value,Footprint,MPN,Manufacturer,LCSC,DigiKey,QUANTITY" \
  --labels "Designator,Comment,Footprint,MPN,Manufacturer,LCSC Part #,DigiKey,Qty" \
  --group-by "Value,Footprint,MPN" --exclude-dnp "$SCH"
# Renders: 3D top/bottom and layer SVGs
kicad-cli pcb render -o fab/render/top_3d.png --side top --quality high --zoom 0.8 --width 1200 --height 1800 "$PCB"
kicad-cli pcb render -o fab/render/bottom_3d.png --side bottom --quality high --zoom 0.8 --width 1200 --height 1800 "$PCB"
kicad-cli pcb render -o fab/render/iso_3d.png --quality high --perspective --rotate "-35,0,25" --zoom 0.9 "$PCB"
for L in F.Cu In1.Cu In2.Cu B.Cu; do
  kicad-cli pcb export svg -o fab/render/$L.svg --layers "$L,Edge.Cuts" --page-size-mode 2 --exclude-drawing-sheet --mode-single "$PCB"
done
kicad-cli pcb export svg -o fab/render/top_assembly.svg --layers "F.Cu,F.SilkS,F.Mask,Edge.Cuts" --page-size-mode 2 --exclude-drawing-sheet --mode-single "$PCB"
kicad-cli pcb export svg -o fab/render/bottom.svg --layers "B.Cu,B.Mask,Edge.Cuts" --page-size-mode 2 --exclude-drawing-sheet --mode-single --mirror "$PCB"
kicad-cli sch export pdf -o fab/bmdc_ram_interposer_schematic.pdf "$SCH"
kicad-cli pcb export step -o fab/bmdc_ram_interposer.step --subst-models "$PCB" 2>/dev/null || kicad-cli pcb export step -o fab/bmdc_ram_interposer.step "$PCB"
ls -la fab fab/gerbers fab/render
