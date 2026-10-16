import struct, sys
data = open(sys.argv[1],'rb').read()
# CodeView signature at end: 'NB09' + lfaBase (offset back from end)
sig, lfa = data[-8:-4], struct.unpack('<I', data[-4:])[0]
base = len(data) - lfa
assert data[base:base+4] == b'NB09', (sig, base)
lfoDir = struct.unpack('<I', data[base+4:base+8])[0]
d = base + lfoDir
cbHdr, cbEnt, cDir, lfoNext, flags = struct.unpack('<HHIII', data[d:d+16])
ents = []
for i in range(cDir):
    e = d + cbHdr + i*cbEnt
    sst, imod, lfo, cb = struct.unpack('<HHII', data[e:e+12])
    ents.append((sst, imod, lfo, cb))
print("subsections:", sorted(set(hex(s) for s,_,_,_ in ents)), file=sys.stderr)
segmap={}
# seg map
for sst, imod, lfo, cb in ents:
    if sst == 0x12d:
        p = base+lfo
        cSeg, cSegLog = struct.unpack('<HH', data[p:p+4])
        p += 4
        for i in range(cSeg):
            fl, ovl, grp, frame, iname, icls, off, cbs = struct.unpack('<HHHHHHII', data[p:p+20]); p += 20
            segmap[i+1]=(frame,off)
            print(f"SEGMAP {i+1}: flags={fl:04x} grp={grp} frame={frame:04x} off={off:x} cb={cbs:x}", file=sys.stderr)
# modules
mods = {}
for sst, imod, lfo, cb in ents:
    if sst == 0x120:
        p = base+lfo
        ovl, lib, cSeg, style = struct.unpack('<HHHH', data[p:p+8]); p += 8
        segs = []
        for i in range(cSeg):
            seg, pad, off, cbs = struct.unpack('<HHII', data[p:p+12]); p += 12
            segs.append((seg, off, cbs))
        n = data[p]; name = data[p+1:p+1+n].decode('latin1')
        mods[imod] = name
        print(f"MODULE {imod}: {name} segs={[(s,hex(o),hex(c)) for s,o,c in segs]}", file=sys.stderr)
def parse_syms(p, end, imod):
    out = []
    while p + 4 <= end:
        ln, typ = struct.unpack('<HH', data[p:p+4])
        if ln == 0: break
        body = data[p+4:p+2+ln]
        if typ in (0x101, 0x102, 0x103):  # LDATA16, GDATA16, PUB16
            off, seg, ti = struct.unpack('<HHH', body[:6]); name = body[7:7+body[6]].decode('latin1')
            out.append((seg, off, {0x101:'ldata',0x102:'gdata',0x103:'pub'}[typ], name, imod))
        elif typ in (0x104, 0x105):  # LPROC16, GPROC16
            pp, pe, pn, l, ds, de, off, seg, ti, fl = struct.unpack('<IIIHHHHHHB', body[:25]); name = body[26:26+body[25]].decode('latin1')
            out.append((seg, off, {0x104:'lproc',0x105:'gproc'}[typ], name, imod))
        p += 2 + ln
    return out
syms = []
for sst, imod, lfo, cb in ents:
    if sst in (0x124, 0x125, 0x129, 0x12a, 0x134, 0x123):
        p = base+lfo
        if sst in (0x129, 0x12a, 0x134):
            # global sym header: symhash(2) addrhash(2) cbSymbol(4) cbSymHash(4) cbAddrHash(4)
            sh, ah, cbs, cbsh, cbah = struct.unpack('<HHIII', data[p:p+16]); p += 16; end = p + cbs
        else:
            if sst == 0x124 or sst == 0x125 or sst == 0x123:
                p += 4  # signature dword
            end = base+lfo+cb
        syms += parse_syms(p, end, imod)
seen = set()
for seg, off, kind, name, imod in sorted(syms):
    key = (seg, off, name)
    if key in seen: continue
    seen.add(key)
    fr,so=segmap.get(seg,(0,0))
    ga=f"{0x1000+fr:04x}:{so+off:04x}" if seg in segmap else f"??:{off:04x}"
    print(f"{ga} {seg:2d}:{off:04x} {kind:5s} {name:40s} {mods.get(imod,'')}")
