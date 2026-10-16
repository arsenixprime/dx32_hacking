import struct, sys
data=open(sys.argv[1],'rb').read()
lfa=struct.unpack('<I',data[-4:])[0]; base=len(data)-lfa
lfoDir=struct.unpack('<I',data[base+4:base+8])[0]; d=base+lfoDir
cbHdr,cbEnt,cDir=struct.unpack('<HHI',data[d:d+8])
types={}
for i in range(cDir):
    e=d+cbHdr+i*cbEnt; sst,imod,lfo,cb=struct.unpack('<HHII',data[e:e+12])
    if sst==0x12b:
        p=base+lfo; flags,cTypes=struct.unpack('<II',data[p:p+8]); p+=8
        offs=[struct.unpack('<I',data[p+4*k:p+4*k+4])[0] for k in range(cTypes)]; p+=4*cTypes
        for k,o in enumerate(offs):
            q=p+o; ln=struct.unpack('<H',data[q:q+2])[0]; types[0x1000+k]=data[q+2:q+2+ln]
prim={0x74:'int',0x75:'uint',0x10:'char',0x20:'uchar',0x11:'short',0x21:'ushort',0x12:'long',0x22:'ulong',0x40:'float',0x41:'double',0x42:'ldouble',0x03:'void',0x70:'char',0x71:'uchar',0x72:'short',0x73:'ushort',0x02:'?',0x13:'quad'}
def numeric(b,i):
    v=struct.unpack('<H',b[i:i+2])[0]
    if v<0x8000: return v,i+2
    sz={0x8000:('<b',1),0x8001:('<h',2),0x8002:('<H',2),0x8003:('<i',4),0x8004:('<I',4)}.get(v)
    if sz: return struct.unpack(sz[0],b[i+2:i+2+sz[1]])[0],i+2+sz[1]
    return v,i+2
def tname(t,depth=0):
    if t<0x1000:
        return prim.get(t&0xff, f'prim{t:04x}') + ('*' if (t&0x700) else '')
    r=types.get(t)
    if not r: return f'T{t:04x}'
    leaf=struct.unpack('<H',r[:2])[0]
    if leaf==0x0005 or leaf==0x0004: sz,j=numeric(r,12); n=r[j]; return 'struct '+r[j+1:j+1+n].decode('latin1')
    if leaf==0x0006: sz,j=numeric(r,8); n=r[j]; return 'union '+r[j+1:j+1+n].decode('latin1')
    if leaf==0x0007: n=r[10]; return 'enum '+r[11:11+n].decode('latin1')
    if leaf==0x0002: return tname(struct.unpack('<H',r[4:6])[0])+'*'
    if leaf==0x0003: sz,j=numeric(r,6); return tname(struct.unpack('<H',r[2:4])[0])+f'[{sz}B]'
    if leaf==0x0001: return 'const '+tname(struct.unpack('<H',r[4:6])[0])
    if leaf==0x0206: ft=struct.unpack('<H',r[2:4])[0]; return f'{tname(ft)}:{r[4]}@bit{r[5]}'
    if leaf==0x0008: return 'func'
    return f'leaf{leaf:04x}'
def fields(fl):
    r=types.get(fl); out=[]; i=2
    while r and i<len(r):
        if r[i]>=0xf0: i+=r[i]&0xf; continue
        leaf=struct.unpack('<H',r[i:i+2])[0]
        if leaf==0x0406:
            ft,attr=struct.unpack('<HH',r[i+2:i+6]); off,j=numeric(r,i+6); n=r[j]; out.append(('m',off,r[j+1:j+1+n].decode('latin1'),ft)); i=j+1+n
        elif leaf==0x0403:
            val,j=numeric(r,i+4); n=r[j]; out.append(('e',val,r[j+1:j+1+n].decode('latin1'),None)); i=j+1+n
        else: break
    return out
def dump(t,done):
    if t in done or t<0x1000: return
    done.add(t); r=types.get(t)
    if not r: return
    leaf=struct.unpack('<H',r[:2])[0]
    if leaf in (0x0005,0x0004):
        count,fl=struct.unpack('<HH',r[2:6]); sz,j=numeric(r,12); n=r[j]; name=r[j+1:j+1+n].decode('latin1')
        print(f"struct {name} (size {sz:#x})"); sub=[]
        for k,off,nm,ft in fields(fl): print(f"   +{off:#05x} {tname(ft):28s} {nm}"); sub.append(ft)
        for ft in sub:
            base_t=ft
            while base_t>=0x1000 and struct.unpack('<H',types[base_t][:2])[0] in (0x0002,0x0003,0x0001):
                rr=types[base_t]; lf=struct.unpack('<H',rr[:2])[0]; base_t=struct.unpack('<H',rr[4:6] if lf!=0x0003 else rr[2:4])[0]
            dump(base_t,done)
    elif leaf==0x0006:
        count,fl=struct.unpack('<HH',r[2:6]); sz,j=numeric(r,8); n=r[j]; name=r[j+1:j+1+n].decode('latin1')
        print(f"union {name} (size {sz:#x})")
        for k,off,nm,ft in fields(fl): print(f"   +{off:#05x} {tname(ft):28s} {nm}"); dump(ft,done)
    elif leaf==0x0007:
        count,ut,fl=struct.unpack('<HHH',r[2:8]); n=r[10]; name=r[11:11+n].decode('latin1')
        print(f"enum {name}")
        for k,val,nm,_ in fields(fl): print(f"   {val:6d} {nm}")
done=set()
for a in sys.argv[2:]: dump(int(a,16),done)
