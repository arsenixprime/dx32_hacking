#!/bin/bash
# kicad-happy analyzers (schematic, PCB, cross, EMC, thermal, gerbers) -> analysis/<run>/ + text reports
set -e
cd "$(dirname "$0")/.."
S=${KICAD_HAPPY:-/home/jpeverill/.claude/plugins/cache/kicad-happy/kicad-happy/1.3.1/skills}
python3 $S/kicad/scripts/analyze_schematic.py bmdc_ram_interposer.kicad_sch --analysis-dir analysis/ > /dev/null
python3 $S/kicad/scripts/analyze_pcb.py bmdc_ram_interposer.kicad_pcb --analysis-dir analysis/ --full > /dev/null
RUN=$(python3 -c "import json;print(json.load(open('analysis/manifest.json'))['current'])")
[ -d analysis/$RUN ] || RUN=$(ls -d analysis/20* | sort | tail -1 | xargs basename)
echo "run: $RUN"
python3 $S/kicad/scripts/cross_analysis.py --schematic analysis/$RUN/schematic.json --pcb analysis/$RUN/pcb.json --analysis-dir analysis/ > /dev/null
python3 $S/emc/scripts/analyze_emc.py --schematic analysis/$RUN/schematic.json --pcb analysis/$RUN/pcb.json --analysis-dir analysis/ > /dev/null 2>&1 || echo "emc analyzer not run"
python3 $S/kicad/scripts/analyze_thermal.py -s analysis/$RUN/schematic.json -p analysis/$RUN/pcb.json --analysis-dir analysis/ > /dev/null 2>&1 || echo "thermal analyzer not run"
[ -d fab/gerbers ] && python3 $S/kicad/scripts/analyze_gerbers.py fab/gerbers/ --analysis-dir analysis/ > /dev/null
# text reports
python3 $S/kicad/scripts/analyze_schematic.py bmdc_ram_interposer.kicad_sch --text --output /dev/stdout > analysis/schematic_report.txt 2>/dev/null || python3 $S/kicad/scripts/analyze_schematic.py bmdc_ram_interposer.kicad_sch --text > analysis/schematic_report.txt
python3 $S/kicad/scripts/analyze_pcb.py bmdc_ram_interposer.kicad_pcb --full --text > analysis/pcb_report.txt
python3 $S/kicad/scripts/cross_analysis.py --schematic analysis/$RUN/schematic.json --pcb analysis/$RUN/pcb.json --text > analysis/cross_report.txt
[ -d fab/gerbers ] && python3 $S/kicad/scripts/analyze_gerbers.py fab/gerbers/ --text > analysis/gerber_report.txt
python3 $S/kicad/scripts/summarize_findings.py analysis/ --top 40 > analysis/findings_summary.txt 2>&1 || true
ls analysis/$RUN
