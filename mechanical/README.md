# Mechanical parts

Printed and machined hardware for the TC22 / DX32 replacement-controller retrofit — brackets,
cable entries, adapters, enclosure bits. Electronics (PCBs) live in `hardware/`, not here.

| folder | what | status |
|---|---|---|
| [yaskawa_cord_grip/](yaskawa_cord_grip/README.md) | Split (clamshell) cord grip for a 3/4" knockout, passing a 0.25" and a 0.375" cable whose right-angle connectors can't be fed through a normal gland. Five printed parts (two body halves, TPU grommet, thin nut, centering collars), CadQuery generator. | designed, not yet printed/fitted |

## Conventions

- **Parametric generators, not hand-modelled files.** Each part folder holds a Python script
  (CadQuery unless noted) with every dimension in a parameter block at the top, and a README
  that says what the part is for, what the gating measurements are, and what has actually been
  built and tested. Regenerate rather than editing exported geometry.
- **Commit the script, the README, and the STLs you would print** (`stl/`). STEP files, assembly
  files and renders beyond one overview image are regenerated, not committed — except where a
  STEP is the deliverable (something sent out for machining).
- **Mark status honestly** in the same spirit as the firmware docs' CONFIRMED/TENTATIVE: say
  whether a part has been printed, fitted, and used, and which dimensions were measured versus
  assumed. A model that has never met the machine is a hypothesis.
- **Record the gotchas.** CAD-kernel quirks that produced silently wrong geometry (see the
  cord grip's "Lessons" section) belong in the part README so the next generator doesn't repeat
  them.
- Units are millimetres in code and docs; inch values appear only where the source of the
  number is imperial (knockout trade sizes, cable ODs, wrench sizes).
- Generators should check their own output (validity, volumes, through-bores, interference
  between mating parts) and exit non-zero on failure. Renders are for humans; checks are for
  correctness.

## Environment

`pip install cadquery` (large; pulls in OCP). Headless rendering: export STL and draw it with
matplotlib — CadQuery's SVG exporter hangs on threaded parts.
