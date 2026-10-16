import sys, capstone, struct
d=open('/home/jpeverill/sandbox/dx32_hacking/BMDC.BIN','rb').read()
md=capstone.Cs(capstone.CS_ARCH_M68K, capstone.CS_MODE_M68K_040)
a,end=int(sys.argv[1],16),int(sys.argv[2],16)
def ext(b):
    se=struct.unpack('>H',b[:2])[0]; mant=struct.unpack('>Q',b[4:12])[0]
    if mant==0: return 0.0
    return (-1 if se&0x8000 else 1)*mant/2**63*2.0**((se&0x7fff)-16383)
while a<end:
    for ins in md.disasm(d[a:end], a):
        s=f"{ins.address:06x}  {ins.mnemonic:9s} {ins.op_str}"
        if 'invalid' in ins.op_str and ins.size==4 and (ins.bytes[1]&0x3f)==0x3c:  # immediate .x
            s+=f"   ; .x imm {ext(d[ins.address+4:ins.address+16])!r}"
        print(s); a=ins.address+ins.size
    if a<end:
        print(f"{a:06x}  ?? {d[a:a+2].hex()}"); a+=2
