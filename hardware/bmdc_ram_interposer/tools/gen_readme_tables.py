#!/usr/bin/env python3
"""Print the README net-mapping tables from tools/params.py (keeps README and schematic in sync)."""
import os
import sys

sys.path.insert(0, os.path.dirname(__file__))
import params as P  # noqa: E402

chip_by_net = {}
for j, n in P.CHIP_NET.items():
    chip_by_net.setdefault(n, []).append(j)


def chip_desc(net):
    pins = chip_by_net.get(net)
    if not pins:
        return "-"
    return ", ".join(f"{j} ({P.CHIP_PINS[j]})" for j in sorted(pins))


def pos_of_host(k):
    return k + 1 if k <= 16 else 34 - k


def pos_of_chip(j):
    return j if j <= 18 else 37 - j


print("| host pin | host signal | net | SRAM pin (name) | edge / note |")
print("|---|---|---|---|---|")
for k in range(1, 33):
    net = P.HOST_NET[k]
    hedge = "A" if k <= 16 else "B"
    pins = chip_by_net.get(net, [])
    note = ""
    if net == "HOST_PIN1":
        note = "JP2 (open) to A18; nothing else"
    elif net == "E2":
        note = "JP1 (open) to A17; nothing else"
    elif net == "+5V":
        note = "L1 pour, SRAM 9 and 27, C1-C4"
    elif net == "GND":
        note = "L2 plane, SRAM 10 and 28, C1-C4"
    else:
        cedges = {"A" if j <= 18 else "B" for j in pins}
        note = "same edge" if cedges == {hedge} else "crosses the board"
    print(f"| {k} | {P.HOST_PINS[k]} | {net} | {chip_desc(net)} | {hedge}: {note} |")
print()
print("| SRAM pin | SRAM name | net | from |")
print("|---|---|---|---|")
for j in range(1, 37):
    name = P.CHIP_PINS[j]
    net = P.CHIP_NET.get(j, "NC")
    src = "-"
    for k in range(1, 33):
        if P.HOST_NET[k] == net:
            src = f"host {k} ({P.HOST_PINS[k]})"
    if net == "A17":
        src = "TP1 wire pad (68030 A19); JP1 to host 30"
    if net == "A18":
        src = "TP2 wire pad (68030 A20); JP2 to host 1"
    if net == "NC":
        src = "no connection"
    print(f"| {j} | {name} | {net} | {src} |")
