// Decompiled: BMDC.BIN
// Processor: 68000
// Language: 68000:BE:32:default
//
// Memory Map:
//   ram                  00000000 - 0004bff9  [RWX] initialized

// Function: FUN_0000ddf2 @ 0000ddf2

void FUN_0000ddf2(void)

{
  return;
}



// Function: FUN_0000de10 @ 0000de10

void FUN_0000de10(void)

{
  return;
}



// Function: FUN_0000df20 @ 0000df20

void FUN_0000df20(void)

{
  undefined4 *puVar1;
  undefined4 *puVar3;
  undefined4 *puVar2;
  
  if (DAT_0000425c._0_1_ != '\0') {
    DAT_00004284._3_1_ = 10;
    puVar1 = (undefined4 *)&DAT_0000425c;
    puVar3 = (undefined4 *)&DAT_012006e4;
    do {
      puVar2 = puVar1 + 1;
      *puVar3 = *puVar1;
      puVar1 = puVar2;
      puVar3 = puVar3 + 1;
    } while (puVar2 < (undefined4 *)0x4288);
    DAT_0000aef9 = DAT_0000aef9 | 0x20;
  }
  return;
}



// Function: FUN_0000df4c @ 0000df4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000df4c(void)

{
  ushort uVar1;
  undefined2 *extraout_A0;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  longdouble lVar5;
  
  if ((DAT_00009fda._0_2_ & 0x8000) == 0) {
    FUN_0001c494();
    puVar3 = (undefined4 *)0xa1da;
    puVar2 = (undefined4 *)0x4288;
    while (&DAT_00009fda < puVar3) {
      puVar2 = puVar2 + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *puVar2;
    }
    _DAT_00004088 = _DAT_00004088 & 0xc07;
    bVar4 = _DAT_00004088 == 0;
    FUN_0002cbde();
    if (!bVar4) {
      DAT_000005bc = &DAT_00046d54;
      puVar2 = &DAT_00009fda;
      for (puVar3 = &DAT_00040b54; puVar3 < (undefined4 *)0x40d55; puVar3 = puVar3 + 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
      }
      FUN_0000e2fa();
      FUN_0000ddf2();
      DAT_0000c4e4 = *extraout_A0;
      FUN_0002ca1e();
      while (DAT_0000a25c != 0) {
        FUN_0002c9de();
      }
      lVar5 = (longdouble)_DAT_00000a02;
      _DAT_0000a004 = (undefined1  [12])lVar5;
      uVar1 = (ushort)((uint)_DAT_0000af58 >> 0x10);
      if (lVar5 - (longdouble)_DAT_000040b2 != FLOAT_UNKNOWN) {
        _DAT_000040b2 = (undefined1  [12])lVar5;
        lVar5 = lVar5 - (longdouble)_DAT_0000ac4e;
        if (uVar1 >> 0xc == 3) {
          lVar5 = lVar5 * (longdouble)2;
        }
        _DAT_00003f0c = (undefined1  [12])lVar5;
        _DAT_00004010 = (undefined1  [12])lVar5;
      }
      lVar5 = (longdouble)_DAT_00000a0e;
      _DAT_0000a010 = (undefined1  [12])lVar5;
      if (lVar5 - (longdouble)_DAT_000040be != FLOAT_UNKNOWN) {
        _DAT_000040be = (undefined1  [12])lVar5;
        _DAT_00003f30 = (undefined1  [12])(lVar5 - (longdouble)_DAT_0000ac5a);
        _DAT_0000401c = (undefined1  [12])(lVar5 - (longdouble)_DAT_0000ac5a);
      }
      lVar5 = (longdouble)_DAT_00000a1a;
      _DAT_0000a01c = (undefined1  [12])lVar5;
      if (lVar5 - (longdouble)_DAT_000040ca != FLOAT_UNKNOWN) {
        _DAT_000040ca = (undefined1  [12])lVar5;
        if ((uVar1 >> 0xc != 0) || (DAT_00002988 != 0)) {
          lVar5 = lVar5 - (longdouble)_DAT_0000ac66;
        }
        _DAT_00003f54 = (undefined1  [12])lVar5;
        _DAT_00004028 = (undefined1  [12])lVar5;
      }
      DAT_00040b54 = 0;
      DAT_000005bc = &DAT_00046d54;
      DAT_0000a25c = 0;
      DAT_00009fda._0_2_ = DAT_000009d8;
      DAT_00009fda._2_1_ = DAT_000009da;
    }
  }
  return;
}



// Function: FUN_0000e210 @ 0000e210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000e210(void)

{
  undefined2 *extraout_A0;
  undefined2 *extraout_A1;
  
  DAT_00000bd9 = DAT_00000bd9 & 0xf7;
  DAT_00000bd9 = DAT_00000bd9 | 0x10;
  DAT_000005b8 = &DAT_00040b54;
  DAT_00040b54._0_2_ = 0;
  DAT_00040b54._2_2_ = 2;
  DAT_00040b58._0_2_ = 0;
  _DAT_00040b7e = (undefined1  [12])DAT_00002750;
  _DAT_00040b8a = (undefined1  [12])DAT_00002754;
  _DAT_00040b96 = (undefined1  [12])DAT_00002758;
  _DAT_00040ba2 = (undefined1  [12])DAT_0000275c;
  _DAT_00040bae = (undefined1  [12])DAT_00002760;
  _DAT_00040bfa = (undefined1  [12])(longdouble)_DAT_00009f88;
  _DAT_00040c06 = (undefined1  [12])(longdouble)_DAT_00009f94;
  _DAT_00040c12 = (undefined1  [12])(longdouble)_DAT_00009fa0;
  _DAT_00040c1e = (undefined1  [12])(longdouble)_DAT_00009fac;
  _DAT_00040c2a = (undefined1  [12])(longdouble)_DAT_00009fb8;
  DAT_00040b5e = DAT_0000c50e;
  DAT_00040b62 = _DAT_01200558;
  _DAT_00040b66 = (undefined1  [12])(longdouble)_DAT_00009f7c;
  do {
    FUN_0000ddf2();
    *extraout_A0 = 0;
  } while (extraout_A0 != extraout_A1);
  DAT_000005bc = extraout_A1;
  DAT_00009fda._0_2_ = DAT_00009fda._0_2_ & 0x7fff;
  return;
}



// Function: FUN_0000e2fa @ 0000e2fa

void FUN_0000e2fa(void)

{
  undefined4 *extraout_A0;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_0000ddf2();
  puVar1 = (undefined4 *)&DAT_00000bd8;
  puVar2 = extraout_A0 + 0x80;
  while (extraout_A0 < puVar2) {
    puVar2 = puVar2 + -1;
    puVar1 = puVar1 + -1;
    *puVar1 = *puVar2;
  }
  if (DAT_00007780 != 5) {
    *(undefined1 *)(extraout_A0 + 0x75) = 0;
  }
  DAT_000005bc = 0x9d8;
  return;
}



// Function: FUN_0000e704 @ 0000e704

void FUN_0000e704(void)

{
  return;
}



// Function: FUN_0000e706 @ 0000e706

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0000e706(void)

{
  short sVar2;
  uint uVar1;
  
  if ((DAT_0000aef9 & 0x10) == 0) {
    sVar2 = FUN_0000e74a();
    if ((sVar2 == 0) && (DAT_0000c542 == 1)) {
      DAT_0000c542 = 0;
      DAT_0000c524 = DAT_0000c524 & 0xfb;
      DAT_0000aefb = DAT_0000aefb | 8;
      FUN_0002b3cc();
      FUN_00029d7c();
    }
  }
  uVar1 = CONCAT31(CONCAT21(CONCAT11(DAT_000031eb,DAT_000031ea),DAT_000031e9),DAT_000031e8);
  if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3) {
    uVar1 = uVar1 & 0xfffffff0;
  }
  return uVar1;
}



// Function: FUN_0000e74a @ 0000e74a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0000e74a(void)

{
  uint uVar1;
  
  uVar1 = CONCAT31(CONCAT21(CONCAT11(DAT_000031eb,DAT_000031ea),DAT_000031e9),DAT_000031e8);
  if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3) {
    uVar1 = uVar1 & 0xfffffff0;
  }
  return uVar1;
}



// Function: FUN_0000e784 @ 0000e784

void FUN_0000e784(void)

{
  DAT_00007785 = DAT_00007785 & 0x7f;
  if (DAT_0000c5d2 == 0) {
    if (((DAT_00007784 & 1) == 0) && ((DAT_00000bd9 & 4) == 0)) {
      if (((DAT_00000bd8 & 0x20) == 0) &&
         ((((DAT_00000bd8 & 0x80) != 0 && (DAT_00007780 != 2)) && (DAT_0000a25c == 0)))) {
        return;
      }
      if (((DAT_000010d8 & 8) != 0) && ((DAT_00000bd9 & 0x40) == 0)) {
        DAT_0000139a = 0;
        DAT_0000139a = FUN_00018116();
        if (DAT_000010f0 < DAT_0000139e) {
          DAT_00007784 = DAT_00007784 | 1;
          goto LAB_0000e7aa;
        }
        DAT_000010d8 = DAT_000010d8 & 0xdf;
      }
      DAT_00000bd9 = DAT_00000bd9 | 0x40;
      if (DAT_00009fd2 != FUN_0000e784) {
        return;
      }
      DAT_00009fd2 = (code *)0x0;
      return;
    }
  }
  else {
    DAT_00007784 = DAT_00007784 & 0xfe;
  }
LAB_0000e7aa:
  FUN_00032176();
  DAT_00009fd2 = FUN_0000e784;
  return;
}



// Function: FUN_0000e846 @ 0000e846

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0000e846(void)

{
  byte in_D0b;
  byte bVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  
  if (((DAT_00007784 & 0x80) != 0) && ((DAT_00007785 & 1) != 0)) {
    return in_D0b;
  }
  bVar1 = 8;
  if ((DAT_0000aecb & 0x40) != 0) {
    return bVar1;
  }
  if (((ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c) == 2) && ((DAT_00007784 & 0x80) == 0)) {
    DAT_0000aecc = DAT_0000aed0;
  }
  DAT_0000aed8 = 0x640;
  iVar4 = DAT_0000aecc;
  if (DAT_0000aecc < 0) {
    iVar4 = -DAT_0000aecc;
  }
  iVar2 = 0;
  while ((sVar3 = (short)iVar2, iVar2 < 8 &&
         ((iVar4 < (int)(&DAT_0000af34)[sVar3] || ((int)(&DAT_0000af10)[sVar3] < iVar4))))) {
    iVar2 = iVar2 + 1;
  }
  if (iVar2 != 8) {
    if (iVar4 < (int)(&DAT_0000af34)[sVar3]) {
      __m68k_trap(0xe);
      return bVar1;
    }
    if (iVar4 <= (int)(&DAT_0000af10)[sVar3]) {
      if ((DAT_0000aecb & 1) == 0) {
        if ((DAT_0000aecb & 0x40) == 0) {
          if ((DAT_000031e6 & 2) == 0) {
            if ((DAT_000031e6 & 2) == 0) {
              if ((DAT_0000aefa & 4) != 0) {
                DAT_000031ee = DAT_000031ee | 4;
              }
              if ((DAT_0000aefa & 2) != 0) {
                DAT_000031ee = DAT_000031ee | 8;
              }
              bVar1 = FUN_00032176();
              DAT_00007785 = DAT_00007785 & 0xbf;
              DAT_00007784 = DAT_00007784 & 0x5f;
              DAT_0000aeca = bVar1 | 0x80;
              bVar1 = DAT_0000aeca;
              if (DAT_00007782 == 0) {
                DAT_00007782 = 4;
              }
            }
            else {
              __m68k_trap(0xe);
            }
          }
          else {
            __m68k_trap(0xe);
          }
        }
        return bVar1;
      }
      return bVar1;
    }
    __m68k_trap(0xe);
    return bVar1;
  }
  __m68k_trap(0xe);
  return bVar1;
}



// Function: FUN_0000e85e @ 0000e85e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0000e85e(void)

{
  byte in_D0b;
  byte bVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  
  if (((DAT_00007784 & 0x80) != 0) && ((DAT_00007785 & 1) == 0)) {
    return in_D0b;
  }
  bVar1 = 9;
  if ((DAT_0000aecb & 0x40) != 0) {
    return bVar1;
  }
  if (((ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c) == 2) && ((DAT_00007784 & 0x80) == 0)) {
    DAT_0000aecc = DAT_0000aed0;
  }
  DAT_0000aed8 = 0x640;
  iVar4 = DAT_0000aecc;
  if (DAT_0000aecc < 0) {
    iVar4 = -DAT_0000aecc;
  }
  iVar2 = 0;
  while ((sVar3 = (short)iVar2, iVar2 < 8 &&
         ((iVar4 < (int)(&DAT_0000af34)[sVar3] || ((int)(&DAT_0000af10)[sVar3] < iVar4))))) {
    iVar2 = iVar2 + 1;
  }
  if (iVar2 != 8) {
    if (iVar4 < (int)(&DAT_0000af34)[sVar3]) {
      __m68k_trap(0xe);
      return bVar1;
    }
    if (iVar4 <= (int)(&DAT_0000af10)[sVar3]) {
      if ((DAT_0000aecb & 1) == 0) {
        if ((DAT_0000aecb & 0x40) == 0) {
          if ((DAT_000031e6 & 2) == 0) {
            if ((DAT_000031e6 & 2) == 0) {
              if ((DAT_0000aefa & 4) != 0) {
                DAT_000031ee = DAT_000031ee | 4;
              }
              if ((DAT_0000aefa & 2) != 0) {
                DAT_000031ee = DAT_000031ee | 8;
              }
              bVar1 = FUN_00032176();
              DAT_00007785 = DAT_00007785 & 0xbf;
              DAT_00007784 = DAT_00007784 & 0x5f;
              DAT_0000aeca = bVar1 | 0x80;
              bVar1 = DAT_0000aeca;
              if (DAT_00007782 == 0) {
                DAT_00007782 = 4;
              }
            }
            else {
              __m68k_trap(0xe);
            }
          }
          else {
            __m68k_trap(0xe);
          }
        }
        return bVar1;
      }
      return bVar1;
    }
    __m68k_trap(0xe);
    return bVar1;
  }
  __m68k_trap(0xe);
  return bVar1;
}



// Function: FUN_0000e9b6 @ 0000e9b6

undefined4 FUN_0000e9b6(void)

{
  byte bVar1;
  undefined4 in_D0;
  undefined1 in_ZF;
  
  FUN_00032176();
  FUN_0002a406();
  if ((bool)in_ZF) {
    if ((DAT_0000c4e8 < 1) || (DAT_0000c4e6 < DAT_0000c4e8)) {
      DAT_00007784 = DAT_00007784 & 0x7f;
      if ((DAT_0000aefb & 8) == 0) {
        if ((DAT_0000aefa & 8) == 0) {
          if ((DAT_000031e4 & 8) != 0) {
            __m68k_trap(0xe);
            return in_D0;
          }
          FUN_0000fc06();
        }
        else {
          FUN_0000fc06();
        }
      }
      if ((((DAT_00007785 & 0x80) == 0) &&
          (bVar1 = DAT_00000bd9 & 0x40, DAT_00000bd9 = DAT_00000bd9 & 0xbf, bVar1 == 0)) &&
         ((DAT_00000bd8 & 0x80) != 0)) {
        if (DAT_00007780 == 4) {
          bVar1 = DAT_0000c51a & 2;
          DAT_0000c51a = DAT_0000c51a | 2;
          if (bVar1 == 0) {
            DAT_0000c506 = 0;
          }
          DAT_00007784 = DAT_00007784 & 0xef;
          if ((DAT_0000c519 & 2) != 0) {
            FUN_00010892();
          }
          if ((DAT_00003252 & 4) == 0) {
            DAT_00007780 = 2;
            FUN_00016dc4();
            DAT_00000bd9 = DAT_00000bd9 & 0xe7;
          }
          else if ((DAT_0000aecb & 8) == 0) {
            __m68k_trap(0xe);
          }
          else {
            DAT_00007780 = 2;
            FUN_00016dc4();
            DAT_00000bd9 = DAT_00000bd9 & 0xe7;
          }
        }
        if (DAT_00007780 == 1) {
          if ((DAT_00003252 & 4) == 0) {
            DAT_00000bd9 = DAT_00000bd9 | 8;
          }
          else if ((DAT_0000aecb & 8) == 0) {
            __m68k_trap(0xe);
          }
          else {
            DAT_00000bd9 = DAT_00000bd9 | 8;
          }
        }
      }
    }
    else {
      __m68k_trap(0xe);
    }
  }
  return in_D0;
}



// Function: FUN_0000eb14 @ 0000eb14

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000eb14(void)

{
  longdouble lVar1;
  int iVar2;
  ushort uVar3;
  longdouble lVar4;
  
  if (DAT_00009fd2 == 0) {
    if (DAT_00007782 == 1) {
      FUN_0002b3cc();
      iVar2 = DAT_000005b8;
      if ((DAT_0000aefa & 1) == 0) {
        lVar4 = (longdouble)(undefined1  [12])0x2000000000000000 *
                (longdouble)(undefined1  [12])0x295555c52e72da12;
      }
      else {
        lVar4 = (longdouble)_DAT_0000bfec;
      }
      *(undefined1 (*) [12])(DAT_000005b8 + 0x1e) = (undefined1  [12])lVar4;
      if (DAT_00009fd6 == 0) {
        if (DAT_00009fd8 == 0) {
          if ((DAT_0000aef8 & 0x80) == 0) {
            lVar4 = (longdouble)(undefined1  [12])0x7e00000000000000;
          }
          else {
            lVar4 = (longdouble)(undefined1  [12])0x4800000000000000;
          }
          lVar1 = ((longdouble)DAT_00002750 + lVar4) - (longdouble)DAT_00000fdc;
          lVar4 = (longdouble)DAT_00002750 + lVar4;
          if (lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1) {
            lVar4 = (longdouble)DAT_00000fdc;
          }
        }
        else {
          lVar4 = (longdouble)DAT_00000fdc;
        }
        *(undefined1 (*) [12])(iVar2 + 0x2a) = (undefined1  [12])lVar4;
      }
      else if (DAT_00009fd6 == 1) {
        if (DAT_00009fd8 == 0) {
          if ((DAT_0000aef8 & 0x80) == 0) {
            lVar4 = (longdouble)(undefined1  [12])0x7e00000000000000;
          }
          else {
            lVar4 = (longdouble)(undefined1  [12])0x4800000000000000;
          }
          lVar1 = ((longdouble)DAT_00002754 + lVar4) - (longdouble)DAT_00000fe4;
          lVar4 = (longdouble)DAT_00002754 + lVar4;
          if (lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1) {
            lVar4 = (longdouble)DAT_00000fe4;
          }
        }
        else {
          lVar4 = (longdouble)DAT_00000fe4;
        }
        *(undefined1 (*) [12])(iVar2 + 0x36) = (undefined1  [12])lVar4;
      }
      else if (DAT_00009fd6 == 2) {
        if (DAT_00009fd8 == 0) {
          if ((DAT_0000aef8 & 0x80) == 0) {
            lVar4 = (longdouble)(undefined1  [12])0x7e00000000000000;
          }
          else {
            lVar4 = (longdouble)(undefined1  [12])0x4800000000000000;
          }
          lVar1 = ((longdouble)DAT_00002758 + lVar4) - (longdouble)DAT_00000fec;
          lVar4 = (longdouble)DAT_00002758 + lVar4;
          if (lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1) {
            lVar4 = (longdouble)DAT_00000fec;
          }
        }
        else {
          lVar4 = (longdouble)DAT_00000fec;
          if ((((ushort)((uint)_DAT_0000af58 >> 0x1c) == 0) && (DAT_00002988 != 0)) &&
             (lVar1 = (longdouble)DAT_00002758 - lVar4,
             lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1)) {
            lVar4 = (longdouble)DAT_00002758;
          }
        }
        *(undefined1 (*) [12])(iVar2 + 0x42) = (undefined1  [12])lVar4;
      }
      else if (DAT_00009fd6 == 3) {
        if (DAT_00009fd8 == 0) {
          lVar1 = ((longdouble)DAT_0000275c + (longdouble)(undefined1  [12])0x4350000000000000) -
                  (longdouble)DAT_00000ff4;
          lVar4 = (longdouble)DAT_0000275c + (longdouble)(undefined1  [12])0x4350000000000000;
          if (lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1) {
            lVar4 = (longdouble)DAT_00000ff4;
          }
        }
        else {
          lVar4 = (longdouble)DAT_00000ff4;
        }
        *(undefined1 (*) [12])(iVar2 + 0x4e) = (undefined1  [12])lVar4;
      }
      else if (DAT_00009fd6 == 4) {
        if (DAT_00009fd8 == 0) {
          lVar4 = (longdouble)DAT_00002760 + (longdouble)(undefined1  [12])0x4800000000000000;
        }
        else {
          lVar4 = (longdouble)DAT_00000ffc;
        }
        *(undefined1 (*) [12])(iVar2 + 0x5a) = (undefined1  [12])lVar4;
      }
      DAT_00009fd2 = 0xf286;
      FUN_0002b4d6();
    }
    else if (DAT_00007782 == 3) {
      if (DAT_0000a25c == 0) {
        FUN_0002ee9a();
        DAT_00009fd2 = 0xf2d6;
      }
    }
    else if (DAT_00007782 == 2) {
      if (DAT_0000a25c == 0) {
        FUN_0002f0be();
        DAT_00009fd2 = 0xf30c;
      }
    }
    else if (((DAT_00007782 == 4) && ((uint)(_DAT_0000af58 << 0x18) >> 0x1c == 0)) &&
            ((DAT_00000bd9 & 4) == 0)) {
      uVar3 = (ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c);
      if (uVar3 == 2) {
        if ((DAT_00003252 & 4) != 0) {
          DAT_0000aeca = 0x8a;
          DAT_00009fd2 = 0xf3b6;
        }
      }
      else if (((uVar3 == 1) || (uVar3 == 7)) && (DAT_0000aed8 < 8000)) {
        DAT_0000aed8 = DAT_0000aed8 + 0x10;
        _DAT_000099d4 = DAT_00007778 + 0x14;
        DAT_00009fd2 = 0xf3b6;
      }
    }
  }
  return;
}



// Function: FUN_0000ee4e @ 0000ee4e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000ee4e(void)

{
  longdouble lVar1;
  int iVar2;
  ushort uVar3;
  longdouble lVar4;
  
  if (DAT_00009fd2 == 0) {
    if (DAT_00007782 == 1) {
      FUN_0002b3cc();
      iVar2 = DAT_000005b8;
      if ((DAT_0000aefa & 1) == 0) {
        lVar4 = (longdouble)(undefined1  [12])0x2000000000000000 *
                (longdouble)(undefined1  [12])0x295555c52e72da12;
      }
      else {
        lVar4 = (longdouble)_DAT_0000bfec;
      }
      *(undefined1 (*) [12])(DAT_000005b8 + 0x1e) = (undefined1  [12])lVar4;
      if (DAT_00009fd6 == 0) {
        if (DAT_00009fd8 == 0) {
          if ((DAT_0000aef8 & 0x80) == 0) {
            lVar4 = (longdouble)(undefined1  [12])0x7e00000000000000;
          }
          else {
            lVar4 = (longdouble)(undefined1  [12])0x4800000000000000;
          }
          lVar1 = ((longdouble)DAT_00002750 - lVar4) - (longdouble)DAT_00000fd8;
          lVar4 = (longdouble)DAT_00002750 - lVar4;
          if (lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN) {
            lVar4 = (longdouble)DAT_00000fd8;
          }
        }
        else {
          lVar4 = (longdouble)DAT_00000fd8;
        }
        *(undefined1 (*) [12])(iVar2 + 0x2a) = (undefined1  [12])lVar4;
      }
      else if (DAT_00009fd6 == 1) {
        if (DAT_00009fd8 == 0) {
          if ((DAT_0000aef8 & 0x80) == 0) {
            lVar4 = (longdouble)(undefined1  [12])0x7e00000000000000;
          }
          else {
            lVar4 = (longdouble)(undefined1  [12])0x4800000000000000;
          }
          lVar1 = ((longdouble)DAT_00002754 - lVar4) - (longdouble)DAT_00000fe0;
          lVar4 = (longdouble)DAT_00002754 - lVar4;
          if (lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN) {
            lVar4 = (longdouble)DAT_00000fe0;
          }
        }
        else {
          lVar4 = (longdouble)DAT_00000fe0;
        }
        *(undefined1 (*) [12])(iVar2 + 0x36) = (undefined1  [12])lVar4;
      }
      else if (DAT_00009fd6 == 2) {
        if (DAT_00009fd8 == 0) {
          if ((DAT_0000aef8 & 0x80) == 0) {
            lVar4 = (longdouble)(undefined1  [12])0x7e00000000000000;
          }
          else {
            lVar4 = (longdouble)(undefined1  [12])0x4800000000000000;
          }
          lVar1 = ((longdouble)DAT_00002758 - lVar4) - (longdouble)DAT_00000fe8;
          lVar4 = (longdouble)DAT_00002758 - lVar4;
          if (lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN) {
            lVar4 = (longdouble)DAT_00000fe8;
          }
        }
        else {
          lVar4 = (longdouble)DAT_00000fe8;
        }
        *(undefined1 (*) [12])(iVar2 + 0x42) = (undefined1  [12])lVar4;
      }
      else if (DAT_00009fd6 == 3) {
        if (DAT_00009fd8 == 0) {
          lVar1 = ((longdouble)DAT_0000275c - (longdouble)(undefined1  [12])0x4350000000000000) -
                  (longdouble)DAT_00000ff0;
          lVar4 = (longdouble)DAT_0000275c - (longdouble)(undefined1  [12])0x4350000000000000;
          if (lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN) {
            lVar4 = (longdouble)DAT_00000ff0;
          }
        }
        else {
          lVar4 = (longdouble)DAT_00000ff0;
        }
        *(undefined1 (*) [12])(iVar2 + 0x4e) = (undefined1  [12])lVar4;
      }
      else if (DAT_00009fd6 == 4) {
        if (DAT_00009fd8 == 0) {
          lVar4 = (longdouble)DAT_00002760 - (longdouble)(undefined1  [12])0x4800000000000000;
        }
        else {
          lVar4 = (longdouble)DAT_00000ff8;
        }
        *(undefined1 (*) [12])(iVar2 + 0x5a) = (undefined1  [12])lVar4;
      }
      DAT_00009fd2 = 0xf2ae;
      FUN_0002b4d6();
    }
    else if (DAT_00007782 == 3) {
      if (DAT_0000a25c == 0) {
        FUN_0002efac();
        DAT_00009fd2 = 0xf2f4;
      }
    }
    else if (DAT_00007782 == 2) {
      if (DAT_0000a25c == 0) {
        FUN_0002f14e();
        DAT_00009fd2 = 0xf33a;
      }
    }
    else if (((DAT_00007782 == 4) && ((uint)(_DAT_0000af58 << 0x18) >> 0x1c == 0)) &&
            ((DAT_00000bd9 & 4) == 0)) {
      uVar3 = (ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c);
      if (uVar3 == 2) {
        if ((DAT_00003252 & 4) != 0) {
          DAT_0000aeca = 0x8b;
          DAT_00009fd2 = 0xf466;
        }
      }
      else if (((uVar3 == 1) || (uVar3 == 7)) && (0x60 < DAT_0000aed8)) {
        DAT_0000aed8 = DAT_0000aed8 - 0x10;
        _DAT_000099d4 = DAT_00007778 + 0x14;
        DAT_00009fd2 = 0xf466;
      }
    }
  }
  return;
}



// Function: FUN_0000f15c @ 0000f15c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000f15c(void)

{
  if (DAT_00009fd2 == 0) {
    FUN_0002b3cc();
    if (DAT_00009fd8 == 0) {
      if ((DAT_0000aef8 & 0x80) == 0) {
        _DAT_00001148 = (undefined4 *)0x4f6;
      }
      else {
        _DAT_00001148 = (undefined4 *)0x3e8;
      }
    }
    else if ((DAT_0000aef8 & 0x80) == 0) {
      _DAT_00001148 = (undefined4 *)0x319c;
    }
    else {
      _DAT_00001148 = &DAT_00002710;
    }
    FUN_0002b4d6();
  }
  return;
}



// Function: FUN_0000f20c @ 0000f20c

void FUN_0000f20c(void)

{
  if (((DAT_00007784 & 1) == 0) && ((DAT_00003250 & 0x40) != 0)) {
    FUN_0002f1f6();
    DAT_00009fd2 = 0xf390;
  }
  return;
}



// Function: FUN_0000f22e @ 0000f22e

void FUN_0000f22e(void)

{
  if ((((DAT_00003250 & 0x40) != 0) && (DAT_0000a25c == 0)) && ((DAT_00003268 & 4) != 0)) {
    FUN_0002f0be();
  }
  return;
}



// Function: FUN_0000f24e @ 0000f24e

void FUN_0000f24e(void)

{
  if ((((DAT_00007780 != 2) && ((DAT_0000aef8 & 0x10) == 0)) && (DAT_0000a25c == 0)) &&
     ((DAT_00003268 & 4) != 0)) {
    FUN_0002f14e();
  }
  return;
}



// Function: FUN_0000fb6c @ 0000fb6c

undefined4 FUN_0000fb6c(void)

{
  byte bVar1;
  undefined4 in_D0;
  
  if ((((DAT_00007784 & 1) == 0) && ((DAT_00000bd9 & 4) == 0)) &&
     (FUN_0000e784(), (DAT_00003250 & 1) != 0)) {
    bVar1 = DAT_00007785 & 0x40;
    DAT_00007785 = DAT_00007785 | 0x40;
    if (bVar1 == 0) {
      DAT_000031ee = DAT_000031ee & 0xf3;
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
      if ((DAT_00003252 & 4) != 0) {
        DAT_0000c45c = DAT_0000aecc;
      }
      DAT_00007784 = DAT_00007784 & 0xfb;
      DAT_0000aecc = 0;
      DAT_00003254 = 0;
      DAT_0000aeca = 0x87;
      DAT_000026e0 = 1;
      FUN_00023db6();
    }
    else {
      FUN_0000e784();
    }
  }
  return in_D0;
}



// Function: FUN_0000fc06 @ 0000fc06

void FUN_0000fc06(void)

{
  byte bVar1;
  
  if ((DAT_00007780 != 2) && (DAT_00007780 != 1)) {
    DAT_00007785 = DAT_00007785 & 0xbf;
    return;
  }
  bVar1 = DAT_00007785 & 0x40;
  DAT_00007785 = DAT_00007785 & 0xbf;
  if (bVar1 != 0) {
    if ((DAT_0000aefa & 4) != 0) {
      DAT_000031ee = DAT_000031ee | 4;
    }
    if ((DAT_0000aefa & 2) != 0) {
      DAT_000031ee = DAT_000031ee | 8;
    }
    DAT_0000aecc = DAT_0000c45c;
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0x80;
    DAT_0000aeca = 0x86;
    DAT_00007785 = DAT_00007785 | 0x80;
  }
  return;
}



// Function: FUN_0000fc76 @ 0000fc76

void FUN_0000fc76(void)

{
  if ((DAT_0000aefa & 8) != 0) {
    DAT_000031ed = DAT_000031ed | 4;
    DAT_00007784 = DAT_00007784 & 0xdf;
    return;
  }
  if (DAT_00007780 == 0) {
    DAT_000031ed = DAT_000031ed | 4;
  }
  else if (DAT_00007780 == 3) {
    DAT_000031ed = DAT_000031ed | 4;
  }
  else if (DAT_00007780 == 5) {
    DAT_000031ed = DAT_000031ed | 4;
  }
  else {
    DAT_000031ed = DAT_000031ed & 0xfb;
    if (((DAT_0000aefb & 8) == 0) && ((DAT_000031e4 & 8) != 0)) {
      __m68k_trap(0xe);
      return;
    }
  }
  return;
}



// Function: FUN_0000ff4c @ 0000ff4c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000ff4c(void)

{
  _DAT_013000b8 = 0x10;
  return;
}



// Function: FUN_000100fe @ 000100fe

void FUN_000100fe(void)

{
  byte bVar1;
  
  bVar1 = DAT_0000aef9 & 8;
  DAT_0000aef9 = DAT_0000aef9 & 0xf7;
  if (bVar1 != 0) {
    DAT_0000aeb2 = DAT_00009fc8;
  }
  return;
}



// Function: FUN_00010114 @ 00010114

void FUN_00010114(void)

{
  byte bVar1;
  byte *pbVar2;
  
  do {
    if (DAT_00009794 == 0) {
      DAT_0000aeb2 = (undefined1 *)0x0;
      DAT_00009794 = 0;
      pbVar2 = DAT_00009790;
      goto LAB_00010168;
    }
    DAT_00009794 = DAT_00009794 - 1;
    pbVar2 = DAT_00009790 + 1;
    bVar1 = *DAT_00009790;
    if (pbVar2 == &DAT_0000978c) {
      pbVar2 = &DAT_0000778c;
    }
    *DAT_0000995a = bVar1;
    DAT_00009790 = pbVar2;
    DAT_0000995a = DAT_0000995a + 1;
  } while ((bVar1 & 0x7f) != 0);
  DAT_0000995a = &DAT_00009798;
  DAT_0000aeb2 = &DAT_00009798;
LAB_00010168:
  DAT_00009790 = pbVar2;
  if (DAT_00009794 < 0x1e01) {
    DAT_0000aefa = DAT_0000aefa & 0xef;
  }
  return;
}



// Function: FUN_00010186 @ 00010186

undefined4 FUN_00010186(void)

{
  undefined4 in_D0;
  char *unaff_A6;
  
  while( true ) {
    if ((char *)0x9adf < DAT_000099dc) {
      return in_D0;
    }
    if (*unaff_A6 == '\0') break;
    *DAT_000099dc = *unaff_A6;
    DAT_000099dc = DAT_000099dc + 1;
    unaff_A6 = unaff_A6 + 1;
  }
  *DAT_000099dc = '\n';
  DAT_000099dc[1] = '\0';
  DAT_000099dc = DAT_000099dc + 1;
  return in_D0;
}



// Function: FUN_00010378 @ 00010378

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00010378(void)

{
  if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3) {
    DAT_0000aeaa = DAT_0000ae9a * 100;
  }
  else {
    DAT_0000aeaa = 0;
  }
  DAT_000031ee = DAT_000031ee & 0xfd;
  return;
}



// Function: FUN_0001040a @ 0001040a

void FUN_0001040a(void)

{
  int iVar1;
  int in_D1;
  
  if ((DAT_00007782 == 0) || (DAT_00007782 == 4)) {
    in_D1 = (DAT_000026f8 - DAT_0000bfe8) / -0x4b;
    iVar1 = DAT_00003280 + in_D1;
    if ((-1 < iVar1) && (iVar1 < 0x12c1)) {
      DAT_00003280 = iVar1;
    }
  }
  if (in_D1 != 0) {
    DAT_0000bfe8 = DAT_000026f8;
  }
  return;
}



// Function: FUN_00010458 @ 00010458

void FUN_00010458(void)

{
  int iVar1;
  
  iVar1 = (DAT_000030dc >> 4) + -0x30;
  if (iVar1 < 5) {
    iVar1 = 0;
  }
  if (0x96 < iVar1) {
    iVar1 = 0x96;
  }
  DAT_00003280 = iVar1 << 4;
  return;
}



// Function: FUN_0001045e @ 0001045e

void FUN_0001045e(void)

{
  int iVar1;
  
  iVar1 = (DAT_000030e8 >> 4) + -0x30;
  if (iVar1 < 5) {
    iVar1 = 0;
  }
  if (0x96 < iVar1) {
    iVar1 = 0x96;
  }
  DAT_00003280 = iVar1 << 4;
  return;
}



// Function: FUN_00010464 @ 00010464

void FUN_00010464(void)

{
  int iVar1;
  
  iVar1 = (DAT_000030ec >> 4) + -0x30;
  if (iVar1 < 5) {
    iVar1 = 0;
  }
  if (0x96 < iVar1) {
    iVar1 = 0x96;
  }
  DAT_00003280 = iVar1 << 4;
  return;
}



// Function: FUN_0001046a @ 0001046a

void FUN_0001046a(void)

{
  int iVar1;
  
  iVar1 = (DAT_000030f0 >> 4) + -0x30;
  if (iVar1 < 5) {
    iVar1 = 0;
  }
  if (0x96 < iVar1) {
    iVar1 = 0x96;
  }
  DAT_00003280 = iVar1 << 4;
  return;
}



// Function: FUN_000104ee @ 000104ee

void FUN_000104ee(void)

{
  return;
}



// Function: FUN_000104f0 @ 000104f0

void FUN_000104f0(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = DAT_000030dc >> 4;
  if (uVar1 < 0x32) {
    iVar2 = 0x32;
  }
  else if (uVar1 < 0xc9) {
    iVar2 = (uVar1 / 5) * 5;
    if ((uVar1 % 5 != 3) && (uVar1 % 5 != 0xfffffffd)) {
      return;
    }
  }
  else {
    iVar2 = 200;
  }
  DAT_0000aed8 = iVar2 << 4;
  return;
}



// Function: FUN_000104f6 @ 000104f6

void FUN_000104f6(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = DAT_000030e8 >> 4;
  if (uVar1 < 0x32) {
    iVar2 = 0x32;
  }
  else if (uVar1 < 0xc9) {
    iVar2 = (uVar1 / 5) * 5;
    if ((uVar1 % 5 != 3) && (uVar1 % 5 != 0xfffffffd)) {
      return;
    }
  }
  else {
    iVar2 = 200;
  }
  DAT_0000aed8 = iVar2 << 4;
  return;
}



// Function: FUN_000104fc @ 000104fc

void FUN_000104fc(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = DAT_000030ec >> 4;
  if (uVar1 < 0x32) {
    iVar2 = 0x32;
  }
  else if (uVar1 < 0xc9) {
    iVar2 = (uVar1 / 5) * 5;
    if ((uVar1 % 5 != 3) && (uVar1 % 5 != 0xfffffffd)) {
      return;
    }
  }
  else {
    iVar2 = 200;
  }
  DAT_0000aed8 = iVar2 << 4;
  return;
}



// Function: FUN_00010502 @ 00010502

void FUN_00010502(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = DAT_000030f0 >> 4;
  if (uVar1 < 0x32) {
    iVar2 = 0x32;
  }
  else if (uVar1 < 0xc9) {
    iVar2 = (uVar1 / 5) * 5;
    if ((uVar1 % 5 != 3) && (uVar1 % 5 != 0xfffffffd)) {
      return;
    }
  }
  else {
    iVar2 = 200;
  }
  DAT_0000aed8 = iVar2 << 4;
  return;
}



// Function: FUN_00010892 @ 00010892

undefined8 FUN_00010892(void)

{
  undefined4 in_D0;
  short sVar1;
  undefined4 in_D1;
  short sVar2;
  
  for (sVar2 = 1; sVar2 < 0x19; sVar2 = sVar2 + 1) {
    sVar1 = (sVar2 + -1) * 0xc;
    if ((((int)*(undefined1 (*) [12])(&DAT_0000a8a6 + sVar1) != 0) &&
        ((int)*(undefined1 (*) [12])(&DAT_0000a9c6 + sVar1) != 0)) &&
       ((int)*(undefined1 (*) [12])(&DAT_0000a9c6 + sVar1) <
        (int)*(undefined1 (*) [12])(&DAT_0000a8a6 + sVar1))) {
      __m68k_trap(0xe);
    }
  }
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_000108f0 @ 000108f0

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000108f0(void)

{
  _DAT_01200070 = 0x3700;
  _DAT_01200072 = 0;
  _DAT_01200076 = 0;
  _DAT_01200078 = 0;
  _DAT_01200020 = 0;
  _DAT_01200024 = 0;
  _DAT_01300050 = 0;
  _DAT_0120006c = (undefined1 *)register0x0000003c;
  do {
    _DAT_01200024 = _DAT_01200024 & 0xfbff | 0x800;
    _DAT_01200028 = _DAT_01200028 + 1;
    _DAT_013000bc = 0x10;
    _DAT_013000b8 = 0x10;
    _DAT_0004d4fc = 0x10a7e;
    FUN_00010aae();
  } while( true );
}



// Function: FUN_00010aae @ 00010aae

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00010aae(void)

{
  ushort uVar1;
  
  if ((short)_DAT_01200020 < 0) {
    DAT_01200024 = DAT_01200024 & 0x7f;
    DAT_01200024 = DAT_01200024 | 0x40;
    _DAT_01200020 = _DAT_01200020 & 0x7fff;
    uVar1 = _DAT_01200020;
    if (0x17 < _DAT_01200020) {
      uVar1 = 0;
    }
    (*(code *)(&DAT_00010b02)[(short)uVar1])();
    DAT_01200024 = DAT_01200024 & 0xbf;
    DAT_01200024 = DAT_01200024 | 0x80;
  }
  return;
}



// Function: FUN_00010b62 @ 00010b62

void FUN_00010b62(void)

{
  return;
}



// Function: FUN_00010b64 @ 00010b64

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00010b64(void)

{
  undefined4 in_D0;
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = _DAT_01200022;
  if (0x20 < _DAT_01200022) {
    uVar1 = 0x20;
  }
  puVar2 = _DAT_01200080;
  puVar3 = (undefined4 *)&DAT_01200100;
  if (uVar1 == 0) {
    uVar1 = 0x20;
  }
  for (; 0 < (short)uVar1; uVar1 = uVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return in_D0;
}



// Function: FUN_00010ba0 @ 00010ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00010ba0(void)

{
  undefined4 in_D0;
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = _DAT_01200080;
  uVar1 = _DAT_01200022;
  if (0x20 < _DAT_01200022) {
    uVar1 = 0x20;
  }
  puVar3 = (undefined4 *)&DAT_01200100;
  if (uVar1 == 0) {
    *(undefined2 *)_DAT_01200080 = _DAT_01200100;
  }
  for (; 0 < (short)uVar1; uVar1 = uVar1 - 1) {
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return in_D0;
}



// Function: FUN_00010bda @ 00010bda

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00010bda(void)

{
  undefined4 in_D0;
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)&DAT_01200080;
  puVar3 = (undefined4 *)&DAT_01200100;
  sVar1 = _DAT_01200022;
  if (0x20 < _DAT_01200022) {
    sVar1 = 0x20;
  }
  for (; 0 < sVar1; sVar1 = sVar1 + -1) {
    *puVar3 = *(undefined4 *)*puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return in_D0;
}



// Function: FUN_00010c0e @ 00010c0e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00010c0e(void)

{
  undefined4 in_D0;
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)&DAT_01200080;
  puVar3 = (undefined4 *)&DAT_01200100;
  sVar1 = _DAT_01200022;
  if (0x20 < _DAT_01200022) {
    sVar1 = 0x20;
  }
  for (; 0 < sVar1; sVar1 = sVar1 + -1) {
    *(undefined4 *)*puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return in_D0;
}



// Function: FUN_00010e10 @ 00010e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00010e10(void)

{
  ushort uVar1;
  short *psVar2;
  undefined4 in_D0;
  undefined4 in_D1;
  
  psVar2 = _DAT_01200080;
  uVar1 = _DAT_01200022 & 0xf;
  *(short *)((short)uVar1 * 2 + 0x12001e0) = *_DAT_01200080;
  *psVar2 = uVar1 + 0x4e40;
  *(short **)((short)uVar1 * 4 + 0x12001a0) = psVar2;
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00010e50 @ 00010e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00010e50(void)

{
  ushort uVar1;
  undefined4 in_D0;
  
  uVar1 = _DAT_01200022 & 0xf;
  **(undefined2 **)((short)uVar1 * 4 + 0x12001a0) = *(undefined2 *)((short)uVar1 * 2 + 0x12001e0);
  *(undefined4 *)((short)uVar1 * 4 + 0x12001a0) = 0;
  *(undefined2 *)((short)uVar1 * 2 + 0x12001e0) = 0;
  return in_D0;
}



// Function: FUN_00011100 @ 00011100

undefined4 FUN_00011100(void)

{
  undefined4 in_D0;
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)&DAT_01200020; (int)puVar1 < 0x1200201; puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  return in_D0;
}



// Function: FUN_0001111c @ 0001111c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0001111c(void)

{
  undefined4 in_D0;
  uint uVar1;
  undefined4 in_D1;
  
  uVar1 = DAT_00007770 & _DAT_01300094;
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 0x20) == 0) {
      if ((uVar1 & 2) == 0) {
        if ((uVar1 & 0x10) == 0) {
          if ((uVar1 & 1) == 0) {
            if ((uVar1 & 0x80) != 0) {
              uVar1 = FUN_00011cc6();
            }
            if ((uVar1 & 4) != 0) {
              uVar1 = FUN_000113ce();
            }
            if ((uVar1 & 0x40) != 0) {
              FUN_0001145c();
            }
          }
          else {
            FUN_0001134c();
          }
        }
        else {
          FUN_000113da();
        }
      }
      else {
        FUN_0001138c();
      }
    }
    else {
      FUN_0001141a();
    }
  }
  else {
    FUN_00011b6a();
    DAT_00002b68 = DAT_00002b68 + 1;
    (*(code *)(PTR_FUN_000111d0 + (short)((ushort)DAT_00002b68 & 0x1f) * 4))();
  }
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_0001134c @ 0001134c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0001134c(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  if (DAT_0000301c == DAT_00003018) {
    DAT_00007770 = DAT_00007770 & 0xfffffffe;
    _DAT_01300094 = DAT_00007770;
  }
  else {
    _DAT_0130008c =
         CONCAT31((int3)((uint)in_D0 >> 8),*(undefined1 *)(DAT_00003014 + (short)DAT_0000301c));
    DAT_0000301c = _DAT_00003024 & DAT_0000301c + 1;
  }
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_0001138c @ 0001138c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0001138c(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  *(char *)(DAT_00003000 + (short)DAT_00003004) = (char)_DAT_0130008c;
  DAT_00003004 = _DAT_00003010 & DAT_00003004 + 1;
  if (((_DAT_01300084 & 0xf0) != 0) && (DAT_0000300c < 0xbad0)) {
    DAT_0000300c = DAT_0000300c + 2;
  }
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_000113ce @ 000113ce

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000113ce(void)

{
  _DAT_01300088 = 0x50;
  return;
}



// Function: FUN_000113da @ 000113da

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000113da(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  if (DAT_00003044 == DAT_00003040) {
    DAT_00007770 = DAT_00007770 & 0xffffffef;
    _DAT_01300094 = DAT_00007770;
  }
  else {
    _DAT_013000ac =
         CONCAT31((int3)((uint)in_D0 >> 8),*(undefined1 *)(DAT_0000303c + (short)DAT_00003044));
    DAT_00003044 = _DAT_0000304c & DAT_00003044 + 1;
  }
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_0001141a @ 0001141a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0001141a(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  *(char *)(DAT_00003028 + (short)DAT_0000302c) = (char)_DAT_013000ac;
  DAT_0000302c = _DAT_00003038 & DAT_0000302c + 1;
  if (((_DAT_013000a4 & 0xf0) != 0) && (DAT_00003034 < 0xbad0)) {
    DAT_00003034 = DAT_00003034 + 2;
  }
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_0001145c @ 0001145c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001145c(void)

{
  _DAT_013000a8 = 0x50;
  return;
}



// Function: FUN_00011468 @ 00011468

undefined8 FUN_00011468(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  FUN_00011bd0();
  puVar2 = (undefined4 *)((int)&DAT_00002708 + 2);
  iVar1 = 9;
  bVar4 = false;
  puVar3 = &DAT_000026e4;
  while (!bVar4) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 2;
    iVar1 = iVar1 + -1;
    puVar3 = puVar3 + 1;
    bVar4 = iVar1 == 0;
  }
  FUN_00011492();
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00011492 @ 00011492

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00011492(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  bool bVar17;
  
  if ((DAT_000031ed & 1) == 0) {
    _DAT_01300040 = 0x400;
    _DAT_01300044 = 0x400;
    _DAT_01300048 = 0x400;
    _DAT_0130004c = 0x400;
  }
  else {
    iVar7 = 4;
    bVar17 = false;
    piVar12 = &DAT_000027c8;
    piVar16 = &DAT_00002818;
    piVar10 = &DAT_000026e4;
    piVar11 = &DAT_00002778;
    piVar13 = &DAT_00002994;
    piVar14 = &DAT_000029a8;
    piVar15 = &DAT_00002ad0;
    while (!bVar17) {
      iVar5 = (*piVar16 + *piVar12) - *piVar10;
      iVar8 = *piVar11;
      *piVar11 = iVar5;
      *piVar15 = *piVar13 * (iVar5 - iVar8) + *piVar14 * iVar5;
      iVar7 = iVar7 + -1;
      piVar12 = piVar12 + 1;
      piVar16 = piVar16 + 1;
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
      piVar13 = piVar13 + 1;
      piVar14 = piVar14 + 1;
      piVar15 = piVar15 + 1;
      bVar17 = iVar7 == 0;
    }
    iVar7 = 4;
    bVar17 = false;
    piVar12 = &DAT_000027f0;
    piVar16 = &DAT_00002ad0;
    while (iVar6 = DAT_000027ac, iVar1 = DAT_000027a8, iVar5 = DAT_000027a4, iVar8 = DAT_000027a0,
          !bVar17) {
      *piVar16 = *piVar12 + *piVar16;
      iVar7 = iVar7 + -1;
      piVar12 = piVar12 + 1;
      piVar16 = piVar16 + 1;
      bVar17 = iVar7 == 0;
    }
    iVar2 = -DAT_000027a4;
    iVar7 = 4;
    bVar17 = false;
    piVar12 = &DAT_00002ad0;
    piVar16 = &DAT_00002778;
    piVar10 = &DAT_0000278c;
    piVar11 = &DAT_000027b4;
    while (!bVar17) {
      iVar3 = iVar6;
      if (*piVar11 == 0) {
        iVar3 = iVar8;
      }
      iVar3 = iVar3 * *piVar16;
      if (iVar3 < 0) {
        iVar3 = -(-iVar3 >> 8);
      }
      else {
        iVar3 = iVar3 >> 8;
      }
      iVar3 = *piVar10 + iVar3;
      if (iVar3 < 0) {
        iVar3 = iVar1 + iVar3;
        if (-1 < iVar3) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = iVar3 - iVar1;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
      }
      iVar4 = iVar5;
      if ((iVar3 <= iVar5) && (iVar4 = iVar3, iVar3 < iVar2)) {
        iVar4 = iVar2;
      }
      *piVar10 = iVar4;
      *piVar12 = iVar4 + *piVar12;
      iVar7 = iVar7 + -1;
      piVar12 = piVar12 + 1;
      piVar16 = piVar16 + 1;
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
      bVar17 = iVar7 == 0;
    }
    FUN_00011802();
    iVar7 = 0;
    if ((DAT_0000afc4 == 0) && (DAT_0000af9c < 4)) {
      iVar7 = 2;
    }
    piVar12 = &DAT_00002a98;
    if (DAT_0000afc4 == 0) {
      piVar16 = (int *)&DAT_01300100;
    }
    else {
      piVar16 = (int *)&DAT_01300040;
    }
    iVar8 = 4;
    bVar17 = false;
    piVar10 = &DAT_00002ad0;
    piVar11 = &DAT_000029bc;
    piVar13 = &DAT_0000282c;
    piVar14 = &DAT_00002840;
    while (!bVar17) {
      iVar5 = *piVar10;
      if (iVar5 < 0) {
        iVar5 = -(-iVar5 >> (iVar7 + *piVar11 & 0x3fU));
      }
      else {
        iVar5 = iVar5 >> (iVar7 + *piVar11 & 0x3fU);
      }
      if (iVar5 < 0) {
        if (-0x1e < iVar5) {
          iVar5 = *(int *)(&DAT_00011772 + iVar5 * 4);
        }
      }
      else if (iVar5 < 0x1e) {
        iVar5 = *(int *)(&DAT_00011772 + iVar5 * 4);
      }
      iVar5 = *piVar13 + iVar5;
      piVar15 = piVar12 + 1;
      iVar1 = *piVar12;
      piVar12 = piVar12 + 2;
      iVar6 = *piVar15;
      if ((iVar5 <= iVar6) && (iVar6 = iVar5, iVar5 < iVar1)) {
        iVar6 = iVar1;
      }
      *piVar14 = iVar6;
      *piVar16 = iVar6;
      iVar8 = iVar8 + -1;
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
      piVar13 = piVar13 + 1;
      piVar14 = piVar14 + 1;
      piVar16 = piVar16 + 1;
      bVar17 = iVar8 == 0;
    }
    if (DAT_000026e0 == 0) {
      iVar7 = (DAT_00002828 + DAT_000027d8) - DAT_000026f4;
      uVar9 = DAT_000029cc;
      if (DAT_0000af9c < 4) {
        uVar9 = DAT_000029cc - 2;
      }
      iVar8 = DAT_00002800 + DAT_000029a4 * (iVar7 - DAT_00002788) + DAT_000029b8 * iVar7 >>
              (uVar9 & 0x3f);
      DAT_00002788 = iVar7;
    }
    else {
      iVar8 = DAT_000028f4 * DAT_00003258 >> 0xc;
      if (3 < DAT_0000af9c) {
        iVar8 = DAT_000028f4 * DAT_00003258 >> 0xe;
      }
      DAT_00002788 = 0;
    }
    DAT_00002850 = DAT_0000283c + iVar8;
    if (SCARRY4(DAT_0000283c,iVar8) != DAT_00002850 < 0) {
      DAT_00002850 = 0;
    }
    if (DAT_0000af9c < 4) {
      if (0xffff < DAT_00002850) {
        DAT_00002850 = 0xffff;
      }
      _DAT_013001c0 = 0;
      _DAT_01300180 = DAT_00002850;
    }
    else {
      _DAT_01300110 = DAT_00002850;
      if (0x3fff < DAT_00002850) {
        DAT_00002850 = 0x3fff;
        _DAT_01300110 = DAT_00002850;
      }
    }
    _DAT_01300140 = 0;
  }
  DAT_000027c8 = DAT_000027dc + DAT_000027c8;
  DAT_000027cc = DAT_000027e0 + DAT_000027cc;
  DAT_000027d0 = DAT_000027e4 + DAT_000027d0;
  DAT_000027d4 = DAT_000027e8 + DAT_000027d4;
  DAT_000027d8 = DAT_000027ec + DAT_000027d8;
  return;
}



// Function: FUN_00011802 @ 00011802

void FUN_00011802(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  bool bVar16;
  
  iVar9 = DAT_00002acc;
  iVar8 = DAT_00002ac8;
  iVar7 = DAT_00002ac4;
  iVar6 = DAT_00002ac0;
  iVar10 = 4;
  bVar16 = false;
  piVar11 = &DAT_00002ad0;
  piVar12 = &DAT_00002ae0;
  piVar13 = &DAT_00002af0;
  piVar14 = &DAT_00002b00;
  piVar15 = &DAT_00002b10;
  while (!bVar16) {
    iVar1 = *piVar15;
    iVar2 = *piVar11;
    iVar3 = *piVar14;
    *piVar15 = iVar3;
    iVar4 = *piVar13;
    *piVar14 = iVar4;
    iVar5 = *piVar12;
    *piVar13 = iVar5;
    *piVar12 = *piVar11;
    *piVar11 = (((iVar2 - iVar9 * (iVar1 >> 8)) - iVar8 * (iVar3 >> 8)) - iVar7 * (iVar4 >> 8)) -
               iVar6 * (iVar5 >> 8);
    iVar10 = iVar10 + -1;
    piVar11 = piVar11 + 1;
    piVar12 = piVar12 + 1;
    piVar13 = piVar13 + 1;
    piVar14 = piVar14 + 1;
    piVar15 = piVar15 + 1;
    bVar16 = iVar10 == 0;
  }
  return;
}



// Function: FUN_00011918 @ 00011918

void FUN_00011918(void)

{
  uint uVar1;
  int iVar2;
  undefined4 in_D1;
  undefined4 unaff_D2;
  undefined4 unaff_D3;
  undefined4 unaff_D4;
  undefined4 unaff_D5;
  uint unaff_D6;
  int iVar3;
  uint *in_A0;
  int *in_A1;
  int *unaff_A2;
  int *unaff_A3;
  int *unaff_A4;
  uint *unaff_A5;
  int unaff_A6;
  
  uVar1 = *in_A0;
  if (*unaff_A5 != 0) {
    if ((int)uVar1 < 0) {
      uVar1 = -uVar1;
    }
    uVar1 = uVar1 / *unaff_A5;
    if ((-1 < (int)uVar1) && ((int)uVar1 < 0x101)) {
      uVar1 = *in_A0 + *(int *)(unaff_A6 + (short)uVar1 * 4);
    }
  }
  iVar3 = uVar1 - *in_A1;
  if (iVar3 < 0) {
    iVar2 = -(-iVar3 >> 3);
  }
  else {
    iVar2 = iVar3 >> 3;
  }
  *unaff_A2 = iVar2;
  if ((iVar2 != 0) && (DAT_00002818 = in_D1, iVar2 < 0)) {
    DAT_00002818 = 0;
  }
  iVar3 = *unaff_A4 * iVar3;
  if (iVar3 < 0) {
    iVar3 = -(-iVar3 >> (unaff_D6 & 0x3f));
  }
  else {
    iVar3 = iVar3 >> (unaff_D6 & 0x3f);
  }
  if (*unaff_A3 < 0) {
    if (-1 < iVar3) {
      DAT_000027b4 = DAT_000027b0;
    }
  }
  else if (iVar3 < 0) {
    DAT_000027b4 = DAT_000027b0;
  }
  DAT_000027b4 = DAT_000027b4 + -1;
  if (DAT_000027b4 < 0) {
    DAT_000027b4 = 0;
  }
  *unaff_A3 = iVar3;
  uVar1 = in_A0[1];
  if (unaff_A5[1] != 0) {
    if ((int)uVar1 < 0) {
      uVar1 = -uVar1;
    }
    uVar1 = uVar1 / unaff_A5[1];
    if ((-1 < (int)uVar1) && ((int)uVar1 < 0x101)) {
      uVar1 = in_A0[1] + *(int *)(unaff_A6 + 0x400 + (short)uVar1 * 4);
    }
  }
  if (DAT_0000c4ee != 0) {
    uVar1 = DAT_0000c4f2 + uVar1;
  }
  iVar3 = uVar1 - in_A1[1];
  if (iVar3 < 0) {
    iVar2 = -(-iVar3 >> 3);
  }
  else {
    iVar2 = iVar3 >> 3;
  }
  unaff_A2[1] = iVar2;
  if ((iVar2 != 0) && (DAT_0000281c = unaff_D2, iVar2 < 0)) {
    DAT_0000281c = 0;
  }
  iVar3 = unaff_A4[1] * iVar3;
  if (iVar3 < 0) {
    iVar3 = -(-iVar3 >> (unaff_D6 & 0x3f));
  }
  else {
    iVar3 = iVar3 >> (unaff_D6 & 0x3f);
  }
  if (unaff_A3[1] < 0) {
    if (-1 < iVar3) {
      DAT_000027b8 = DAT_000027b0;
    }
  }
  else if (iVar3 < 0) {
    DAT_000027b8 = DAT_000027b0;
  }
  DAT_000027b8 = DAT_000027b8 + -1;
  if (DAT_000027b8 < 0) {
    DAT_000027b8 = 0;
  }
  unaff_A3[1] = iVar3;
  uVar1 = in_A0[2];
  if (unaff_A5[2] != 0) {
    if ((int)uVar1 < 0) {
      uVar1 = -uVar1;
    }
    uVar1 = uVar1 / unaff_A5[2];
    if ((-1 < (int)uVar1) && ((int)uVar1 < 0x101)) {
      uVar1 = in_A0[2] + *(int *)(unaff_A6 + 0x800 + (short)uVar1 * 4);
    }
  }
  iVar3 = uVar1 - in_A1[2];
  if (iVar3 < 0) {
    iVar2 = -(-iVar3 >> 3);
  }
  else {
    iVar2 = iVar3 >> 3;
  }
  unaff_A2[2] = iVar2;
  if ((iVar2 != 0) && (DAT_00002820 = unaff_D3, iVar2 < 0)) {
    DAT_00002820 = 0;
  }
  iVar3 = unaff_A4[2] * iVar3;
  if (iVar3 < 0) {
    iVar3 = -(-iVar3 >> (unaff_D6 & 0x3f));
  }
  else {
    iVar3 = iVar3 >> (unaff_D6 & 0x3f);
  }
  if ((iVar3 < 0) && (DAT_00002d6c != 0)) {
    iVar3 = DAT_00002d6c * iVar3;
    if (iVar3 < 0) {
      iVar3 = -(-iVar3 >> 8);
    }
    else {
      iVar3 = iVar3 >> 8;
    }
  }
  if (unaff_A3[2] < 0) {
    if (-1 < iVar3) {
      DAT_000027bc = DAT_000027b0;
    }
  }
  else if (iVar3 < 0) {
    DAT_000027bc = DAT_000027b0;
  }
  DAT_000027bc = DAT_000027bc + -1;
  if (DAT_000027bc < 0) {
    DAT_000027bc = 0;
  }
  unaff_A3[2] = iVar3;
  uVar1 = in_A0[3];
  if (unaff_A5[3] != 0) {
    if ((int)uVar1 < 0) {
      uVar1 = -uVar1;
    }
    uVar1 = uVar1 / unaff_A5[3];
    if ((-1 < (int)uVar1) && ((int)uVar1 < 0x101)) {
      uVar1 = in_A0[3] + *(int *)(unaff_A6 + 0xc00 + (short)uVar1 * 4);
    }
  }
  iVar3 = uVar1 - in_A1[3];
  if (iVar3 < 0) {
    iVar2 = -(-iVar3 >> 3);
  }
  else {
    iVar2 = iVar3 >> 3;
  }
  unaff_A2[3] = iVar2;
  if ((iVar2 != 0) && (DAT_00002824 = unaff_D4, iVar2 < 0)) {
    DAT_00002824 = 0;
  }
  iVar3 = unaff_A4[3] * iVar3;
  if (iVar3 < 0) {
    iVar3 = -(-iVar3 >> (unaff_D6 & 0x3f));
  }
  else {
    iVar3 = iVar3 >> (unaff_D6 & 0x3f);
  }
  if (unaff_A3[3] < 0) {
    if (-1 < iVar3) {
      DAT_000027c0 = DAT_000027b0;
    }
  }
  else if (iVar3 < 0) {
    DAT_000027c0 = DAT_000027b0;
  }
  DAT_000027c0 = DAT_000027c0 + -1;
  if (DAT_000027c0 < 0) {
    DAT_000027c0 = 0;
  }
  unaff_A3[3] = iVar3;
  uVar1 = in_A0[4];
  iVar3 = in_A1[4];
  iVar2 = (int)(uVar1 - iVar3) >> 3;
  unaff_A2[4] = iVar2;
  if ((iVar2 != 0) && (DAT_00002828 = unaff_D5, iVar2 < 0)) {
    DAT_00002828 = 0;
  }
  unaff_A3[4] = (int)((unaff_A4[4] * DAT_0000325c >> 4) * (uVar1 - iVar3)) >> (unaff_D6 & 0x3f);
  return;
}



// Function: FUN_00011b6a @ 00011b6a

undefined8 FUN_00011b6a(void)

{
  undefined4 uVar1;
  undefined4 in_D0;
  int iVar2;
  undefined4 in_D1;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  bool bVar8;
  
  iVar3 = 6;
  bVar8 = false;
  piVar4 = &DAT_00002878;
  piVar5 = &DAT_00002854;
  puVar6 = (undefined4 *)&DAT_01300004;
  piVar7 = &DAT_0000289c;
  while (!bVar8) {
    uVar1 = *puVar6;
    iVar2 = (int)(char)((char)uVar1 - (char)*piVar4);
    *piVar5 = iVar2;
    *piVar7 = iVar2 + *piVar7;
    *piVar4 = (int)(char)uVar1;
    iVar3 = iVar3 + -1;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
    puVar6 = puVar6 + 1;
    piVar7 = piVar7 + 1;
    bVar8 = iVar3 == 0;
  }
  if (DAT_0000af9c == 4) {
    iVar3 = 3;
    bVar8 = false;
    puVar6 = (undefined4 *)&DAT_01300184;
    while (!bVar8) {
      uVar1 = *puVar6;
      iVar2 = (int)(char)((char)uVar1 - (char)*piVar4);
      *piVar5 = iVar2;
      *piVar7 = iVar2 + *piVar7;
      *piVar4 = (int)(char)uVar1;
      iVar3 = iVar3 + -1;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
      puVar6 = puVar6 + 1;
      piVar7 = piVar7 + 1;
      bVar8 = iVar3 == 0;
    }
  }
  DAT_000028d4 = DAT_00002864 + DAT_000028d4;
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00011bd0 @ 00011bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00011bd0(void)

{
  int iVar1;
  undefined4 in_D0;
  ushort uVar2;
  undefined4 in_D1;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong *plVar6;
  bool bVar7;
  
  uVar2 = (ushort)((ulonglong)((longlong)DAT_00002930 * (longlong)DAT_000028ac) >> 0x10);
  DAT_00002b20 = DAT_00002b20 +
                 (CONCAT22(uVar2,(short)((ulonglong)
                                         ((longlong)DAT_00002930 * (longlong)DAT_000028ac) >> 0x20))
                  << 0x10 | (uint)uVar2);
  if (DAT_00002b20 < 360000) {
    if (DAT_00002b20 < -359999) {
      DAT_00002b20 = DAT_00002b20 + 360000;
    }
  }
  else {
    DAT_00002b20 = DAT_00002b20 + -360000;
  }
  piVar4 = &DAT_0000289c;
  piVar5 = &DAT_00002920;
  plVar6 = (longlong *)&DAT_00002708;
  if (DAT_0000af9c == 4) {
    iVar3 = 9;
    bVar7 = false;
  }
  else {
    iVar3 = 6;
    bVar7 = false;
  }
  while (!bVar7) {
    iVar1 = *piVar4;
    *piVar4 = 0;
    *plVar6 = (longlong)*piVar5 * (longlong)iVar1 + *plVar6;
    plVar6 = plVar6 + 1;
    iVar3 = iVar3 + -1;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
    bVar7 = iVar3 == 0;
  }
  if (DAT_000026e0 != 0) {
    DAT_00002728._0_2_ = 0;
    DAT_00002728._2_2_ = 0;
    DAT_0000272c._0_2_ = 0;
    DAT_0000272c._2_2_ = 0;
    if ((DAT_00007784 & 4) == 0) {
      DAT_00002760 = 0;
      DAT_00002774 = 0;
      DAT_000027d8 = 0;
      DAT_000026f4 = 0;
      DAT_000027ec = 0;
      DAT_00002788 = 0;
      DAT_00002828 = 0;
      DAT_00000c9c = 0;
      DAT_00000ca0 = 0;
      DAT_00000ca4 = 0;
      DAT_00000c48 = 0;
      _DAT_00000c4c = 0;
      _DAT_00000c50 = 0;
      DAT_00000e4c = 0;
      _DAT_00000e50 = 0;
      _DAT_00000e54 = 0;
    }
  }
  if ((ushort)((uint)(_DAT_0000af58 << 0xc) >> 0x1c) == 0xf) {
    ram0x0000270a = DAT_00002750;
    ram0x00002712 = DAT_00002754;
    ram0x0000271a = DAT_00002758;
    ram0x00002722 = DAT_0000275c;
    DAT_00002728._2_2_ = (undefined2)((uint)DAT_00002760 >> 0x10);
    DAT_0000272c._0_2_ = (undefined2)DAT_00002760;
  }
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00011cc6 @ 00011cc6

undefined4 FUN_00011cc6(void)

{
  undefined4 in_D0;
  
  return in_D0;
}



// Function: FUN_00011cd6 @ 00011cd6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00011cd6(void)

{
  undefined4 in_D0;
  
  _DAT_013000bc = 4;
  FUN_00011b6a();
  FUN_00011bd0();
  DAT_00000e70 = ram0x0000270a;
  DAT_00000e74 = ram0x00002712;
  DAT_00000e78 = ram0x0000271a;
  DAT_00000e7c = ram0x00002722;
  DAT_00000bd9 = DAT_00000bd9 | 0x20;
  return in_D0;
}



// Function: FUN_00011d0c @ 00011d0c

void FUN_00011d0c(void)

{
  DAT_000030d8 = DAT_000030d8 + 1 & 7;
  *(uint *)(&DAT_00003098 + (short)DAT_000030d8 * 4) =
       *(uint *)(&DAT_013000c0 + (short)DAT_000030d8 * 4) & 0xff;
  return;
}



// Function: FUN_00011d36 @ 00011d36

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00011d36(void)

{
  *(uint *)(&DAT_00003098 + (short)DAT_000030d8 * 4) = _DAT_013000c0 & 0xff;
  *(uint *)(&DAT_000030b8 + (short)DAT_000030d8 * 4) = _DAT_013000c0 >> 8 & 0xff;
  DAT_000030d8 = DAT_000030d8 + 1 & 7;
  _DAT_013000c0 = *(undefined4 *)(&DAT_00011d7c + (short)DAT_000030d8 * 4);
  return;
}



// Function: FUN_00011e66 @ 00011e66

undefined8 FUN_00011e66(void)

{
  undefined4 in_D0;
  int iVar1;
  undefined4 in_D1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_00002a1c - (DAT_00002a94 * DAT_00002a1c) / 0x400;
  DAT_00002a20 = ((DAT_00002a08 * iVar1) / DAT_000029f4) / 0x3c;
  if (DAT_00002a20 == 0) {
    DAT_00002a20 = 1;
  }
  DAT_00002a24 = ((DAT_00002a0c * iVar1) / DAT_000029f8) / 0x3c;
  if (DAT_00002a24 == 0) {
    DAT_00002a24 = 1;
  }
  DAT_00002a28 = ((DAT_00002a10 * iVar1) / DAT_000029fc) / 0x3c;
  if (DAT_00002a28 == 0) {
    DAT_00002a28 = 1;
  }
  DAT_00002a2c = ((DAT_00002a14 * iVar1) / DAT_00002a00) / 0x3c;
  if (DAT_00002a2c == 0) {
    DAT_00002a2c = 1;
  }
  iVar1 = ((DAT_00002a08 * DAT_00002a1c) / DAT_000029f4) / 0x3c;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  iVar2 = ((DAT_00002a0c * DAT_00002a1c) / DAT_000029f8) / 0x3c;
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  iVar3 = ((DAT_00002a10 * DAT_00002a1c) / DAT_000029fc) / 0x3c;
  if (iVar3 == 0) {
    iVar3 = 1;
  }
  iVar4 = ((DAT_00002a14 * DAT_00002a1c) / DAT_00002a00) / 0x3c;
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  DAT_00002a30 = 0x40000 / iVar1;
  DAT_00002a34 = 0x40000 / iVar2;
  DAT_00002a38 = 0x40000 / iVar3;
  DAT_00002a3c = 0x40000 / iVar4;
  iVar1 = DAT_00002a08;
  if (DAT_00002a08 == 0) {
    iVar1 = 2000;
  }
  iVar2 = DAT_00002a0c;
  if (DAT_00002a0c == 0) {
    iVar2 = 2000;
  }
  iVar3 = DAT_00002a10;
  if (DAT_00002a10 == 0) {
    iVar3 = 2000;
  }
  iVar4 = DAT_00002a14;
  if (DAT_00002a14 == 0) {
    iVar4 = 2000;
  }
  DAT_00002b38 = 60000 / iVar1;
  DAT_00002b3c = 60000 / iVar2;
  DAT_00002b40 = 60000 / iVar3;
  DAT_00002b44 = 60000 / iVar4;
  DAT_00002a90 = (DAT_00002a1c << 8) / 0x400;
  FUN_000121fa();
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00011fd6 @ 00011fd6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00011fd6(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  DAT_00002840 = DAT_0000282c;
  DAT_00002844 = DAT_00002830;
  DAT_00002848 = DAT_00002834;
  DAT_0000284c = DAT_00002838;
  DAT_00002850 = DAT_0000283c;
  if (DAT_0000af9c < 4) {
    _DAT_01300180 = DAT_0000283c;
    _DAT_013001c0 = 0;
  }
  else {
    _DAT_01300110 = DAT_0000283c;
    _DAT_01300114 = 0x2000;
    _DAT_01300118 = 0x2000;
    _DAT_0130011c = 0x2000;
  }
  _DAT_01300140 = 0;
  _DAT_0130010c = DAT_00002838;
  _DAT_01300108 = DAT_00002834;
  _DAT_01300104 = DAT_00002830;
  _DAT_01300100 = DAT_0000282c;
  if (0 < DAT_0000afc4) {
    _DAT_01300040 = DAT_0000282c;
    _DAT_01300044 = DAT_00002830;
    _DAT_01300048 = DAT_00002834;
    _DAT_0130004c = DAT_00002838;
  }
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00012064 @ 00012064

undefined8 FUN_00012064(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  DAT_00002920 = DAT_000028fc + DAT_00001014 * 0x10000;
  DAT_00002924 = DAT_00002900 + DAT_00001018 * 0x10000;
  DAT_00002928 = DAT_00002904 + DAT_0000101c * 0x10000;
  DAT_0000292c = DAT_00002908 + DAT_00001020 * 0x10000 >> 2;
  DAT_00002930 = DAT_0000290c + DAT_00001024 * 0x10000;
  DAT_00002934 = DAT_00002910 + DAT_00001028 * 0x10000;
  DAT_00002938 = DAT_00002914 + DAT_0000102c * 0x10000;
  DAT_0000293c = DAT_00002918 + DAT_00001030 * 0x10000;
  DAT_00002940 = DAT_0000291c + DAT_00001034 * 0x10000;
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_000120c8 @ 000120c8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000120c8(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  if (DAT_0000af9c < 4) {
    DAT_0000282c = 0x800;
    DAT_0000283c = 0x8000;
  }
  else {
    DAT_0000282c = 0x2000;
    DAT_0000283c = 0x2000;
  }
  if (0 < DAT_0000afc4) {
    DAT_0000282c = 0x400;
  }
  DAT_00002830 = DAT_0000282c;
  DAT_00002834 = DAT_0000282c;
  DAT_00002838 = DAT_0000282c;
  FUN_00011fd6();
  _DAT_013000b8 = 1;
  DAT_000028f4 = 500;
  DAT_000028e0 = 0x78;
  DAT_00002920 = DAT_00001014 << 0x10;
  DAT_00002924 = DAT_00001018 << 0x10;
  DAT_00002928 = DAT_0000101c << 0x10;
  DAT_0000292c = DAT_00001020 << 0x10;
  DAT_00002930 = DAT_00001024 << 0x10;
  DAT_00002934 = DAT_00001028 << 0x10;
  DAT_00002938 = DAT_00001028 << 0x10;
  DAT_0000293c = DAT_00001028 << 0x10;
  DAT_00002940 = DAT_00001028 << 0x10;
  DAT_000026e0 = 1;
  DAT_000029f4 = 0x1f;
  DAT_000029f8 = 0x1f;
  DAT_000029fc = 0x1f;
  DAT_00002a00 = 0x1f;
  DAT_00002a04 = 0x1f;
  if (DAT_0000afc4 < 1) {
    DAT_00002a08 = 0xfa;
  }
  else {
    DAT_00002a08 = 2000;
  }
  DAT_00002a1c = 0x6e;
  DAT_00002a94 = 0x20;
  DAT_00002a70 = 0x78;
  DAT_00002a74 = 0x78;
  DAT_00002a78 = 0x78;
  DAT_00002a7c = 0x78;
  DAT_00002a0c = DAT_00002a08;
  DAT_00002a10 = DAT_00002a08;
  DAT_00002a14 = DAT_00002a08;
  DAT_00002a18 = DAT_00002a08;
  FUN_000121fa();
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_000121fa @ 000121fa

undefined4 FUN_000121fa(void)

{
  longdouble lVar1;
  undefined4 in_D0;
  int iVar2;
  int *piVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;
  longdouble lVar7;
  
  piVar3 = &DAT_00002b6c;
  iVar2 = 0;
  if (DAT_00002a1c < 200) {
    lVar4 = (longdouble)flog10((longdouble)1.65);
    lVar5 = (longdouble)0.0;
    lVar7 = (longdouble)750.0;
  }
  else {
    lVar4 = (longdouble)flog10((longdouble)1.6);
    lVar5 = (longdouble)0.0;
    lVar7 = (longdouble)850.0;
  }
  for (; iVar2 < 0x80; iVar2 = iVar2 + 1) {
    lVar6 = (longdouble)ftentox((lVar5 / lVar7) * lVar4);
    lVar1 = lVar6 - (longdouble)5.0;
    if (lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1) {
      lVar6 = (longdouble)5.0;
    }
    *piVar3 = (int)(lVar6 * (longdouble)256.0);
    lVar5 = lVar5 + (longdouble)32.0;
    piVar3 = piVar3 + 1;
  }
  return in_D0;
}



// Function: FUN_000122b2 @ 000122b2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000122b2(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  _DAT_012007c4 = _DAT_01200028;
  _DAT_01200780 = _DAT_01200028;
  piVar3 = &DAT_000026e4;
  piVar4 = &DAT_00002b58;
  piVar5 = (int *)&DAT_01200794;
  piVar7 = (int *)&DAT_01200784;
  for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
    iVar1 = *piVar3;
    *piVar5 = iVar1 - *piVar4;
    *piVar4 = iVar1;
    *piVar7 = iVar1;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
    piVar7 = piVar7 + 1;
  }
  piVar3 = &DAT_000027dc;
  piVar4 = (int *)&DAT_012007b4;
  puVar6 = &DAT_00002778;
  puVar8 = (undefined4 *)&DAT_012007a4;
  for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
    *piVar4 = *piVar3 << 3;
    *puVar8 = *puVar6;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  _DAT_012007b0 = DAT_00000588;
  return;
}



// Function: FUN_00012328 @ 00012328

undefined4 FUN_00012328(void)

{
  code *pcVar1;
  undefined4 in_D0;
  
  if (*DAT_00003094 == (undefined *)0x0) {
    if ((DAT_0000c547 & 1) == 0) {
      DAT_00003094 = &PTR_FUN_00012368;
    }
    else {
      DAT_00003094 = &PTR_FUN_00012430;
    }
  }
  pcVar1 = (code *)*DAT_00003094;
  DAT_00003094 = DAT_00003094 + 5;
  (*pcVar1)();
  return in_D0;
}



// Function: FUN_00012518 @ 00012518

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00012518(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  FUN_00012688();
  if ((_DAT_01300200 & 0x200) == 0) {
    DAT_000031e5 = DAT_000031e5 & 0x7f;
  }
  else {
    DAT_000031e5 = DAT_000031e5 | 0x80;
  }
  if (DAT_0000c5c8 == 0) {
    DAT_0000c5c8 = DAT_00007778 + 2;
  }
  else if (DAT_0000c5c8 <= DAT_00007778) {
    FUN_00012720();
    FUN_000135f6();
  }
  FUN_00013628();
  if ((ushort)((uint)_DAT_0000af58 >> 0x1c) != 0) {
    FUN_0001365a();
  }
  FUN_00012592();
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00012592 @ 00012592

undefined8 FUN_00012592(void)

{
  byte bVar1;
  undefined4 in_D0;
  undefined4 in_D1;
  int iVar2;
  char cVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  iVar2 = (uint)(byte)(DAT_00003068 & 0xf | DAT_00003067 << 4) << 4;
  iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),DAT_00003069 & 0xf | (byte)iVar2) << 4;
  iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),DAT_0000306a & 0xf | (byte)iVar2) << 4;
  iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),DAT_0000306b & 0xf | (byte)iVar2) << 4;
  iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),DAT_0000306c & 0xf | (byte)iVar2) << 4;
  iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),DAT_0000306d & 0xf | (byte)iVar2) << 4;
  DAT_00003248 = CONCAT31((int3)((uint)iVar2 >> 8),DAT_0000306e & 0xf | (byte)iVar2);
  iVar2 = (uint)(byte)(DAT_00003070 & 0xf | DAT_0000306f << 4) << 4;
  iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),DAT_00003071 & 0xf | (byte)iVar2) << 4;
  iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),DAT_00003072 & 0xf | (byte)iVar2) << 4;
  iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),DAT_00003073 & 0xf | (byte)iVar2) << 4;
  iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),DAT_00003074 & 0xf | (byte)iVar2) << 4;
  iVar2 = CONCAT31((int3)((uint)iVar2 >> 8),DAT_00003075 & 0xf | (byte)iVar2) << 4;
  DAT_0000324c = CONCAT31((int3)((uint)iVar2 >> 8),DAT_00003076 & 0xf | (byte)iVar2);
  pbVar4 = &DAT_00003077;
  iVar2 = 7;
  for (cVar3 = '\0'; cVar3 < '\b'; cVar3 = cVar3 + '\x01') {
    bVar1 = (&DAT_00003218)[iVar2];
    pbVar5 = pbVar4 + 1;
    *pbVar4 = bVar1 >> 4;
    pbVar4 = pbVar4 + 2;
    *pbVar5 = bVar1 & 0xf;
    iVar2 = iVar2 + -1;
  }
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00012688 @ 00012688

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00012688(void)

{
  ushort uVar1;
  undefined4 in_D0;
  ushort uVar2;
  undefined4 in_D1;
  
  uVar2 = (ushort)_DAT_01300200;
  if (DAT_0000af9c < 4) {
    uVar2 = uVar2 & 0x3ff;
  }
  uVar1 = (ushort)((_DAT_013000b4 & 0x60) << 5);
  _DAT_00003050 =
       (_DAT_0000305a | DAT_00003058 | DAT_00003056 | DAT_00003054 | DAT_00003052 | uVar1 | uVar2) &
       (_DAT_0000305a & DAT_00003058 & DAT_00003056 & DAT_00003054 & DAT_00003052 & (uVar1 | uVar2)
       | uVar1 | uVar2);
  _DAT_0000305a = DAT_00003058;
  DAT_00003058 = DAT_00003056;
  DAT_00003056 = DAT_00003054;
  DAT_00003054 = DAT_00003052;
  DAT_00003052 = _DAT_00003050;
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00012720 @ 00012720

void FUN_00012720(void)

{
  FUN_00012862();
  FUN_00036a30();
  return;
}



// Function: FUN_00012862 @ 00012862

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00012862(void)

{
  ushort uVar1;
  
  DAT_0000310a = DAT_000031e4;
  if ((ushort)((uint)(_DAT_0000af58 << 0xc) >> 0x1c) == 0xf) {
    FUN_00015d74();
    return;
  }
  uVar1 = (ushort)((uint)_DAT_0000af58 >> 0x1c);
  if (uVar1 == 5) {
    FUN_000128ae();
  }
  else if (uVar1 == 3) {
    FUN_0001314a();
  }
  else {
    __m68k_trap(0xe);
  }
  return;
}



// Function: FUN_000128ae @ 000128ae

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000128ae(void)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  
  if ((DAT_00003051 & 1) == 0) {
    DAT_000031e8 = DAT_000031e8 & 0xbf;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 0x40;
  }
  if ((DAT_00003051 & 2) == 0) {
    DAT_000031e8 = DAT_000031e8 & 0x7f;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 0x80;
  }
  if ((DAT_00003051 & 4) == 0) {
    DAT_000031e8 = DAT_000031e8 & 0xdf;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 0x20;
  }
  if ((DAT_00003051 & 8) == 0) {
    DAT_000031e8 = DAT_000031e8 & 0xef;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 0x10;
  }
  uVar1 = (ushort)((uint)(_DAT_0000af58 << 0xc) >> 0x1c);
  if (uVar1 == 0) {
    bVar2 = (DAT_00003051 & 0x10) != 0;
    if (bVar2) {
      DAT_000031e2 = DAT_000031e2 & 0xfe;
    }
    else {
      DAT_000031e2 = DAT_000031e2 | 1;
    }
    bVar2 = !bVar2;
    if ((DAT_00003051 & 0x20) == 0) {
      DAT_00003252 = DAT_00003252 & 0xfb;
    }
    else {
      DAT_00003252 = DAT_00003252 | 4;
    }
    if ((DAT_00003051 & 0x20) == 0) {
      DAT_00003252 = DAT_00003252 & 0xfe;
    }
    else {
      DAT_00003252 = DAT_00003252 | 1;
    }
    if ((DAT_00003051 & 0x40) == 0) {
      DAT_000031e5 = DAT_000031e5 & 0xfe;
    }
    else {
      DAT_000031e5 = DAT_000031e5 | 1;
    }
    if ((DAT_00003051 & 0x80) == 0) {
      DAT_000031e5 = DAT_000031e5 & 0xfd;
    }
    else {
      DAT_000031e5 = DAT_000031e5 | 2;
    }
    if ((DAT_00003050 & 1) == 0) {
      DAT_000031e5 = DAT_000031e5 & 0xfb;
    }
    else {
      DAT_000031e5 = DAT_000031e5 | 4;
    }
    if ((DAT_00003050 & 8) == 0) {
      DAT_000031e6 = DAT_000031e6 & 0xfd;
    }
    else {
      DAT_000031e6 = DAT_000031e6 | 2;
    }
  }
  else {
    if ((DAT_00003051 & 0x10) == 0) {
      DAT_000031e8 = DAT_000031e8 & 0xfe;
    }
    else {
      DAT_000031e8 = DAT_000031e8 | 1;
    }
    if ((DAT_00003051 & 0x20) == 0) {
      DAT_000031ea = DAT_000031ea & 0xf7;
    }
    else {
      DAT_000031ea = DAT_000031ea | 8;
    }
    bVar2 = ((byte)DAT_00003248 & 0x40) != 0;
    if (bVar2) {
      DAT_000031e2 = DAT_000031e2 & 0xfe;
    }
    else {
      DAT_000031e2 = DAT_000031e2 | 1;
    }
    bVar2 = !bVar2;
    if (((byte)DAT_00003248 & 0x80) == 0) {
      DAT_000031e2 = DAT_000031e2 | 2;
    }
    else {
      DAT_000031e2 = DAT_000031e2 & 0xfd;
    }
    if ((DAT_00003248._2_1_ & 1) == 0) {
      DAT_000031e6 = DAT_000031e6 | 2;
    }
    else {
      DAT_000031e6 = DAT_000031e6 & 0xfd;
    }
    if ((DAT_00003248._2_1_ & 0x80) == 0) {
      DAT_000031e5 = DAT_000031e5 & 0xfe;
    }
    else {
      DAT_000031e5 = DAT_000031e5 | 1;
    }
    if ((DAT_00003248._1_1_ & 1) == 0) {
      DAT_000031e5 = DAT_000031e5 & 0xfd;
    }
    else {
      DAT_000031e5 = DAT_000031e5 | 2;
    }
    if ((DAT_00003248._1_1_ & 2) == 0) {
      DAT_000031e5 = DAT_000031e5 & 0xfb;
    }
    else {
      DAT_000031e5 = DAT_000031e5 | 4;
    }
    if ((DAT_00003248._0_1_ & 8) == 0) {
      DAT_000031e7 = DAT_000031e7 & 0xfe;
    }
    else {
      DAT_000031e7 = DAT_000031e7 | 1;
    }
    if ((DAT_000031e7 & 1) == 0) {
      DAT_00003220._0_1_ = DAT_00003220._0_1_ & 0xf7;
    }
    else {
      DAT_00003220._0_1_ = DAT_00003220._0_1_ | 8;
    }
  }
  if ((DAT_0000c536._2_1_ & 1) == 0) {
    DAT_00007784 = DAT_00007784 & 0xfe;
  }
  else {
    DAT_00007784 = DAT_00007784 | 1;
  }
  if (((byte)DAT_0000c536 & 0x80) == 0) {
    DAT_0000aefb = DAT_0000aefb & 0xfd;
  }
  else {
    DAT_0000aefb = DAT_0000aefb | 2;
  }
  if (DAT_000030fc < 1) {
    DAT_000030fc = 0;
  }
  else {
    DAT_000030fc = DAT_000030fc + -1;
  }
  if (DAT_00003100 < 1) {
    DAT_00003100 = 0;
  }
  else {
    DAT_00003100 = DAT_00003100 + -1;
  }
  if (((DAT_000031ed & 1) != 0) && ((DAT_00003109 & 1) == 0)) {
    DAT_000030fc = 0x10;
  }
  if ((DAT_000031ed & 1) == 0) {
    DAT_000031e3 = 0;
    DAT_00003250 = DAT_00003250 & 0xfe;
    DAT_000031e0 = DAT_000031e0 & 0xf8;
    DAT_00003252 = DAT_00003252 & 0xfa;
    DAT_000031e4 = DAT_000031e4 & 0xfa;
    bVar3 = false;
  }
  else if (DAT_000030fc == 0) {
    DAT_000031ed = DAT_000031ed & 0x7f;
    if ((DAT_0000c547 & 2) == 0) {
      if (uVar1 == 0) {
        if ((DAT_00003050 & 4) == 0) {
          DAT_000031e3 = DAT_000031e3 | 1;
        }
        else {
          DAT_000031e3 = DAT_000031e3 & 0xfe;
        }
        if ((DAT_00003050 & 4) == 0) {
          DAT_000031e3 = DAT_000031e3 | 2;
        }
        else {
          DAT_000031e3 = DAT_000031e3 & 0xfd;
        }
        if ((DAT_00003050 & 4) == 0) {
          DAT_000031e3 = DAT_000031e3 | 4;
        }
        else {
          DAT_000031e3 = DAT_000031e3 & 0xfb;
        }
      }
      else {
        if ((DAT_00003248._2_1_ & 8) == 0) {
          DAT_000031e3 = DAT_000031e3 | 1;
        }
        else {
          DAT_000031e3 = DAT_000031e3 & 0xfe;
        }
        if ((DAT_00003248._2_1_ & 8) == 0) {
          DAT_000031e3 = DAT_000031e3 | 2;
        }
        else {
          DAT_000031e3 = DAT_000031e3 & 0xfd;
        }
        if ((DAT_00003248._2_1_ & 8) == 0) {
          DAT_000031e3 = DAT_000031e3 | 4;
        }
        else {
          DAT_000031e3 = DAT_000031e3 & 0xfb;
        }
        if ((DAT_00003248._0_1_ & 4) == 0) {
          DAT_000031e0 = DAT_000031e0 | 4;
        }
        else {
          DAT_000031e0 = DAT_000031e0 & 0xfb;
        }
      }
      if ((DAT_0000c547 & 0x80) != 0) {
        if ((DAT_00003248._1_1_ & 0x10) == 0) {
          DAT_000031e4 = DAT_000031e4 & 0xfb;
        }
        else {
          DAT_000031e4 = DAT_000031e4 | 4;
        }
        if ((DAT_000031e4 & 4) == 0) {
          DAT_000031e3 = DAT_000031e3 & 0xf7;
        }
        else if ((DAT_00003248._1_1_ & 8) == 0) {
          DAT_000031e3 = DAT_000031e3 | 8;
        }
        else {
          DAT_000031e3 = DAT_000031e3 & 0xf7;
        }
      }
    }
    if (uVar1 == 0) {
      bVar3 = (DAT_00003050 & 4) != 0;
      if (bVar3) {
        DAT_000031e4 = DAT_000031e4 & 0xfe;
      }
      else {
        DAT_000031e4 = DAT_000031e4 | 1;
      }
      bVar3 = !bVar3;
    }
    else if ((DAT_00003248._0_1_ & 4) == 0) {
      DAT_000031e4 = DAT_000031e4 & 0xfe;
      bVar3 = false;
    }
    else {
      DAT_000031e4 = DAT_000031e4 | 1;
      bVar3 = true;
    }
    if ((bVar3) && ((DAT_0000310a & 1) == 0)) {
      DAT_00003100 = DAT_0000c5c2;
    }
  }
  else {
    DAT_000031e3 = 0;
    DAT_00003250 = DAT_00003250 & 0xfe;
    DAT_000031e0 = DAT_000031e0 & 0xf8;
    DAT_00003252 = DAT_00003252 & 0xfa;
    DAT_000031e4 = DAT_000031e4 & 0xfa;
    bVar3 = false;
  }
  DAT_00003109 = DAT_000031ed;
  if (DAT_00003104 < 1) {
    DAT_00003104 = 0;
  }
  else {
    DAT_00003104 = DAT_00003104 + -1;
  }
  if (((DAT_00003250 & 1) != 0) && ((DAT_00003108 & 1) == 0)) {
    DAT_00003104 = 0xc;
  }
  DAT_00003108 = DAT_00003250;
  if (bVar2) {
    DAT_000031e2 = DAT_000031e2 & 0xfd;
    DAT_000031e1 = DAT_000031e1 & 0xf8;
    DAT_000031e3 = DAT_000031e3 & 0xf8;
    DAT_000031e0 = DAT_000031e0 & 0xfb;
  }
  else if ((DAT_000031e2 & 2) == 0) {
    if ((DAT_000031e1 & 4) == 0) {
      if ((DAT_000031e1 & 1) == 0) {
        if ((DAT_000031e1 & 2) != 0) {
          DAT_000031e3 = DAT_000031e3 & 0xf8;
        }
      }
      else {
        DAT_000031e1 = DAT_000031e1 & 0xfd;
        DAT_000031e3 = DAT_000031e3 & 0xf8;
      }
    }
    else {
      DAT_000031e1 = DAT_000031e1 & 0xfc;
      DAT_000031e3 = DAT_000031e3 & 0xf8;
    }
  }
  else {
    DAT_000031e1 = DAT_000031e1 & 0xf8;
    DAT_000031e3 = DAT_000031e3 & 0xf8;
    DAT_000031e0 = DAT_000031e0 & 0xfb;
  }
  if (DAT_000031e1 == 0) {
    DAT_000031e0 = DAT_000031e0 & 0x7f;
  }
  else {
    DAT_000031e0 = DAT_000031e0 | 0x80;
  }
  if (DAT_000031e3 == 0) {
    DAT_000031e0 = DAT_000031e0 & 0xfe;
  }
  else {
    DAT_000031e0 = DAT_000031e0 | 1;
  }
  if ((DAT_000031ed & 1) == 0) {
    DAT_0000305c = DAT_0000305c & 0xdf;
  }
  else {
    DAT_0000305c = DAT_0000305c | 0x20;
  }
  if (3 < DAT_0000afc4) {
    if ((DAT_000031ed & 1) == 0) {
      _DAT_01300050 = 0;
    }
    else {
      _DAT_01300054 = 0;
    }
  }
  if (DAT_00003100 == 0) {
    if (bVar3) {
      _DAT_000031f4 = _DAT_000031f4 | 0x8000;
    }
    else {
      _DAT_000031f4 = _DAT_000031f4 & 0xffff7fff;
    }
  }
  if ((DAT_000031ed & 0x80) == 0) {
    DAT_0000305c = DAT_0000305c & 0xbf;
  }
  else {
    DAT_0000305c = DAT_0000305c | 0x40;
  }
  if (((DAT_0000c547 & 8) != 0) && ((DAT_0000c547 & 0x10) != 0)) {
    if ((DAT_00003248._2_1_ & 0x10) == 0) {
      DAT_000031e1 = DAT_000031e1 | 1;
    }
    else {
      DAT_000031e1 = DAT_000031e1 & 0xfe;
    }
    if ((DAT_00003248._2_1_ & 0x20) == 0) {
      DAT_000031e1 = DAT_000031e1 | 2;
    }
    else {
      DAT_000031e1 = DAT_000031e1 & 0xfd;
    }
    if ((DAT_00003248._2_1_ & 0x40) == 0) {
      DAT_000031e1 = DAT_000031e1 | 4;
    }
    else {
      DAT_000031e1 = DAT_000031e1 & 0xfb;
    }
  }
  if ((DAT_0000c547 & 0x20) != 0) {
    if ((DAT_00003248._2_1_ & 2) == 0) {
      DAT_000031e6 = DAT_000031e6 & 0xbf;
    }
    else {
      DAT_000031e6 = DAT_000031e6 | 0x40;
    }
    if ((DAT_000031ee & 2) == 0) {
      _DAT_000031f4 = _DAT_000031f4 & 0xffffffbf;
    }
    else {
      _DAT_000031f4 = _DAT_000031f4 | 0x40;
    }
  }
  if ((DAT_0000c547 & 0x40) != 0) {
    if ((DAT_00003248._0_1_ & 1) == 0) {
      DAT_000031e4 = DAT_000031e4 | 8;
    }
    else {
      DAT_000031e4 = DAT_000031e4 & 0xf7;
    }
    if ((DAT_000031ed & 4) == 0) {
      _DAT_000031f4 = _DAT_000031f4 & 0xfffffeff;
    }
    else {
      _DAT_000031f4 = _DAT_000031f4 | 0x100;
    }
  }
  if ((DAT_0000c547 & 0x80) != 0) {
    if ((DAT_00003248._1_1_ & 4) == 0) {
      DAT_000031e5 = DAT_000031e5 & 0xf7;
    }
    else {
      DAT_000031e5 = DAT_000031e5 | 8;
    }
    if ((DAT_00003248._1_1_ & 0x20) == 0) {
      DAT_000031e4 = DAT_000031e4 & 0xfd;
    }
    else {
      DAT_000031e4 = DAT_000031e4 | 2;
    }
    if ((DAT_000031ed & 2) == 0) {
      _DAT_000031f4 = _DAT_000031f4 | 0x200;
    }
    else {
      _DAT_000031f4 = _DAT_000031f4 & 0xfffffdff;
    }
  }
  if ((DAT_0000c546 & 0x40) != 0) {
    if ((DAT_00003248._2_1_ & 4) == 0) {
      DAT_000031e6 = DAT_000031e6 | 1;
    }
    else {
      DAT_000031e6 = DAT_000031e6 & 0xfe;
    }
  }
  if ((DAT_0000c546 & 1) != 0) {
    if ((DAT_000031ee & 4) == 0) {
      _DAT_000031f4 = _DAT_000031f4 & 0xfffffbff;
    }
    else {
      _DAT_000031f4 = _DAT_000031f4 | 0x400;
    }
    if ((DAT_000031ee & 8) == 0) {
      _DAT_000031f4 = _DAT_000031f4 & 0xfffff7ff;
    }
    else {
      _DAT_000031f4 = _DAT_000031f4 | 0x800;
    }
  }
  if ((DAT_0000c546 & 2) != 0) {
    if ((DAT_000031ee & 0x20) == 0) {
      _DAT_000031f4 = _DAT_000031f4 & 0xffffefff;
    }
    else {
      _DAT_000031f4 = _DAT_000031f4 | 0x1000;
    }
    if ((DAT_000031ee & 0x40) == 0) {
      _DAT_000031f4 = _DAT_000031f4 & 0xffffdfff;
    }
    else {
      _DAT_000031f4 = _DAT_000031f4 | 0x2000;
    }
  }
  if ((DAT_0000c546 & 0x10) != 0) {
    if ((DAT_00003248._1_1_ & 0x40) == 0) {
      DAT_000031e6 = DAT_000031e6 & 0xf7;
    }
    else {
      DAT_000031e6 = DAT_000031e6 | 8;
    }
    if ((DAT_00003248._1_1_ & 0x80) == 0) {
      DAT_000031e6 = DAT_000031e6 & 0xfb;
    }
    else {
      DAT_000031e6 = DAT_000031e6 | 4;
    }
    if ((DAT_000031ee & 0x10) == 0) {
      _DAT_000031f4 = _DAT_000031f4 & 0xffffbfff;
    }
    else {
      _DAT_000031f4 = _DAT_000031f4 | 0x4000;
    }
  }
  if ((DAT_0000c545 & 1) != 0) {
    if ((DAT_0000324c._1_1_ & 1) == 0) {
      DAT_000031e9 = DAT_000031e9 & 0xfe;
    }
    else {
      DAT_000031e9 = DAT_000031e9 | 1;
    }
  }
  if ((DAT_0000c545 & 2) != 0) {
    if ((DAT_0000324c._1_1_ & 2) == 0) {
      DAT_000031e9 = DAT_000031e9 & 0xfd;
    }
    else {
      DAT_000031e9 = DAT_000031e9 | 2;
    }
    if ((DAT_0000324c._1_1_ & 4) == 0) {
      DAT_00003268 = DAT_00003268 & 0xdf;
    }
    else {
      DAT_00003268 = DAT_00003268 | 0x20;
    }
    if ((DAT_0000324c._1_1_ & 8) == 0) {
      DAT_00003268 = DAT_00003268 & 0xef;
    }
    else {
      DAT_00003268 = DAT_00003268 | 0x10;
    }
    if ((DAT_0000324c._1_1_ & 0x10) == 0) {
      DAT_00003268 = DAT_00003268 & 0xf7;
    }
    else {
      DAT_00003268 = DAT_00003268 | 8;
    }
    if ((DAT_0000324c._1_1_ & 0x20) == 0) {
      DAT_00003268 = DAT_00003268 & 0xfb;
    }
    else {
      DAT_00003268 = DAT_00003268 | 4;
    }
    if ((DAT_0000324c._1_1_ & 0x40) == 0) {
      DAT_00003268 = DAT_00003268 & 0xfd;
    }
    else {
      DAT_00003268 = DAT_00003268 | 2;
    }
    if ((DAT_0000324c._1_1_ & 0x80) == 0) {
      DAT_00003268 = DAT_00003268 & 0xfe;
    }
    else {
      DAT_00003268 = DAT_00003268 | 1;
    }
    if ((DAT_000031ef & 1) == 0) {
      _DAT_000031f4 = _DAT_000031f4 & 0xffffffdf;
    }
    else {
      _DAT_000031f4 = _DAT_000031f4 | 0x20;
    }
    if ((DAT_000031ef & 2) == 0) {
      _DAT_000031f4 = _DAT_000031f4 & 0xffffff7f;
    }
    else {
      _DAT_000031f4 = _DAT_000031f4 | 0x80;
    }
  }
  _DAT_00003218 = _DAT_000031f4;
  return;
}



// Function: FUN_0001314a @ 0001314a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001314a(void)

{
  bool bVar1;
  
  if ((DAT_00003051 & 1) == 0) {
    DAT_000031e8 = DAT_000031e8 & 0xbf;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 0x40;
  }
  if ((DAT_00003051 & 2) == 0) {
    DAT_000031e8 = DAT_000031e8 & 0x7f;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 0x80;
  }
  DAT_000031e8 = DAT_000031e8 & 0xef;
  if ((DAT_00003051 & 8) != 0) {
    DAT_000031e8 = DAT_000031e8 | 0x10;
  }
  DAT_000031e8 = DAT_000031e8 & 0xdf;
  if ((DAT_00003051 & 4) != 0) {
    DAT_000031e8 = DAT_000031e8 | 0x20;
  }
  bVar1 = ((byte)DAT_00003248 & 0x80) != 0;
  if (bVar1) {
    DAT_000031e2 = DAT_000031e2 & 0xfe;
  }
  else {
    DAT_000031e2 = DAT_000031e2 | 1;
  }
  if ((DAT_00003248._2_1_ & 1) == 0) {
    DAT_000031e2 = DAT_000031e2 | 2;
  }
  else {
    DAT_000031e2 = DAT_000031e2 & 0xfd;
  }
  if ((DAT_00003248._2_1_ & 8) == 0) {
    DAT_000031e5 = DAT_000031e5 & 0xfe;
  }
  else {
    DAT_000031e5 = DAT_000031e5 | 1;
  }
  if ((DAT_00003248._2_1_ & 0x20) == 0) {
    DAT_000031e5 = DAT_000031e5 & 0xfb;
  }
  else {
    DAT_000031e5 = DAT_000031e5 | 4;
  }
  if ((DAT_0000c536._2_1_ & 1) == 0) {
    DAT_00007784 = DAT_00007784 & 0xfe;
  }
  else {
    DAT_00007784 = DAT_00007784 | 1;
  }
  if (DAT_000030fc < 1) {
    DAT_000030fc = 0;
  }
  else {
    DAT_000030fc = DAT_000030fc + -1;
  }
  if (((DAT_000031ed & 1) != 0) && ((DAT_00003109 & 1) == 0)) {
    DAT_000030fc = 300;
  }
  if ((DAT_000031ed & 1) == 0) {
    DAT_000031e3 = 0;
    DAT_000031e0 = DAT_000031e0 & 0xfc;
    DAT_000031e4 = DAT_000031e4 & 0xfe;
  }
  else if (DAT_000030fc == 0) {
    if ((DAT_00003248._2_1_ & 0x10) == 0) {
      DAT_000031e3 = DAT_000031e3 | 1;
    }
    else {
      DAT_000031e3 = DAT_000031e3 & 0xfe;
    }
    if ((DAT_00003248._2_1_ & 0x40) == 0) {
      DAT_000031e3 = DAT_000031e3 | 4;
    }
    else {
      DAT_000031e3 = DAT_000031e3 & 0xfb;
    }
    DAT_000031e4 = DAT_000031e4 | 1;
  }
  else {
    DAT_000031e3 = 0;
    DAT_000031e0 = DAT_000031e0 & 0xfe;
    DAT_000031e4 = DAT_000031e4 & 0xfe;
  }
  if (bVar1) {
    if ((DAT_000031e2 & 2) == 0) {
      if ((DAT_000031e1 & 1) != 0) {
        DAT_000031e1 = DAT_000031e1 & 0xfb;
        DAT_000031e3 = DAT_000031e3 & 0xfa;
      }
    }
    else {
      DAT_000031e1 = DAT_000031e1 & 0xfa;
      DAT_000031e3 = DAT_000031e3 & 0xfa;
    }
  }
  else {
    DAT_000031e0 = DAT_000031e0 & 0xfd;
    DAT_000031e2 = DAT_000031e2 & 0xf9;
    DAT_000031e1 = DAT_000031e1 & 0xfa;
    DAT_000031e3 = DAT_000031e3 & 0xfa;
  }
  if (DAT_000031e1 == 0) {
    DAT_000031e0 = DAT_000031e0 & 0x7f;
  }
  else {
    DAT_000031e0 = DAT_000031e0 | 0x80;
  }
  if (DAT_000031e3 == 0) {
    DAT_000031e0 = DAT_000031e0 & 0xfe;
  }
  else {
    DAT_000031e0 = DAT_000031e0 | 1;
  }
  DAT_00003109 = DAT_000031ed;
  if ((DAT_000031ed & 1) == 0) {
    DAT_0000305c = DAT_0000305c & 0xdf;
  }
  else {
    DAT_0000305c = DAT_0000305c | 0x20;
  }
  if ((DAT_000031ee & 0x80) == 0) {
    DAT_0000305c = DAT_0000305c & 0xbf;
  }
  else {
    DAT_0000305c = DAT_0000305c | 0x40;
  }
  if (3 < DAT_0000afc4) {
    if ((DAT_000031ed & 1) == 0) {
      _DAT_01300050 = 0;
    }
    else {
      _DAT_01300054 = 0;
    }
  }
  if (((DAT_0000c547 & 8) != 0) && ((DAT_0000c547 & 0x10) != 0)) {
    if ((DAT_00003248._2_1_ & 0x80) == 0) {
      DAT_000031e1 = DAT_000031e1 & 0xfe;
    }
    else {
      DAT_000031e1 = DAT_000031e1 | 1;
    }
    if ((DAT_00003248._1_1_ & 1) == 0) {
      DAT_000031e1 = DAT_000031e1 & 0xfb;
    }
    else {
      DAT_000031e1 = DAT_000031e1 | 4;
    }
    if ((DAT_000031ed & 0x80) == 0) {
      _DAT_000031f4 = _DAT_000031f4 & 0xffffff7f;
    }
    else {
      _DAT_000031f4 = _DAT_000031f4 | 0x80;
    }
  }
  if ((DAT_0000c547 & 0x20) != 0) {
    if ((DAT_00003248._2_1_ & 2) == 0) {
      DAT_000031e6 = DAT_000031e6 & 0xbf;
    }
    else {
      DAT_000031e6 = DAT_000031e6 | 0x40;
    }
  }
  if ((DAT_0000c547 & 0x40) != 0) {
    if ((DAT_00003248._2_1_ & 4) == 0) {
      DAT_000031e4 = DAT_000031e4 & 0xf7;
    }
    else {
      DAT_000031e4 = DAT_000031e4 | 8;
    }
  }
  if ((DAT_0000c546 & 1) != 0) {
    if ((DAT_000031ee & 8) == 0) {
      _DAT_000031f4 = _DAT_000031f4 & 0xfffffdff;
    }
    else {
      _DAT_000031f4 = _DAT_000031f4 | 0x200;
    }
  }
  if (((DAT_0000c546 & 4) != 0) && ((DAT_00003248._1_1_ & 2) != 0)) {
    DAT_000031e8 = DAT_000031e8 | 0x20;
  }
  if (((DAT_0000c546 & 8) != 0) && ((DAT_00003248._1_1_ & 4) != 0)) {
    DAT_000031e8 = DAT_000031e8 | 0x10;
  }
  if ((DAT_0000c546 & 0x20) != 0) {
    if ((DAT_00003248._1_1_ & 8) == 0) {
      DAT_000031ec = DAT_000031ec & 0xfe;
    }
    else {
      DAT_000031ec = DAT_000031ec | 1;
    }
  }
  _DAT_00003218 = _DAT_000031f4;
  return;
}



// Function: FUN_0001357a @ 0001357a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0001357a(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  _DAT_00003118 = DAT_00003114;
  DAT_00003114 = DAT_00003110;
  DAT_00003110 = _DAT_01300040;
  if ((ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c) == 2) {
    DAT_000030e4 = DAT_000030dc;
  }
  if ((DAT_0000308c & 1) == 0) {
    DAT_00003263 = DAT_0000308c << 4 | 0x10;
  }
  else {
    DAT_00003264 = DAT_0000308c;
    DAT_00003263 = DAT_0000308c;
  }
  DAT_00003261 = DAT_00003263 & 0xf | DAT_00003261 & 0xf0;
  DAT_00003265 = DAT_0000308c;
  DAT_00003267 = DAT_0000308b | DAT_0000308a << 4;
  DAT_00003268 = DAT_00003089 | DAT_00003088 << 4;
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_000135f6 @ 000135f6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000135f6(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  _DAT_00003118 = DAT_00003114;
  DAT_00003114 = DAT_00003110;
  DAT_00003110 = _DAT_01300040;
  if ((ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c) == 2) {
    DAT_000030e4 = DAT_000030dc;
  }
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00013628 @ 00013628

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00013628(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  _DAT_013000b8 = (uint)(DAT_0000305c & 0x60);
  _DAT_013000bc = (uint)(~DAT_0000305c & 0x60);
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_0001365a @ 0001365a

undefined8 FUN_0001365a(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  DAT_000030dc = (int)((DAT_000030b4 & 0xff) * 0x10 + DAT_000030dc * 3) >> 2;
  DAT_000030e8 = (int)((DAT_000030a8 & 0xff) * 0x10 + DAT_000030e8 * 3) >> 2;
  DAT_000030ec = (int)((DAT_000030ac & 0xff) * 0x10 + DAT_000030ec * 3) >> 2;
  DAT_000030f0 = (int)((DAT_000030b0 & 0xff) * 0x10 + DAT_000030f0 * 3) >> 2;
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_000136dc @ 000136dc

undefined8 FUN_000136dc(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  (&DAT_00003270)[(short)(ushort)(DAT_0000308d & 0xf)] = DAT_0000308e;
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_000138be @ 000138be

undefined4 FUN_000138be(void)

{
  undefined4 in_D0;
  int extraout_A1;
  
  (*(code *)(PTR_LAB_000138f4 + (short)in_D0 * 4))();
  *(undefined1 *)(extraout_A1 + 2) = *(undefined1 *)(extraout_A1 + 1);
  return in_D0;
}



// Function: FUN_000138dc @ 000138dc

undefined4 FUN_000138dc(void)

{
  undefined4 in_D0;
  
  (*(code *)(PTR_LAB_00013934 + (short)in_D0 * 4))();
  return in_D0;
}



// Function: FUN_00013a88 @ 00013a88

undefined4 FUN_00013a88(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined4 in_D0;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_D1;
  byte bVar7;
  short sVar8;
  uint uVar9;
  short sVar11;
  uint uVar10;
  int *in_A1;
  int *extraout_A1;
  undefined1 *unaff_A5;
  int *unaff_A6;
  
  iVar1 = *in_A1;
  uVar9 = in_A1[1];
  uVar10 = in_A1[2];
  uVar6 = in_A1[4];
  if (uVar9 == uVar10) {
    uVar5 = FUN_00013cbe();
    return uVar5;
  }
  while ((char)in_D0 != *(char *)(iVar1 + (short)uVar10)) {
    uVar10 = uVar6 & uVar10 + 1;
    if ((int)uVar9 <= (int)uVar10) {
      uVar5 = FUN_00013cbe();
      return uVar5;
    }
  }
  if ((uVar6 & uVar10 + 9) != uVar9) {
    uVar5 = FUN_00013cbe();
    return uVar5;
  }
  uVar9 = uVar6 & uVar10 + 1;
  bVar7 = 0;
  for (sVar8 = 1; sVar11 = (short)uVar9, sVar8 < 8; sVar8 = sVar8 + 1) {
    cVar3 = *(char *)(iVar1 + sVar11);
    FUN_00013e08();
    if (cVar3 < '\0') {
      uVar5 = FUN_00013cbe();
      return uVar5;
    }
    *(char *)(iVar1 + sVar11) = cVar3;
    bVar7 = cVar3 + bVar7;
    uVar9 = extraout_D1 & uVar9 + 1;
    uVar6 = extraout_D1;
    in_A1 = extraout_A1;
  }
  bVar4 = *(char *)(iVar1 + sVar11) - 0x40;
  if (bVar4 < 0x10) {
    iVar2 = in_A1[8];
    in_A1[8] = iVar2 + -5;
    if (iVar2 < 5) {
      in_A1[8] = 0;
    }
    iVar2 = unaff_A6[1];
    unaff_A6[1] = iVar2 + -5;
    if (iVar2 < 5) {
      unaff_A6[1] = 0;
    }
  }
  else {
    in_A1[8] = in_A1[8] + 8;
    in_A1[8] = in_A1[8] + 8;
    if (0xbad < in_A1[8]) {
      in_A1[8] = 0xbad;
    }
    unaff_A6[1] = unaff_A6[1] + 8;
    unaff_A6[1] = unaff_A6[1] + 8;
    if (0xbad < unaff_A6[1]) {
      unaff_A6[1] = 0xbad;
    }
  }
  if ((bVar7 & 0xf) == (bVar4 & 0xf)) {
    for (sVar8 = 1; uVar10 = uVar6 & uVar10 + 1, sVar8 < 8; sVar8 = sVar8 + 1) {
      *unaff_A5 = *(undefined1 *)(iVar1 + (short)uVar10);
      unaff_A5 = unaff_A5 + 1;
    }
    in_A1[3] = in_A1[3] + -5;
    if (in_A1[3] < 0) {
      in_A1[3] = 0;
    }
    iVar1 = *unaff_A6;
    *unaff_A6 = iVar1 + -5;
    if (iVar1 < 5) {
      *unaff_A6 = 0;
    }
    in_A1[2] = in_A1[1];
    return in_D0;
  }
  uVar5 = FUN_00013cbe();
  return uVar5;
}



// Function: FUN_00013ba4 @ 00013ba4

undefined4 FUN_00013ba4(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined4 in_D0;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_D1;
  byte bVar7;
  short sVar8;
  uint uVar9;
  short sVar11;
  uint uVar10;
  int *in_A1;
  int *extraout_A1;
  undefined1 *unaff_A5;
  int *unaff_A6;
  
  iVar1 = *in_A1;
  uVar9 = in_A1[1];
  uVar10 = in_A1[2];
  uVar6 = in_A1[4];
  if (uVar9 == uVar10) {
    uVar5 = FUN_00013cbe();
    return uVar5;
  }
  while ((char)in_D0 != *(char *)(iVar1 + (short)uVar10)) {
    uVar10 = uVar6 & uVar10 + 1;
    if ((int)uVar9 <= (int)uVar10) {
      uVar5 = FUN_00013cbe();
      return uVar5;
    }
  }
  if ((uVar6 & uVar10 + 0x12) != uVar9) {
    uVar5 = FUN_00013cbe();
    return uVar5;
  }
  uVar9 = uVar6 & uVar10 + 1;
  bVar7 = 0;
  for (sVar8 = 1; sVar11 = (short)uVar9, sVar8 < 0x11; sVar8 = sVar8 + 1) {
    cVar3 = *(char *)(iVar1 + sVar11);
    FUN_00013e08();
    if (cVar3 < '\0') {
      uVar5 = FUN_00013cbe();
      return uVar5;
    }
    *(char *)(iVar1 + sVar11) = cVar3;
    bVar7 = cVar3 + bVar7;
    uVar9 = extraout_D1 & uVar9 + 1;
    uVar6 = extraout_D1;
    in_A1 = extraout_A1;
  }
  bVar4 = *(char *)(iVar1 + sVar11) - 0x40;
  if (bVar4 < 0x10) {
    iVar2 = in_A1[8];
    in_A1[8] = iVar2 + -5;
    if (iVar2 < 5) {
      in_A1[8] = 0;
    }
    iVar2 = unaff_A6[1];
    unaff_A6[1] = iVar2 + -5;
    if (iVar2 < 5) {
      unaff_A6[1] = 0;
    }
  }
  else {
    in_A1[8] = in_A1[8] + 8;
    in_A1[8] = in_A1[8] + 8;
    if (0xbad < in_A1[8]) {
      in_A1[8] = 0xbad;
    }
    unaff_A6[1] = unaff_A6[1] + 8;
    unaff_A6[1] = unaff_A6[1] + 8;
    if (0xbad < unaff_A6[1]) {
      unaff_A6[1] = 0xbad;
    }
  }
  if ((bVar7 & 0xf) == (bVar4 & 0xf)) {
    for (sVar8 = 1; uVar10 = uVar6 & uVar10 + 1, sVar8 < 0x11; sVar8 = sVar8 + 1) {
      *unaff_A5 = *(undefined1 *)(iVar1 + (short)uVar10);
      unaff_A5 = unaff_A5 + 1;
    }
    in_A1[3] = in_A1[3] + -5;
    if (in_A1[3] < 0) {
      in_A1[3] = 0;
    }
    iVar1 = *unaff_A6;
    *unaff_A6 = iVar1 + -5;
    if (iVar1 < 5) {
      *unaff_A6 = 0;
    }
    in_A1[2] = in_A1[1];
    return in_D0;
  }
  uVar5 = FUN_00013cbe();
  return uVar5;
}



// Function: FUN_00013cbe @ 00013cbe

undefined8 FUN_00013cbe(void)

{
  int in_A1;
  int *unaff_A6;
  undefined8 in_stack_00000000;
  
  *(int *)(in_A1 + 0xc) = *(int *)(in_A1 + 0xc) + 8;
  *(int *)(in_A1 + 0xc) = *(int *)(in_A1 + 0xc) + 8;
  if (0xbad < *(int *)(in_A1 + 0xc)) {
    *(undefined4 *)(in_A1 + 0xc) = 0xbad;
  }
  *unaff_A6 = *unaff_A6 + 8;
  *unaff_A6 = *unaff_A6 + 8;
  if (0xbad < *unaff_A6) {
    *unaff_A6 = 0xbad;
  }
  *(undefined4 *)(in_A1 + 8) = *(undefined4 *)(in_A1 + 4);
  return in_stack_00000000;
}



// Function: FUN_00013cf6 @ 00013cf6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00013cf6(void)

{
  undefined4 in_D0;
  
  FUN_00013d50();
  DAT_00007770 = DAT_00007770 | 1;
  _DAT_01300094 = DAT_00007770;
  return in_D0;
}



// Function: FUN_00013d14 @ 00013d14

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00013d14(void)

{
  undefined4 in_D0;
  
  FUN_00013da2();
  DAT_00007770 = DAT_00007770 | 1;
  _DAT_01300094 = DAT_00007770;
  return in_D0;
}



// Function: FUN_00013d50 @ 00013d50

void FUN_00013d50(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 in_D0b;
  uint uVar4;
  uint extraout_D1;
  byte bVar5;
  short sVar6;
  uint uVar7;
  int *in_A1;
  int *extraout_A1;
  char *unaff_A5;
  
  iVar1 = *in_A1;
  iVar2 = in_A1[1];
  uVar4 = in_A1[4];
  *(undefined1 *)(iVar1 + (short)iVar2) = in_D0b;
  uVar7 = uVar4 & iVar2 + 1U;
  bVar5 = 0;
  for (sVar6 = 1; sVar6 < 4; sVar6 = sVar6 + 1) {
    cVar3 = *unaff_A5;
    bVar5 = cVar3 + bVar5;
    FUN_00013df4();
    *(char *)(iVar1 + (short)uVar7) = cVar3;
    uVar7 = extraout_D1 & uVar7 + 1;
    uVar4 = extraout_D1;
    in_A1 = extraout_A1;
    unaff_A5 = unaff_A5 + 1;
  }
  *(byte *)(iVar1 + (short)uVar7) = (bVar5 & 0xf) + 0x40;
  in_A1[1] = uVar4 & uVar7 + 1;
  return;
}



// Function: FUN_00013da2 @ 00013da2

void FUN_00013da2(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 in_D0b;
  uint uVar4;
  uint extraout_D1;
  byte bVar5;
  short sVar6;
  uint uVar7;
  int *in_A1;
  int *extraout_A1;
  char *unaff_A5;
  
  iVar1 = *in_A1;
  iVar2 = in_A1[1];
  uVar4 = in_A1[4];
  *(undefined1 *)(iVar1 + (short)iVar2) = in_D0b;
  uVar7 = uVar4 & iVar2 + 1U;
  bVar5 = 0;
  for (sVar6 = 1; sVar6 < 0x11; sVar6 = sVar6 + 1) {
    cVar3 = *unaff_A5;
    bVar5 = cVar3 + bVar5;
    FUN_00013df4();
    *(char *)(iVar1 + (short)uVar7) = cVar3;
    uVar7 = extraout_D1 & uVar7 + 1;
    uVar4 = extraout_D1;
    in_A1 = extraout_A1;
    unaff_A5 = unaff_A5 + 1;
  }
  *(byte *)(iVar1 + (short)uVar7) = (bVar5 & 0xf) + 0x40;
  in_A1[1] = uVar4 & uVar7 + 1;
  return;
}



// Function: FUN_00013df4 @ 00013df4

void FUN_00013df4(void)

{
  return;
}



// Function: FUN_00013e08 @ 00013e08

void FUN_00013e08(void)

{
  char unaff_D3b;
  
  if (('/' < unaff_D3b) && (unaff_D3b < ':')) {
    return;
  }
  if (('`' < unaff_D3b) && (unaff_D3b < 'g')) {
    return;
  }
  return;
}



// Function: FUN_00015d74 @ 00015d74

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00015d74(void)

{
  if ((DAT_00003248._0_1_ & 8) == 0) {
    DAT_000031e7 = DAT_000031e7 & 0xfe;
    DAT_00003220._0_1_ = DAT_00003220._0_1_ & 0xf7;
  }
  else {
    DAT_000031e7 = DAT_000031e7 | 1;
    DAT_00003220._0_1_ = DAT_00003220._0_1_ | 8;
  }
  if ((DAT_00003051 & 1) == 0) {
    DAT_000031e8 = DAT_000031e8 & 0xbf;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 0x40;
  }
  if ((DAT_00003051 & 2) == 0) {
    DAT_000031e8 = DAT_000031e8 & 0x7f;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 0x80;
  }
  if ((DAT_00003051 & 0x10) == 0) {
    DAT_000031e8 = DAT_000031e8 & 0xdf;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 0x20;
  }
  if ((DAT_00003051 & 0x40) == 0) {
    DAT_000031e8 = DAT_000031e8 & 0xef;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 0x10;
  }
  if ((DAT_000031ed & 1) == 0) {
    DAT_000031e4 = DAT_000031e4 & 0xfe;
  }
  else {
    DAT_000031e4 = DAT_000031e4 | 1;
  }
  if ((DAT_000031ed & 1) == 0) {
    DAT_0000305c = DAT_0000305c & 0xdf;
  }
  else {
    DAT_0000305c = DAT_0000305c | 0x20;
  }
  if ((DAT_000031ed & 1) == 0) {
    DAT_000031e4 = DAT_000031e4 & 0xfb;
  }
  else {
    DAT_000031e4 = DAT_000031e4 | 4;
  }
  if (3 < DAT_0000afc4) {
    if ((DAT_000031ed & 1) == 0) {
      _DAT_01300050 = 0;
    }
    else {
      _DAT_01300054 = 0;
    }
  }
  DAT_000031e2 = DAT_000031e2 & 0xfe;
  if ((DAT_000031ed & 1) == 0) {
    DAT_00003250 = DAT_00003250 & 0xfe;
    DAT_00003252 = DAT_00003252 & 0xfa;
    DAT_000031e4 = DAT_000031e4 & 0xfb;
  }
  else if ((DAT_00003109 & 1) == 0) {
    DAT_000031e3 = '\0';
    DAT_000031e1 = '\0';
    DAT_000031e0 = DAT_000031e0 & 0x7c;
  }
  if (DAT_000031e1 == '\0') {
    DAT_000031e0 = DAT_000031e0 & 0x7f;
  }
  else {
    DAT_000031e0 = DAT_000031e0 | 0x80;
  }
  if (DAT_000031e3 == '\0') {
    DAT_000031e0 = DAT_000031e0 & 0xfe;
  }
  else {
    DAT_000031e0 = DAT_000031e0 | 1;
  }
  DAT_00003109 = DAT_000031ed;
  if (((byte)DAT_0000c536 & 0x80) == 0) {
    DAT_0000aefb = DAT_0000aefb & 0xfd;
  }
  else {
    DAT_0000aefb = DAT_0000aefb | 2;
  }
  if ((DAT_000031ef & 1) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xffffffdf;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 0x20;
  }
  if ((DAT_000031ef & 2) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xffffff7f;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 0x80;
  }
  _DAT_00003218 = _DAT_000031f4;
  return;
}



// Function: FUN_000164ac @ 000164ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000164ac(void)

{
  if ((ushort)((uint)(_DAT_0000af58 << 0xc) >> 0x1c) == 0xf) {
    if ((DAT_000031ed & 1) == 0) {
      DAT_00003252 = DAT_00003252 & 0xfe;
    }
    else {
      DAT_00003252 = DAT_00003252 | 1;
    }
    if ((DAT_000031ed & 1) == 0) {
      DAT_00003252 = DAT_00003252 & 0xfb;
    }
    else {
      DAT_00003252 = DAT_00003252 | 4;
    }
  }
  else {
    if ((DAT_00003250 & 1) == 0) {
      DAT_00003252 = DAT_00003252 & 0xfe;
    }
    else {
      DAT_00003252 = DAT_00003252 | 1;
    }
    if ((DAT_00003250 & 1) == 0) {
      DAT_00003252 = DAT_00003252 & 0xfb;
    }
    else {
      DAT_00003252 = DAT_00003252 | 4;
    }
  }
  return;
}



// Function: FUN_000167d6 @ 000167d6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000167d6(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  DAT_00003000 = 0x2f00;
  DAT_00003014 = 0x2f40;
  DAT_00003028 = 0x2f80;
  DAT_0000303c = 0x2fc0;
  _DAT_00003010 = 0x3f;
  _DAT_00003024 = 0x3f;
  _DAT_00003038 = 0x3f;
  _DAT_0000304c = 0x3f;
  DAT_00003280 = 0x640;
  DAT_00003094 = &PTR_FUN_00012368;
  DAT_00003260 = 0;
  DAT_00003261 = 0x80;
  DAT_00003262 = 0;
  DAT_00003263 = 0x80;
  DAT_00003052 = 0x10;
  DAT_00003054 = 0x10;
  DAT_00003056 = 0x10;
  DAT_00003058 = 0x10;
  _DAT_0000305a = 0x10;
  _DAT_00003050 = 0x10;
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00016d58 @ 00016d58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00016d58(void)

{
  DAT_00000580 = &stack0x00000000;
  restoreFPUStateFrame(*(undefined4 *)(DAT_0000011c + 100));
  _DAT_0000111c = 0;
  return CONCAT44(DAT_000000e0,DAT_000000e4);
}



// Function: FUN_00016dc4 @ 00016dc4

void FUN_00016dc4(void)

{
  DAT_00001392 = DAT_00007778 + 10;
  return;
}



// Function: FUN_00016dd4 @ 00016dd4

void FUN_00016dd4(void)

{
  DAT_00000bd9 = DAT_00000bd9 & 0xf7;
  DAT_00000bd9 = DAT_00000bd9 | 0x10;
  DAT_00007780 = 1;
  DAT_000010d8 = DAT_000010d8 & 0xdf;
  DAT_0000c51a = DAT_0000c51a & 0xf7;
  return;
}



// Function: FUN_00016df6 @ 00016df6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00016df6(void)

{
  longdouble lVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  
  iVar3 = DAT_000010ec;
  uVar5 = DAT_000010e8;
  if (((DAT_000010d8 & 0x10) != 0) &&
     ((uVar7 = (ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c), uVar7 == 4 || (uVar7 == 5)))) {
    iVar4 = DAT_000028d8;
    if (DAT_000028d8 < 0) {
      iVar4 = -DAT_000028d8;
    }
    uVar5 = (int)((longdouble)_DAT_00001150 * (longdouble)iVar4);
  }
  if (((DAT_000010d9 == '\0') || (DAT_000010d9 == '\x03')) &&
     ((longdouble)_DAT_00000db0 != FLOAT_UNKNOWN)) {
    uVar5 = (uint)((longdouble)(int)uVar5 / ABS((longdouble)_DAT_00000db0));
  }
  if ((DAT_00000bd9 & 0x40) != 0) {
    uVar5 = 0;
  }
  if ((DAT_000010d8 & 0x40) == 0) {
    uVar5 = (DAT_00003280 * uVar5) / 0x640;
  }
  if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3) {
    if ((int)DAT_00000fb8 < (int)uVar5) {
      uVar5 = DAT_00000fb8;
    }
    if (((longdouble)_DAT_00000d8c != FLOAT_UNKNOWN) &&
       (lVar1 = (longdouble)(int)uVar5 -
                ABS((longdouble)(int)DAT_00000fb4 / (longdouble)_DAT_00000d8c),
       lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1)) {
      uVar5 = (uint)ABS((longdouble)(int)DAT_00000fb4 / (longdouble)_DAT_00000d8c);
    }
  }
  else {
    if ((int)DAT_00000fb4 < (int)uVar5) {
      uVar5 = DAT_00000fb4;
    }
    if (((longdouble)_DAT_00000da4 != FLOAT_UNKNOWN) &&
       (lVar1 = (longdouble)(int)uVar5 -
                ABS((longdouble)(int)DAT_00000fb8 / (longdouble)_DAT_00000da4),
       lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1)) {
      uVar5 = (uint)ABS((longdouble)(int)DAT_00000fb8 / (longdouble)_DAT_00000da4);
    }
    if (((longdouble)_DAT_00000db0 != FLOAT_UNKNOWN) &&
       (lVar1 = (longdouble)(int)uVar5 - ABS((longdouble)DAT_00000fbc / (longdouble)_DAT_00000db0),
       lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1)) {
      uVar5 = (uint)ABS((longdouble)DAT_00000fbc / (longdouble)_DAT_00000db0);
    }
  }
  uVar6 = uVar5;
  if ((DAT_000010d8 & 0x20) != 0) {
    if (DAT_000005c8 < 5) {
      fVar2 = 254000.0;
    }
    else {
      fVar2 = (float)_DAT_000005cc / (float)DAT_000005c8;
    }
    fVar2 = fVar2 * 0.5 + (float)_DAT_000010f8 * 0.5;
    _DAT_000010f8 = (undefined1  [12])fVar2;
    if (DAT_000011f2 == '\0') {
      uVar6 = (uint)(fVar2 * 0.5);
      if ((int)uVar6 < (int)uVar5) {
        _DAT_000010f4 = uVar6;
        if ((longdouble)(int)uVar6 - (longdouble)_DAT_00001350 != FLOAT_UNKNOWN &&
            (longdouble)(int)uVar6 - (longdouble)_DAT_00001350 < FLOAT_UNKNOWN) {
          _DAT_00001350 = (undefined1  [12])(int)uVar6;
        }
      }
      else {
        _DAT_000010f4 = 0;
        uVar6 = uVar5;
      }
    }
  }
  if (DAT_000011c8 == 0) {
    FUN_0001b956();
  }
  else if ((DAT_00000bd9 & 1) == 0) {
    FUN_0001ba5a();
  }
  else {
    FUN_0001b956();
  }
  if ((DAT_00000bd9 & 0x40) == 0) {
    DAT_0000139a = uVar6;
  }
  FUN_000175ba();
  FUN_00017696();
  if (iVar3 == 0) {
    DAT_00000bd8 = DAT_00000bd8 | 0x10;
  }
  else {
    DAT_00000bd8 = DAT_00000bd8 & 0xef;
  }
  DAT_000010ec = iVar3;
  _DAT_00000c00 = (undefined1  [12])((longdouble)iVar3 + (longdouble)_DAT_00000c00);
  return;
}



// Function: FUN_00017014 @ 00017014

void FUN_00017014(void)

{
  if (DAT_00003280 == 0) {
    DAT_00000bd8 = DAT_00000bd8 | 8;
  }
  else {
    DAT_00000bd8 = DAT_00000bd8 & 0xf7;
  }
  return;
}



// Function: FUN_0001702a @ 0001702a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble FUN_0001702a(void)

{
  int unaff_D3;
  longdouble in_FP0;
  longdouble lVar1;
  
  if ((ushort)((uint)(_DAT_0000af58 << 0xc) >> 0x1c) == 0xf) {
    return in_FP0;
  }
  lVar1 = (longdouble)1.0;
  if ((((100 < DAT_000011c4) && (lVar1 = (longdouble)0.9995, 0x78 < DAT_000011c4)) &&
      (lVar1 = (longdouble)0.999, 0x96 < DAT_000011c4)) &&
     (((lVar1 = (longdouble)0.9985, 0xb4 < DAT_000011c4 &&
       (lVar1 = (longdouble)0.998, 0xdc < DAT_000011c4)) &&
      (lVar1 = (longdouble)0.9975, 300 < DAT_000011c4)))) {
    lVar1 = (longdouble)0.997;
  }
  return lVar1 * (longdouble)unaff_D3;
}



// Function: FUN_000170c2 @ 000170c2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000170c2(void)

{
  if ((ushort)((uint)(_DAT_0000af58 << 0xc) >> 0x1c) == 0xf) {
    return;
  }
  return;
}



// Function: FUN_00017140 @ 00017140

void FUN_00017140(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = 0;
  if (DAT_000010d9 != '\x0f') {
    if ((DAT_00002980 != 0) && (iVar2 = DAT_00002778, DAT_00002778 < 0)) {
      iVar2 = -DAT_00002778;
    }
    if (DAT_00002984 != 0) {
      iVar4 = DAT_0000277c;
      if (DAT_0000277c < 0) {
        iVar4 = -DAT_0000277c;
      }
      if (iVar2 < iVar4) {
        iVar2 = iVar4;
      }
    }
    if (DAT_00002988 != 0) {
      iVar4 = DAT_00002780;
      if (DAT_00002780 < 0) {
        iVar4 = -DAT_00002780;
      }
      if (iVar2 < iVar4) {
        iVar2 = iVar4;
      }
    }
    if (DAT_0000298c != 0) {
      iVar4 = DAT_00002784;
      if (DAT_00002784 < 0) {
        iVar4 = -DAT_00002784;
      }
      if (iVar2 < iVar4) {
        iVar2 = iVar4;
      }
    }
  }
  if ((DAT_01200815 & 0x80) == 0) {
    if ((DAT_000031e2 & 1) == 0) {
      if (DAT_00001070 <= iVar2) {
        __m68k_trap(0xe);
      }
    }
    else {
      bVar1 = DAT_00007788 & 4;
      DAT_00007788 = DAT_00007788 | 4;
      if (bVar1 == 0) {
        __m68k_trap(0xe);
      }
    }
  }
  uVar3 = DAT_0000106c;
  if (DAT_0000106c == 0) {
    uVar3 = 0x6338;
  }
  DAT_000011c4 = (uint)(iVar2 * 100) / uVar3;
  return;
}



// Function: FUN_00017208 @ 00017208

void FUN_00017208(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (DAT_0000afc4 == 0) {
    if (DAT_0000af9c < 4) {
      DAT_00002a9c = 0xfff;
    }
    else {
      DAT_00002a9c = 0x3fff;
    }
    DAT_00002a98 = 0;
    DAT_00002aa0 = 0;
    DAT_00002aa8 = 0;
    DAT_00002ab0 = 0;
    DAT_00002aa4 = DAT_00002a9c;
    DAT_00002aac = DAT_00002a9c;
    DAT_00002ab4 = DAT_00002a9c;
  }
  else {
    iVar1 = DAT_00002854 * 2;
    iVar5 = DAT_00002858 * 2;
    iVar2 = DAT_0000285c * 2;
    iVar7 = DAT_00002860 * 2;
    iVar3 = iVar1;
    if (iVar1 < 0) {
      iVar3 = DAT_00002854 * -2;
    }
    iVar6 = iVar5;
    if (iVar5 < 0) {
      iVar6 = DAT_00002858 * -2;
    }
    iVar4 = iVar2;
    if (iVar2 < 0) {
      iVar4 = DAT_0000285c * -2;
    }
    iVar8 = iVar7;
    if (iVar7 < 0) {
      iVar8 = DAT_00002860 * -2;
    }
    DAT_00002a40 = DAT_00002a30 * iVar1 >> 8;
    DAT_00002a44 = DAT_00002a34 * iVar5 >> 8;
    DAT_00002a48 = DAT_00002a38 * iVar2 >> 8;
    DAT_00002a4c = DAT_00002a3c * iVar7 >> 8;
    DAT_00002b48 = DAT_00002b38 * iVar3;
    DAT_00002b4c = DAT_00002b3c * iVar6;
    DAT_00002b50 = DAT_00002b40 * iVar4;
    DAT_00002b54 = DAT_00002b44 * iVar8;
    DAT_000029e4 = DAT_000029d0 * (&DAT_00002b6c)[(short)((ushort)(DAT_00002b48 >> 5) & 0x7f)] >> 8;
    DAT_000029e8 = DAT_000029d4 * (&DAT_00002b6c)[(short)((ushort)(DAT_00002b4c >> 5) & 0x7f)] >> 8;
    DAT_000029ec = DAT_000029d8 * (&DAT_00002b6c)[(short)((ushort)(DAT_00002b50 >> 5) & 0x7f)] >> 8;
    DAT_000029f0 = DAT_000029dc * (&DAT_00002b6c)[(short)((ushort)(DAT_00002b54 >> 5) & 0x7f)] >> 8;
    iVar1 = (DAT_00002a40 - DAT_000029e4) - DAT_00002a94;
    if (iVar1 < DAT_00002b34) {
      iVar1 = DAT_00002b34;
    }
    iVar5 = DAT_00002a94 + DAT_000029e4 + DAT_00002a40;
    if (DAT_00002b30 < iVar5) {
      iVar5 = DAT_00002b30;
    }
    iVar2 = (DAT_00002a44 - DAT_000029e8) - DAT_00002a94;
    if (iVar2 < DAT_00002b34) {
      iVar2 = DAT_00002b34;
    }
    iVar7 = DAT_00002a94 + DAT_000029e8 + DAT_00002a44;
    if (DAT_00002b30 < iVar7) {
      iVar7 = DAT_00002b30;
    }
    iVar3 = (DAT_00002a48 - DAT_000029ec) - DAT_00002a94;
    if (iVar3 < DAT_00002b34) {
      iVar3 = DAT_00002b34;
    }
    iVar6 = DAT_00002a94 + DAT_000029ec + DAT_00002a48;
    if (DAT_00002b30 < iVar6) {
      iVar6 = DAT_00002b30;
    }
    iVar4 = (DAT_00002a4c - DAT_000029f0) - DAT_00002a94;
    if (iVar4 < DAT_00002b34) {
      iVar4 = DAT_00002b34;
    }
    iVar8 = DAT_00002a94 + DAT_000029f0 + DAT_00002a4c;
    if (DAT_00002b30 < iVar8) {
      iVar8 = DAT_00002b30;
    }
    DAT_00002a98 = iVar1 + 0x400;
    DAT_00002aa0 = iVar2 + 0x400;
    DAT_00002aa8 = iVar3 + 0x400;
    DAT_00002ab0 = iVar4 + 0x400;
    DAT_00002a9c = iVar5 + 0x400;
    DAT_00002aa4 = iVar7 + 0x400;
    DAT_00002aac = iVar6 + 0x400;
    DAT_00002ab4 = iVar8 + 0x400;
  }
  return;
}



// Function: FUN_00017390 @ 00017390

void FUN_00017390(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_0000afc4 != 0) {
    if ((DAT_000031ed & 1) == 0) {
      iVar1 = 0;
      iVar5 = 0;
      iVar2 = 0;
      iVar3 = 0;
    }
    else {
      iVar5 = (int)((float)DAT_00002a94 * 1.5);
      iVar1 = DAT_00002840 + -0x400;
      if (iVar1 < 0) {
        iVar1 = iVar5 + iVar1;
        if (-1 < iVar1) {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = iVar1 - iVar5;
        if (iVar1 < 0) {
          iVar1 = 0;
        }
      }
      iVar2 = DAT_00002844 + -0x400;
      if (iVar2 < 0) {
        iVar2 = iVar5 + iVar2;
        if (-1 < iVar2) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = iVar2 - iVar5;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
      }
      iVar3 = DAT_00002848 + -0x400;
      if (iVar3 < 0) {
        iVar3 = iVar5 + iVar3;
        if (-1 < iVar3) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = iVar3 - iVar5;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
      }
      iVar4 = DAT_0000284c + -0x400;
      if (iVar4 < 0) {
        iVar4 = iVar5 + iVar4;
        if (-1 < iVar4) {
          iVar4 = 0;
        }
      }
      else {
        iVar4 = iVar4 - iVar5;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
      }
      iVar1 = (DAT_00002a90 * (iVar1 - DAT_00002a40)) /
              (DAT_00002a70 * (&DAT_00002b6c)[(short)((ushort)(DAT_00002b48 >> 5) & 0x7f)] >> 8);
      iVar5 = (DAT_00002a90 * (iVar2 - DAT_00002a44)) /
              (DAT_00002a74 * (&DAT_00002b6c)[(short)((ushort)(DAT_00002b4c >> 5) & 0x7f)] >> 8);
      iVar2 = (DAT_00002a90 * (iVar3 - DAT_00002a48)) /
              (DAT_00002a78 * (&DAT_00002b6c)[(short)((ushort)(DAT_00002b50 >> 5) & 0x7f)] >> 8);
      iVar3 = (DAT_00002a90 * (iVar4 - DAT_00002a4c)) /
              (DAT_00002a7c * (&DAT_00002b6c)[(short)((ushort)(DAT_00002b54 >> 5) & 0x7f)] >> 8);
      DAT_00002a60 = DAT_00002a60 + ((iVar1 * iVar1 >> 4) - DAT_00002a60 >> 2);
      DAT_00002a64 = DAT_00002a64 + ((iVar5 * iVar5 >> 4) - DAT_00002a64 >> 2);
      DAT_00002a68 = DAT_00002a68 + ((iVar2 * iVar2 >> 4) - DAT_00002a68 >> 2);
      DAT_00002a6c = DAT_00002a6c + ((iVar3 * iVar3 >> 4) - DAT_00002a6c >> 2);
      iVar1 = DAT_00002a80 + DAT_00002a60 + -0x10;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      iVar5 = DAT_00002a84 + DAT_00002a64 + -0x10;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      iVar2 = DAT_00002a88 + DAT_00002a68 + -0x10;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      iVar3 = DAT_00002a8c + DAT_00002a6c + -0x10;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
    }
    if (DAT_00002980 == 0) {
      iVar1 = 0;
    }
    if (DAT_00002984 == 0) {
      iVar5 = 0;
    }
    if (DAT_00002988 == 0) {
      iVar2 = 0;
    }
    if (DAT_0000298c == 0) {
      iVar3 = 0;
    }
    iVar4 = iVar1;
    if (iVar1 < iVar5) {
      iVar4 = iVar5;
    }
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    DAT_00002a80 = iVar1;
    DAT_00002a84 = iVar5;
    DAT_00002a88 = iVar2;
    DAT_00002a8c = iVar3;
    DAT_00002ab8 = iVar4;
    if (DAT_00002abc <= iVar4) {
      DAT_00002a80 = 0;
      DAT_00002a84 = 0;
      DAT_00002a88 = 0;
      DAT_00002a8c = 0;
      DAT_00002ab8 = 0;
      if (iVar4 == iVar1) {
        __m68k_trap(0xe);
      }
      else if (iVar4 == iVar5) {
        __m68k_trap(0xe);
      }
      else if (iVar4 == iVar2) {
        __m68k_trap(0xe);
      }
      else if (iVar4 == iVar3) {
        __m68k_trap(0xe);
      }
    }
    return;
  }
  return;
}



// Function: FUN_000175ba @ 000175ba

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000175ba(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  
  if (DAT_000010d9 == '\x0f') {
    return;
  }
  uVar4 = (ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c);
  if ((((uVar4 == 1) || (uVar4 == 7)) && ((DAT_00000bd8 & 0x20) != 0)) &&
     ((((DAT_000010d8 & 0x10) != 0 && ((DAT_00000bd9 & 4) == 0)) &&
      ((DAT_000026e0 != 0 && ((DAT_00000bd9 & 0x40) == 0)))))) {
    if (DAT_00003254 == 0) {
      return;
    }
    if (DAT_0000aed8 != DAT_0000107c) {
      DAT_0000107c = DAT_0000aed8;
      DAT_00001080 = DAT_00007778 + 200;
    }
    if (DAT_00007778 < DAT_00001080) {
      return;
    }
    uVar2 = DAT_00003254 - DAT_0000aed0;
    if ((int)DAT_00003254 < DAT_0000aed0) {
      uVar2 = -uVar2;
    }
    uVar1 = DAT_00003254;
    if ((int)DAT_00003254 < 0) {
      uVar1 = -DAT_00003254;
    }
    iVar3 = (int)(short)(((uVar2 & 0xffff) * 0x640) / (uVar1 & 0xffff));
    if (iVar3 <= DAT_00001078) {
      return;
    }
    if (DAT_00001074 <= iVar3) {
      DAT_00000bd9 = DAT_00000bd9 | 0x40;
      FUN_0002f332();
      __m68k_trap(0xe);
      return;
    }
  }
  return;
}



// Function: FUN_00017696 @ 00017696

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00017696(void)

{
  int iVar1;
  int unaff_D3;
  int iVar2;
  ushort uVar3;
  
  if (DAT_000010d9 == '\x0f') {
    return;
  }
  uVar3 = (ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c);
  if ((uVar3 == 1) || (uVar3 == 7)) {
    if (DAT_0000aed0 < DAT_00001088) {
      DAT_00001094 = 0;
      return;
    }
    if ((DAT_00001094 == 0) && (DAT_0000aed4 < 0x641)) {
      return;
    }
    if (((DAT_000010d8 & 0x10) != 0) && (DAT_000026e0 != 0)) {
      iVar1 = DAT_0000aed4;
      iVar2 = unaff_D3;
      if (DAT_00001094 != 0) {
        iVar1 = (DAT_0000aed4 + -0x640 >> 2) + 0x640;
        iVar2 = DAT_00001094;
      }
      DAT_00001094 = (uint)(iVar1 * iVar2) / 0x640;
      if (unaff_D3 < (int)DAT_00001094) {
        DAT_00001094 = 0;
      }
      return;
    }
  }
  DAT_00001094 = 0;
  return;
}



// Function: FUN_0001772a @ 0001772a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001772a(void)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  
  if ((DAT_00001084 != 0) &&
     ((uVar3 = (ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c), uVar3 == 1 || (uVar3 == 7)))) {
    iVar1 = (DAT_000030b0 & 0xff) - 0x80;
    if ((DAT_000030b0 & 0xff) < 0x80) {
      iVar1 = -iVar1;
    }
    DAT_00001090 = iVar1 * 0x10 + DAT_00001090 * 3 >> 2;
    uVar3 = (ushort)_DAT_0000af58 >> 0xc;
    if (uVar3 == 0) {
      iVar1 = DAT_0000aed0;
      if (DAT_0000aed0 < 0) {
        iVar1 = -DAT_0000aed0;
      }
      iVar2 = DAT_00001090;
      if (DAT_00001090 < 0) {
        iVar2 = -DAT_00001090;
      }
      iVar2 = DAT_0000108c * iVar2 >> 0xc;
      if (iVar1 < DAT_00001088) {
        DAT_0000aed4 = (uint)(iVar2 * 0x640) / 0x45;
      }
      else {
        DAT_0000aed4 = (uint)(((iVar1 * iVar2) / 0x32) * 0x640) / DAT_00001084;
      }
    }
    else if (uVar3 == 1) {
      iVar1 = DAT_0000aed0;
      if (DAT_0000aed0 < 0) {
        iVar1 = -DAT_0000aed0;
      }
      iVar2 = DAT_00001090;
      if (DAT_00001090 < 0) {
        iVar2 = -DAT_00001090;
      }
      iVar2 = DAT_0000108c * iVar2 >> 0xc;
      if (iVar1 < DAT_00001088) {
        DAT_0000aed4 = (uint)(iVar2 * 0x640) / 0x45;
      }
      else {
        DAT_0000aed4 = (uint)(iVar2 * 0x640) / DAT_00001084;
      }
    }
  }
  return;
}



// Function: FUN_00017824 @ 00017824

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00017824(void)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 (*pauVar9) [12];
  undefined1 (*extraout_A1) [12];
  undefined1 (*extraout_A1_00) [12];
  byte bVar10;
  undefined4 in_FPSR;
  longdouble lVar11;
  longdouble lVar12;
  longdouble lVar13;
  longdouble lVar14;
  longdouble lVar15;
  
  bVar10 = (byte)((uint)in_FPSR >> 0x18);
  if ((DAT_000010d8 & 8) != 0) {
    DAT_000014c6 = DAT_000014c6 + 1;
  }
  _DAT_00000bf4 = ZEXT812(0) << 0x20;
  if ((((ushort)((uint)(_DAT_0000af58 << 0xc) >> 0x1c) != 0xf) &&
      (DAT_0000af04 != '\0' || (DAT_0000c545 & 2) != 0)) &&
     (((DAT_00003268 & 4) != 0 || ((DAT_00003268 & 8) == 0)))) {
    lVar11 = _DAT_00000c84 - ((longdouble)DAT_0000af00 - (longdouble)100);
    if (lVar11 == FLOAT_UNKNOWN || FLOAT_UNKNOWN <= lVar11) {
      bVar10 = 0;
      if ((_DAT_00000c84 - (longdouble)DAT_00002758 == FLOAT_UNKNOWN ||
           _DAT_00000c84 - (longdouble)DAT_00002758 < FLOAT_UNKNOWN) ||
         (bVar10 = 0, (DAT_00003268 & 0x10) != 0)) goto LAB_000178c6;
    }
    __m68k_trap(0xe);
    FUN_0001a9f2();
    return;
  }
LAB_000178c6:
  auVar1._0_10_ = _DAT_00000c18;
  auVar1._10_2_ = DAT_00000c20._2_2_;
  _DAT_00000d08 = _DAT_00000c6c - (longdouble)auVar1;
  auVar2._0_10_ = _DAT_00000c24;
  auVar2._10_2_ = DAT_00000c2c._2_2_;
  _DAT_00000d14 = _DAT_00000c78 - (longdouble)auVar2;
  auVar3._0_10_ = _DAT_00000c30;
  auVar3._10_2_ = DAT_00000c38._2_2_;
  _DAT_00000d20 = _DAT_00000c84 - (longdouble)auVar3;
  auVar4._0_10_ = _DAT_00000c3c;
  auVar4._10_2_ = uRam00000c46;
  _DAT_00000d2c = _DAT_00000c90 - (longdouble)auVar4;
  if (!(bool)(bVar10 >> 2 & 1)) {
    DAT_000010d8 = DAT_000010d8 & 0xf7;
  }
  auVar5._0_10_ = _DAT_00000c48;
  auVar5._10_2_ = uRam00000c52;
  _DAT_00000d38 = _DAT_00000c9c - (longdouble)auVar5;
  lVar11 = _DAT_00000d08 * _DAT_00000d08 + _DAT_00000d14 * _DAT_00000d14 +
           _DAT_00000d20 * _DAT_00000d20 + _DAT_00000d2c * _DAT_00000d2c;
  if (lVar11 == FLOAT_UNKNOWN) {
    DAT_00000bd9 = DAT_00000bd9 | 2;
    lVar12 = _DAT_00000d38 * _DAT_00000d38 + FLOAT_UNKNOWN;
  }
  else {
    DAT_00000bd9 = DAT_00000bd9 & 0xfd;
    lVar12 = lVar11;
  }
  lVar12 = SQRT(lVar12);
  _DAT_00000bdc = (undefined1  [12])lVar12;
  lVar11 = SQRT(lVar11 + _DAT_00000d38 * _DAT_00000d38);
  DAT_000010f0 = (int)lVar11;
  if (_DAT_00000bdc == (undefined1  [12])0x0) {
LAB_00017cc6:
    DAT_00007784 = DAT_00007784 & 0xbf;
    _DAT_0000147a = _DAT_00000d8c;
    lRam00001486 = _DAT_00000d98;
    lRam00001492 = _DAT_00000da4;
    lRam0000149e = _DAT_00000db0;
    lRam000014aa = _DAT_00000dbc;
    if ((DAT_000010d8 & 8) != 0) {
      _DAT_00000c6c = (undefined1  [12])DAT_00002750;
      _DAT_00000c78 = (undefined1  [12])DAT_00002754;
      _DAT_00000c84 = (undefined1  [12])DAT_00002758;
    }
    FUN_0001a856();
    FUN_0001b61c();
    DAT_0000c5d2 = 0;
    return;
  }
  if (((DAT_000010d8 & 8) == 0) && ((DAT_000010e0 & 8) != 0)) {
    _DAT_00001340 = (int)((longdouble)_DAT_00001340 - ((longdouble)_DAT_0000135c - lVar11));
  }
  _DAT_00000d8c = _DAT_00000d08 / lVar12;
  _DAT_00000d98 = _DAT_00000d14 / lVar12;
  _DAT_00000da4 = _DAT_00000d20 / lVar12;
  _DAT_00000db0 = _DAT_00000d2c / lVar12;
  _DAT_00000dbc = _DAT_00000d38 / lVar12;
  _DAT_00001134 = (undefined1  [12])(lVar11 / lVar12);
  if ((DAT_000010d8 & 8) != 0) {
    FUN_00017e8e();
    if ((DAT_000010d8 & 8) != 0) {
      FUN_000181cc();
    }
    if ((DAT_000010d8 & 8) != 0) {
      FUN_00018330();
    }
  }
  DAT_000013f6 = 0;
  _DAT_000013fa = 0;
  _DAT_000013fe = 0;
  DAT_00001402 = 0;
  _DAT_00001406 = 0;
  _DAT_0000140a = 0;
  DAT_0000140e = 0;
  _DAT_00001412 = 0;
  _DAT_00001416 = 0;
  _DAT_0000141a = ZEXT812(0) << 0x20;
  _DAT_00001426 = ZEXT812(0) << 0x20;
  _DAT_00001432 = ZEXT812(0) << 0x20;
  _DAT_00001462 = ZEXT812(0) << 0x20;
  DAT_0000c5d2 = 0;
  _DAT_0000143e = ZEXT812(0) << 0x20;
  _DAT_0000144a = ZEXT812(0) << 0x20;
  _DAT_00001456 = ZEXT812(0) << 0x20;
  DAT_00007784 = DAT_00007784 & 0xbf;
  do {
    pauVar9 = (undefined1 (*) [12])&DAT_00000c18;
    lVar11 = (longdouble)_DAT_00001340;
    lVar12 = lVar11 - (longdouble)_DAT_00000c00;
    if (lVar11 != FLOAT_UNKNOWN && lVar11 < FLOAT_UNKNOWN) {
      lVar12 = (longdouble)0.0;
    }
    _DAT_00001340 = (int)lVar12;
    if ((DAT_000010d8 & 8) == 0) {
      _DAT_00001462 = (undefined1  [12])(longdouble)_DAT_00000bf4;
    }
    else {
      lVar11 = (longdouble)DAT_000010f0;
      if (lVar11 == FLOAT_UNKNOWN || lVar11 < FLOAT_UNKNOWN) {
        _DAT_00001462 = (undefined1  [12])(longdouble)_DAT_00000bf4;
      }
      else if ((lVar11 - (longdouble)_DAT_000013a2 == FLOAT_UNKNOWN ||
                lVar11 - (longdouble)_DAT_000013a2 < FLOAT_UNKNOWN) || (DAT_0000c5d2 != 0)) {
        if (0 < DAT_00001396) {
          DAT_0000c5d2 = DAT_0000c5d2 + 1;
          if (DAT_0000c5d2 == 1) {
            FUN_00017d18();
          }
          lVar11 = (longdouble)_DAT_0000141a;
          lVar12 = (longdouble)_DAT_00001426;
          lVar13 = (longdouble)_DAT_00001432;
          auVar6._0_4_ = DAT_000013f6;
          auVar6._4_4_ = _DAT_000013fa;
          auVar6._8_4_ = _DAT_000013fe;
          auVar7._0_4_ = DAT_00001402;
          auVar7._4_4_ = _DAT_00001406;
          auVar7._8_4_ = _DAT_0000140a;
          auVar8._0_4_ = DAT_0000140e;
          auVar8._4_4_ = _DAT_00001412;
          auVar8._8_4_ = _DAT_00001416;
          _DAT_0000141a = (undefined1  [12])(lVar11 + (longdouble)auVar6);
          _DAT_00001426 = (undefined1  [12])(lVar12 + (longdouble)auVar7);
          _DAT_00001432 = (undefined1  [12])(lVar13 + (longdouble)auVar8);
          _DAT_0000143e =
               (undefined1  [12])(lVar11 + (longdouble)auVar6 + (longdouble)_DAT_0000143e);
          _DAT_0000144a =
               (undefined1  [12])(lVar12 + (longdouble)auVar7 + (longdouble)_DAT_0000144a);
          _DAT_00001456 =
               (undefined1  [12])(lVar13 + (longdouble)auVar8 + (longdouble)_DAT_00001456);
          FUN_00018446();
          pauVar9 = extraout_A1_00;
        }
      }
      else {
        FUN_000181cc();
        FUN_00018330();
        _DAT_00001462 = (undefined1  [12])(longdouble)_DAT_00000bf4;
        pauVar9 = extraout_A1;
      }
    }
    lVar11 = (longdouble)_DAT_00001462;
    if (lVar11 - (longdouble)_DAT_00000bf4 == FLOAT_UNKNOWN) {
      lVar11 = lVar11 + (longdouble)_DAT_00000c00;
      _DAT_00000c00 = ZEXT812(0) << 0x20;
      if (lVar11 - (longdouble)_DAT_00000bdc != FLOAT_UNKNOWN &&
          FLOAT_UNKNOWN <= lVar11 - (longdouble)_DAT_00000bdc) {
        _DAT_00000c00 = (undefined1  [12])(lVar11 - (longdouble)_DAT_00000bdc);
        lVar11 = (longdouble)_DAT_00000bdc;
      }
    }
    if (DAT_0000c5d2 == 0) {
      DAT_000010f0 = (int)(((longdouble)_DAT_00000bdc - lVar11) / (longdouble)_DAT_00001134);
    }
    if ((lVar11 - (longdouble)_DAT_00000bdc != FLOAT_UNKNOWN) &&
       ((longdouble)_DAT_00001462 - (longdouble)_DAT_00000bf4 != FLOAT_UNKNOWN)) {
      lVar11 = (longdouble)_DAT_00000bf4 + (longdouble)_DAT_00000c00;
      _DAT_00000c00 = ZEXT812(0) << 0x20;
    }
    _DAT_00000bf4 = (undefined1  [12])lVar11;
    if (_DAT_00000bf4 != (undefined1  [12])0x0) {
      DAT_000031ed = DAT_000031ed | 2;
    }
    lVar14 = _DAT_00000db0 * lVar11 + (longdouble)pauVar9[3];
    lVar15 = _DAT_00000dbc * lVar11 + (longdouble)pauVar9[4];
    lVar12 = _DAT_00000d8c * lVar11 + (longdouble)*pauVar9 + (longdouble)_DAT_0000143e;
    lVar13 = _DAT_00000d98 * lVar11 + (longdouble)pauVar9[1] + (longdouble)_DAT_0000144a;
    lVar11 = _DAT_00000da4 * lVar11 + (longdouble)pauVar9[2] + (longdouble)_DAT_00001456;
    DAT_00002750 = (int)lVar12;
    DAT_00002754 = (int)lVar13;
    DAT_00002758 = (int)lVar11;
    DAT_0000275c = (int)lVar14;
    DAT_00002760 = (int)lVar15;
    FUN_0001a906();
    if (DAT_0000c5d2 < 1) {
      if (DAT_000010f0 < 1) goto LAB_00017cc6;
    }
    else if (DAT_00001396 <= DAT_0000c5d2) goto LAB_00017cc6;
    if ((((DAT_00000bd8 & 4) != 0) && ((DAT_00000bd9 & 0x20) != 0)) && ((DAT_00000bd8 & 2) == 0)) {
      _DAT_00000c18 = lVar12;
      _DAT_00000c24 = lVar13;
      _DAT_00000c30 = lVar11;
      _DAT_00000c3c = lVar14;
      _DAT_00000c48 = lVar15;
      _DAT_0000147a = _DAT_00000d8c;
      lRam00001486 = _DAT_00000d98;
      lRam00001492 = _DAT_00000da4;
      lRam0000149e = _DAT_00000db0;
      lRam000014aa = _DAT_00000dbc;
      return;
    }
    FUN_0001a8fe();
    if (((DAT_000010d8 & 0x20) == 0) && ((DAT_000010d8 & 8) != 0)) {
      DAT_00007784 = DAT_00007784 | 0x40;
      DAT_000010d8 = DAT_000010d8 & 0xf7;
    }
  } while( true );
}



// Function: FUN_00017d18 @ 00017d18

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00017d18(void)

{
  int iVar1;
  undefined4 in_D0;
  int iVar2;
  undefined4 in_D1;
  longdouble lVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;
  longdouble lVar7;
  
  iVar1 = DAT_00001396 + DAT_00001396 * DAT_00001396 >> 1;
  iVar2 = DAT_000010ec * DAT_00001396;
  lVar3 = ((longdouble)_DAT_00000d8c * (longdouble)iVar2 + (longdouble)DAT_00002750 +
          (longdouble)_DAT_000013f6 * (longdouble)iVar1) - (longdouble)_DAT_00000c6c;
  lVar6 = ((longdouble)_DAT_00000d98 * (longdouble)iVar2 + (longdouble)DAT_00002754 +
          (longdouble)_DAT_00001402 * (longdouble)iVar1) - (longdouble)_DAT_00000c78;
  lVar7 = ((longdouble)_DAT_00000da4 * (longdouble)iVar2 + (longdouble)DAT_00002758 +
          (longdouble)_DAT_0000140e * (longdouble)iVar1) - (longdouble)_DAT_00000c84;
  lVar4 = SQRT(lVar3 * lVar3 + lVar6 * lVar6 + lVar7 * lVar7);
  if ((longdouble)_DAT_0000140e == FLOAT_UNKNOWN) {
    return CONCAT44(in_D0,in_D1);
  }
  lVar5 = (longdouble)(undefined1  [12])0x0 /
          (longdouble)(DAT_00001396 + DAT_00001396 * DAT_00001396);
  _DAT_000013f6 =
       (undefined1  [12])
       ((longdouble)_DAT_000013f6 - (lVar3 / lVar4 - (longdouble)_DAT_00000de0) * lVar4 * lVar5);
  _DAT_00001402 =
       (undefined1  [12])
       ((longdouble)_DAT_00001402 - (lVar6 / lVar4 - (longdouble)_DAT_00000dec) * lVar4 * lVar5);
  _DAT_0000140e =
       (undefined1  [12])
       ((longdouble)_DAT_0000140e - (lVar7 / lVar4 - (longdouble)_DAT_00000df8) * lVar4 * lVar5);
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00017e8e @ 00017e8e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00017e8e(void)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  longdouble lVar10;
  undefined4 in_D0;
  undefined4 in_D1;
  ushort *extraout_A0;
  longdouble lVar11;
  longdouble lVar12;
  longdouble lVar13;
  
  lVar10 = _DAT_00000c90;
  lVar13 = _DAT_00000c84;
  lVar12 = _DAT_00000c78;
  lVar11 = _DAT_00000c6c;
  FUN_0000ddf2();
  if ((*extraout_A0 & 0x8000) == 0) {
    DAT_000010d8 = DAT_000010d8 & 0xd7;
  }
  else if ((*extraout_A0 & 0x4000) == 0) {
    DAT_000010d8 = DAT_000010d8 & 0xd7;
  }
  else if ((char)extraout_A0[1] == '\0') {
    _DAT_00000d5c = lVar11 - (longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x15);
    _DAT_00000d68 = lVar12 - (longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x1b);
    _DAT_00000d74 = lVar13 - (longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x21);
    _DAT_00000d80 = lVar10 - (longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x27);
    lVar11 = SQRT(_DAT_00000d5c * _DAT_00000d5c + _DAT_00000d68 * _DAT_00000d68 +
                  _DAT_00000d74 * _DAT_00000d74 + _DAT_00000d80 * _DAT_00000d80);
    _DAT_00000be8 = (undefined1  [12])lVar11;
    if (_DAT_00000be8 == (undefined1  [12])0x0) {
      DAT_000010d8 = DAT_000010d8 & 0xf7;
      return CONCAT44(in_D0,in_D1);
    }
    lVar11 = -lVar11;
    _DAT_00000de0 = _DAT_00000d5c / lVar11;
    _DAT_00000dec = _DAT_00000d68 / lVar11;
    _DAT_00000df8 = _DAT_00000d74 / lVar11;
    _DAT_00000e04 = _DAT_00000d80 / lVar11;
    auVar7._0_10_ = _DAT_00000de0;
    auVar7._10_2_ = uRam00000dea;
    lVar11 = (longdouble)auVar7 - (longdouble)_DAT_00000d8c;
    _DAT_000013c6 = (undefined1  [12])lVar11;
    auVar8._0_10_ = _DAT_00000dec;
    auVar8._10_2_ = uRam00000df6;
    lVar12 = (longdouble)auVar8 - (longdouble)_DAT_00000d98;
    _DAT_000013d2 = (undefined1  [12])lVar12;
    auVar9._0_10_ = _DAT_00000df8;
    auVar9._10_2_ = uRam00000e02;
    lVar13 = (longdouble)auVar9 - (longdouble)_DAT_00000da4;
    _DAT_000013de = (undefined1  [12])lVar13;
    _DAT_000013ea = (undefined1  [12])SQRT(lVar11 * lVar11 + lVar12 * lVar12 + lVar13 * lVar13);
    if (_DAT_000013ea == (undefined1  [12])0x0) {
      DAT_000010d8 = DAT_000010d8 & 0xf7;
      return CONCAT44(in_D0,in_D1);
    }
    auVar1._0_10_ = _DAT_00000c6c;
    auVar1._10_2_ = DAT_00000c74._2_2_;
    auVar3._0_10_ = _DAT_00000c78;
    auVar3._10_2_ = DAT_00000c80._2_2_;
    auVar5._0_10_ = _DAT_00000c84;
    auVar5._10_2_ = DAT_00000c8c._2_2_;
    auVar2._0_10_ = _DAT_00000c6c;
    auVar2._10_2_ = DAT_00000c74._2_2_;
    auVar4._0_10_ = _DAT_00000c78;
    auVar4._10_2_ = DAT_00000c80._2_2_;
    auVar6._0_10_ = _DAT_00000c84;
    auVar6._10_2_ = DAT_00000c8c._2_2_;
    lVar11 = ((longdouble)auVar1 - (longdouble)_DAT_00000c18) *
             ((longdouble)auVar1 - (longdouble)_DAT_00000c18) +
             ((longdouble)auVar3 - (longdouble)_DAT_00000c24) *
             ((longdouble)auVar3 - (longdouble)_DAT_00000c24) +
             ((longdouble)auVar5 - (longdouble)_DAT_00000c30) *
             ((longdouble)auVar5 - (longdouble)_DAT_00000c30);
    lVar12 = ((longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x15) - (longdouble)auVar2) *
             ((longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x15) - (longdouble)auVar2) +
             ((longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x1b) - (longdouble)auVar4) *
             ((longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x1b) - (longdouble)auVar4) +
             ((longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x21) - (longdouble)auVar6) *
             ((longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x21) - (longdouble)auVar6);
    lVar11 = (longdouble)
             acos(-((((((longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x15) -
                       (longdouble)_DAT_00000c18) *
                       ((longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x15) -
                       (longdouble)_DAT_00000c18) +
                       ((longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x1b) -
                       (longdouble)_DAT_00000c24) *
                       ((longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x1b) -
                       (longdouble)_DAT_00000c24) +
                      ((longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x21) -
                      (longdouble)_DAT_00000c30) *
                      ((longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x21) -
                      (longdouble)_DAT_00000c30)) - lVar11) - lVar12) /
                   (SQRT(lVar11) * (longdouble)(undefined1  [12])0x0 * SQRT(lVar12))));
    if (lVar11 - (longdouble)(undefined1  [12])0x32b8c75c4a83b1d1 != FLOAT_UNKNOWN &&
        lVar11 - (longdouble)(undefined1  [12])0x32b8c75c4a83b1d1 < FLOAT_UNKNOWN) {
      DAT_000010d8 = DAT_000010d8 & 0xd7;
      return CONCAT44(in_D0,in_D1);
    }
    lVar11 = (longdouble)sin(lVar11 * (longdouble)(undefined1  [12])0x0);
    _DAT_0000146e = (undefined1  [12])((longdouble)(undefined1  [12])0x0 / lVar11);
    FUN_00018116();
  }
  else {
    DAT_000010d8 = DAT_000010d8 & 0xd7;
  }
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00018116 @ 00018116

void FUN_00018116(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_0000139a < DAT_000010ec) {
    iVar2 = (uint)-(DAT_0000139a - DAT_000010ec) / DAT_00000fa8 + 0xf;
    iVar3 = iVar2 + iVar2 * iVar2;
    iVar3 = -(DAT_00000fa8 * CONCAT22((short)((uint)iVar3 >> 0x10),(short)iVar3 >> 1));
  }
  else if (DAT_00000fa4 < DAT_0000139a) {
    if (DAT_00000fa4 < DAT_000010ec) {
      iVar3 = 0;
      iVar2 = DAT_000010ec;
    }
    else {
      uVar1 = (uint)(DAT_00000fa4 - DAT_000010ec) / DAT_00000f9c;
      iVar3 = DAT_00000f9c * ((int)(uVar1 + uVar1 * uVar1) >> 1);
      iVar2 = DAT_00000fa4;
    }
    iVar2 = (uint)(DAT_0000139a - iVar2) / DAT_00000fa0 + 0xf;
    iVar3 = iVar3 + DAT_00000fa0 * (iVar2 + iVar2 * iVar2 >> 1);
  }
  else {
    iVar2 = (uint)(DAT_0000139a - DAT_000010ec) / DAT_00000f9c + 0xf;
    iVar3 = DAT_00000f9c * (iVar2 + iVar2 * iVar2 >> 1);
  }
  DAT_0000139e = iVar3 + DAT_000010ec * iVar2;
  return;
}



// Function: FUN_000181cc @ 000181cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000181cc(void)

{
  longdouble lVar1;
  undefined4 in_D0;
  undefined4 in_D1;
  int iVar2;
  longdouble lVar3;
  longdouble lVar4;
  longdouble lVar5;
  
  lVar1 = (longdouble)_DAT_000013ea;
  lVar5 = (longdouble)_DAT_000013c6 / lVar1 - (longdouble)(undefined1  [12])0x0;
  iVar2 = DAT_00000fa8;
  if ((lVar5 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar5) &&
     (iVar2 = DAT_00000fa0, DAT_000010ec <= DAT_00000fa4)) {
    iVar2 = DAT_00000f9c;
  }
  lVar3 = ((longdouble)_DAT_000013c6 / lVar1) * (longdouble)iVar2;
  lVar5 = (longdouble)_DAT_000013d2 / lVar1 - (longdouble)(undefined1  [12])0x0;
  iVar2 = DAT_00000fa8;
  if ((lVar5 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar5) &&
     (iVar2 = DAT_00000fa0, DAT_000010ec <= DAT_00000fa4)) {
    iVar2 = DAT_00000f9c;
  }
  lVar4 = ((longdouble)_DAT_000013d2 / lVar1) * (longdouble)iVar2;
  lVar5 = (longdouble)_DAT_000013de / lVar1 - (longdouble)(undefined1  [12])0x0;
  iVar2 = DAT_00000fa8;
  if ((lVar5 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar5) &&
     (iVar2 = DAT_00000fa0, DAT_000010ec <= DAT_00000fa4)) {
    iVar2 = DAT_00000f9c;
  }
  lVar5 = (longdouble)iVar2;
  if (DAT_00001396 < 3) {
    lVar5 = lVar5 * (longdouble)(undefined1  [12])0x199999999999999a;
  }
  lVar5 = ((longdouble)_DAT_000013de / lVar1) * lVar5;
  lVar5 = SQRT(lVar5 * lVar5 + lVar4 * lVar4 + lVar3 * lVar3);
  _DAT_000013ba = (undefined1  [12])lVar5;
  DAT_00001396 = (int)(((longdouble)DAT_000010ec / lVar5) * lVar1) + 0xf;
  if (0 < DAT_00001396) {
    lVar5 = ((longdouble)DAT_000010ec / (longdouble)DAT_00001396) * lVar1;
    _DAT_000013f6 = (undefined1  [12])(((longdouble)_DAT_000013c6 * lVar5) / lVar1);
    _DAT_00001402 = (undefined1  [12])(((longdouble)_DAT_000013d2 * lVar5) / lVar1);
    _DAT_0000140e = (undefined1  [12])(((longdouble)_DAT_000013de * lVar5) / lVar1);
  }
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00018330 @ 00018330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00018330(void)

{
  int iVar1;
  undefined4 in_D0;
  int iVar2;
  undefined4 in_D1;
  longdouble lVar3;
  longdouble lVar4;
  longdouble lVar5;
  
  iVar2 = DAT_000010ec * DAT_00001396;
  iVar1 = DAT_00001396 + DAT_00001396 * DAT_00001396 >> 1;
  lVar3 = (longdouble)_DAT_000013f6 * (longdouble)iVar1 +
          (longdouble)_DAT_00000d8c * (longdouble)iVar2;
  lVar4 = (longdouble)_DAT_00001402 * (longdouble)iVar1 +
          (longdouble)_DAT_00000d98 * (longdouble)iVar2;
  lVar5 = (longdouble)_DAT_0000140e * (longdouble)iVar1 +
          (longdouble)_DAT_00000da4 * (longdouble)iVar2;
  lVar3 = SQRT(lVar5 * lVar5 + lVar4 * lVar4 + lVar3 * lVar3);
  _DAT_00000c0c = (undefined1  [12])lVar3;
  lVar3 = lVar3 * (longdouble)_DAT_0000146e;
  _DAT_000013a2 = (undefined1  [12])lVar3;
  _DAT_000013ae = (undefined1  [12])(lVar3 * (longdouble)(undefined1  [12])0x0);
  if ((DAT_00000bd9 & 0x40) == 0) {
    lVar4 = lVar3 * (longdouble)(undefined1  [12])0x0 + (longdouble)DAT_0000139e +
            (longdouble)DAT_000010ec;
    if ((lVar4 - (longdouble)_DAT_00000bdc != FLOAT_UNKNOWN &&
         FLOAT_UNKNOWN <= lVar4 - (longdouble)_DAT_00000bdc) ||
       (lVar4 - (longdouble)_DAT_00000be8 != FLOAT_UNKNOWN &&
        FLOAT_UNKNOWN <= lVar4 - (longdouble)_DAT_00000be8)) {
      DAT_000010d8 = DAT_000010d8 & 0xd7;
    }
    else {
      lVar4 = lVar4 - ((longdouble)_DAT_00000be8 - lVar3);
      if (lVar4 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar4) {
        DAT_000010d8 = DAT_000010d8 & 0xd7;
      }
    }
  }
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00018446 @ 00018446

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00018446(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;
  
  lVar1 = (longdouble)DAT_000010ec * (longdouble)_DAT_00000d8c + (longdouble)_DAT_0000141a;
  lVar2 = (longdouble)DAT_000010ec * (longdouble)_DAT_00000d98 + (longdouble)_DAT_00001426;
  lVar3 = (longdouble)DAT_000010ec * (longdouble)_DAT_00000da4 + (longdouble)_DAT_00001432;
  if (((longdouble)_DAT_00000bf4 - (longdouble)_DAT_00000c00) - (longdouble)_DAT_00001462 ==
      FLOAT_UNKNOWN) {
    _DAT_00001462 = (undefined1  [12])((longdouble)_DAT_00000c00 + (longdouble)_DAT_00001462);
    _DAT_00000bdc =
         (undefined1  [12])
         (((longdouble)_DAT_00000bdc - (longdouble)DAT_000010f0) + (longdouble)_DAT_00000c0c);
  }
  _DAT_00001462 =
       (undefined1  [12])
       (SQRT(lVar1 * lVar1 + lVar2 * lVar2 + lVar3 * lVar3) + (longdouble)_DAT_00001462);
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00019126 @ 00019126

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00019126(void)

{
  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;
  
  if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3) {
    FUN_00017824();
    return;
  }
  lVar3 = (longdouble)_DAT_00000c30 - (longdouble)_DAT_00000c84;
  if (lVar3 != FLOAT_UNKNOWN && lVar3 < FLOAT_UNKNOWN) {
    lVar3 = (longdouble)_DAT_00000c6c;
    lVar1 = (longdouble)_DAT_00000c78;
    lVar2 = (longdouble)_DAT_00000c90;
    _DAT_00000c6c = (undefined1  [12])(longdouble)_DAT_00000c18;
    _DAT_00000c78 = (undefined1  [12])(longdouble)_DAT_00000c24;
    _DAT_00000c90 = (undefined1  [12])(longdouble)_DAT_00000c3c;
    FUN_00017824();
    _DAT_00000c90 = (undefined1  [12])lVar2;
    _DAT_00000c78 = (undefined1  [12])lVar1;
    _DAT_00000c6c = (undefined1  [12])lVar3;
    FUN_00017824();
    return;
  }
  lVar3 = (longdouble)_DAT_00000c30 - (longdouble)_DAT_00000c84;
  if (lVar3 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar3) {
    lVar3 = (longdouble)_DAT_00000c84;
    _DAT_00000c84 = (undefined1  [12])(longdouble)_DAT_00000c30;
    FUN_00017824();
    _DAT_00000c84 = (undefined1  [12])lVar3;
    FUN_00017824();
    return;
  }
  FUN_00017824();
  return;
}



// Function: FUN_0001a288 @ 0001a288

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001a288(void)

{
  byte bVar1;
  int *piVar2;
  uint in_D0;
  uint uVar3;
  int iVar4;
  uint in_D1;
  uint unaff_D2;
  short sVar5;
  uint unaff_D3;
  uint uVar6;
  int unaff_D4;
  undefined4 unaff_D5;
  undefined4 unaff_D6;
  undefined4 unaff_D7;
  int *in_A0;
  undefined4 in_A1;
  int *unaff_A2;
  
  DAT_000010ec = 0;
  uVar6 = (uint)(_DAT_0000af58 << 0xc) >> 0x1c;
  DAT_00001098 = in_D0;
  DAT_0000109c = in_D1;
  DAT_000010a0 = unaff_D2;
  DAT_000010a4 = unaff_D3;
  DAT_000010a8 = unaff_D4;
  DAT_000010ac = unaff_D5;
  DAT_000010b0 = unaff_D6;
  DAT_000010b4 = unaff_D7;
  DAT_000010b8 = in_A0;
  DAT_000010bc = in_A1;
  DAT_000010c0 = unaff_A2;
  if ((ushort)((uint)(_DAT_0000af58 << 0xc) >> 0x1c) != 0xf) {
    if (in_A0 == &DAT_0000275c) {
      _DAT_00000db0 = (undefined1  [12])(longdouble)1;
      if ((DAT_000031e4 & 4) == 0) goto LAB_0001a68a;
      while ((DAT_000031e4 & 2) != 0) {
        DAT_000031ed = DAT_000031ed | 2;
        FUN_0001a8fe();
        uVar6 = DAT_000010a4;
      }
    }
    else {
      _DAT_00000db0 = (undefined1  [12])(longdouble)0;
    }
    if ((DAT_000010b8 == &DAT_0000275c) && ((DAT_000031e5 & '\x01' << (DAT_000010a0 & 7)) == 0)) {
      DAT_000010e8 = DAT_00000fbc / 2;
      bVar1 = DAT_000031e5 & '\x01' << (DAT_000010a0 & 7);
      uVar3 = DAT_000010e8;
      while (bVar1 == 0) {
        iVar4 = -DAT_000010ec;
        if (DAT_000010a8 < 0) {
          iVar4 = DAT_000010ec;
        }
        *DAT_000010b8 = *DAT_000010b8 + iVar4;
        _DAT_00000c00 = (undefined1  [12])(longdouble)0;
        DAT_000031ed = DAT_000031ed | 2;
        FUN_0001a8fe();
        uVar3 = DAT_00001098;
        uVar6 = DAT_000010a4;
        bVar1 = DAT_000031e5 & '\x01' << (DAT_000010a0 & 7);
      }
      DAT_000010e8 = DAT_00000fc4;
      DAT_0000109c = DAT_00000fc4;
      DAT_00001098 = uVar3;
      DAT_000010a4 = uVar6;
      while (uVar6 = DAT_000010a4, (int)DAT_0000109c < DAT_000010ec) {
        iVar4 = -DAT_000010ec;
        if (DAT_000010a8 < 0) {
          iVar4 = DAT_000010ec;
        }
        *DAT_000010b8 = *DAT_000010b8 + iVar4;
        _DAT_00000c00 = (undefined1  [12])(longdouble)0;
        DAT_000031ed = DAT_000031ed | 2;
        FUN_0001a8fe();
      }
    }
    DAT_000010e8 = DAT_00000fc0;
    bVar1 = DAT_000031e5 & '\x01' << (DAT_000010a0 & 7);
    while (piVar2 = DAT_000010b8, bVar1 != 0) {
      iVar4 = DAT_000010ec;
      if (DAT_000010a8 < 0) {
        iVar4 = -DAT_000010ec;
      }
      *DAT_000010b8 = *DAT_000010b8 + iVar4;
      _DAT_00000c00 = (undefined1  [12])(longdouble)0;
      if (piVar2 == &DAT_0000275c) {
        DAT_000031ed = DAT_000031ed | 2;
      }
      FUN_0001a8fe();
      uVar6 = DAT_000010a4;
      bVar1 = DAT_000031e5 & '\x01' << (DAT_000010a0 & 7);
    }
    DAT_000010e8 = DAT_00000fc4;
    DAT_0000109c = DAT_00000fc4;
    DAT_000010a4 = uVar6;
    while (piVar2 = DAT_000010b8, (int)DAT_0000109c < DAT_000010ec) {
      iVar4 = DAT_000010ec;
      if (DAT_000010a8 < 0) {
        iVar4 = -DAT_000010ec;
      }
      *DAT_000010b8 = *DAT_000010b8 + iVar4;
      _DAT_00000c00 = (undefined1  [12])(longdouble)0;
      if (piVar2 == &DAT_0000275c) {
        DAT_000031ed = DAT_000031ed | 2;
      }
      FUN_0001a8fe();
    }
    DAT_000010e8 = DAT_00000fc0;
    bVar1 = DAT_000031e5 & '\x01' << (DAT_000010a0 & 7);
    while (piVar2 = DAT_000010b8, bVar1 == 0) {
      iVar4 = -DAT_000010ec;
      if (DAT_000010a8 < 0) {
        iVar4 = DAT_000010ec;
      }
      *DAT_000010b8 = *DAT_000010b8 + iVar4;
      _DAT_00000c00 = (undefined1  [12])(longdouble)0;
      if (piVar2 == &DAT_0000275c) {
        DAT_000031ed = DAT_000031ed | 2;
      }
      FUN_0001a8fe();
      bVar1 = DAT_000031e5 & '\x01' << (DAT_000010a0 & 7);
    }
    if (DAT_000010b8 == &DAT_0000275c) {
      iVar4 = 5;
    }
    else {
      iVar4 = 0x28;
    }
    DAT_00001098 = *DAT_000010c0 * iVar4;
    if (DAT_00000fc0 <= DAT_00001098 && DAT_00001098 - DAT_00000fc0 != 0) {
      DAT_00001098 = DAT_00000fc0;
    }
    sVar5 = (short)DAT_000010a0;
    if (*(int *)(sVar5 * 4 + 0x1000) < 0) {
      DAT_000010e8 = DAT_00000fc4;
      DAT_0000109c = DAT_00000fc4;
      DAT_000010bc = 0x1000;
      while (piVar2 = DAT_000010b8, (int)DAT_0000109c < DAT_000010ec) {
        iVar4 = -DAT_000010ec;
        if (DAT_000010a8 < 0) {
          iVar4 = DAT_000010ec;
        }
        *DAT_000010b8 = *DAT_000010b8 + iVar4;
        _DAT_00000c00 = (undefined1  [12])(longdouble)0;
        if (piVar2 == &DAT_0000275c) {
          DAT_000031ed = DAT_000031ed | 2;
        }
        FUN_0001a8fe();
      }
    }
    else {
      if (DAT_000010a8 < 0) {
        iVar4 = *(int *)(sVar5 * 4 + 0x1000);
      }
      else {
        iVar4 = -*(int *)(sVar5 * 4 + 0x1000);
      }
      DAT_0000109c = iVar4 + *DAT_000010b8;
      DAT_000010bc = 0x1000;
      DAT_000010e8 = DAT_00001098;
      if (DAT_000010a8 < 0) {
        while (piVar2 = DAT_000010b8, *DAT_000010b8 < (int)DAT_0000109c) {
          *DAT_000010b8 = *DAT_000010b8 + DAT_000010ec;
          _DAT_00000c00 = (undefined1  [12])(longdouble)0;
          if (piVar2 == &DAT_0000275c) {
            DAT_000031ed = DAT_000031ed | 2;
          }
          FUN_0001a8fe();
        }
      }
      else {
        while (piVar2 = DAT_000010b8, (int)DAT_0000109c < *DAT_000010b8) {
          *DAT_000010b8 = *DAT_000010b8 - DAT_000010ec;
          _DAT_00000c00 = (undefined1  [12])(longdouble)0;
          if (piVar2 == &DAT_0000275c) {
            DAT_000031ed = DAT_000031ed | 2;
          }
          FUN_0001a8fe();
        }
      }
      if (DAT_000010b8 == &DAT_0000275c) {
        iVar4 = 5;
      }
      else {
        iVar4 = 0x28;
      }
      DAT_00001098 = *DAT_000010c0 * iVar4;
      if (DAT_00000fc0 <= DAT_00001098 && DAT_00001098 - DAT_00000fc0 != 0) {
        DAT_00001098 = DAT_00000fc0;
      }
      DAT_000010a4 = DAT_000010a0 + 4;
      DAT_0000109c = _DAT_01300090;
      uVar6 = _DAT_01300090 & 1 << (DAT_000010a4 & 0x1f);
      DAT_000010e8 = DAT_00001098;
      while (piVar2 = DAT_000010b8, uVar6 == 0) {
        iVar4 = -DAT_000010ec;
        if (DAT_000010a8 < 0) {
          iVar4 = DAT_000010ec;
        }
        *DAT_000010b8 = *DAT_000010b8 + iVar4;
        _DAT_00000c00 = (undefined1  [12])(longdouble)0;
        if (piVar2 == &DAT_0000275c) {
          DAT_000031ed = DAT_000031ed | 2;
        }
        FUN_0001a8fe();
        uVar6 = _DAT_01300090 & 1 << (DAT_000010a4 & 0x1f);
      }
      DAT_000010e8 = DAT_00000fc4;
      DAT_0000109c = DAT_00000fc4;
      while (piVar2 = DAT_000010b8, (int)DAT_0000109c < DAT_000010ec) {
        iVar4 = -DAT_000010ec;
        if (DAT_000010a8 < 0) {
          iVar4 = DAT_000010ec;
        }
        *DAT_000010b8 = *DAT_000010b8 + iVar4;
        _DAT_00000c00 = (undefined1  [12])(longdouble)0;
        if (piVar2 == &DAT_0000275c) {
          DAT_000031ed = DAT_000031ed | 2;
        }
        FUN_0001a8fe();
      }
      DAT_000010a4 = DAT_000010a0 + 4;
      DAT_0000109c = _DAT_01300090;
      uVar6 = _DAT_01300090 & 1 << (DAT_000010a4 & 0x1f);
      while (piVar2 = DAT_000010b8, uVar6 == 0) {
        if (DAT_000010a8 < 0) {
          *DAT_000010b8 = *DAT_000010b8 - *DAT_000010c0;
        }
        else {
          *DAT_000010b8 = *DAT_000010c0 + *DAT_000010b8;
        }
        _DAT_00000c00 = (undefined1  [12])(longdouble)0;
        if (piVar2 == &DAT_0000275c) {
          DAT_000031ed = DAT_000031ed | 2;
        }
        FUN_0001a8fe();
        uVar6 = _DAT_01300090 & 1 << (DAT_000010a4 & 0x1f);
      }
    }
  }
LAB_0001a68a:
  sVar5 = (short)DAT_000010a0;
  iVar4 = *(int *)(&DAT_00001120 + sVar5 * 4);
  *DAT_000010b8 = iVar4;
  (&DAT_000026e4)[sVar5] = iVar4;
  (&DAT_00002764)[sVar5] = iVar4;
  (&DAT_000027c8)[sVar5] = iVar4;
  (&DAT_000027dc)[sVar5] = 0;
  (&DAT_00002708)[sVar5 * 2] = (int)(short)((uint)iVar4 >> 0x10);
  (&DAT_0000270c)[sVar5 * 2] = iVar4 << 0x10;
  *(undefined1 (*) [12])((short)(sVar5 * 0xc) + 0xc18) = (undefined1  [12])iVar4;
  return;
}



// Function: FUN_0001a6e4 @ 0001a6e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001a6e4(void)

{
  float fVar1;
  ushort in_D0w;
  byte *in_A0;
  longdouble lVar2;
  
  _DAT_000010d8 = *(undefined4 *)(in_A0 + 2);
  _DAT_000010e0 = DAT_000010dc;
  if ((in_D0w & 4) == 0) {
    DAT_0000aef8 = DAT_0000aef8 & 0x7f;
  }
  else {
    DAT_0000aef8 = DAT_0000aef8 | 0x80;
  }
  lVar2 = (longdouble)*(undefined1 (*) [12])(in_A0 + 0x1e);
  if (lVar2 == FLOAT_UNKNOWN) {
    lVar2 = (longdouble)0xa9;
  }
  _DAT_00001150 = (undefined1  [12])lVar2;
  DAT_000010e8 = (int)lVar2;
  DAT_00000c6c = *(undefined4 *)(in_A0 + 0x2a);
  DAT_00000c70 = *(undefined4 *)(in_A0 + 0x2e);
  DAT_00000c74 = *(undefined4 *)(in_A0 + 0x32);
  DAT_00000c78 = *(undefined4 *)(in_A0 + 0x36);
  DAT_00000c7c = *(undefined4 *)(in_A0 + 0x3a);
  DAT_00000c80 = *(undefined4 *)(in_A0 + 0x3e);
  DAT_00000c84 = *(undefined4 *)(in_A0 + 0x42);
  DAT_00000c88 = *(undefined4 *)(in_A0 + 0x46);
  DAT_00000c8c = *(undefined4 *)(in_A0 + 0x4a);
  DAT_00000c90 = *(undefined4 *)(in_A0 + 0x4e);
  DAT_00000c94 = *(undefined4 *)(in_A0 + 0x52);
  DAT_00000c98 = *(undefined4 *)(in_A0 + 0x56);
  DAT_00000c9c = *(undefined4 *)(in_A0 + 0x5a);
  DAT_00000ca0 = *(undefined4 *)(in_A0 + 0x5e);
  DAT_00000ca4 = *(undefined4 *)(in_A0 + 0x62);
  DAT_00000ccc = *(undefined4 *)(in_A0 + 0x72);
  DAT_00000cd0 = *(undefined4 *)(in_A0 + 0x76);
  DAT_00000cd4 = *(undefined4 *)(in_A0 + 0x7a);
  DAT_00000cd8 = *(undefined4 *)(in_A0 + 0x7e);
  DAT_00000cdc = *(undefined4 *)(in_A0 + 0x82);
  DAT_00000ce0 = *(undefined4 *)(in_A0 + 0x86);
  DAT_00000ce4 = *(undefined4 *)(in_A0 + 0x8a);
  DAT_00000ce8 = *(undefined4 *)(in_A0 + 0x8e);
  DAT_00000cec = *(undefined4 *)(in_A0 + 0x92);
  DAT_00000cc0 = *(undefined4 *)(in_A0 + 0x96);
  DAT_00000cc4 = *(undefined4 *)(in_A0 + 0x9a);
  DAT_00000cc8 = *(undefined4 *)(in_A0 + 0x9e);
  DAT_00001200 = *(undefined4 *)(in_A0 + 0xe2);
  DAT_00001204 = *(undefined4 *)(in_A0 + 0xe6);
  DAT_00001208 = *(undefined4 *)(in_A0 + 0xea);
  DAT_0000120c = *(undefined4 *)(in_A0 + 0xee);
  DAT_00001210 = *(undefined4 *)(in_A0 + 0xf2);
  DAT_00001214 = *(undefined4 *)(in_A0 + 0xf6);
  DAT_00001218 = *(undefined4 *)(in_A0 + 0xfa);
  DAT_0000121c = *(undefined4 *)(in_A0 + 0xfe);
  DAT_00001220 = *(undefined4 *)(in_A0 + 0x102);
  DAT_00001224 = *(undefined4 *)(in_A0 + 0x106);
  DAT_00001228 = *(undefined4 *)(in_A0 + 0x10a);
  DAT_0000122c = *(undefined4 *)(in_A0 + 0x10e);
  DAT_00001230 = *(undefined4 *)(in_A0 + 0x112);
  DAT_00001234 = *(undefined4 *)(in_A0 + 0x116);
  DAT_00001238 = *(undefined4 *)(in_A0 + 0x11a);
  DAT_0000123c = *(undefined4 *)(in_A0 + 0x11e);
  DAT_00001240 = *(undefined4 *)(in_A0 + 0x122);
  DAT_00001244 = *(undefined4 *)(in_A0 + 0x126);
  DAT_00001248 = *(undefined4 *)(in_A0 + 0x12a);
  DAT_0000124c = *(undefined4 *)(in_A0 + 0x12e);
  DAT_00001250 = *(undefined4 *)(in_A0 + 0x132);
  DAT_00001254 = *(undefined4 *)(in_A0 + 0x136);
  DAT_00001258 = *(undefined4 *)(in_A0 + 0x13a);
  DAT_0000125c = *(undefined4 *)(in_A0 + 0x13e);
  DAT_00001260 = *(undefined4 *)(in_A0 + 0x142);
  DAT_00001264 = *(undefined4 *)(in_A0 + 0x146);
  DAT_00001268 = *(undefined4 *)(in_A0 + 0x14a);
  _DAT_0000135c = (undefined1  [12])(longdouble)*(undefined1 (*) [12])(in_A0 + 0x150);
  DAT_000010f0 = (int)*(undefined1 (*) [12])(in_A0 + 0x150);
  _DAT_00001368 = (undefined1  [12])(longdouble)*(undefined1 (*) [12])(in_A0 + 0x1a8);
  lVar2 = (longdouble)*(undefined1 (*) [12])(in_A0 + 0x15c);
  if ((DAT_00007780 == 1) && ((in_A0[1] & 2) != 0)) {
    lVar2 = (longdouble)*(undefined1 (*) [12])(in_A0 + 0x1a8);
  }
  _DAT_00001340 = (int)lVar2;
  _DAT_000005cc = (undefined1  [12])lVar2;
  DAT_000005c8 = *(undefined4 *)(in_A0 + 0x180);
  fVar1 = (float)*(undefined1 (*) [12])(in_A0 + 0x184);
  if (((DAT_00007780 == 1) && ((in_A0[1] & 2) != 0)) && ((*in_A0 & 2) == 0)) {
    fVar1 = 0.0;
  }
  _DAT_00001350 = (undefined1  [12])fVar1;
  DAT_000010e4 = in_A0[0x1d3];
  DAT_00009fda = *(undefined4 *)in_A0;
  DAT_00009fde = *(undefined2 *)(in_A0 + 4);
  DAT_00009fe0 = *(undefined4 *)(in_A0 + 6);
  DAT_000010dc = _DAT_000010d8;
  _DAT_00001374 = in_D0w;
  _DAT_000014c2 = in_A0;
  *in_A0 = *in_A0 & 0x7f;
  *in_A0 = *in_A0 & 0xbf;
  DAT_000005bc = in_A0;
  return;
}



// Function: FUN_0001a856 @ 0001a856

void FUN_0001a856(void)

{
  FUN_0001a886();
  return;
}



// Function: FUN_0001a866 @ 0001a866

void FUN_0001a866(void)

{
  FUN_0001a886();
  return;
}



// Function: FUN_0001a886 @ 0001a886

void FUN_0001a886(void)

{
  undefined4 *in_A1;
  undefined4 *unaff_A2;
  
  *unaff_A2 = *in_A1;
  unaff_A2[1] = in_A1[1];
  unaff_A2[2] = in_A1[2];
  unaff_A2[3] = in_A1[3];
  unaff_A2[4] = in_A1[4];
  unaff_A2[5] = in_A1[5];
  unaff_A2[6] = in_A1[6];
  unaff_A2[7] = in_A1[7];
  unaff_A2[8] = in_A1[8];
  unaff_A2[9] = in_A1[9];
  unaff_A2[10] = in_A1[10];
  unaff_A2[0xb] = in_A1[0xb];
  unaff_A2[0xc] = in_A1[0xc];
  unaff_A2[0xd] = in_A1[0xd];
  unaff_A2[0xe] = in_A1[0xe];
  unaff_A2[0xf] = in_A1[0xf];
  unaff_A2[0x10] = in_A1[0x10];
  unaff_A2[0x11] = in_A1[0x11];
  unaff_A2[0x12] = in_A1[0x12];
  unaff_A2[0x13] = in_A1[0x13];
  unaff_A2[0x14] = in_A1[0x14];
  return;
}



// Function: FUN_0001a8b2 @ 0001a8b2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001a8b2(void)

{
  _DAT_00000c18 = (undefined1  [12])DAT_00002750;
  _DAT_00000c24 = (undefined1  [12])DAT_00002754;
  _DAT_00000c30 = (undefined1  [12])DAT_00002758;
  _DAT_00000c3c = (undefined1  [12])DAT_0000275c;
  _DAT_00000c48 = (undefined1  [12])DAT_00002760;
  return;
}



// Function: FUN_0001a8fe @ 0001a8fe

void FUN_0001a8fe(void)

{
  undefined4 in_stack_00000000;
  
  DAT_00000584 = in_stack_00000000;
  FUN_00016d58();
  return;
}



// Function: FUN_0001a906 @ 0001a906

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001a906(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_D1;
  int extraout_D1_00;
  int iVar4;
  int *piVar5;
  int *extraout_A0;
  int *extraout_A0_00;
  int *piVar6;
  int *extraout_A0_01;
  undefined8 uVar7;
  
  iVar3 = DAT_00002760;
  iVar2 = DAT_0000275c;
  iVar1 = DAT_00002758;
  uVar7 = CONCAT44(DAT_00002750,DAT_00002754);
  piVar5 = &DAT_00000fdc;
  if (DAT_00002750 < DAT_00000fd8) {
    DAT_00002750 = DAT_00002764;
    uVar7 = FUN_0001a9f2();
    piVar5 = extraout_A0;
  }
  iVar4 = (int)uVar7;
  piVar6 = piVar5 + 1;
  if (*piVar5 < (int)((ulonglong)uVar7 >> 0x20)) {
    DAT_00002750 = DAT_00002764;
    FUN_0001a9f2();
    iVar4 = extraout_D1;
    piVar6 = extraout_A0_00;
  }
  piVar5 = piVar6 + 1;
  if (iVar4 < *piVar6) {
    DAT_00002754 = DAT_00002768;
    FUN_0001a9f2();
    iVar4 = extraout_D1_00;
    piVar5 = extraout_A0_01;
  }
  if (*piVar5 < iVar4) {
    DAT_00002754 = DAT_00002768;
    FUN_0001a9f2();
  }
  if (DAT_00000fe8 != -0x80000000) {
    if (iVar1 < DAT_00000fe8) {
      DAT_00002758 = DAT_0000276c;
      FUN_0001a9f2();
    }
    if (DAT_00000fec < iVar1) {
      if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 0) {
        if (DAT_0000276c < iVar1) {
          DAT_00002758 = DAT_0000276c;
        }
      }
      else {
        DAT_00002758 = DAT_0000276c;
        FUN_0001a9f2();
      }
    }
  }
  if (iVar2 < DAT_00000ff0) {
    DAT_0000275c = DAT_00002770;
    FUN_0001a9f2();
  }
  if (DAT_00000ff4 < iVar2) {
    DAT_0000275c = DAT_00002770;
    FUN_0001a9f2();
  }
  if (iVar3 < DAT_00000ff8) {
    DAT_00002760 = DAT_00002774;
    FUN_0001a9f2();
  }
  if (DAT_00000ffc < iVar3) {
    DAT_00002760 = DAT_00002774;
    FUN_0001a9f2();
  }
  DAT_00002764 = DAT_00002750;
  DAT_00002768 = DAT_00002754;
  DAT_0000276c = DAT_00002758;
  DAT_00002770 = DAT_0000275c;
  DAT_00002774 = DAT_00002760;
  return;
}



// Function: FUN_0001a9f2 @ 0001a9f2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001a9f2(void)

{
  DAT_000010e8 = 0;
  DAT_000010ec = 0;
  DAT_00000c00 = 0;
  _DAT_00000c04 = 0;
  _DAT_00000c08 = 0;
  _DAT_000011d0 = 0;
  DAT_000011f0 = 0;
  DAT_000011f1 = 0;
  DAT_000011f2 = 0;
  DAT_000011dc = 0;
  DAT_00000bd8 = DAT_00000bd8 & 0xd9 | 0xd1;
  return;
}



// Function: FUN_0001a9f8 @ 0001a9f8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001a9f8(void)

{
  DAT_000010e8 = 0;
  DAT_000010ec = 0;
  DAT_00000c00 = 0;
  _DAT_00000c04 = 0;
  _DAT_00000c08 = 0;
  _DAT_000011d0 = 0;
  DAT_000011f0 = 0;
  DAT_000011f1 = 0;
  DAT_000011f2 = 0;
  DAT_000011dc = 0;
  DAT_00000bd8 = DAT_00000bd8 & 0xd9 | 0xd0;
  return;
}



// Function: FUN_0001b286 @ 0001b286

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001b286(void)

{
  longdouble lVar1;
  longdouble lVar2;
  
  DAT_00002750 = (int)_DAT_00000c6c;
  DAT_00002754 = (int)_DAT_00000c78;
  DAT_00002758 = (int)_DAT_00000c84;
  DAT_0000275c = (int)_DAT_00000c90;
  DAT_00002760 = (int)_DAT_00000c9c;
  lVar1 = (longdouble)_DAT_00001340;
  lVar2 = lVar1 - (longdouble)_DAT_00000c00;
  if (lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN) {
    lVar2 = (longdouble)0.0;
  }
  _DAT_00001340 = (int)lVar2;
  _DAT_00000c00 = (undefined1  [12])((longdouble)_DAT_00000c00 - (longdouble)_DAT_0000135c);
  FUN_0001a906();
  FUN_0001a856();
  return;
}



// Function: FUN_0001b2ea @ 0001b2ea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_0001b2ea(void)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  ushort *extraout_A0;
  byte *extraout_A0_00;
  ushort *puVar4;
  undefined4 *puVar6;
  bool bVar7;
  ushort *puVar5;
  
  FUN_0000ddf2();
  uVar3 = *extraout_A0;
  if ((uVar3 & 0x8000) == 0) {
    return uVar3;
  }
  if ((uVar3 & 0x10) == 0) {
    if ((((((uVar3 & 0x80) == 0) && ((uVar3 & 0x1000) == 0)) && ((uVar3 & 0x2000) == 0)) &&
        (((uVar3 & 0x100) == 0 && (bVar7 = (uVar3 & 8) == 0, bVar7)))) &&
       (uVar2 = FUN_0001b49a(), bVar7)) {
      if ((uVar2 & 0x4000) == 0) {
        *extraout_A0_00 = *extraout_A0_00 & 0x7f;
        DAT_000005bc = extraout_A0_00;
        uVar3 = FUN_0001b4d4();
        return uVar3;
      }
      if (((uVar2 & 0x400) == 0) || ((uVar2 & 0x200) != 0)) {
        if ((DAT_00007780 == 2) || (DAT_00007780 == 3)) {
          DAT_00000bd9 = DAT_00000bd9 & 0xef;
        }
        else {
          DAT_00000bd9 = DAT_00000bd9 | 0x10;
        }
      }
      else if (DAT_00007780 == 4) {
        DAT_00000bd9 = DAT_00000bd9 | 0x10;
      }
      else {
        DAT_00000bd9 = DAT_00000bd9 & 0xef;
      }
      if ((DAT_00000bd9 & 0x10) != 0) {
        bVar1 = DAT_00000bd9 & 8;
        DAT_00000bd9 = DAT_00000bd9 & 0xf7;
        if (bVar1 == 0) {
          return 0;
        }
        if (((uVar2 & 2) == 0) && (DAT_00007780 == 1)) {
          extraout_A0_00[2] = extraout_A0_00[2] & 0xdf;
        }
      }
      if ((extraout_A0_00[2] & 0x10) == 0) {
LAB_0001b46a:
        if ((uVar2 & 0x800) == 0) {
          DAT_00000bd9 = DAT_00000bd9 & 0xfb;
        }
        else {
          DAT_00000bd9 = DAT_00000bd9 | 4;
        }
        uVar3 = FUN_0001b4d4();
        return uVar3;
      }
      if ((DAT_00003252 & 1) == 0) {
        uVar3 = (ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c);
        if ((uVar3 == 0) || (uVar3 == 2)) {
          bVar7 = (DAT_00000bd9 & 0x40) == 0 && (DAT_0000aecb & 0x40) == 0;
        }
        else if ((uVar3 == 4) || (uVar3 == 5)) {
          bVar7 = (DAT_00000bd9 & 0x40) == 0 && (DAT_0000aecb & 0x40) == 0;
        }
        else {
          bVar7 = (DAT_0000aecb & 0x40) == 0;
        }
        if (bVar7) {
          DAT_00007788 = DAT_00007788 | 2;
        }
      }
      else if (((DAT_0000aecb & 8) != 0) || ((DAT_00000bd9 & 4) != 0)) goto LAB_0001b46a;
    }
  }
  else {
    *extraout_A0 = uVar3 & 0xffef;
    DAT_00000bd9 = DAT_00000bd9 & 0xf7 | 0x10;
    if (DAT_00007780 == 2) {
      DAT_00007780 = 4;
    }
    *(undefined1 *)((int)extraout_A0 + 0x1ff) = 10;
    puVar4 = extraout_A0 + 0xea;
    puVar6 = (undefined4 *)&DAT_012006e4;
    do {
      puVar5 = puVar4 + 2;
      *puVar6 = *(undefined4 *)puVar4;
      puVar4 = puVar5;
      puVar6 = puVar6 + 1;
    } while (puVar5 <= (ushort *)((int)extraout_A0 + 0x1ff));
    DAT_0000aef9 = DAT_0000aef9 | 0x20;
  }
  return 0;
}



// Function: FUN_0001b49a @ 0001b49a

void FUN_0001b49a(void)

{
  int in_A0;
  
  if (((DAT_000031e4 & 4) != 0) &&
     ((longdouble)DAT_0000275c - (longdouble)*(undefined1 (*) [12])(in_A0 + 0x4e) != FLOAT_UNKNOWN))
  {
    DAT_000031ed = DAT_000031ed | 2;
  }
  return;
}



// Function: FUN_0001b4d4 @ 0001b4d4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001b4d4(void)

{
  uint in_D0;
  uint uVar1;
  int in_A0;
  ushort *extraout_A0;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  undefined4 *puVar6;
  ushort *puVar5;
  
  if ((in_D0 & 0x8000) == 0) {
    _DAT_012006e4 = 0;
    return;
  }
  DAT_00009f7c = *(undefined4 *)(in_A0 + 0x12);
  _DAT_00009f80 = *(undefined4 *)(in_A0 + 0x16);
  _DAT_00009f84 = *(undefined4 *)(in_A0 + 0x1a);
  DAT_00009f88 = *(undefined4 *)(in_A0 + 0xa6);
  _DAT_00009f8c = *(undefined4 *)(in_A0 + 0xaa);
  _DAT_00009f90 = *(undefined4 *)(in_A0 + 0xae);
  DAT_00009f94 = *(undefined4 *)(in_A0 + 0xb2);
  _DAT_00009f98 = *(undefined4 *)(in_A0 + 0xb6);
  _DAT_00009f9c = *(undefined4 *)(in_A0 + 0xba);
  DAT_00009fa0 = *(undefined4 *)(in_A0 + 0xbe);
  _DAT_00009fa4 = *(undefined4 *)(in_A0 + 0xc2);
  _DAT_00009fa8 = *(undefined4 *)(in_A0 + 0xc6);
  DAT_00009fac = *(undefined4 *)(in_A0 + 0xca);
  _DAT_00009fb0 = *(undefined4 *)(in_A0 + 0xce);
  _DAT_00009fb4 = *(undefined4 *)(in_A0 + 0xd2);
  DAT_00009fb8 = *(undefined4 *)(in_A0 + 0xd6);
  _DAT_00009fbc = *(undefined4 *)(in_A0 + 0xda);
  _DAT_00009fc0 = *(undefined4 *)(in_A0 + 0xde);
  if (in_A0 != 0x9d8) {
    if (((in_D0 & 0x400) != 0) && ((in_D0 & 0x200) == 0)) {
      return;
    }
    if (*(char *)(in_A0 + 0x1d4) != '\0') {
      puVar3 = (undefined4 *)&DAT_012006b2;
      puVar6 = (undefined4 *)&DAT_01200680;
      do {
        puVar2 = puVar3 + 1;
        *puVar6 = *puVar3;
        puVar3 = puVar2;
        puVar6 = puVar6 + 1;
      } while (puVar2 < (undefined4 *)0x12006de);
      puVar3 = (undefined4 *)(in_A0 + 0x1d4);
      puVar6 = (undefined4 *)&DAT_012006b2;
      do {
        puVar2 = puVar3 + 1;
        *puVar6 = *puVar3;
        puVar3 = puVar2;
        puVar6 = puVar6 + 1;
      } while (puVar2 <= (undefined4 *)(in_A0 + 0x1ff));
      uVar1 = FUN_0000ddf2();
      if (((*extraout_A0 & 0x8000) == 0) || (((uVar1 & 0x400) != 0 && ((uVar1 & 0x200) == 0)))) {
        _DAT_012006e4 = 0;
      }
      else {
        *(undefined1 *)((int)extraout_A0 + 0x1ff) = 10;
        puVar4 = extraout_A0 + 0xea;
        puVar3 = (undefined4 *)&DAT_012006e4;
        do {
          puVar5 = puVar4 + 2;
          *puVar3 = *(undefined4 *)puVar4;
          puVar4 = puVar5;
          puVar3 = puVar3 + 1;
        } while (puVar5 <= (ushort *)((int)extraout_A0 + 0x1ff));
      }
      DAT_0000aef9 = DAT_0000aef9 | 0x20;
    }
    return;
  }
  return;
}



// Function: FUN_0001b61c @ 0001b61c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001b61c(void)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  
  DAT_00000da4 = 0;
  _DAT_00000da8 = 0;
  _DAT_00000dac = 0;
  DAT_00000db0 = 0;
  _DAT_00000db4 = 0;
  _DAT_00000db8 = 0;
  DAT_00000dbc = 0;
  _DAT_00000dc0 = 0;
  _DAT_00000dc4 = 0;
  if ((DAT_000010d8 & 0x20) == 0) {
    DAT_000010ec = 0;
    DAT_00000bd8 = DAT_00000bd8 | 0x10;
    DAT_00000c00 = 0;
    _DAT_00000c04 = 0;
    _DAT_00000c08 = 0;
    cVar1 = '\0';
    uVar2 = 1;
    cVar3 = '\0';
    FUN_0001b6b4();
    while (!(bool)uVar2 && cVar3 == cVar1) {
      FUN_0001a8fe();
      FUN_0001b6b4();
    }
    return;
  }
  if (((DAT_00000bd8 & 4) != 0) && ((DAT_00000bd9 & 0x20) == 0)) {
    DAT_000010e8 = 0;
    DAT_000010ec = 0;
    DAT_00000bd8 = DAT_00000bd8 | 0x10;
    DAT_00000c00 = 0;
    _DAT_00000c04 = 0;
    _DAT_00000c08 = 0;
    cVar1 = '\0';
    uVar2 = 1;
    cVar3 = '\0';
    FUN_0001b6b4();
    while (!(bool)uVar2 && cVar3 == cVar1) {
      FUN_0001a8fe();
      FUN_0001b6b4();
    }
  }
  return;
}



// Function: FUN_0001b6b4 @ 0001b6b4

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0001b6b4(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_0001b848 @ 0001b848

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001b848(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = DAT_00002958 + DAT_0000296c;
  if (iVar1 < 0) {
    DAT_0000296c = 0;
    iVar2 = iVar1;
  }
  else if (DAT_00002804 < iVar1) {
    iVar2 = iVar1 - DAT_00002804;
    DAT_0000296c = DAT_00002804;
  }
  else {
    iVar2 = 0;
    DAT_0000296c = iVar1;
  }
  iVar1 = DAT_0000295c + DAT_00002970;
  if (iVar1 < 0) {
    DAT_00002970 = 0;
    iVar3 = iVar1;
  }
  else if (DAT_00002808 < iVar1) {
    iVar3 = iVar1 - DAT_00002808;
    DAT_00002970 = DAT_00002808;
  }
  else {
    iVar3 = 0;
    DAT_00002970 = iVar1;
  }
  iVar1 = DAT_00002960 + DAT_00002974;
  if (iVar1 < 0) {
    DAT_00002974 = 0;
    iVar4 = iVar1;
  }
  else if (DAT_0000280c < iVar1) {
    iVar4 = iVar1 - DAT_0000280c;
    DAT_00002974 = DAT_0000280c;
  }
  else {
    iVar4 = 0;
    DAT_00002974 = iVar1;
  }
  iVar1 = DAT_00002964 + DAT_00002978;
  if (iVar1 < 0) {
    DAT_00002978 = 0;
    iVar5 = iVar1;
  }
  else if (DAT_00002810 < iVar1) {
    iVar5 = iVar1 - DAT_00002810;
    DAT_00002978 = DAT_00002810;
  }
  else {
    iVar5 = 0;
    DAT_00002978 = iVar1;
  }
  iVar1 = DAT_00002968 + DAT_0000297c;
  if (iVar1 < 0) {
    DAT_0000297c = 0;
    iVar6 = iVar1;
  }
  else if (DAT_00002814 < iVar1) {
    iVar6 = iVar1 - DAT_00002814;
    DAT_0000297c = DAT_00002814;
  }
  else {
    iVar6 = 0;
    DAT_0000297c = iVar1;
  }
  DAT_00002750 = iVar2 + DAT_00002750;
  DAT_00002754 = iVar3 + DAT_00002754;
  DAT_00002758 = iVar4 + DAT_00002758;
  DAT_0000275c = iVar5 + DAT_0000275c;
  DAT_00002760 = iVar6 + DAT_00002760;
  DAT_00002764 = iVar2 + DAT_00002764;
  DAT_00002768 = iVar3 + DAT_00002768;
  DAT_0000276c = iVar4 + DAT_0000276c;
  DAT_00002770 = iVar5 + DAT_00002770;
  DAT_00002774 = iVar6 + DAT_00002774;
  _DAT_00000c18 = _DAT_00000c18 + (longdouble)iVar2;
  _DAT_00000c24 = _DAT_00000c24 + (longdouble)iVar3;
  _DAT_00000c30 = _DAT_00000c30 + (longdouble)iVar4;
  _DAT_00000c3c = _DAT_00000c3c + (longdouble)iVar5;
  _DAT_00000c48 = _DAT_00000c48 + (longdouble)iVar6;
  return;
}



// Function: FUN_0001b956 @ 0001b956

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001b956(void)

{
  DAT_000011f0 = 0;
  DAT_000011f1 = 0;
  DAT_000011f2 = 0;
  FUN_000170c2();
  FUN_0001702a();
  return;
}



// Function: FUN_0001ba5a @ 0001ba5a

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001ba5a(void)

{
  float fVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  int unaff_D2;
  int unaff_D3;
  int iVar5;
  longdouble lVar6;
  longdouble lVar7;
  longdouble lVar8;
  longdouble lVar9;
  
  if ((DAT_000010d9 == '\r') || (DAT_000010d9 == '\f')) {
    FUN_0001b956();
    return;
  }
  if (DAT_000010d9 == '\x0f') {
    FUN_0001b956();
    return;
  }
  if (DAT_000010d9 == '\x13') {
    FUN_0001b956();
    return;
  }
  if (DAT_000010d9 == '\0') {
    if ((longdouble)_DAT_00000db0 - (longdouble)0.0 != FLOAT_UNKNOWN) {
      FUN_0001b956();
      return;
    }
    if ((longdouble)_DAT_00000dbc - (longdouble)0.0 != FLOAT_UNKNOWN) {
      FUN_0001b956();
      return;
    }
    if ((DAT_000010d8 & 8) != 0) {
      FUN_0001b956();
      return;
    }
    if ((DAT_00007784 & 0x40) != 0) {
      FUN_0001b956();
      return;
    }
  }
  if ((DAT_000011f0 == '\0') && (DAT_000011f1 == '\0')) {
    _DAT_000014ca = &DAT_00007660;
  }
  _DAT_000011cc = DAT_00000f9c;
  if (((DAT_000010d9 == '\0') && (DAT_000026e0 == 0)) &&
     ((longdouble)_DAT_00000d38 != FLOAT_UNKNOWN)) {
    _DAT_000011cc = DAT_00000fac;
  }
  if ((DAT_00000bd9 & 0x40) == 0) {
    lVar9 = (longdouble)unaff_D3;
    auVar2._0_4_ = DAT_00001350;
    auVar2._4_4_ = _DAT_00001354;
    auVar2._8_4_ = _DAT_00001358;
    lVar8 = (longdouble)auVar2;
    lVar6 = lVar9 - lVar8;
    if (lVar6 - (longdouble)(undefined1  [12])0x0 < FLOAT_UNKNOWN ||
        lVar6 - (longdouble)(undefined1  [12])0x0 == FLOAT_UNKNOWN) {
      lVar6 = (longdouble)0.0;
    }
    lVar7 = (longdouble)(longlong)(lVar6 / (longdouble)_DAT_000011cc) + (longdouble)15.0;
    lVar9 = ((lVar9 * lVar9 - lVar8 * lVar8) / (lVar6 / lVar7)) * (longdouble)0.5 -
            lVar9 * (longdouble)0.5;
    iVar5 = _DAT_00001340;
    if ((DAT_000010d8 & 0x20) == 0) {
      DAT_00001350 = 0;
      _DAT_00001354 = 0;
      _DAT_00001358 = 0;
      iVar5 = DAT_000010f0;
    }
    lVar6 = (longdouble)iVar5;
    if (FLOAT_UNKNOWN <= lVar6 - lVar9 && lVar6 - lVar9 != FLOAT_UNKNOWN) {
      if ((DAT_000011f0 == '\0') &&
         (lVar6 = lVar6 - lVar9 * (longdouble)2.0, lVar6 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar6)
         ) {
        DAT_000011dc = 0;
      }
    }
    else if (((lVar6 - (longdouble)0.0 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar6 - (longdouble)0.0)
             && (DAT_000011f2 == '\0')) &&
            (auVar3._0_4_ = DAT_00001350, auVar3._4_4_ = _DAT_00001354, auVar3._8_4_ = _DAT_00001358
            , (int)auVar3 < unaff_D3)) {
      _DAT_000011e4 = (float)((lVar9 - lVar6) / (longdouble)unaff_D3);
      DAT_000011f2 = -1;
      _DAT_000011e0 = (int)lVar7;
      DAT_000011f0 = '\0';
      FUN_0001bf30();
      DAT_000011dc = 0;
      unaff_D2 = (int)auVar3;
    }
  }
  if ((DAT_00000bd9 & 0x40) == 0) {
    if (DAT_0000133d != '\0') {
      DAT_000011f2 = '\0';
      DAT_000011f0 = '\0';
      DAT_000011f1 = '\0';
    }
    DAT_0000133d = 0;
  }
  else {
    DAT_000011f0 = '\0';
    unaff_D2 = 0;
    DAT_0000133d = 0xff;
  }
  if (unaff_D2 < DAT_000011d4) {
    DAT_000011f0 = '\0';
    DAT_000011dc = 0;
  }
  if ((DAT_000011dc != 0) && (DAT_000011dc < unaff_D2)) {
    unaff_D2 = DAT_000011dc;
  }
  if ((DAT_000011f0 == '\0') && (DAT_000011f1 == '\0')) {
    if (unaff_D3 < unaff_D2) {
      if (DAT_000010f0 != 0) {
        DAT_000011f0 = -1;
        DAT_000011f2 = '\0';
        iVar5 = _DAT_00001340;
        if ((DAT_000010d8 & 0x20) == 0) {
          DAT_00001350 = 0;
          _DAT_00001354 = 0;
          _DAT_00001358 = 0;
          iVar5 = DAT_000010f0;
        }
        lVar9 = (longdouble)iVar5;
        if (lVar9 == FLOAT_UNKNOWN) {
          lVar9 = (longdouble)2540.0;
        }
        lVar6 = (longdouble)unaff_D3;
        auVar4._0_4_ = DAT_00001350;
        auVar4._4_4_ = _DAT_00001354;
        auVar4._8_4_ = _DAT_00001358;
        lVar8 = (longdouble)auVar4 - lVar6;
        lVar7 = (longdouble)auVar4;
        if (lVar8 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar8) {
          lVar7 = lVar6;
        }
        lVar8 = SQRT(lVar9 * (longdouble)_DAT_000011cc +
                     lVar6 * lVar6 * (longdouble)(undefined1  [12])0x0 +
                     lVar7 * lVar7 * (longdouble)(undefined1  [12])0x0);
        DAT_000011dc = (int)lVar8;
        if (DAT_000011dc < unaff_D2) {
          unaff_D2 = DAT_000011dc;
        }
        lVar8 = lVar8 / ((longdouble)(longlong)(lVar8 / (longdouble)_DAT_000011cc) +
                        (longdouble)15.0);
        DAT_000011dc = (int)SQRT(lVar9 * lVar8 + lVar6 * lVar6 * (longdouble)(undefined1  [12])0x0 +
                                 lVar7 * lVar7 * (longdouble)(undefined1  [12])0x0);
        if (DAT_000011dc < unaff_D2) {
          unaff_D2 = DAT_000011dc;
        }
        lVar9 = (longdouble)unaff_D2;
        if (unaff_D2 == DAT_000011dc) {
          lVar8 = (lVar9 - lVar6) / lVar8;
        }
        else {
          lVar8 = (lVar9 - lVar6) / (longdouble)_DAT_000011cc + (longdouble)15.0;
        }
        fVar1 = (float)(longlong)lVar8;
        if (lVar9 < FLOAT_UNKNOWN || lVar9 == FLOAT_UNKNOWN) {
          fVar1 = 1.0;
        }
        _DAT_000011e0 = (int)fVar1;
        _DAT_000011e4 = 0.0;
        FUN_0001bf30();
      }
    }
    else if ((unaff_D2 < unaff_D3) && (DAT_000011f1 = -1, DAT_000011f2 == '\0')) {
      _DAT_000011e0 =
           (int)((float)(longlong)
                        (ABS((longdouble)unaff_D2 - (longdouble)unaff_D3) /
                        (longdouble)_DAT_000011cc) + 15.0);
      _DAT_000011e4 = 0.0;
      FUN_0001bf30();
      DAT_000011dc = 0;
    }
  }
  if ((DAT_000011f0 == '\0') && (DAT_000011f1 == '\0')) {
    iVar5 = DAT_00000fc4;
    if (DAT_000010e8 < DAT_00000fc4) {
      iVar5 = DAT_000010e8;
    }
    if ((unaff_D3 < iVar5) && ((DAT_00000bd9 & 0x40) != 0)) {
      DAT_000011f0 = '\0';
      DAT_000011f1 = '\0';
      DAT_000011f2 = '\0';
      DAT_000011dc = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0001bf30 @ 0001bf30

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001bf30(void)

{
  int unaff_D2;
  int unaff_D3;
  
  _DAT_000011d0 = unaff_D3;
  DAT_000011d4 = unaff_D2;
  DAT_000011d8 = unaff_D2 - unaff_D3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0001bf6a @ 0001bf6a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001bf6a(void)

{
  longdouble lVar1;
  undefined4 uVar2;
  longdouble lVar3;
  
  lVar1 = (longdouble)DAT_000010ec;
  if ((DAT_00001375 & 2) == 0) {
    lVar3 = (longdouble)DAT_000010f0;
  }
  else {
    lVar3 = (longdouble)_DAT_00001368 - ((longdouble)_DAT_0000135c - (longdouble)DAT_000010f0);
  }
  uVar2 = 0;
  lVar1 = lVar3 - (((lVar1 * lVar1) /
                   (lVar1 / ((longdouble)(longlong)(lVar1 / (longdouble)_DAT_000011cc) +
                            (longdouble)15.0))) * (longdouble)0.5 - lVar1 * (longdouble)0.5);
  if ((lVar1 < FLOAT_UNKNOWN || lVar1 == FLOAT_UNKNOWN) &&
     (lVar3 - (longdouble)0.0 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar3 - (longdouble)0.0)) {
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_0001c174 @ 0001c174

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001c174(void)

{
  longdouble lVar1;
  undefined4 in_D0;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (DAT_0000afc4 == 0) {
    puVar3 = &DAT_00000f9c;
    for (puVar2 = &DAT_0001c2d0; puVar2 < (undefined4 *)0x1c3ac; puVar2 = puVar2 + 1) {
      *puVar3 = *puVar2;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    puVar3 = &DAT_00000f9c;
    for (puVar2 = &DAT_0001c3b0; puVar2 < (undefined4 *)0x1c490; puVar2 = puVar2 + 1) {
      *puVar3 = *puVar2;
      puVar3 = puVar3 + 1;
    }
    DAT_000028fc = 0xbfff;
    DAT_00002900 = 0xbfff;
    DAT_00002904 = 0xbfff;
    DAT_00002908 = 0xbfff;
    _DAT_0000bfec = DAT_00000fb4;
  }
  _DAT_00001120 = 76200000;
  _DAT_00001124 = 0x1d11680;
  _DAT_00001128 = 0;
  _DAT_0000112c = 0;
  DAT_00001130 = 0;
  DAT_00000580 = 0x57c;
  lVar1 = (longdouble)0;
  _DAT_00000c18 = (undefined1  [12])lVar1;
  _DAT_00000c24 = (undefined1  [12])lVar1;
  _DAT_00000c30 = (undefined1  [12])lVar1;
  _DAT_00000c3c = (undefined1  [12])lVar1;
  _DAT_00000c48 = (undefined1  [12])lVar1;
  _DAT_00000c54 = (undefined1  [12])lVar1;
  _DAT_00000c60 = (undefined1  [12])lVar1;
  _DAT_00000c00 = (undefined1  [12])lVar1;
  DAT_00001084 = 0x700;
  DAT_00001088 = 0x5dc;
  DAT_0000108c = 0x1c2;
  _DAT_00001140 = 0x100;
  _DAT_00001144 = 0xeb0;
  DAT_00002b30 = 0x3a0;
  DAT_00002b34 = 0xfffffc60;
  DAT_00000bd8 = 0x80;
  _DAT_00001148 = &DAT_00002710;
  DAT_00002abc = 4000;
  _DAT_00001260 = (undefined1  [12])(longdouble)1;
  _DAT_00001314 = (undefined1  [12])(longdouble)(undefined1  [12])0x3126e978d4fdf3b;
  DAT_00001334 = 0xc;
  DAT_00001338 = 0;
  return in_D0;
}



// Function: FUN_0001c494 @ 0001c494

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001c494(void)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  int extraout_A1;
  int iVar5;
  longdouble lVar6;
  
  if ((DAT_0000c5c6 & 0x40) == 0) {
    if (DAT_0000aeb2 == &DAT_0004e000) {
      FUN_000239a4();
      FUN_000202f0();
    }
  }
  else if (DAT_00009fc8 == DAT_0000aeb2) {
    FUN_000239a4();
    FUN_000202f0();
  }
  while( true ) {
    if ((DAT_000032f4 & 1) != 0) {
      FUN_0001d03e();
      return;
    }
    if (DAT_000042b4 == '\x04') {
      _DAT_00004088 = _DAT_00004088 & 0xfbfd;
      _DAT_000032e4 = DAT_000042b8;
      DAT_000032ec = DAT_000042bc;
      DAT_000042b4 = '\x01';
    }
    if (DAT_000042b4 == '\x02') {
      FUN_0001e9b2();
      FUN_000224b4();
      if (DAT_000042b4 == '\x04') {
        FUN_0001ec58();
      }
      FUN_0001d03e();
      return;
    }
    if (DAT_000042b4 == '\x03') {
      FUN_0001ec7e();
      DAT_000042b4 = 0;
      if (DAT_000032f5 == '\x01') {
        FUN_0001d89e();
        DAT_000032f5 = 2;
        DAT_000032ec = DAT_000032ec | 0x40000;
        return;
      }
      FUN_000224b4();
      FUN_0001d03e();
      return;
    }
    if ((DAT_000042b4 == '\x01') &&
       (bVar1 = DAT_000042b5 & 1, DAT_000042b5 = DAT_000042b5 & 0xfe, bVar1 != 0)) {
      FUN_0001ec7e();
      _DAT_00004088 = _DAT_00004088 & 4;
    }
    if (DAT_000032fa != '\0') {
      DAT_000032f0 = DAT_000032f3;
    }
    if (DAT_000032fa == '\x04') {
      if ((DAT_000032f0 == '\x02') || (DAT_000032f0 == '\x03')) {
        FUN_0001dd9e();
      }
      else {
        FUN_0001dd3e();
      }
      DAT_000032fa = (DAT_000032e0 & 0x80) != 0;
      FUN_000224b4();
      FUN_0001d03e();
      return;
    }
    if (DAT_000032fa == '\x03') {
      FUN_0001dc80();
      FUN_0001dce2();
      if ((DAT_000032e0 & 0x80) == 0) {
        DAT_000032fa = 4;
      }
      else {
        DAT_000032fa = 2;
      }
      FUN_000224b4();
      FUN_0001d03e();
      return;
    }
    if (DAT_000032f5 == '\x04') {
      if (((DAT_000032e0 & 0x80) == 0) || (DAT_000032f4 != 0)) {
        FUN_0001dd3e();
        DAT_000032f5 = 0;
        FUN_000224b4();
        FUN_0001d03e();
        return;
      }
      DAT_000032f5 = '\0';
      FUN_0001dd3e();
      FUN_0001eac8();
      DAT_000042b4 = '\x01';
    }
    if (DAT_000032f5 == '\x03') {
      FUN_0001dc80();
      if ((_DAT_000032e4 & 0x200) == 0) {
        DAT_000032f5 = 4;
      }
      else {
        FUN_0001dce2();
        bVar1 = DAT_000032e2;
        _DAT_000032e4 = _DAT_000032e4 & 0xfffffdff;
        DAT_000032e2 = DAT_000032e2 & 0xf7;
        if ((bVar1 & 0x10) != 0) {
          DAT_000032e2 = DAT_000032e2 | 8;
        }
        FUN_0001d89e();
        DAT_000032f5 = 2;
      }
      DAT_000032ec = DAT_000032ec | 0x40000;
      FUN_000224b4();
      FUN_0001d03e();
      return;
    }
    if (((((DAT_0000aef9 & 8) != 0) && (DAT_00003c40 == 0)) && (DAT_00003b40 == 0)) &&
       ((uVar2 = _DAT_000032e4 & 0x40, _DAT_000032e4 = _DAT_000032e4 & 0xffffffbf, uVar2 == 0 &&
        (FUN_00010114(), DAT_0000aeb2 == (char *)0x0)))) {
      return;
    }
    pcVar3 = DAT_0000aeb2;
    DAT_00003c50 = DAT_0000aeb2;
    if (*DAT_0000aeb2 == -0x80) {
      if (DAT_000042b4 == '\x01') {
        FUN_0001eb84();
        FUN_000224b4();
        DAT_000042b4 = 0;
        FUN_0001d03e();
        return;
      }
      DAT_00007784 = DAT_00007784 | 0x10;
      if (((DAT_00007780 != 5) && (DAT_00007780 != 3)) &&
         ((DAT_00009fc4 != &DAT_0004e000 && (DAT_0000c4e6 != -1)))) {
        DAT_0000c4e6 = DAT_0000c4e6 + 1;
      }
      bVar1 = DAT_0000aef9 & 8;
      DAT_0000aef9 = DAT_0000aef9 & 0xf7;
      if (bVar1 != 0) {
        FUN_000100fe();
      }
      if (DAT_00007780 != 3) {
        FUN_0002349a();
      }
      _DAT_00004088 = _DAT_00004088 | 0x20;
      FUN_0001cfe6();
      return;
    }
    if ((*DAT_0000aeb2 != '/') || ((DAT_0000aef9 & 1) == 0)) break;
    cVar4 = *DAT_0000aeb2;
    while (DAT_0000aeb2 = DAT_0000aeb2 + 1, cVar4 != '\0') {
      cVar4 = *DAT_0000aeb2;
    }
  }
  if (DAT_000032f0 == '\a') {
    DAT_000040b2 = DAT_000041a6;
    DAT_000040b6 = DAT_000041aa;
    DAT_000040ba = DAT_000041ae;
    DAT_000040be = DAT_000041b2;
    DAT_000040c2 = DAT_000041b6;
    DAT_000040c6 = DAT_000041ba;
    DAT_000040ca = DAT_000041be;
    DAT_000040ce = DAT_000041c2;
    DAT_000040d2 = DAT_000041c6;
    _DAT_0000416a = DAT_000041ca;
    _DAT_0000416e = DAT_000041ce;
    _DAT_00004172 = DAT_000041d2;
  }
  FUN_00023a30();
  if (*pcVar3 == '.') {
    DAT_000032e2 = DAT_000032e2 | 1;
  }
  FUN_0001ed12();
  if ((DAT_000032e3 & 0x20) != 0) {
    _DAT_00004088 = _DAT_00004088 & 0xbfff;
    _DAT_00003c5c = DAT_00003c50;
    if (DAT_00003c44 != 0) {
      if (DAT_00003c54 == 7) {
        DAT_000032e0 = DAT_000032e0 & 0xe3;
        DAT_00003c60 = 0xffffffff;
        if (DAT_00003c64 == -1) {
          FUN_0000df20();
        }
        else {
          DAT_00003c64 = -1;
          _DAT_00004088 = _DAT_00004088 | 0x10;
        }
        DAT_0000aeb2 = DAT_00003c50;
        if ((DAT_0000aef9 & 8) != 0) {
          _DAT_000032e4 = _DAT_000032e4 | 0x40;
        }
        if (DAT_00003c50 == (char *)0x0) {
          __m68k_trap(0xe);
          return;
        }
        DAT_000032f0 = 0;
        DAT_000032f4 = 0;
        DAT_00003c54 = 0;
        _DAT_000040b2 = (undefined1  [12])DAT_00002750;
        lVar6 = (longdouble)DAT_00002750 - (longdouble)_DAT_0000ac4e;
        if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3) {
          lVar6 = lVar6 * (longdouble)2;
        }
        _DAT_00003f0c = (undefined1  [12])lVar6;
        _DAT_00004010 = (undefined1  [12])lVar6;
        _DAT_000040be = (undefined1  [12])DAT_00002754;
        _DAT_00003f30 = (undefined1  [12])((longdouble)DAT_00002754 - (longdouble)_DAT_0000ac5a);
        _DAT_0000401c = (undefined1  [12])((longdouble)DAT_00002754 - (longdouble)_DAT_0000ac5a);
        _DAT_000040ca = (undefined1  [12])DAT_00002758;
        _DAT_00003f54 = (undefined1  [12])((longdouble)DAT_00002758 - (longdouble)_DAT_0000ac66);
        _DAT_00004028 = (undefined1  [12])((longdouble)DAT_00002758 - (longdouble)_DAT_0000ac66);
        _DAT_000040d6 = (undefined1  [12])DAT_0000275c;
        _DAT_00003f78 = (undefined1  [12])((longdouble)DAT_0000275c - (longdouble)_DAT_0000ac72);
        _DAT_00004034 = (undefined1  [12])((longdouble)DAT_0000275c - (longdouble)_DAT_0000ac72);
        _DAT_000040e2 = (undefined1  [12])DAT_00002760;
        _DAT_00003f84 = (undefined1  [12])((longdouble)DAT_00002760 - (longdouble)_DAT_0000ac7e);
        _DAT_00004040 = (undefined1  [12])((longdouble)DAT_00002760 - (longdouble)_DAT_0000ac7e);
        _DAT_00004088 = _DAT_00004088 & 0xc07;
        return;
      }
      if (((((_DAT_000032e4 & 0x80000) == 0) && ((_DAT_000032e4 & 0x100000) == 0)) &&
          ((_DAT_000032e4 & 0x20000000) == 0)) && ((_DAT_000032e4 & 0x1000000) == 0))
      goto LAB_0001c892;
    }
    FUN_00020422();
    DAT_00003c6c = 0xffffffff;
    if ((_DAT_000032e4 & 0x40000000) != 0) {
      DAT_00003c6c = DAT_00003ed8;
    }
    if (DAT_00003c44 != 0) {
      DAT_000032e3 = DAT_000032e3 | 0x10;
    }
    iVar5 = extraout_A1 + -1;
    if ((iVar5 < 0) || (0x28 < iVar5)) {
      __m68k_trap(0xe);
    }
    if ((&PTR_s_W5__Z2_00026852)[iVar5] == (undefined *)0x0) {
      __m68k_trap(0xe);
      return;
    }
    DAT_0000aeb2 = (&PTR_s_W5__Z2_00026852)[iVar5];
    DAT_00003c54 = 0;
    return;
  }
  if ((_DAT_000032e4 & 0x1000000) != 0) {
    FUN_00022366();
  }
  if ((_DAT_000032e4 & 4) != 0) {
    FUN_00022414();
  }
LAB_0001c892:
                    /* WARNING: Could not recover jumptable at 0x0001c89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_LAB_0001c8a0 + DAT_00003c54 * 4))();
  return;
}



// Function: FUN_0001cfe6 @ 0001cfe6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001cfe6(void)

{
  longdouble lVar1;
  
  FUN_00022874();
  if ((DAT_00004088 & 0x40) != 0) {
    DAT_0000408a = DAT_0000408a | 0x80;
  }
  if (DAT_00003c60 == -1) {
    DAT_00004088 = DAT_00004088 | 0x80;
  }
  else if ((DAT_000032e2 & 1) != 0) {
    DAT_00004088 = DAT_00004088 | 0x80;
  }
  if ((DAT_00004088 & 4) != 0) {
    lVar1 = (longdouble)0;
    if ((DAT_00004089 & 4) != 0) {
      lVar1 = (longdouble)1;
    }
    _DAT_00005a68 = (undefined1  [12])lVar1;
  }
  return;
}



// Function: FUN_0001d03e @ 0001d03e

void FUN_0001d03e(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001d04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(PTR_LAB_0001d050 + (short)(DAT_000032f4 & 0xf) * 4))();
  return;
}



// Function: FUN_0001d326 @ 0001d326

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unkbyte10 FUN_0001d326(void)

{
  unkbyte10 in_FP0;
  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;
  
  lVar1 = (longdouble)_DAT_00004010 - (longdouble)_DAT_00004894;
  lVar2 = (longdouble)_DAT_0000401c - (longdouble)_DAT_000048a0;
  lVar6 = SQRT(lVar2 * lVar2 + lVar1 * lVar1);
  lVar3 = (longdouble)_DAT_0000487c - (longdouble)_DAT_00004894;
  lVar4 = (longdouble)_DAT_00004888 - (longdouble)_DAT_000048a0;
  lVar5 = SQRT(lVar4 * lVar4 + lVar3 * lVar3);
  lVar1 = ABS(lVar1 / lVar6 - lVar3 / lVar5) - (longdouble)(undefined1  [12])0x51b71758e219652d;
  if ((lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN) &&
     (lVar1 = ABS(lVar2 / lVar6 - lVar4 / lVar5) - (longdouble)(undefined1  [12])0x51b71758e219652d,
     lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN)) {
    DAT_0000486d = DAT_0000486d & 0xf3 | 2;
  }
  return in_FP0;
}



// Function: FUN_0001d6e4 @ 0001d6e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001d6e4(void)

{
  byte bVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  byte bVar6;
  
  bVar6 = DAT_000032e9;
  bVar1 = DAT_000032e6 & 0x40;
  DAT_000032e6 = DAT_000032e6 & 0xbf;
  if (bVar1 == 0) {
    bVar1 = DAT_000032e9 & 1;
    DAT_000032e9 = DAT_000032e9 & 0xfe;
    if (bVar1 != 0) {
      _DAT_00003df4 = (undefined1  [12])(longdouble)_DAT_00004028;
      _DAT_00003e00 = (undefined1  [12])(longdouble)_DAT_00004004;
      DAT_000032e6 = DAT_000032e6 | 0x20;
    }
    DAT_000046e4 = DAT_00003d70;
    _DAT_000046e8 = DAT_00003d74;
    _DAT_000046ec = DAT_00003d78;
    DAT_000046e0._1_1_ = 0;
    DAT_000046e0._3_1_ = 0;
    if ((DAT_000032ec._0_1_ & 0x40) != 0) {
      DAT_000046e0._1_1_ = 0x10;
    }
    if ((DAT_000032ec._0_1_ & 0x80) != 0) {
      DAT_000046e0._1_1_ = DAT_000046e0._1_1_ | 0x40;
    }
    bVar1 = DAT_000032e6 & 0x20;
    DAT_000032e6 = DAT_000032e6 & 0xdf;
    if (bVar1 != 0) {
      DAT_000046e0._3_1_ = 1;
      _DAT_00004738 = (undefined1  [12])(longdouble)_DAT_00003df4;
      _DAT_00004744 = (undefined1  [12])(longdouble)_DAT_00003e00;
      DAT_000032e9 = bVar6 & 0xfc;
      if ((bVar6 & 2) != 0) {
        DAT_000046e0._3_1_ = 3;
      }
    }
    if (DAT_000032f2 < '\x02') {
      DAT_000046e0._1_1_ = DAT_000046e0._1_1_ | 2;
    }
    else {
      if (DAT_000032f2 == '\x02') {
        DAT_000046e0._1_1_ = DAT_000046e0._1_1_ | 8;
      }
      DAT_000046e0._1_1_ = DAT_000046e0._1_1_ | 4;
      _DAT_00004708 = DAT_00004058;
      _DAT_0000470c = DAT_0000405c;
      _DAT_00004710 = DAT_00004060;
      _DAT_00004714 = DAT_00004064;
      _DAT_00004718 = DAT_00004068;
      _DAT_0000471c = DAT_0000406c;
      auVar2._0_4_ = DAT_00004010;
      auVar2._4_4_ = DAT_00004014;
      auVar2._8_4_ = DAT_00004018;
      auVar3._0_4_ = DAT_0000401c;
      auVar3._4_4_ = DAT_00004020;
      auVar3._8_4_ = DAT_00004024;
      auVar4._0_4_ = DAT_00004058;
      auVar4._4_4_ = DAT_0000405c;
      auVar4._8_4_ = DAT_00004060;
      auVar5._0_4_ = DAT_00004064;
      auVar5._4_4_ = DAT_00004068;
      auVar5._8_4_ = DAT_0000406c;
      _DAT_00004720 =
           (undefined1  [12])
           SQRT(((longdouble)auVar2 - (longdouble)auVar4) *
                ((longdouble)auVar2 - (longdouble)auVar4) +
                ((longdouble)auVar3 - (longdouble)auVar5) *
                ((longdouble)auVar3 - (longdouble)auVar5));
    }
    _DAT_000046f0 = DAT_00004010;
    _DAT_000046f4 = DAT_00004014;
    _DAT_000046f8 = DAT_00004018;
    _DAT_000046fc = DAT_0000401c;
    _DAT_00004700 = DAT_00004020;
    _DAT_00004704 = DAT_00004024;
    bVar1 = DAT_000032e5 & 0x20;
    DAT_000032e5 = DAT_000032e5 & 0xdf;
    auVar2 = _DAT_00003d4c;
    if (bVar1 != 0) {
      auVar2 = _DAT_00004028;
    }
    _DAT_0000472c = (undefined1  [12])(longdouble)auVar2;
    FUN_0002412e();
    return;
  }
  _DAT_00003df4 = (undefined1  [12])(longdouble)_DAT_00004028;
  _DAT_00003e00 = (undefined1  [12])(longdouble)_DAT_00004004;
  DAT_000032e6 = DAT_000032e6 | 0x20;
  DAT_000032e9 = DAT_000032e9 & 0xfe | 2;
  return;
}



// Function: FUN_0001d86a @ 0001d86a

void FUN_0001d86a(void)

{
  DAT_000032e4 = DAT_000032e4 | 6;
  DAT_000032e5 = DAT_000032e5 | 0x18;
  DAT_00004088 = DAT_00004088 | 0x40;
  return;
}



// Function: FUN_0001d88a @ 0001d88a

void FUN_0001d88a(void)

{
  DAT_000032e5 = DAT_000032e5 | 0x18;
  DAT_00004088 = DAT_00004088 | 0x40;
  return;
}



// Function: FUN_0001d89e @ 0001d89e

/* WARNING: Removing unreachable block (ram,0x0001d8d0) */
/* WARNING: Removing unreachable block (ram,0x0001d8da) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001d89e(void)

{
  longdouble lVar1;
  
  DAT_00004cc4 = DAT_00005b10;
  DAT_00004cc8 = DAT_00005b14;
  DAT_00004ccc = DAT_00005b18;
  if ((longdouble)_DAT_00005db0 != FLOAT_UNKNOWN && (longdouble)_DAT_00005db0 < FLOAT_UNKNOWN) {
    _DAT_00004cc4 = (undefined1  [12])-ABS((longdouble)_DAT_00004cc4);
  }
  if ((DAT_000032e2 & 8) == 0) {
    _DAT_00004cc4 = (undefined1  [12])-(longdouble)_DAT_00004cc4;
  }
  if ((longdouble)_DAT_00005db0 != FLOAT_UNKNOWN) {
    lVar1 = (longdouble)_DAT_00005e94 / (longdouble)_DAT_00005db0;
    _DAT_0000593c = (undefined1  [12])lVar1;
    if ((longdouble)_DAT_00005e94 != FLOAT_UNKNOWN) {
      _DAT_00004cc4 =
           (undefined1  [12])(SQRT(lVar1 * lVar1 + (longdouble)1) * (longdouble)_DAT_00004cc4);
    }
  }
  return;
}



// Function: FUN_0001d946 @ 0001d946

/* WARNING: Removing unreachable block (ram,0x0001d978) */
/* WARNING: Removing unreachable block (ram,0x0001d982) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001d946(void)

{
  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;
  
  DAT_00004cd0 = DAT_00005b10;
  DAT_00004cd4 = DAT_00005b14;
  DAT_00004cd8 = DAT_00005b18;
  if ((longdouble)_DAT_00005dbc != FLOAT_UNKNOWN && (longdouble)_DAT_00005dbc < FLOAT_UNKNOWN) {
    _DAT_00004cd0 = (undefined1  [12])-ABS((longdouble)_DAT_00004cd0);
  }
  if ((DAT_000032e2 & 8) == 0) {
    _DAT_00004cd0 = (undefined1  [12])-(longdouble)_DAT_00004cd0;
  }
  if ((longdouble)_DAT_00005dbc != FLOAT_UNKNOWN) {
    lVar1 = (longdouble)_DAT_00005ea0 / (longdouble)_DAT_00005dbc;
    _DAT_00005948 = (undefined1  [12])lVar1;
    if ((longdouble)_DAT_00005ea0 != FLOAT_UNKNOWN) {
      _DAT_00004cd0 =
           (undefined1  [12])(SQRT(lVar1 * lVar1 + (longdouble)1) * (longdouble)_DAT_00004cd0);
    }
  }
  if ((longdouble)_DAT_00005db0 == FLOAT_UNKNOWN) {
    _DAT_00005300 = _DAT_00004cc4;
    lVar1 = (longdouble)_DAT_00005948 * (longdouble)_DAT_00004cc4 + (longdouble)_DAT_00004cd0;
  }
  else {
    if ((longdouble)_DAT_00005dbc == FLOAT_UNKNOWN) {
      _DAT_00005300 = _DAT_00004cd0;
    }
    else {
      _DAT_00005954 = (undefined1  [12])((longdouble)_DAT_0000593c - (longdouble)_DAT_00005948);
      _DAT_00004cdc = (undefined1  [12])((longdouble)_DAT_00004cd0 - (longdouble)_DAT_00004cc4);
      _DAT_00005300 =
           (undefined1  [12])
           (((longdouble)_DAT_00004cd0 - (longdouble)_DAT_00004cc4) /
           ((longdouble)_DAT_0000593c - (longdouble)_DAT_00005948));
    }
    lVar1 = (longdouble)_DAT_0000593c * (longdouble)_DAT_00005300 + (longdouble)_DAT_00004cc4;
  }
  _DAT_000053e4 = (undefined1  [12])lVar1;
  if ((longdouble)_DAT_00005e94 == FLOAT_UNKNOWN) {
    _DAT_00006074 = _DAT_00005300;
    _DAT_00006158 = (undefined1  [12])(longdouble)0;
  }
  else if ((longdouble)_DAT_00005db0 == FLOAT_UNKNOWN) {
    _DAT_00006074 = (undefined1  [12])(longdouble)0;
    _DAT_00006158 = _DAT_000053e4;
  }
  else {
    lVar2 = (longdouble)_DAT_00005300 / (longdouble)_DAT_0000593c + lVar1;
    _DAT_00004cc4 = (undefined1  [12])lVar2;
    lVar3 = (longdouble)1 / (longdouble)_DAT_0000593c + (longdouble)_DAT_0000593c;
    _DAT_00005954 = (undefined1  [12])lVar3;
    lVar2 = lVar2 / lVar3;
    _DAT_00006074 = (undefined1  [12])lVar2;
    _DAT_00006158 = (undefined1  [12])((longdouble)_DAT_0000593c * lVar2);
  }
  if ((longdouble)_DAT_00005ea0 == FLOAT_UNKNOWN) {
    _DAT_00006080 = _DAT_00005300;
    _DAT_00006164 = (undefined1  [12])(longdouble)0;
  }
  else if ((longdouble)_DAT_00005dbc == FLOAT_UNKNOWN) {
    _DAT_00006080 = (undefined1  [12])(longdouble)0;
    _DAT_00006164 = _DAT_000053e4;
  }
  else {
    lVar2 = (longdouble)_DAT_00005300 / (longdouble)_DAT_00005948 + lVar1;
    _DAT_00004cd0 = (undefined1  [12])lVar2;
    lVar3 = (longdouble)1 / (longdouble)_DAT_00005948 + (longdouble)_DAT_00005948;
    _DAT_00005954 = (undefined1  [12])lVar3;
    lVar2 = lVar2 / lVar3;
    _DAT_00006080 = (undefined1  [12])lVar2;
    _DAT_00006164 = (undefined1  [12])((longdouble)_DAT_00005948 * lVar2);
  }
  _DAT_00006074 = (undefined1  [12])((longdouble)_DAT_00006074 + (longdouble)_DAT_0000605c);
  _DAT_00006158 = (undefined1  [12])((longdouble)_DAT_00006158 + (longdouble)_DAT_00006140);
  _DAT_00006080 = (undefined1  [12])((longdouble)_DAT_00006080 + (longdouble)_DAT_0000605c);
  _DAT_00006164 = (undefined1  [12])((longdouble)_DAT_00006164 + (longdouble)_DAT_00006140);
  _DAT_00005300 = (undefined1  [12])((longdouble)_DAT_0000605c + (longdouble)_DAT_00005300);
  _DAT_000053e4 = (undefined1  [12])((longdouble)_DAT_00006140 + lVar1);
  FUN_0001d88a();
  DAT_000032f0 = 1;
  lVar1 = (longdouble)FUN_00023fe0();
  _DAT_00003f0c = (undefined1  [12])lVar1;
  lVar1 = (longdouble)FUN_00023fe0();
  _DAT_00003f30 = (undefined1  [12])lVar1;
  return;
}



// Function: FUN_0001dc80 @ 0001dc80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001dc80(void)

{
  longdouble lVar1;
  
  FUN_0001d86a();
  DAT_000032f0 = 2;
  if ((DAT_000032e2 & 8) != 0) {
    DAT_000032f0 = 3;
  }
  lVar1 = (longdouble)FUN_00023fe0();
  _DAT_00003f9c = (undefined1  [12])lVar1;
  lVar1 = (longdouble)FUN_00023fe0();
  _DAT_00003fa8 = (undefined1  [12])lVar1;
  lVar1 = (longdouble)FUN_00023fe0();
  _DAT_00003f0c = (undefined1  [12])lVar1;
  lVar1 = (longdouble)FUN_00023fe0();
  _DAT_00003f30 = (undefined1  [12])lVar1;
  return;
}



// Function: FUN_0001dce2 @ 0001dce2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001dce2(void)

{
  DAT_0000605c = DAT_00006068;
  DAT_00006060 = DAT_0000606c;
  DAT_00006064 = DAT_00006070;
  DAT_00006140 = DAT_0000614c;
  DAT_00006144 = DAT_00006150;
  DAT_00006148 = DAT_00006154;
  DAT_00005db0 = DAT_00005dbc;
  _DAT_00005db4 = DAT_00005dc0;
  _DAT_00005db8 = DAT_00005dc4;
  DAT_00005e94 = DAT_00005ea0;
  _DAT_00005e98 = DAT_00005ea4;
  _DAT_00005e9c = DAT_00005ea8;
  DAT_00005b10 = DAT_00005b1c;
  DAT_00005b14 = DAT_00005b20;
  DAT_00005b18 = DAT_00005b24;
  return;
}



// Function: FUN_0001dd3e @ 0001dd3e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001dd3e(void)

{
  longdouble lVar1;
  
  FUN_0001d88a();
  DAT_000032f0 = 1;
  lVar1 = (longdouble)FUN_00023fe0();
  _DAT_00003f0c = (undefined1  [12])lVar1;
  lVar1 = (longdouble)FUN_00023fe0();
  _DAT_00003f30 = (undefined1  [12])lVar1;
  return;
}



// Function: FUN_0001dd6e @ 0001dd6e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001dd6e(void)

{
  longdouble lVar1;
  
  FUN_0001d88a();
  DAT_000032f0 = 1;
  lVar1 = (longdouble)FUN_00023fe0();
  _DAT_00003f0c = (undefined1  [12])lVar1;
  lVar1 = (longdouble)FUN_00023fe0();
  _DAT_00003f30 = (undefined1  [12])lVar1;
  return;
}



// Function: FUN_0001dd9e @ 0001dd9e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001dd9e(void)

{
  longdouble lVar1;
  
  FUN_0001d86a();
  lVar1 = (longdouble)FUN_00023fe0();
  _DAT_00003f0c = (undefined1  [12])lVar1;
  lVar1 = (longdouble)FUN_00023fe0();
  _DAT_00003f30 = (undefined1  [12])lVar1;
  return;
}



// Function: FUN_0001ddf6 @ 0001ddf6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_0001ddf6(void)

{
  longdouble lVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  char cVar4;
  longdouble lVar5;
  
  cVar4 = DAT_000032f3 == '\x01';
  if ((DAT_00004088 & 0x20) == 0) {
    if (((DAT_000032e5 & 8) == 0) && ((DAT_000032e5 & 0x10) == 0)) {
      cVar4 = '\x02';
    }
    if ((DAT_000032e5 & 0x20) != 0) {
      cVar4 = '\0';
    }
  }
  else {
    cVar4 = '\0';
  }
  if ((cVar4 == '\x01') || ('\x01' < DAT_000032f3)) {
    if ((DAT_000032e5 & 8) == 0) {
      if (DAT_000032fa == '\x01') {
        DAT_00005db0 = 0;
        _DAT_00005db4 = 0;
        _DAT_00005db8 = 0;
      }
      else {
        DAT_00006068 = DAT_0000605c;
        DAT_0000606c = DAT_00006060;
        DAT_00006070 = DAT_00006064;
        DAT_00005dbc = 0;
        DAT_00005dc0 = 0;
        DAT_00005dc4 = 0;
      }
    }
    if ((DAT_000032e5 & 0x10) == 0) {
      if (DAT_000032fa == '\x01') {
        DAT_00005e94 = 0;
        _DAT_00005e98 = 0;
        _DAT_00005e9c = 0;
      }
      else {
        DAT_0000614c = DAT_00006140;
        DAT_00006150 = DAT_00006144;
        DAT_00006154 = DAT_00006148;
        DAT_00005ea0 = 0;
        DAT_00005ea4 = 0;
        DAT_00005ea8 = 0;
      }
    }
  }
  if (cVar4 == '\x01') {
    if (DAT_000032fa == '\x01') {
      auVar2._0_4_ = DAT_00005db0;
      auVar2._4_4_ = _DAT_00005db4;
      auVar2._8_4_ = _DAT_00005db8;
      auVar3._0_4_ = DAT_00005e94;
      auVar3._4_4_ = _DAT_00005e98;
      auVar3._8_4_ = _DAT_00005e9c;
    }
    else {
      auVar2._0_4_ = DAT_00005dbc;
      auVar2._4_4_ = DAT_00005dc0;
      auVar2._8_4_ = DAT_00005dc4;
      auVar3._0_4_ = DAT_00005ea0;
      auVar3._4_4_ = DAT_00005ea4;
      auVar3._8_4_ = DAT_00005ea8;
    }
    lVar1 = (longdouble)_DAT_00005b10 * (longdouble)2.2 - (longdouble)0.01;
    lVar5 = (longdouble)_DAT_00005b10 * (longdouble)2.2;
    if (lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN) {
      lVar5 = (longdouble)0.01;
    }
    lVar5 = SQRT((longdouble)auVar2 * (longdouble)auVar2 + (longdouble)auVar3 * (longdouble)auVar3)
            - lVar5;
    if (lVar5 != FLOAT_UNKNOWN && lVar5 < FLOAT_UNKNOWN) {
      cVar4 = '\0';
    }
  }
  return cVar4;
}



// Function: FUN_0001df1e @ 0001df1e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001df1e(void)

{
  return;
}



// Function: FUN_0001dfa2 @ 0001dfa2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001dfa2(void)

{
  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;
  longdouble lVar5;
  
  if ((longdouble)_DAT_00005db0 == FLOAT_UNKNOWN) {
    lVar1 = (longdouble)(undefined1  [12])0x0;
    lVar2 = (longdouble)_DAT_00005e94;
  }
  else if ((longdouble)_DAT_00005e94 == FLOAT_UNKNOWN) {
    lVar1 = (longdouble)_DAT_00005db0;
    lVar2 = (longdouble)(undefined1  [12])0x0;
  }
  else {
    lVar1 = (longdouble)_DAT_00005db0;
    lVar2 = (longdouble)_DAT_00005e94;
    lVar4 = SQRT(lVar1 * lVar1 + lVar2 * lVar2);
    lVar1 = lVar1 / lVar4;
    lVar2 = lVar2 / lVar4;
  }
  if ((longdouble)_DAT_00005dbc == FLOAT_UNKNOWN) {
    lVar4 = (longdouble)(undefined1  [12])0x0;
    lVar3 = (longdouble)_DAT_00005ea0;
  }
  else if ((longdouble)_DAT_00005ea0 == FLOAT_UNKNOWN) {
    lVar4 = (longdouble)_DAT_00005dbc;
    lVar3 = (longdouble)(undefined1  [12])0x0;
  }
  else {
    lVar4 = (longdouble)_DAT_00005dbc;
    lVar3 = (longdouble)_DAT_00005ea0;
    lVar5 = SQRT(lVar4 * lVar4 + lVar3 * lVar3);
    lVar4 = lVar4 / lVar5;
    lVar3 = lVar3 / lVar5;
  }
  lVar1 = lVar1 * lVar3 - lVar2 * lVar4;
  if (lVar1 == FLOAT_UNKNOWN || FLOAT_UNKNOWN <= lVar1) {
    DAT_000032e2 = DAT_000032e2 | 8;
  }
  else {
    DAT_000032e2 = DAT_000032e2 & 0xf7;
  }
  return;
}



// Function: FUN_0001e0a6 @ 0001e0a6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001e0a6(void)

{
  longdouble lVar1;
  longdouble lVar2;
  
  lVar1 = (longdouble)FUN_00024064();
  lVar2 = (lVar1 * lVar1) / (longdouble)(undefined1  [12])0x4350000000000000;
  lVar1 = lVar2 - (longdouble)0.001;
  if (lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN) {
    lVar2 = (longdouble)0.001;
  }
  _DAT_00005b10 = (undefined1  [12])lVar2;
  _DAT_00005b1c = (undefined1  [12])lVar2;
  return;
}



// Function: FUN_0001e0e8 @ 0001e0e8

void FUN_0001e0e8(void)

{
  DAT_000042b4 = 0;
  DAT_000042b5 = 0;
  return;
}



// Function: FUN_0001e150 @ 0001e150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unkbyte10 FUN_0001e150(void)

{
  longdouble lVar1;
  unkbyte10 Var2;
  longdouble lVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;
  longdouble lVar7;
  longdouble lVar8;
  longdouble lVar9;
  
  lVar5 = (longdouble)_DAT_00003f0c - _DAT_00004584;
  lVar6 = (longdouble)_DAT_00003f30 - lRam00004590;
  lVar7 = (longdouble)_DAT_00003f54 - lRam0000459c;
  lVar1 = _DAT_00004584 - (longdouble)_DAT_000045c0;
  lVar3 = lRam00004590 - (longdouble)_DAT_000045cc;
  lVar4 = lRam0000459c - (longdouble)_DAT_000045d8;
  lVar8 = SQRT(lVar1 * lVar1 + lVar3 * lVar3 + lVar4 * lVar4);
  _DAT_00004368 = (undefined1  [12])lVar8;
  lVar9 = SQRT(lVar5 * lVar5 + lVar6 * lVar6 + lVar7 * lVar7);
  _DAT_00004374 = (undefined1  [12])lVar9;
  Var2 = acos((lVar1 * lVar5 + lVar3 * lVar6 + lVar4 * lVar7) / (lVar9 * lVar8));
  return Var2;
}



// Function: FUN_0001e282 @ 0001e282

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001e282(void)

{
  int unaff_D7;
  
  FUN_0001e706();
  if (unaff_D7 != 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_0001e706 @ 0001e706

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001e706(void)

{
  longdouble lVar1;
  uint uVar2;
  longdouble in_FP0;
  longdouble lVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;
  
  lVar6 = (longdouble)1.0;
  lVar3 = (longdouble)(undefined1  [12])0xae8000000000000;
  if (in_FP0 - (longdouble)(undefined1  [12])0xefa350fd7388b8d == FLOAT_UNKNOWN ||
      FLOAT_UNKNOWN <= in_FP0 - (longdouble)(undefined1  [12])0xefa350fd7388b8d) {
    if (in_FP0 - (longdouble)(undefined1  [12])0xefa350fd7388b8d == FLOAT_UNKNOWN ||
        FLOAT_UNKNOWN <= in_FP0 - (longdouble)(undefined1  [12])0xefa350fd7388b8d) {
      if (in_FP0 - (longdouble)(undefined1  [12])0xefa34e4e41ac72c == FLOAT_UNKNOWN ||
          FLOAT_UNKNOWN <= in_FP0 - (longdouble)(undefined1  [12])0xefa34e4e41ac72c) {
        if ((longdouble)_DAT_000043a4 - (longdouble)(undefined1  [12])0x1ec0000000000000 ==
            FLOAT_UNKNOWN ||
            (longdouble)_DAT_000043a4 - (longdouble)(undefined1  [12])0x1ec0000000000000 <
            FLOAT_UNKNOWN) {
          uVar2 = 0;
        }
        else {
          if (in_FP0 - (longdouble)(undefined1  [12])0x56774fc2b5f295b4 == FLOAT_UNKNOWN ||
              FLOAT_UNKNOWN <= in_FP0 - (longdouble)(undefined1  [12])0x56774fc2b5f295b4) {
            uVar2 = 0;
          }
          else {
            uVar2 = 6;
            lVar6 = (longdouble)2.0;
          }
          lVar3 = lVar3 * (longdouble)3.0;
        }
      }
      else if ((longdouble)_DAT_000043a4 - (longdouble)(undefined1  [12])0x1ec0000000000000 ==
               FLOAT_UNKNOWN ||
               (longdouble)_DAT_000043a4 - (longdouble)(undefined1  [12])0x1ec0000000000000 <
               FLOAT_UNKNOWN) {
        uVar2 = 0;
      }
      else {
        uVar2 = 4;
        lVar3 = lVar3 * (longdouble)2.0;
      }
    }
    else {
      uVar2 = 2;
    }
    lVar5 = (longdouble)_DAT_00004374;
    lVar1 = lVar5 - (longdouble)_DAT_00004368;
    lVar4 = (longdouble)_DAT_00004368;
    if (lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN) {
      lVar4 = lVar5;
    }
    lVar4 = lVar4 - (longdouble)1778.0;
    if ((DAT_000032e9 & 0x20) == 0) {
      uVar2 = 0;
      if (lVar4 - lVar3 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar4 - lVar3) {
        _DAT_0000438c = ZEXT812(0) << 0x20;
        _DAT_00004218 = ZEXT812(0) << 0x20;
        return;
      }
    }
    else if (1 < uVar2) {
      lVar1 = lVar4 - lVar3 * lVar6;
      if (lVar1 == FLOAT_UNKNOWN || lVar1 < FLOAT_UNKNOWN) {
        uVar2 = 0;
      }
      else {
        lVar5 = ((longdouble)2032.0 * lVar4) / (lVar3 * lVar6);
        if (lVar5 - (longdouble)(undefined1  [12])0x3e80000000000001 != FLOAT_UNKNOWN &&
            FLOAT_UNKNOWN <= lVar5 - (longdouble)(undefined1  [12])0x3e80000000000001) {
          lVar5 = (longdouble)12192.0;
        }
      }
    }
    if (uVar2 == 0) {
      _DAT_00004218 = (undefined1  [12])(longdouble)(undefined1  [12])0x53aaaaa3ad18d25f;
      _DAT_0000438c = ZEXT812(0) << 0x20;
      DAT_000032e9 = DAT_000032e9 | 8;
    }
    else {
      _DAT_000042cc =
           (undefined1  [12])
           ((longdouble)uVar2 * (longdouble)1778.0 *
            (lVar5 / (longdouble)(undefined1  [12])0x53aaaaa3ad18d25f) * lVar6);
      if (lVar5 - (longdouble)_DAT_000045b4 != FLOAT_UNKNOWN &&
          FLOAT_UNKNOWN <= lVar5 - (longdouble)_DAT_000045b4) {
        lVar5 = (longdouble)_DAT_000045b4;
      }
      _DAT_0000438c = (undefined1  [12])lVar5;
    }
    return;
  }
  lVar6 = (longdouble)(undefined1  [12])0x44aab367a0f9097 - (longdouble)_DAT_00003f00;
  if (lVar6 == FLOAT_UNKNOWN || FLOAT_UNKNOWN <= lVar6) {
    return;
  }
  _DAT_00004218 = (undefined1  [12])(longdouble)(undefined1  [12])0x44aab367a0f9097;
  _DAT_0000438c = ZEXT812(0) << 0x20;
  DAT_000032e9 = DAT_000032e9 | 8;
  return;
}



// Function: FUN_0001e9b2 @ 0001e9b2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001e9b2(void)

{
  longdouble *plVar1;
  byte bVar2;
  longdouble lVar3;
  undefined1 auVar4 [12];
  undefined *puVar5;
  
  if (DAT_000042b7 == '\x05') {
    puVar5 = &DAT_0001e946;
  }
  else if (DAT_000042b7 == '\t') {
    puVar5 = &DAT_0001e95a;
  }
  else {
    puVar5 = &DAT_0001e97e;
  }
  if (DAT_000042b7 < '\x02') {
    DAT_00004088 = DAT_00004088 & 0xfb;
    DAT_00004089 = DAT_00004089 & 0xfd;
  }
  else {
    DAT_00004088 = DAT_00004088 | 4;
    DAT_00004089 = DAT_00004089 | 2;
  }
  plVar1 = *(longdouble **)(puVar5 + (short)(ushort)(byte)(DAT_000042b7 - DAT_000042b6) * 4);
  DAT_000032ec = DAT_000042bc;
  DAT_00004088 = DAT_00004088 | 0x40;
  _DAT_000032e4 = DAT_000042b8 | 0x380000;
  DAT_000032f0 = 1;
  _DAT_00003f0c = (undefined1  [12])*plVar1;
  _DAT_00003f30 = (undefined1  [12])plVar1[1];
  _DAT_00003f54 = (undefined1  [12])plVar1[2];
  if ((byte)(DAT_000042b7 - DAT_000042b6) == 0) {
    _DAT_00003f00 = (undefined1  [12])(longdouble)_DAT_000045b4;
    auVar4._0_4_ = DAT_0000438c;
    auVar4._4_4_ = DAT_00004390;
    auVar4._8_4_ = DAT_00004394;
    lVar3 = (longdouble)_DAT_000045b4 - (longdouble)auVar4;
    if ((lVar3 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar3) &&
       (bVar2 = DAT_000032e9 & 8, DAT_000032e9 = DAT_000032e9 | 8, bVar2 == 0)) {
      DAT_00004218 = DAT_0000438c;
      _DAT_0000421c = DAT_00004390;
      _DAT_00004220 = DAT_00004394;
    }
    DAT_000042b6 = FUN_0001eb4a();
    if ((DAT_00004088 & 4) != 0) {
      DAT_000032e3 = DAT_000032e3 | 0x10;
    }
  }
  else {
    DAT_00003f00 = DAT_0000438c;
    DAT_00003f04 = DAT_00004390;
    DAT_00003f08 = DAT_00004394;
    DAT_000032e9 = DAT_000032e9 & 0xf7;
    DAT_00004218 = 0;
    _DAT_0000421c = 0;
    _DAT_00004220 = 0;
  }
  if ((char)(DAT_000042b6 + -1) == '\0') {
    DAT_000042b4 = 4;
  }
  DAT_000042b6 = DAT_000042b6 + -1;
  return;
}



// Function: FUN_0001eac8 @ 0001eac8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001eac8(void)

{
  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;
  
  _DAT_00004584 = (longdouble)_DAT_00003f0c;
  lVar3 = (longdouble)_DAT_00003f30;
  lVar1 = (longdouble)_DAT_00003f54;
  lRam000045a8 = (longdouble)_DAT_00003f78;
  _DAT_000045b4 = (longdouble)_DAT_00003f00;
  DAT_0000466c = DAT_000032f0;
  DAT_0000466e = _DAT_00004088;
  DAT_000042bc = DAT_000032ec;
  DAT_000042b8 = _DAT_000032e4;
  lRam00004590 = lVar3;
  lRam0000459c = lVar1;
  lVar2 = (longdouble)FUN_0001eb4a();
  _DAT_000045c0 = (longdouble)_DAT_00004010;
  _DAT_000045cc = (longdouble)_DAT_0000401c;
  _DAT_000045d8 = (longdouble)_DAT_00004028;
  lRam000045e4 = (longdouble)_DAT_00004034;
  _DAT_000042fc = lVar2 - (longdouble)_DAT_00004010;
  lRam00004308 = lVar3 - (longdouble)_DAT_0000401c;
  lRam00004314 = lVar1 - (longdouble)_DAT_00004028;
  _DAT_00004088 = _DAT_00004088 & 0xbfff;
  return;
}



// Function: FUN_0001eb4a @ 0001eb4a

void FUN_0001eb4a(void)

{
  char cVar1;
  char *in_A0;
  char *in_A1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = in_A1;
  do {
    cVar1 = *in_A0;
    pcVar2 = pcVar3 + 1;
    *pcVar3 = cVar1;
    in_A0 = in_A0 + 1;
    pcVar3 = pcVar2;
  } while (cVar1 != '\0');
  for (; pcVar2 < in_A1 + 0x2b; pcVar2 = pcVar2 + 1) {
    *pcVar2 = '\0';
  }
  return;
}



// Function: FUN_0001eb68 @ 0001eb68

undefined4 FUN_0001eb68(void)

{
  undefined1 uVar1;
  undefined4 in_D0;
  undefined1 *in_A0;
  undefined1 *in_A1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar2 = in_A1;
  do {
    uVar1 = *in_A0;
    *in_A0 = *puVar2;
    puVar3 = puVar2 + 1;
    *puVar2 = uVar1;
    in_A0 = in_A0 + 1;
    puVar2 = puVar3;
  } while ((int)puVar3 <= (int)(short)((short)in_A1 + 0x2b));
  return in_D0;
}



// Function: FUN_0001eb84 @ 0001eb84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001eb84(void)

{
  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;
  longdouble lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  longdouble lVar9;
  longdouble extraout_FP0;
  longdouble lVar10;
  
  lVar9 = lRam0000459c;
  uVar8 = _DAT_00004088;
  uVar7 = DAT_000032ec;
  uVar6 = _DAT_000032e4;
  lVar1 = (longdouble)_DAT_00003f0c;
  lVar2 = (longdouble)_DAT_00003f30;
  lVar3 = (longdouble)_DAT_00003f54;
  lVar4 = (longdouble)_DAT_00003f78;
  lVar5 = (longdouble)_DAT_00003f00;
  DAT_000042b5 = DAT_000042b5 | 1;
  _DAT_00004088 = DAT_0000466e;
  DAT_000032f0 = DAT_0000466c;
  DAT_000032ec = DAT_000042bc;
  _DAT_000032e4 = DAT_000042b8;
  _DAT_00003f0c = (undefined1  [12])_DAT_00004584;
  _DAT_00003f30 = (undefined1  [12])lRam00004590;
  _DAT_00003f54 = (undefined1  [12])lRam0000459c;
  _DAT_00003f78 = (undefined1  [12])lRam000045a8;
  _DAT_00003f00 = (undefined1  [12])_DAT_000045b4;
  lVar10 = lRam00004590;
  FUN_0001eb68();
  DAT_0000466c = FUN_0001eb4a();
  _DAT_000045c0 = extraout_FP0;
  _DAT_000045cc = lVar10;
  _DAT_000045d8 = lVar9;
  _DAT_00004584 = lVar1;
  lRam00004590 = lVar2;
  lRam0000459c = lVar3;
  lRam000045a8 = lVar4;
  _DAT_000045b4 = lVar5;
  DAT_0000466e = uVar8;
  DAT_000042bc = uVar7;
  DAT_000042b8 = uVar6;
  _DAT_000042fc = lVar1 - extraout_FP0;
  lRam00004308 = lVar2 - lVar10;
  lRam00004314 = lVar3 - lVar9;
  return;
}



// Function: FUN_0001ec44 @ 0001ec44

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001ec44(void)

{
  DAT_00004218 = 0;
  _DAT_0000421c = 0;
  _DAT_00004220 = 0;
  DAT_000032e9 = DAT_000032e9 & 0xf7;
  return;
}



// Function: FUN_0001ec58 @ 0001ec58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001ec58(void)

{
  _DAT_00003f0c = (undefined1  [12])_DAT_00004584;
  _DAT_00003f30 = (undefined1  [12])lRam00004590;
  _DAT_00003f54 = (undefined1  [12])lRam0000459c;
  _DAT_00003f78 = (undefined1  [12])lRam000045a8;
  _DAT_00003f00 = (undefined1  [12])_DAT_000045b4;
  return;
}



// Function: FUN_0001ec7e @ 0001ec7e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001ec7e(void)

{
  FUN_0001ec58();
  _DAT_00004088 = DAT_0000466e;
  FUN_0001eb4a();
  DAT_000032f0 = DAT_0000466c;
  DAT_000032ec = DAT_000042bc;
  _DAT_000032e4 = DAT_000042b8;
  return;
}



// Function: FUN_0001eca8 @ 0001eca8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0001eca8(void)

{
  bool bVar1;
  
  bVar1 = (DAT_000032e4 & 0x20) == 0 &&
          (DAT_000032f5 == '\0' &&
          (DAT_000032f4 == '\0' &&
          (DAT_00003c40 == 0 && ((_DAT_00004088 & 0x793b) == 0x4000 && DAT_000032f0 == '\x01'))));
  if (((DAT_0000c5c6 & 3) != 0) || (DAT_0000c5c0 != '\0')) {
    bVar1 = false;
  }
  return bVar1;
}



// Function: FUN_0001ed12 @ 0001ed12

void FUN_0001ed12(void)

{
  byte bVar1;
  char cVar2;
  byte *unaff_A6;
  byte *pbVar3;
  
  if ((DAT_00004088 & 4) == 0) {
    FUN_00024080();
  }
  do {
    while( true ) {
      while( true ) {
        pbVar3 = unaff_A6;
        unaff_A6 = pbVar3 + 1;
        bVar1 = *pbVar3;
        if ((bVar1 == 0) || (bVar1 == 0x80)) {
          if (bVar1 == 0x80) {
            unaff_A6 = pbVar3;
          }
          DAT_0000aeb2 = unaff_A6;
          return;
        }
        if (DAT_000032f6 == 0) break;
        cVar2 = (char)(bVar1 & 0x7f);
        if (cVar2 == '?') {
          DAT_000032f6 = DAT_000032f6 + 1;
        }
        if (cVar2 == '!') {
          DAT_000032f6 = DAT_000032f6 + -1;
        }
      }
      if ((((pbVar3 == DAT_0000aeb2) && (*pbVar3 != 0x24)) && (*pbVar3 != 0x3b)) &&
         ((((*unaff_A6 != 0 && ((pbVar3[2] == 0x3d || (pbVar3[3] == 0x3d)))) && (pbVar3[2] != 0)) &&
          (((DAT_00003c60 == -1 || (DAT_00003c44 != 0)) || ('\0' < DAT_0000c5c0)))))) break;
LAB_0001edfe:
      if ((((((char)*pbVar3 < 'A') || ('Z' < (char)*pbVar3)) || (*pbVar3 == 0x4e)) ||
          (((*pbVar3 == 0x54 || (DAT_00003c60 == -1)) ||
           (((DAT_000032e2 & 1) != 0 || (DAT_00003c44 != 0)))))) &&
         (((((char)*pbVar3 < 'a' || ('z' < (char)*pbVar3)) || (*pbVar3 == 0x6e)) ||
          ((((*pbVar3 == 0x74 || (DAT_00003c60 == -1)) || ((DAT_000032e2 & 1) != 0)) ||
           (DAT_00003c44 != 0)))))) {
        (*(code *)(PTR_LAB_0001ee84 + (bVar1 & 0x7f) * 4))();
      }
    }
    if (((DAT_00004088 & 4) == 0) && ((DAT_0000c519 & 0x10) == 0)) {
      __m68k_trap(0xe);
      goto LAB_0001edfe;
    }
    FUN_00024ebc();
    unaff_A6 = pbVar3;
  } while( true );
}



// Function: FUN_0002021c @ 0002021c

void FUN_0002021c(void)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  
  sVar2 = 5;
  psVar3 = &DAT_00020256;
  do {
    sVar1 = *psVar3;
    if (DAT_000032f8 == sVar1) break;
    sVar2 = sVar2 + -1;
    psVar3 = psVar3 + 1;
  } while (sVar2 != -1);
  if (DAT_000032f8 != sVar1) {
    __m68k_trap(0xe);
    return;
  }
  (*(code *)(PTR_LAB_00020262 + sVar2 * 4))();
  return;
}



// Function: FUN_00020286 @ 00020286

void FUN_00020286(void)

{
  byte bVar1;
  int unaff_D4;
  undefined2 *in_A1;
  int unaff_A6;
  undefined4 in_FPSR;
  
  *in_A1 = *(undefined2 *)(unaff_A6 + 0x75 + unaff_D4 * 8);
  bVar1 = (byte)((uint)in_FPSR >> 0x18);
  if ((!(bool)(bVar1 & 1) && !(bool)(bVar1 >> 2 & 1)) && !(bool)(bVar1 >> 3 & 1)) {
    DAT_000032f6 = DAT_000032f6 + 1;
  }
  return;
}



// Function: FUN_000202f0 @ 000202f0

void FUN_000202f0(void)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = DAT_0004e000;
  pcVar2 = &DAT_0004e001;
  while (cVar1 != '\0') {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  }
  if (pcVar2[-2] == '%') {
    DAT_000032e0 = DAT_000032e0 | 1;
  }
  else {
    DAT_000032e0 = DAT_000032e0 & 0xfe;
  }
  return;
}



// Function: FUN_00020422 @ 00020422

void FUN_00020422(void)

{
  int iVar1;
  undefined4 in_D1;
  undefined4 unaff_A6;
  
  if ((DAT_00003c40 < 0) || (4 < DAT_00003c40)) {
    __m68k_trap(0xe);
  }
  iVar1 = DAT_00003c40 * 4;
  DAT_00003c40 = DAT_00003c40 + 1;
  *(undefined4 *)(&DAT_00003c1c + iVar1) = unaff_A6;
  DAT_00003c54 = 5;
  DAT_00003c4c = in_D1;
  return;
}



// Function: FUN_00020dcc @ 00020dcc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00020dcc(void)

{
  short in_D0w;
  
  if (in_D0w == 0x36) {
    _DAT_0000ac8a = DAT_0000acc6;
    _DAT_0000ac8e = DAT_0000acca;
    _DAT_0000ac92 = DAT_0000acce;
    _DAT_0000ac96 = DAT_0000acd2;
    _DAT_0000ac9a = DAT_0000acd6;
    _DAT_0000ac9e = DAT_0000acda;
    DAT_0000aca2 = DAT_0000acde;
    _DAT_0000aca6 = DAT_0000ace2;
    _DAT_0000acaa = DAT_0000ace6;
    DAT_0000acae = DAT_0000acea;
    _DAT_0000acb2 = DAT_0000acee;
    _DAT_0000acb6 = DAT_0000acf2;
    DAT_0000acba = DAT_0000acf6;
    _DAT_0000acbe = DAT_0000acfa;
    _DAT_0000acc2 = DAT_0000acfe;
    _DAT_01200736 = 1;
  }
  else if (in_D0w == 0x37) {
    _DAT_0000ac8a = DAT_0000ad02;
    _DAT_0000ac8e = DAT_0000ad06;
    _DAT_0000ac92 = DAT_0000ad0a;
    _DAT_0000ac96 = DAT_0000ad0e;
    _DAT_0000ac9a = DAT_0000ad12;
    _DAT_0000ac9e = DAT_0000ad16;
    DAT_0000aca2 = DAT_0000ad1a;
    _DAT_0000aca6 = DAT_0000ad1e;
    _DAT_0000acaa = DAT_0000ad22;
    DAT_0000acae = DAT_0000ad26;
    _DAT_0000acb2 = DAT_0000ad2a;
    _DAT_0000acb6 = DAT_0000ad2e;
    DAT_0000acba = DAT_0000ad32;
    _DAT_0000acbe = DAT_0000ad36;
    _DAT_0000acc2 = DAT_0000ad3a;
    _DAT_01200736 = 2;
  }
  else if (in_D0w == 0x38) {
    _DAT_0000ac8a = DAT_0000ad3e;
    _DAT_0000ac8e = DAT_0000ad42;
    _DAT_0000ac92 = DAT_0000ad46;
    _DAT_0000ac96 = DAT_0000ad4a;
    _DAT_0000ac9a = DAT_0000ad4e;
    _DAT_0000ac9e = DAT_0000ad52;
    DAT_0000aca2 = DAT_0000ad56;
    _DAT_0000aca6 = DAT_0000ad5a;
    _DAT_0000acaa = DAT_0000ad5e;
    DAT_0000acae = DAT_0000ad62;
    _DAT_0000acb2 = DAT_0000ad66;
    _DAT_0000acb6 = DAT_0000ad6a;
    DAT_0000acba = DAT_0000ad6e;
    _DAT_0000acbe = DAT_0000ad72;
    _DAT_0000acc2 = DAT_0000ad76;
    _DAT_01200736 = 3;
  }
  else if (in_D0w == 0x39) {
    _DAT_0000ac8a = DAT_0000ad7a;
    _DAT_0000ac8e = DAT_0000ad7e;
    _DAT_0000ac92 = DAT_0000ad82;
    _DAT_0000ac96 = DAT_0000ad86;
    _DAT_0000ac9a = DAT_0000ad8a;
    _DAT_0000ac9e = DAT_0000ad8e;
    DAT_0000aca2 = DAT_0000ad92;
    _DAT_0000aca6 = DAT_0000ad96;
    _DAT_0000acaa = DAT_0000ad9a;
    DAT_0000acae = DAT_0000ad9e;
    _DAT_0000acb2 = DAT_0000ada2;
    _DAT_0000acb6 = DAT_0000ada6;
    DAT_0000acba = DAT_0000adaa;
    _DAT_0000acbe = DAT_0000adae;
    _DAT_0000acc2 = DAT_0000adb2;
    _DAT_01200736 = 4;
  }
  else if (in_D0w == 0x3a) {
    _DAT_0000ac8a = DAT_0000adb6;
    _DAT_0000ac8e = DAT_0000adba;
    _DAT_0000ac92 = DAT_0000adbe;
    _DAT_0000ac96 = DAT_0000adc2;
    _DAT_0000ac9a = DAT_0000adc6;
    _DAT_0000ac9e = DAT_0000adca;
    DAT_0000aca2 = DAT_0000adce;
    _DAT_0000aca6 = DAT_0000add2;
    _DAT_0000acaa = DAT_0000add6;
    DAT_0000acae = DAT_0000adda;
    _DAT_0000acb2 = DAT_0000adde;
    _DAT_0000acb6 = DAT_0000ade2;
    DAT_0000acba = DAT_0000ade6;
    _DAT_0000acbe = DAT_0000adea;
    _DAT_0000acc2 = DAT_0000adee;
    _DAT_01200736 = 5;
  }
  else if (in_D0w == 0x3b) {
    _DAT_0000ac8a = DAT_0000adf2;
    _DAT_0000ac8e = DAT_0000adf6;
    _DAT_0000ac92 = DAT_0000adfa;
    _DAT_0000ac96 = DAT_0000adfe;
    _DAT_0000ac9a = DAT_0000ae02;
    _DAT_0000ac9e = DAT_0000ae06;
    DAT_0000aca2 = DAT_0000ae0a;
    _DAT_0000aca6 = DAT_0000ae0e;
    _DAT_0000acaa = DAT_0000ae12;
    DAT_0000acae = DAT_0000ae16;
    _DAT_0000acb2 = DAT_0000ae1a;
    _DAT_0000acb6 = DAT_0000ae1e;
    DAT_0000acba = DAT_0000ae22;
    _DAT_0000acbe = DAT_0000ae26;
    _DAT_0000acc2 = DAT_0000ae2a;
    _DAT_01200736 = 6;
  }
  FUN_0002389a();
  return;
}



// Function: FUN_0002136e @ 0002136e

void FUN_0002136e(void)

{
  DAT_000032e6 = DAT_000032e6 | 1;
  DAT_000042ac = 0;
  DAT_000032f0 = 0;
  return;
}



// Function: FUN_000213b0 @ 000213b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000213b0(void)

{
  if ((DAT_000032e3 & 0x20) != 0) {
    return;
  }
  if (DAT_00003c44 == 0) {
    return;
  }
  if (DAT_00003c40 != 0) {
    return;
  }
  if (0x17 < DAT_00003c48) {
    DAT_000032e3 = DAT_000032e3 | 0x20;
    DAT_00004088 = DAT_00004088 | 4;
    return;
  }
  DAT_00003c48 = 0x14;
  DAT_0000605c = 0;
  DAT_00006060 = 0;
  DAT_00006064 = 0;
  DAT_00006068 = 0;
  DAT_0000606c = 0;
  DAT_00006070 = 0;
  DAT_00006140 = 0;
  DAT_00006144 = 0;
  DAT_00006148 = 0;
  DAT_0000614c = 0;
  DAT_00006150 = 0;
  DAT_00006154 = 0;
  DAT_00005db0 = 0;
  _DAT_00005db4 = 0;
  _DAT_00005db8 = 0;
  DAT_00005e94 = 0;
  _DAT_00005e98 = 0;
  _DAT_00005e9c = 0;
  DAT_000032e3 = DAT_000032e3 | 0x60;
  DAT_00004088 = DAT_00004088 | 4;
  return;
}



// Function: FUN_00022366 @ 00022366

/* WARNING: Control flow encountered bad instruction data */

void FUN_00022366(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00022414 @ 00022414

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00022414(void)

{
  if ((DAT_000032e4 & 1) == 0) {
    DAT_00003d28 = DAT_00003f0c;
    _DAT_00003d2c = DAT_00003f10;
    _DAT_00003d30 = DAT_00003f14;
    DAT_00003d34 = DAT_00003f30;
    _DAT_00003d38 = DAT_00003f34;
    _DAT_00003d3c = DAT_00003f38;
  }
  _DAT_00003d40 = DAT_00003f54;
  _DAT_00003d44 = DAT_00003f58;
  _DAT_00003d48 = DAT_00003f5c;
  _DAT_00003f0c =
       (undefined1  [12])
       ((longdouble)_DAT_00003ddc * (longdouble)_DAT_00003db8 + (longdouble)_DAT_00003f9c);
  _DAT_00003f30 =
       (undefined1  [12])
       ((longdouble)_DAT_00003de8 * (longdouble)_DAT_00003db8 + (longdouble)_DAT_00003fa8);
  _DAT_00003f54 =
       (undefined1  [12])
       ((longdouble)_DAT_00003fd4 * (longdouble)_DAT_00003dac + (longdouble)_DAT_00003fb4);
  DAT_00004088 = DAT_00004088 | 0x40;
  DAT_000032e5 = DAT_000032e5 | 0x38;
  return;
}



// Function: FUN_000224b4 @ 000224b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000224b4(void)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  byte bVar9;
  
  bVar9 = DAT_000032e5;
  if (((DAT_000032ec._1_1_ & 1) == 0) || (((DAT_000032e5 & 8) == 0 && ((DAT_000032e5 & 0x10) == 0)))
     ) {
    DAT_00004010 = DAT_00003f0c;
    DAT_00004014 = DAT_00003f10;
    DAT_00004018 = DAT_00003f14;
    DAT_0000401c = DAT_00003f30;
    DAT_00004020 = DAT_00003f34;
    DAT_00004024 = DAT_00003f38;
    DAT_00003d4c = DAT_00004028;
    DAT_00003d50 = DAT_0000402c;
    DAT_00003d54 = DAT_00004030;
    DAT_00004028 = DAT_00003f54;
    DAT_0000402c = DAT_00003f58;
    DAT_00004030 = DAT_00003f5c;
    DAT_00004034 = DAT_00003f78;
    _DAT_00004038 = DAT_00003f7c;
    _DAT_0000403c = DAT_00003f80;
    DAT_00004058 = DAT_00003f9c;
    DAT_0000405c = DAT_00003fa0;
    DAT_00004060 = DAT_00003fa4;
    DAT_00004064 = DAT_00003fa8;
    DAT_00004068 = DAT_00003fac;
    DAT_0000406c = DAT_00003fb0;
    DAT_00004070 = DAT_00003fb4;
    _DAT_00004074 = DAT_00003fb8;
    _DAT_00004078 = DAT_00003fbc;
  }
  else {
    DAT_000032e5 = DAT_000032e5 | 0x18;
    DAT_00004010 = DAT_00003f0c;
    DAT_00004014 = DAT_00003f10;
    DAT_00004018 = DAT_00003f14;
    if ((longdouble)_DAT_00003e9c != FLOAT_UNKNOWN) {
      auVar1._0_4_ = DAT_00003f0c;
      auVar1._4_4_ = DAT_00003f10;
      auVar1._8_4_ = DAT_00003f14;
      auVar3._0_4_ = DAT_00003f30;
      auVar3._4_4_ = DAT_00003f34;
      auVar3._8_4_ = DAT_00003f38;
      _DAT_00004010 =
           (undefined1  [12])
           ((longdouble)auVar1 * (longdouble)_DAT_00003dc4 -
           (longdouble)auVar3 * (longdouble)_DAT_00003dd0);
    }
    if ((longdouble)_DAT_00003eb4 != FLOAT_UNKNOWN) {
      _DAT_00004010 = (undefined1  [12])((longdouble)_DAT_00004010 * (longdouble)_DAT_00003eb4);
    }
    DAT_0000401c = DAT_00003f30;
    DAT_00004020 = DAT_00003f34;
    DAT_00004024 = DAT_00003f38;
    if ((longdouble)_DAT_00003e9c != FLOAT_UNKNOWN) {
      auVar4._0_4_ = DAT_00003f30;
      auVar4._4_4_ = DAT_00003f34;
      auVar4._8_4_ = DAT_00003f38;
      auVar2._0_4_ = DAT_00003f0c;
      auVar2._4_4_ = DAT_00003f10;
      auVar2._8_4_ = DAT_00003f14;
      _DAT_0000401c =
           (undefined1  [12])
           ((longdouble)auVar4 * (longdouble)_DAT_00003dc4 +
           (longdouble)auVar2 * (longdouble)_DAT_00003dd0);
    }
    if ((longdouble)_DAT_00003ec0 != FLOAT_UNKNOWN) {
      _DAT_0000401c = (undefined1  [12])((longdouble)_DAT_0000401c * (longdouble)_DAT_00003ec0);
    }
    if ((bVar9 & 0x20) != 0) {
      DAT_00003d4c = DAT_00004028;
      DAT_00003d50 = DAT_0000402c;
      DAT_00003d54 = DAT_00004030;
      DAT_00004028 = DAT_00003f54;
      DAT_0000402c = DAT_00003f58;
      DAT_00004030 = DAT_00003f5c;
      if ((longdouble)_DAT_00003ecc != FLOAT_UNKNOWN) {
        _DAT_00004028 = (undefined1  [12])((longdouble)_DAT_00004028 * (longdouble)_DAT_00003ecc);
      }
    }
    if (('\x01' < DAT_000032f0) && (DAT_000032f0 != '\a')) {
      DAT_00004058 = DAT_00003f9c;
      DAT_0000405c = DAT_00003fa0;
      DAT_00004060 = DAT_00003fa4;
      if ((longdouble)_DAT_00003e9c != FLOAT_UNKNOWN) {
        auVar5._0_4_ = DAT_00003f9c;
        auVar5._4_4_ = DAT_00003fa0;
        auVar5._8_4_ = DAT_00003fa4;
        auVar7._0_4_ = DAT_00003fa8;
        auVar7._4_4_ = DAT_00003fac;
        auVar7._8_4_ = DAT_00003fb0;
        _DAT_00004058 =
             (undefined1  [12])
             ((longdouble)auVar5 * (longdouble)_DAT_00003dc4 -
             (longdouble)auVar7 * (longdouble)_DAT_00003dd0);
      }
      if ((longdouble)_DAT_00003eb4 != FLOAT_UNKNOWN) {
        _DAT_00004058 = (undefined1  [12])((longdouble)_DAT_00004058 * (longdouble)_DAT_00003eb4);
      }
      DAT_00004064 = DAT_00003fa8;
      DAT_00004068 = DAT_00003fac;
      DAT_0000406c = DAT_00003fb0;
      if ((longdouble)_DAT_00003e9c != FLOAT_UNKNOWN) {
        auVar8._0_4_ = DAT_00003fa8;
        auVar8._4_4_ = DAT_00003fac;
        auVar8._8_4_ = DAT_00003fb0;
        auVar6._0_4_ = DAT_00003f9c;
        auVar6._4_4_ = DAT_00003fa0;
        auVar6._8_4_ = DAT_00003fa4;
        _DAT_00004064 =
             (undefined1  [12])
             ((longdouble)auVar8 * (longdouble)_DAT_00003dc4 +
             (longdouble)auVar6 * (longdouble)_DAT_00003dd0);
      }
      if ((longdouble)_DAT_00003ec0 != FLOAT_UNKNOWN) {
        _DAT_00004064 = (undefined1  [12])((longdouble)_DAT_00004064 * (longdouble)_DAT_00003ec0);
      }
      if (((DAT_000032e4 & 8) != 0) &&
         (DAT_00004070 = DAT_00003fb4, _DAT_00004074 = DAT_00003fb8, _DAT_00004078 = DAT_00003fbc,
         (longdouble)_DAT_00003ecc != FLOAT_UNKNOWN)) {
        _DAT_00004070 = (undefined1  [12])((longdouble)_DAT_00004070 * (longdouble)_DAT_00003ecc);
      }
    }
  }
  DAT_00004004 = DAT_00003f00;
  DAT_00004008 = DAT_00003f04;
  DAT_0000400c = DAT_00003f08;
  DAT_0000407c = DAT_00003fc0;
  DAT_00004080 = DAT_00003fc4;
  DAT_00004084 = DAT_00003fc8;
  DAT_000032f1 = DAT_000032f0;
  if (((((DAT_000032ec._0_1_ & 8) != 0) &&
       (_DAT_00004010 = (undefined1  [12])((longdouble)_DAT_00003d58 - (longdouble)_DAT_00004010),
       '\x01' < DAT_000032f0)) && ((DAT_000032ec._0_1_ & 4) == 0)) &&
     ((_DAT_00004058 = (undefined1  [12])((longdouble)_DAT_00003d58 - (longdouble)_DAT_00004058),
      (DAT_000032ec._0_1_ & 2) != 0 || ((DAT_000032ec._0_1_ & 0x10) == 0)))) {
    if (DAT_000032f0 == '\x02') {
      DAT_000032f1 = '\x03';
    }
    else {
      DAT_000032f1 = '\x02';
    }
  }
  DAT_000032f2 = DAT_000032f1;
  if ((DAT_000032ec._0_1_ & 0x10) == 0) {
    return;
  }
  _DAT_0000401c = (undefined1  [12])((longdouble)_DAT_00003d64 - (longdouble)_DAT_0000401c);
  if (DAT_000032f1 < '\x02') {
    return;
  }
  if ((DAT_000032ec._0_1_ & 2) == 0) {
    _DAT_00004064 = (undefined1  [12])((longdouble)_DAT_00003d64 - (longdouble)_DAT_00004064);
    if (((DAT_000032ec._0_1_ & 4) == 0) && ((DAT_000032ec._0_1_ & 8) != 0)) {
      return;
    }
    if (DAT_000032f1 == '\x02') {
      DAT_000032f1 = 3;
    }
    else {
      DAT_000032f1 = 2;
    }
    DAT_000032f2 = DAT_000032f1;
    return;
  }
  return;
}



// Function: FUN_00022874 @ 00022874

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00022874(void)

{
  longdouble lVar1;
  ushort uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  int iVar14;
  ushort uVar15;
  ushort uVar16;
  byte bVar17;
  longdouble lVar18;
  
  uVar15 = _DAT_00004088;
  _DAT_0000408a = (undefined1 *)0x0;
  _DAT_0000412e = (undefined1  [12])(longdouble)_DAT_0000ac4e;
  uVar2 = (ushort)((uint)_DAT_0000af58 >> 0x10);
  if ((DAT_000032e5 & 8) != 0) {
    lVar18 = (longdouble)_DAT_00004010;
    if (uVar2 >> 0xc == 3) {
      lVar18 = lVar18 / (longdouble)2;
    }
    lVar18 = (longdouble)_DAT_0000ac4e + lVar18;
    if (DAT_000032f1 == '\a') {
      auVar3._0_4_ = DAT_00003fe0;
      auVar3._4_4_ = DAT_00003fe4;
      auVar3._8_4_ = DAT_00003fe8;
      lVar18 = lVar18 * (longdouble)auVar3;
    }
    _DAT_000040b2 = (undefined1  [12])lVar18;
  }
  _DAT_0000413a = (undefined1  [12])(longdouble)_DAT_0000ac5a;
  if ((DAT_000032e5 & 0x10) != 0) {
    lVar18 = (longdouble)_DAT_0000ac5a + (longdouble)_DAT_0000401c;
    if (DAT_000032f1 == '\a') {
      auVar4._0_4_ = DAT_00003fe0;
      auVar4._4_4_ = DAT_00003fe4;
      auVar4._8_4_ = DAT_00003fe8;
      lVar18 = lVar18 * (longdouble)auVar4;
    }
    _DAT_000040be = (undefined1  [12])lVar18;
  }
  _DAT_00004146 = (undefined1  [12])(longdouble)_DAT_0000ac66;
  if ((DAT_000032e5 & 0x20) != 0) {
    uVar16 = _DAT_00004088;
    if ((uVar2 >> 0xc == 0) && (DAT_00002988 == 0)) {
      lVar18 = (longdouble)_DAT_00004028;
      lVar1 = ABS((longdouble)_DAT_000040ca - lVar18) -
              (longdouble)(undefined1  [12])0x4800000000000000;
      if (lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1) {
        _DAT_00004088 = _DAT_00004088 | 0x80;
        uVar16 = _DAT_00004088;
        DAT_00004088 = SUB21(uVar15,1);
        if (((uVar15 & 0x400) != 0) && (DAT_00003c44 != 0)) {
          DAT_00004089 = (undefined1)uVar16;
          _DAT_00004088 = CONCAT11(DAT_00004088,DAT_00004089) | 0x40;
          uVar16 = _DAT_00004088;
        }
      }
    }
    else {
      lVar18 = (longdouble)_DAT_0000ac66 + (longdouble)_DAT_00004028;
      if (DAT_000032f1 == '\a') {
        auVar5._0_4_ = DAT_00003fe0;
        auVar5._4_4_ = DAT_00003fe4;
        auVar5._8_4_ = DAT_00003fe8;
        lVar18 = lVar18 * (longdouble)auVar5;
      }
    }
    _DAT_00004088 = uVar16;
    _DAT_000040ca = (undefined1  [12])lVar18;
  }
  if (((DAT_000032f1 == '\x02') || (DAT_000032f1 == '\x03')) && ((_DAT_00004088 & 0x4000) != 0)) {
    if ((DAT_000032ec._0_1_ & 1) == 0) {
      _DAT_00004112 = (undefined1  [12])((longdouble)_DAT_00004070 + (longdouble)_DAT_0000ac66);
    }
    if ((DAT_000032ec._0_1_ & 2) == 0) {
      _DAT_00004106 = (undefined1  [12])((longdouble)_DAT_00004064 + (longdouble)_DAT_0000ac5a);
    }
    if ((DAT_000032ec._0_1_ & 4) == 0) {
      lVar18 = (longdouble)_DAT_00004058;
      if (uVar2 >> 0xc == 3) {
        lVar18 = lVar18 / (longdouble)2;
      }
      _DAT_000040fa = (undefined1  [12])(lVar18 + (longdouble)_DAT_0000ac4e);
    }
  }
  _DAT_00004152 = (undefined1  [12])(longdouble)_DAT_0000ac72;
  if ((DAT_000032e4 & 0x20) != 0) {
    _DAT_000040d6 = (undefined1  [12])((longdouble)_DAT_0000ac72 + (longdouble)_DAT_00004034);
  }
  if (((DAT_00003c44 == 4) && ((DAT_000032e3 & 0x40) == 0)) &&
     (((DAT_000032e5 & 0x20) != 0 && (((DAT_000032e2 & 4) != 0 && (0xe10 < DAT_00003f90)))))) {
    DAT_00003f90 = 0xe10;
    __m68k_trap(0xe);
  }
  DAT_000040a6 = DAT_00004004;
  _DAT_000040aa = DAT_00004008;
  _DAT_000040ae = DAT_0000400c;
  if ((((DAT_000032ec._1_1_ & 2) != 0) && (uVar2 >> 0xc != 3)) && ((DAT_000032ec._0_1_ & 0x20) == 0)
     ) {
    auVar12._0_4_ = DAT_00004004;
    auVar12._4_4_ = DAT_00004008;
    auVar12._8_4_ = DAT_0000400c;
    _DAT_000040a6 = (undefined1  [12])((longdouble)auVar12 * (longdouble)DAT_00003f90);
  }
  _DAT_0000415e = (undefined1  [12])(longdouble)_DAT_0000acba;
  DAT_000040e2 = DAT_00003f84;
  _DAT_000040e6 = DAT_00003f88;
  _DAT_000040ea = DAT_00003f8c;
  if (((DAT_00003c44 == 4) && ((DAT_000032e3 & 0x40) == 0)) &&
     (((DAT_000032e5 & 0x20) != 0 && (((DAT_000032e2 & 4) != 0 && (DAT_00007780 != 5)))))) {
    bVar17 = (byte)(((uint)((longdouble)_DAT_00005fa8 < FLOAT_UNKNOWN) << 0x1b) >> 0x18) |
             (byte)(((uint)((longdouble)_DAT_00005fa8 == FLOAT_UNKNOWN) << 0x1a) >> 0x18);
    lVar18 = (longdouble)FUN_00023fe0();
    if ((DAT_000032ec._1_1_ & 2) == 0) {
      lVar18 = (lVar18 / (longdouble)_DAT_00003f00) * (longdouble)DAT_00003f90;
    }
    else {
      lVar18 = lVar18 / (longdouble)_DAT_00003f00;
    }
    lVar18 = lVar18 * (longdouble)0x18;
    if ((bool)(bVar17 & 1) || ((bool)(bVar17 >> 2 & 1) || !(bool)(bVar17 >> 3 & 1))) {
      if ((DAT_0000aecb & 2) != 0) {
        lVar18 = -lVar18;
      }
    }
    else if ((DAT_0000aecb & 2) == 0) {
      lVar18 = -lVar18;
    }
    if (DAT_000032f1 != '\0') {
      _DAT_00003f84 = (undefined1  [12])(lVar18 + (longdouble)_DAT_00003f84);
      DAT_00004040 = DAT_00003f84;
      _DAT_00004044 = DAT_00003f88;
      _DAT_00004048 = DAT_00003f8c;
      DAT_000040e2 = DAT_00003f84;
      _DAT_000040e6 = DAT_00003f88;
      _DAT_000040ea = DAT_00003f8c;
    }
  }
  _DAT_00004092 = DAT_00003efc;
  _DAT_0000408e = DAT_00003ef8;
  _DAT_000040ee = DAT_00003f90;
  DAT_0000411e = DAT_0000407c;
  _DAT_00004122 = DAT_00004080;
  _DAT_00004126 = DAT_00004084;
  if (((_DAT_00004088 & 0x3188) != 0) && (DAT_00003c60 == -1)) {
    DAT_00007784 = DAT_00007784 | 2;
  }
  uVar2 = (ushort)((uint)_DAT_0000af58 >> 0x10);
  if (DAT_000032f1 == '\0') {
    _DAT_0000408a = (undefined1 *)CONCAT22(2,DAT_0000408c);
    iVar14 = DAT_00000fb4;
    if (uVar2 >> 0xc == 3) {
      iVar14 = DAT_00000fb8;
    }
    _DAT_000040a6 = (undefined1  [12])iVar14;
  }
  if (DAT_000032f1 == '\x01') {
    _DAT_0000408a = (undefined1 *)((uint)_DAT_0000408a & 0xffff);
  }
  if (DAT_000032f1 == '<') {
    _DAT_0000408a = (undefined1 *)CONCAT22(5,DAT_0000408c);
  }
  if ((DAT_000032f1 == '\x01') && ((DAT_000032e4 & 0x20) != 0)) {
    if ((DAT_000032ec._1_1_ & 8) != 0) {
      _DAT_0000408a = (undefined1 *)0xc0000;
    }
    if ((DAT_000032ec._1_1_ & 0x10) != 0) {
      _DAT_0000408a = (undefined1 *)0xc0040;
    }
    if ((DAT_000032ec._1_1_ & 0x20) != 0) {
      _DAT_0000408a = (undefined1 *)0xc0020;
    }
  }
  if ((DAT_000032f1 == '\x02') || (DAT_000032f1 == '\x03')) {
    _DAT_0000408a = (undefined1 *)CONCAT22(1,DAT_0000408c);
    if (((DAT_000032ec._0_1_ & 1) != 0) &&
       (_DAT_0000408a = (undefined1 *)0x10000, DAT_000032f1 == '\x03')) {
      _DAT_0000408a = &LAB_00010080;
    }
    if ((DAT_000032ec._0_1_ & 2) != 0) {
      _DAT_0000408a = (undefined1 *)CONCAT22(_DAT_0000408a,0x40);
      if (DAT_000032f1 == '\x03') {
        _DAT_0000408a = (undefined1 *)(CONCAT31(_DAT_0000408a,0x40) | 0x80);
      }
    }
    if ((DAT_000032ec._0_1_ & 4) != 0) {
      _DAT_0000408a = (undefined1 *)CONCAT22(_DAT_0000408a,0x20);
      if (DAT_000032f1 == '\x02') {
        _DAT_0000408a = (undefined1 *)(CONCAT31(_DAT_0000408a,0x20) | 0x80);
      }
    }
    if (uVar2 >> 0xc == 3) {
      _DAT_0000408a = (undefined1 *)((uint)_DAT_0000408a ^ 0x80);
    }
  }
  if (DAT_000032f1 == '\a') {
    _DAT_0000408a = (undefined1 *)CONCAT22(0x12,DAT_0000408c);
    _DAT_0000416a = DAT_00003fe0;
    _DAT_0000416e = DAT_00003fe4;
    _DAT_00004172 = DAT_00003fe8;
    DAT_00003f0c = DAT_00003f18;
    DAT_00003f10 = DAT_00003f1c;
    DAT_00003f14 = DAT_00003f20;
    DAT_00003f30 = DAT_00003f3c;
    DAT_00003f34 = DAT_00003f40;
    DAT_00003f38 = DAT_00003f44;
    DAT_00003f54 = DAT_00003f60;
    DAT_00003f58 = DAT_00003f64;
    DAT_00003f5c = DAT_00003f68;
    FUN_000224b4();
    auVar6._0_4_ = DAT_00003fec;
    auVar6._4_4_ = DAT_00003ff0;
    auVar6._8_4_ = DAT_00003ff4;
    _DAT_00004176 =
         (undefined1  [12])
         (((longdouble)_DAT_0000ac4e + (longdouble)_DAT_00004010) * (longdouble)auVar6);
    auVar7._0_4_ = DAT_00003fec;
    auVar7._4_4_ = DAT_00003ff0;
    auVar7._8_4_ = DAT_00003ff4;
    _DAT_00004182 =
         (undefined1  [12])
         (((longdouble)_DAT_0000ac5a + (longdouble)_DAT_0000401c) * (longdouble)auVar7);
    auVar8._0_4_ = DAT_00003fec;
    auVar8._4_4_ = DAT_00003ff0;
    auVar8._8_4_ = DAT_00003ff4;
    _DAT_0000418e =
         (undefined1  [12])
         (((longdouble)_DAT_0000ac66 + (longdouble)_DAT_00004028) * (longdouble)auVar8);
    _DAT_0000419a = DAT_00003fec;
    _DAT_0000419e = DAT_00003ff0;
    _DAT_000041a2 = DAT_00003ff4;
    DAT_00003f0c = DAT_00003f24;
    DAT_00003f10 = DAT_00003f28;
    DAT_00003f14 = DAT_00003f2c;
    DAT_00003f30 = DAT_00003f48;
    DAT_00003f34 = DAT_00003f4c;
    DAT_00003f38 = DAT_00003f50;
    DAT_00003f54 = DAT_00003f6c;
    DAT_00003f58 = DAT_00003f70;
    DAT_00003f5c = DAT_00003f74;
    DAT_00003fe0 = DAT_00003ff8;
    DAT_00003fe4 = DAT_00003ffc;
    DAT_00003fe8 = DAT_00004000;
    FUN_000224b4();
    auVar9._0_4_ = DAT_00003ff8;
    auVar9._4_4_ = DAT_00003ffc;
    auVar9._8_4_ = DAT_00004000;
    _DAT_000041a6 =
         (undefined1  [12])
         (((longdouble)_DAT_0000ac4e + (longdouble)_DAT_00004010) * (longdouble)auVar9);
    auVar10._0_4_ = DAT_00003ff8;
    auVar10._4_4_ = DAT_00003ffc;
    auVar10._8_4_ = DAT_00004000;
    _DAT_000041b2 =
         (undefined1  [12])
         (((longdouble)_DAT_0000ac5a + (longdouble)_DAT_0000401c) * (longdouble)auVar10);
    auVar11._0_4_ = DAT_00003ff8;
    auVar11._4_4_ = DAT_00003ffc;
    auVar11._8_4_ = DAT_00004000;
    _DAT_000041be =
         (undefined1  [12])
         (((longdouble)_DAT_0000ac66 + (longdouble)_DAT_00004028) * (longdouble)auVar11);
    DAT_000041ca = DAT_00003ff8;
    DAT_000041ce = DAT_00003ffc;
    DAT_000041d2 = DAT_00004000;
    DAT_00003f54 = DAT_00003f6c;
    DAT_00003f58 = DAT_00003f70;
    DAT_00003f5c = DAT_00003f74;
  }
  else {
    _DAT_000041ca = (undefined1  [12])(longdouble)1;
    DAT_00003f24 = DAT_00003f0c;
    DAT_00003f28 = DAT_00003f10;
    DAT_00003f2c = DAT_00003f14;
    DAT_00003f48 = DAT_00003f30;
    DAT_00003f4c = DAT_00003f34;
    DAT_00003f50 = DAT_00003f38;
    DAT_00003f6c = DAT_00003f54;
    DAT_00003f70 = DAT_00003f58;
    DAT_00003f74 = DAT_00003f5c;
    DAT_00003ff8 = DAT_00003fe0;
    DAT_00003ffc = DAT_00003fe4;
    DAT_00004000 = DAT_00003fe8;
  }
  if (((DAT_000032e6 & 1) != 0) && (0xffff < DAT_000042ac)) {
    _DAT_0000408a = (undefined1 *)CONCAT22(7,(short)DAT_000042ac);
  }
  if ((DAT_000032ec._0_1_ & 0x20) != 0) {
    DAT_0000408c = (ushort)(DAT_000032f1 == '\"');
    _DAT_0000408a = (undefined1 *)CONCAT22(0xf,DAT_0000408c);
  }
  if (((DAT_0000aefa & 0x40) != 0) && (DAT_0000c5c0 == '\0')) {
    _DAT_000040ca = (undefined1  [12])DAT_00002758;
    _DAT_00003f54 = (undefined1  [12])((longdouble)DAT_00002758 - (longdouble)_DAT_0000aca2);
    _DAT_00004028 = (undefined1  [12])((longdouble)DAT_00002758 - (longdouble)_DAT_0000aca2);
    if (((DAT_000032f1 == '\x02') || (DAT_000032f1 == '\x03')) &&
       (((_DAT_00004088 & 0x4000) != 0 && ((DAT_000032ec._0_1_ & 1) == 0)))) {
      _DAT_0000408a = (undefined1 *)CONCAT22(2,DAT_0000408c);
    }
  }
  if ((DAT_0000aefa & 0x20) != 0) {
    _DAT_000040a6 = (undefined1  [12])(longdouble)(undefined1  [12])0x255d55c28f5c28f6;
  }
  if (((((DAT_000032e4 & 0x20) == 0) && ((DAT_000032ec._1_1_ & 2) == 0)) &&
      ((longdouble)_DAT_000040a6 - (longdouble)DAT_00000fc4 < FLOAT_UNKNOWN ||
       (longdouble)_DAT_000040a6 - (longdouble)DAT_00000fc4 == FLOAT_UNKNOWN)) &&
     ((DAT_0000aefa & 0x20) == 0)) {
    _DAT_0000408a = (undefined1 *)((uint)_DAT_0000408a | 0x20000000);
  }
  if (((DAT_000032f4 == '\0') && (DAT_00003c40 == 0)) &&
     (((DAT_000032e4 & 0x20) == 0 && ((DAT_000032e0 & 0x80) != 0)))) {
    _DAT_0000408a = (undefined1 *)((uint)_DAT_0000408a | 0x20000000);
  }
  if ((DAT_000032ec._1_1_ & 4) == 0) {
    DAT_0000425b = DAT_0000425b & 0xfe;
  }
  else {
    _DAT_0000408a = (undefined1 *)((uint)_DAT_0000408a | 0x20000000);
    if ((DAT_000032e4 & 0x20) == 0) {
      DAT_0000425b = DAT_0000425b & 0xfe;
    }
    else {
      DAT_0000425b = DAT_0000425b | 1;
    }
  }
  if (DAT_000032f1 == '\0') {
    _DAT_0000408a = (undefined1 *)((uint)_DAT_0000408a & 0xdfffffff);
  }
  if ((DAT_0000408b == '\x01') &&
     (auVar13._0_4_ = DAT_0000411e, auVar13._4_4_ = _DAT_00004122, auVar13._8_4_ = _DAT_00004126,
     FLOAT_UNKNOWN <= ABS((longdouble)auVar13) - (longdouble)(undefined1  [12])0x0 ||
     ABS((longdouble)auVar13) - (longdouble)(undefined1  [12])0x0 == FLOAT_UNKNOWN)) {
    _DAT_0000408a = (undefined1 *)((uint)_DAT_0000408a & 0xdfffffff);
  }
  if ((DAT_00003c40 == 0) && ((DAT_0000aefa & 0x20) != 0)) {
    _DAT_0000408a = (undefined1 *)((uint)_DAT_0000408a & 0xdfffffff);
  }
  if ((((DAT_00003c44 == 4) && ((DAT_000032e3 & 0x40) == 0)) && ((DAT_000032e5 & 0x20) != 0)) &&
     ((DAT_000032e2 & 4) != 0)) {
    _DAT_0000408a = (undefined1 *)((uint)_DAT_0000408a & 0xdfffffff);
  }
  if ((DAT_00007784 & 2) != 0) {
    _DAT_0000408a = (undefined1 *)((uint)_DAT_0000408a & 0xdfffffff);
  }
  if (DAT_000032f1 != '\0') {
    _DAT_0000408a = (undefined1 *)((uint)_DAT_0000408a | 0x10000000);
  }
  bVar17 = DAT_000032e8 & 2;
  DAT_000032e8 = DAT_000032e8 & 0xfd;
  if (bVar17 != 0) {
    _DAT_0000408a = (undefined1 *)0x40030000;
    if ((DAT_000032e5 & 8) != 0) {
      _DAT_0000408a = (undefined1 *)0x40030001;
    }
    if ((DAT_000032e5 & 0x10) != 0) {
      _DAT_0000408a = (undefined1 *)((uint)_DAT_0000408a | 2);
    }
    if ((DAT_000032e5 & 0x20) != 0) {
      _DAT_0000408a = (undefined1 *)((uint)_DAT_0000408a | 4);
    }
    if ((DAT_000032e4 & 0x20) != 0) {
      _DAT_0000408a = (undefined1 *)((uint)_DAT_0000408a | 8);
    }
  }
  bVar17 = DAT_000032e3 & 0x10;
  DAT_000032e3 = DAT_000032e3 & 0xef;
  if (bVar17 == 0) {
    _DAT_00004088 = _DAT_00004088 & 0xfdff;
  }
  else {
    _DAT_00004088 = _DAT_00004088 | 0x200;
  }
  DAT_000032ec._1_1_ = DAT_000032ec._1_1_ & 0xfb;
  DAT_00003f0c = DAT_00003f24;
  DAT_00003f10 = DAT_00003f28;
  DAT_00003f14 = DAT_00003f2c;
  DAT_00003f18 = DAT_00003f24;
  DAT_00003f1c = DAT_00003f28;
  DAT_00003f20 = DAT_00003f2c;
  DAT_00003f30 = DAT_00003f48;
  DAT_00003f34 = DAT_00003f4c;
  DAT_00003f38 = DAT_00003f50;
  DAT_00003f3c = DAT_00003f48;
  DAT_00003f40 = DAT_00003f4c;
  DAT_00003f44 = DAT_00003f50;
  DAT_00003f60 = DAT_00003f6c;
  DAT_00003f64 = DAT_00003f70;
  DAT_00003f68 = DAT_00003f74;
  DAT_00003fe0 = DAT_00003ff8;
  DAT_00003fe4 = DAT_00003ffc;
  DAT_00003fe8 = DAT_00004000;
  DAT_00003fec = DAT_00003ff8;
  DAT_00003ff0 = DAT_00003ffc;
  DAT_00003ff4 = DAT_00004000;
  if ((_DAT_00004088 & 8) == 0) {
    FUN_000231f0();
  }
  if ((DAT_000032e9 & 8) == 0) {
    _DAT_0000408a = (undefined1 *)((uint)_DAT_0000408a & 0xfdffffff);
  }
  else {
    _DAT_0000408a = (undefined1 *)((uint)_DAT_0000408a | 0x2000000);
  }
  return;
}



// Function: FUN_000231f0 @ 000231f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000231f0(void)

{
  longdouble lVar1;
  ushort uVar2;
  undefined2 *puVar3;
  undefined2 *puVar5;
  undefined2 *puVar4;
  
  if ((longdouble)_DAT_000040a6 == FLOAT_UNKNOWN) {
    __m68k_trap(0xe);
  }
  lVar1 = (longdouble)_DAT_000040b2 - (longdouble)DAT_00000fd8;
  if (lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN) {
    __m68k_trap(0xe);
  }
  lVar1 = (longdouble)_DAT_000040b2 - (longdouble)DAT_00000fdc;
  if (lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1) {
    __m68k_trap(0xe);
  }
  lVar1 = (longdouble)_DAT_000040be - (longdouble)DAT_00000fe0;
  if (lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN) {
    __m68k_trap(0xe);
  }
  lVar1 = (longdouble)_DAT_000040be - (longdouble)DAT_00000fe4;
  if (lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1) {
    __m68k_trap(0xe);
  }
  uVar2 = (ushort)((uint)_DAT_0000af58 >> 0x1c);
  if ((uVar2 != 0) || (DAT_00002988 != 0)) {
    lVar1 = (longdouble)_DAT_000040ca;
    if (DAT_00000fe8 != -0x80000000) {
      if (lVar1 - (longdouble)DAT_00000fe8 != FLOAT_UNKNOWN &&
          lVar1 - (longdouble)DAT_00000fe8 < FLOAT_UNKNOWN) {
        __m68k_trap(0xe);
      }
      if (lVar1 - (longdouble)DAT_00000fec != FLOAT_UNKNOWN &&
          FLOAT_UNKNOWN <= lVar1 - (longdouble)DAT_00000fec) {
        if (uVar2 == 0) {
          lVar1 = ((longdouble)DAT_00002758 - lVar1) -
                  (longdouble)(undefined1  [12])0x7e00000000000000;
          if (lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN) {
            __m68k_trap(0xe);
          }
        }
        else {
          __m68k_trap(0xe);
        }
      }
    }
    lVar1 = (longdouble)_DAT_000040d6 - (longdouble)DAT_00000ff0;
    if (lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN) {
      __m68k_trap(0xe);
    }
    lVar1 = (longdouble)_DAT_000040d6 - (longdouble)DAT_00000ff4;
    if (lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1) {
      __m68k_trap(0xe);
    }
    lVar1 = (longdouble)_DAT_000040e2 - (longdouble)DAT_00000ff8;
    if (lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN) {
      __m68k_trap(0xe);
    }
    lVar1 = (longdouble)_DAT_000040e2 - (longdouble)DAT_00000ffc;
    if (lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1) {
      __m68k_trap(0xe);
    }
  }
  if ((DAT_01200815 & 0x40) != 0) {
    DAT_01200680 = 0;
    DAT_012006e4 = 0;
    puVar3 = &DAT_0000425c;
    puVar5 = (undefined2 *)&DAT_012006b2;
    do {
      puVar4 = puVar3 + 1;
      *puVar5 = *puVar3;
      puVar3 = puVar4;
      puVar5 = puVar5 + 1;
    } while (puVar4 < (undefined2 *)0x4288);
    DAT_0000aef9 = DAT_0000aef9 | 0x20;
    _DAT_00004088 = _DAT_00004088 & 0xc07;
  }
  return;
}



// Function: FUN_00023384 @ 00023384

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00023384(void)

{
  byte bVar1;
  short sVar2;
  undefined4 *puVar3;
  
  sVar2 = 0x201;
  puVar3 = &DAT_00003e90;
  do {
    *(undefined2 *)puVar3 = 0;
    sVar2 = sVar2 + -1;
    puVar3 = (undefined4 *)((int)puVar3 + 2);
  } while (sVar2 != -1);
  _DAT_00004092 = DAT_00003efc;
  DAT_000032e2 = DAT_000032e2 & 0xfb;
  DAT_00003f90 = 0;
  _DAT_000040ee = 0;
  FUN_0002b40a();
  FUN_0002349a();
  bVar1 = DAT_0000aef9 & 8;
  DAT_0000aef9 = DAT_0000aef9 & 0xf7;
  if (bVar1 != 0) {
    FUN_000100fe();
  }
  FUN_00046f54();
  DAT_000014b6 = 0;
  DAT_000014c6 = 0;
  FUN_00047d28();
  return;
}



// Function: FUN_000233ec @ 000233ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000233ec(void)

{
  longdouble lVar1;
  
  if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3) {
    lVar1 = (((longdouble)_DAT_000040b2 + (longdouble)_DAT_00009f7c) / (longdouble)2 -
            (longdouble)_DAT_0000ac8a) * (longdouble)2;
  }
  else {
    lVar1 = (longdouble)_DAT_000040b2 - (longdouble)_DAT_0000ac8a;
  }
  _DAT_00003f0c = (undefined1  [12])lVar1;
  _DAT_00003f30 = (undefined1  [12])((longdouble)_DAT_000040be - (longdouble)_DAT_0000ac96);
  return;
}



// Function: FUN_00023442 @ 00023442

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00023442(void)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)_DAT_000040ca;
  if (((ushort)((uint)_DAT_0000af58 >> 0x1c) != 0) || (DAT_00002988 != 0)) {
    lVar1 = (lVar1 - (longdouble)_DAT_0000aca2) + (longdouble)_DAT_00009f70;
  }
  _DAT_00003f54 = (undefined1  [12])lVar1;
  return;
}



// Function: FUN_00023478 @ 00023478

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00023478(void)

{
  byte bVar1;
  longdouble lVar2;
  short sVar4;
  int iVar3;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  sVar4 = 0xc9;
  puVar5 = &DAT_00003820;
  do {
    *puVar5 = 0;
    sVar4 = sVar4 + -1;
    puVar5 = puVar5 + 1;
  } while (sVar4 != -1);
  FUN_0002b40a();
  sVar4 = 0x1d;
  puVar5 = &DAT_00003c74;
  do {
    *puVar5 = 0;
    bVar1 = DAT_000032ec._1_1_;
    sVar4 = sVar4 + -1;
    puVar5 = puVar5 + 1;
  } while (sVar4 != -1);
  DAT_000032e1 = DAT_000032e1 & 0xfd;
  DAT_00004088 = DAT_00004088 & 0x7f;
  DAT_000032ec._1_1_ = DAT_000032ec._1_1_ & 199;
  if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3) {
    DAT_000032ec._0_1_ = DAT_000032ec._0_1_ & 0x72 | 2;
    DAT_000032ec._1_1_ = DAT_000032ec._1_1_ | 2;
  }
  else {
    DAT_000032ec._0_1_ = DAT_000032ec._0_1_ & 0x71;
    DAT_000032ec._0_1_ = DAT_000032ec._0_1_ | 1;
    DAT_000032ec._1_1_ = bVar1 & 0xc5;
  }
  DAT_000032ec._0_1_ = DAT_000032ec._0_1_ & 0xef;
  DAT_000032e0 = DAT_000032e0 & 0xa0;
  DAT_000032e0 = DAT_000032e0 | 0x80;
  DAT_000032e9 = DAT_000032e9 & 0xdf;
  if ((DAT_0000aefb & 0x20) == 0) {
    bVar1 = DAT_0000c51a & 1;
    DAT_0000c51a = DAT_0000c51a & 0xfe;
    if (bVar1 == 0) {
      DAT_0000aeb2 = DAT_00009fc8;
    }
    else {
      DAT_0000aeb2 = &DAT_0000778c;
      _DAT_0000c502 = &DAT_0000778c;
    }
  }
  else if ((DAT_0000c5c6 & 0x40) != 0) {
    bVar1 = DAT_0000c51a & 1;
    DAT_0000c51a = DAT_0000c51a & 0xfe;
    if (bVar1 == 0) {
      DAT_0000aeb2 = DAT_00009fc8;
    }
    else {
      DAT_0000aeb2 = &DAT_0000778c;
      _DAT_0000c502 = &DAT_0000778c;
    }
  }
  FUN_000239a4();
  DAT_000032f0 = 0;
  DAT_000032f1 = 0;
  _DAT_00003f00 = (undefined1  [12])(longdouble)0;
  _DAT_000040a6 = (undefined1  [12])(longdouble)0;
  DAT_000032ec._0_1_ = DAT_000032ec._0_1_ & 0xbf;
  DAT_000032e2 = DAT_000032e2 & 0xe7;
  DAT_000032e1 = DAT_000032e1 & 0xf7;
  DAT_0000aef8 = DAT_0000aef8 & 0xbf;
  DAT_000032ec._1_1_ = DAT_000032ec._1_1_ & 0xfa;
  DAT_000032e6 = DAT_000032e6 & 0x94;
  DAT_000032e9 = DAT_000032e9 & 0xfd;
  DAT_00003c60 = 0xffffffff;
  DAT_00003c64 = 0xffffffff;
  _DAT_00005a80 = (undefined1  [12])(longdouble)(undefined1  [12])0x51b71758e219652c;
  lVar2 = (longdouble)0;
  _DAT_00003e18 = (undefined1  [12])lVar2;
  _DAT_00003e24 = (undefined1  [12])lVar2;
  _DAT_00003e30 = (undefined1  [12])lVar2;
  puVar6 = &DAT_000046e0;
  do {
    puVar7 = puVar6 + 1;
    *puVar6 = 0;
    puVar6 = puVar7;
  } while (puVar7 < (undefined4 *)0x4ba1);
  if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3) {
    if (DAT_00007780 != 5) {
      _DAT_01200554 = DAT_0000c50e;
    }
    _DAT_00004096 = _DAT_01200558;
    if (_DAT_01200558 != 0) {
      iVar3 = (uint)(ushort)((short)_DAT_01200558 - 1) * 0xc;
      _DAT_00009f70 = (undefined1  [12])(longdouble)*(undefined1 (*) [12])(&DAT_0000a666 + iVar3);
      lVar2 = (longdouble)*(undefined1 (*) [12])(&DAT_0000a786 + (short)iVar3);
      _DAT_0000409a = (undefined1  [12])lVar2;
      _DAT_00009f7c = (undefined1  [12])lVar2;
      _DAT_00003d88 = (undefined1  [12])(lVar2 / (longdouble)2);
    }
  }
  else {
    if (DAT_0000af04 == '\0') {
      if (DAT_00007780 != 5) {
        _DAT_01200554 = DAT_0000c50e;
      }
      if (((int)_DAT_01200554 < 1) || (0x18 < _DAT_01200554)) {
        _DAT_01200554 = 1;
      }
      _DAT_00004096 = _DAT_01200554;
      if ('\0' < DAT_0000c5cc) {
        _DAT_00004096 = DAT_000042b0;
      }
    }
    else {
      _DAT_00004096 = FUN_0002e3a6();
    }
    if (((int)_DAT_00004096 < 1) || (0x18 < _DAT_00004096)) {
      _DAT_00004096 = 0;
    }
    if (DAT_00007780 != 5) {
      DAT_0000c50e = _DAT_00004096;
    }
    _DAT_01200554 = _DAT_00004096;
    if (_DAT_00004096 != 0) {
      iVar3 = (uint)(ushort)((short)_DAT_00004096 - 1) * 0xc;
      _DAT_00009f70 = (undefined1  [12])(longdouble)*(undefined1 (*) [12])(&DAT_0000a666 + iVar3);
      lVar2 = (longdouble)*(undefined1 (*) [12])(&DAT_0000a786 + (short)iVar3);
      _DAT_0000409a = (undefined1  [12])lVar2;
      _DAT_00009f7c = (undefined1  [12])lVar2;
      _DAT_00003d88 = (undefined1  [12])(lVar2 / (longdouble)2);
    }
  }
  bVar1 = DAT_000032e9 & 4;
  DAT_000032e9 = DAT_000032e9 & 0xfb;
  DAT_00003efc = _DAT_01200554;
  _DAT_00004092 = _DAT_01200554;
  if (bVar1 == 0) {
    FUN_000237f6();
  }
  FUN_000233ec();
  FUN_00023442();
  DAT_00003fcc = 1;
  if ((DAT_0000aef9 & 4) != 0) {
    DAT_000032e1 = DAT_000032e1 | 8;
  }
  return;
}



// Function: FUN_0002349a @ 0002349a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002349a(void)

{
  byte bVar1;
  longdouble lVar2;
  short sVar4;
  int iVar3;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  sVar4 = 0x1d;
  puVar5 = &DAT_00003c74;
  do {
    *puVar5 = 0;
    bVar1 = DAT_000032ec._1_1_;
    sVar4 = sVar4 + -1;
    puVar5 = puVar5 + 1;
  } while (sVar4 != -1);
  DAT_000032e1 = DAT_000032e1 & 0xfd;
  DAT_00004088 = DAT_00004088 & 0x7f;
  DAT_000032ec._1_1_ = DAT_000032ec._1_1_ & 199;
  if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3) {
    DAT_000032ec._0_1_ = DAT_000032ec._0_1_ & 0x72 | 2;
    DAT_000032ec._1_1_ = DAT_000032ec._1_1_ | 2;
  }
  else {
    DAT_000032ec._0_1_ = DAT_000032ec._0_1_ & 0x71;
    DAT_000032ec._0_1_ = DAT_000032ec._0_1_ | 1;
    DAT_000032ec._1_1_ = bVar1 & 0xc5;
  }
  DAT_000032ec._0_1_ = DAT_000032ec._0_1_ & 0xef;
  DAT_000032e0 = DAT_000032e0 & 0xa0;
  DAT_000032e0 = DAT_000032e0 | 0x80;
  DAT_000032e9 = DAT_000032e9 & 0xdf;
  if ((DAT_0000aefb & 0x20) == 0) {
    bVar1 = DAT_0000c51a & 1;
    DAT_0000c51a = DAT_0000c51a & 0xfe;
    if (bVar1 == 0) {
      DAT_0000aeb2 = DAT_00009fc8;
    }
    else {
      DAT_0000aeb2 = &DAT_0000778c;
      _DAT_0000c502 = &DAT_0000778c;
    }
  }
  else if ((DAT_0000c5c6 & 0x40) != 0) {
    bVar1 = DAT_0000c51a & 1;
    DAT_0000c51a = DAT_0000c51a & 0xfe;
    if (bVar1 == 0) {
      DAT_0000aeb2 = DAT_00009fc8;
    }
    else {
      DAT_0000aeb2 = &DAT_0000778c;
      _DAT_0000c502 = &DAT_0000778c;
    }
  }
  FUN_000239a4();
  DAT_000032f0 = 0;
  DAT_000032f1 = 0;
  _DAT_00003f00 = (undefined1  [12])(longdouble)0;
  _DAT_000040a6 = (undefined1  [12])(longdouble)0;
  DAT_000032ec._0_1_ = DAT_000032ec._0_1_ & 0xbf;
  DAT_000032e2 = DAT_000032e2 & 0xe7;
  DAT_000032e1 = DAT_000032e1 & 0xf7;
  DAT_0000aef8 = DAT_0000aef8 & 0xbf;
  DAT_000032ec._1_1_ = DAT_000032ec._1_1_ & 0xfa;
  DAT_000032e6 = DAT_000032e6 & 0x94;
  DAT_000032e9 = DAT_000032e9 & 0xfd;
  DAT_00003c60 = 0xffffffff;
  DAT_00003c64 = 0xffffffff;
  _DAT_00005a80 = (undefined1  [12])(longdouble)(undefined1  [12])0x51b71758e219652c;
  lVar2 = (longdouble)0;
  _DAT_00003e18 = (undefined1  [12])lVar2;
  _DAT_00003e24 = (undefined1  [12])lVar2;
  _DAT_00003e30 = (undefined1  [12])lVar2;
  puVar6 = &DAT_000046e0;
  do {
    puVar7 = puVar6 + 1;
    *puVar6 = 0;
    puVar6 = puVar7;
  } while (puVar7 < (undefined4 *)0x4ba1);
  if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3) {
    if (DAT_00007780 != 5) {
      _DAT_01200554 = DAT_0000c50e;
    }
    _DAT_00004096 = _DAT_01200558;
    if (_DAT_01200558 != 0) {
      iVar3 = (uint)(ushort)((short)_DAT_01200558 - 1) * 0xc;
      _DAT_00009f70 = (undefined1  [12])(longdouble)*(undefined1 (*) [12])(&DAT_0000a666 + iVar3);
      lVar2 = (longdouble)*(undefined1 (*) [12])(&DAT_0000a786 + (short)iVar3);
      _DAT_0000409a = (undefined1  [12])lVar2;
      _DAT_00009f7c = (undefined1  [12])lVar2;
      _DAT_00003d88 = (undefined1  [12])(lVar2 / (longdouble)2);
    }
  }
  else {
    if (DAT_0000af04 == '\0') {
      if (DAT_00007780 != 5) {
        _DAT_01200554 = DAT_0000c50e;
      }
      if (((int)_DAT_01200554 < 1) || (0x18 < _DAT_01200554)) {
        _DAT_01200554 = 1;
      }
      _DAT_00004096 = _DAT_01200554;
      if ('\0' < DAT_0000c5cc) {
        _DAT_00004096 = DAT_000042b0;
      }
    }
    else {
      _DAT_00004096 = FUN_0002e3a6();
    }
    if (((int)_DAT_00004096 < 1) || (0x18 < _DAT_00004096)) {
      _DAT_00004096 = 0;
    }
    if (DAT_00007780 != 5) {
      DAT_0000c50e = _DAT_00004096;
    }
    _DAT_01200554 = _DAT_00004096;
    if (_DAT_00004096 != 0) {
      iVar3 = (uint)(ushort)((short)_DAT_00004096 - 1) * 0xc;
      _DAT_00009f70 = (undefined1  [12])(longdouble)*(undefined1 (*) [12])(&DAT_0000a666 + iVar3);
      lVar2 = (longdouble)*(undefined1 (*) [12])(&DAT_0000a786 + (short)iVar3);
      _DAT_0000409a = (undefined1  [12])lVar2;
      _DAT_00009f7c = (undefined1  [12])lVar2;
      _DAT_00003d88 = (undefined1  [12])(lVar2 / (longdouble)2);
    }
  }
  bVar1 = DAT_000032e9 & 4;
  DAT_000032e9 = DAT_000032e9 & 0xfb;
  DAT_00003efc = _DAT_01200554;
  _DAT_00004092 = _DAT_01200554;
  if (bVar1 == 0) {
    FUN_000237f6();
  }
  FUN_000233ec();
  FUN_00023442();
  DAT_00003fcc = 1;
  if ((DAT_0000aef9 & 4) != 0) {
    DAT_000032e1 = DAT_000032e1 | 8;
  }
  return;
}



// Function: FUN_000237f6 @ 000237f6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000237f6(void)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  longdouble lVar6;
  
  _DAT_0000ac8a = DAT_0000acc6;
  _DAT_0000ac8e = DAT_0000acca;
  _DAT_0000ac92 = DAT_0000acce;
  _DAT_0000ac96 = DAT_0000acd2;
  _DAT_0000ac9a = DAT_0000acd6;
  _DAT_0000ac9e = DAT_0000acda;
  DAT_0000aca2 = DAT_0000acde;
  _DAT_0000aca6 = DAT_0000ace2;
  _DAT_0000acaa = DAT_0000ace6;
  DAT_0000acae = DAT_0000acea;
  _DAT_0000acb2 = DAT_0000acee;
  _DAT_0000acb6 = DAT_0000acf2;
  DAT_0000acba = DAT_0000acf6;
  _DAT_0000acbe = DAT_0000acfa;
  _DAT_0000acc2 = DAT_0000acfe;
  _DAT_000041d6 = 0x36;
  _DAT_01200736 = 1;
  lVar6 = (longdouble)0;
  _DAT_00003e54 = (undefined1  [12])lVar6;
  _DAT_00003e60 = (undefined1  [12])lVar6;
  _DAT_00003e6c = (undefined1  [12])lVar6;
  _DAT_00003e78 = (undefined1  [12])lVar6;
  _DAT_00003e84 = (undefined1  [12])lVar6;
  auVar1._0_4_ = DAT_0000acc6;
  auVar1._4_4_ = DAT_0000acca;
  auVar1._8_4_ = DAT_0000acce;
  lVar6 = (longdouble)auVar1 - (longdouble)_DAT_00003e18;
  if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3) {
    lVar6 = lVar6 - (longdouble)_DAT_00009f7c / (longdouble)2;
  }
  _DAT_0000ac4e = (undefined1  [12])lVar6;
  _DAT_0000412e = (undefined1  [12])lVar6;
  _DAT_00009f88 = (undefined1  [12])lVar6;
  auVar2._0_4_ = DAT_0000acd2;
  auVar2._4_4_ = DAT_0000acd6;
  auVar2._8_4_ = DAT_0000acda;
  lVar6 = (longdouble)auVar2 - (longdouble)_DAT_00003e24;
  _DAT_0000ac5a = (undefined1  [12])lVar6;
  _DAT_0000413a = (undefined1  [12])lVar6;
  _DAT_00009f94 = (undefined1  [12])lVar6;
  auVar3._0_4_ = DAT_0000acde;
  auVar3._4_4_ = DAT_0000ace2;
  auVar3._8_4_ = DAT_0000ace6;
  lVar6 = ((longdouble)auVar3 - (longdouble)_DAT_00003e30) - (longdouble)_DAT_00009f70;
  _DAT_0000ac66 = (undefined1  [12])lVar6;
  _DAT_00004146 = (undefined1  [12])lVar6;
  _DAT_00009fa0 = (undefined1  [12])lVar6;
  auVar4._0_4_ = DAT_0000acea;
  auVar4._4_4_ = DAT_0000acee;
  auVar4._8_4_ = DAT_0000acf2;
  lVar6 = (longdouble)auVar4 - (longdouble)_DAT_00003e3c;
  _DAT_0000ac72 = (undefined1  [12])lVar6;
  _DAT_00004152 = (undefined1  [12])lVar6;
  _DAT_00009fac = (undefined1  [12])lVar6;
  auVar5._0_4_ = DAT_0000acf6;
  auVar5._4_4_ = DAT_0000acfa;
  auVar5._8_4_ = DAT_0000acfe;
  lVar6 = (longdouble)auVar5 - (longdouble)_DAT_00003e48;
  _DAT_0000ac7e = (undefined1  [12])lVar6;
  _DAT_0000415e = (undefined1  [12])lVar6;
  _DAT_00009fb8 = (undefined1  [12])lVar6;
  FUN_000233ec();
  FUN_00023442();
  return;
}



// Function: FUN_0002389a @ 0002389a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002389a(void)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)0;
  _DAT_00003e54 = (undefined1  [12])lVar1;
  _DAT_00003e60 = (undefined1  [12])lVar1;
  _DAT_00003e6c = (undefined1  [12])lVar1;
  _DAT_00003e78 = (undefined1  [12])lVar1;
  _DAT_00003e84 = (undefined1  [12])lVar1;
  lVar1 = (longdouble)_DAT_0000ac8a - (longdouble)_DAT_00003e18;
  if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3) {
    lVar1 = lVar1 - (longdouble)_DAT_00009f7c / (longdouble)2;
  }
  _DAT_0000ac4e = (undefined1  [12])lVar1;
  _DAT_0000412e = (undefined1  [12])lVar1;
  _DAT_00009f88 = (undefined1  [12])lVar1;
  lVar1 = (longdouble)_DAT_0000ac96 - (longdouble)_DAT_00003e24;
  _DAT_0000ac5a = (undefined1  [12])lVar1;
  _DAT_0000413a = (undefined1  [12])lVar1;
  _DAT_00009f94 = (undefined1  [12])lVar1;
  lVar1 = ((longdouble)_DAT_0000aca2 - (longdouble)_DAT_00003e30) - (longdouble)_DAT_00009f70;
  _DAT_0000ac66 = (undefined1  [12])lVar1;
  _DAT_00004146 = (undefined1  [12])lVar1;
  _DAT_00009fa0 = (undefined1  [12])lVar1;
  lVar1 = (longdouble)_DAT_0000acae - (longdouble)_DAT_00003e3c;
  _DAT_0000ac72 = (undefined1  [12])lVar1;
  _DAT_00004152 = (undefined1  [12])lVar1;
  _DAT_00009fac = (undefined1  [12])lVar1;
  lVar1 = (longdouble)_DAT_0000acba - (longdouble)_DAT_00003e48;
  _DAT_0000ac7e = (undefined1  [12])lVar1;
  _DAT_0000415e = (undefined1  [12])lVar1;
  _DAT_00009fb8 = (undefined1  [12])lVar1;
  FUN_000233ec();
  FUN_00023442();
  return;
}



// Function: FUN_000239a4 @ 000239a4

void FUN_000239a4(void)

{
  DAT_0000c536._3_1_ = (byte)DAT_0000c536 & 0x9f;
  DAT_0000c5c0 = 0;
  DAT_00003b40 = 0;
  DAT_00003b88 = 0;
  DAT_00003368 = 0x3370;
  DAT_0000336c = 0x3370;
  DAT_00003c40 = 0;
  DAT_00003c44 = 0;
  DAT_00003c48 = 0;
  DAT_000032f6 = 0;
  DAT_000032f4 = 0;
  DAT_000032f5 = 0;
  DAT_000032e6 = DAT_000032e6 & 0xfd;
  DAT_000032fa = 0;
  FUN_0001e0e8();
  if ((DAT_0000aef9 & 4) == 0) {
    DAT_000032ec._0_1_ = DAT_000032ec._0_1_ & 0x7f;
  }
  else {
    DAT_000032ec._0_1_ = DAT_000032ec._0_1_ | 0x80;
  }
  FUN_00023a30();
  if ((DAT_0000aef8 & 0x80) == 0) {
    DAT_00004089 = DAT_00004089 & 0xfb;
  }
  else {
    DAT_00004089 = DAT_00004089 | 4;
  }
  return;
}



// Function: FUN_00023a30 @ 00023a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00023a30(void)

{
  longdouble lVar1;
  
  DAT_000032ec._0_1_ = DAT_000032ec._0_1_ & 0xdf;
  DAT_000032e2 = DAT_000032e2 & 0xfc;
  DAT_000032e3 = DAT_000032e3 & 0x10;
  DAT_000032e4 = 0;
  DAT_000032e5 = 0;
  DAT_000032e6 = DAT_000032e6 & 0xb6;
  DAT_000032e7 = 0;
  DAT_000032e8 = 0;
  DAT_000032e9 = DAT_000032e9 & 0xef;
  DAT_000032ec._1_1_ = DAT_000032ec._1_1_ & 0xfb;
  DAT_00003c54 = 0;
  DAT_00003fc0 = 0;
  DAT_00003fc4 = 0;
  DAT_00003fc8 = 0;
  DAT_0000407c = 0;
  DAT_00004080 = 0;
  DAT_00004084 = 0;
  lVar1 = (longdouble)1;
  _DAT_00003fe0 = (undefined1  [12])lVar1;
  _DAT_00003fec = (undefined1  [12])lVar1;
  _DAT_00003ff8 = (undefined1  [12])lVar1;
  return;
}



// Function: FUN_00023aa0 @ 00023aa0

void FUN_00023aa0(void)

{
  undefined1 (*pauVar1) [12];
  char cVar2;
  longdouble lVar3;
  
  cVar2 = FUN_000240b2();
  pauVar1 = DAT_00003368;
  if (cVar2 == '*') {
    if ((DAT_000032e3 & 1) == 0) {
      if (DAT_00003368 <= DAT_0000336c) {
        DAT_0000336c = *(undefined1 (**) [12])(&DAT_00003320 + (DAT_00003b40 + -1) * 4);
      }
      DAT_0000336c = DAT_0000336c + 1;
    }
    else {
      DAT_00003368 = DAT_00003368 + 1;
      FUN_00023b2c();
      lVar3 = (longdouble)FUN_00023cf8();
      *pauVar1 = (undefined1  [12])lVar3;
      DAT_000032e8 = DAT_000032e8 | 1;
    }
  }
  else {
    FUN_00023b2c();
  }
  return;
}



// Function: FUN_00023b2c @ 00023b2c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble FUN_00023b2c(void)

{
  undefined3 uVar1;
  undefined1 auVar2 [12];
  char cVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  char *pcVar8;
  char *unaff_A6;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  longdouble lVar12;
  
  _DAT_00004295 = 0;
  _DAT_00004299 = 0;
  _DAT_0000429d = 0;
  _DAT_000042a1 = 0;
  _DAT_000042a5 = 0;
  uVar1 = 0;
  sVar6 = 0;
  cVar3 = *unaff_A6;
  while ((pcVar9 = unaff_A6 + 1, cVar3 == ' ' || (cVar3 == '\t'))) {
    unaff_A6 = pcVar9;
    cVar3 = *pcVar9;
  }
  bVar11 = cVar3 == '-';
  pcVar10 = pcVar9;
  if (bVar11) {
    uVar1 = 0x800000;
    pcVar10 = unaff_A6 + 2;
    cVar3 = *pcVar9;
  }
  if (cVar3 == '+') {
    cVar3 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  }
  while (cVar3 == '0') {
    cVar3 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  }
  pcVar9 = &DAT_00004295;
  if (((cVar3 != '.') && (cVar3 != ',')) && ((cVar3 < '0' || ('9' < cVar3)))) {
    return (longdouble)0;
  }
  while (('/' < cVar3 && (cVar3 < ':'))) {
    pcVar8 = pcVar9 + 1;
    *pcVar9 = cVar3 + -0x30;
    sVar6 = sVar6 + 1;
    cVar3 = *pcVar10;
    pcVar9 = pcVar8;
    pcVar10 = pcVar10 + 1;
    if ((char *)0x42a6 < pcVar8) {
      __m68k_trap(0xe);
      return (longdouble)0;
    }
  }
  if ((cVar3 == '.') || (cVar3 == ',')) {
    cVar3 = *pcVar10;
    for (; (pcVar10 = pcVar10 + 1, cVar3 == '0' && (sVar6 < 1)); sVar6 = sVar6 + -1) {
      cVar3 = *pcVar10;
    }
    do {
      if ((cVar3 < '0') || ('9' < cVar3)) goto LAB_00023c7e;
      pcVar8 = pcVar9 + 1;
      *pcVar9 = cVar3 + -0x30;
      cVar3 = *pcVar10;
      pcVar9 = pcVar8;
      pcVar10 = pcVar10 + 1;
    } while (pcVar8 < (char *)0x42a7);
    __m68k_trap(0xe);
  }
  else if ((sVar6 == 1) || (sVar6 == 2)) {
    lVar12 = (longdouble)pcVar9[-1];
    if (sVar6 == 2) {
      lVar12 = (longdouble)pcVar9[-2] * (longdouble)(undefined1  [12])0x2000000000000000 + lVar12;
    }
    if (bVar11) {
      lVar12 = -lVar12;
    }
    return lVar12;
  }
LAB_00023c7e:
  uVar4 = CONCAT31(uVar1,DAT_00004295);
  iVar5 = (uint)(byte)(DAT_00004297 | DAT_00004296 << 4) << 4;
  iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),DAT_00004298 | (byte)iVar5) << 4;
  iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),DAT_00004299 | (byte)iVar5) << 4;
  iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),DAT_0000429a | (byte)iVar5) << 4;
  iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),DAT_0000429b | (byte)iVar5) << 4;
  iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),DAT_0000429c | (byte)iVar5) << 4;
  auVar2._4_3_ = (int3)((uint)iVar5 >> 8);
  auVar2[7] = DAT_0000429d | (byte)iVar5;
  iVar5 = (uint)(byte)(DAT_0000429f | DAT_0000429e << 4) << 4;
  iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),DAT_000042a0 | (byte)iVar5) << 4;
  iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),DAT_000042a1 | (byte)iVar5) << 4;
  iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),DAT_000042a2 | (byte)iVar5) << 4;
  iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),DAT_000042a3 | (byte)iVar5) << 4;
  iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),DAT_000042a4 | (byte)iVar5) << 4;
  auVar2._8_3_ = (int3)((uint)iVar5 >> 8);
  auVar2[0xb] = DAT_000042a5 | (byte)iVar5;
  if (sVar6 < 1) {
    uVar7 = 1 - sVar6;
    uVar4 = uVar4 | 0x40000000;
  }
  else {
    uVar7 = sVar6 - 1;
  }
  if (9 < (short)uVar7) {
    uVar7 = (byte)((char)uVar7 - 10) | 0x10;
  }
  auVar2._0_4_ = (uint)CONCAT11((char)(uVar4 >> 0x18),(char)uVar7) << 0x10 | uVar4 & 0xffff;
  return (longdouble)auVar2;
}



// Function: FUN_00023cf8 @ 00023cf8

void FUN_00023cf8(void)

{
  return;
}



// Function: FUN_00023db6 @ 00023db6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00023db6(void)

{
  longdouble lVar1;
  
  _DAT_000040e2 = (undefined1  [12])(longdouble)0;
  lVar1 = (longdouble)0 - (longdouble)_DAT_0000ac7e;
  _DAT_00003f84 = (undefined1  [12])lVar1;
  _DAT_00004040 = (undefined1  [12])lVar1;
  return;
}



// Function: FUN_00023eb2 @ 00023eb2

void FUN_00023eb2(void)

{
  if (((DAT_0000aef9 & 4) != 0) && ((DAT_00004088 & 4) == 0)) {
    return;
  }
  return;
}



// Function: FUN_00023fe0 @ 00023fe0

longdouble FUN_00023fe0(void)

{
  longdouble lVar1;
  longdouble in_FP0;
  
  if ((DAT_00004089 & 4) == 0) {
    lVar1 = (longdouble)0x26c1e0;
  }
  else {
    lVar1 = (longdouble)100000;
  }
  return in_FP0 * lVar1;
}



// Function: FUN_00023ffc @ 00023ffc

longdouble FUN_00023ffc(void)

{
  longdouble lVar1;
  longdouble in_FP0;
  
  if ((DAT_00004089 & 4) == 0) {
    lVar1 = (longdouble)0x26c1e0;
  }
  else {
    lVar1 = (longdouble)100000;
  }
  return in_FP0 / lVar1;
}



// Function: FUN_00024018 @ 00024018

/* WARNING: Control flow encountered bad instruction data */

void FUN_00024018(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00024030 @ 00024030

/* WARNING: Control flow encountered bad instruction data */

void FUN_00024030(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_00024048 @ 00024048

longdouble FUN_00024048(void)

{
  longdouble lVar1;
  longdouble in_FP0;
  
  if ((DAT_00004089 & 4) == 0) {
    lVar1 = (longdouble)169.33334;
  }
  else {
    lVar1 = (longdouble)6.6666665;
  }
  return in_FP0 * lVar1;
}



// Function: FUN_00024064 @ 00024064

longdouble FUN_00024064(void)

{
  longdouble lVar1;
  longdouble in_FP0;
  
  if ((DAT_00004089 & 4) == 0) {
    lVar1 = (longdouble)169.33334;
  }
  else {
    lVar1 = (longdouble)6.6666665;
  }
  return in_FP0 / lVar1;
}



// Function: FUN_00024080 @ 00024080

undefined8 FUN_00024080(void)

{
  undefined4 in_D0;
  short sVar1;
  undefined4 in_D1;
  bool bVar2;
  char cVar3;
  int unaff_A6;
  
  bVar2 = false;
  for (sVar1 = 0; sVar1 < 0x28; sVar1 = sVar1 + 1) {
    cVar3 = *(char *)(unaff_A6 + sVar1);
    if (cVar3 == '\0') {
      bVar2 = true;
    }
    if (bVar2) {
      cVar3 = '\0';
    }
    *(char *)((int)&DAT_0000425c + (int)sVar1) = cVar3;
  }
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_000240b2 @ 000240b2

void FUN_000240b2(void)

{
  char cVar1;
  char *unaff_A6;
  
  cVar1 = *unaff_A6;
  while ((cVar1 == ' ' || (cVar1 == '\t'))) {
    unaff_A6 = unaff_A6 + 1;
    cVar1 = *unaff_A6;
  }
  return;
}



// Function: FUN_000240c8 @ 000240c8

void FUN_000240c8(void)

{
  char cVar1;
  char *unaff_A6;
  
  cVar1 = *unaff_A6;
  while (cVar1 == '*') {
    unaff_A6 = unaff_A6 + 1;
    cVar1 = *unaff_A6;
  }
  return;
}



// Function: FUN_000240d8 @ 000240d8

undefined4 FUN_000240d8(void)

{
  undefined4 in_D0;
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)&DAT_000032e0; puVar1 < (undefined4 *)0x4670; puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  DAT_00003368 = 0x3370;
  DAT_00003c60 = 0xffffffff;
  DAT_00003c64 = 0xffffffff;
  DAT_0000aeb2 = &DAT_0004e000;
  DAT_0004e000 = 0;
  DAT_0004e001 = 0x80;
  DAT_000032ec._0_1_ = DAT_000032ec._0_1_ | 1;
  FUN_00023384();
  return in_D0;
}



// Function: FUN_0002412e @ 0002412e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0002412e(void)

{
  byte bVar1;
  undefined4 in_D0;
  short sVar2;
  undefined4 in_D1;
  undefined4 unaff_D2;
  undefined4 unaff_D3;
  undefined4 unaff_D4;
  undefined4 unaff_D5;
  undefined4 unaff_D6;
  undefined4 unaff_D7;
  undefined4 in_A0;
  undefined4 *puVar3;
  undefined4 in_A1;
  undefined4 *puVar4;
  undefined4 unaff_A2;
  undefined4 unaff_A3;
  undefined4 unaff_A4;
  undefined4 unaff_A5;
  undefined4 unaff_A6;
  longdouble lVar5;
  
  bVar1 = DAT_00004974 & 1;
  DAT_00004974 = DAT_00004974 & 0xfe;
  DAT_00004a9c = in_D0;
  DAT_00004aa0 = in_D1;
  DAT_00004aa4 = unaff_D2;
  DAT_00004aa8 = unaff_D3;
  DAT_00004aac = unaff_D4;
  DAT_00004ab0 = unaff_D5;
  DAT_00004ab4 = unaff_D6;
  DAT_00004ab8 = unaff_D7;
  DAT_00004abc = in_A0;
  DAT_00004ac0 = in_A1;
  DAT_00004ac4 = unaff_A2;
  DAT_00004ac8 = unaff_A3;
  DAT_00004acc = unaff_A4;
  DAT_00004ad0 = unaff_A5;
  DAT_00004ad4 = unaff_A6;
  DAT_00004ad8 = (undefined1 *)register0x0000003c;
  if (bVar1 == 0) {
    sVar2 = (short)DAT_00004ae8 + 1;
    DAT_00004ae8 = CONCAT22((short)((uint)DAT_00004ae8 >> 0x10),sVar2);
    if (DAT_00004ae8 == 2) {
      sVar2 = 0x20;
      puVar3 = &DAT_000046e0;
      puVar4 = &DAT_00004984;
      do {
        *puVar4 = *puVar3;
        sVar2 = sVar2 + -1;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (sVar2 != -1);
      sVar2 = 0x20;
      puVar3 = &DAT_000046e0;
      puVar4 = &DAT_000047e8;
      do {
        *puVar4 = *puVar3;
        sVar2 = sVar2 + -1;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (sVar2 != -1);
    }
    else {
      if (sVar2 != 3) {
        sVar2 = 0x20;
        puVar3 = &DAT_00004984;
        puVar4 = &DAT_00004764;
        do {
          *puVar4 = *puVar3;
          sVar2 = sVar2 + -1;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (sVar2 != -1);
        sVar2 = 0x20;
        puVar3 = &DAT_000048f0;
        puVar4 = &DAT_000047e8;
        do {
          *puVar4 = *puVar3;
          sVar2 = sVar2 + -1;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (sVar2 != -1);
        sVar2 = 0x20;
        puVar3 = &DAT_00004a08;
        puVar4 = &DAT_00004984;
        do {
          *puVar4 = *puVar3;
          sVar2 = sVar2 + -1;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (sVar2 != -1);
        sVar2 = 0x20;
        puVar3 = &DAT_00004a08;
        puVar4 = &DAT_000047e8;
        do {
          *puVar4 = *puVar3;
          sVar2 = sVar2 + -1;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (sVar2 != -1);
      }
      sVar2 = 0x20;
      puVar3 = &DAT_000046e0;
      puVar4 = &DAT_00004a08;
      do {
        *puVar4 = *puVar3;
        sVar2 = sVar2 + -1;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (sVar2 != -1);
      sVar2 = 0x20;
      puVar3 = &DAT_000046e0;
      puVar4 = &DAT_000048f0;
      do {
        *puVar4 = *puVar3;
        sVar2 = sVar2 + -1;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (sVar2 != -1);
      FUN_0002424c();
    }
  }
  else {
    DAT_00004ae8 = 1;
    _DAT_00004adc = (undefined1  [12])(longdouble)0x4f6;
    DAT_00004a8c = DAT_00004974;
    lVar5 = (longdouble)_DAT_00004978;
    if (lVar5 != FLOAT_UNKNOWN && lVar5 < FLOAT_UNKNOWN) {
      DAT_00004a8c = DAT_00004974 ^ 2;
      lVar5 = ABS(lVar5);
    }
    _DAT_00004a90 = (undefined1  [12])lVar5;
    sVar2 = 0x20;
    puVar3 = &DAT_000046e0;
    puVar4 = &DAT_00004764;
    do {
      *puVar4 = *puVar3;
      sVar2 = sVar2 + -1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (sVar2 != -1);
  }
  return CONCAT44(DAT_00004a9c,DAT_00004aa0);
}



// Function: FUN_0002424c @ 0002424c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002424c(void)

{
  unkbyte10 Var1;
  unkbyte10 Var2;
  unkbyte10 Var3;
  byte bVar4;
  undefined1 (*extraout_A1) [12];
  undefined1 (*extraout_A1_00) [12];
  byte bVar5;
  unkbyte10 Var6;
  
  Var3 = _DAT_00004804;
  Var2 = _DAT_000047f8;
  Var1 = _DAT_00004780;
  DAT_0000486d = 5;
  lRam000048ac = (longdouble)_DAT_00004a90;
  _DAT_00004894 = _DAT_00004994;
  _DAT_000048a0 = Ram000049a0;
  _DAT_000048b8 = (undefined1  [12])(longdouble)_DAT_00004834;
  bVar5 = (byte)(((uint)(_DAT_000048b8 < (undefined1  [12])0x0) << 0x1b) >> 0x18) |
          (byte)(((uint)(_DAT_000048b8 == (undefined1  [12])0x0) << 0x1a) >> 0x18);
  if ((DAT_000047e8._1_1_ & 4) == 0) {
    FUN_00024442();
    _DAT_00004780 = Var1;
    _DAT_000047f8 = Var2;
    _DAT_00004804 = Var3;
  }
  else {
    FUN_000245e2();
  }
  Var3 = _DAT_0000490c;
  Var2 = _DAT_00004900;
  Var1 = _DAT_000048a0;
  if ((DAT_000048f0._1_1_ & 4) == 0) {
    Var6 = _DAT_00004894;
    FUN_00024442();
    _DAT_00004888 = Var1;
    _DAT_0000487c = Var6;
    _DAT_00004900 = Var2;
    _DAT_0000490c = Var3;
  }
  else {
    FUN_000246e6();
  }
  FUN_000247ea();
  if ((DAT_000047e8._1_1_ & 4) == 0) {
    if ((DAT_000048f0._1_1_ & 4) == 0) {
      if ((DAT_000047e8._1_1_ & 0x40) != 0) {
        FUN_0002489a();
        DAT_0000486d = DAT_0000486d & 0xdf;
        DAT_0000486d = DAT_0000486d | 1;
      }
      if ((DAT_0000486d & 0x20) != 0) {
        FUN_0002489a();
      }
    }
    else {
      if ((DAT_000047e8._1_1_ & 0x40) != 0) {
        FUN_00024928();
        DAT_0000486d = DAT_0000486d & 0xdf;
        DAT_0000486d = DAT_0000486d | 1;
      }
      if ((DAT_0000486d & 0x20) != 0) {
        FUN_00024928();
      }
      if ((DAT_0000486d & 1) != 0) {
        DAT_0000486d = DAT_0000486d | 0x80;
      }
      if ((DAT_000048f0._1_1_ & 0x10) != 0) {
        FUN_00024e86();
        _DAT_000048f4 = (undefined1  [12])(longdouble)*extraout_A1;
        _DAT_00004a0c = (undefined1  [12])(longdouble)*extraout_A1;
        bVar5 = (byte)(((uint)(_DAT_00004a0c < (undefined1  [12])0x0) << 0x1b) >> 0x18) |
                (byte)(((uint)(_DAT_00004a0c == (undefined1  [12])0x0) << 0x1a) >> 0x18);
      }
    }
  }
  else if ((DAT_000048f0._1_1_ & 4) == 0) {
    if ((DAT_000047e8._1_1_ & 0x40) != 0) {
      FUN_00024a5a();
      DAT_0000486d = DAT_0000486d & 0xdf;
      DAT_0000486d = DAT_0000486d | 1;
    }
    if ((DAT_0000486d & 0x20) != 0) {
      FUN_00024a5a();
    }
    if ((DAT_0000486d & 1) != 0) {
      DAT_0000486d = DAT_0000486d | 0x80;
    }
  }
  else {
    if ((DAT_0000486d & 0x20) != 0) {
      FUN_00024b84();
    }
    if ((DAT_0000486d & 1) != 0) {
      DAT_0000486d = DAT_0000486d | 0x80;
    }
    if ((DAT_000048f0._1_1_ & 0x10) != 0) {
      FUN_00024e86();
      _DAT_000048f4 = (undefined1  [12])(longdouble)*extraout_A1_00;
      _DAT_00004a0c = (undefined1  [12])(longdouble)*extraout_A1_00;
      bVar5 = (byte)(((uint)(_DAT_00004a0c < (undefined1  [12])0x0) << 0x1b) >> 0x18) |
              (byte)(((uint)(_DAT_00004a0c == (undefined1  [12])0x0) << 0x1a) >> 0x18);
    }
  }
  if ((DAT_0000486d & 0x20) != 0) {
    DAT_0000486d = DAT_0000486d | 1;
  }
  bVar4 = DAT_0000486d;
  DAT_0000486d = DAT_0000486d & 0xdf;
  if (((bVar4 & 1) == 0) &&
     (FUN_00024e0a(), !(bool)(bVar5 & 1) && ((bool)(bVar5 >> 3 & 1) || (bool)(bVar5 >> 2 & 1)))) {
    DAT_0000486d = DAT_0000486d & 0xfe;
    DAT_0000486d = DAT_0000486d | 0x80;
  }
  return;
}



// Function: FUN_00024442 @ 00024442

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00024442(void)

{
  short in_D0w;
  longdouble in_FP1;
  longdouble unaff_FP2;
  longdouble unaff_FP3;
  longdouble unaff_FP4;
  longdouble lVar1;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;
  
  if ((DAT_000047e8._1_1_ & 4) == 0) {
    _DAT_00004b40 = (undefined1  [12])(longdouble)_DAT_00004b70;
    _DAT_00004b4c = (undefined1  [12])(longdouble)_DAT_00004b7c;
    _DAT_00004b58 = (undefined1  [12])(longdouble)_DAT_00004b88;
    _DAT_00004b64 = (undefined1  [12])(longdouble)_DAT_00004b94;
  }
  lVar1 = unaff_FP2 - unaff_FP4;
  _DAT_00004b70 = (undefined1  [12])lVar1;
  lVar2 = unaff_FP3 - in_FP1;
  _DAT_00004b7c = (undefined1  [12])lVar2;
  lVar3 = lVar2 * lVar2 + lVar1 * lVar1;
  _DAT_00004b94 = (undefined1  [12])lVar3;
  lVar4 = SQRT(lVar3) * (longdouble)_DAT_00004a90;
  if ((DAT_00004a8c & 2) != 0) {
    lVar4 = -lVar4;
  }
  lVar4 = lVar4 + (in_FP1 * unaff_FP4 - unaff_FP2 * unaff_FP3);
  _DAT_00004b88 = (undefined1  [12])lVar4;
  if (in_D0w != 2) {
    _DAT_00004b40 = (undefined1  [12])lVar1;
    _DAT_00004b4c = (undefined1  [12])lVar2;
    _DAT_00004b58 = (undefined1  [12])lVar4;
    _DAT_00004b64 = (undefined1  [12])lVar3;
  }
  return;
}



// Function: FUN_000245e2 @ 000245e2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000245e2(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  longdouble lVar1;
  
  _DAT_00004aec = (undefined1  [12])(longdouble)_DAT_00004828;
  lVar1 = (longdouble)_DAT_00004a90 / (longdouble)_DAT_00004828;
  if ((DAT_00004a8c & 2) == 0) {
    if ((DAT_000047e8._1_1_ & 8) != 0) {
LAB_00024618:
      lVar1 = -lVar1;
      _DAT_00004828 = (undefined1  [12])((longdouble)_DAT_00004828 - (longdouble)_DAT_00004a90);
      if (_DAT_00004828 == (undefined1  [12])0x0 || (undefined1  [12])0x0 <= _DAT_00004828)
      goto LAB_00024666;
      __m68k_trap(0xe);
      goto LAB_00024240;
    }
  }
  else if ((DAT_000047e8._1_1_ & 8) == 0) goto LAB_00024618;
  _DAT_00004828 = (undefined1  [12])((longdouble)_DAT_00004828 + (longdouble)_DAT_00004a90);
  if (_DAT_00004828 == (undefined1  [12])0x0 || (undefined1  [12])0x0 <= _DAT_00004828) {
LAB_00024666:
    _DAT_00004774 =
         (undefined1  [12])
         (((longdouble)_DAT_00004774 - (longdouble)_DAT_00004810) * lVar1 +
         (longdouble)_DAT_00004774);
    _DAT_00004780 =
         (undefined1  [12])
         (((longdouble)_DAT_00004780 - (longdouble)_DAT_0000481c) * lVar1 +
         (longdouble)_DAT_00004780);
    _DAT_000047f8 =
         (undefined1  [12])
         (((longdouble)_DAT_000047f8 - (longdouble)_DAT_00004810) * lVar1 +
         (longdouble)_DAT_000047f8);
    _DAT_00004804 =
         (undefined1  [12])
         (((longdouble)_DAT_00004804 - (longdouble)_DAT_0000481c) * lVar1 +
         (longdouble)_DAT_00004804);
    return CONCAT44(in_D0,in_D1);
  }
  __m68k_trap(0xe);
LAB_00024240:
  return CONCAT44(DAT_00004a9c,DAT_00004aa0);
}



// Function: FUN_000246e6 @ 000246e6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000246e6(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  longdouble lVar1;
  
  _DAT_00004af8 = (undefined1  [12])(longdouble)_DAT_00004930;
  lVar1 = (longdouble)_DAT_00004a90 / (longdouble)_DAT_00004930;
  if ((DAT_00004a8c & 2) == 0) {
    if ((DAT_000048f0._1_1_ & 8) != 0) {
LAB_0002471c:
      lVar1 = -lVar1;
      _DAT_00004930 = (undefined1  [12])((longdouble)_DAT_00004930 - (longdouble)_DAT_00004a90);
      if (_DAT_00004930 == (undefined1  [12])0x0 || (undefined1  [12])0x0 <= _DAT_00004930)
      goto LAB_0002476a;
      __m68k_trap(0xe);
      goto LAB_00024240;
    }
  }
  else if ((DAT_000048f0._1_1_ & 8) == 0) goto LAB_0002471c;
  _DAT_00004930 = (undefined1  [12])((longdouble)_DAT_00004930 + (longdouble)_DAT_00004a90);
  if (_DAT_00004930 == (undefined1  [12])0x0 || (undefined1  [12])0x0 <= _DAT_00004930) {
LAB_0002476a:
    _DAT_0000487c =
         (undefined1  [12])
         (((longdouble)_DAT_00004894 - (longdouble)_DAT_00004918) * lVar1 +
         (longdouble)_DAT_00004894);
    _DAT_00004888 =
         (undefined1  [12])
         (((longdouble)_DAT_000048a0 - (longdouble)_DAT_00004924) * lVar1 +
         (longdouble)_DAT_000048a0);
    _DAT_00004900 =
         (undefined1  [12])
         (((longdouble)_DAT_00004900 - (longdouble)_DAT_00004918) * lVar1 +
         (longdouble)_DAT_00004900);
    _DAT_0000490c =
         (undefined1  [12])
         (((longdouble)_DAT_0000490c - (longdouble)_DAT_00004924) * lVar1 +
         (longdouble)_DAT_0000490c);
    return CONCAT44(in_D0,in_D1);
  }
  __m68k_trap(0xe);
LAB_00024240:
  return CONCAT44(DAT_00004a9c,DAT_00004aa0);
}



// Function: FUN_000247ea @ 000247ea

void FUN_000247ea(void)

{
  byte bVar1;
  undefined4 in_FPSR;
  longdouble in_FP1;
  longdouble unaff_FP2;
  longdouble unaff_FP3;
  longdouble unaff_FP4;
  longdouble lVar2;
  longdouble unaff_FP5;
  longdouble unaff_FP6;
  
  bVar1 = (byte)((uint)in_FPSR >> 0x18);
  FUN_00024e0a();
  if ((!(bool)(bVar1 & 1) && !(bool)(bVar1 >> 2 & 1)) && !(bool)(bVar1 >> 3 & 1)) {
    lVar2 = (unaff_FP4 - unaff_FP6) * (in_FP1 - unaff_FP5) -
            (unaff_FP3 - unaff_FP5) * (unaff_FP2 - unaff_FP6);
    if ((DAT_00004a8c & 2) == 0) {
      lVar2 = -lVar2;
    }
    DAT_0000486d = DAT_0000486d | 0x20;
    if (lVar2 != FLOAT_UNKNOWN && lVar2 < FLOAT_UNKNOWN) {
      FUN_00024834();
    }
  }
  return;
}



// Function: FUN_00024834 @ 00024834

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00024834(void)

{
  undefined4 in_D0;
  undefined1 (*extraout_A1) [12];
  
  DAT_0000486d = DAT_0000486d & 0xd6;
  if ((DAT_00004a8c & 2) != 0) {
    DAT_0000486d = DAT_0000486d | 8;
  }
  _DAT_00004870 = (undefined1  [12])(longdouble)_DAT_000047ec;
  if ((DAT_000047e8._1_1_ & 0x10) != 0) {
    FUN_00024e86();
    _DAT_00004870 = (undefined1  [12])(longdouble)*extraout_A1;
  }
  return in_D0;
}



// Function: FUN_0002489a @ 0002489a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unkbyte10 FUN_0002489a(void)

{
  unkbyte10 in_FP0;
  longdouble lVar1;
  
  lVar1 = (longdouble)_DAT_00004b40 * (longdouble)_DAT_00004b7c -
          (longdouble)_DAT_00004b70 * (longdouble)_DAT_00004b4c;
  if (ABS(lVar1) - (longdouble)_DAT_00004adc != FLOAT_UNKNOWN &&
      FLOAT_UNKNOWN <= ABS(lVar1) - (longdouble)_DAT_00004adc) {
    _DAT_000047f8 =
         (undefined1  [12])
         (((longdouble)_DAT_00004b4c * (longdouble)_DAT_00004b88 -
          (longdouble)_DAT_00004b7c * (longdouble)_DAT_00004b58) / lVar1);
    _DAT_00004804 =
         (undefined1  [12])
         (((longdouble)_DAT_00004b58 * (longdouble)_DAT_00004b70 -
          (longdouble)_DAT_00004b88 * (longdouble)_DAT_00004b40) / lVar1);
  }
  else {
    FUN_00024834();
  }
  return in_FP0;
}



// Function: FUN_00024928 @ 00024928

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00024928(void)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined4 in_D0;
  undefined4 in_D1;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;
  
  lVar6 = _DAT_00004b4c;
  lVar5 = _DAT_00004b40;
  lVar4 = _DAT_00004918;
  FUN_00024de4();
  if (lVar4 == FLOAT_UNKNOWN || lVar4 < FLOAT_UNKNOWN) {
    FUN_000249fc();
  }
  else {
    if (lVar4 - (longdouble)_DAT_00004930 != FLOAT_UNKNOWN &&
        FLOAT_UNKNOWN <= lVar4 - (longdouble)_DAT_00004930) {
      FUN_00024834();
      FUN_00024cec();
      goto LAB_000249f2;
    }
    FUN_000249fc();
    auVar3._0_10_ = _DAT_00004b64;
    auVar3._10_2_ = uRam00004b6e;
    lVar4 = SQRT(((longdouble)_DAT_00004930 * (longdouble)_DAT_00004930 - lVar4 * lVar4) /
                 (longdouble)auVar3);
    auVar2._0_10_ = _DAT_00004b4c;
    auVar2._10_2_ = uRam00004b56;
    auVar1._0_10_ = _DAT_00004b40;
    auVar1._10_2_ = uRam00004b4a;
    lVar5 = lVar5 - lVar4 * (longdouble)auVar2;
    lVar6 = lVar6 + lVar4 * (longdouble)auVar1;
    FUN_00024d36();
  }
  _DAT_000047f8 = (undefined1  [12])lVar5;
  _DAT_00004804 = (undefined1  [12])lVar6;
LAB_000249f2:
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_000249fc @ 000249fc

void FUN_000249fc(void)

{
  return;
}



// Function: FUN_00024a5a @ 00024a5a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00024a5a(void)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined4 in_D0;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;
  longdouble lVar7;
  
  lVar7 = _DAT_00004b7c;
  lVar6 = _DAT_00004b70;
  lVar4 = _DAT_00004810;
  FUN_00024de4();
  lVar5 = ABS(lVar4 - (longdouble)_DAT_00004828) - (longdouble)_DAT_00004adc;
  if (lVar5 == FLOAT_UNKNOWN || lVar5 < FLOAT_UNKNOWN) {
    FUN_00024b26();
  }
  else {
    if (lVar4 - (longdouble)_DAT_00004828 != FLOAT_UNKNOWN &&
        FLOAT_UNKNOWN <= lVar4 - (longdouble)_DAT_00004828) {
      FUN_00024834();
      FUN_00024cec();
      return in_D0;
    }
    FUN_00024b26();
    auVar3._0_10_ = _DAT_00004b94;
    auVar3._10_2_ = uRam00004b9e;
    lVar5 = SQRT(((longdouble)_DAT_00004828 * (longdouble)_DAT_00004828 - lVar4 * lVar4) /
                 (longdouble)auVar3);
    auVar2._0_10_ = _DAT_00004b7c;
    auVar2._10_2_ = uRam00004b86;
    auVar1._0_10_ = _DAT_00004b70;
    auVar1._10_2_ = uRam00004b7a;
    lVar6 = lVar6 - lVar5 * (longdouble)auVar2;
    lVar7 = lVar7 + lVar5 * (longdouble)auVar1;
    FUN_00024d36();
  }
  _DAT_000047f8 = (undefined1  [12])lVar6;
  _DAT_00004804 = (undefined1  [12])lVar7;
  return in_D0;
}



// Function: FUN_00024b26 @ 00024b26

void FUN_00024b26(void)

{
  return;
}



// Function: FUN_00024b84 @ 00024b84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00024b84(void)

{
  longdouble lVar1;
  undefined4 in_D0;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;
  longdouble lVar5;
  longdouble lVar6;
  
  lVar2 = (longdouble)_DAT_00004810 - (longdouble)_DAT_00004918;
  _DAT_00004b7c = (undefined1  [12])lVar2;
  lVar3 = (longdouble)_DAT_00004924 - (longdouble)_DAT_0000481c;
  _DAT_00004b70 = (undefined1  [12])lVar3;
  lVar5 = lVar3 * lVar3 + lVar2 * lVar2;
  _DAT_00004b94 = (undefined1  [12])lVar5;
  lVar4 = SQRT(lVar5);
  lVar1 = ((longdouble)_DAT_00004828 + (longdouble)_DAT_00004930 + (longdouble)_DAT_00004adc) -
          lVar4;
  if ((FLOAT_UNKNOWN <= lVar1 || lVar1 == FLOAT_UNKNOWN) &&
     (lVar1 = (ABS((longdouble)_DAT_00004828 - (longdouble)_DAT_00004930) -
              (longdouble)_DAT_00004adc) - lVar4, lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN))
  {
    lVar3 = lVar3 / lVar4;
    _DAT_00004b70 = (undefined1  [12])lVar3;
    lVar2 = lVar2 / lVar4;
    _DAT_00004b7c = (undefined1  [12])lVar2;
    lVar5 = (((longdouble)_DAT_00004828 + (longdouble)_DAT_00004930) *
             ((longdouble)_DAT_00004828 - (longdouble)_DAT_00004930) + lVar5) / (lVar4 + lVar4);
    lVar1 = (longdouble)_DAT_0000481c;
    lVar6 = SQRT(ABS(lVar5 * lVar5 - (longdouble)_DAT_00004828 * (longdouble)_DAT_00004828));
    lVar4 = ((longdouble)_DAT_00004810 - lVar2 * lVar5) - lVar6 * lVar3;
    FUN_00024d36();
    _DAT_000047f8 = (undefined1  [12])lVar4;
    _DAT_00004804 = (undefined1  [12])((lVar1 + lVar3 * lVar5) - lVar6 * lVar2);
    return in_D0;
  }
  FUN_00024834();
  FUN_00024cec();
  return in_D0;
}



// Function: FUN_00024cec @ 00024cec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00024cec(void)

{
  longdouble lVar1;
  undefined8 uVar2;
  
  lVar1 = (longdouble)_DAT_0000487c;
  uVar2 = FUN_00024e32();
  lVar1 = ABS(lVar1 - (longdouble)_DAT_00004a90) - (longdouble)_DAT_00004adc;
  if (lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1) {
    __m68k_trap(0xe);
    return CONCAT44(DAT_00004a9c,DAT_00004aa0);
  }
  return uVar2;
}



// Function: FUN_00024d36 @ 00024d36

/* WARNING: Removing unreachable block (ram,0x00024240) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00024d36(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 in_FPSR;
  
  bVar2 = (byte)((uint)in_FPSR >> 0x18);
  uVar1 = FUN_00024e0a();
  if (!(bool)(bVar2 & 1) && ((bool)(bVar2 >> 3 & 1) || (bool)(bVar2 >> 2 & 1))) {
    return uVar1;
  }
  uVar1 = FUN_00024e4c();
  return uVar1;
}



// Function: FUN_00024de4 @ 00024de4

void FUN_00024de4(void)

{
  return;
}



// Function: FUN_00024e0a @ 00024e0a

void FUN_00024e0a(void)

{
  return;
}



// Function: FUN_00024e32 @ 00024e32

void FUN_00024e32(void)

{
  return;
}



// Function: FUN_00024e4c @ 00024e4c

void FUN_00024e4c(void)

{
  return;
}



// Function: FUN_00024e86 @ 00024e86

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00024e86(void)

{
  uint in_D0;
  undefined1 (*in_A1) [12];
  longdouble in_FP1;
  longdouble lVar1;
  
  lVar1 = (longdouble)_DAT_00004a90;
  if ((DAT_00004a8c & 2) != 0) {
    lVar1 = -lVar1;
  }
  if ((in_D0 & 8) != 0) {
    lVar1 = -lVar1;
  }
  *in_A1 = (undefined1  [12])(((lVar1 + in_FP1) / in_FP1) * (longdouble)*in_A1);
  return;
}



// Function: FUN_00024ebc @ 00024ebc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00024ebc(void)

{
  undefined4 in_D0;
  char cVar2;
  undefined4 uVar1;
  undefined4 extraout_A0;
  undefined1 (*extraout_A0_00) [12];
  undefined4 unaff_A6;
  undefined4 local_38 [2];
  
  DAT_00007324 = local_38;
  DAT_00007762 = DAT_00007762 & 0xfe;
  _DAT_00007304 = unaff_A6;
  local_38[0] = in_D0;
  FUN_000260a0();
  DAT_00007308 = extraout_A0;
  cVar2 = FUN_000260c4();
  if ((cVar2 < 'A') || ('Z' < cVar2)) {
    __m68k_trap(0xe);
    uVar1 = FUN_00024fba();
    return uVar1;
  }
  if ((cVar2 < 'X') && (cVar2 != 'F')) {
    if ((cVar2 == 'C') || (cVar2 == 'A')) {
      DAT_00007762 = DAT_00007762 | 1;
    }
    else if ((cVar2 < 'I') || ('K' < cVar2)) {
      if ((cVar2 == 'R') || (cVar2 == 'D')) {
        DAT_00007762 = DAT_00007762 | 1;
      }
    }
    else {
      DAT_00007762 = DAT_00007762 | 1;
    }
  }
  else {
    DAT_00007762 = DAT_00007762 | 1;
  }
  cVar2 = FUN_000260c4();
  if (('0' < cVar2) && (cVar2 < ':')) {
    FUN_000251ca();
    DAT_0000730c = extraout_A0_00;
    cVar2 = FUN_000260c4();
    if (cVar2 != '=') {
      cVar2 = FUN_000260c4();
      if (cVar2 != '=') {
        __m68k_trap(0xe);
        uVar1 = FUN_00024fba();
        return uVar1;
      }
    }
    FUN_000260c4();
    FUN_00024fc8();
    *DAT_0000730c = (undefined1  [12])(longdouble)_DAT_000075a8;
    return local_38[0];
  }
  __m68k_trap(0xe);
  uVar1 = FUN_00024fba();
  return uVar1;
}



// Function: FUN_00024fba @ 00024fba

undefined8 FUN_00024fba(void)

{
  return *DAT_00007324;
}



// Function: FUN_00024fc8 @ 00024fc8

void FUN_00024fc8(void)

{
  char cVar1;
  int unaff_A3;
  uint unaff_A5;
  uint unaff_A6;
  
  cVar1 = FUN_0002500a();
  if (cVar1 == ' ') {
    cVar1 = FUN_000260c4();
  }
  do {
    if (unaff_A5 <= unaff_A6) {
      return;
    }
    if (cVar1 == '+') {
      *(undefined2 *)(unaff_A3 + -2) = 0;
    }
    else {
      if (cVar1 != '-') {
        __m68k_trap(0xe);
        FUN_00024fba();
        return;
      }
      *(undefined2 *)(unaff_A3 + -2) = 4;
    }
    unaff_A3 = unaff_A3 + -2;
    FUN_000260c4();
    FUN_0002500a();
    cVar1 = FUN_000253c8();
  } while( true );
}



// Function: FUN_0002500a @ 0002500a

void FUN_0002500a(void)

{
  char cVar1;
  int unaff_A3;
  uint unaff_A5;
  uint unaff_A6;
  
  cVar1 = FUN_00025042();
  if (cVar1 == ' ') {
    cVar1 = FUN_000260c4();
  }
  do {
    if (unaff_A5 <= unaff_A6) {
      return;
    }
    if (cVar1 == '*') {
      *(undefined2 *)(unaff_A3 + -2) = 8;
    }
    else {
      if (cVar1 != '/') {
        return;
      }
      *(undefined2 *)(unaff_A3 + -2) = 0xc;
    }
    unaff_A3 = unaff_A3 + -2;
    FUN_000260c4();
    FUN_00025042();
    cVar1 = FUN_000253c8();
  } while( true );
}



// Function: FUN_00025042 @ 00025042

void FUN_00025042(void)

{
  undefined2 in_D0w;
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  int *piVar5;
  undefined1 (*extraout_A0) [12];
  int unaff_A4;
  
  cVar1 = (char)in_D0w;
  if (('\"' < cVar1) && (cVar1 < ':')) {
    (*(code *)(DAT_000262a6 + (short)(char)(cVar1 + -0x23) * 4))();
    return;
  }
  if (('@' < cVar1) && (cVar1 < '[')) {
    cVar2 = FUN_00026068();
    if (('0' < cVar2) && (cVar2 < ':')) {
      if ((cVar1 < 'X') && (cVar1 != 'F')) {
        if ((cVar1 == 'C') || (cVar1 == 'R')) {
          DAT_00007762 = DAT_00007762 | 1;
        }
        else if ((cVar1 < 'I') || ('K' < cVar1)) {
          if ((cVar1 == 'A') || (cVar1 == 'D')) {
            DAT_00007762 = DAT_00007762 | 1;
          }
        }
        else {
          DAT_00007762 = DAT_00007762 | 1;
        }
      }
      else {
        DAT_00007762 = DAT_00007762 | 1;
      }
      FUN_000251ca();
      *(undefined1 (*) [12])(unaff_A4 + -0xc) = (undefined1  [12])(longdouble)*extraout_A0;
      FUN_000260c4();
      return;
    }
    uVar3 = FUN_00026068();
    sVar4 = 0x28;
    piVar5 = &DAT_00026302;
    do {
      if (CONCAT31(CONCAT21(in_D0w,cVar2),uVar3) * 0x100 == *piVar5) {
        FUN_0002534a();
        return;
      }
      sVar4 = sVar4 + -1;
      piVar5 = piVar5 + 1;
    } while (sVar4 != 0);
  }
  __m68k_trap(0xe);
  FUN_00024fba();
  return;
}



// Function: FUN_000251ca @ 000251ca

int FUN_000251ca(void)

{
  byte bVar1;
  char cVar4;
  int iVar2;
  ushort uVar3;
  char extraout_D1b;
  char unaff_D2b;
  
  cVar4 = FUN_00026068();
  if ((cVar4 < '0') || ('9' < cVar4)) {
    uVar3 = (ushort)extraout_D1b;
  }
  else {
    if ('\x04' < extraout_D1b) {
      __m68k_trap(0xe);
      iVar2 = FUN_00024fba();
      return iVar2;
    }
    if ((extraout_D1b == '\x04') && ('0' < cVar4)) {
      __m68k_trap(0xe);
      iVar2 = FUN_00024fba();
      return iVar2;
    }
    if ((DAT_0000c5c0 == '\0') && (extraout_D1b == '\0')) {
      __m68k_trap(0xe);
      iVar2 = FUN_00024fba();
      return iVar2;
    }
    bVar1 = DAT_00007762 & 1;
    DAT_00007762 = DAT_00007762 & 0xfe;
    if (bVar1 == 0) {
      if (DAT_0000c5c0 == '\0') {
        __m68k_trap(0xe);
        iVar2 = FUN_00024fba();
        return iVar2;
      }
    }
    else if ((((('\0' < extraout_D1b) && (unaff_D2b != 'F')) && (unaff_D2b != 'X')) &&
             ((((unaff_D2b != 'Y' && (unaff_D2b != 'Z')) &&
               ((unaff_D2b != 'R' && ((unaff_D2b != 'A' && (unaff_D2b != 'I')))))) &&
              (unaff_D2b != 'J')))) &&
            (((unaff_D2b != 'K' && (unaff_D2b != 'D')) && (unaff_D2b != 'C')))) {
      __m68k_trap(0xe);
      iVar2 = FUN_00024fba();
      return iVar2;
    }
    if (extraout_D1b < '\x01') {
      uVar3 = (extraout_D1b + 1) * 10 + -1 + (short)(char)(cVar4 + -0x30);
    }
    else {
      uVar3 = (extraout_D1b + -1) * 10 + (short)(char)(cVar4 + -0x30);
    }
  }
  return (uint)uVar3 * 0xc;
}



// Function: FUN_0002534a @ 0002534a

void FUN_0002534a(void)

{
  short in_D0w;
  char cVar1;
  short sVar2;
  int unaff_A2;
  int unaff_A3;
  undefined4 unaff_A5;
  int unaff_A6;
  
  *(short *)(unaff_A3 + -2) = in_D0w;
  if (in_D0w < 100) {
    FUN_000260c4();
    FUN_00025042();
  }
  else {
    cVar1 = FUN_000260c4();
    if (cVar1 != '(') {
      __m68k_trap(0xe);
      FUN_00024fba();
      return;
    }
    sVar2 = 1;
    do {
      cVar1 = FUN_000260c4();
      if (cVar1 == '(') {
        sVar2 = sVar2 + 1;
      }
      if (cVar1 == ')') {
        sVar2 = sVar2 + -1;
      }
    } while (sVar2 != 0);
    *(undefined4 *)(unaff_A2 + -4) = unaff_A5;
    *(int *)(unaff_A2 + -8) = unaff_A6;
    *(int *)(unaff_A2 + -0xc) = unaff_A6 + -1;
    FUN_00026090();
    FUN_000260c4();
    FUN_00024fc8();
    FUN_000260c4();
    FUN_00024fc8();
    FUN_00026068();
  }
  FUN_000253c8();
  return;
}



// Function: FUN_000253c8 @ 000253c8

void FUN_000253c8(void)

{
  short sVar1;
  undefined1 auVar2 [12];
  short *unaff_A3;
  undefined1 (*unaff_A4) [12];
  undefined1 (*pauVar3) [12];
  
  auVar2 = *unaff_A4;
  sVar1 = *unaff_A3;
  if ((sVar1 < 0x10) || (pauVar3 = unaff_A4 + 1, 99 < sVar1)) {
    pauVar3 = unaff_A4 + 2;
    auVar2 = unaff_A4[1];
  }
  (*(code *)(DAT_000253f2 + sVar1))();
  pauVar3[-1] = (undefined1  [12])(longdouble)auVar2;
  return;
}



// Function: FUN_000255a8 @ 000255a8

undefined8 FUN_000255a8(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  uint extraout_D1;
  uint uVar1;
  
  FUN_00030b8e();
  uVar1 = extraout_D1;
  if (0x96 < extraout_D1) {
    uVar1 = 0x96;
  }
  if ((*(int *)(&DAT_000263a6 + uVar1 * 8) == 2) &&
     ((DAT_000032a4 == 0xbad || (DAT_000032a8 == 0xbad)))) {
    __m68k_trap(0xe);
  }
  if ((*(int *)(&DAT_000263a6 + uVar1 * 8) == 3) &&
     ((DAT_000032a4 == 0xbad || (DAT_000032a8 == 0xbad)))) {
    __m68k_trap(0xe);
  }
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_0002564a @ 0002564a

undefined4 FUN_0002564a(void)

{
  undefined4 in_D0;
  
  return in_D0;
}



// Function: FUN_0002566a @ 0002566a

undefined8 FUN_0002566a(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  uint extraout_D1;
  uint uVar1;
  
  FUN_00030b8e();
  uVar1 = extraout_D1;
  if (0x96 < extraout_D1) {
    uVar1 = 0x96;
  }
  if ((*(int *)(&DAT_000263a6 + uVar1 * 8) == 2) &&
     ((DAT_000032a4 == 0xbad || (DAT_000032a8 == 0xbad)))) {
    __m68k_trap(0xe);
  }
  if ((*(int *)(&DAT_000263a6 + uVar1 * 8) == 3) &&
     ((DAT_000032a4 == 0xbad || (DAT_000032a8 == 0xbad)))) {
    __m68k_trap(0xe);
  }
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00025706 @ 00025706

undefined8 FUN_00025706(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  longdouble unaff_FP6;
  longdouble unaff_FP7;
  
  (&DAT_0000ac06)[(short)((short)(int)unaff_FP7 + -1)] = (char)(int)unaff_FP6;
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00025724 @ 00025724

undefined8 FUN_00025724(void)

{
  undefined4 in_D0;
  uint uVar1;
  char cVar2;
  undefined4 in_D1;
  uint uVar3;
  short sVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  longdouble unaff_FP6;
  longdouble unaff_FP7;
  
  uVar3 = (uint)unaff_FP7;
  uVar1 = (uint)unaff_FP6;
  if (0x96 < uVar3) {
    uVar3 = 0x96;
  }
  if ((*(int *)(&DAT_000263a6 + uVar3 * 8) == 2) &&
     ((DAT_000032a4 == 0xbad || (DAT_000032a8 == 0xbad)))) {
    __m68k_trap(0xe);
  }
  if ((*(int *)(&DAT_000263a6 + uVar3 * 8) == 3) &&
     ((DAT_000032a4 == 0xbad || (DAT_000032a8 == 0xbad)))) {
    __m68k_trap(0xe);
  }
  if (*(int *)(&DAT_000263a6 + uVar3 * 8) == 1) {
    *(uint *)(PTR_DAT_000263a2 + uVar3 * 8) = uVar1;
  }
  if (*(int *)(&DAT_000263a6 + uVar3 * 8) == 3) {
    *(uint *)(PTR_DAT_000263a2 + uVar3 * 8) = uVar1;
  }
  cVar2 = (char)uVar1;
  if (uVar3 == 0x66) {
    if (cVar2 != -1) {
      if ((char)DAT_0000c568 < ' ') {
        uVar3 = (uint)DAT_0000c568;
        (&DAT_0000c548)[(short)(ushort)DAT_0000c568] = cVar2;
        DAT_0000c568 = DAT_0000c568 + 1;
      }
      else {
        __m68k_trap(0xe);
      }
    }
  }
  else if (uVar3 == 0x67) {
    if (cVar2 != -1) {
      if ((char)DAT_0000c579 < '\x10') {
        uVar3 = (uint)DAT_0000c579;
        (&DAT_0000c569)[(short)(ushort)DAT_0000c579] = cVar2;
        DAT_0000c579 = DAT_0000c579 + 1;
      }
      else {
        __m68k_trap(0xe);
      }
    }
  }
  else if (uVar3 == 0x68) {
    if (cVar2 != -1) {
      if ((char)DAT_0000c58e < '\x14') {
        uVar3 = (uint)DAT_0000c58e;
        (&DAT_0000c57a)[(short)(ushort)DAT_0000c58e] = cVar2;
        DAT_0000c58e = DAT_0000c58e + 1;
      }
      else {
        __m68k_trap(0xe);
      }
    }
  }
  else if (uVar3 == 0x69) {
    if (cVar2 != -1) {
      if ((char)DAT_0000c59f < '\x10') {
        uVar3 = (uint)DAT_0000c59f;
        (&DAT_0000c58f)[(short)(ushort)DAT_0000c59f] = cVar2;
        DAT_0000c59f = DAT_0000c59f + 1;
      }
      else {
        __m68k_trap(0xe);
      }
    }
  }
  else if (uVar3 == 0x89) {
    if (cVar2 == -1) {
      puVar5 = &DAT_00007660;
      for (sVar4 = 0; sVar4 < 0x100; sVar4 = sVar4 + 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      DAT_00007760 = '\0';
    }
    else {
      uVar3 = (uint)(ushort)(short)DAT_00007760;
      (&DAT_00007660)[(short)DAT_00007760] = cVar2;
      DAT_00007760 = DAT_00007760 + '\x01';
    }
  }
  else if (uVar3 == 0x95) {
    if (DAT_00007761 == '\0') {
      DAT_00007761 = '\x01';
      if (cVar2 == '\x01') {
        s_TIME_OUT__INPUT_TOGGLE___OUTPUT__00033c79[0x17] = 'L';
        s_TIME_OUT__INPUT_TOGGLE___OUTPUT__00033c79[0x18] = 'O';
        s_TIME_OUT__INPUT_TOGGLE___OUTPUT__00033c79[0x1a] = 'H';
        s_TIME_OUT__INPUT_TOGGLE___OUTPUT__00033c79[0x1b] = 'I';
      }
      else {
        s_TIME_OUT__INPUT_TOGGLE___OUTPUT__00033c79[0x17] = 'H';
        s_TIME_OUT__INPUT_TOGGLE___OUTPUT__00033c79[0x18] = 'I';
        s_TIME_OUT__INPUT_TOGGLE___OUTPUT__00033c79[0x1a] = 'L';
        s_TIME_OUT__INPUT_TOGGLE___OUTPUT__00033c79[0x1b] = 'O';
      }
      s_TIME_OUT__INPUT_TOGGLE___OUTPUT__00033c79[0x19] = '/';
    }
    else {
      if (DAT_00007761 == '\x01') {
        DAT_00007761 = '\x02';
        pcVar6 = s_TIME_OUT__INPUT_TOGGLE___OUTPUT__00033c79 + 0x24;
      }
      else {
        DAT_00007761 = '\x03';
        pcVar6 = s_TIME_OUT__INPUT_TOGGLE___OUTPUT__00033c79 + 0x2d;
      }
      if (cVar2 < '\n') {
        *pcVar6 = ' ';
        pcVar6[1] = cVar2 + '0';
      }
      else {
        uVar3 = uVar1 / 10 + 0x30;
        *pcVar6 = (char)uVar3;
        pcVar6[1] = (char)(uVar1 % 10) + '0';
      }
      if (DAT_00007761 == '\x03') {
        DAT_00007761 = '\0';
        pcVar6 = s_TIME_OUT__INPUT_TOGGLE___OUTPUT__00033c79;
        pcVar7 = &DAT_000099e0;
        do {
          cVar2 = *pcVar6;
          *pcVar7 = cVar2;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
      }
    }
  }
  if ((-1 < (int)uVar3) && ((int)uVar3 < 0x14)) {
    FUN_00030b8e();
  }
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_000259b8 @ 000259b8

undefined8 FUN_000259b8(void)

{
  undefined4 in_D0;
  uint uVar1;
  undefined4 in_D1;
  uint uVar2;
  longdouble unaff_FP6;
  longdouble unaff_FP7;
  
  uVar2 = (uint)unaff_FP7;
  if (unaff_FP6 - (longdouble)2147483648.0 < FLOAT_UNKNOWN &&
      unaff_FP6 - (longdouble)2147483648.0 != FLOAT_UNKNOWN) {
    uVar1 = (uint)unaff_FP6;
  }
  else {
    uVar1 = (int)(unaff_FP6 - (longdouble)2147483648.0) | 0x80000000;
  }
  if (0x96 < uVar2) {
    uVar2 = 0x96;
  }
  if ((*(int *)(&DAT_000263a6 + uVar2 * 8) == 2) &&
     ((DAT_000032a4 == 0xbad || (DAT_000032a8 == 0xbad)))) {
    __m68k_trap(0xe);
  }
  if ((*(int *)(&DAT_000263a6 + uVar2 * 8) == 3) &&
     ((DAT_000032a4 == 0xbad || (DAT_000032a8 == 0xbad)))) {
    __m68k_trap(0xe);
  }
  if (*(int *)(&DAT_000263a6 + uVar2 * 8) == 1) {
    *(uint *)(PTR_DAT_000263a2 + uVar2 * 8) = uVar1;
  }
  if (*(int *)(&DAT_000263a6 + uVar2 * 8) == 3) {
    *(uint *)(PTR_DAT_000263a2 + uVar2 * 8) = uVar1;
  }
  if ((-1 < (int)uVar2) && ((int)uVar2 < 0x14)) {
    FUN_00030b8e();
  }
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00025aa6 @ 00025aa6

undefined8 FUN_00025aa6(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00025afc @ 00025afc

/* WARNING: Removing unreachable block (ram,0x00025b3c) */

undefined8 FUN_00025afc(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00025b5c @ 00025b5c

undefined8 FUN_00025b5c(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00025be6 @ 00025be6

undefined8 FUN_00025be6(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00025c66 @ 00025c66

undefined8 FUN_00025c66(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00025ce6 @ 00025ce6

undefined8 FUN_00025ce6(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00025d66 @ 00025d66

undefined8 FUN_00025d66(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00025de6 @ 00025de6

undefined8 FUN_00025de6(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00025e66 @ 00025e66

undefined8 FUN_00025e66(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00025ee6 @ 00025ee6

undefined8 FUN_00025ee6(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00025f66 @ 00025f66

undefined8 FUN_00025f66(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00025fb4 @ 00025fb4

undefined8 FUN_00025fb4(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_0002600e @ 0002600e

undefined8 FUN_0002600e(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00026068 @ 00026068

byte FUN_00026068(void)

{
  byte bVar1;
  int unaff_A5;
  byte *unaff_A6;
  
  if ((int)unaff_A6 <= unaff_A5) {
    bVar1 = *unaff_A6;
    if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
      bVar1 = bVar1 & 0xdf;
    }
    return bVar1;
  }
  __m68k_trap(0xe);
  bVar1 = FUN_00024fba();
  return bVar1;
}



// Function: FUN_00026090 @ 00026090

void FUN_00026090(void)

{
  char cVar1;
  char unaff_D2b;
  
  do {
    cVar1 = FUN_00026068();
  } while (cVar1 != unaff_D2b);
  return;
}



// Function: FUN_000260a0 @ 000260a0

void FUN_000260a0(void)

{
  char cVar1;
  char *unaff_A6;
  
  do {
    cVar1 = *unaff_A6;
    if (cVar1 == '\r') {
      cVar1 = '\0';
    }
    if (cVar1 == '!') {
      cVar1 = '\0';
    }
    if (cVar1 == ';') {
      cVar1 = '\0';
    }
    unaff_A6 = unaff_A6 + 1;
  } while (cVar1 != '\0');
  return;
}



// Function: FUN_000260c4 @ 000260c4

void FUN_000260c4(void)

{
  byte bVar1;
  byte *unaff_A5;
  byte *unaff_A6;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = unaff_A6 + 1;
  bVar1 = *unaff_A6;
  if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
    bVar1 = bVar1 & 0xdf;
  }
  do {
    if ((bVar1 != 0x20) && (bVar1 != 9)) {
      return;
    }
    pbVar3 = pbVar2 + 1;
    bVar1 = *pbVar2;
    if (('`' < (char)bVar1) && ((char)bVar1 < '{')) {
      bVar1 = bVar1 & 0xdf;
    }
    pbVar2 = pbVar3;
  } while (pbVar3 <= unaff_A5);
  __m68k_trap(0xe);
  FUN_00024fba();
  return;
}



// Function: FUN_0002610a @ 0002610a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002610a(void)

{
  char in_D0b;
  char cVar1;
  undefined4 uVar2;
  short sVar3;
  char *pcVar4;
  char *extraout_A1;
  char *extraout_A1_00;
  char *extraout_A1_01;
  char *extraout_A1_02;
  char *extraout_A1_03;
  char *extraout_A1_04;
  char *extraout_A1_05;
  char *extraout_A1_06;
  undefined5 uVar5;
  int5 iVar6;
  
  _DAT_00007310 = 0;
  _DAT_00007314 = 0;
  _DAT_00007318 = 0;
  _DAT_0000731c = 0;
  _DAT_00007320 = 0;
  pcVar4 = &DAT_00007310;
  uVar2 = 0;
  sVar3 = 0;
  while ((iVar6 = CONCAT14(in_D0b,uVar2), in_D0b == ' ' || (in_D0b == '\t'))) {
    uVar5 = FUN_00026068();
    uVar2 = (undefined4)uVar5;
    pcVar4 = extraout_A1;
    in_D0b = (char)((uint5)uVar5 >> 0x20);
  }
  if (in_D0b == '-') {
    iVar6 = FUN_00026068();
    pcVar4 = extraout_A1_00;
  }
  if ((char)((uint5)iVar6 >> 0x20) == '+') {
    iVar6 = FUN_00026068();
    pcVar4 = extraout_A1_01;
  }
  while (cVar1 = (char)((uint5)iVar6 >> 0x20), cVar1 == '0') {
    iVar6 = FUN_00026068();
    pcVar4 = extraout_A1_02;
  }
  if ((cVar1 != '.') && ((cVar1 < '0' || ('9' < cVar1)))) {
    return;
  }
  while ((cVar1 = (char)((uint5)iVar6 >> 0x20), 0x2fffffffff < iVar6 && (iVar6 < 0x3a00000000))) {
    *pcVar4 = cVar1 + -0x30;
    sVar3 = sVar3 + 1;
    iVar6 = FUN_00026068();
    pcVar4 = extraout_A1_03;
    if ((char *)0x7321 < extraout_A1_03) {
      __m68k_trap(0xe);
      FUN_00024fba();
      return;
    }
  }
  if (cVar1 == '.') {
    cVar1 = FUN_00026068();
    pcVar4 = extraout_A1_04;
    for (; (cVar1 == '0' && (sVar3 < 1)); sVar3 = sVar3 + -1) {
      cVar1 = FUN_00026068();
      pcVar4 = extraout_A1_05;
    }
    while (('/' < cVar1 && (cVar1 < ':'))) {
      *pcVar4 = cVar1 + -0x30;
      cVar1 = FUN_00026068();
      pcVar4 = extraout_A1_06;
      if ((char *)0x7321 < extraout_A1_06) {
        __m68k_trap(0xe);
        FUN_00024fba();
        return;
      }
    }
  }
  else if (sVar3 == 1) {
    return;
  }
  return;
}



// Function: FUN_00027cd6 @ 00027cd6

undefined8 FUN_00027cd6(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  undefined4 unaff_D2;
  undefined4 unaff_D3;
  undefined4 unaff_D4;
  undefined4 unaff_D5;
  undefined4 unaff_D6;
  undefined4 unaff_D7;
  undefined4 in_A0;
  undefined4 in_A1;
  undefined4 unaff_A2;
  undefined4 unaff_A3;
  undefined4 unaff_A4;
  undefined4 unaff_A5;
  undefined4 unaff_A6;
  undefined4 in_stack_00000000;
  
  DAT_00009b64 = in_stack_00000000;
  DAT_00009b24 = in_D0;
  DAT_00009b28 = in_D1;
  DAT_00009b2c = unaff_D2;
  DAT_00009b30 = unaff_D3;
  DAT_00009b34 = unaff_D4;
  DAT_00009b38 = unaff_D5;
  DAT_00009b3c = unaff_D6;
  DAT_00009b40 = unaff_D7;
  DAT_00009b44 = in_A0;
  DAT_00009b48 = in_A1;
  DAT_00009b4c = unaff_A2;
  DAT_00009b50 = unaff_A3;
  DAT_00009b54 = unaff_A4;
  DAT_00009b58 = unaff_A5;
  DAT_00009b5c = unaff_A6;
  DAT_00009b60 = &stack0x00000004;
  return CONCAT44(DAT_00009ae4,DAT_00009ae8);
}



// Function: FUN_00027cee @ 00027cee

undefined8 FUN_00027cee(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_D0;
  undefined4 in_D1;
  undefined4 unaff_D2;
  undefined4 unaff_D3;
  undefined4 unaff_D4;
  undefined4 unaff_D5;
  undefined4 unaff_D6;
  undefined4 unaff_D7;
  undefined4 in_A0;
  undefined4 in_A1;
  undefined4 unaff_A2;
  undefined4 unaff_A3;
  undefined4 unaff_A4;
  undefined4 unaff_A5;
  undefined4 unaff_A6;
  
  uVar2 = DAT_00009b28;
  uVar1 = DAT_00009b24;
  DAT_00009ae4 = in_D0;
  DAT_00009ae8 = in_D1;
  DAT_00009aec = unaff_D2;
  DAT_00009af0 = unaff_D3;
  DAT_00009af4 = unaff_D4;
  DAT_00009af8 = unaff_D5;
  DAT_00009afc = unaff_D6;
  DAT_00009b00 = unaff_D7;
  DAT_00009b04 = in_A0;
  DAT_00009b08 = in_A1;
  DAT_00009b0c = unaff_A2;
  DAT_00009b10 = unaff_A3;
  DAT_00009b14 = unaff_A4;
  DAT_00009b18 = unaff_A5;
  DAT_00009b1c = unaff_A6;
  DAT_00009b20 = (undefined1 *)register0x0000003c;
  *(undefined4 *)(DAT_00009b60 + -4) = DAT_00009b64;
  DAT_00009b64 = 0;
  return CONCAT44(uVar1,uVar2);
}



// Function: FUN_00027dea @ 00027dea

void FUN_00027dea(void)

{
  return;
}



// Function: FUN_00028562 @ 00028562

void FUN_00028562(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (((byte)DAT_0000c536 & 0x80) != 0) {
    return;
  }
  if ((DAT_0000aef9 & 0x10) != 0) {
    return;
  }
  DAT_0000c5c6 = DAT_0000c5c6 | 2;
  FUN_0002955c();
  FUN_00028930();
  pcVar1 = &DAT_01200200;
  pcVar3 = (char *)&DAT_0002855c;
  do {
    pcVar2 = pcVar3 + 1;
    *pcVar1 = *pcVar3;
    pcVar1 = pcVar1 + 1;
    pcVar3 = pcVar2;
  } while (*pcVar2 != -0x30);
  DAT_0000c536._3_1_ = (byte)DAT_0000c536 | 0x80;
  FUN_00029d7c();
  return;
}



// Function: FUN_00028794 @ 00028794

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00028794(void)

{
  if (6 < _DAT_01200404) {
    _DAT_01200402 = _DAT_01200402 | 2;
    return;
  }
  if (_DAT_01200406 < 5) {
    if (_DAT_01200404 == 3) {
      if ((DAT_0000aef8 & 2) == 0) {
        DAT_00007782 = 0;
      }
      else {
        DAT_00007782 = 4;
      }
      FUN_0002887a();
    }
    else if (_DAT_01200404 == 2) {
      FUN_0002887a();
      FUN_0002b4d6();
    }
    else if (_DAT_01200404 == 4) {
      DAT_00009fd8 = _DAT_01200404;
      DAT_00009fd6 = _DAT_01200406;
      DAT_00007782 = 3;
      FUN_0000f15c();
    }
    else if (_DAT_01200404 == 5) {
      if ((DAT_0000af5c + DAT_0000af00 < 1) && (DAT_00002758 < DAT_0000af5c + DAT_0000af00)) {
        __m68k_trap(0xe);
      }
      else {
        DAT_00007782 = 2;
      }
    }
    else {
      DAT_00009fd8 = _DAT_01200404;
      DAT_00009fd6 = _DAT_01200406;
      DAT_00007782 = 1;
      FUN_0000f15c();
    }
    return;
  }
  _DAT_01200402 = _DAT_01200402 | 2;
  return;
}



// Function: FUN_0002887a @ 0002887a

void FUN_0002887a(void)

{
  if ((DAT_000010d9 != '\x11') && ((DAT_00000bd8 & 0x80) == 0)) {
    DAT_00000bd9 = DAT_00000bd9 | 0x40;
    while( true ) {
      while ((DAT_00000bd8 & 0x10) == 0) {
        FUN_00027cd6();
      }
      DAT_00000bd9 = DAT_00000bd9 | 0x80;
      if ((DAT_00000bd8 & 0x80) != 0) break;
      FUN_00027cd6();
    }
  }
  FUN_0002c194();
  return;
}



// Function: FUN_00028930 @ 00028930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00028930(void)

{
  if (((((DAT_0000aefb & 8) == 0) && ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3)) &&
      ((DAT_0000aefa & 8) == 0)) && ((DAT_000031e4 & 8) != 0)) {
    __m68k_trap(0xe);
    return;
  }
  FUN_000100fe();
  FUN_0002b3cc();
  FUN_00030fe2();
  if ((DAT_0000aefb & 0x20) == 0) {
    DAT_0000aeb2 = &DAT_00009798;
    DAT_00009798 = 0;
    DAT_00009799 = 0x80;
  }
  else if ((DAT_0000c5c6 & 0x40) != 0) {
    DAT_0000aeb2 = &DAT_00009798;
    DAT_00009798 = 0;
    DAT_00009799 = 0x80;
  }
  DAT_00007780 = 3;
  if (((DAT_0000c547 & 1) != 0) && ((DAT_00007782 == 3 || (DAT_00007782 == 2)))) {
    return;
  }
  FUN_00028ac2();
  return;
}



// Function: FUN_000289dc @ 000289dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000289dc(void)

{
  if (((((DAT_0000aefb & 8) == 0) && ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3)) &&
      ((DAT_0000aefa & 8) == 0)) && ((DAT_000031e4 & 8) != 0)) {
    __m68k_trap(0xe);
    return;
  }
  if ((DAT_00000bd8 & 0x80) == 0) {
    DAT_00007780 = 2;
    DAT_00000bd9 = DAT_00000bd9 | 8;
    if ((DAT_0000aef8 & 2) == 0) {
      DAT_00007782 = 0;
    }
    else {
      DAT_00007782 = 4;
    }
    if ((((DAT_000010d9 == '\x10') || (DAT_000010d9 == '\x11')) || (DAT_000010d9 == '\x04')) &&
       ((DAT_00000bd8 & 0x80) == 0)) {
      FUN_0002b3cc();
    }
    DAT_00007780 = 2;
    return;
  }
  DAT_00007780 = 4;
  FUN_00028ac2();
  return;
}



// Function: FUN_00028ac2 @ 00028ac2

void FUN_00028ac2(void)

{
  undefined2 uVar1;
  
  uVar1 = DAT_00007780;
  DAT_00000bd9 = DAT_00000bd9 & 0xf7;
  DAT_00000bd9 = DAT_00000bd9 | 0x10;
  if ((DAT_0000aef8 & 2) == 0) {
    DAT_00007782 = 0;
  }
  else {
    DAT_00007782 = 4;
  }
  if ((((DAT_000010d9 == '\x10') || (DAT_000010d9 == '\x11')) || (DAT_000010d9 == '\x04')) &&
     ((DAT_00000bd8 & 0x80) == 0)) {
    FUN_0002b3cc();
  }
  DAT_00007780 = uVar1;
  return;
}



// Function: FUN_0002955c @ 0002955c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002955c(void)

{
  short sVar1;
  undefined2 *puVar2;
  int extraout_A0;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  DAT_00009fda._0_2_ = DAT_00009fda._0_2_ & 0x7fff;
  DAT_0000c506 = 0;
  DAT_0000c51a = DAT_0000c51a & 0xfd;
  if ((DAT_0000aef9 & 8) == 0) {
    DAT_00000bd9 = DAT_00000bd9 & 0xf7 | 0x50;
    if (DAT_00007780 == 2) {
      DAT_00007780 = 4;
    }
    sVar1 = DAT_00007780;
    if (DAT_00007780 != 5) {
      FUN_0002b3cc();
    }
    FUN_00023384();
    DAT_00007780 = sVar1;
    FUN_0002cbde();
    DAT_00007784 = DAT_00007784 & 0xcf;
    DAT_00007785 = DAT_00007785 & 0xbf;
    DAT_00000bd9 = DAT_00000bd9 & 0xfb;
    FUN_00030fe2();
    if (DAT_00007780 != 5) {
      _DAT_01200554 = DAT_0000c50e;
    }
    FUN_0002bad4();
    puVar2 = (undefined2 *)&DAT_0004e000;
    DAT_0000a664 = 0;
  }
  else {
    DAT_00007784 = DAT_00007784 & 0xef;
    FUN_0000ddf2();
    puVar2 = (undefined2 *)(extraout_A0 + 0x1d4);
  }
  puVar3 = (undefined2 *)&DAT_012006e4;
  do {
    puVar4 = puVar3 + 1;
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar4;
  } while (puVar4 < (undefined2 *)0x1200710);
  DAT_012006b2 = 0;
  DAT_01200680 = 0;
  DAT_000099e0 = 0;
  DAT_000099dc = &DAT_000099e0;
  DAT_0000aef9 = DAT_0000aef9 | 0x20;
  return;
}



// Function: FUN_00029d7c @ 00029d7c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00029d7c(void)

{
  char *pcVar1;
  char *extraout_A1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  byte bVar5;
  
  if ((((((DAT_0000c5c6 & 0x40) != 0) && (_DAT_01200200 != 0x4d393734)) &&
       (_DAT_01200200 != 0x4d393032)) &&
      ((_DAT_01200200 != 0x4d393033 && ((DAT_0000aefb & 8) == 0)))) &&
     (((DAT_0000aefa & 8) == 0 && ((DAT_000031e4 & 8) != 0)))) {
    __m68k_trap(0xe);
    return;
  }
  if (DAT_0000a25c != 0) {
    return;
  }
  if ((DAT_0000aefb & 8) == 0) {
    if (((DAT_00000bd8 & 0x80) == 0) && (DAT_000010d9 != '\x04')) {
      return;
    }
    bVar5 = 0;
    cVar4 = '\0';
    FUN_00028930();
  }
  else {
    if ((ushort)(_DAT_0000af58 >> 0x1c) == 3) {
      if ((DAT_0000aef8 & 2) == 0) {
        DAT_00007782 = 0;
      }
      else {
        DAT_00007782 = 4;
      }
    }
    bVar5 = 0;
    cVar4 = '\0';
    FUN_0002955c();
    FUN_000289dc();
  }
  if (((((DAT_0000aef8 & 0x40) == 0) << 2 | cVar4 << 1 | bVar5) & 4) == 0) {
    DAT_0000aef8 = DAT_0000aef8 | 0x40;
  }
  else {
    DAT_0000aef8 = DAT_0000aef8 & 0xbf;
  }
  if ((DAT_0000aef8 & 0x80) == 0) {
    DAT_00004089 = DAT_00004089 & 0xfb;
  }
  else {
    DAT_00004089 = DAT_00004089 | 4;
  }
  FUN_0002cbde();
  DAT_00007784 = DAT_00007784 & 0xef;
  DAT_0000c536._3_1_ = (byte)DAT_0000c536 & 0x9f;
  DAT_0000c5c0 = 0;
  DAT_00003b40 = 0;
  if ((DAT_0000aefb & 0x20) == 0) {
    pcVar2 = &DAT_00009798;
    DAT_0000aeb2 = &DAT_00009798;
  }
  else {
    pcVar2 = extraout_A1;
    if ((DAT_0000c5c6 & 0x40) != 0) {
      pcVar2 = &DAT_00009798;
      DAT_0000aeb2 = &DAT_00009798;
    }
  }
  if ((DAT_0000aefb & 8) != 0) {
    _DAT_01200200 = 0x4d393735;
    DAT_01200204 = 10;
    DAT_01200205 = 0;
  }
  pcVar1 = &DAT_01200200;
  if (_DAT_0000af58 >> 0x1c == 0) {
    *pcVar2 = 'G';
    pcVar2[1] = '0';
    pcVar2[2] = '\0';
    pcVar2 = pcVar2 + 3;
  }
  do {
    cVar4 = *pcVar1;
    pcVar3 = pcVar2 + 1;
    *pcVar2 = cVar4;
    if (cVar4 == '\n') {
      *pcVar2 = '\0';
    }
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar3;
  } while (cVar4 != '\0');
  *pcVar3 = -0x80;
  if ((DAT_0000aefb & 8) == 0) {
    DAT_00000bd9 = DAT_00000bd9 | 8;
  }
  else {
    FUN_0000e9b6();
  }
  return;
}



// Function: FUN_0002a406 @ 0002a406

undefined4 FUN_0002a406(void)

{
  if (DAT_0000af04 != '\0' || (DAT_0000c545 & 2) != 0) {
    if ((DAT_00003268 & 4) != 0) {
      __m68k_trap(0xe);
      return 1;
    }
    if ((DAT_00003268 & 8) == 0) {
      __m68k_trap(0xe);
      return 1;
    }
  }
  return 0;
}



// Function: FUN_0002a448 @ 0002a448

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002a448(void)

{
  ushort uVar1;
  bool bVar2;
  
  bVar2 = ((byte)DAT_0000c536 & 0x80) == 0;
  if ((!bVar2) && (bVar2 = ((byte)DAT_0000c536 & 4) == 0, !bVar2)) {
    return;
  }
  FUN_0002a406();
  if (!bVar2) {
    return;
  }
  if (((DAT_0000aefa & 8) == 0) && ((DAT_000031e4 & 8) != 0)) {
    __m68k_trap(0xe);
    return;
  }
  if ((DAT_0000aef8 & 4) != 0) {
    __m68k_trap(0xe);
    return;
  }
  if ((((ushort)((uint)_DAT_0000af58 >> 0x1c) != 3) &&
      (((uVar1 = (ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c), uVar1 == 1 || (uVar1 == 7)) &&
       ((DAT_00003252 & 4) == 0)))) && ((DAT_0000aecc != 0 || (DAT_0000c45c != 0)))) {
    DAT_0000aedc = DAT_0000c45c;
    DAT_0000aecc = DAT_0000c45c;
    if ((DAT_00007785 & 1) != 0) {
      DAT_0000aedc = -DAT_0000c45c;
    }
    DAT_00007784 = DAT_00007784 & 0xdf;
    DAT_00007785 = DAT_00007785 & 0xbf;
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0x80;
    DAT_0000aeca = 0x86;
  }
  return;
}



// Function: FUN_0002b3cc @ 0002b3cc

void FUN_0002b3cc(void)

{
  DAT_0000a25c = 0;
  DAT_000031ee = DAT_000031ee & 0xef;
  DAT_00007784 = DAT_00007784 & 0xfe;
  FUN_0000e210();
  FUN_0001a9f8();
  FUN_0001a8b2();
  FUN_0000e210();
  FUN_0002b40a();
  DAT_00000bd9 = DAT_00000bd9 & 0x3f;
  return;
}



// Function: FUN_0002b40a @ 0002b40a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002b40a(void)

{
  ushort uVar1;
  longdouble lVar2;
  
  _DAT_000040b2 = (undefined1  [12])DAT_00002750;
  lVar2 = (longdouble)DAT_00002750 - (longdouble)_DAT_0000ac4e;
  uVar1 = (ushort)((uint)_DAT_0000af58 >> 0x10);
  if (uVar1 >> 0xc == 3) {
    lVar2 = lVar2 * (longdouble)2;
  }
  _DAT_00003f0c = (undefined1  [12])lVar2;
  _DAT_00004010 = (undefined1  [12])lVar2;
  _DAT_000040be = (undefined1  [12])DAT_00002754;
  _DAT_00003f30 = (undefined1  [12])((longdouble)DAT_00002754 - (longdouble)_DAT_0000ac5a);
  _DAT_0000401c = (undefined1  [12])((longdouble)DAT_00002754 - (longdouble)_DAT_0000ac5a);
  lVar2 = (longdouble)DAT_00002758;
  _DAT_000040ca = (undefined1  [12])DAT_00002758;
  if ((uVar1 >> 0xc != 0) || (DAT_00002988 != 0)) {
    lVar2 = lVar2 - (longdouble)_DAT_0000ac66;
  }
  _DAT_00003f54 = (undefined1  [12])lVar2;
  _DAT_00004028 = (undefined1  [12])lVar2;
  _DAT_000040d6 = (undefined1  [12])DAT_0000275c;
  _DAT_00003f78 = (undefined1  [12])((longdouble)DAT_0000275c - (longdouble)_DAT_0000ac72);
  _DAT_00004034 = (undefined1  [12])((longdouble)DAT_0000275c - (longdouble)_DAT_0000ac72);
  _DAT_000040e2 = (undefined1  [12])DAT_00002760;
  _DAT_00003f84 = (undefined1  [12])((longdouble)DAT_00002760 - (longdouble)_DAT_0000acba);
  _DAT_00004040 = (undefined1  [12])((longdouble)DAT_00002760 - (longdouble)_DAT_0000acba);
  return;
}



// Function: FUN_0002b4d6 @ 0002b4d6

void FUN_0002b4d6(void)

{
  undefined4 uVar1;
  byte *extraout_A0;
  
  if ((DAT_000031e4 & 1) == 0) {
    __m68k_trap(0xe);
  }
  else {
    DAT_00000bd8 = DAT_00000bd8 & 0xbf;
    DAT_00000bd9 = DAT_00000bd9 & 0xf7 | 0x10;
    uVar1 = FUN_0002c236();
    if ((DAT_01200815 & 0x40) == 0) {
      DAT_0000aef8 = DAT_0000aef8 & 0xef;
      DAT_00000bd8 = DAT_00000bd8 & 0x7f;
      *(short *)(extraout_A0 + 2) = (short)uVar1;
      extraout_A0[2] = extraout_A0[2] | 0x80;
      *(short *)(extraout_A0 + 4) = (short)((uint)uVar1 >> 0x10);
      *extraout_A0 = *extraout_A0 | 0x40;
      *extraout_A0 = *extraout_A0 | 0x80;
      if ((DAT_0000aef8 & 0x80) == 0) {
        extraout_A0[1] = extraout_A0[1] & 0xfb;
      }
      else {
        extraout_A0[1] = extraout_A0[1] | 4;
      }
      DAT_00000bd9 = DAT_00000bd9 | 8;
    }
  }
  return;
}



// Function: FUN_0002bad4 @ 0002bad4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002bad4(void)

{
  short sVar1;
  longdouble lVar2;
  
  if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3) {
    _DAT_01200558 = DAT_00009f6c;
    if (((int)DAT_00009f6c < 1) || (0x18 < DAT_00009f6c)) {
      lVar2 = (longdouble)0;
      _DAT_01200554 = (uint)lVar2;
      _DAT_0120055c = kfactor(lVar2,0x6f);
      _DAT_01200568 = kfactor(lVar2,0x6f);
    }
    else {
      sVar1 = ((short)DAT_00009f6c + -1) * 0xc;
      lVar2 = (longdouble)*(undefined1 (*) [12])(&DAT_0000a666 + sVar1);
      if ((_DAT_01200486 & 8) != 0) {
        if ((DAT_0000aef8 & 0x80) == 0) {
          lVar2 = lVar2 / (longdouble)(undefined1  [12])0x1b07800000000000;
        }
        else {
          lVar2 = lVar2 / (longdouble)(undefined1  [12])0x4350000000000000;
        }
      }
      _DAT_0120055c = kfactor(lVar2,0x6f);
      lVar2 = (longdouble)*(undefined1 (*) [12])(&DAT_0000a786 + sVar1);
      if ((_DAT_01200486 & 8) != 0) {
        if ((DAT_0000aef8 & 0x80) == 0) {
          lVar2 = lVar2 / (longdouble)(undefined1  [12])0x1b07800000000000;
        }
        else {
          lVar2 = lVar2 / (longdouble)(undefined1  [12])0x4350000000000000;
        }
      }
      _DAT_01200568 = kfactor(lVar2,0x6f);
    }
    return;
  }
  DAT_00009f6c = DAT_000042b0;
  if ((DAT_0000c545 & 2) == 0) {
    DAT_00009f6c = _DAT_01200554;
  }
  _DAT_01200558 = DAT_00009f6c;
  if (((int)DAT_00009f6c < 1) || (0x18 < DAT_00009f6c)) {
    lVar2 = (longdouble)0;
    _DAT_01200554 = (uint)lVar2;
    _DAT_0120055c = kfactor(lVar2,0x6f);
    _DAT_01200568 = kfactor(lVar2,0x6f);
  }
  else {
    sVar1 = ((short)DAT_00009f6c + -1) * 0xc;
    lVar2 = (longdouble)*(undefined1 (*) [12])(&DAT_0000a666 + sVar1);
    if ((_DAT_01200486 & 8) != 0) {
      if ((DAT_0000aef8 & 0x80) == 0) {
        lVar2 = lVar2 / (longdouble)(undefined1  [12])0x1b07800000000000;
      }
      else {
        lVar2 = lVar2 / (longdouble)(undefined1  [12])0x4350000000000000;
      }
    }
    _DAT_0120055c = kfactor(lVar2,0x6f);
    lVar2 = (longdouble)_DAT_00009f7c;
    if ((_DAT_01200486 & 8) != 0) {
      if ((DAT_0000aef8 & 0x80) == 0) {
        lVar2 = lVar2 / (longdouble)(undefined1  [12])0x1b07800000000000;
      }
      else {
        lVar2 = lVar2 / (longdouble)(undefined1  [12])0x4350000000000000;
      }
    }
    _DAT_01200568 = kfactor(lVar2,0x6f);
    lVar2 = (longdouble)*(undefined1 (*) [12])(&DAT_0000a8a6 + sVar1);
    if (FLOAT_UNKNOWN <= lVar2 - (longdouble)(undefined1  [12])0x5bba000000000001 ||
        lVar2 - (longdouble)(undefined1  [12])0x5bba000000000001 == FLOAT_UNKNOWN) {
      lVar2 = (longdouble)0;
    }
    _DAT_01200574 = kfactor(lVar2,0x6f);
    lVar2 = (longdouble)*(undefined1 (*) [12])(&DAT_0000a9c6 + sVar1);
    if (FLOAT_UNKNOWN <= lVar2 - (longdouble)(undefined1  [12])0x5bba000000000001 ||
        lVar2 - (longdouble)(undefined1  [12])0x5bba000000000001 == FLOAT_UNKNOWN) {
      lVar2 = (longdouble)0;
    }
    _DAT_0120071e = kfactor(lVar2,0x6f);
    lVar2 = (longdouble)*(undefined1 (*) [12])(&DAT_0000aae6 + sVar1);
    if (FLOAT_UNKNOWN <= lVar2 - (longdouble)(undefined1  [12])0x5bba000000000001 ||
        lVar2 - (longdouble)(undefined1  [12])0x5bba000000000001 == FLOAT_UNKNOWN) {
      lVar2 = (longdouble)0;
    }
    _DAT_0120072a = kfactor(lVar2,0x6f);
  }
  if ((DAT_0000c545 & 2) == 0) {
    DAT_0000af04 = DAT_0000c5cc;
  }
  else {
    DAT_0000af04 = 0;
  }
  return;
}



// Function: FUN_0002bdb2 @ 0002bdb2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002bdb2(void)

{
  ushort uVar1;
  ushort *extraout_A0;
  
  if ((DAT_000031e4 & 1) == 0) {
    _DAT_0000aef8 = _DAT_0000aef8 & 0xfeffffff;
  }
  else {
    _DAT_0000aef8 = _DAT_0000aef8 | 0x1000000;
  }
  if ((DAT_00003252 & 4) == 0) {
    _DAT_0000aef8 = _DAT_0000aef8 & 0xfdffffff;
  }
  else {
    _DAT_0000aef8 = _DAT_0000aef8 | 0x2000000;
  }
  if ((DAT_00000bd9 & 0x20) == 0) {
    _DAT_0000aef8 = _DAT_0000aef8 & 0xf7ffffff;
  }
  else {
    _DAT_0000aef8 = _DAT_0000aef8 | 0x8000000;
  }
  if ((DAT_00000bd8 & 0x80) == 0) {
    _DAT_0000aef8 = _DAT_0000aef8 & 0xefffffff;
  }
  else if ((DAT_00000bd9 & 0x40) == 0) {
    if (DAT_000005bc == 0x9d8) {
      _DAT_0000aef8 = _DAT_0000aef8 & 0xefffffff;
    }
    else if (DAT_0000a25c == 0) {
      FUN_0000ddf2();
      uVar1 = *extraout_A0;
      if ((uVar1 & 0x8000) == 0) {
        _DAT_0000aef8 = _DAT_0000aef8 | 0x10000000;
      }
      else if ((uVar1 & 0x400) == 0) {
        if (DAT_00007780 != 3) {
          _DAT_0000aef8 = _DAT_0000aef8 | 0x10000000;
        }
      }
      else if ((uVar1 & 0x200) == 0) {
        _DAT_0000aef8 = _DAT_0000aef8 & 0xefffffff;
      }
      else {
        _DAT_0000aef8 = _DAT_0000aef8 | 0x10000000;
      }
    }
    else {
      _DAT_0000aef8 = _DAT_0000aef8 & 0xefffffff;
    }
  }
  else {
    _DAT_0000aef8 = _DAT_0000aef8 & 0xefffffff;
  }
  if ((DAT_000031e5 & 0x80) == 0) {
    _DAT_0000aef8 = _DAT_0000aef8 & 0xffbfffff;
  }
  else {
    _DAT_0000aef8 = _DAT_0000aef8 | 0x400000;
  }
  if ((DAT_00000bd9 & 0x40) == 0) {
    _DAT_0000aef8 = _DAT_0000aef8 & 0xffff7fff;
  }
  else {
    _DAT_0000aef8 = _DAT_0000aef8 | 0x8000;
  }
  if (((byte)DAT_0000c536 & 0x80) != 0) {
    _DAT_0000aef8 = _DAT_0000aef8 & 0xefffffff;
  }
  _DAT_01200480 = _DAT_0000aef8;
  return;
}



// Function: FUN_0002beee @ 0002beee

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002beee(void)

{
  ushort uVar1;
  
  if ((DAT_0000aef9 & 0x10) == 0) {
    if (_DAT_01200808 == 0) {
      if (_DAT_0120080c == 0) {
        if ((DAT_00000bd8 & 1) == 0) {
          if ((DAT_00007788 & 2) == 0) {
            return;
          }
          if ((DAT_00000bd9 & 4) != 0) {
            __m68k_trap(0xe);
            return;
          }
          uVar1 = (ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c);
          if ((uVar1 == 0) || (uVar1 == 2)) {
            if ((DAT_0000aecb & 1) != 0) {
              return;
            }
            if ((DAT_00007784 & 0x80) != 0) {
              return;
            }
            DAT_00000bd9 = DAT_00000bd9 | 0x40;
            FUN_00032176();
            DAT_00007788 = DAT_00007788 & 0xfd;
            DAT_00007784 = DAT_00007784 | 0x80;
            return;
          }
          if ((uVar1 == 4) || (uVar1 == 5)) {
            if ((DAT_0000aecb & 1) != 0) {
              return;
            }
            if ((DAT_00007784 & 0x80) != 0) {
              return;
            }
            DAT_00000bd9 = DAT_00000bd9 | 0x40;
            FUN_00032176();
            DAT_00007788 = DAT_00007788 & 0xfd;
            DAT_00007784 = DAT_00007784 | 0x80;
            return;
          }
          FUN_00032176();
        }
        else {
          FUN_00032176();
        }
      }
      else {
        FUN_00032176();
        _DAT_0120080c = 0;
      }
    }
    else {
      DAT_000031ed = DAT_000031ed & 0x7e;
      FUN_00032176();
      _DAT_01200808 = 0;
    }
    DAT_0000aef9 = DAT_0000aef9 | 0x10;
  }
  return;
}



// Function: FUN_0002c194 @ 0002c194

void FUN_0002c194(void)

{
  byte bVar1;
  char in_VF;
  byte in_CF;
  
  FUN_000100fe();
  FUN_0002b3cc();
  bVar1 = DAT_0000aef8 & 0x40;
  DAT_000032e9 = DAT_000032e9 | 4;
  FUN_00023384();
  if ((((bVar1 == 0) << 2 | in_VF << 1 | in_CF) & 4) == 0) {
    DAT_0000aef8 = DAT_0000aef8 | 0x40;
  }
  else {
    DAT_0000aef8 = DAT_0000aef8 & 0xbf;
  }
  FUN_00030fe2();
  DAT_00007780 = 0;
  return;
}



// Function: FUN_0002c236 @ 0002c236

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0002c236(void)

{
  longdouble lVar1;
  undefined4 in_D0;
  char cVar2;
  int in_A0;
  
  cVar2 = (char)in_D0;
  if ((((((longdouble)*(undefined1 (*) [12])(in_A0 + 0x1e) == FLOAT_UNKNOWN) && (cVar2 != '\x03'))
       && (cVar2 != '\x04')) && ((cVar2 != '\x06' && (cVar2 != '\t')))) &&
     (((cVar2 != '\n' && ((cVar2 != '\v' && (cVar2 != '\a')))) && (cVar2 != '\x0e')))) {
    __m68k_trap(0xe);
  }
  if ((((cVar2 != '\0') && (cVar2 != '\x01')) && (cVar2 != '\x02')) &&
     (((cVar2 != '\x05' && (cVar2 != '\b')) && ((cVar2 != '\x06' && (cVar2 != '\f')))))) {
    return in_D0;
  }
  lVar1 = (longdouble)*(undefined1 (*) [12])(in_A0 + 0x2a) - (longdouble)DAT_00000fd8;
  if (lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN) {
    __m68k_trap(0xe);
  }
  lVar1 = (longdouble)*(undefined1 (*) [12])(in_A0 + 0x2a) - (longdouble)DAT_00000fdc;
  if (lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1) {
    __m68k_trap(0xe);
  }
  lVar1 = (longdouble)*(undefined1 (*) [12])(in_A0 + 0x36) - (longdouble)DAT_00000fe0;
  if (lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN) {
    __m68k_trap(0xe);
  }
  lVar1 = (longdouble)*(undefined1 (*) [12])(in_A0 + 0x36) - (longdouble)DAT_00000fe4;
  if (lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1) {
    __m68k_trap(0xe);
  }
  if (((_DAT_0000af58 >> 0x1c != 0) || (DAT_00002988 != 0)) &&
     (lVar1 = (longdouble)*(undefined1 (*) [12])(in_A0 + 0x42), DAT_00000fe8 != -0x80000000)) {
    if (lVar1 - (longdouble)DAT_00000fe8 != FLOAT_UNKNOWN &&
        lVar1 - (longdouble)DAT_00000fe8 < FLOAT_UNKNOWN) {
      __m68k_trap(0xe);
    }
    if (lVar1 - (longdouble)DAT_00000fec != FLOAT_UNKNOWN &&
        FLOAT_UNKNOWN <= lVar1 - (longdouble)DAT_00000fec) {
      if ((ushort)(_DAT_0000af58 >> 0x1c) == 0) {
        if ((DAT_00002988 != 0) &&
           (lVar1 = ((longdouble)DAT_00002758 - lVar1) -
                    (longdouble)(undefined1  [12])0x7e00000000000000,
           lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN)) {
          __m68k_trap(0xe);
        }
      }
      else {
        __m68k_trap(0xe);
      }
    }
  }
  lVar1 = (longdouble)*(undefined1 (*) [12])(in_A0 + 0x4e) - (longdouble)DAT_00000ff0;
  if (lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN) {
    __m68k_trap(0xe);
  }
  lVar1 = (longdouble)*(undefined1 (*) [12])(in_A0 + 0x4e) - (longdouble)DAT_00000ff4;
  if (lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1) {
    __m68k_trap(0xe);
  }
  lVar1 = (longdouble)*(undefined1 (*) [12])(in_A0 + 0x5a) - (longdouble)DAT_00000ff8;
  if (lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN) {
    __m68k_trap(0xe);
  }
  lVar1 = (longdouble)*(undefined1 (*) [12])(in_A0 + 0x5a) - (longdouble)DAT_00000ffc;
  if (lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1) {
    __m68k_trap(0xe);
  }
  return in_D0;
}



// Function: FUN_0002c406 @ 0002c406

undefined4 FUN_0002c406(void)

{
  int iVar1;
  undefined4 in_D0;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  
  piVar6 = &DAT_00000fd8;
  puVar4 = &DAT_0000afdc;
  if (DAT_0000afd8 != 0) {
    if ((int)DAT_0000afd8 < 0) {
      __m68k_trap(0xe);
    }
    else {
      piVar6 = &DAT_00000fe0;
      uVar2 = DAT_00000fdc + DAT_00000fd8;
      if ((int)uVar2 < 0) {
        uVar2 = -uVar2;
      }
      if (0xff < (ushort)(uVar2 / DAT_0000afd8)) {
        __m68k_trap(0xe);
      }
    }
  }
  if ((DAT_01200815 & 0x80) == 0) {
    puVar4 = &DAT_0000afe0;
    if (DAT_0000afdc != 0) {
      if ((int)DAT_0000afdc < 0) {
        __m68k_trap(0xe);
      }
      else {
        piVar7 = piVar6 + 1;
        iVar1 = *piVar6;
        piVar6 = piVar6 + 2;
        uVar2 = *piVar7 + iVar1;
        if ((int)uVar2 < 0) {
          uVar2 = -uVar2;
        }
        if (0xff < (ushort)(uVar2 / DAT_0000afdc)) {
          __m68k_trap(0xe);
        }
      }
    }
  }
  puVar5 = puVar4;
  if ((DAT_01200815 & 0x80) == 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      if ((int)uVar2 < 0) {
        __m68k_trap(0xe);
      }
      else {
        piVar7 = piVar6 + 1;
        iVar1 = *piVar6;
        piVar6 = piVar6 + 2;
        uVar3 = *piVar7 + iVar1;
        if ((int)uVar3 < 0) {
          uVar3 = -uVar3;
        }
        if (0xff < (ushort)(uVar3 / uVar2)) {
          __m68k_trap(0xe);
        }
      }
    }
  }
  if ((DAT_01200815 & 0x80) == 0) {
    uVar2 = *puVar5;
    if (uVar2 != 0) {
      if ((int)uVar2 < 0) {
        __m68k_trap(0xe);
      }
      else {
        uVar3 = piVar6[1] + *piVar6;
        if ((int)uVar3 < 0) {
          uVar3 = -uVar3;
        }
        if (0xff < (ushort)(uVar3 / uVar2)) {
          __m68k_trap(0xe);
        }
      }
    }
  }
  return in_D0;
}



// Function: FUN_0002c9c6 @ 0002c9c6

undefined8 FUN_0002c9c6(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  undefined4 unaff_D2;
  undefined4 unaff_D3;
  undefined4 unaff_D4;
  undefined4 unaff_D5;
  undefined4 unaff_D6;
  undefined4 unaff_D7;
  undefined4 in_A0;
  undefined4 in_A1;
  undefined4 unaff_A2;
  undefined4 unaff_A3;
  undefined4 unaff_A4;
  undefined4 unaff_A5;
  undefined4 unaff_A6;
  undefined4 in_stack_00000000;
  
  DAT_0000a25c = in_stack_00000000;
  DAT_0000a21c = in_D0;
  DAT_0000a220 = in_D1;
  DAT_0000a224 = unaff_D2;
  DAT_0000a228 = unaff_D3;
  DAT_0000a22c = unaff_D4;
  DAT_0000a230 = unaff_D5;
  DAT_0000a234 = unaff_D6;
  DAT_0000a238 = unaff_D7;
  DAT_0000a23c = in_A0;
  DAT_0000a240 = in_A1;
  DAT_0000a244 = unaff_A2;
  DAT_0000a248 = unaff_A3;
  DAT_0000a24c = unaff_A4;
  DAT_0000a250 = unaff_A5;
  DAT_0000a254 = unaff_A6;
  DAT_0000a258 = &stack0x00000004;
  return CONCAT44(DAT_0000a1dc,DAT_0000a1e0);
}



// Function: FUN_0002c9de @ 0002c9de

undefined8 FUN_0002c9de(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_D0;
  undefined4 in_D1;
  undefined4 unaff_D2;
  undefined4 unaff_D3;
  undefined4 unaff_D4;
  undefined4 unaff_D5;
  undefined4 unaff_D6;
  undefined4 unaff_D7;
  undefined4 in_A0;
  undefined4 in_A1;
  undefined4 unaff_A2;
  undefined4 unaff_A3;
  undefined4 unaff_A4;
  undefined4 unaff_A5;
  undefined4 unaff_A6;
  
  uVar2 = DAT_0000a220;
  uVar1 = DAT_0000a21c;
  DAT_0000a1dc = in_D0;
  DAT_0000a1e0 = in_D1;
  DAT_0000a1e4 = unaff_D2;
  DAT_0000a1e8 = unaff_D3;
  DAT_0000a1ec = unaff_D4;
  DAT_0000a1f0 = unaff_D5;
  DAT_0000a1f4 = unaff_D6;
  DAT_0000a1f8 = unaff_D7;
  DAT_0000a1fc = in_A0;
  DAT_0000a200 = in_A1;
  DAT_0000a204 = unaff_A2;
  DAT_0000a208 = unaff_A3;
  DAT_0000a20c = unaff_A4;
  DAT_0000a210 = unaff_A5;
  DAT_0000a214 = unaff_A6;
  DAT_0000a218 = (undefined1 *)register0x0000003c;
  *(undefined4 *)(DAT_0000a258 + -4) = DAT_0000a25c;
  return CONCAT44(uVar1,uVar2);
}



// Function: FUN_0002c9f6 @ 0002c9f6

void FUN_0002c9f6(void)

{
  undefined2 *extraout_A0;
  
  FUN_0002b40a();
  FUN_0000ddf2();
  *extraout_A0 = 0;
  DAT_0000a25c = 0;
  *(undefined4 *)(DAT_0000a218 + -4) = 0x2ca1c;
  FUN_0002cbde();
  return;
}



// Function: FUN_0002ca1e @ 0002ca1e

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0002ca1e(void)

{
  ushort uVar1;
  undefined2 extraout_D0u;
  uint in_D0;
  ushort uVar2;
  undefined4 in_D1;
  short sVar3;
  short sVar4;
  undefined4 unaff_D2;
  undefined4 unaff_D3;
  undefined4 unaff_D4;
  undefined4 unaff_D5;
  undefined4 unaff_D6;
  undefined4 unaff_D7;
  int in_A0;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  short *psVar5;
  ushort *extraout_A0_02;
  ushort *extraout_A0_03;
  ushort *extraout_A0_04;
  undefined4 in_A1;
  int *piVar6;
  undefined4 unaff_A2;
  undefined4 unaff_A3;
  undefined4 unaff_A4;
  undefined4 unaff_A5;
  undefined4 unaff_A6;
  bool bVar7;
  
  DAT_000005c0 = DAT_000005bc;
  DAT_0000a1dc = in_D0;
  DAT_0000a1e0 = in_D1;
  DAT_0000a1e4 = unaff_D2;
  DAT_0000a1e8 = unaff_D3;
  DAT_0000a1ec = unaff_D4;
  DAT_0000a1f0 = unaff_D5;
  DAT_0000a1f4 = unaff_D6;
  DAT_0000a1f8 = unaff_D7;
  DAT_0000a1fc = in_A0;
  DAT_0000a200 = in_A1;
  DAT_0000a204 = unaff_A2;
  DAT_0000a208 = unaff_A3;
  DAT_0000a20c = unaff_A4;
  DAT_0000a210 = unaff_A5;
  DAT_0000a214 = unaff_A6;
  DAT_0000a218 = (undefined1 *)register0x0000003c;
  if (DAT_00007780 != 5) {
    DAT_0000a658 = 0x2ca40;
    in_D0 = FUN_0001b4d4();
    *(undefined1 *)(extraout_A0 + 0x1d4) = 0;
    in_A0 = extraout_A0;
  }
  if ((in_D0 & 4) == 0) {
    DAT_0000aef8 = DAT_0000aef8 & 0x7f;
  }
  else {
    DAT_0000aef8 = DAT_0000aef8 | 0x80;
  }
  if ((in_D0 & 8) != 0) {
    DAT_0000a654 = 0x2ca6a;
    DAT_0000a658 = in_D0;
    FUN_0002fbfc();
    in_D0 = DAT_0000a658;
    in_A0 = extraout_A0_00;
  }
  if ((in_D0 & 0x100) != 0) {
    DAT_0000a654 = 0x2ca7a;
    DAT_0000a658 = in_D0;
    FUN_0002d9e0();
    in_D0 = DAT_0000a658;
    in_A0 = extraout_A0_01;
  }
  if ((in_D0 & 0x2000) != 0) {
    if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3) {
      piVar6 = &DAT_0002d572;
      if (DAT_00007780 == 5) {
        psVar5 = &DAT_0002d546;
        sVar4 = 0x15;
        sVar3 = sVar4;
      }
      else {
        psVar5 = (short *)&DAT_0002d312;
        sVar4 = 0x119;
        sVar3 = sVar4;
      }
    }
    else {
      piVar6 = (int *)&DAT_0002ce7e;
      if (DAT_00007780 == 5) {
        psVar5 = (short *)&DAT_0002ce40;
        sVar4 = 0x1e;
        sVar3 = sVar4;
      }
      else {
        psVar5 = (short *)&DAT_0002cbf8;
        sVar4 = 0x123;
        sVar3 = sVar4;
      }
    }
    do {
      if (0xffff < *(uint *)(in_A0 + 6)) {
        __m68k_trap(0xe);
        goto LAB_0002cb78;
      }
      bVar7 = (short)*(uint *)(in_A0 + 6) != *psVar5;
    } while ((bVar7) && (sVar4 = sVar4 + -1, psVar5 = psVar5 + 1, sVar4 != -1));
    if (bVar7) {
      if ((DAT_00007780 != 5) && ((short)((uint)(_DAT_0000af58 << 0x1c) >> 0x10) == 0x1000)) {
        DAT_0000a658 = 0x2cb2a;
        FUN_000320b0();
      }
    }
    else {
      DAT_0000a658 = 0x2cb0c;
      (*(code *)(*piVar6 + (short)(sVar3 - sVar4) * 4))();
    }
  }
  if (DAT_00007780 != 5) {
    DAT_0000a658 = 0x2cb3c;
    FUN_0000ddf2();
    DAT_0000a658 = CONCAT22(extraout_D0u,*extraout_A0_02);
    if ((*extraout_A0_02 & 0x1000) != 0 || (DAT_0000c4e4 & 0x1000) != 0) {
      DAT_0000a654 = 0x2cb58;
      FUN_00031016();
    }
  }
  DAT_0000a658 = 0x2cb64;
  FUN_0000ddf2();
  if (((*extraout_A0_03 & 0x80) != 0) && ((*extraout_A0_03 & 0x4000) != 0)) {
    DAT_0000a658 = 0x2cb78;
    FUN_00030d20();
  }
LAB_0002cb78:
  DAT_000005bc = DAT_000005c0;
  if (DAT_00007780 != 5) {
    DAT_0000a658 = 0x2cb8e;
    FUN_0000ddf2();
    DAT_00009fda = *(undefined4 *)extraout_A0_04;
    DAT_00009fde = extraout_A0_04[2];
    DAT_00009fe0 = *(undefined4 *)(extraout_A0_04 + 3);
    uVar1 = *extraout_A0_04;
    uVar2 = uVar1 & 0xcef7;
    if ((uVar1 & 0x2000) != 0) {
      uVar2 = uVar1 & 0x8ef7;
    }
    *extraout_A0_04 = uVar2 & 0xff3f;
    bVar7 = (uVar2 & 0xff3f) == 0;
    DAT_0000a658 = 0x2cbc6;
    FUN_0002cbde();
    if (!bVar7) {
      DAT_0000a658 = 0x2cbce;
      FUN_000311a2();
    }
  }
  DAT_0000a25c = 0;
  return CONCAT44(DAT_0000a1dc,DAT_0000a1e0);
}



// Function: FUN_0002cbde @ 0002cbde

void FUN_0002cbde(void)

{
  byte bVar1;
  
  bVar1 = DAT_00007784 & 2;
  DAT_00007784 = DAT_00007784 & 0xfd;
  if (bVar1 != 0) {
    FUN_00046fe2();
    FUN_00016dc4();
  }
  return;
}



// Function: FUN_0002d9e0 @ 0002d9e0

void FUN_0002d9e0(void)

{
  ushort uVar1;
  uint extraout_D1;
  ushort *in_A0;
  ushort *extraout_A0;
  
  if (DAT_00007780 != 5) {
    do {
      FUN_0002c9c6();
      in_A0 = extraout_A0;
    } while (DAT_00007778 <= extraout_D1);
  }
  uVar1 = *in_A0;
  if ((((uVar1 & 0x1000) == 0) && ((uVar1 & 0x2000) == 0)) && ((uVar1 & 0x4000) != 0)) {
    FUN_00030d20();
  }
  return;
}



// Function: FUN_0002e1d8 @ 0002e1d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002e1d8(void)

{
  byte bVar1;
  
  bVar1 = DAT_00007784;
  if ((DAT_00003252 & 4) != 0) {
    DAT_0000c45c = DAT_0000aecc;
  }
  DAT_0000aecc = 0;
  DAT_00003254 = 0;
  DAT_000031ee = DAT_000031ee & 0xf3;
  DAT_00007784 = DAT_00007784 & 0xf7;
  if (((byte)DAT_0000c536 & 4) == 0) {
    DAT_00007784 = bVar1 & 0xf3;
  }
  DAT_00007785 = DAT_00007785 & 0x3f;
  DAT_00007784 = DAT_00007784 & 0x5f;
  FUN_00030f56();
  FUN_0002f5d4();
  if ((short)((uint)(_DAT_0000af58 << 0x1c) >> 0x10) == 0x1000) {
    FUN_000320b0();
  }
  return;
}



// Function: FUN_0002e25e @ 0002e25e

void FUN_0002e25e(void)

{
  undefined2 in_D0w;
  undefined4 in_D1;
  uint uVar1;
  uint extraout_D1;
  undefined6 uVar2;
  
  uVar2 = CONCAT24(in_D0w,in_D1);
  while( true ) {
    uVar1 = (uint)uVar2;
    if (((DAT_00003261 & 0x80) != 0) && ((DAT_00003261 & 0x40) == 0)) {
      DAT_00003260 = (byte)((uint6)uVar2 >> 0x20) | 0x80;
      goto LAB_0002e286;
    }
    if (uVar1 < DAT_00007778) break;
    uVar2 = FUN_0002c9c6();
  }
  goto LAB_0002e2b2;
  while (((FUN_0002c9c6(), uVar1 = extraout_D1, (DAT_00003260 & 0x80) != 0 ||
          ((DAT_00003261 & 0x80) == 0)) || ((DAT_00003261 & 0x40) != 0))) {
LAB_0002e286:
    if (uVar1 < DAT_00007778) goto LAB_0002e2b2;
  }
  if ((DAT_00003261 & 1) == 0) {
    return;
  }
LAB_0002e2b2:
  __m68k_trap(0xe);
  __m68k_trap(0xe);
  return;
}



// Function: FUN_0002e27c @ 0002e27c

void FUN_0002e27c(void)

{
  byte in_D0b;
  uint in_D1;
  uint extraout_D1;
  
  DAT_00003260 = in_D0b | 0x80;
  do {
    if (in_D1 < DAT_00007778) goto LAB_0002e2b2;
    FUN_0002c9c6();
    in_D1 = extraout_D1;
  } while ((((DAT_00003260 & 0x80) != 0) || ((DAT_00003261 & 0x80) == 0)) ||
          ((DAT_00003261 & 0x40) != 0));
  if ((DAT_00003261 & 1) != 0) {
LAB_0002e2b2:
    __m68k_trap(0xe);
    __m68k_trap(0xe);
  }
  return;
}



// Function: FUN_0002e3a6 @ 0002e3a6

int FUN_0002e3a6(void)

{
  return (int)(char)(DAT_00003278 | DAT_00003277 << 4);
}



// Function: FUN_0002ecee @ 0002ecee

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002ecee(void)

{
  short in_D0w;
  short sVar1;
  int extraout_A0;
  longdouble extraout_FP0;
  longdouble lVar2;
  
  DAT_0000a664 = DAT_0000a664 | 4;
  _DAT_00009f70 =
       (undefined1  [12])
       (longdouble)*(undefined1 (*) [12])(&DAT_0000a666 + (uint)(ushort)(in_D0w - 1) * 0xc);
  _DAT_0000ac66 =
       (undefined1  [12])
       ((((longdouble)_DAT_00003e6c - (longdouble)_DAT_00003e30) + (longdouble)_DAT_0000aca2) -
       (longdouble)*(undefined1 (*) [12])(&DAT_0000a666 + (uint)(ushort)(in_D0w - 1) * 0xc));
  sVar1 = FUN_0000ddf2();
  *(undefined1 (*) [12])(extraout_A0 + 0xbe) = (undefined1  [12])extraout_FP0;
  if (DAT_00007780 == 5) {
    lVar2 = (longdouble)_DAT_0000409a;
  }
  else {
    lVar2 = (longdouble)*(undefined1 (*) [12])(&DAT_0000a786 + sVar1);
    _DAT_0000409a = (undefined1  [12])lVar2;
  }
  _DAT_00009f7c = (undefined1  [12])lVar2;
  _DAT_00003d88 = (undefined1  [12])(lVar2 / (longdouble)2);
  return;
}



// Function: FUN_0002ed82 @ 0002ed82

void FUN_0002ed82(void)

{
  DAT_00003260 = 0x84;
  do {
    FUN_0002c9c6();
  } while ((DAT_00003260 & 0x80) != 0);
  FUN_0002e1d8();
  FUN_0002f5d4();
  DAT_00007784 = DAT_00007784 & 0xfe;
  FUN_0002c9f6();
  return;
}



// Function: FUN_0002ee9a @ 0002ee9a

/* WARNING: This function may have set the stack pointer */

void FUN_0002ee9a(void)

{
  undefined4 in_D0;
  uint uVar1;
  undefined4 in_D1;
  undefined4 unaff_D2;
  undefined4 unaff_D3;
  undefined4 unaff_D4;
  undefined4 unaff_D5;
  undefined4 unaff_D6;
  undefined4 unaff_D7;
  undefined4 in_A0;
  undefined4 in_A1;
  undefined4 unaff_A2;
  undefined4 unaff_A3;
  undefined4 unaff_A4;
  undefined4 unaff_A5;
  undefined4 unaff_A6;
  bool bVar2;
  
  DAT_0000a1dc = in_D0;
  DAT_0000a1e0 = in_D1;
  DAT_0000a1e4 = unaff_D2;
  DAT_0000a1e8 = unaff_D3;
  DAT_0000a1ec = unaff_D4;
  DAT_0000a1f0 = unaff_D5;
  DAT_0000a1f4 = unaff_D6;
  DAT_0000a1f8 = unaff_D7;
  DAT_0000a1fc = in_A0;
  DAT_0000a200 = in_A1;
  DAT_0000a204 = unaff_A2;
  DAT_0000a208 = unaff_A3;
  DAT_0000a20c = unaff_A4;
  DAT_0000a210 = unaff_A5;
  DAT_0000a214 = unaff_A6;
  DAT_0000a218 = (undefined1 *)register0x0000003c;
  if ((DAT_0000c547 & 1) == 0) {
    if ((DAT_00003268 & 4) == 0) {
      DAT_00003269 = DAT_0000326a | 1;
      DAT_00003260 = 0x81;
      do {
        DAT_0000a658 = 0x2eeda;
        FUN_0002c9c6();
      } while ((DAT_00003260 & 0x80) != 0);
      do {
        DAT_0000a658 = 0x2eef0;
        uVar1 = FUN_0002c9c6();
      } while (DAT_00007778 <= uVar1);
      DAT_00003269 = DAT_00003269 & 0xfb;
      DAT_00003269 = DAT_00003269 | 2;
      DAT_00003260 = 0x81;
      do {
        DAT_0000a658 = 0x2ef12;
        FUN_0002c9c6();
      } while ((DAT_00003260 & 0x80) != 0);
      do {
        if ((DAT_00003268 & 4) != 0) break;
        DAT_0000a658 = 0x2ef30;
        uVar1 = FUN_0002c9c6();
      } while (DAT_00007778 <= uVar1);
      DAT_00003269 = DAT_00003269 & 0xfc;
      DAT_00003260 = 0x81;
      do {
        DAT_0000a658 = 0x2ef52;
        FUN_0002c9c6();
      } while ((DAT_00003260 & 0x80) != 0);
    }
  }
  else if (((DAT_0000c545 & 2) != 0) && ((DAT_0000c525 & 0x10) != 0)) {
    DAT_0002855c = 0x4d393034;
    DAT_0000a658 = 0x2ef82;
    FUN_00028562();
    bVar2 = false;
    if ((DAT_00007784 & 0x10) == 0) {
      bVar2 = ((byte)DAT_0000c536 & 0x80) == 0;
    }
    while (bVar2) {
      DAT_0000a658 = 0x2ef98;
      FUN_0002c9c6();
      bVar2 = (DAT_00007785 & 0x10) == 0 && (DAT_00007784 & 0x10) == 0;
    }
  }
  DAT_0000a25c = 0;
  *(undefined4 *)(DAT_0000a218 + -4) = 0x2ca1c;
  FUN_0002cbde();
  return;
}



// Function: FUN_0002efac @ 0002efac

/* WARNING: This function may have set the stack pointer */

void FUN_0002efac(void)

{
  undefined4 in_D0;
  uint uVar1;
  undefined4 in_D1;
  undefined4 unaff_D2;
  undefined4 unaff_D3;
  undefined4 unaff_D4;
  undefined4 unaff_D5;
  undefined4 unaff_D6;
  undefined4 unaff_D7;
  undefined4 in_A0;
  undefined4 in_A1;
  undefined4 unaff_A2;
  undefined4 unaff_A3;
  undefined4 unaff_A4;
  undefined4 unaff_A5;
  undefined4 unaff_A6;
  bool bVar2;
  
  DAT_0000a1dc = in_D0;
  DAT_0000a1e0 = in_D1;
  DAT_0000a1e4 = unaff_D2;
  DAT_0000a1e8 = unaff_D3;
  DAT_0000a1ec = unaff_D4;
  DAT_0000a1f0 = unaff_D5;
  DAT_0000a1f4 = unaff_D6;
  DAT_0000a1f8 = unaff_D7;
  DAT_0000a1fc = in_A0;
  DAT_0000a200 = in_A1;
  DAT_0000a204 = unaff_A2;
  DAT_0000a208 = unaff_A3;
  DAT_0000a20c = unaff_A4;
  DAT_0000a210 = unaff_A5;
  DAT_0000a214 = unaff_A6;
  DAT_0000a218 = (undefined1 *)register0x0000003c;
  if ((DAT_0000c547 & 1) == 0) {
    if ((DAT_00003268 & 8) == 0) {
      DAT_00003269 = DAT_0000326a | 1;
      DAT_00003260 = 0x81;
      do {
        DAT_0000a658 = 0x2efec;
        FUN_0002c9c6();
      } while ((DAT_00003260 & 0x80) != 0);
      do {
        DAT_0000a658 = 0x2f002;
        uVar1 = FUN_0002c9c6();
      } while (DAT_00007778 <= uVar1);
      DAT_00003269 = DAT_00003269 & 0xfd;
      DAT_00003269 = DAT_00003269 | 4;
      DAT_00003260 = 0x81;
      do {
        DAT_0000a658 = 0x2f024;
        FUN_0002c9c6();
      } while ((DAT_00003260 & 0x80) != 0);
      do {
        if ((DAT_00003268 & 8) != 0) break;
        DAT_0000a658 = 0x2f042;
        uVar1 = FUN_0002c9c6();
      } while (DAT_00007778 <= uVar1);
      DAT_00003269 = DAT_00003269 & 0xfa;
      DAT_00003260 = 0x81;
      do {
        DAT_0000a658 = 0x2f064;
        FUN_0002c9c6();
      } while ((DAT_00003260 & 0x80) != 0);
    }
  }
  else if (((DAT_0000c545 & 2) != 0) && ((DAT_0000c525 & 0x20) != 0)) {
    DAT_0002855c = 0x4d393035;
    DAT_0000a658 = 0x2f094;
    FUN_00028562();
    bVar2 = false;
    if ((DAT_00007784 & 0x10) == 0) {
      bVar2 = ((byte)DAT_0000c536 & 0x80) == 0;
    }
    while (bVar2) {
      DAT_0000a658 = 0x2f0aa;
      FUN_0002c9c6();
      bVar2 = (DAT_00007785 & 0x10) == 0 && (DAT_00007784 & 0x10) == 0;
    }
  }
  DAT_0000a25c = 0;
  *(undefined4 *)(DAT_0000a218 + -4) = 0x2ca1c;
  FUN_0002cbde();
  return;
}



// Function: FUN_0002f0be @ 0002f0be

/* WARNING: This function may have set the stack pointer */

void FUN_0002f0be(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  undefined4 unaff_D2;
  undefined4 unaff_D3;
  undefined4 unaff_D4;
  undefined4 unaff_D5;
  undefined4 unaff_D6;
  undefined4 unaff_D7;
  undefined4 in_A0;
  undefined4 in_A1;
  undefined4 unaff_A2;
  undefined4 unaff_A3;
  undefined4 unaff_A4;
  undefined4 unaff_A5;
  undefined4 unaff_A6;
  bool bVar1;
  
  DAT_0000a1dc = in_D0;
  DAT_0000a1e0 = in_D1;
  DAT_0000a1e4 = unaff_D2;
  DAT_0000a1e8 = unaff_D3;
  DAT_0000a1ec = unaff_D4;
  DAT_0000a1f0 = unaff_D5;
  DAT_0000a1f4 = unaff_D6;
  DAT_0000a1f8 = unaff_D7;
  DAT_0000a1fc = in_A0;
  DAT_0000a200 = in_A1;
  DAT_0000a204 = unaff_A2;
  DAT_0000a208 = unaff_A3;
  DAT_0000a20c = unaff_A4;
  DAT_0000a210 = unaff_A5;
  DAT_0000a214 = unaff_A6;
  DAT_0000a218 = (undefined1 *)register0x0000003c;
  if ((DAT_0000c547 & 1) == 0) {
    DAT_00003266 = (undefined1)in_D0;
    bVar1 = false;
    DAT_0000a658 = 0x2f0ec;
    FUN_0002e25e();
    if (!bVar1) {
      __m68k_trap(0xe);
      FUN_0002ed82();
      return;
    }
  }
  else if (((DAT_0000c545 & 2) != 0) && ((DAT_0000c525 & 4) != 0)) {
    DAT_0002855c = 0x4d393032;
    DAT_0000a658 = 0x2f124;
    FUN_00028562();
    bVar1 = false;
    if ((DAT_00007784 & 0x10) == 0) {
      bVar1 = ((byte)DAT_0000c536 & 0x80) == 0;
    }
    while (bVar1) {
      DAT_0000a658 = 0x2f13a;
      FUN_0002c9c6();
      bVar1 = (DAT_00007785 & 0x10) == 0 && (DAT_00007784 & 0x10) == 0;
    }
  }
  DAT_0000a25c = 0;
  *(undefined4 *)(DAT_0000a218 + -4) = 0x2ca1c;
  FUN_0002cbde();
  return;
}



// Function: FUN_0002f14e @ 0002f14e

/* WARNING: This function may have set the stack pointer */

void FUN_0002f14e(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  undefined4 unaff_D2;
  undefined4 unaff_D3;
  undefined4 unaff_D4;
  undefined4 unaff_D5;
  undefined4 unaff_D6;
  undefined4 unaff_D7;
  undefined4 in_A0;
  undefined4 in_A1;
  undefined4 unaff_A2;
  undefined4 unaff_A3;
  undefined4 unaff_A4;
  undefined4 unaff_A5;
  undefined4 unaff_A6;
  bool bVar1;
  
  DAT_0000a1dc = in_D0;
  DAT_0000a1e0 = in_D1;
  DAT_0000a1e4 = unaff_D2;
  DAT_0000a1e8 = unaff_D3;
  DAT_0000a1ec = unaff_D4;
  DAT_0000a1f0 = unaff_D5;
  DAT_0000a1f4 = unaff_D6;
  DAT_0000a1f8 = unaff_D7;
  DAT_0000a1fc = in_A0;
  DAT_0000a200 = in_A1;
  DAT_0000a204 = unaff_A2;
  DAT_0000a208 = unaff_A3;
  DAT_0000a20c = unaff_A4;
  DAT_0000a210 = unaff_A5;
  DAT_0000a214 = unaff_A6;
  DAT_0000a218 = (undefined1 *)register0x0000003c;
  if ((DAT_0000c547 & 1) == 0) {
    DAT_00003266 = (undefined1)in_D0;
    bVar1 = false;
    DAT_0000a658 = 0x2f17c;
    FUN_0002e25e();
    if (!bVar1) {
      __m68k_trap(0xe);
      FUN_0002ed82();
      return;
    }
  }
  else if (((DAT_0000c545 & 2) != 0) && ((DAT_0000c525 & 8) != 0)) {
    DAT_0002855c = 0x4d393033;
    DAT_0000a658 = 0x2f1b4;
    FUN_00028562();
    bVar1 = false;
    if ((DAT_00007784 & 0x10) == 0) {
      bVar1 = ((byte)DAT_0000c536 & 0x80) == 0;
    }
    while (bVar1) {
      DAT_0000a658 = 0x2f1ca;
      FUN_0002c9c6();
      bVar1 = (DAT_00007785 & 0x10) == 0 && (DAT_00007784 & 0x10) == 0;
    }
  }
  DAT_0000a25c = 0;
  *(undefined4 *)(DAT_0000a218 + -4) = 0x2ca1c;
  FUN_0002cbde();
  return;
}



// Function: FUN_0002f1f6 @ 0002f1f6

/* WARNING: This function may have set the stack pointer */

undefined8 FUN_0002f1f6(void)

{
  undefined4 in_D0;
  uint uVar1;
  undefined4 in_D1;
  undefined4 unaff_D2;
  undefined4 unaff_D3;
  undefined4 unaff_D4;
  undefined4 unaff_D5;
  undefined4 unaff_D6;
  undefined4 unaff_D7;
  undefined4 in_A0;
  undefined4 in_A1;
  undefined4 unaff_A2;
  undefined4 unaff_A3;
  undefined4 unaff_A4;
  undefined4 unaff_A5;
  undefined4 unaff_A6;
  
  DAT_0000a1dc = in_D0;
  DAT_0000a1e0 = in_D1;
  DAT_0000a1e4 = unaff_D2;
  DAT_0000a1e8 = unaff_D3;
  DAT_0000a1ec = unaff_D4;
  DAT_0000a1f0 = unaff_D5;
  DAT_0000a1f4 = unaff_D6;
  DAT_0000a1f8 = unaff_D7;
  DAT_0000a1fc = in_A0;
  DAT_0000a200 = in_A1;
  DAT_0000a204 = unaff_A2;
  DAT_0000a208 = unaff_A3;
  DAT_0000a20c = unaff_A4;
  DAT_0000a210 = unaff_A5;
  DAT_0000a214 = unaff_A6;
  DAT_0000a218 = (undefined1 *)register0x0000003c;
  if ((DAT_0000c547 & 1) == 0) {
    DAT_00003269 = DAT_0000326a | 0x60;
    DAT_00003260 = 0x81;
    do {
      DAT_0000a658 = 0x2f238;
      FUN_0002c9c6();
    } while ((DAT_00003260 & 0x80) != 0);
    do {
      DAT_0000a658 = 0x2f244;
      uVar1 = FUN_0002c9c6();
    } while (DAT_00007778 <= uVar1);
    DAT_00003269 = DAT_00003269 & 0xbf;
    DAT_00003260 = 0x81;
    do {
      DAT_0000a658 = 0x2f260;
      FUN_0002c9c6();
    } while ((DAT_00003260 & 0x80) != 0);
  }
  else if ((DAT_0000c545 & 2) != 0) {
    DAT_000031f4 = DAT_000031f4 | 6;
    do {
      DAT_0000a658 = 0x2f28e;
      uVar1 = FUN_0002c9c6();
    } while (DAT_00007778 <= uVar1);
    DAT_000031f4 = DAT_000031f4 & 0xfd;
  }
  DAT_0000a25c = 0;
  return CONCAT44(DAT_0000a1dc,DAT_0000a1e0);
}



// Function: FUN_0002f332 @ 0002f332

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002f332(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  undefined4 unaff_D2;
  undefined4 unaff_D3;
  undefined4 unaff_D4;
  undefined4 unaff_D5;
  undefined4 unaff_D6;
  undefined4 unaff_D7;
  undefined4 in_A0;
  undefined4 in_A1;
  undefined4 unaff_A2;
  undefined4 unaff_A3;
  undefined4 unaff_A4;
  undefined4 unaff_A5;
  undefined4 unaff_A6;
  
  DAT_0000a1dc = in_D0;
  DAT_0000a1e0 = in_D1;
  DAT_0000a1e4 = unaff_D2;
  DAT_0000a1e8 = unaff_D3;
  DAT_0000a1ec = unaff_D4;
  DAT_0000a1f0 = unaff_D5;
  DAT_0000a1f4 = unaff_D6;
  DAT_0000a1f8 = unaff_D7;
  DAT_0000a1fc = in_A0;
  DAT_0000a200 = in_A1;
  DAT_0000a204 = unaff_A2;
  DAT_0000a208 = unaff_A3;
  DAT_0000a20c = unaff_A4;
  DAT_0000a210 = unaff_A5;
  DAT_0000a214 = unaff_A6;
  DAT_0000a218 = (undefined1 *)register0x0000003c;
  if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3) {
    DAT_0000a658 = 0x2f354;
    FUN_000308a2();
  }
  else {
    DAT_0000a658 = 0x2f35a;
    FUN_0002e1d8();
  }
  DAT_0000a25c = 0;
  *(undefined4 *)(DAT_0000a218 + -4) = 0x2ca1c;
  FUN_0002cbde();
  return;
}



// Function: FUN_0002f35e @ 0002f35e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002f35e(void)

{
  if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3) {
    FUN_00030944();
  }
  else {
    FUN_0002f4e0();
  }
  return;
}



// Function: FUN_0002f37c @ 0002f37c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002f37c(void)

{
  if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3) {
    FUN_00030916();
  }
  else {
    FUN_0002f494();
  }
  return;
}



// Function: FUN_0002f39a @ 0002f39a

void FUN_0002f39a(void)

{
  undefined4 in_D0;
  undefined4 in_D1;
  uint uVar1;
  uint extraout_D1;
  undefined4 unaff_D2;
  undefined4 unaff_D3;
  undefined4 unaff_D4;
  undefined4 unaff_D5;
  undefined4 unaff_D6;
  undefined4 unaff_D7;
  undefined4 in_A0;
  undefined4 in_A1;
  undefined4 unaff_A2;
  undefined4 unaff_A3;
  undefined4 unaff_A4;
  undefined4 unaff_A5;
  undefined4 unaff_A6;
  undefined1 *puVar2;
  bool bVar3;
  
  if ((DAT_000031e2 & 1) != 0) {
    return;
  }
  if ((&stack0x00000000 < (undefined1 *)0xa260) ||
     (puVar2 = (undefined1 *)register0x0000003c, &DAT_0000a65c < &stack0x00000000)) {
    puVar2 = &DAT_0000a65c;
    DAT_0000a1dc = in_D0;
    DAT_0000a1e0 = in_D1;
    DAT_0000a1e4 = unaff_D2;
    DAT_0000a1e8 = unaff_D3;
    DAT_0000a1ec = unaff_D4;
    DAT_0000a1f0 = unaff_D5;
    DAT_0000a1f4 = unaff_D6;
    DAT_0000a1f8 = unaff_D7;
    DAT_0000a1fc = in_A0;
    DAT_0000a200 = in_A1;
    DAT_0000a204 = unaff_A2;
    DAT_0000a208 = unaff_A3;
    DAT_0000a20c = unaff_A4;
    DAT_0000a210 = unaff_A5;
    DAT_0000a214 = unaff_A6;
    DAT_0000a218 = (undefined1 *)register0x0000003c;
  }
  *(undefined4 *)(puVar2 + -4) = 0x2f3c6;
  FUN_0002c9c6();
  bVar3 = false;
  *(undefined4 *)(puVar2 + -4) = 0x2f3d8;
  FUN_0002e27c();
  if (!bVar3) {
    *(ushort *)(puVar2 + -2) = (ushort)DAT_00003261;
    __m68k_trap(0xe);
  }
  uVar1 = DAT_00007778 + 10;
  while (DAT_00007778 < uVar1) {
    *(undefined4 *)(puVar2 + -4) = 0x2f402;
    FUN_0002c9c6();
    uVar1 = extraout_D1;
  }
  bVar3 = false;
  *(undefined4 *)(puVar2 + -4) = 0x2f416;
  FUN_0002e25e();
  if (!bVar3) {
    *(ushort *)(puVar2 + -2) = (ushort)DAT_00003261;
    __m68k_trap(0xe);
  }
  DAT_0000a25c = 0;
  *(undefined4 *)(DAT_0000a218 + -4) = 0x2ca1c;
  FUN_0002cbde();
  return;
}



// Function: FUN_0002f494 @ 0002f494

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002f494(void)

{
  DAT_0000aefa = DAT_0000aefa | 2;
  DAT_000031ee = DAT_000031ee | 8;
  DAT_00007784 = DAT_00007784 & 0xf7;
  if ((short)((uint)(_DAT_0000af58 << 0x1c) >> 0x10) == 0x1000) {
    FUN_000320b0();
  }
  return;
}



// Function: FUN_0002f4e0 @ 0002f4e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002f4e0(void)

{
  DAT_000031ee = DAT_000031ee & 0xf3;
  DAT_0000aefa = DAT_0000aefa & 0xf9;
  if (((DAT_0000af04 != '\0') && ((DAT_00007784 & 1) == 0)) && ((DAT_0000aefb & 0x80) != 0)) {
    DAT_0000aefb = DAT_0000aefb & 0xbf;
    DAT_00003269 = DAT_0000326a & 0x7f;
    DAT_00003260 = 0x81;
  }
  if ((short)((uint)(_DAT_0000af58 << 0x1c) >> 0x10) == 0x1000) {
    FUN_000320b0();
  }
  return;
}



// Function: FUN_0002f568 @ 0002f568

void FUN_0002f568(void)

{
  FUN_00030f56();
  return;
}



// Function: FUN_0002f5d4 @ 0002f5d4

void FUN_0002f5d4(void)

{
  if (((byte)DAT_0000c536 & 4) == 0) {
    DAT_00007784 = DAT_00007784 & 0xfb;
  }
  FUN_00030f56();
  return;
}



// Function: FUN_0002fbfc @ 0002fbfc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002fbfc(void)

{
  char extraout_D1b;
  int extraout_A0;
  int extraout_A0_00;
  longdouble lVar1;
  
  FUN_0000ddf2();
  if ((DAT_000032e5 & 8) != 0) {
    *(undefined1 (*) [12])(extraout_A0 + 0x2a) =
         (undefined1  [12])
         ((longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x2a) - (longdouble)_DAT_00009f88);
  }
  if ((DAT_000032e5 & 0x10) != 0) {
    *(undefined1 (*) [12])(extraout_A0 + 0x36) =
         (undefined1  [12])
         ((longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x36) - (longdouble)_DAT_00009f94);
  }
  if ((DAT_000032e5 & 0x20) != 0) {
    *(undefined1 (*) [12])(extraout_A0 + 0x42) =
         (undefined1  [12])
         ((longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x42) - (longdouble)_DAT_00009fa0);
  }
  if ((DAT_000032e5 & 0x20) != 0) {
    *(undefined1 (*) [12])(extraout_A0 + 0x4e) =
         (undefined1  [12])
         ((longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x4e) - (longdouble)_DAT_00009fac);
  }
  FUN_00020dcc();
  FUN_0000ddf2();
  lVar1 = (longdouble)_DAT_00009f88;
  *(undefined1 (*) [12])(extraout_A0_00 + 0xa6) = (undefined1  [12])lVar1;
  if ((DAT_000032e5 & 8) != 0) {
    lVar1 = (longdouble)*(undefined1 (*) [12])(extraout_A0_00 + 0x2a) + lVar1;
    *(undefined1 (*) [12])(extraout_A0_00 + 0x2a) = (undefined1  [12])lVar1;
    _DAT_000040b2 = (undefined1  [12])lVar1;
    _DAT_00003f0c = (undefined1  [12])(lVar1 - (longdouble)_DAT_0000ac8a);
    _DAT_00004010 = (undefined1  [12])(lVar1 - (longdouble)_DAT_0000ac8a);
  }
  lVar1 = (longdouble)_DAT_00009f94;
  *(undefined1 (*) [12])(extraout_A0_00 + 0xb2) = (undefined1  [12])lVar1;
  if ((DAT_000032e5 & 0x10) != 0) {
    lVar1 = (longdouble)*(undefined1 (*) [12])(extraout_A0_00 + 0x36) + lVar1;
    *(undefined1 (*) [12])(extraout_A0_00 + 0x36) = (undefined1  [12])lVar1;
    _DAT_000040be = (undefined1  [12])lVar1;
    _DAT_00003f30 = (undefined1  [12])(lVar1 - (longdouble)_DAT_0000ac96);
    _DAT_0000401c = (undefined1  [12])(lVar1 - (longdouble)_DAT_0000ac96);
  }
  lVar1 = (longdouble)_DAT_00009fa0;
  *(undefined1 (*) [12])(extraout_A0_00 + 0xbe) = (undefined1  [12])lVar1;
  if ((DAT_000032e5 & 0x20) != 0) {
    lVar1 = (longdouble)*(undefined1 (*) [12])(extraout_A0_00 + 0x42) + lVar1;
    *(undefined1 (*) [12])(extraout_A0_00 + 0x42) = (undefined1  [12])lVar1;
    _DAT_000040ca = (undefined1  [12])lVar1;
    lVar1 = (lVar1 - (longdouble)_DAT_0000aca2) + (longdouble)_DAT_00009f70;
    _DAT_00003f54 = (undefined1  [12])lVar1;
    _DAT_00004028 = (undefined1  [12])lVar1;
  }
  lVar1 = (longdouble)_DAT_00009fac;
  *(undefined1 (*) [12])(extraout_A0_00 + 0xca) = (undefined1  [12])lVar1;
  if ((DAT_000032e5 & 0x20) != 0) {
    lVar1 = (longdouble)*(undefined1 (*) [12])(extraout_A0_00 + 0x4e) + lVar1;
    *(undefined1 (*) [12])(extraout_A0_00 + 0x4e) = (undefined1  [12])lVar1;
    _DAT_000040d6 = (undefined1  [12])lVar1;
    _DAT_00003f78 = (undefined1  [12])(lVar1 - (longdouble)_DAT_0000acae);
    _DAT_00004034 = (undefined1  [12])(lVar1 - (longdouble)_DAT_0000acae);
  }
  if (extraout_D1b != '\0') {
    FUN_000231f0();
  }
  if ((DAT_01200815 & 0x40) != 0) {
    FUN_0002c9f6();
    return;
  }
  return;
}



// Function: FUN_000305ce @ 000305ce

void FUN_000305ce(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  FUN_0003088a();
  if (DAT_00007780 == 2) {
    DAT_00007780 = 4;
  }
  DAT_00000bd9 = DAT_00000bd9 & 0xf7 | 0x10;
  pcVar2 = &DAT_000099e0;
  pcVar3 = &DAT_01200580;
  if (DAT_000099e0 != '\0') {
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    DAT_0000aef9 = DAT_0000aef9 | 0x80;
    DAT_000099e0 = '\0';
    DAT_000099dc = &DAT_000099e0;
  }
  return;
}



// Function: FUN_0003088a @ 0003088a

void FUN_0003088a(void)

{
  ushort *extraout_A0;
  
  FUN_0000ddf2();
  if ((*extraout_A0 & 0x4000) != 0) {
    FUN_00030d20();
  }
  FUN_00032176();
  if (DAT_00007780 == 2) {
    DAT_00007780 = 4;
  }
  DAT_00007785 = DAT_00007785 & 0x7f;
  DAT_00000bd9 = DAT_00000bd9 & 0xf7 | 0x10;
  return;
}



// Function: FUN_000308a2 @ 000308a2

void FUN_000308a2(void)

{
  FUN_00032176();
  if (DAT_00007780 == 2) {
    DAT_00007780 = 4;
  }
  DAT_00007785 = DAT_00007785 & 0x7f;
  DAT_00000bd9 = DAT_00000bd9 & 0xf7 | 0x10;
  return;
}



// Function: FUN_00030916 @ 00030916

void FUN_00030916(void)

{
  DAT_0000aefa = DAT_0000aefa | 2;
  DAT_000031ee = DAT_000031ee | 8;
  DAT_00007784 = DAT_00007784 & 0xf7;
  return;
}



// Function: FUN_00030944 @ 00030944

void FUN_00030944(void)

{
  DAT_000031ee = DAT_000031ee & 0xf3;
  DAT_0000aefa = DAT_0000aefa & 0xf9;
  return;
}



// Function: FUN_00030aac @ 00030aac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00030aac(void)

{
  longdouble lVar1;
  undefined4 in_D0;
  short sVar2;
  int extraout_A0;
  int extraout_A0_00;
  longdouble extraout_FP0;
  longdouble lVar3;
  
  _DAT_00009f70 =
       (undefined1  [12])
       (longdouble)*(undefined1 (*) [12])(&DAT_0000a666 + (uint)(ushort)((short)in_D0 - 1) * 0xc);
  _DAT_0000ac66 =
       (undefined1  [12])
       ((((longdouble)_DAT_00003e6c - (longdouble)_DAT_00003e30) + (longdouble)_DAT_0000aca2) -
       (longdouble)*(undefined1 (*) [12])(&DAT_0000a666 + (uint)(ushort)((short)in_D0 - 1) * 0xc));
  DAT_00009f6c = in_D0;
  sVar2 = FUN_0000ddf2();
  *(undefined1 (*) [12])(extraout_A0 + 0xbe) = (undefined1  [12])extraout_FP0;
  lVar1 = (longdouble)*(undefined1 (*) [12])(&DAT_0000a786 + sVar2);
  _DAT_0000409a = (undefined1  [12])lVar1;
  _DAT_00009f7c = (undefined1  [12])lVar1;
  _DAT_0000ac4e =
       (undefined1  [12])
       ((((longdouble)_DAT_00003e54 - (longdouble)_DAT_00003e18) + (longdouble)_DAT_0000ac8a) -
       lVar1 / (longdouble)2);
  lVar3 = (longdouble)FUN_0000ddf2();
  *(undefined1 (*) [12])(extraout_A0_00 + 0x12) = (undefined1  [12])lVar1;
  *(undefined1 (*) [12])(extraout_A0_00 + 0xa6) = (undefined1  [12])lVar3;
  _DAT_00003d88 = (undefined1  [12])(lVar3 / (longdouble)2);
  return;
}



// Function: FUN_00030b8e @ 00030b8e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00030b8e(void)

{
  _DAT_00003218 = _DAT_000031f4;
  _DAT_0000321c = DAT_000031f0;
  DAT_00003224 = DAT_0000324c;
  DAT_00003220 = DAT_00003248;
  return;
}



// Function: FUN_00030d20 @ 00030d20

void FUN_00030d20(void)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *extraout_A0;
  longdouble lVar3;
  
  FUN_0000e2fa();
  puVar1 = DAT_000005bc;
  if (DAT_00007780 == 5) {
    return;
  }
  uVar2 = *DAT_000005bc;
  if (DAT_00002988 != 0) {
    uVar2 = uVar2 & 0xff7f;
  }
  *DAT_000005bc = uVar2 & 0x7fff;
  if ((uVar2 & 0x80) == 0) {
    FUN_00030eba();
  }
  else if (*(char *)((int)puVar1 + 3) == '\x02') {
    if ((uVar2 & 0x40) == 0) {
      lVar3 = (longdouble)*(undefined1 (*) [12])(puVar1 + 0x21) - (longdouble)DAT_00002758;
      if (lVar3 - (longdouble)(undefined1  [12])0x7e00000000000000 != FLOAT_UNKNOWN &&
          FLOAT_UNKNOWN <= lVar3 - (longdouble)(undefined1  [12])0x7e00000000000000) {
        FUN_00030e5e();
        FUN_00030eb6();
      }
      if (lVar3 - (longdouble)(undefined1  [12])0x7e00000000000000 == FLOAT_UNKNOWN ||
          FLOAT_UNKNOWN <= lVar3 - (longdouble)(undefined1  [12])0x7e00000000000000) {
        FUN_00030eb6();
      }
      else {
        FUN_00030eb6();
        FUN_00030e5e();
      }
    }
    else {
      FUN_00030eb6();
    }
  }
  else if ((uVar2 & 0x40) == 0) {
    lVar3 = ABS((longdouble)*(undefined1 (*) [12])(puVar1 + 0x21) - (longdouble)DAT_00002758) -
            (longdouble)(undefined1  [12])0x7e00000000000000;
    if (lVar3 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar3) {
      FUN_00030e5e();
    }
    FUN_00030eb6();
  }
  else {
    lVar3 = ((longdouble)*(undefined1 (*) [12])(puVar1 + 0x21) - (longdouble)DAT_00002758) -
            (longdouble)(undefined1  [12])0x7e00000000000000;
    if (lVar3 == FLOAT_UNKNOWN || FLOAT_UNKNOWN <= lVar3) {
      FUN_00030e98();
    }
    else {
      FUN_00030e5e();
    }
  }
  FUN_0000ddf2();
  *extraout_A0 = *extraout_A0 & 0xbfff;
  DAT_0000a25c = 0;
  return;
}



// Function: FUN_00030e5e @ 00030e5e

void FUN_00030e5e(void)

{
  while ((DAT_00000bd8 & 0x80) == 0) {
    FUN_0002c9c6();
  }
  DAT_00000bd9 = DAT_00000bd9 | 0x40;
  FUN_00032176();
  FUN_00030e98();
  do {
    FUN_0002c9c6();
  } while ((DAT_00000bd9 & 0x40) != 0);
  return;
}



// Function: FUN_00030e98 @ 00030e98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00030e98(void)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)*(undefined1 (*) [12])(DAT_000005bc + 0x42);
  _DAT_00000c30 = (undefined1  [12])lVar1;
  _DAT_00000c84 = (undefined1  [12])lVar1;
  DAT_00002758 = (int)*(undefined1 (*) [12])(DAT_000005bc + 0x42);
  return;
}



// Function: FUN_00030eb6 @ 00030eb6

void FUN_00030eb6(void)

{
  ushort *puVar1;
  uint extraout_D1;
  ushort *extraout_A0;
  
  FUN_00030e98();
  puVar1 = DAT_000005bc;
  DAT_0000aef8 = DAT_0000aef8 & 0xef;
  DAT_00000bd8 = DAT_00000bd8 & 0x3f;
  DAT_00000bd9 = DAT_00000bd9 & 0xf7 | 0x10;
  *(byte *)(DAT_000005bc + 1) = *(byte *)(DAT_000005bc + 1) | 0x80;
  puVar1[2] = 0;
  *puVar1 = *puVar1 & 0xcf77 | 0xc000;
  DAT_00000bd9 = DAT_00000bd9 | 8;
  do {
    FUN_0002c9c6();
  } while ((*extraout_A0 & 0x8000) != 0);
  do {
    FUN_0002c9c6();
  } while (DAT_00007778 <= extraout_D1);
  do {
    FUN_0002c9c6();
  } while ((DAT_00000bd8 & 0x80) == 0);
  if ((DAT_0000aef9 & 0x10) == 0) {
    return;
  }
  if ((DAT_00007784 & 1) == 0) {
    FUN_0002c9f6();
    return;
  }
  FUN_0002ed82();
  return;
}



// Function: FUN_00030eba @ 00030eba

void FUN_00030eba(void)

{
  ushort *puVar1;
  uint extraout_D1;
  ushort *extraout_A0;
  
  puVar1 = DAT_000005bc;
  DAT_0000aef8 = DAT_0000aef8 & 0xef;
  DAT_00000bd8 = DAT_00000bd8 & 0x3f;
  DAT_00000bd9 = DAT_00000bd9 & 0xf7 | 0x10;
  *(byte *)(DAT_000005bc + 1) = *(byte *)(DAT_000005bc + 1) | 0x80;
  puVar1[2] = 0;
  *puVar1 = *puVar1 & 0xcf77 | 0xc000;
  DAT_00000bd9 = DAT_00000bd9 | 8;
  do {
    FUN_0002c9c6();
  } while ((*extraout_A0 & 0x8000) != 0);
  do {
    FUN_0002c9c6();
  } while (DAT_00007778 <= extraout_D1);
  do {
    FUN_0002c9c6();
  } while ((DAT_00000bd8 & 0x80) == 0);
  if ((DAT_0000aef9 & 0x10) == 0) {
    return;
  }
  if ((DAT_00007784 & 1) == 0) {
    FUN_0002c9f6();
    return;
  }
  FUN_0002ed82();
  return;
}



// Function: FUN_00030f56 @ 00030f56

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00030f56(void)

{
  byte in_D0b;
  uint uVar1;
  ushort uVar2;
  
  if ((DAT_0000aecb & 1) != 0) {
    return;
  }
  while ((DAT_0000aecb & 0x40) != 0) {
    in_D0b = FUN_0002c9c6();
  }
  DAT_0000aeca = in_D0b | 0x80;
  uVar1 = DAT_00007778 + 0x9c4;
  while (((uVar2 = (ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c), uVar2 != 1 && (uVar2 != 7)) ||
         (DAT_00007778 <= uVar1))) {
    uVar1 = FUN_0002c9c6();
    if ((DAT_0000aecb & 0x80) != 0 || (DAT_0000aecb & 1) != 0) {
      return;
    }
  }
  if ((DAT_00000bd9 & 4) == 0) {
    __m68k_trap(0xe);
  }
  else {
    __m68k_trap(0xe);
  }
  FUN_00030fe2();
  return;
}



// Function: FUN_00030fe2 @ 00030fe2

void FUN_00030fe2(void)

{
  DAT_0000aecb = DAT_0000aecb & 0xbf;
  DAT_0000aecb = DAT_0000aecb | 0xa0;
  DAT_0000aeca = DAT_0000aeca & 0x7f;
  DAT_00003250 = DAT_00003250 & 0xcf;
  DAT_00007784 = DAT_00007784 & 0x7f;
  return;
}



// Function: FUN_00031016 @ 00031016

/* WARNING: Removing unreachable block (ram,0x00031068) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031016(void)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  ushort *in_A0;
  ushort *extraout_A0;
  ushort *extraout_A0_00;
  
  if ((((DAT_0000aefa & 8) == 0) && (DAT_0000af04 != '\0')) &&
     (((DAT_00003268 & 4) != 0 ||
      ((((DAT_00003268 & 8) == 0 || ((DAT_00003268 & 0x10) != 0)) || ((DAT_00003268 & 0x20) == 0))))
     )) {
    __m68k_trap(0xe);
    return;
  }
  iVar1 = *(int *)(in_A0 + 0x33);
  uVar3 = 0;
  while (((int)uVar3 < 8 &&
         ((iVar1 < (int)(&DAT_0000af34)[(short)uVar3] ||
          ((int)(&DAT_0000af10)[(short)uVar3] < iVar1))))) {
    uVar3 = uVar3 + 1;
  }
  if (uVar3 < 8) {
    if ((((ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c) == 5) && ((*in_A0 & 0x2000) != 0)) &&
       (*(int *)(in_A0 + 3) == 0x26)) {
      return;
    }
    DAT_0000aecc = iVar1;
    if (((ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c) != 2) &&
       (DAT_0000c45c = iVar1, (DAT_00003252 & 1) == 0)) {
      DAT_0000aecc = 0;
      DAT_00003254 = 0;
    }
    uVar4 = (ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c);
    if ((((uVar4 == 1) || (uVar4 == 7)) &&
        ((uVar2 = (ushort)((uint)_DAT_0000af58 >> 0x1c), uVar2 == 2 || (uVar2 == 5)))) &&
       ((((ushort)((uint)(_DAT_0000af58 << 0xc) >> 0x1c) == 2 || (uVar4 == 7)) &&
        ((DAT_00003252 & 4) != 0)))) {
      FUN_00031524();
      in_A0 = extraout_A0;
    }
    if ((((ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c) == 5) && ((*in_A0 & 0x2000) != 0)) &&
       (*(int *)(in_A0 + 3) == 0x25)) {
      return;
    }
    DAT_0000af6c = 0;
    FUN_00030f56();
    if (((*extraout_A0_00 & 0x2000) == 0) && ((*extraout_A0_00 & 0x4000) != 0)) {
      FUN_00030d20();
    }
  }
  else {
    __m68k_trap(0xe);
  }
  return;
}



// Function: FUN_000311a2 @ 000311a2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000311a2(void)

{
  byte bVar1;
  ushort uVar2;
  longdouble lVar3;
  
  uVar2 = (ushort)((uint)_DAT_0000af58 >> 0x10);
  if ((DAT_0000a664 & 1) != 0) {
    _DAT_000040b2 = (undefined1  [12])DAT_00002750;
    lVar3 = (longdouble)DAT_00002750 - (longdouble)_DAT_0000ac4e;
    if (uVar2 >> 0xc == 3) {
      lVar3 = lVar3 * (longdouble)2;
    }
    _DAT_00003f0c = (undefined1  [12])lVar3;
    _DAT_00004010 = (undefined1  [12])lVar3;
  }
  if ((DAT_0000a664 & 2) != 0) {
    _DAT_000040be = (undefined1  [12])DAT_00002754;
    _DAT_00003f30 = (undefined1  [12])((longdouble)DAT_00002754 - (longdouble)_DAT_0000ac5a);
    _DAT_0000401c = (undefined1  [12])((longdouble)DAT_00002754 - (longdouble)_DAT_0000ac5a);
  }
  if ((DAT_0000a664 & 4) != 0) {
    lVar3 = (longdouble)DAT_00002758;
    _DAT_000040ca = (undefined1  [12])DAT_00002758;
    if ((uVar2 >> 0xc != 0) || (DAT_00002988 != 0)) {
      lVar3 = lVar3 - (longdouble)_DAT_0000ac66;
    }
    _DAT_00003f54 = (undefined1  [12])lVar3;
    _DAT_00004028 = (undefined1  [12])lVar3;
  }
  if ((DAT_0000a664 & 8) != 0) {
    _DAT_000040d6 = (undefined1  [12])DAT_0000275c;
    _DAT_00003f78 = (undefined1  [12])((longdouble)DAT_0000275c - (longdouble)_DAT_0000acae);
    _DAT_00004034 = (undefined1  [12])((longdouble)DAT_0000275c - (longdouble)_DAT_0000acae);
  }
  bVar1 = DAT_0000a664 & 0x10;
  DAT_0000a664 = DAT_0000a664 & 0xe0;
  if (bVar1 != 0) {
    _DAT_000040e2 = (undefined1  [12])_DAT_0000aefc;
    _DAT_00003f84 = (undefined1  [12])((longdouble)_DAT_0000aefc - (longdouble)_DAT_0000ac7e);
    _DAT_00004040 = (undefined1  [12])((longdouble)_DAT_0000aefc - (longdouble)_DAT_0000ac7e);
  }
  return;
}



// Function: FUN_00031524 @ 00031524

void FUN_00031524(void)

{
  int iVar1;
  int in_D1;
  
  iVar1 = DAT_000026e0;
  if (DAT_000026e0 != 0) {
    if (in_D1 == 1) {
      FUN_0003155e();
    }
    else if (in_D1 == 0) {
      FUN_00031818();
    }
  }
  DAT_00007785 = DAT_00007785 & 0xfd;
  if (iVar1 == 0) {
    FUN_0002f568();
  }
  FUN_00031b12();
  return;
}



// Function: FUN_0003155e @ 0003155e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003155e(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_D1;
  uint uVar4;
  int extraout_A1;
  int extraout_A1_00;
  int extraout_A1_01;
  int extraout_A1_02;
  int iVar5;
  int extraout_A1_03;
  int extraout_A1_04;
  
  if (in_D1 == DAT_0000af54) {
    return;
  }
  FUN_00031ad6();
  uVar3 = DAT_0000aecc;
  DAT_00007785 = DAT_00007785 | 2;
  DAT_0000aedc = DAT_0000c44c;
  FUN_00030f56();
  _DAT_0000c4bc = 0;
  _DAT_0000c47c = 0;
  uVar4 = DAT_00007778 + 0x78;
  do {
    FUN_0002c9c6();
    _DAT_0000c47c = DAT_00007778 - extraout_A1;
  } while (DAT_00007778 <= uVar4);
  DAT_00003251 = DAT_00003251 | 1;
  _DAT_0000c480 = 0;
  uVar4 = DAT_0000c460 + DAT_00007778;
  do {
    do {
      FUN_0002c9c6();
      uVar1 = DAT_00007778;
      if (uVar4 < DAT_00007778) {
        __m68k_trap(0xe);
        thunk_FUN_0002c9f6();
        return;
      }
      _DAT_0000c480 = DAT_00007778 - extraout_A1_00;
    } while ((DAT_00003252 & 0x80) != 0);
    iVar5 = uVar4 - DAT_00007778;
    _DAT_0000c484 = 0;
    uVar4 = DAT_0000c464 + DAT_00007778;
    while (FUN_0002c9c6(), (DAT_00003252 & 0x80) == 0) {
      _DAT_0000c484 = DAT_00007778 - uVar1;
      if (uVar4 < DAT_00007778) {
        DAT_00003251 = DAT_00003251 & 0xfd;
        DAT_00003251 = DAT_00003251 | 4;
        _DAT_0000c488 = 0;
        uVar4 = DAT_0000c468 + DAT_00007778;
        do {
          DAT_0000c4dc = 0;
          do {
            FUN_0002c9c6();
            FUN_00032084();
            if ((uVar4 < DAT_00007778) || (iVar5 = extraout_A1_01, 0x13 < DAT_0000c4dc)) {
              if (DAT_0000c478 < 1) {
                __m68k_trap(0xe);
                thunk_FUN_0002c9f6();
                return;
              }
              FUN_00031baa();
              iVar5 = extraout_A1_02;
            }
            uVar1 = DAT_00007778;
            _DAT_0000c488 = DAT_00007778 - iVar5;
          } while ((DAT_00003252 & 0x40) == 0);
          iVar5 = uVar4 - DAT_00007778;
          _DAT_0000c484 = 0;
          uVar4 = DAT_0000c464 + DAT_00007778;
          while (FUN_0002c9c6(), (DAT_00003252 & 0x40) != 0) {
            _DAT_0000c484 = DAT_00007778 - uVar1;
            if (uVar4 < DAT_00007778) {
              _DAT_0000c48c = 0;
              uVar4 = DAT_0000c46c + DAT_00007778;
              do {
                FUN_0002c9c6();
                _DAT_0000c48c = DAT_00007778 - extraout_A1_03;
              } while (DAT_00007778 <= uVar4);
              DAT_00003251 = DAT_00003251 & 0xfe;
              _DAT_0000c480 = 0;
              uVar4 = DAT_0000c460 + DAT_00007778;
              do {
                do {
                  FUN_0002c9c6();
                  uVar1 = DAT_00007778;
                  if (uVar4 < DAT_00007778) {
                    __m68k_trap(0xe);
                    thunk_FUN_0002c9f6();
                    return;
                  }
                  _DAT_0000c480 = DAT_00007778 - extraout_A1_04;
                } while ((DAT_00003252 & 0x80) == 0);
                iVar5 = uVar4 - DAT_00007778;
                _DAT_0000c484 = 0;
                uVar4 = DAT_0000c464 + DAT_00007778;
                while (FUN_0002c9c6(), uVar2 = DAT_00007778, (DAT_00003252 & 0x80) != 0) {
                  _DAT_0000c484 = DAT_00007778 - uVar1;
                  if (uVar4 < DAT_00007778) {
                    _DAT_0000c490 = 0;
                    uVar4 = DAT_0000c470 + DAT_00007778;
                    do {
                      FUN_0002c9c6();
                      _DAT_0000c490 = DAT_00007778 - uVar2;
                    } while (DAT_00007778 <= uVar4);
                    DAT_00003251 = DAT_00003251 & 0xfb;
                    DAT_00007785 = DAT_00007785 & 0xfd;
                    FUN_0002e1d8();
                    DAT_0000aecc = uVar3;
                    FUN_00030f56();
                    return;
                  }
                }
                uVar4 = DAT_00007778 + iVar5;
              } while( true );
            }
          }
          uVar4 = DAT_00007778 + iVar5;
        } while( true );
      }
    }
    uVar4 = DAT_00007778 + iVar5;
  } while( true );
}



// Function: FUN_00031818 @ 00031818

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031818(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_D1;
  uint uVar4;
  int extraout_A1;
  int extraout_A1_00;
  int extraout_A1_01;
  int extraout_A1_02;
  int iVar5;
  int extraout_A1_03;
  int extraout_A1_04;
  
  if (in_D1 == DAT_0000af54) {
    return;
  }
  FUN_00031ad6();
  uVar3 = DAT_0000aecc;
  DAT_00007785 = DAT_00007785 | 2;
  DAT_0000aedc = -DAT_0000c44c;
  FUN_00030f56();
  _DAT_0000c47c = 0;
  _DAT_0000c4bc = 0;
  uVar4 = DAT_00007778 + 0x78;
  do {
    FUN_0002c9c6();
    _DAT_0000c47c = DAT_00007778 - extraout_A1;
  } while (DAT_00007778 <= uVar4);
  DAT_00003251 = DAT_00003251 | 1;
  _DAT_0000c480 = 0;
  uVar4 = DAT_0000c460 + DAT_00007778;
  do {
    do {
      FUN_0002c9c6();
      uVar1 = DAT_00007778;
      if (uVar4 < DAT_00007778) {
        __m68k_trap(0xe);
        thunk_FUN_0002c9f6();
        return;
      }
      _DAT_0000c480 = DAT_00007778 - extraout_A1_00;
    } while ((DAT_00003252 & 0x80) != 0);
    iVar5 = uVar4 - DAT_00007778;
    _DAT_0000c484 = 0;
    uVar4 = DAT_0000c464 + DAT_00007778;
    while (FUN_0002c9c6(), (DAT_00003252 & 0x80) == 0) {
      _DAT_0000c484 = DAT_00007778 - uVar1;
      if (uVar4 < DAT_00007778) {
        DAT_00003251 = DAT_00003251 & 0xfb;
        DAT_00003251 = DAT_00003251 | 2;
        _DAT_0000c488 = 0;
        uVar4 = DAT_0000c468 + DAT_00007778;
        do {
          DAT_0000c4dc = 0;
          do {
            FUN_0002c9c6();
            FUN_00032084();
            if ((uVar4 < DAT_00007778) || (iVar5 = extraout_A1_01, 0x13 < DAT_0000c4dc)) {
              if (DAT_0000c478 < 1) {
                __m68k_trap(0xe);
                thunk_FUN_0002c9f6();
                return;
              }
              FUN_00031baa();
              iVar5 = extraout_A1_02;
            }
            uVar1 = DAT_00007778;
            _DAT_0000c488 = DAT_00007778 - iVar5;
          } while ((DAT_00003252 & 0x20) == 0);
          iVar5 = uVar4 - DAT_00007778;
          _DAT_0000c484 = 0;
          uVar4 = DAT_0000c464 + DAT_00007778;
          while (FUN_0002c9c6(), (DAT_00003252 & 0x20) != 0) {
            _DAT_0000c484 = DAT_00007778 - uVar1;
            if (uVar4 < DAT_00007778) {
              _DAT_0000c48c = 0;
              uVar4 = DAT_0000c46c + DAT_00007778;
              do {
                FUN_0002c9c6();
                _DAT_0000c48c = DAT_00007778 - extraout_A1_03;
              } while (DAT_00007778 <= uVar4);
              DAT_00003251 = DAT_00003251 & 0xfe;
              _DAT_0000c480 = 0;
              uVar4 = DAT_0000c460 + DAT_00007778;
              do {
                do {
                  FUN_0002c9c6();
                  uVar1 = DAT_00007778;
                  if (uVar4 < DAT_00007778) {
                    __m68k_trap(0xe);
                    thunk_FUN_0002c9f6();
                    return;
                  }
                  _DAT_0000c480 = DAT_00007778 - extraout_A1_04;
                } while ((DAT_00003252 & 0x80) == 0);
                iVar5 = uVar4 - DAT_00007778;
                _DAT_0000c484 = 0;
                uVar4 = DAT_0000c464 + DAT_00007778;
                while (FUN_0002c9c6(), uVar2 = DAT_00007778, (DAT_00003252 & 0x80) != 0) {
                  _DAT_0000c484 = DAT_00007778 - uVar1;
                  if (uVar4 < DAT_00007778) {
                    _DAT_0000c490 = 0;
                    uVar4 = DAT_0000c470 + DAT_00007778;
                    do {
                      FUN_0002c9c6();
                      _DAT_0000c490 = DAT_00007778 - uVar2;
                    } while (DAT_00007778 <= uVar4);
                    DAT_00003251 = DAT_00003251 & 0xfd;
                    DAT_00007785 = DAT_00007785 & 0xfd;
                    FUN_0002e1d8();
                    DAT_0000aecc = uVar3;
                    FUN_00030f56();
                    return;
                  }
                }
                uVar4 = DAT_00007778 + iVar5;
              } while( true );
            }
          }
          uVar4 = DAT_00007778 + iVar5;
        } while( true );
      }
    }
    uVar4 = DAT_00007778 + iVar5;
  } while( true );
}



// Function: FUN_00031ad6 @ 00031ad6

void FUN_00031ad6(void)

{
  if ((DAT_000031e6 & 2) != 0) {
    __m68k_trap(0xe);
    FUN_0002c9f6();
    return;
  }
  if ((DAT_000031e6 & 1) != 0) {
    __m68k_trap(0xe);
    FUN_0002c9f6();
    return;
  }
  FUN_0002e1d8();
  DAT_0000aecc = DAT_0000c45c;
  return;
}



// Function: FUN_00031b12 @ 00031b12

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031b12(void)

{
  if ((DAT_000031e6 & 2) != 0) {
    __m68k_trap(0xe);
    FUN_0002c9f6();
    return;
  }
  if ((DAT_000031e6 & 1) != 0) {
    __m68k_trap(0xe);
    FUN_0002c9f6();
    return;
  }
  if ((DAT_00007784 & 8) == 0) {
    if ((DAT_0000aefa & 4) != 0) {
      DAT_000031ee = DAT_000031ee | 4;
    }
    if ((DAT_0000aefa & 2) != 0) {
      DAT_000031ee = DAT_000031ee | 8;
    }
  }
  DAT_00007784 = DAT_00007784 & 0xdf;
  DAT_00007785 = DAT_00007785 & 0xbf;
  if ((uint)(_DAT_0000af58 << 0x18) >> 0x1c == 0) {
    DAT_0000aed8 = 0x640;
  }
  FUN_00030f56();
  DAT_00007782 = 4;
  return;
}



// Function: FUN_00031baa @ 00031baa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031baa(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int unaff_D3;
  
  uVar2 = DAT_00007778;
  bVar4 = DAT_00003251;
  _DAT_0000c4bc = unaff_D3 + 1;
  DAT_0000c4dc = 0;
  bVar3 = DAT_00003251 & 2;
  DAT_00003251 = DAT_00003251 & 0xfd;
  if (bVar3 == 0) {
    DAT_00003251 = bVar4 & 0xf9;
    _DAT_0000c494 = 0;
    uVar1 = DAT_0000c474 + DAT_00007778;
    do {
      FUN_0002c9c6();
      uVar5 = DAT_00007778;
      _DAT_0000c494 = DAT_00007778 - uVar2;
    } while (DAT_00007778 <= uVar1);
    DAT_0000aedc = -DAT_0000aedc;
    _DAT_0000c47c = 0;
    uVar2 = DAT_0000c474 + DAT_00007778;
    do {
      FUN_0002c9c6();
      uVar1 = DAT_00007778;
      _DAT_0000c47c = DAT_00007778 - uVar5;
    } while (DAT_00007778 <= uVar2);
    DAT_00003251 = DAT_00003251 | 2;
    _DAT_0000c48c = 0;
    uVar2 = DAT_00007778 + 0x78;
    do {
      FUN_0002c9c6();
      uVar5 = DAT_00007778;
      _DAT_0000c48c = DAT_00007778 - uVar1;
    } while (DAT_00007778 <= uVar2);
    DAT_00003251 = DAT_00003251 & 0xfd;
    DAT_0000aedc = -DAT_0000aedc;
    _DAT_0000c47c = 0;
    uVar2 = DAT_00007778 + 0x78;
    do {
      FUN_0002c9c6();
      _DAT_0000c47c = DAT_00007778 - uVar5;
    } while (DAT_00007778 <= uVar2);
    DAT_00003251 = DAT_00003251 | 4;
  }
  else {
    _DAT_0000c494 = 0;
    uVar1 = DAT_0000c474 + DAT_00007778;
    do {
      FUN_0002c9c6();
      uVar5 = DAT_00007778;
      _DAT_0000c494 = DAT_00007778 - uVar2;
    } while (DAT_00007778 <= uVar1);
    DAT_0000aedc = -DAT_0000aedc;
    _DAT_0000c47c = 0;
    uVar2 = DAT_0000c474 + DAT_00007778;
    do {
      FUN_0002c9c6();
      uVar1 = DAT_00007778;
      _DAT_0000c47c = DAT_00007778 - uVar5;
    } while (DAT_00007778 <= uVar2);
    DAT_00003251 = DAT_00003251 | 4;
    _DAT_0000c48c = 0;
    uVar2 = DAT_00007778 + 0x78;
    do {
      FUN_0002c9c6();
      uVar5 = DAT_00007778;
      _DAT_0000c48c = DAT_00007778 - uVar1;
    } while (DAT_00007778 <= uVar2);
    DAT_00003251 = DAT_00003251 & 0xfb;
    DAT_0000aedc = -DAT_0000aedc;
    _DAT_0000c47c = 0;
    uVar2 = DAT_00007778 + 0x78;
    do {
      FUN_0002c9c6();
      _DAT_0000c47c = DAT_00007778 - uVar5;
    } while (DAT_00007778 <= uVar2);
    DAT_00003251 = DAT_00003251 | 2;
  }
  _DAT_0000c488 = 0;
  return;
}



// Function: FUN_00032084 @ 00032084

void FUN_00032084(void)

{
  if (DAT_0000c4e0 <= DAT_0000aed4) {
    DAT_0000c4dc = DAT_0000c4dc + 1;
  }
  return;
}



// Function: thunk_FUN_0002c9f6 @ 0003209a

void thunk_FUN_0002c9f6(void)

{
  DAT_00003251 = DAT_00003251 & 0xf8;
  FUN_0002c9f6();
  return;
}



// Function: FUN_000320b0 @ 000320b0

undefined4 FUN_000320b0(void)

{
  undefined1 in_D0b;
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  
  DAT_0000bff1 = 0x81;
  DAT_0000bff3 = in_D0b;
  uVar1 = FUN_0002c9c6();
  uVar2 = DAT_0000bff4 + DAT_00007778;
  do {
    if (uVar2 < DAT_00007778) {
      __m68k_trap(0xe);
      return uVar1;
    }
    bVar3 = false;
    if (((DAT_0000bff2 & 0x20) == 0) && (bVar3 = false, (DAT_0000bff2 & 0x80) == 0)) {
      uVar2 = FUN_0002c9c6();
      bVar3 = (DAT_0000bff2 & 0x80) == 0;
    }
  } while (bVar3);
  if ((DAT_0000bff2 & 0x20) != 0) {
    __m68k_trap(0xe);
  }
  return uVar1;
}



// Function: FUN_00032176 @ 00032176

void FUN_00032176(void)

{
  char cVar1;
  char *in_A0;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = &DAT_01200580;
  do {
    cVar1 = *in_A0;
    pcVar2 = pcVar3 + 1;
    *pcVar3 = cVar1;
    in_A0 = in_A0 + 1;
    pcVar3 = pcVar2;
  } while (cVar1 != '\0');
  for (; pcVar2 < (char *)0x120067f; pcVar2 = pcVar2 + 1) {
    *pcVar2 = '\0';
  }
  DAT_0000aef9 = DAT_0000aef9 | 0x80;
  return;
}



// Function: FUN_00033e1a @ 00033e1a

void FUN_00033e1a(void)

{
  if ((DAT_00003252 & 4) == 0) {
    DAT_0000aecb = DAT_0000aecb & 0xf7 | 4;
  }
  else {
    DAT_0000aecb = DAT_0000aecb & 0xfb | 8;
  }
  if ((DAT_00003252 & 4) == 0) {
    DAT_0000aed0 = 0;
  }
  else {
    FUN_00035f0e();
    DAT_0000aed0 = DAT_00003254;
  }
  if ((DAT_01200815 & 0x80) != 0) {
    DAT_00003254 = 0;
    DAT_0000aeca = DAT_0000aeca & 0x7f;
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0xa0;
    DAT_00003252 = DAT_00003252 & 0xfa;
    DAT_00003250 = DAT_00003250 & 0xf2;
    return;
  }
  if (((DAT_0000aeca & 0x80) != 0) && ((DAT_0000aeca & 0x7f) == 0xf)) {
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0xa0;
    return;
  }
  if ((DAT_0000aecb & 0x40) == 0) {
    if (((DAT_0000aeca & 0x80) != 0) && ((DAT_0000aecb & 0x40) == 0)) {
      DAT_0000aeca = DAT_0000aeca & 0x7f;
      DAT_0000aecb = DAT_0000aecb & 0x5f | 0x40;
      FUN_00033f50();
    }
    return;
  }
  if ((DAT_00003252 & 4) == 0) {
    return;
  }
  DAT_0000aecb = DAT_0000aecb & 0xbf;
  DAT_0000aecb = DAT_0000aecb | 0x80;
  return;
}



// Function: FUN_00033f50 @ 00033f50

void FUN_00033f50(void)

{
  if (DAT_0000aeca == '\x01') {
    DAT_0000aedc = DAT_0000aecc;
    FUN_00035f0e();
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0x80;
    return;
  }
  if (DAT_0000aeca == '\x06') {
    if ((DAT_00003252 & 4) == 0) {
      DAT_00003250 = DAT_00003250 | 5;
      FUN_00032176();
    }
    else {
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
    return;
  }
  if (DAT_0000aeca == '\b') {
    if ((DAT_00003252 & 4) == 0) {
      DAT_00003250 = DAT_00003250 | 5;
      FUN_00032176();
    }
    else {
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
    return;
  }
  if (DAT_0000aeca == '\t') {
    if ((DAT_00003252 & 4) == 0) {
      DAT_00003250 = DAT_00003250 | 5;
      FUN_00032176();
    }
    else {
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
    return;
  }
  if (DAT_0000aeca == '\a') {
    DAT_00003254 = 0;
    DAT_00003250 = DAT_00003250 & 0xf2;
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0x80;
    return;
  }
  DAT_0000aecb = DAT_0000aecb & 0xbf;
  DAT_0000aecb = DAT_0000aecb | 0x80;
  return;
}



// Function: FUN_0003407a @ 0003407a

void FUN_0003407a(void)

{
  byte bVar1;
  int iVar2;
  byte bVar4;
  int iVar3;
  
  FUN_00036148();
  if ((DAT_00003252 & 4) == 0) {
    DAT_0000aecb = DAT_0000aecb | 4;
  }
  else {
    DAT_0000aecb = DAT_0000aecb & 0xfb;
  }
  FUN_00035f0e();
  bVar1 = DAT_0000aecb;
  if ((DAT_00003252 & 1) == 0) {
    DAT_0000aecb = DAT_0000aecb & 0xf7;
  }
  else {
    iVar3 = DAT_00003254;
    if (DAT_00003254 < 0) {
      iVar3 = -DAT_00003254;
    }
    iVar2 = iVar3 - DAT_0000aed0;
    if (iVar3 < DAT_0000aed0) {
      iVar2 = -iVar2;
    }
    if (DAT_0000aed0 >> 4 < iVar2) {
      bVar4 = DAT_0000aeca & 0x7f;
      if ((((bVar4 != 0xf) && (bVar4 != 0xb)) && (bVar4 != 10)) &&
         ((DAT_0000aecb = DAT_0000aecb & 0xf7, (bVar1 & 0x40) == 0 && ((DAT_0000aeca & 0x80) == 0)))
         ) {
        DAT_0000aeca = 1;
        DAT_0000aecb = bVar1 & 0x57;
        DAT_0000aecb = DAT_0000aecb | 0x40;
      }
    }
    else {
      DAT_0000aecb = DAT_0000aecb | 8;
    }
  }
  bVar1 = DAT_0000aecb;
  if ((DAT_01200815 & 0x80) != 0) {
    DAT_0000aeca = DAT_0000aeca & 0x7f;
    DAT_0000aecb = DAT_0000aecb | 0x20;
    DAT_00003252 = DAT_00003252 & 0xfe;
    FUN_00034984();
    return;
  }
  if (((DAT_0000aeca & 0x80) == 0) && ((DAT_0000aecb & 0x40) == 0)) {
    return;
  }
  bVar4 = DAT_0000aeca & 0x7f;
  if ((bVar4 == 10) || (bVar4 == 0xb)) {
    DAT_0000aeca = DAT_0000aeca & 0x7f;
    DAT_0000aecb = DAT_0000aecb & 0x7f | 0x48;
    DAT_0000aed8 = (DAT_0000aed0 * 0x640) / DAT_0000aedc;
    if ((DAT_0000aed0 <= (int)(&DAT_0000af34)[(short)DAT_0000af54]) && (bVar4 == 0xb)) {
      DAT_0000aecb = bVar1 & 0x3f | 0x88;
      DAT_00003250 = DAT_00003250 & 0xcf;
      DAT_0000aeca = 0;
      return;
    }
    if (((int)(&DAT_0000af10)[(short)DAT_0000af54] <= DAT_0000aed0) && (bVar4 == 10)) {
      DAT_0000aecb = bVar1 & 0x3f | 0x88;
      DAT_00003250 = DAT_00003250 & 0xcf;
      DAT_0000aeca = 0;
      return;
    }
    if ((DAT_000031e6 & 1) == 0) {
      if (bVar4 == 10) {
        DAT_00003250 = DAT_00003250 & 0xdf;
        DAT_00003250 = DAT_00003250 | 0x10;
      }
      else {
        DAT_00003250 = DAT_00003250 & 0xef;
        DAT_00003250 = DAT_00003250 | 0x20;
      }
    }
    else {
      __m68k_trap(0xe);
    }
    return;
  }
  if (((DAT_0000aecb & 0x40) != 0) && ((DAT_0000aeca & 0x80) == 0)) {
    if (DAT_0000aeca == 1) {
      iVar3 = DAT_00003254;
      if (DAT_00003254 < 0) {
        iVar3 = -DAT_00003254;
      }
      iVar3 = iVar3 - DAT_0000aed0;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      if (iVar3 <= DAT_0000aed0 >> 4) {
        DAT_00003250 = DAT_00003250 & 0xcf;
        DAT_0000aecb = DAT_0000aecb & 0xbf;
        DAT_0000aecb = DAT_0000aecb | 0x80;
        FUN_00032176();
        return;
      }
      iVar3 = DAT_00003254;
      if (DAT_00003254 < 0) {
        iVar3 = -DAT_00003254;
      }
      if ((DAT_000031e6 & 1) == 0) {
        if (iVar3 < DAT_0000aed0) {
          DAT_00003250 = DAT_00003250 & 0xef | 0x20;
        }
        else {
          DAT_00003250 = DAT_00003250 & 0xdf | 0x10;
        }
      }
      else {
        __m68k_trap(0xe);
      }
      return;
    }
    if (DAT_0000aeca == 6) {
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
      return;
    }
    if (DAT_0000aeca == 8) {
      if (((DAT_00003250 & 1) != 0) && ((DAT_00003250 & 4) != 0)) {
        DAT_00003252 = DAT_00003252 | 1;
        DAT_0000aecb = DAT_0000aecb & 0xbf;
        DAT_0000aecb = DAT_0000aecb | 0x80;
        DAT_00007784 = DAT_00007784 & 0x7f;
      }
      DAT_0000aedc = DAT_0000aecc;
      FUN_00035f0e();
      if ((DAT_00003250 & 1) == 0) {
        DAT_0000af68 = DAT_00007778;
      }
      DAT_00003250 = DAT_00003250 & 0x77 | 5;
      if ((DAT_00003252 & 4) == 0) {
        if (0x2d < (uint)(DAT_00007778 - DAT_0000af68)) {
          __m68k_trap(0xe);
          DAT_0000aeca = DAT_0000aeca & 0x7f;
          DAT_0000aecb = DAT_0000aecb | 0x20;
          DAT_00003252 = DAT_00003252 & 0xfe;
          FUN_00034984();
          return;
        }
        return;
      }
      FUN_00032176();
      DAT_00003252 = DAT_00003252 | 1;
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
      DAT_00007784 = DAT_00007784 & 0x7f;
      return;
    }
    if (DAT_0000aeca == 9) {
      if (((DAT_00003250 & 1) != 0) && ((DAT_00003250 & 8) != 0)) {
        DAT_00003252 = DAT_00003252 | 1;
        DAT_0000aecb = DAT_0000aecb & 0xbf;
        DAT_0000aecb = DAT_0000aecb | 0x80;
        DAT_00007784 = DAT_00007784 & 0x7f;
      }
      DAT_0000aedc = DAT_0000aecc;
      FUN_00035f0e();
      if ((DAT_00003250 & 1) == 0) {
        DAT_0000af68 = DAT_00007778;
      }
      DAT_00003250 = DAT_00003250 & 0x7b | 9;
      if ((DAT_00003252 & 4) == 0) {
        if (0x2d < (uint)(DAT_00007778 - DAT_0000af68)) {
          __m68k_trap(0xe);
          DAT_0000aeca = DAT_0000aeca & 0x7f;
          DAT_0000aecb = DAT_0000aecb | 0x20;
          DAT_00003252 = DAT_00003252 & 0xfe;
          FUN_00034984();
          return;
        }
        return;
      }
      FUN_00032176();
      DAT_00003252 = DAT_00003252 | 1;
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
      DAT_00007784 = DAT_00007784 & 0x7f;
      return;
    }
    if (DAT_0000aeca == 5) {
      if (0x19 < (uint)(DAT_00007778 - DAT_0000af68)) {
        if ((DAT_00003252 & 4) == 0) {
          if (0x2d < (uint)(DAT_00007778 - DAT_0000af68)) {
            __m68k_trap(0xe);
            DAT_0000aeca = 5;
            DAT_0000aecb = DAT_0000aecb & 0xbf | 0xa0;
          }
          return;
        }
        DAT_00003252 = DAT_00003252 | 1;
        DAT_0000aecb = DAT_0000aecb & 0xbf;
        DAT_0000aecb = DAT_0000aecb | 0x80;
      }
      return;
    }
    if (DAT_0000aeca == 7) {
      if ((DAT_00003252 & 4) == 0) {
        DAT_0000aecb = DAT_0000aecb & 0xbf;
        DAT_0000aecb = DAT_0000aecb | 0x80;
        DAT_00007784 = DAT_00007784 & 0x7f;
        return;
      }
      if (0x2d < (uint)(DAT_00007778 - DAT_0000af68)) {
        __m68k_trap(0xe);
        DAT_0000aeca = 7;
        DAT_0000aecb = DAT_0000aecb & 0xbf | 0xa0;
        return;
      }
      return;
    }
  }
  if (((DAT_0000aeca & 0x80) != 0) && ((DAT_0000aecb & 0x40) == 0)) {
    DAT_0000aeca = DAT_0000aeca & 0x7f;
    DAT_0000aecb = DAT_0000aecb & 0x5f | 0x40;
    FUN_00034620();
  }
  return;
}



// Function: FUN_00034620 @ 00034620

void FUN_00034620(void)

{
  int iVar1;
  
  if (DAT_0000aeca == '\x01') {
    iVar1 = DAT_0000aecc;
    if (DAT_0000aecc < 0) {
      iVar1 = -DAT_0000aecc;
    }
    if (iVar1 < DAT_0000af34) {
      DAT_0000aecc = DAT_0000af34;
      __m68k_trap(0xe);
      FUN_00034984();
      return;
    }
    if (DAT_0000af14 < iVar1) {
      DAT_0000aecc = DAT_0000af14;
      __m68k_trap(0xe);
      FUN_00034984();
      return;
    }
    if ((DAT_00003250 & 1) == 0) {
      DAT_0000aedc = DAT_0000aecc;
      FUN_00035f0e();
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
    else {
      if ((DAT_00003252 & 0x40) == 0) {
        if (DAT_0000af10 < iVar1) {
          FUN_00034984();
          FUN_00032176();
          DAT_00007784 = DAT_00007784 | 0x80;
          return;
        }
      }
      else if (iVar1 < DAT_0000af38) {
        FUN_00034984();
        FUN_00032176();
        DAT_00007784 = DAT_00007784 | 0x80;
        return;
      }
      DAT_0000aedc = DAT_0000aecc;
      if ((DAT_0000aecb & 2) != 0) {
        DAT_0000aedc = -DAT_0000aecc;
      }
      FUN_00035f0e();
    }
    return;
  }
  if (DAT_0000aeca == '\x05') {
    if (((DAT_00003250 & 4) == 0) && ((DAT_00003250 & 8) == 0)) {
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0xa0;
      return;
    }
    DAT_00003252 = DAT_00003252 & 0xfe;
    DAT_0000aecb = DAT_0000aecb & 0xf7;
    DAT_00003250 = DAT_00003250 ^ 0xc;
    DAT_0000aecb = DAT_0000aecb ^ 2;
    FUN_00035f0e();
    DAT_0000af68 = DAT_00007778;
    return;
  }
  if (DAT_0000aeca == '\x06') {
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0x80;
    return;
  }
  if (DAT_0000aeca == '\b') {
    if (DAT_0000aecc < 0) {
      DAT_0000aecc = -DAT_0000aecc;
    }
    DAT_0000aecb = DAT_0000aecb & 0xfd;
    FUN_000348d2();
    return;
  }
  if (DAT_0000aeca == '\t') {
    if (DAT_0000aecc < 0) {
      DAT_0000aecc = -DAT_0000aecc;
    }
    DAT_0000aecb = DAT_0000aecb | 2;
    FUN_000348d2();
    return;
  }
  if (DAT_0000aeca == '\a') {
    DAT_00003254 = 0;
    DAT_00003250 = DAT_00003250 & 0xc2 | 0x80;
    DAT_0000af68 = DAT_00007778;
    return;
  }
  if (DAT_0000aeca == '\x0f') {
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0xa0;
    DAT_00003250 = DAT_00003250 & 0xcf;
    if (DAT_0000aedc == 0) {
      DAT_0000aed8 = 0x640;
    }
    else {
      DAT_0000aed8 = (DAT_0000aed0 * 0x640) / DAT_0000aedc;
    }
    return;
  }
  DAT_0000aecb = DAT_0000aecb & 0xbf;
  DAT_0000aecb = DAT_0000aecb | 0xa0;
  return;
}



// Function: FUN_000348d2 @ 000348d2

void FUN_000348d2(void)

{
  int iVar1;
  
  if ((DAT_00003250 & 1) == 0) {
    iVar1 = DAT_0000aecc;
    if (DAT_0000aecc < 0) {
      iVar1 = -DAT_0000aecc;
    }
    if (iVar1 == 0) {
      DAT_00003254 = DAT_0000aed0;
      DAT_0000aecc = DAT_0000aed0;
      DAT_0000aedc = DAT_0000aed0;
      DAT_0000aed8 = 0x640;
      iVar1 = DAT_0000aed0;
    }
    if (iVar1 < DAT_0000af34) {
      DAT_0000aecc = DAT_0000af34;
      __m68k_trap(0xe);
      FUN_00034984();
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0xa0;
      return;
    }
    if (DAT_0000af14 < iVar1) {
      DAT_0000aecc = DAT_0000af14;
      __m68k_trap(0xe);
      FUN_00034984();
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0xa0;
      return;
    }
  }
  return;
}



// Function: FUN_00034984 @ 00034984

void FUN_00034984(void)

{
  DAT_00003254 = 0;
  DAT_00003250 = DAT_00003250 & 0xc2 | 0x80;
  DAT_0000aecb = DAT_0000aecb & 0xbf;
  DAT_0000aecb = DAT_0000aecb | 0x80;
  DAT_00007784 = DAT_00007784 & 0x7f;
  return;
}



// Function: FUN_000349c4 @ 000349c4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000349c4(void)

{
  int iVar1;
  
  if ((uint)(_DAT_0000af58 << 8) >> 0x1c == 2) {
    DAT_0000aed0 = DAT_000028d8;
  }
  else if ((DAT_00003252 & 4) != 0) {
    DAT_0000aed0 = DAT_00003254;
  }
  iVar1 = DAT_0000aed0;
  if (DAT_0000aed0 < 0) {
    iVar1 = -DAT_0000aed0;
  }
  if (iVar1 < 5) {
    DAT_0000aecb = DAT_0000aecb | 4;
  }
  else {
    DAT_0000aecb = DAT_0000aecb & 0xfb;
  }
  if ((DAT_00003252 & 1) == 0) {
    DAT_0000aecb = DAT_0000aecb & 0xf7;
  }
  else {
    if ((DAT_00000bd9 & 4) == 0) {
      if ((DAT_0000af6c == 0) && ((DAT_00007785 & 2) == 0)) {
        DAT_0000af6c = DAT_0000c458 + DAT_00007778;
      }
    }
    else {
      DAT_0000af6c = 0;
    }
    if (DAT_000026e0 == 0) {
      DAT_0000af6c = 0;
      DAT_0000aecb = DAT_0000aecb | 8;
    }
    else if (DAT_0000aeca != 3) {
      if (DAT_0000aeca == 7) {
        DAT_00003254 = 0;
      }
      else {
        FUN_00035f0e();
      }
      iVar1 = DAT_00003254 >> 3;
      if (DAT_00003254 < 0) {
        if (((DAT_00003254 - iVar1) + 5 < DAT_0000aed0) ||
           (DAT_0000aed0 < iVar1 + DAT_00003254 + -5)) {
          DAT_0000aecb = DAT_0000aecb & 0xf7;
          if ((DAT_0000af6c != 0) && (DAT_0000af6c < DAT_00007778)) {
            DAT_0000af6c = 0;
            __m68k_trap(0xe);
          }
        }
        else {
          DAT_0000aecb = DAT_0000aecb | 8;
          DAT_0000af6c = 0;
        }
      }
      else if ((DAT_0000aed0 < (DAT_00003254 - iVar1) + -5) ||
              (iVar1 + DAT_00003254 + 5 < DAT_0000aed0)) {
        DAT_0000aecb = DAT_0000aecb & 0xf7;
        if ((DAT_0000af6c != 0) && (DAT_0000af6c < DAT_00007778)) {
          DAT_0000af6c = 0;
          __m68k_trap(0xe);
        }
      }
      else {
        DAT_0000aecb = DAT_0000aecb | 8;
        DAT_0000af6c = 0;
      }
    }
  }
  if ((DAT_01200815 & 0x80) != 0) {
    DAT_0000aedc = 0;
    DAT_00003254 = 0;
    DAT_00003258 = 0;
    DAT_0000aeca = DAT_0000aeca & 0x7f;
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0xa0;
    DAT_00003252 = DAT_00003252 & 0xfa;
    DAT_00003250 = DAT_00003250 & 0xc2 | 0x80;
    return;
  }
  if (((DAT_0000aeca & 0x80) == 0) && ((DAT_0000aecb & 0x40) == 0)) {
    return;
  }
  if (((DAT_0000aeca & 0x80) != 0) && ((DAT_0000aeca & 0x7f) == 0xf)) {
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0xa0;
    DAT_0000aeca = DAT_0000aeca & 0x7f;
    DAT_00003250 = DAT_00003250 & 0xcf;
    return;
  }
  if (((DAT_0000aecb & 0x40) != 0) && ((DAT_0000aeca & 0x80) == 0)) {
    if ((DAT_0000aeca == 1) && ((DAT_0000aecb & 8) != 0)) {
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
    if (DAT_0000aeca == 3) {
      if ((DAT_0000aecb & 4) == 0) {
        return;
      }
      DAT_000026e0 = 0;
      if ((DAT_00007784 & 4) == 0) {
        DAT_00002728 = 0;
        DAT_0000272c = 0;
        DAT_00002760 = 0;
        DAT_00002774 = 0;
        DAT_000027d8 = 0;
        DAT_000026f4 = 0;
        DAT_000027ec = 0;
        DAT_00002788 = 0;
        DAT_00002828 = 0;
        DAT_00000c9c = 0;
        DAT_00000ca0 = 0;
        DAT_00000ca4 = 0;
        DAT_00000c48 = 0;
        _DAT_00000c4c = 0;
        _DAT_00000c50 = 0;
        DAT_00000e4c = 0;
        _DAT_00000e50 = 0;
        _DAT_00000e54 = 0;
      }
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
    if (DAT_0000aeca == 6) {
      if ((uint)(DAT_00007778 - DAT_0000af64) < 0x14) {
        return;
      }
      DAT_00003250 = DAT_00003250 & 0xf7 | 5;
      if ((DAT_00003252 & 1) != 0) {
        DAT_0000aecb = DAT_0000aecb & 0xbf;
        DAT_0000aecb = DAT_0000aecb | 0x80;
        return;
      }
      if ((uint)(DAT_00007778 - DAT_0000af64) < 0x2e) {
        return;
      }
      __m68k_trap(0xe);
      DAT_0000aeca = 6;
      DAT_0000aecb = DAT_0000aecb | 0x20;
      DAT_00003252 = DAT_00003252 & 0xfa;
      FUN_00034984();
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
      return;
    }
    if (DAT_0000aeca == 8) {
      if ((uint)(DAT_00007778 - DAT_0000af64) < 0x14) {
        return;
      }
      DAT_00003250 = DAT_00003250 & 0xf7 | 5;
      if ((DAT_00003252 & 1) == 0) {
        if ((uint)(DAT_00007778 - DAT_0000af64) < 0x2e) {
          return;
        }
        __m68k_trap(0xe);
        DAT_0000aeca = 8;
        DAT_0000aecb = DAT_0000aecb | 0x20;
        DAT_00003252 = DAT_00003252 & 0xfa;
        FUN_00034984();
        return;
      }
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
    if (DAT_0000aeca == 9) {
      if ((uint)(DAT_00007778 - DAT_0000af64) < 0x14) {
        return;
      }
      DAT_00003250 = DAT_00003250 & 0xfb | 9;
      if ((DAT_00003252 & 1) == 0) {
        if ((uint)(DAT_00007778 - DAT_0000af64) < 0x2e) {
          return;
        }
        __m68k_trap(0xe);
        DAT_0000aeca = 9;
        DAT_0000aecb = DAT_0000aecb | 0x20;
        DAT_00003252 = DAT_00003252 & 0xfa;
        FUN_00034984();
        return;
      }
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
    if (DAT_0000aeca == 7) {
      iVar1 = DAT_0000aed0;
      if (DAT_0000aed0 < 0) {
        iVar1 = -DAT_0000aed0;
      }
      if ((10 < iVar1) && ((uint)(DAT_00007778 - DAT_0000af64) < 600)) {
        return;
      }
      DAT_00003250 = DAT_00003250 & 0xc2 | 0x80;
      if ((DAT_00003252 & 1) != 0) {
        if ((uint)(DAT_00007778 - DAT_0000af64) < 0x191) {
          return;
        }
        __m68k_trap(0xe);
        DAT_0000aeca = 7;
        DAT_0000aecb = DAT_0000aecb | 0x20;
        DAT_00003252 = DAT_00003252 & 0xfa;
        FUN_00034984();
        DAT_0000aecb = DAT_0000aecb & 0xbf;
        DAT_0000aecb = DAT_0000aecb | 0x80;
        return;
      }
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
      DAT_0000af6c = 0;
    }
  }
  if (((DAT_0000aeca & 0x80) != 0) && ((DAT_0000aecb & 0x40) == 0)) {
    DAT_0000aeca = DAT_0000aeca & 0x7f;
    DAT_0000aecb = DAT_0000aecb & 0x5f | 0x40;
    FUN_00034fb0();
  }
  return;
}



// Function: FUN_00034fb0 @ 00034fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00034fb0(void)

{
  int in_D0;
  ushort uVar1;
  short sVar2;
  
  if (DAT_0000aeca == '\x01') {
    uVar1 = (ushort)((uint)_DAT_0000af58 >> 0x1c);
    if (((uVar1 == 2) || (uVar1 == 5)) &&
       (in_D0 = DAT_0000aecc, (ushort)((uint)(_DAT_0000af58 << 0xc) >> 0x1c) != 2)) {
      if (DAT_0000aecc < 0) {
        in_D0 = -DAT_0000aecc;
      }
      sVar2 = (short)DAT_0000af54;
      if (in_D0 < (int)(&DAT_0000af34)[sVar2]) {
        in_D0 = (&DAT_0000af34)[sVar2];
        __m68k_trap(0xe);
      }
      if ((int)(&DAT_0000af10)[sVar2] < in_D0) {
        in_D0 = (&DAT_0000af10)[sVar2];
        __m68k_trap(0xe);
      }
      if (DAT_0000aecc < 0) {
        in_D0 = -in_D0;
      }
    }
    if ((DAT_0000aecb & 2) != 0) {
      in_D0 = -in_D0;
    }
    DAT_0000aedc = in_D0;
    FUN_00035f0e();
    if ((DAT_00003252 & 1) != 0) {
      if (DAT_000026e0 != 0) {
        return;
      }
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
      return;
    }
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0x80;
    return;
  }
  if (DAT_0000aeca == '\x03') {
    DAT_00003254 = 0;
    return;
  }
  if (DAT_0000aeca == '\x04') {
    DAT_0000aedc = DAT_0000aecc;
    if ((DAT_0000aecb & 2) != 0) {
      DAT_0000aedc = -DAT_0000aecc;
    }
    DAT_000026e0 = 1;
    FUN_00023db6();
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0x80;
    FUN_00035f0e();
    return;
  }
  if (DAT_0000aeca == '\x05') {
    DAT_00003250 = DAT_00003250 ^ 0xc;
    DAT_0000aecb = DAT_0000aecb ^ 2;
    DAT_0000aedc = -DAT_0000aedc;
    FUN_00035f0e();
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0x80;
    DAT_0000af68 = DAT_00007778;
    return;
  }
  if (DAT_0000aeca == '\x06') {
    DAT_00003250 = DAT_00003250 & 0x7f;
    FUN_00035f0e();
    DAT_0000af64 = DAT_00007778;
    return;
  }
  if (DAT_0000aeca == '\b') {
    DAT_00003250 = DAT_00003250 & 0x7f;
    DAT_0000aecb = DAT_0000aecb & 0xfd;
    if (DAT_0000aedc < 0) {
      DAT_0000aedc = -DAT_0000aedc;
    }
    FUN_00035f0e();
    DAT_0000af64 = DAT_00007778;
    return;
  }
  if (DAT_0000aeca != '\t') {
    if (DAT_0000aeca != '\a') {
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
      return;
    }
    DAT_00003254 = 0;
    DAT_0000af64 = DAT_00007778;
    return;
  }
  DAT_00003250 = DAT_00003250 & 0x7f;
  DAT_0000aecb = DAT_0000aecb | 2;
  if (0 < DAT_0000aedc) {
    DAT_0000aedc = -DAT_0000aedc;
  }
  FUN_00035f0e();
  DAT_0000af64 = DAT_00007778;
  return;
}



// Function: FUN_000351dc @ 000351dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000351dc(void)

{
  int iVar1;
  
  if ((DAT_00003252 & 1) == 0) {
    DAT_0000aed0 = 0;
    DAT_0000aecb = DAT_0000aecb & 0xf7 | 4;
  }
  else {
    DAT_0000aed0 = DAT_00003254;
    iVar1 = DAT_00003254;
    if (DAT_00003254 < 0) {
      iVar1 = -DAT_00003254;
    }
    if (iVar1 < 0xb) {
      DAT_0000aecb = DAT_0000aecb | 4;
    }
    else {
      DAT_0000aecb = DAT_0000aecb & 0xfb;
    }
    DAT_0000aecb = DAT_0000aecb | 8;
  }
  if ((((DAT_00003252 & 1) != 0) && (DAT_000026e0 != 0)) && (DAT_0000aeca != 3)) {
    FUN_00035f0e();
  }
  if (DAT_000026e0 == 0) {
    DAT_0000aecb = DAT_0000aecb | 8;
    DAT_00003252 = DAT_00003252 | 4;
  }
  if ((DAT_01200815 & 0x80) != 0) {
    DAT_00003254 = 0;
    DAT_0000aeca = DAT_0000aeca & 0x7f;
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0xa0;
    DAT_00003252 = DAT_00003252 & 0xfa;
    DAT_00003250 = DAT_00003250 & 0xc2 | 0x80;
    return;
  }
  if (((DAT_0000aeca & 0x80) != 0) && ((DAT_0000aeca & 0x7f) == 0xf)) {
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0xa0;
    DAT_0000aeca = DAT_0000aeca & 0x7f;
    DAT_00003250 = DAT_00003250 & 0xcf;
    return;
  }
  if (((DAT_0000aecb & 0x40) != 0) && ((DAT_0000aeca & 0x80) == 0)) {
    if ((DAT_000031ed & 1) == 0) {
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0xa0;
      DAT_0000aeca = DAT_0000aeca & 0x7f;
      DAT_00003250 = DAT_00003250 & 0xcf;
      return;
    }
    if ((DAT_0000aeca == 1) && ((DAT_0000aecb & 8) != 0)) {
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
    if (DAT_0000aeca == 3) {
      if ((DAT_0000aecb & 4) == 0) {
        return;
      }
      DAT_000026e0 = 0;
      if ((DAT_00007784 & 4) == 0) {
        DAT_00002728 = 0;
        DAT_0000272c = 0;
        DAT_00002760 = 0;
        DAT_00002774 = 0;
        DAT_000027d8 = 0;
        DAT_000026f4 = 0;
        DAT_000027ec = 0;
        DAT_00002788 = 0;
        DAT_00002828 = 0;
        DAT_00000c9c = 0;
        DAT_00000ca0 = 0;
        DAT_00000ca4 = 0;
        DAT_00000c48 = 0;
        _DAT_00000c4c = 0;
        _DAT_00000c50 = 0;
        DAT_00000e4c = 0;
        _DAT_00000e50 = 0;
        _DAT_00000e54 = 0;
      }
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
    if (DAT_0000aeca == 6) {
      if ((DAT_00003252 & 1) == 0) {
        return;
      }
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
    if (DAT_0000aeca == 8) {
      if ((DAT_00003252 & 1) == 0) {
        return;
      }
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
    if (DAT_0000aeca == 9) {
      if ((DAT_00003252 & 1) == 0) {
        return;
      }
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
  }
  if (((DAT_0000aeca & 0x80) != 0) && ((DAT_0000aecb & 0x40) == 0)) {
    DAT_0000aeca = DAT_0000aeca & 0x7f;
    DAT_0000aecb = DAT_0000aecb & 0x5f | 0x40;
    FUN_000354a6();
  }
  return;
}



// Function: FUN_000354a6 @ 000354a6

void FUN_000354a6(void)

{
  if (DAT_0000aeca == '\x01') {
    DAT_0000aedc = DAT_0000aecc;
    if ((DAT_0000aecb & 2) != 0) {
      DAT_0000aedc = -DAT_0000aecc;
    }
    FUN_00035f0e();
    DAT_00003250 = DAT_00003250 & 0x7f;
    if ((DAT_00003252 & 1) == 0) {
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
    return;
  }
  if (DAT_0000aeca == '\x03') {
    DAT_00003254 = 0;
    return;
  }
  if (DAT_0000aeca == '\x04') {
    DAT_000026e0 = 1;
    FUN_00023db6();
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0x80;
    return;
  }
  if (DAT_0000aeca == '\x05') {
    DAT_00003250 = DAT_00003250 ^ 0xc;
    DAT_0000aecb = DAT_0000aecb ^ 2;
    DAT_0000aedc = -DAT_0000aedc;
    FUN_00035f0e();
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0x80;
    return;
  }
  if (DAT_0000aeca == '\x06') {
    DAT_00003250 = DAT_00003250 & 0x77 | 5;
    FUN_00035f0e();
    return;
  }
  if (DAT_0000aeca == '\b') {
    DAT_00003250 = DAT_00003250 & 0x77 | 5;
    DAT_0000aecb = DAT_0000aecb & 0xfd;
    if (DAT_0000aedc < 0) {
      DAT_0000aedc = -DAT_0000aedc;
    }
    FUN_00035f0e();
    return;
  }
  if (DAT_0000aeca == '\t') {
    DAT_00003250 = DAT_00003250 & 0x7b | 9;
    DAT_0000aecb = DAT_0000aecb | 2;
    if (0 < DAT_0000aedc) {
      DAT_0000aedc = -DAT_0000aedc;
    }
    FUN_00035f0e();
    return;
  }
  if (DAT_0000aeca == '\a') {
    DAT_00003252 = DAT_00003252 & 0xfa;
    DAT_00003250 = DAT_00003250 & 0xc2 | 0x80;
    DAT_0000aecb = DAT_0000aecb & 0xb7;
    DAT_0000aecb = DAT_0000aecb | 0x80;
    DAT_00003254 = 0;
    return;
  }
  DAT_0000aecb = DAT_0000aecb & 0xbf;
  DAT_0000aecb = DAT_0000aecb | 0x80;
  return;
}



// Function: FUN_00035682 @ 00035682

void FUN_00035682(void)

{
  byte bVar1;
  int iVar2;
  
  DAT_0000aed0 = DAT_000028d8;
  iVar2 = DAT_000028d8;
  if (DAT_000028d8 < 0) {
    iVar2 = -DAT_000028d8;
  }
  if (iVar2 < 0xb) {
    DAT_0000aecb = DAT_0000aecb | 4;
  }
  else {
    DAT_0000aecb = DAT_0000aecb & 0xfb;
  }
  if ((DAT_01200815 & 0x80) != 0) {
    DAT_00003254 = 0;
    DAT_0000aeca = DAT_0000aeca & 0x7f;
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0xa0;
    DAT_00003252 = DAT_00003252 & 0xfa;
    DAT_00003250 = DAT_00003250 & 0xf2;
    DAT_00003250 = DAT_00003250 | 0x80;
    DAT_00007785 = DAT_00007785 & 0xcf;
    return;
  }
  if ((DAT_00003252 & 4) == 0) {
    DAT_0000aecb = DAT_0000aecb & 0xf7;
  }
  else {
    DAT_0000aecb = DAT_0000aecb | 8;
  }
  if (DAT_00003104 == 0) {
    if ((DAT_000031e8 & 1) == 0) {
      DAT_00003250 = DAT_00003250 & 0x7f;
    }
    else {
      DAT_00003250 = DAT_00003250 | 0x80;
      if ((DAT_0000aecb & 4) != 0) {
        DAT_00007785 = DAT_00007785 & 0xcf;
      }
    }
  }
  if ((((DAT_0000aecb & 4) != 0) && ((DAT_00003252 & 4) == 0)) && ((DAT_00003250 & 1) == 0)) {
    if ((DAT_00003252 & 0x40) == 0) {
      DAT_00003250 = DAT_00003250 & 0xfd;
    }
    else {
      DAT_00003250 = DAT_00003250 | 2;
    }
  }
  bVar1 = DAT_00003250;
  if ((DAT_00000bd9 & 4) == 0) {
    if ((DAT_000031e8 & 4) == 0) {
      DAT_00003250 = DAT_00003250 & 0xfa;
      if ((DAT_000031e8 & 8) == 0) {
        if (DAT_00003104 == 0) {
          DAT_00003250 = bVar1 & 0xf2;
        }
      }
      else if (((((bVar1 & 8) == 0) && (((DAT_0000aecb & 4) != 0 || ((DAT_00007785 & 0x20) != 0))))
               && ((DAT_00007785 & 0x10) == 0)) && (DAT_00003104 == 0)) {
        DAT_00003250 = DAT_00003250 | 9;
        DAT_00007785 = DAT_00007785 | 0x20;
      }
    }
    else if (((((DAT_00003250 & 4) == 0) && ((DAT_00003250 & 8) == 0)) &&
             (((DAT_0000aecb & 4) != 0 || ((DAT_00007785 & 0x10) != 0)))) &&
            (((DAT_00007785 & 0x20) == 0 && (DAT_00003104 == 0)))) {
      DAT_00003250 = DAT_00003250 & 0xf7;
      DAT_00003250 = DAT_00003250 | 5;
      DAT_00007785 = DAT_00007785 | 0x10;
    }
  }
  if (((DAT_0000aeca & 0x80) != 0) && ((DAT_0000aeca & 0x7f) == 0xf)) {
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0xa0;
    return;
  }
  if ((DAT_0000aecb & 0x40) == 0) {
    if (((DAT_0000aeca & 0x80) != 0) && ((DAT_0000aecb & 0x40) == 0)) {
      DAT_0000aeca = DAT_0000aeca & 0x7f;
      DAT_0000aecb = DAT_0000aecb & 0x5f | 0x40;
      FUN_00035912();
    }
    return;
  }
  if ((DAT_00003252 & 4) == 0) {
    return;
  }
  DAT_0000aecb = DAT_0000aecb & 0xbf;
  DAT_0000aecb = DAT_0000aecb | 0x80;
  return;
}



// Function: FUN_00035912 @ 00035912

void FUN_00035912(void)

{
  if (DAT_0000aeca == '\x01') {
    DAT_0000aedc = DAT_0000aecc;
    FUN_00035f0e();
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0x80;
    return;
  }
  if (DAT_0000aeca == '\x06') {
    if ((DAT_00003252 & 4) == 0) {
      DAT_00003250 = DAT_00003250 | 5;
      FUN_00032176();
    }
    else {
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
    return;
  }
  if (DAT_0000aeca == '\b') {
    if ((DAT_00003252 & 4) == 0) {
      DAT_00003250 = DAT_00003250 | 5;
      FUN_00032176();
    }
    else {
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
    return;
  }
  if (DAT_0000aeca == '\t') {
    if ((DAT_00003252 & 4) == 0) {
      DAT_00003250 = DAT_00003250 | 5;
      FUN_00032176();
    }
    else {
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
    return;
  }
  if (DAT_0000aeca == '\a') {
    DAT_00003254 = 0;
    DAT_00003250 = DAT_00003250 & 0xf2;
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0x80;
    return;
  }
  if (DAT_0000aeca == '\x05') {
    DAT_00003250 = DAT_00003250 ^ 0xc;
    DAT_0000aecb = DAT_0000aecb ^ 2;
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0x80;
    return;
  }
  DAT_0000aecb = DAT_0000aecb & 0xbf;
  DAT_0000aecb = DAT_0000aecb | 0x80;
  return;
}



// Function: FUN_00035a6c @ 00035a6c

void FUN_00035a6c(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  DAT_0000aed0 = DAT_000028d8;
  iVar3 = DAT_000028d8;
  if (DAT_000028d8 < 0) {
    iVar3 = -DAT_000028d8;
  }
  if (iVar3 < 0xb) {
    DAT_0000aecb = DAT_0000aecb | 4;
  }
  else {
    DAT_0000aecb = DAT_0000aecb & 0xfb;
  }
  if ((DAT_01200815 & 0x80) != 0) {
    DAT_0000aedc = 0;
    DAT_00003254 = 0;
    DAT_00003258 = 0;
    DAT_0000aeca = DAT_0000aeca & 0x7f;
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0xa0;
    DAT_00003252 = DAT_00003252 & 0xfa;
    DAT_00003250 = DAT_00003250 & 0xf2;
    DAT_00003250 = DAT_00003250 | 0x80;
    return;
  }
  if ((DAT_00003252 & 4) == 0) {
    DAT_0000aecb = DAT_0000aecb & 0xf7;
  }
  else {
    if ((DAT_0000aecb & 4) != 0) {
      DAT_0000aecc = DAT_0000c45c;
      DAT_00003254 = DAT_0000c45c;
      DAT_0000aedc = DAT_0000c45c;
    }
    FUN_00035f0e();
    iVar3 = DAT_00003254;
    if ((DAT_00007785 & 8) != 0) {
      FUN_000360be();
    }
    if (DAT_0000aed0 < 0) {
      iVar1 = -DAT_00003254;
      if (((iVar1 - (iVar1 >> 3)) + 5 < DAT_0000aed0) || (DAT_0000aed0 < (iVar1 >> 3) + iVar1 + -5))
      {
        DAT_0000aecb = DAT_0000aecb & 0xf7;
        DAT_00003254 = iVar3;
      }
      else {
        DAT_0000aecb = DAT_0000aecb | 8;
        DAT_00003254 = iVar3;
      }
    }
    else if ((DAT_0000aed0 < (DAT_00003254 - (DAT_00003254 >> 3)) + -5) ||
            ((DAT_00003254 >> 3) + DAT_00003254 + 5 < DAT_0000aed0)) {
      DAT_0000aecb = DAT_0000aecb & 0xf7;
      DAT_00003254 = iVar3;
    }
    else {
      DAT_0000aecb = DAT_0000aecb | 8;
      DAT_00003254 = iVar3;
    }
  }
  if (DAT_00003104 == 0) {
    if ((DAT_000031e8 & 1) == 0) {
      DAT_00003250 = DAT_00003250 & 0x7f;
    }
    else {
      DAT_00003250 = DAT_00003250 | 0x80;
    }
  }
  bVar2 = DAT_00003250;
  if ((DAT_00000bd9 & 4) == 0) {
    if ((DAT_000031e8 & 4) == 0) {
      DAT_00003250 = DAT_00003250 & 0xfa;
      if ((DAT_000031e8 & 8) == 0) {
        DAT_00003250 = bVar2 & 0xf2;
        DAT_0000aedc = 0;
      }
      else if (((bVar2 & 8) == 0) && (((DAT_0000aecb & 4) != 0 || (DAT_000028d8 < 0)))) {
        DAT_00003250 = DAT_00003250 | 9;
        DAT_0000aeca = 0x81;
      }
    }
    else if ((((DAT_00003250 & 4) == 0) && ((DAT_00003250 & 8) == 0)) &&
            (((DAT_0000aecb & 4) != 0 || (-1 < DAT_000028d8)))) {
      DAT_00003250 = DAT_00003250 & 0xf7;
      DAT_00003250 = DAT_00003250 | 5;
      DAT_0000aeca = 0x81;
    }
  }
  if (((DAT_0000aeca & 0x80) != 0) && ((DAT_0000aeca & 0x7f) == 0xf)) {
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0xa0;
    return;
  }
  if ((DAT_0000aecb & 0x40) == 0) {
    if (((DAT_0000aeca & 0x80) != 0) && ((DAT_0000aecb & 0x40) == 0)) {
      DAT_0000aeca = DAT_0000aeca & 0x7f;
      DAT_0000aecb = DAT_0000aecb & 0x5f | 0x40;
      FUN_00035d30();
    }
    return;
  }
  if ((DAT_00003252 & 4) == 0) {
    return;
  }
  DAT_0000aecb = DAT_0000aecb & 0xbf;
  DAT_0000aecb = DAT_0000aecb | 0x80;
  return;
}



// Function: FUN_00035d30 @ 00035d30

void FUN_00035d30(void)

{
  short sVar1;
  
  if (DAT_0000aeca == '\x01') {
    DAT_00003254 = DAT_0000aecc;
    sVar1 = (short)DAT_0000af54;
    if (DAT_0000aecc < (int)(&DAT_0000af34)[sVar1]) {
      __m68k_trap(0xe);
      DAT_0000aedc = (&DAT_0000af34)[sVar1];
      DAT_0000aedc = FUN_0000e784();
    }
    else {
      DAT_0000aedc = DAT_0000aecc;
      if ((int)(&DAT_0000af10)[sVar1] < DAT_0000aecc) {
        __m68k_trap(0xe);
        DAT_0000aedc = (&DAT_0000af10)[sVar1];
        DAT_0000aedc = FUN_0000e784();
      }
    }
    if ((DAT_0000aecb & 2) != 0) {
      DAT_0000aedc = -DAT_0000aedc;
    }
    FUN_00035f0e();
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0x80;
    return;
  }
  if (DAT_0000aeca == '\x06') {
    if ((DAT_00003252 & 4) == 0) {
      DAT_00003250 = DAT_00003250 | 5;
      FUN_00032176();
    }
    else {
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
    return;
  }
  if (DAT_0000aeca == '\b') {
    if ((DAT_00003252 & 4) == 0) {
      DAT_00003250 = DAT_00003250 | 5;
      FUN_00032176();
    }
    else {
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
    return;
  }
  if (DAT_0000aeca == '\t') {
    if ((DAT_00003252 & 4) == 0) {
      DAT_00003250 = DAT_00003250 | 5;
      FUN_00032176();
    }
    else {
      DAT_0000aecb = DAT_0000aecb & 0xbf;
      DAT_0000aecb = DAT_0000aecb | 0x80;
    }
    return;
  }
  if (DAT_0000aeca == '\a') {
    DAT_00003254 = 0;
    DAT_00003250 = DAT_00003250 & 0xf2;
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0x80;
    return;
  }
  if (DAT_0000aeca == '\x05') {
    DAT_00003250 = DAT_00003250 ^ 0xc;
    DAT_0000aecb = DAT_0000aecb ^ 2;
    if ((DAT_0000aecb & 2) != 0) {
      DAT_0000aedc = -DAT_0000aedc;
      FUN_00035f0e();
    }
    DAT_0000aecb = DAT_0000aecb & 0xbf;
    DAT_0000aecb = DAT_0000aecb | 0x80;
    return;
  }
  DAT_0000aecb = DAT_0000aecb & 0xbf;
  DAT_0000aecb = DAT_0000aecb | 0x80;
  return;
}



// Function: FUN_00035f0e @ 00035f0e

void FUN_00035f0e(void)

{
  int iVar1;
  short sVar2;
  
  if ((DAT_00007785 & 2) == 0) {
    if (-1 < DAT_0000af54) {
      DAT_00003254 = DAT_0000aedc;
      if ((DAT_00000bd9 & 4) == 0) {
        DAT_00003254 = (DAT_0000aed8 * DAT_0000aedc) / 0x640;
      }
      sVar2 = (short)DAT_0000af54;
      if (DAT_00003254 < 0) {
        iVar1 = -DAT_00003254;
        if (iVar1 < (int)(&DAT_0000af34)[sVar2]) {
          iVar1 = (&DAT_0000af34)[sVar2];
        }
        if ((int)(&DAT_0000af10)[sVar2] < iVar1) {
          iVar1 = (&DAT_0000af10)[sVar2];
        }
        DAT_00003254 = -iVar1;
      }
      else {
        if (DAT_00003254 < (int)(&DAT_0000af34)[sVar2]) {
          DAT_00003254 = (&DAT_0000af34)[sVar2];
        }
        if ((int)(&DAT_0000af10)[sVar2] < DAT_00003254) {
          DAT_00003254 = (&DAT_0000af10)[sVar2];
        }
      }
    }
  }
  else {
    DAT_00003258 = DAT_0000aedc;
  }
  return;
}



// Function: FUN_00035fa4 @ 00035fa4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00035fa4(void)

{
  int iVar1;
  int extraout_D1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 *puVar5;
  undefined4 *extraout_A1;
  
  puVar5 = &DAT_0000af10;
  if ((DAT_00007785 & 2) == 0) {
    iVar2 = DAT_00003258;
    if (-1 < DAT_0000af54) {
      iVar2 = DAT_0000af54;
      if (((ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c) == 5) && ((DAT_00007785 & 8) != 0)) {
        FUN_000360be();
        iVar2 = extraout_D1;
        puVar5 = extraout_A1;
      }
      uVar4 = (ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c);
      if (((uVar4 == 1) || (uVar4 == 5)) || (iVar1 = DAT_00003254, uVar4 == 7)) {
        DAT_0000325c = (int)(((longdouble)_DAT_0000af0c / (longdouble)(int)puVar5[(short)iVar2]) *
                            (longdouble)0x10);
        iVar1 = (int)(((longdouble)_DAT_0000af0c / (longdouble)(int)puVar5[(short)iVar2]) *
                     (longdouble)DAT_00003254);
      }
      if ((((ushort)((uint)_DAT_0000af58 >> 0x1c) == 1) &&
          ((ushort)((uint)(_DAT_0000af58 << 0xc) >> 0x1c) == 2)) && (iVar1 < 0)) {
        iVar1 = -iVar1;
      }
      iVar2 = DAT_00003258;
      if (((iVar1 != DAT_00003258) && (DAT_0000c450 < DAT_00007778)) &&
         (DAT_0000c450 = DAT_00007778, iVar2 = iVar1, DAT_0000c454 != 0)) {
        uVar3 = DAT_0000c454 / 100;
        if (uVar3 == 0) {
          uVar3 = 1;
        }
        if (iVar1 - DAT_00003258 < 0) {
          iVar2 = DAT_00003258 - uVar3;
          if ((int)(DAT_00003258 - uVar3) < iVar1) {
            iVar2 = iVar1;
          }
        }
        else {
          iVar2 = DAT_00003258 + uVar3;
          if (iVar1 < (int)(DAT_00003258 + uVar3)) {
            iVar2 = iVar1;
          }
        }
      }
    }
  }
  else {
    DAT_00003258 = DAT_0000aedc;
    iVar2 = DAT_00003258;
  }
  DAT_00003258 = iVar2;
  return;
}



// Function: FUN_000360be @ 000360be

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000360be(void)

{
  longdouble lVar1;
  longdouble lVar2;
  
  if ((DAT_0000aef8 & 0x80) == 0) {
    lVar2 = (longdouble)(undefined1  [12])0x5d30d94cf40aba80;
  }
  else {
    lVar2 = (longdouble)(undefined1  [12])0x524dc472cff006b;
  }
  lVar2 = (longdouble)DAT_00003254 /
          (ABS((longdouble)DAT_00002750 - (longdouble)_DAT_00009f88) * lVar2);
  if (DAT_0000aee0 != 0) {
    if ((int)(&DAT_0000af10)[(short)DAT_0000af54] < DAT_0000aee0) {
      DAT_0000aee0 = (&DAT_0000af10)[(short)DAT_0000af54];
    }
    lVar1 = lVar2 - (longdouble)DAT_0000aee0;
    if (lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1) {
      lVar2 = (longdouble)DAT_0000aee0;
    }
  }
  DAT_00003254 = (int)lVar2;
  return;
}



// Function: FUN_00036148 @ 00036148

void FUN_00036148(void)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  
  iVar1 = DAT_000030e4 + -0x33a;
  if (DAT_000030e4 < 0x33a) {
    iVar1 = 0;
  }
  uVar2 = (uint)(iVar1 << 4) / 0x9f;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  if ((DAT_00003252 & 0x40) == 0) {
    uVar2 = (uint)(byte)(&DAT_000361e6)[(short)uVar2] * 2;
    if ((int)uVar2 < (int)DAT_0000aed0) {
      uVar2 = uVar2 + 2;
    }
  }
  else {
    uVar2 = (uint)(ushort)(&DAT_000362e8)[(short)uVar2];
    if ((int)uVar2 < (int)DAT_0000aed0) {
      uVar2 = uVar2 + 0x14;
    }
  }
  sVar3 = (short)DAT_0000af54;
  if ((int)uVar2 < (int)(&DAT_0000af34)[sVar3]) {
    uVar2 = (&DAT_0000af34)[sVar3];
  }
  if ((int)(&DAT_0000af10)[sVar3] < (int)uVar2) {
    uVar2 = (&DAT_0000af10)[sVar3];
  }
  DAT_0000aed0 = uVar2;
  return;
}



// Function: FUN_00036a30 @ 00036a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00036a30(void)

{
  ushort uVar1;
  
  uVar1 = (ushort)((uint)(_DAT_0000af58 << 4) >> 0x1c);
  if (uVar1 == 0) {
    FUN_00036aaa();
    return;
  }
  if (uVar1 == 1) {
    FUN_00036ad8();
    return;
  }
  if (uVar1 == 7) {
    FUN_00036b84();
    return;
  }
  if (uVar1 == 8) {
    FUN_00036d76();
    return;
  }
  if (uVar1 == 2) {
    FUN_00036f1e();
    return;
  }
  if (uVar1 == 3) {
    FUN_000164ac();
    return;
  }
  if (uVar1 == 4) {
    FUN_00037186();
    return;
  }
  if (uVar1 == 5) {
    FUN_000372d8();
    return;
  }
  return;
}



// Function: FUN_00036aaa @ 00036aaa

void FUN_00036aaa(void)

{
  if ((DAT_00003051 & 0x20) == 0) {
    DAT_00003252 = DAT_00003252 & 0xfb;
  }
  else {
    DAT_00003252 = DAT_00003252 | 4;
  }
  if ((DAT_00003051 & 0x20) == 0) {
    DAT_00003252 = DAT_00003252 & 0xfe;
  }
  else {
    DAT_00003252 = DAT_00003252 | 1;
  }
  return;
}



// Function: FUN_00036ad8 @ 00036ad8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00036ad8(void)

{
  if ((DAT_00003250 & 1) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xfffffffd;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 2;
  }
  if ((DAT_00003250 & 0x40) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xfffffffe;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 1;
  }
  if ((DAT_00003250 & 1) == 0) {
    DAT_000031e0 = DAT_000031e0 & 0xfd;
    DAT_00003252 = DAT_00003252 & 0xfa;
  }
  else if (DAT_00003104 == 0) {
    if (((byte)DAT_00003248 & 1) == 0) {
      DAT_000031e0 = DAT_000031e0 | 2;
    }
    else {
      DAT_000031e0 = DAT_000031e0 & 0xfd;
    }
    if (((byte)DAT_00003248 & 1) == 0) {
      DAT_00003252 = DAT_00003252 & 0xfe;
    }
    else {
      DAT_00003252 = DAT_00003252 | 1;
    }
    if (((byte)DAT_00003248 & 1) == 0) {
      DAT_00003252 = DAT_00003252 & 0xfb;
    }
    else {
      DAT_00003252 = DAT_00003252 | 4;
    }
  }
  else {
    DAT_000031e0 = DAT_000031e0 & 0xfd;
    DAT_00003252 = DAT_00003252 & 0xfa;
  }
  _DAT_00003218 = _DAT_000031f4;
  return;
}



// Function: FUN_00036b84 @ 00036b84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00036b84(void)

{
  bool bVar1;
  bool bVar2;
  
  if (((byte)DAT_00003248 & 1) == 0) {
    DAT_000031e3 = DAT_000031e3 | 0x10;
  }
  else {
    DAT_000031e3 = DAT_000031e3 & 0xef;
  }
  bVar1 = ((byte)DAT_00003248 & 2) == 0;
  if (bVar1) {
    DAT_00003252 = DAT_00003252 & 0xbf;
  }
  else {
    DAT_00003252 = DAT_00003252 | 0x40;
  }
  bVar2 = ((byte)DAT_00003248 & 4) == 0;
  if (bVar2) {
    DAT_00003252 = DAT_00003252 & 0xdf;
  }
  else {
    DAT_00003252 = DAT_00003252 | 0x20;
  }
  if (((byte)DAT_00003248 & 8) == 0) {
    DAT_00003252 = DAT_00003252 & 0x7f;
  }
  else {
    DAT_00003252 = DAT_00003252 | 0x80;
  }
  if ((DAT_00003250 & 0x40) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xfffffffe;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 1;
  }
  if ((DAT_00003250 & 1) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xfffffffd;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 2;
  }
  if ((DAT_00003251 & 4) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xfffffffb;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 4;
  }
  if ((DAT_00003251 & 2) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xfffffff7;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 8;
  }
  if ((DAT_00003251 & 1) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xffffffef;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 0x10;
  }
  if ((DAT_00003250 & 1) == 0) {
    DAT_000031e0 = DAT_000031e0 & 0xfd;
    DAT_000031e2 = DAT_000031e2 & 0xfb;
    DAT_00003252 = DAT_00003252 & 0xfa;
    if (bVar1) {
      if (bVar2) {
        DAT_0000af54 = 0xffffffff;
      }
      else {
        DAT_0000af54 = 0;
      }
    }
    else if (bVar2) {
      DAT_0000af54 = 1;
    }
    else {
      DAT_0000af54 = 0xffffffff;
    }
  }
  else if (DAT_00003104 == 0) {
    if (((byte)DAT_00003248 & 1) == 0) {
      DAT_00003252 = DAT_00003252 & 0xfe;
    }
    else {
      DAT_00003252 = DAT_00003252 | 1;
    }
    if (((byte)DAT_00003248 & 1) == 0) {
      DAT_00003252 = DAT_00003252 & 0xfb;
    }
    else {
      DAT_00003252 = DAT_00003252 | 4;
    }
    if ((DAT_00007785 & 2) == 0) {
      if (bVar1) {
        if (bVar2) {
          DAT_0000af54 = 0xffffffff;
          __m68k_trap(0xe);
        }
        else {
          DAT_0000af54 = 0;
        }
      }
      else if (bVar2) {
        DAT_0000af54 = 1;
      }
      else {
        DAT_0000af54 = 0xffffffff;
        __m68k_trap(0xe);
      }
      if ((DAT_00003252 & 0x80) == 0) {
        __m68k_trap(0xe);
      }
    }
  }
  else {
    DAT_000031e0 = DAT_000031e0 & 0xfd;
    DAT_000031e2 = DAT_000031e2 & 0xfb;
    DAT_00003252 = DAT_00003252 & 0xfa;
  }
  _DAT_00003218 = _DAT_000031f4;
  return;
}



// Function: FUN_00036d76 @ 00036d76

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00036d76(void)

{
  if (((byte)DAT_00003248 & 1) == 0) {
    DAT_000031e8 = DAT_000031e8 & 0xfd;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 2;
  }
  if (((byte)DAT_00003248 & 2) == 0) {
    DAT_000031e8 = DAT_000031e8 & 0xfb;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 4;
  }
  if (((byte)DAT_00003248 & 4) == 0) {
    DAT_000031e8 = DAT_000031e8 & 0xf7;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 8;
  }
  if (((byte)DAT_00003248 & 8) == 0) {
    DAT_000031e8 = DAT_000031e8 & 0xfe;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 1;
  }
  if (((byte)DAT_00003248 & 0x10) == 0) {
    DAT_00003252 = DAT_00003252 & 0xdf;
  }
  else {
    DAT_00003252 = DAT_00003252 | 0x20;
  }
  if (((byte)DAT_00003248 & 0x10) == 0) {
    DAT_00003252 = DAT_00003252 | 0x40;
  }
  else {
    DAT_00003252 = DAT_00003252 & 0xbf;
  }
  if ((DAT_00003250 & 0x40) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xfffffffe;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 1;
  }
  if ((DAT_00003250 & 4) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xfffffffd;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 2;
  }
  if ((DAT_00003250 & 8) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xfffffffb;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 4;
  }
  if ((DAT_00003250 & 0x80) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xfffffff7;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 8;
  }
  DAT_0000af54 = (uint)((DAT_00003252 & 0x40) != 0);
  if (DAT_00003104 < 1) {
    DAT_00003104 = 0;
  }
  else {
    DAT_00003104 = DAT_00003104 + -1;
  }
  if (((DAT_00003250 & 1) != 0) && ((DAT_00003108 & 1) == 0)) {
    DAT_00003104 = 0xc;
  }
  DAT_00003108 = DAT_00003250;
  if ((DAT_00003250 & 1) == 0) {
    DAT_000031e0 = DAT_000031e0 & 0xfd;
    DAT_00003252 = DAT_00003252 & 0xfa;
  }
  else if (DAT_00003104 == 0) {
    if ((DAT_00003250 & 1) == 0) {
      DAT_000031e0 = DAT_000031e0 | 2;
    }
    else {
      DAT_000031e0 = DAT_000031e0 & 0xfd;
    }
    if ((DAT_00003250 & 1) == 0) {
      DAT_00003252 = DAT_00003252 & 0xfe;
    }
    else {
      DAT_00003252 = DAT_00003252 | 1;
    }
    if (((byte)DAT_00003248 & 0x20) == 0) {
      DAT_00003252 = DAT_00003252 & 0xfb;
    }
    else {
      DAT_00003252 = DAT_00003252 | 4;
    }
  }
  else {
    DAT_000031e0 = DAT_000031e0 & 0xfd;
    DAT_00003252 = DAT_00003252 & 0xfa;
  }
  _DAT_00003218 = _DAT_000031f4;
  return;
}



// Function: FUN_00036f1e @ 00036f1e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00036f1e(void)

{
  if (((byte)DAT_00003248 & 1) == 0) {
    DAT_000031e8 = DAT_000031e8 & 0xfd;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 2;
  }
  if (((byte)DAT_00003248 & 2) == 0) {
    DAT_000031e8 = DAT_000031e8 & 0xfb;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 4;
  }
  if (((byte)DAT_00003248 & 4) == 0) {
    DAT_000031e8 = DAT_000031e8 & 0xf7;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 8;
  }
  if (((byte)DAT_00003248 & 8) == 0) {
    DAT_000031e8 = DAT_000031e8 & 0xfe;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 1;
  }
  if (((byte)DAT_00003248 & 0x10) == 0) {
    DAT_00003252 = DAT_00003252 | 0x20;
  }
  else {
    DAT_00003252 = DAT_00003252 & 0xdf;
  }
  if (((byte)DAT_00003248 & 0x10) == 0) {
    DAT_00003252 = DAT_00003252 & 0xbf;
  }
  else {
    DAT_00003252 = DAT_00003252 | 0x40;
  }
  if ((DAT_00003250 & 0x40) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xfffffffe;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 1;
  }
  if ((DAT_00003250 & 4) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xfffffffd;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 2;
  }
  if ((DAT_00003250 & 8) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xfffffffb;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 4;
  }
  if ((DAT_00003250 & 0x80) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xfffffff7;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 8;
  }
  if ((DAT_00003250 & 0x10) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xffffffef;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 0x10;
  }
  if ((DAT_00003250 & 0x20) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xffffffdf;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 0x20;
  }
  DAT_0000af54 = (uint)((DAT_00003252 & 0x40) != 0);
  if ((DAT_00003250 & 4) == 0) {
    if ((DAT_00003250 & 8) == 0) {
      DAT_00003252 = DAT_00003252 & 0xfa;
    }
    else {
      if (((((byte)DAT_00003248 & 0x20) != 0) && ((DAT_0000310b & 0x20) != 0)) &&
         (((DAT_0000310c & 0x20) != 0 && ((DAT_0000310d & 0x20) != 0)))) {
        if (((byte)DAT_00003248 & 0x20) == 0) {
          DAT_00003252 = DAT_00003252 & 0xfb;
        }
        else {
          DAT_00003252 = DAT_00003252 | 4;
        }
      }
      if ((((((byte)DAT_00003248 & 0x20) == 0) && ((DAT_0000310b & 0x20) == 0)) &&
          ((DAT_0000310c & 0x20) == 0)) && ((DAT_0000310d & 0x20) == 0)) {
        if (((byte)DAT_00003248 & 0x20) == 0) {
          DAT_00003252 = DAT_00003252 & 0xfb;
        }
        else {
          DAT_00003252 = DAT_00003252 | 4;
        }
      }
    }
  }
  else {
    if ((((((byte)DAT_00003248 & 0x20) != 0) && ((DAT_0000310b & 0x20) != 0)) &&
        ((DAT_0000310c & 0x20) != 0)) && ((DAT_0000310d & 0x20) != 0)) {
      if (((byte)DAT_00003248 & 0x20) == 0) {
        DAT_00003252 = DAT_00003252 & 0xfb;
      }
      else {
        DAT_00003252 = DAT_00003252 | 4;
      }
      if (((byte)DAT_00003248 & 0x20) == 0) {
        DAT_00003252 = DAT_00003252 & 0xfe;
      }
      else {
        DAT_00003252 = DAT_00003252 | 1;
      }
    }
    if (((((byte)DAT_00003248 & 0x20) == 0) && ((DAT_0000310b & 0x20) == 0)) &&
       (((DAT_0000310c & 0x20) == 0 && ((DAT_0000310d & 0x20) == 0)))) {
      if (((byte)DAT_00003248 & 0x20) == 0) {
        DAT_00003252 = DAT_00003252 & 0xfb;
      }
      else {
        DAT_00003252 = DAT_00003252 | 4;
      }
      if (((byte)DAT_00003248 & 0x20) == 0) {
        DAT_00003252 = DAT_00003252 & 0xfe;
      }
      else {
        DAT_00003252 = DAT_00003252 | 1;
      }
    }
  }
  _DAT_00003218 = _DAT_000031f4;
  DAT_0000310d = DAT_0000310c;
  DAT_0000310c = DAT_0000310b;
  DAT_0000310b = (byte)DAT_00003248;
  return;
}



// Function: FUN_00037186 @ 00037186

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00037186(void)

{
  if ((DAT_000031ed & 1) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xfffffff9;
    DAT_00003250 = DAT_00003250 & 0xf2;
  }
  else {
    if ((DAT_00003250 & 4) == 0) {
      _DAT_000031f4 = _DAT_000031f4 & 0xfffffffd;
    }
    else {
      _DAT_000031f4 = _DAT_000031f4 | 2;
    }
    if ((DAT_00003250 & 8) == 0) {
      _DAT_000031f4 = _DAT_000031f4 & 0xfffffffb;
    }
    else {
      _DAT_000031f4 = _DAT_000031f4 | 4;
    }
  }
  if ((DAT_00003250 & 0x40) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xfffffffe;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 1;
  }
  if (((DAT_00003250 & 0x80) == 0) && ((_DAT_000031f4 & 0x20) != 0)) {
    DAT_00003104 = 0x14;
  }
  if ((DAT_00003250 & 0x80) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xffffffdf;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 0x20;
  }
  if ((DAT_00003104 < 0xc) && (6 < DAT_00003104)) {
    _DAT_000031f4 = _DAT_000031f4 | 0x40;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 & 0xffffffbf;
  }
  if (DAT_00003104 < 1) {
    DAT_00003104 = 0;
    _DAT_000031f4 = _DAT_000031f4 & 0xffffffbf;
  }
  else {
    DAT_00003104 = DAT_00003104 + -1;
  }
  if ((DAT_000031e8 & 2) == 0) {
    DAT_00003252 = DAT_00003252 & 0xfb;
  }
  else {
    DAT_00003252 = DAT_00003252 | 4;
  }
  if (((byte)DAT_00003248 & 2) == 0) {
    DAT_00003252 = DAT_00003252 & 0xfe;
  }
  else {
    DAT_00003252 = DAT_00003252 | 1;
  }
  if ((DAT_00003250 & 2) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xfffffff7 | 0x10;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 & 0xffffffef | 8;
  }
  if ((DAT_0000aefa & 2) == 0) {
    DAT_000031ee = DAT_000031ee & 0xf7;
  }
  else if ((DAT_00003252 & 4) == 0) {
    DAT_000031ee = DAT_000031ee & 0xf7;
  }
  else {
    DAT_000031ee = DAT_000031ee | 8;
  }
  _DAT_00003218 = _DAT_000031f4;
  return;
}



// Function: FUN_000372d8 @ 000372d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000372d8(void)

{
  bool bVar1;
  byte bVar2;
  
  if (((byte)DAT_00003248 & 1) == 0) {
    DAT_000031e2 = DAT_000031e2 & 0xfb;
  }
  else {
    DAT_000031e2 = DAT_000031e2 | 4;
  }
  if (((byte)DAT_00003248 & 2) == 0) {
    DAT_000031e0 = DAT_000031e0 & 0xfd;
  }
  else {
    DAT_000031e0 = DAT_000031e0 | 2;
  }
  bVar1 = ((byte)DAT_00003248 & 4) == 0;
  if (bVar1) {
    DAT_000031e8 = DAT_000031e8 & 0xfb;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 4;
  }
  if (((byte)DAT_00003248 & 8) == 0) {
    DAT_000031e8 = DAT_000031e8 & 0xf7;
  }
  else {
    DAT_000031e8 = DAT_000031e8 | 8;
  }
  DAT_000031e8 = DAT_000031e8 & 0xfd;
  if (!bVar1) {
    DAT_000031e8 = DAT_000031e8 | 2;
  }
  if ((DAT_000031e8 & 8) != 0) {
    DAT_000031e8 = DAT_000031e8 | 2;
  }
  bVar2 = ((byte)DAT_0000324c & 0x20) != 0;
  if (((byte)DAT_0000324c & 0x40) != 0) {
    bVar2 = bVar2 | 2;
  }
  if (bVar2 == 1) {
    DAT_0000af54 = 2;
  }
  else if (bVar2 == 3) {
    DAT_0000af54 = 1;
  }
  else if (bVar2 == 2) {
    DAT_0000af54 = 0;
  }
  else {
    DAT_0000af54 = 0xffffffff;
  }
  if ((DAT_000031ed & 1) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xfffffff9;
    DAT_00003250 = DAT_00003250 & 0xf2;
  }
  else {
    if ((DAT_00003250 & 4) == 0) {
      _DAT_000031f4 = _DAT_000031f4 & 0xfffffffd;
    }
    else {
      _DAT_000031f4 = _DAT_000031f4 | 2;
    }
    if ((DAT_00003250 & 8) == 0) {
      _DAT_000031f4 = _DAT_000031f4 & 0xfffffffb;
    }
    else {
      _DAT_000031f4 = _DAT_000031f4 | 4;
    }
  }
  if ((DAT_00003250 & 0x40) == 0) {
    _DAT_000031f4 = _DAT_000031f4 & 0xfffffffe;
  }
  else {
    _DAT_000031f4 = _DAT_000031f4 | 1;
  }
  if ((DAT_000031e8 & 2) == 0) {
    DAT_00003252 = DAT_00003252 & 0xfb;
  }
  else {
    DAT_00003252 = DAT_00003252 | 4;
  }
  if ((DAT_000031e8 & 2) == 0) {
    DAT_00003252 = DAT_00003252 & 0xfe;
  }
  else {
    DAT_00003252 = DAT_00003252 | 1;
  }
  if ((DAT_0000aefa & 2) == 0) {
    DAT_000031ee = DAT_000031ee & 0xf7;
  }
  else if ((DAT_00003252 & 4) == 0) {
    DAT_000031ee = DAT_000031ee & 0xf7;
  }
  else {
    DAT_000031ee = DAT_000031ee | 8;
  }
  _DAT_00003218 = _DAT_000031f4;
  return;
}



// Function: FUN_000374ce @ 000374ce

/* WARNING: Removing unreachable block (ram,0x000376d4) */
/* WARNING: Removing unreachable block (ram,0x000377a2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unkbyte10 FUN_000374ce(void)

{
  undefined1 (*pauVar1) [12];
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint in_D0;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  short sVar12;
  uint uVar13;
  undefined1 (*in_A0) [12];
  undefined *puVar14;
  int extraout_A1;
  int unaff_A6;
  unkbyte10 *pVar15;
  longdouble lVar16;
  unkint10 Var17;
  longdouble lVar18;
  longdouble lVar19;
  undefined4 local_5c;
  undefined1 local_54 [20];
  undefined1 auStack_40 [24];
  
  pVar15 = (unkbyte10 *)auStack_40;
  *(undefined4 *)(unaff_A6 + -0x50) = *(undefined4 *)*in_A0;
  *(undefined1 *)(unaff_A6 + -0x4b) = 0;
  if ((*(ushort *)(unaff_A6 + -0xe8) & 0xe000) != 0) {
    uVar6 = *(ushort *)*in_A0 & 0x7fff;
    uVar13 = *(uint *)(*in_A0 + 4);
    iVar8 = *(int *)(*in_A0 + 8);
    do {
      uVar6 = uVar6 - 1;
      bVar2 = iVar8 < 0;
      iVar8 = iVar8 << 1;
      uVar13 = uVar13 << 1 | (uint)bVar2;
    } while (-1 < (int)uVar13);
    if ((short)uVar6 < 1) {
      *(undefined1 *)(unaff_A6 + -0x4b) = 0xff;
    }
    *(ushort *)*in_A0 = uVar6 & 0x7fff;
    *(uint *)(*in_A0 + 4) = uVar13;
    *(int *)(*in_A0 + 8) = iVar8;
  }
  *(undefined4 *)(unaff_A6 + -100) = *(undefined4 *)*in_A0;
  *(undefined4 *)(unaff_A6 + -0x60) = *(undefined4 *)(*in_A0 + 4);
  *(undefined4 *)(unaff_A6 + -0x5c) = *(undefined4 *)(*in_A0 + 8);
  *(uint *)(unaff_A6 + -100) = *(uint *)(unaff_A6 + -100) & 0x7fffffff;
  if (*(char *)(unaff_A6 + -0x4b) == '\0') {
    sVar12 = *(short *)(unaff_A6 + -100);
    *(undefined2 *)(unaff_A6 + -100) = 0x3fff;
    lVar18 = (longdouble)*(undefined1 (*) [12])(unaff_A6 + -100);
    lVar19 = (lVar18 + (longdouble)(sVar12 + -0x3fff)) - (longdouble)(float)PTR_DAT_0003747c;
    if (lVar18 == FLOAT_UNKNOWN || FLOAT_UNKNOWN <= lVar18) {
      uVar13 = (uint)(lVar19 * (longdouble)auRam0003745c);
    }
    else {
      uVar13 = (uint)(lVar19 * (longdouble)_DAT_0003746c);
    }
  }
  else {
    uVar13 = 0xffffecbb;
  }
  bVar2 = false;
LAB_0003758a:
  do {
    uVar11 = in_D0;
    if ((int)in_D0 < 1) {
      uVar11 = (uVar13 - in_D0) + 1;
    }
    if ((int)uVar11 < 1) {
      uVar11 = 1;
    }
    else if ((0x11 < (int)uVar11) && (uVar11 = 0x11, 0 < (int)in_D0)) {
      *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x2080;
    }
    if (((int)in_D0 < 1) && ((int)uVar13 <= (int)in_D0)) {
      uVar13 = in_D0;
    }
    uVar5 = (uVar13 + 1) - uVar11;
    sVar12 = 0;
    sVar9 = 0;
    if ((int)uVar5 < 0) {
      sVar12 = 1;
      sVar9 = 0;
      if ((int)uVar5 < -0x132b) {
        uVar5 = uVar5 + 0x18;
        sVar9 = 0x18;
      }
      uVar5 = -uVar5;
    }
    lVar18 = (longdouble)(float)PTR_DAT_0003747c;
    uVar7 = (uint)(ushort)((sVar12 + (ushort)((uint)(*(int *)(unaff_A6 + -0x80) << 0x1a) >> 0x1e) *
                                     2) * 2);
    if (*(int *)(unaff_A6 + -0x50) < 0) {
      uVar7 = uVar7 + 1;
    }
    if ((&DAT_000374be)[(short)uVar7] == 0) {
      puVar14 = &DAT_00038850;
    }
    else if (((&DAT_000374be)[(short)uVar7] & 1) == 0) {
      puVar14 = &DAT_00038910;
    }
    else {
      puVar14 = &DAT_000389d0;
    }
    sVar10 = 0;
    do {
      uVar3 = uVar5 & 1;
      uVar5 = uVar5 >> 1;
      if (uVar3 != 0) {
        lVar18 = lVar18 * (longdouble)*(undefined1 (*) [12])(puVar14 + sVar10);
      }
      sVar10 = sVar10 + 0xc;
    } while (uVar5 != 0);
    lVar19 = (longdouble)*in_A0;
    lVar16 = ABS(lVar19);
    if (sVar12 == 0) {
      lVar16 = lVar16 / lVar18;
    }
    else if (*(char *)(unaff_A6 + -0x4b) == '\0') {
      if (sVar9 != 0) {
        lVar16 = lVar16 * (longdouble)*(undefined1 (*) [12])(puVar14 + 0x24) *
                 (longdouble)*(undefined1 (*) [12])(puVar14 + 0x30);
      }
      lVar16 = lVar16 * lVar18;
    }
    else {
      *(longdouble *)((int)pVar15 + -0xc) = lVar18;
      *(undefined4 *)((int)pVar15 + -0x10) = *(undefined4 *)(*in_A0 + 8);
      *(undefined4 *)((int)pVar15 + -0x14) = *(undefined4 *)(*in_A0 + 4);
      *(undefined4 *)((int)pVar15 + -0x18) = *(undefined4 *)*in_A0;
      sVar12 = 0x12;
      puVar4 = (undefined1 *)((int)pVar15 + -0x18);
      do {
        pVar15 = (unkbyte10 *)puVar4;
        *(undefined4 *)((int)pVar15 + -4) = 0;
        sVar12 = sVar12 + -1;
        puVar4 = (undefined1 *)((int)pVar15 + -4);
      } while (sVar12 != -1);
      *(undefined1 *)((int)pVar15 + -4) = *(undefined1 *)(unaff_A6 + -0x45);
      *(undefined1 *)((int)pVar15 + -3) = 0x60;
      *(undefined1 *)((int)pVar15 + 0x40) = 0x10;
      *(undefined2 *)((int)pVar15 + 0x3c) = 0x23;
      *(undefined1 *)((int)pVar15 + 4) = 0xfe;
      restoreFPUStateFrame(*(undefined4 *)((int)pVar15 + -4));
      lVar16 = lVar16 * (longdouble)*(undefined1 (*) [12])(puVar14 + 0x24) *
               (longdouble)*(undefined1 (*) [12])(puVar14 + 0x30);
    }
    *(undefined1 (*) [12])(unaff_A6 + -100) = (undefined1  [12])lVar16;
    *(undefined4 *)(unaff_A6 + -0x54) = *(undefined4 *)(unaff_A6 + -0x80);
    *(uint *)(unaff_A6 + -0x80) = *(uint *)(unaff_A6 + -0x80) & 0x30;
    *(undefined **)((int)pVar15 + -4) = puVar14;
    *(undefined1 (**) [12])((int)pVar15 + -8) = in_A0;
    *(uint *)(pVar15 + -1) = uVar7;
    *(uint *)((int)pVar15 + -0x10) =
         (uint)(lVar19 < FLOAT_UNKNOWN) << 0x1b | (uint)(lVar19 == FLOAT_UNKNOWN) << 0x1a;
    *(undefined4 *)((int)pVar15 + -0x14) = *(undefined4 *)(unaff_A6 + -0x54);
    *(undefined4 *)(pVar15 + -2) = *(undefined4 *)(unaff_A6 + -0x50);
    pauVar1 = (undefined1 (*) [12])(unaff_A6 + -100);
    *pauVar1 = (undefined1  [12])lVar16;
    if (*(int *)(unaff_A6 + -0x50) < 0) {
      *(uint *)*pauVar1 = *(uint *)*pauVar1 | 0x80000000;
    }
    *(undefined4 *)((int)pVar15 + -0x1c) = *(undefined4 *)(unaff_A6 + -0x7c);
    *(undefined4 *)((int)pVar15 + -0x20) = 0x37718;
    lVar18 = (longdouble)FUN_0003c660();
    *(undefined1 *)(unaff_A6 + -0x7c) = *(undefined1 *)((int)pVar15 + -0x1c);
    *(undefined4 *)(unaff_A6 + -0x50) = *(undefined4 *)(pVar15 + -2);
    *(undefined4 *)(unaff_A6 + -0x54) = *(undefined4 *)((int)pVar15 + -0x14);
    in_A0 = *(undefined1 (**) [12])((int)pVar15 + -8);
    iVar8 = *(int *)((int)pVar15 + -4);
    *(undefined4 *)(unaff_A6 + -100) = *(undefined4 *)(unaff_A6 + -0x50);
    *(undefined4 *)(unaff_A6 + -0x80) = *(undefined4 *)(unaff_A6 + -0x54);
    if (bVar2) {
      lVar19 = (longdouble)(float)PTR_DAT_0003747c;
      sVar12 = 0;
      do {
        uVar5 = uVar11 & 1;
        uVar11 = uVar11 >> 1;
        if (uVar5 != 0) {
          lVar19 = lVar19 * (longdouble)*(undefined1 (*) [12])(iVar8 + sVar12);
        }
        sVar12 = sVar12 + 0xc;
      } while (uVar11 != 0);
      lVar18 = ABS(lVar18);
      if (lVar18 - lVar19 == FLOAT_UNKNOWN) {
        lVar18 = lVar18 / (longdouble)DAT_0003749c;
        uVar13 = uVar13 + 1;
        lVar19 = lVar19 * (longdouble)DAT_0003749c;
      }
LAB_000377f8:
      *(undefined1 (*) [12])(unaff_A6 + -0x74) = (undefined1  [12])(lVar18 / lVar19);
      *(undefined4 *)(unaff_A6 + -0x70) = 0;
      *(undefined4 *)(unaff_A6 + -0x6c) = 0;
      uVar11 = *(uint *)*(undefined1 (*) [12])(unaff_A6 + -0x74);
      uVar11 = uVar11 << 0x10 | uVar11 >> 0x10;
      if ((uVar11 != 0) && (iVar8 = uVar11 - 0x3ffd, iVar8 < 1)) {
        uVar11 = -iVar8;
        do {
          uVar6 = (short)uVar11 - 1;
          uVar11 = (uint)uVar6;
        } while (uVar6 != 0xffff);
      }
      *(undefined4 *)((int)pVar15 + -4) = 0x37856;
      Var17 = FUN_0003792c();
      if (*(char *)(unaff_A6 + -0x4b) == '\0') {
        puVar14 = PTR_DAT_0003747c;
        if (Var17 != 0) {
          puVar14 = (undefined *)ABS((float)(int)uVar13);
        }
      }
      else if (Var17 == 0) {
        puVar14 = PTR_DAT_000374ac;
        if ((int)in_D0 < 0) {
          puVar14 = (undefined *)ABS((float)(int)uVar13);
        }
      }
      else {
        puVar14 = (undefined *)ABS((float)(int)uVar13);
      }
      *(undefined1 (*) [12])(unaff_A6 + -100) =
           (undefined1  [12])((float)puVar14 / (float)*(undefined1 (*) [12])(extraout_A1 + 0x18));
      if (*(short *)(unaff_A6 + -100) != 0) {
        sVar12 = -(*(short *)(unaff_A6 + -100) + -0x3ffd);
        do {
          sVar12 = sVar12 + -1;
        } while (sVar12 != -1);
      }
      *(undefined4 *)((int)pVar15 + -4) = 0x378dc;
      FUN_0003792c();
      uVar11 = *(uint *)(unaff_A6 + -0x54);
      *(uint *)(unaff_A6 + -0x74) =
           *(uint *)(unaff_A6 + -0x74) & 0xf000ffff | (uVar11 >> 0xc & 0xfff) << 0x10;
      *(uint *)(unaff_A6 + -0x74) =
           *(uint *)(unaff_A6 + -0x74) & 0xffff0fff | (uVar11 >> 0x18 & 0xf) << 0xc;
      if ((char)(uVar11 >> 0x18) != '\0') {
        *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x2080;
      }
      iVar8 = 0;
      *(byte *)(unaff_A6 + -0x74) = *(byte *)(unaff_A6 + -0x74) & 0xf;
      if (*(int *)(unaff_A6 + -0x50) < 0) {
        iVar8 = 2;
      }
      if ((int)uVar13 < 0) {
        iVar8 = iVar8 + 1;
      }
      *(uint *)(unaff_A6 + -0x74) = *(uint *)(unaff_A6 + -0x74) & 0x3fffffff | iVar8 << 0x1e;
      return *pVar15;
    }
    lVar19 = (longdouble)(float)PTR_DAT_0003747c;
    uVar11 = uVar11 - 1;
    sVar12 = 0;
    do {
      uVar5 = uVar11 & 1;
      uVar11 = uVar11 >> 1;
      if (uVar5 != 0) {
        lVar19 = lVar19 * (longdouble)*(undefined1 (*) [12])(iVar8 + sVar12);
      }
      sVar12 = sVar12 + 0xc;
    } while (uVar11 != 0);
    if ((*(char *)(unaff_A6 + -0x4b) != '\0') ||
       (ABS(lVar18) - lVar19 == FLOAT_UNKNOWN || FLOAT_UNKNOWN <= ABS(lVar18) - lVar19)) {
      lVar18 = ABS(lVar18);
      lVar19 = lVar19 * (longdouble)DAT_0003749c;
      if (FLOAT_UNKNOWN <= lVar18 - lVar19 || lVar18 - lVar19 == FLOAT_UNKNOWN) {
        uVar13 = uVar13 + 1;
        bVar2 = true;
        goto LAB_0003758a;
      }
      goto LAB_000377f8;
    }
    uVar13 = uVar13 - 1;
    bVar2 = true;
  } while( true );
}



// Function: FUN_0003792c @ 0003792c

undefined8 FUN_0003792c(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int in_D0;
  uint uVar6;
  undefined4 in_D1;
  short sVar8;
  uint unaff_D2;
  uint unaff_D3;
  short sVar9;
  char *in_A0;
  bool bVar10;
  ushort uVar7;
  
  bVar4 = true;
  uVar6 = in_D0 - 1;
  sVar9 = 0;
  do {
    while( true ) {
      uVar3 = unaff_D3 >> 0x1d;
      bVar1 = (int)unaff_D3 < 0;
      uVar2 = unaff_D2 & 0x80000000;
      uVar5 = unaff_D2 >> 0x1d;
      bVar10 = CARRY4(unaff_D3 * 2,unaff_D3 * 8);
      unaff_D3 = unaff_D3 * 10;
      unaff_D2 = (unaff_D2 << 1 | (uint)bVar1) + (uVar3 | unaff_D2 << 3) + (uint)bVar10;
      sVar8 = (ushort)uVar5 + (ushort)(uVar2 != 0) + (ushort)bVar10;
      if (!bVar4) break;
      sVar9 = sVar8 + sVar9 * 0x10;
      *in_A0 = (char)sVar9;
      bVar4 = false;
      uVar7 = (short)uVar6 - 1;
      uVar6 = (uint)uVar7;
      in_A0 = in_A0 + 1;
      if (uVar7 == 0xffff) goto LAB_00037982;
    }
    bVar4 = true;
    uVar7 = (short)uVar6 - 1;
    uVar6 = (uint)uVar7;
    sVar9 = sVar8;
  } while (uVar7 != 0xffff);
  *in_A0 = (char)sVar8 * '\x10';
LAB_00037982:
  return CONCAT44(in_D0,in_D1);
}



// Function: FUN_00037988 @ 00037988

void FUN_00037988(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  byte bVar4;
  short sVar3;
  byte bVar5;
  int unaff_A6;
  undefined1 *puVar6;
  undefined1 *puVar7;
  unkbyte10 in_FP0;
  unkbyte10 in_FP1;
  unkbyte10 unaff_FP2;
  unkbyte10 unaff_FP3;
  undefined4 in_stack_00000000;
  undefined4 local_c [3];
  
  if ((param_1._0_1_ == '@') && ((*(byte *)(unaff_A6 + -0x11c) & 0xfe) != 0)) {
    if ((*(ushort *)(unaff_A6 + -0xe4) & 0xe000) == 0) {
      bVar5 = (byte)((uint)(*(int *)(unaff_A6 + -0xf0) << 6) >> 0x1d);
      if ((bVar5 == (byte)((uint)(*(int *)(unaff_A6 + -0xe4) << 3) >> 0x1d)) ||
         (bVar4 = (byte)((uint)(*(int *)(unaff_A6 + -0xe4) << 6) >> 0x1d), bVar5 == bVar4)) {
        fmovem(*(undefined4 *)(unaff_A6 + -0xcc),
               1 << (7 - ((uint)(*(int *)(unaff_A6 + -0xe4) << 3) >> 0x1d) & 0x1f));
        *(uint *)(unaff_A6 + -0xe4) = *(uint *)(unaff_A6 + -0xe4) & 0x3ffffff | 0x48000000;
        if ((*(byte *)(unaff_A6 + -0xcc) & 0x40) == 0) {
          *(byte *)(unaff_A6 + -0xe8) = *(byte *)(unaff_A6 + -0xe8) | 0x10;
        }
        else {
          *(byte *)(unaff_A6 + -0xe8) = *(byte *)(unaff_A6 + -0xe8) & 0xef;
        }
      }
      else {
        bVar5 = (byte)((uint)(*(int *)(unaff_A6 + -0xf4) << 6) >> 0x1d);
        if ((bVar5 == bVar4) || (bVar5 == (byte)((uint)(*(int *)(unaff_A6 + -0xe4) << 3) >> 0x1d)))
        {
          *(undefined4 *)(unaff_A6 + -0x54) = *(undefined4 *)(unaff_A6 + -0xe8);
          *(undefined4 *)(unaff_A6 + -0x50) = *(undefined4 *)(unaff_A6 + -0xe4);
          *(undefined4 *)(unaff_A6 + -0x44) = *(undefined4 *)(unaff_A6 + -0xe0);
          *(uint *)(unaff_A6 + -0x44) = *(uint *)(unaff_A6 + -0x44) & 0xe0000000;
          *(undefined1 *)(unaff_A6 + -0x11c) = 0;
          restoreFPUStateFrame(param_1);
          saveFPUStateFrame(param_1);
          if (param_1._0_2_ == 0x4060) {
            FUN_0003c8f2();
            return;
          }
          uVar1 = (uint)(*(int *)(unaff_A6 + -0xf4) << 6) >> 0x1d;
          if (uVar1 < 4) {
            if (uVar1 == 3) {
              *(unkbyte10 *)(unaff_A6 + -0x8c) = unaff_FP3;
            }
            else if (uVar1 == 0) {
              *(unkbyte10 *)(unaff_A6 + -0xb0) = in_FP0;
            }
            else if (uVar1 == 1) {
              *(unkbyte10 *)(unaff_A6 + -0xa4) = in_FP1;
            }
            else {
              *(unkbyte10 *)(unaff_A6 + -0x98) = unaff_FP2;
            }
          }
          sVar3 = 0x16;
          puVar2 = &param_1;
          do {
            puVar6 = (undefined1 *)puVar2;
            *(undefined4 *)(puVar6 + -4) = 0;
            sVar3 = sVar3 + -1;
            puVar2 = (undefined4 *)(puVar6 + -4);
          } while (sVar3 != -1);
          *(undefined4 *)(puVar6 + -8) = 0x40600000;
          *(undefined4 *)(unaff_A6 + -0xe8) = *(undefined4 *)(unaff_A6 + -0x54);
          *(undefined4 *)(unaff_A6 + -0xe4) = *(undefined4 *)(unaff_A6 + -0x50);
          *(undefined4 *)(unaff_A6 + -0xe0) = *(undefined4 *)(unaff_A6 + -0x44);
          *(undefined1 *)(unaff_A6 + -0x11c) = 6;
          *(undefined4 *)(puVar6 + -0xc) = in_stack_00000000;
          fmovem(*(undefined4 *)(unaff_A6 + -0xcc),
                 1 << (7 - ((uint)(*(int *)(unaff_A6 + -0xe4) << 3) >> 0x1d) & 0x1f));
          *(uint *)(unaff_A6 + -0xe4) = *(uint *)(unaff_A6 + -0xe4) & 0x3ffffff | 0x48000000;
          if ((*(byte *)(unaff_A6 + -0xcc) & 0x40) == 0) {
            *(byte *)(unaff_A6 + -0xe8) = *(byte *)(unaff_A6 + -0xe8) | 0x10;
          }
          else {
            *(byte *)(unaff_A6 + -0xe8) = *(byte *)(unaff_A6 + -0xe8) & 0xef;
          }
        }
      }
    }
    else if ((*(ushort *)(unaff_A6 + -0xe4) & 0xfc00) == 0x4400) {
      bVar5 = (byte)((uint)(*(int *)(unaff_A6 + -0xe4) << 6) >> 0x1d);
      if ((byte)((uint)(*(int *)(unaff_A6 + -0xf0) << 6) >> 0x1d) != bVar5) {
        if ((byte)((uint)(*(int *)(unaff_A6 + -0xf4) << 6) >> 0x1d) != bVar5) {
          return;
        }
        *(undefined4 *)(unaff_A6 + -0x54) = *(undefined4 *)(unaff_A6 + -0xe8);
        *(undefined4 *)(unaff_A6 + -0x50) = *(undefined4 *)(unaff_A6 + -0xe4);
        *(undefined4 *)(unaff_A6 + -0x44) = *(undefined4 *)(unaff_A6 + -0xe0);
        *(uint *)(unaff_A6 + -0x44) = *(uint *)(unaff_A6 + -0x44) & 0xe0000000;
        *(undefined1 *)(unaff_A6 + -0x11c) = 0;
        *(undefined4 *)(unaff_A6 + -100) = *(undefined4 *)(unaff_A6 + -0xcc);
        *(undefined4 *)(unaff_A6 + -0x60) = *(undefined4 *)(unaff_A6 + -200);
        *(undefined4 *)(unaff_A6 + -0x5c) = *(undefined4 *)(unaff_A6 + -0xc4);
        restoreFPUStateFrame(param_1);
        saveFPUStateFrame(param_1);
        if (param_1._0_2_ == 0x4060) {
          FUN_0003c8f2();
          return;
        }
        uVar1 = (uint)(*(int *)(unaff_A6 + -0xf4) << 6) >> 0x1d;
        if (uVar1 < 4) {
          if (uVar1 == 3) {
            *(unkbyte10 *)(unaff_A6 + -0x8c) = unaff_FP3;
          }
          else if (uVar1 == 0) {
            *(unkbyte10 *)(unaff_A6 + -0xb0) = in_FP0;
          }
          else if (uVar1 == 1) {
            *(unkbyte10 *)(unaff_A6 + -0xa4) = in_FP1;
          }
          else {
            *(unkbyte10 *)(unaff_A6 + -0x98) = unaff_FP2;
          }
        }
        sVar3 = 0x16;
        puVar2 = &param_1;
        do {
          puVar7 = (undefined1 *)puVar2;
          *(undefined4 *)(puVar7 + -4) = 0;
          sVar3 = sVar3 + -1;
          puVar2 = (undefined4 *)(puVar7 + -4);
        } while (sVar3 != -1);
        *(undefined4 *)(puVar7 + -8) = 0x40600000;
        *(undefined4 *)(unaff_A6 + -0xe8) = *(undefined4 *)(unaff_A6 + -0x54);
        *(undefined4 *)(unaff_A6 + -0xe4) = *(undefined4 *)(unaff_A6 + -0x50);
        *(undefined4 *)(unaff_A6 + -0xe0) = *(undefined4 *)(unaff_A6 + -0x44);
        *(undefined1 *)(unaff_A6 + -0x11c) = 6;
        *(undefined4 *)(unaff_A6 + -0xcc) = *(undefined4 *)(unaff_A6 + -100);
        *(undefined4 *)(unaff_A6 + -200) = *(undefined4 *)(unaff_A6 + -0x60);
        *(undefined4 *)(unaff_A6 + -0xc4) = *(undefined4 *)(unaff_A6 + -0x5c);
        *(undefined4 *)(puVar7 + -0xc) = in_stack_00000000;
      }
      *(uint *)(unaff_A6 + -0xe4) = *(uint *)(unaff_A6 + -0xe4) & 0x3ffffff | 0x54000000;
      if (*(short *)(unaff_A6 + -0xcc) == 0x407f) {
        *(undefined2 *)(unaff_A6 + -0xcc) = 0x43ff;
      }
      else if (*(short *)(unaff_A6 + -0xcc) == -0x3f81) {
        *(undefined2 *)(unaff_A6 + -0xcc) = 0xc3ff;
      }
      else if (*(short *)(unaff_A6 + -0xcc) == 0x3f80) {
        *(undefined2 *)(unaff_A6 + -0xcc) = 0x3c00;
      }
      else if (*(short *)(unaff_A6 + -0xcc) == -0x4080) {
        *(undefined2 *)(unaff_A6 + -0xcc) = 0xbc00;
      }
    }
  }
  return;
}



// Function: FUN_00037c4a @ 00037c4a

uint FUN_00037c4a(void)

{
  uint *puVar1;
  longdouble lVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int unaff_A6;
  uint in_FPSR;
  
  sVar5 = 2;
  uVar6 = 4;
  puVar1 = (uint *)(unaff_A6 + -0x74);
  *puVar1 = *(uint *)(unaff_A6 + -0xcc);
  *(undefined4 *)(unaff_A6 + -0x70) = *(undefined4 *)(unaff_A6 + -200);
  *(undefined4 *)(unaff_A6 + -0x6c) = *(undefined4 *)(unaff_A6 + -0xc4);
  iVar3 = 0;
  do {
    iVar3 = ((*puVar1 << uVar6) >> 0x1c) + iVar3 * 10;
    uVar6 = (uint)(byte)((char)uVar6 + 4);
    sVar5 = sVar5 + -1;
  } while (sVar5 != -1);
  if ((*puVar1 & 0x40000000) != 0) {
    iVar3 = -iVar3;
  }
  iVar4 = iVar3 + -0x10;
  if (iVar3 < 0x10) {
    iVar4 = -iVar4;
    *puVar1 = *puVar1 | 0x40000000;
  }
  *(int *)(unaff_A6 + -0x54) = iVar4;
  iVar3 = 1;
  do {
    sVar5 = 7;
    do {
      sVar5 = sVar5 + -1;
    } while (sVar5 != -1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  iVar3 = *(int *)(unaff_A6 + -0x54);
  if (0x1b < iVar3) {
    if ((*(byte *)puVar1 & 0x40) == 0) {
      iVar4 = 0;
      if ((*puVar1 & 0xf) == 0) {
        iVar4 = 1;
        iVar3 = *(int *)(unaff_A6 + -0x70);
        if (iVar3 == 0) {
          iVar4 = 9;
          iVar3 = *(int *)(unaff_A6 + -0x6c);
        }
        iVar7 = 0;
        sVar5 = 7;
        do {
          if ((uint)(iVar3 << iVar7) >> 0x1c != 0) break;
          iVar7 = iVar7 + 4;
          iVar4 = iVar4 + 1;
          sVar5 = sVar5 + -1;
        } while (sVar5 != -1);
      }
      iVar3 = *(int *)(unaff_A6 + -0x54) - iVar4;
      if (*(int *)(unaff_A6 + -0x54) < iVar4) {
        iVar3 = -iVar3;
        *puVar1 = *puVar1 | 0x40000000;
      }
      do {
        iVar4 = iVar4 >> 1;
      } while (iVar4 != 0);
    }
    else {
      iVar4 = 0;
      iVar3 = *(int *)(unaff_A6 + -0x6c);
      if (iVar3 == 0) {
        iVar4 = 8;
        iVar3 = *(int *)(unaff_A6 + -0x70);
      }
      iVar7 = 0x1c;
      sVar5 = 7;
      do {
        if ((uint)(iVar3 << iVar7) >> 0x1c != 0) break;
        iVar7 = iVar7 + -4;
        iVar4 = iVar4 + 1;
        sVar5 = sVar5 + -1;
      } while (sVar5 != -1);
      iVar3 = *(int *)(unaff_A6 + -0x54) - iVar4;
      if (iVar3 == 0 || *(int *)(unaff_A6 + -0x54) < iVar4) {
        iVar3 = -iVar3;
        *puVar1 = *puVar1 & 0xbfffffff;
      }
      do {
        iVar4 = iVar4 >> 1;
      } while (iVar4 != 0);
    }
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
    *puVar1 = *puVar1 | 0x40000000;
  }
  lVar2 = (longdouble)(float)PTR_DAT_00037c40;
  do {
    iVar3 = iVar3 >> 1;
  } while (iVar3 != 0);
  if ((in_FPSR & 0x200) != 0) {
    *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x108;
  }
  return in_FPSR & 0xf0fffdff | (uint)(lVar2 < FLOAT_UNKNOWN) << 0x1b |
         (uint)(lVar2 == FLOAT_UNKNOWN) << 0x1a;
}



// Function: FUN_00037ed6 @ 00037ed6

void FUN_00037ed6(void)

{
  ushort uVar1;
  int unaff_A6;
  
  *(undefined1 *)(unaff_A6 + -0x46) = 0;
  if (*(uint *)(unaff_A6 + -0xe4) >> 0x1a == 0x17) {
    FUN_0003d654();
    return;
  }
  uVar1 = *(ushort *)(unaff_A6 + -0xe4) & 0x7f;
  if (uVar1 < 0x38) {
                    /* WARNING: Could not recover jumptable at 0x00037f2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_0003f26e +
                (short)((ushort)((uint)*(undefined4 *)(unaff_A6 + -0xe8) >> 0x1d) + uVar1 * 8) * 4))
              ();
    return;
  }
  *(undefined1 *)(unaff_A6 + -0x4c) = 0xff;
  return;
}



// Function: FUN_0003830e @ 0003830e

longdouble FUN_0003830e(void)

{
  return (longdouble)auRam00037e68;
}



// Function: FUN_00038316 @ 00038316

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble FUN_00038316(void)

{
  longdouble lVar1;
  int unaff_A6;
  
  lVar1 = (longdouble)_DAT_00037e74;
  *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x8000000;
  return lVar1;
}



// Function: FUN_00038326 @ 00038326

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble FUN_00038326(void)

{
  longdouble lVar1;
  int unaff_A6;
  
  lVar1 = (longdouble)_DAT_00037e80;
  *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x4000000;
  return lVar1;
}



// Function: FUN_00038336 @ 00038336

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble FUN_00038336(void)

{
  longdouble lVar1;
  int unaff_A6;
  
  lVar1 = (longdouble)_PTR_DAT_00037e8c;
  *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0xc000000;
  return lVar1;
}



// Function: FUN_000383bc @ 000383bc

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000383bc(undefined4 param_1)

{
  byte bVar1;
  short sVar3;
  undefined4 uVar2;
  undefined1 *puVar4;
  undefined4 *unaff_A6;
  undefined1 *puVar5;
  undefined4 *puVar6;
  uint in_FPSR;
  undefined4 uVar7;
  char cVar8;
  undefined4 in_stack_00000000;
  
  cVar8 = (char)((uint)in_stack_00000000 >> 0x10);
  if (cVar8 == '\0') {
    unaff_A6[-0x1f] = in_FPSR | unaff_A6[-0x1f];
    if (param_1._1_1_ == '`') {
      *(undefined2 *)(unaff_A6 + -0x3b) = 0;
      if ((*(byte *)(unaff_A6 + -0x39) & 0x20) == 0) {
        unaff_A6[-0x40] = unaff_A6[-0x1f];
        unaff_A6[-0x37] = unaff_A6[-0x37] | 0x1800000;
      }
    }
    else if (param_1._1_1_ != '(') {
      *(undefined2 *)(unaff_A6 + -0x3b) = 0;
    }
    bVar1 = *(byte *)((int)unaff_A6 + -0x7a) & *(byte *)((int)unaff_A6 + -0x7e);
                    /* WARNING: Could not recover jumptable at 0x000384bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&PTR_LAB_00038398)
                      [(short)(ushort)(byte)(((bVar1 != 0) * (char)LZCOUNT((uint)bVar1 << 0x18) +
                                             (bVar1 == 0) * ' ') - 0x18)])();
    return uVar2;
  }
  if ((cVar8 == '(') || (cVar8 == '0')) {
    if (cVar8 == '(') {
      puVar4 = &stack0x000000ec;
    }
    else {
      if (cVar8 != '0') goto FUN_000108f0;
      puVar4 = &stack0x000000f4;
    }
    *(undefined4 *)(puVar4 + -0xe4) = unaff_A6[-0x39];
    unaff_A6[-0x1f] = in_FPSR | unaff_A6[-0x1f];
  }
  else {
    if (cVar8 != '`') {
FUN_000108f0:
      _DAT_01200070 = 0x3700;
      _DAT_01200072 = 0;
      _DAT_01200076 = 0;
      _DAT_01200078 = 0;
      _DAT_01200020 = 0;
      _DAT_01200024 = 0;
      _DAT_01300050 = 0;
      _DAT_0120006c = (undefined1 *)register0x0000003c;
      do {
        _DAT_01200024 = _DAT_01200024 & 0xfbff | 0x800;
        _DAT_01200028 = _DAT_01200028 + 1;
        _DAT_013000bc = 0x10;
        _DAT_013000b8 = 0x10;
        _DAT_0004d4fc = 0x10a7e;
        FUN_00010aae();
      } while( true );
    }
    unaff_A6[-0x1f] = in_FPSR | unaff_A6[-0x1f];
  }
  if (cVar8 == '(') {
    sVar3 = 0xd;
  }
  else {
    if (cVar8 != '0') goto LAB_0003867c;
    sVar3 = 0xb;
  }
  *(char *)((int)unaff_A6 + -0x45) = (char)((uint)in_stack_00000000 >> 0x18);
  puVar4 = (undefined1 *)register0x0000003c;
  do {
    puVar5 = puVar4;
    register0x0000003c = (BADSPACEBASE *)(puVar5 + -4);
    *(undefined4 *)(puVar5 + -4) = 0;
    sVar3 = sVar3 + -1;
    puVar4 = puVar5 + -4;
  } while (sVar3 != -1);
  puVar5[-4] = *(undefined1 *)((int)unaff_A6 + -0x45);
  puVar5[-3] = 0x60;
  *(undefined4 *)(puVar5 + 0x14) = unaff_A6[-0x1d];
  *(undefined4 *)(puVar5 + 0x18) = unaff_A6[-0x1c];
  *(undefined4 *)(puVar5 + 0x1c) = unaff_A6[-0x1b];
  *(uint *)(puVar5 + 0x35) =
       *(uint *)(puVar5 + 0x35) & 0xf0ffffff | ((uint)(unaff_A6[-0x1f] << 0x11) >> 0x1c) << 0x18;
  *(undefined4 *)(puVar5 + 0x20) = unaff_A6[-0x1f];
  *(uint *)(puVar5 + 0x44) = *(uint *)(puVar5 + 0x44) | 0x1800000;
LAB_0003867c:
  uVar2 = unaff_A6[-0x30];
  uVar7 = *(undefined4 *)(unaff_A6[-0x20] + 0x18);
  restoreFPUStateFrame(*(undefined4 *)register0x0000003c);
  if (*(char *)((int)unaff_A6 + -0x49) != '\0') {
    *(undefined4 *)register0x0000003c = 0x3869c;
    uVar2 = FUN_000386e0();
  }
  if (((*(byte *)(unaff_A6 + 1) & 0x80) == 0) && ((*(byte *)(unaff_A6 + 1) & 0x40) == 0)) {
    return uVar2;
  }
  puVar6 = unaff_A6 + 1;
  if (*(uint *)((int)unaff_A6 + 10) >> 0x1c == 0) {
    *unaff_A6 = unaff_A6[1];
    unaff_A6[1] = unaff_A6[2];
    saveFPUStateFrame(unaff_A6[-0x19]);
    unaff_A6[2] = uVar7;
    restoreFPUStateFrame(unaff_A6[-0x19]);
    puVar6 = unaff_A6;
  }
  *(undefined2 *)((int)puVar6 + 6) = 0x2024;
  uVar2 = FUN_0003c8ea();
  return uVar2;
}



// Function: FUN_000386e0 @ 000386e0

void FUN_000386e0(void)

{
  undefined4 *puVar1;
  undefined4 in_D1;
  short sVar2;
  int unaff_A6;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 auStack_10 [2];
  undefined4 local_8;
  
  saveFPUStateFrame(local_8);
  if (local_8._0_1_ == 'A') {
    if (local_8._1_1_ == '\0') {
      *(undefined4 *)(unaff_A6 + -0xbc) = in_D1;
      sVar2 = 10;
      puVar1 = &local_8;
      do {
        puVar4 = (undefined1 *)puVar1;
        *(undefined4 *)(puVar4 + -4) = 0;
        sVar2 = sVar2 + -1;
        puVar1 = (undefined4 *)(puVar4 + -4);
      } while (sVar2 != -1);
      *(undefined4 *)(puVar4 + -8) = 0x41300000;
      restoreFPUStateFrame(*(undefined4 *)(puVar4 + -8));
      return;
    }
  }
  else {
    if ('A' < local_8._0_1_) {
      restoreFPUStateFrame(local_8);
      return;
    }
    if (local_8._1_1_ == '\0') {
      *(undefined4 *)(unaff_A6 + -0xbc) = in_D1;
      sVar2 = 8;
      puVar1 = &local_8;
      do {
        puVar3 = (undefined1 *)puVar1;
        *(undefined4 *)(puVar3 + -4) = 0;
        sVar2 = sVar2 + -1;
        puVar1 = (undefined4 *)(puVar3 + -4);
      } while (sVar2 != -1);
      *(undefined4 *)(puVar3 + -8) = 0x40280000;
      restoreFPUStateFrame(*(undefined4 *)(puVar3 + -8));
      return;
    }
  }
  restoreFPUStateFrame(local_8);
  return;
}



// Function: FUN_00038a6c @ 00038a6c

uint FUN_00038a6c(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int unaff_A6;
  
  *(undefined1 *)(unaff_A6 + -0x48) = 0;
  if (*(char *)(unaff_A6 + -0x47) == '\0') {
    if (*(uint *)(unaff_A6 + -0xe4) >> 0x1a == 0x17) {
      return 0x17;
    }
    if ((*(byte *)(unaff_A6 + -0xdc) & 4) == 0) {
      bVar1 = *(byte *)(unaff_A6 + -0xe0) | *(byte *)(unaff_A6 + -0xe8);
      uVar3 = (uint)bVar1;
      if (-1 < (short)((ushort)bVar1 << 8)) {
        return uVar3;
      }
      if (((*(byte *)(unaff_A6 + -0xe0) & 0x80) == 0) ||
         (uVar3 = FUN_00038bd4(), *(char *)(unaff_A6 + -0x48) == '\0')) goto LAB_00038afc;
    }
    else {
LAB_00038b6c:
      *(undefined4 *)(unaff_A6 + -0xcc) = *(undefined4 *)(unaff_A6 + -0xd0);
      FUN_00038bd4();
      uVar3 = FUN_00038c92();
      if (*(char *)(unaff_A6 + -0x48) == '\0') {
        return uVar3;
      }
      uVar3 = 1 << (7 - ((uint)(*(int *)(unaff_A6 + -0xe4) << 6) >> 0x1d) & 0x1f);
      fmovem(*(undefined4 *)(unaff_A6 + -0xd8),uVar3);
      if ((*(byte *)(unaff_A6 + -0xe0) & 0x80) == 0) {
        if ((*(byte *)(unaff_A6 + -0xe0) & 0xf0) != 0) {
          return CONCAT31((int3)(uVar3 >> 8),*(byte *)(unaff_A6 + -0xe0)) & 0xfffffff0;
        }
        uVar3 = CONCAT22((short)(uVar3 >> 0x10),*(ushort *)(unaff_A6 + -0xd8)) & 0xffff7fff;
        if (0x3ffe < (*(ushort *)(unaff_A6 + -0xd8) & 0x7fff)) {
          return uVar3;
        }
        *(byte *)(unaff_A6 + -0xe0) = *(byte *)(unaff_A6 + -0xe0) | 0x10;
        return uVar3;
      }
    }
LAB_00038ae4:
    uVar3 = CONCAT22((short)(uVar3 >> 0x10),*(ushort *)(unaff_A6 + -0xd8)) & 0xffff7fff;
    if ((*(ushort *)(unaff_A6 + -0xd8) & 0x7fff) != 0) {
      uVar3 = FUN_00038bfa();
      *(undefined1 *)(unaff_A6 + -0xe0) = *(undefined1 *)(unaff_A6 + -0x54);
    }
  }
  else {
    if ((*(byte *)(unaff_A6 + -0xe4) & 0x20) != 0) {
      *(undefined1 *)(unaff_A6 + -0x48) = 0;
      uVar2 = *(int *)(unaff_A6 + -0xe4) << 4;
      uVar3 = uVar2 >> 0x1e;
      if ((byte)(uVar2 >> 0x1e) == 3) {
        return uVar3;
      }
      goto LAB_00038b0e;
    }
    if (((*(byte *)(unaff_A6 + -0xe4) & 0x40) != 0) &&
       ((byte)((uint)(*(int *)(unaff_A6 + -0xe4) << 3) >> 0x1d) == 3)) goto LAB_00038b6c;
    uVar3 = FUN_00038bd4();
    if ((*(char *)(unaff_A6 + -0x48) != '\0') && ((*(byte *)(unaff_A6 + -0xe0) & 0x80) != 0))
    goto LAB_00038ae4;
  }
LAB_00038afc:
  if ((*(byte *)(unaff_A6 + -0xe8) & 0x80) == 0) {
    return uVar3;
  }
  if ((*(byte *)(unaff_A6 + -0xe8) & 0x20) != 0) {
    if ((*(byte *)(unaff_A6 + -0xe4) & 0x10) == 0) {
      uVar4 = 0x3f81;
    }
    else {
      uVar4 = 0x3c01;
    }
    if ((*(byte *)(unaff_A6 + -0xcc) & 0x80) != 0) {
      uVar4 = uVar4 | 0x8000;
    }
    *(ushort *)(unaff_A6 + -0xcc) = uVar4;
    *(ushort *)(unaff_A6 + -0xe4) = *(ushort *)(unaff_A6 + -0xe4) & 0xe3ff | 0x800;
    uVar3 = FUN_00038bfa();
    *(undefined1 *)(unaff_A6 + -0xe8) = *(undefined1 *)(unaff_A6 + -0x54);
    return uVar3;
  }
LAB_00038b0e:
  if ((*(ushort *)(unaff_A6 + -0xcc) & 0x7fff) == 0) {
    return CONCAT22((short)(uVar3 >> 0x10),*(ushort *)(unaff_A6 + -0xcc)) & 0xffff7fff;
  }
  uVar3 = FUN_00038bfa();
  *(undefined1 *)(unaff_A6 + -0xe8) = *(undefined1 *)(unaff_A6 + -0x54);
  return uVar3;
}



// Function: FUN_00038bd4 @ 00038bd4

void FUN_00038bd4(void)

{
  ushort uVar1;
  int unaff_A6;
  
  uVar1 = *(ushort *)(unaff_A6 + -0xe4);
  if (((uVar1 & 0x20) != 0) && (((uVar1 & 0x10) == 0 || ((uVar1 & 0x7f) == 0x38)))) {
    *(undefined1 *)(unaff_A6 + -0x48) = 0xff;
    return;
  }
  *(undefined1 *)(unaff_A6 + -0x48) = 0;
  return;
}



// Function: FUN_00038bfa @ 00038bfa

void FUN_00038bfa(void)

{
  byte bVar1;
  uint uVar2;
  byte *in_A0;
  byte *extraout_A0;
  byte *extraout_A0_00;
  byte *extraout_A0_01;
  byte *pbVar3;
  int unaff_A6;
  
  *(undefined4 *)(unaff_A6 + -0x54) = 0;
  bVar1 = *in_A0;
  *in_A0 = bVar1 & 0x7f;
  in_A0[2] = -((bVar1 & 0x80) != 0);
  if (*(char *)(unaff_A6 + 0xb) == ',') {
    FUN_00038c76();
    pbVar3 = extraout_A0;
  }
  else if ((*(byte *)(unaff_A6 + -0xe4) & 0x20) == 0) {
    FUN_00038c5a();
    pbVar3 = extraout_A0_00;
  }
  else {
    FUN_00038c40();
    pbVar3 = extraout_A0_01;
  }
  if (*(short *)pbVar3 < 0x4000) {
    *(byte *)(unaff_A6 + -0x54) = *(byte *)(unaff_A6 + -0x54) | 0x10;
  }
  uVar2 = *(uint *)(pbVar3 + 2) >> 0x18;
  *(uint *)(pbVar3 + 2) = uVar2;
  if (uVar2 != 0) {
    *pbVar3 = *pbVar3 | 0x80;
  }
  return;
}



// Function: FUN_00038c40 @ 00038c40

void FUN_00038c40(void)

{
  int extraout_A0;
  int unaff_A6;
  
  FUN_0003a8d4();
  if ((*(byte *)(extraout_A0 + 4) & 0x80) == 0) {
    *(ushort *)(unaff_A6 + -0x54) = *(ushort *)(unaff_A6 + -0x54) | 0x80;
    *(byte *)(unaff_A6 + -0x7a) = *(byte *)(unaff_A6 + -0x7a) | 8;
  }
  return;
}



// Function: FUN_00038c5a @ 00038c5a

void FUN_00038c5a(void)

{
  int extraout_A0;
  int unaff_A6;
  
  FUN_0003a8d4();
  if ((*(byte *)(extraout_A0 + 4) & 0x80) != 0) {
    *(undefined1 *)(unaff_A6 + -0x54) = *(undefined1 *)(unaff_A6 + -0x54);
    return;
  }
  *(byte *)(unaff_A6 + -0x54) = *(byte *)(unaff_A6 + -0x54) | 0x80;
  return;
}



// Function: FUN_00038c76 @ 00038c76

void FUN_00038c76(void)

{
  int extraout_A0;
  int unaff_A6;
  
  FUN_0003a8d4();
  if ((*(byte *)(extraout_A0 + 4) & 0x80) != 0) {
    *(undefined1 *)(unaff_A6 + -0x54) = *(undefined1 *)(unaff_A6 + -0x54);
    return;
  }
  *(byte *)(unaff_A6 + -0x54) = *(byte *)(unaff_A6 + -0x54) | 0x80;
  return;
}



// Function: FUN_00038c92 @ 00038c92

ulonglong FUN_00038c92(void)

{
  ushort uVar1;
  undefined2 extraout_D1u;
  undefined2 uVar2;
  undefined2 extraout_D1u_00;
  uint uVar3;
  int iVar4;
  int unaff_A6;
  longdouble lVar5;
  
  if ((*(ushort *)(unaff_A6 + -0xe4) & 0x3b) == 0) {
    if (((short)(((uint)*(ushort *)(unaff_A6 + -0xcc) << 0x14) >> 0x10) == -0x10) &&
       (uVar2 = 0, (ushort)(((uint)*(ushort *)(unaff_A6 + -0xcc) << 0x11) >> 0x1d) == 7)) {
      if ((*(int *)(unaff_A6 + -200) == 0) && (*(int *)(unaff_A6 + -0xc4) == 0)) {
        *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x2000000;
        if (*(int *)(unaff_A6 + -0xcc) < 0) {
          *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x8000000;
        }
      }
      else {
        *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x1000000;
        *(undefined1 *)(unaff_A6 + -0xe8) = 0x60;
        if (((*(byte *)(unaff_A6 + -200) & 0x40) == 0) &&
           (*(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x1004080,
           (*(byte *)(unaff_A6 + -0x7e) & 0x40) == 0)) {
          *(byte *)(unaff_A6 + -200) = *(byte *)(unaff_A6 + -200) | 0x40;
        }
        if (*(int *)(unaff_A6 + -0xcc) < 0) {
          *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x8000000;
        }
      }
    }
    else {
      uVar2 = 0;
      if (((*(ushort *)(unaff_A6 + -0xca) & 0xf) == 0) &&
         ((*(int *)(unaff_A6 + -200) == 0 && (*(int *)(unaff_A6 + -0xc4) == 0)))) {
        if (*(int *)(unaff_A6 + -0xcc) < 0) {
          *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0xc000000;
          *(undefined4 *)(unaff_A6 + -0xcc) = 0x80000000;
          *(undefined4 *)(unaff_A6 + -200) = 0;
          *(undefined4 *)(unaff_A6 + -0xc4) = 0;
        }
        else {
          *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x4000000;
          *(undefined4 *)(unaff_A6 + -0xcc) = 0;
          *(undefined4 *)(unaff_A6 + -200) = 0;
          *(undefined4 *)(unaff_A6 + -0xc4) = 0;
        }
      }
      else {
        lVar5 = (longdouble)FUN_00037c4a();
        *(undefined1 (*) [12])(unaff_A6 + -0xcc) = (undefined1  [12])lVar5;
        uVar2 = extraout_D1u_00;
      }
    }
  }
  else if (((short)(((uint)*(ushort *)(unaff_A6 + -0xcc) << 0x14) >> 0x10) == -0x10) &&
          (uVar2 = 0, (ushort)(((uint)*(ushort *)(unaff_A6 + -0xcc) << 0x11) >> 0x1d) == 7)) {
    if (((*(int *)(unaff_A6 + -200) != 0) || (*(int *)(unaff_A6 + -0xc4) != 0)) &&
       ((*(byte *)(unaff_A6 + -200) & 0x40) == 0)) {
      *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x1004080;
    }
  }
  else {
    uVar2 = 0;
    if (((*(ushort *)(unaff_A6 + -0xca) & 0xf) == 0) &&
       ((*(int *)(unaff_A6 + -200) == 0 && (*(int *)(unaff_A6 + -0xc4) == 0)))) {
      if (*(int *)(unaff_A6 + -0xcc) < 0) {
        *(undefined4 *)(unaff_A6 + -0xcc) = 0x80000000;
        *(undefined4 *)(unaff_A6 + -200) = 0;
        *(undefined4 *)(unaff_A6 + -0xc4) = 0;
      }
      else {
        *(undefined4 *)(unaff_A6 + -0xcc) = 0;
        *(undefined4 *)(unaff_A6 + -200) = 0;
        *(undefined4 *)(unaff_A6 + -0xc4) = 0;
      }
    }
    else {
      lVar5 = (longdouble)FUN_00037c4a();
      *(undefined1 (*) [12])(unaff_A6 + -0xcc) = (undefined1  [12])lVar5;
      uVar2 = extraout_D1u;
    }
  }
  *(ushort *)(unaff_A6 + -0xe4) = *(ushort *)(unaff_A6 + -0xe4) & 0xfbff;
  uVar1 = *(ushort *)(unaff_A6 + -0xcc) & 0x7fff;
  uVar3 = CONCAT22(uVar2,*(ushort *)(unaff_A6 + -0xcc)) & 0xffff7fff;
  if (uVar1 != 0x7fff) {
    if (uVar1 != 0) {
      if (uVar1 < 0x4000) {
        *(undefined1 *)(unaff_A6 + -0xe8) = 0x10;
      }
      else {
        *(undefined1 *)(unaff_A6 + -0xe8) = 0;
      }
      return (ulonglong)uVar3;
    }
    *(undefined1 *)(unaff_A6 + -0xe8) = 0x30;
    return CONCAT44(0x20,uVar3);
  }
  iVar4 = *(int *)(unaff_A6 + -200);
  if ((iVar4 == 0) && (iVar4 = *(int *)(unaff_A6 + -0xc4), iVar4 == 0)) {
    *(undefined1 *)(unaff_A6 + -0xe8) = 0x40;
    return 0x4000000000;
  }
  *(undefined1 *)(unaff_A6 + -0xe8) = 0x60;
  return CONCAT44(0x60,iVar4);
}



// Function: FUN_00038f1e @ 00038f1e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unkbyte10 FUN_00038f1e(void)

{
  int unaff_A6;
  unkbyte10 in_FP0;
  
  *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x1002080;
  if ((*(byte *)(unaff_A6 + -0x7e) & 0x20) == 0) {
    return _PTR_DAT_00038e9a;
  }
  *(undefined1 *)(unaff_A6 + -0x4c) = 0xff;
  return in_FP0;
}



// Function: FUN_00039056 @ 00039056

void FUN_00039056(void)

{
  int unaff_A6;
  
  *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x208;
  return;
}



// Function: FUN_00039078 @ 00039078

longdouble FUN_00039078(void)

{
  int unaff_A6;
  longdouble in_FP0;
  
  if ((*(byte *)(unaff_A6 + -0xd8) & 0x80) != 0) {
    *(byte *)(unaff_A6 + -0x7c) = *(byte *)(unaff_A6 + -0x7c) | 8;
  }
  if ((*(byte *)(unaff_A6 + -0xd4) & 0x40) != 0) {
    if (((*(byte *)(unaff_A6 + -0xe8) & 0xe0) == 0x60) && ((*(byte *)(unaff_A6 + -200) & 0x40) == 0)
       ) {
      *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x1004080;
    }
    return (longdouble)*(undefined1 (*) [12])(unaff_A6 + -0xd8);
  }
  if ((*(byte *)(unaff_A6 + -0x7e) & 0x40) != 0) {
    *(byte *)(unaff_A6 + -0xe0) = *(byte *)(unaff_A6 + -0xe0) | 0x60;
    *(undefined1 *)(unaff_A6 + -0x4c) = 0xff;
    *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x1004080;
    return in_FP0;
  }
  *(byte *)(unaff_A6 + -0xd4) = *(byte *)(unaff_A6 + -0xd4) | 0x40;
  *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x1004080;
  return (longdouble)*(undefined1 (*) [12])(unaff_A6 + -0xd8);
}



// Function: FUN_000390ee @ 000390ee

longdouble FUN_000390ee(void)

{
  int unaff_A6;
  longdouble in_FP0;
  
  if ((*(byte *)(unaff_A6 + -0xcc) & 0x80) != 0) {
    *(byte *)(unaff_A6 + -0x7c) = *(byte *)(unaff_A6 + -0x7c) | 8;
  }
  if ((*(byte *)(unaff_A6 + -200) & 0x40) != 0) {
    return (longdouble)*(undefined1 (*) [12])(unaff_A6 + -0xcc);
  }
  if ((*(byte *)(unaff_A6 + -0x7e) & 0x40) != 0) {
    *(byte *)(unaff_A6 + -200) = *(byte *)(unaff_A6 + -200) | 0x40;
    *(undefined1 *)(unaff_A6 + -0xe0) = *(undefined1 *)(unaff_A6 + -0xe0);
    *(byte *)(unaff_A6 + -0xe8) = *(byte *)(unaff_A6 + -0xe8) | 0x60;
    *(undefined1 *)(unaff_A6 + -0x4c) = 0xff;
    *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x1004080;
    return in_FP0;
  }
  *(byte *)(unaff_A6 + -200) = *(byte *)(unaff_A6 + -200) | 0x40;
  *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x1004080;
  return (longdouble)*(undefined1 (*) [12])(unaff_A6 + -0xcc);
}



// Function: FUN_0003915c @ 0003915c

undefined4 FUN_0003915c(void)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *in_A0;
  byte *extraout_A0;
  byte *pbVar4;
  byte *extraout_A0_00;
  int unaff_A6;
  
  *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x800;
  if ((*(byte *)(unaff_A6 + -0x7e) & 8) != 0) {
    *(undefined4 *)(unaff_A6 + -0x74) = *(undefined4 *)in_A0;
    *(undefined4 *)(unaff_A6 + -0x70) = *(undefined4 *)(in_A0 + 4);
    *(undefined4 *)(unaff_A6 + -0x6c) = *(undefined4 *)(in_A0 + 8);
    pbVar4 = (byte *)(unaff_A6 + -0x74);
    bVar1 = *pbVar4;
    *pbVar4 = bVar1 & 0x7f;
    *(char *)(unaff_A6 + -0x72) = -((bVar1 & 0x80) != 0);
    if (*(short *)pbVar4 != 0) {
      FUN_0003a944();
      pbVar4 = extraout_A0;
    }
    *pbVar4 = *pbVar4 & 0x7f;
    uVar2 = *(uint *)(pbVar4 + 2) >> 0x18;
    *(uint *)(pbVar4 + 2) = uVar2;
    if (uVar2 != 0) {
      *pbVar4 = *pbVar4 | 0x80;
    }
    *(uint *)(unaff_A6 + -0xe8) = (*(uint *)(unaff_A6 + -0xe8) << 5) >> 0x1d;
    *(byte *)(unaff_A6 + -0xdf) = *(byte *)(unaff_A6 + -0xdf) | 0x10;
    *(byte *)(unaff_A6 + -0xe7) = *(byte *)(unaff_A6 + -0xe7) & 0x7f;
    *(byte *)(unaff_A6 + -0xdc) = *(byte *)(unaff_A6 + -0xdc) & 0xfb;
  }
  if (*(uint *)(unaff_A6 + -0x7d) >> 0x1e == 0) {
    uVar3 = 0;
    if ((*in_A0 & 0x80) != 0) {
      *(byte *)(unaff_A6 + -0x7c) = *(byte *)(unaff_A6 + -0x7c) | 8;
    }
  }
  else {
    bVar1 = *in_A0;
    *in_A0 = bVar1 & 0x7f;
    in_A0[2] = -((bVar1 & 0x80) != 0);
    uVar3 = FUN_0003fd92();
    uVar2 = *(uint *)(extraout_A0_00 + 2) >> 0x18;
    *(uint *)(extraout_A0_00 + 2) = uVar2;
    if (uVar2 != 0) {
      *extraout_A0_00 = *extraout_A0_00 | 0x80;
    }
  }
  return uVar3;
}



// Function: FUN_0003a73e @ 0003a73e

void FUN_0003a73e(void)

{
  int iVar1;
  short extraout_D1w;
  int unaff_A6;
  
  iVar1 = FUN_0003a7ba();
  if (iVar1 == 0) {
    FUN_0003a8c8();
    return;
  }
  *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x208;
                    /* WARNING: Could not recover jumptable at 0x0003a75e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_0003a760)[extraout_D1w])();
  return;
}



// Function: FUN_0003a7ba @ 0003a7ba

void FUN_0003a7ba(void)

{
  return;
}



// Function: FUN_0003a8c8 @ 0003a8c8

void FUN_0003a8c8(void)

{
  short in_D1w;
  
                    /* WARNING: Could not recover jumptable at 0x0003a8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_0003a8b8)[in_D1w])();
  return;
}



// Function: FUN_0003a8d4 @ 0003a8d4

void FUN_0003a8d4(void)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ushort *in_A0;
  
  uVar3 = *in_A0;
  uVar4 = (uint)uVar3;
  if (-1 < (short)(uVar3 - 0x40)) {
    FUN_0003a944();
    return;
  }
  iVar1 = *(int *)(in_A0 + 2);
  uVar2 = *(uint *)(in_A0 + 4);
  if (iVar1 == 0) {
    if (uVar2 == 0) {
      *in_A0 = 0;
      return;
    }
    if (-1 < (short)(uVar3 - ((ushort)(uVar2 != 0) * (short)LZCOUNT(uVar2) + 0x20))) {
      FUN_0003a944();
      return;
    }
  }
  else if (-1 < (short)(uVar3 - (ushort)(iVar1 != 0) * (short)LZCOUNT(iVar1))) {
    FUN_0003a944();
    return;
  }
  *in_A0 = 0;
  *(uint *)(in_A0 + 2) = uVar2 >> (0x20 - uVar4 & 0x3f) | iVar1 << (uVar4 & 0x3f);
  *(uint *)(in_A0 + 4) = uVar2 << (uVar4 & 0x3f);
  return;
}



// Function: FUN_0003a8e2 @ 0003a8e2

void FUN_0003a8e2(void)

{
  int iVar1;
  uint uVar2;
  uint in_D0;
  undefined2 *in_A0;
  
  iVar1 = *(int *)(in_A0 + 2);
  uVar2 = *(uint *)(in_A0 + 4);
  if (iVar1 == 0) {
    if (uVar2 == 0) {
      *in_A0 = 0;
      return;
    }
    if (-1 < (short)((short)in_D0 - ((ushort)(uVar2 != 0) * (short)LZCOUNT(uVar2) + 0x20))) {
      FUN_0003a944();
      return;
    }
  }
  else if (-1 < (short)((short)in_D0 - (ushort)(iVar1 != 0) * (short)LZCOUNT(iVar1))) {
    FUN_0003a944();
    return;
  }
  *in_A0 = 0;
  *(uint *)(in_A0 + 2) = uVar2 >> (0x20 - in_D0 & 0x3f) | iVar1 << (in_D0 & 0x3f);
  *(uint *)(in_A0 + 4) = uVar2 << (in_D0 & 0x3f);
  return;
}



// Function: FUN_0003a944 @ 0003a944

void FUN_0003a944(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short *in_A0;
  
  iVar2 = *(int *)(in_A0 + 2);
  iVar3 = (uint)(iVar2 != 0) * LZCOUNT(iVar2);
  if (iVar2 != 0) {
    *in_A0 = *in_A0 - (short)iVar3;
    uVar1 = *(uint *)(in_A0 + 4);
    *(uint *)(in_A0 + 4) = uVar1 << iVar3;
    *(uint *)(in_A0 + 2) = uVar1 >> (0x20U - iVar3 & 0x3f) | *(int *)(in_A0 + 2) << iVar3;
    return;
  }
  iVar2 = *(int *)(in_A0 + 4);
  iVar3 = (uint)(iVar2 != 0) * LZCOUNT(iVar2);
  *in_A0 = (*in_A0 + -0x20) - (short)iVar3;
  *(int *)(in_A0 + 2) = iVar2 << iVar3;
  in_A0[4] = 0;
  in_A0[5] = 0;
  return;
}



// Function: FUN_0003a996 @ 0003a996

short FUN_0003a996(void)

{
  int in_D0;
  short sVar1;
  char extraout_D1b;
  short sVar2;
  char extraout_D1b_00;
  char extraout_D1b_01;
  char cVar3;
  byte *in_A0;
  int unaff_A6;
  
  if ((*in_A0 & 0x40) != 0) {
    *in_A0 = *in_A0 | 0x80;
  }
  if ((char)in_D0 == '\0') {
    sVar1 = FUN_0003aa2c();
    cVar3 = extraout_D1b;
  }
  else if (in_D0 == 1) {
    sVar2 = 0x3f81;
    sVar1 = -*(short *)in_A0 + 0x3f81;
    if (-1 < (short)(-*(short *)in_A0 + 0x3f3e)) goto LAB_0003a9f2;
    sVar1 = FUN_0003aa2c();
    cVar3 = extraout_D1b_01;
  }
  else {
    sVar2 = 0x3c01;
    sVar1 = -*(short *)in_A0 + 0x3c01;
    if (-1 < (short)(-*(short *)in_A0 + 0x3bbe)) {
LAB_0003a9f2:
      if ((*(int *)(in_A0 + 4) != 0) || (*(int *)(in_A0 + 8) != 0)) {
        *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x208;
        sVar1 = 0;
      }
      *(short *)in_A0 = sVar2;
      in_A0[4] = 0;
      in_A0[5] = 0;
      in_A0[6] = 0;
      in_A0[7] = 0;
      in_A0[8] = 0;
      in_A0[9] = 0;
      in_A0[10] = 0;
      in_A0[0xb] = 0;
      return sVar1;
    }
    sVar1 = FUN_0003aa2c();
    cVar3 = extraout_D1b_00;
  }
  if (cVar3 != '\0') {
    *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x208;
  }
  return sVar1;
}



// Function: FUN_0003aa2c @ 0003aa2c

/* WARNING: Removing unreachable block (ram,0x0003aaea) */
/* WARNING: Removing unreachable block (ram,0x0003aa98) */

undefined4 FUN_0003aa2c(void)

{
  short sVar1;
  int in_D0;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined4 in_D1;
  short sVar4;
  short *in_A0;
  int unaff_A6;
  
  if ((*(byte *)(unaff_A6 + -0xdc) & 2) != 0) {
    in_D0 = (*(uint *)(unaff_A6 + -0xe8) & 0x3800000) << 6;
  }
  *(undefined4 *)(unaff_A6 + -0x5c) = *(undefined4 *)(in_A0 + 4);
  *(int *)(unaff_A6 + -0x58) = in_D0;
  sVar4 = (short)in_D1;
  sVar1 = sVar4 - *in_A0;
  uVar3 = (undefined2)((uint)in_D1 >> 0x10);
  if (sVar1 == 0 || sVar4 < *in_A0) {
    return *(undefined4 *)(unaff_A6 + -0x58);
  }
  if (sVar1 < 0x20) {
    *in_A0 = sVar4;
    *(uint *)(in_A0 + 2) = (uint)(0 << CONCAT22(uVar3,sVar1)) >> 0x20 - (uint)(ushort)(0x20 - sVar1)
    ;
    in_A0[4] = 0;
    in_A0[5] = 0;
    uVar2 = 0;
    if ((*(uint *)(unaff_A6 + -0x58) & 0xe0000000) != 0) {
      uVar2 = 0x20000000;
    }
    return uVar2;
  }
  if (sVar1 < 0x40) {
    *in_A0 = sVar4;
    uVar2 = 0;
    in_A0[2] = 0;
    in_A0[3] = 0;
    *(uint *)(in_A0 + 4) =
         (uint)(0 << CONCAT22(uVar3,sVar1 + -0x20)) >> 0x20 - (uint)(ushort)(0x20 - (sVar1 + -0x20))
    ;
    if ((*(uint *)(unaff_A6 + -0x58) & 0xe0000000) != 0) {
      uVar2 = 0x20000000;
    }
    return uVar2;
  }
  uVar2 = FUN_0003ab18();
  return uVar2;
}



// Function: FUN_0003aa6c @ 0003aa6c

/* WARNING: Removing unreachable block (ram,0x0003aa98) */

longlong FUN_0003aa6c(void)

{
  undefined2 in_D0w;
  uint uVar1;
  int in_D1;
  undefined2 *in_A0;
  int unaff_A6;
  
  *in_A0 = in_D0w;
  *(uint *)(in_A0 + 2) = (uint)(0 << in_D1) >> 0x20 - (uint)(ushort)(0x20 - (short)in_D1);
  *(undefined4 *)(in_A0 + 4) = 0;
  uVar1 = 0;
  if ((*(uint *)(unaff_A6 + -0x58) & 0xe0000000) != 0) {
    uVar1 = 0x20000000;
  }
  return (ulonglong)uVar1 << 0x20;
}



// Function: FUN_0003aabc @ 0003aabc

/* WARNING: Removing unreachable block (ram,0x0003aaea) */

longlong FUN_0003aabc(void)

{
  short sVar1;
  undefined2 in_D0w;
  uint uVar2;
  undefined4 in_D1;
  undefined2 *in_A0;
  int unaff_A6;
  
  *in_A0 = in_D0w;
  sVar1 = (short)in_D1 + -0x20;
  uVar2 = 0;
  *(undefined4 *)(in_A0 + 2) = 0;
  *(uint *)(in_A0 + 4) =
       (uint)(0 << CONCAT22((short)((uint)in_D1 >> 0x10),sVar1)) >>
       0x20 - (uint)(ushort)(0x20 - sVar1);
  if ((*(uint *)(unaff_A6 + -0x58) & 0xe0000000) != 0) {
    uVar2 = 0x20000000;
  }
  return (ulonglong)uVar2 << 0x20;
}



// Function: FUN_0003ab18 @ 0003ab18

undefined8 FUN_0003ab18(void)

{
  undefined2 in_D0w;
  uint uVar1;
  undefined4 in_D1;
  uint uVar2;
  undefined4 uVar3;
  uint *in_A0;
  int unaff_A6;
  
  *(undefined2 *)in_A0 = in_D0w;
  if ((short)*in_A0 < 0) {
    *in_A0 = *in_A0 | 0x80000000;
  }
  if ((short)in_D1 == 0x40) {
    uVar2 = in_A0[1] & 0x3fffffff;
    uVar1 = in_A0[1] & 0xc0000000;
  }
  else {
    if ((short)in_D1 != 0x41) {
      in_A0[1] = 0;
      in_A0[2] = 0;
      return CONCAT44(0x20000000,CONCAT31((int3)((uint)in_D1 >> 8),0xff));
    }
    uVar2 = in_A0[1] & 0x7fffffff;
    uVar1 = (in_A0[1] & 0x80000000) >> 1;
  }
  if (((uVar2 == 0) && (in_A0[2] == 0)) && (*(char *)(unaff_A6 + -0x58) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar1 = uVar1 | 0x20000000;
    uVar3 = CONCAT31((int3)(uVar2 >> 8),0xff);
  }
  in_A0[1] = 0;
  in_A0[2] = 0;
  return CONCAT44(uVar1,uVar3);
}



// Function: FUN_0003baca @ 0003baca

longdouble FUN_0003baca(void)

{
  bool bVar1;
  int in_D0;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int unaff_A6;
  longdouble lVar5;
  
  uVar2 = *(ushort *)(unaff_A6 + -0xd8);
  uVar3 = *(uint *)(unaff_A6 + -0xd4);
  iVar4 = *(int *)(unaff_A6 + -0xd0);
  while( true ) {
    if ((int)uVar3 < 0) {
      uVar2 = (short)in_D0 + uVar2;
      if (*(char *)(unaff_A6 + -0x54) != '\0') {
        uVar2 = uVar2 | 0x8000;
      }
      *(ushort *)(unaff_A6 + -0xd8) = uVar2;
      *(uint *)(unaff_A6 + -0xd4) = uVar3;
      *(int *)(unaff_A6 + -0xd0) = iVar4;
      return (longdouble)*(undefined1 (*) [12])(unaff_A6 + -0xd8);
    }
    if (in_D0 == 0) break;
    in_D0 = in_D0 + -1;
    bVar1 = iVar4 < 0;
    iVar4 = iVar4 << 1;
    uVar3 = uVar3 << 1 | (uint)bVar1;
  }
  if (*(char *)(unaff_A6 + -0x54) != '\0') {
    *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x8000000;
    uVar2 = uVar2 | 0x8000;
  }
  *(ushort *)(unaff_A6 + -0xcc) = uVar2;
  *(uint *)(unaff_A6 + -200) = uVar3;
  *(int *)(unaff_A6 + -0xc4) = iVar4;
  *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x800;
  lVar5 = (longdouble)FUN_0003915c();
  return lVar5;
}



// Function: FUN_0003c660 @ 0003c660

longdouble FUN_0003c660(void)

{
  byte bVar1;
  uint uVar2;
  undefined1 (*in_A0) [12];
  undefined1 (*extraout_A0) [12];
  int unaff_A6;
  longdouble lVar3;
  
  *(uint *)(unaff_A6 + -0x54) = (uint)(*(int *)(unaff_A6 + -0x7d) << 2) >> 0x1e;
  bVar1 = (*in_A0)[0];
  (*in_A0)[0] = bVar1 & 0x7f;
  (*in_A0)[2] = -((bVar1 & 0x80) != 0);
  if (0x403e < *(short *)*in_A0) {
    uVar2 = *(uint *)(*in_A0 + 2) >> 0x18;
    *(uint *)(*in_A0 + 2) = uVar2;
    if (uVar2 != 0) {
      (*in_A0)[0] = (*in_A0)[0] | 0x80;
    }
    return (longdouble)*in_A0;
  }
  if (0x3ffd < *(short *)*in_A0) {
    FUN_0003aa2c();
    FUN_0003a73e();
    FUN_0003a944();
    uVar2 = *(uint *)(*extraout_A0 + 2) >> 0x18;
    *(uint *)(*extraout_A0 + 2) = uVar2;
    if (uVar2 != 0) {
      (*extraout_A0)[0] = (*extraout_A0)[0] | 0x80;
    }
    return (longdouble)*extraout_A0;
  }
  if ((*(byte *)(unaff_A6 + -0x51) & 2) == 0) {
    if ((*in_A0)[2] == '\0') {
      FUN_00038326();
      lVar3 = (longdouble)FUN_00039056();
      return lVar3;
    }
    FUN_00038336();
    lVar3 = (longdouble)FUN_00039056();
    return lVar3;
  }
  if ((*in_A0)[2] == '\0') {
    if (*(char *)(unaff_A6 + -0x51) != '\x03') {
      FUN_00038326();
      lVar3 = (longdouble)FUN_00039056();
      return lVar3;
    }
    FUN_0003830e();
    lVar3 = (longdouble)FUN_00039056();
    return lVar3;
  }
  if (*(char *)(unaff_A6 + -0x51) != '\x02') {
    FUN_00038336();
    lVar3 = (longdouble)FUN_00039056();
    return lVar3;
  }
  FUN_00038316();
  lVar3 = (longdouble)FUN_00039056();
  return lVar3;
}



// Function: thunk_FUN_000108f0 @ 0003c79e

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_000108f0(void)

{
  _DAT_01200070 = 0x3700;
  _DAT_01200072 = 0;
  _DAT_01200076 = 0;
  _DAT_01200078 = 0;
  _DAT_01200020 = 0;
  _DAT_01200024 = 0;
  _DAT_01300050 = 0;
  _DAT_0120006c = (undefined1 *)register0x0000003c;
  do {
    _DAT_01200024 = _DAT_01200024 & 0xfbff | 0x800;
    _DAT_01200028 = _DAT_01200028 + 1;
    _DAT_013000bc = 0x10;
    _DAT_013000b8 = 0x10;
    _DAT_0004d4fc = 0x10a7e;
    FUN_00010aae();
  } while( true );
}



// Function: thunk_FUN_000108f0 @ 0003c814

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_000108f0(void)

{
  _DAT_01200070 = 0x3700;
  _DAT_01200072 = 0;
  _DAT_01200076 = 0;
  _DAT_01200078 = 0;
  _DAT_01200020 = 0;
  _DAT_01200024 = 0;
  _DAT_01300050 = 0;
  _DAT_0120006c = (undefined1 *)register0x0000003c;
  do {
    _DAT_01200024 = _DAT_01200024 & 0xfbff | 0x800;
    _DAT_01200028 = _DAT_01200028 + 1;
    _DAT_013000bc = 0x10;
    _DAT_013000b8 = 0x10;
    _DAT_0004d4fc = 0x10a7e;
    FUN_00010aae();
  } while( true );
}



// Function: thunk_FUN_000108f0 @ 0003c888

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_000108f0(void)

{
  _DAT_01200070 = 0x3700;
  _DAT_01200072 = 0;
  _DAT_01200076 = 0;
  _DAT_01200078 = 0;
  _DAT_01200020 = 0;
  _DAT_01200024 = 0;
  _DAT_01300050 = 0;
  _DAT_0120006c = (undefined1 *)register0x0000003c;
  do {
    _DAT_01200024 = _DAT_01200024 & 0xfbff | 0x800;
    _DAT_01200028 = _DAT_01200028 + 1;
    _DAT_013000bc = 0x10;
    _DAT_013000b8 = 0x10;
    _DAT_0004d4fc = 0x10a7e;
    FUN_00010aae();
  } while( true );
}



// Function: FUN_0003c8ea @ 0003c8ea

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003c8ea(void)

{
  _DAT_01200070 = 0x3700;
  _DAT_01200072 = 0;
  _DAT_01200076 = 0;
  _DAT_01200078 = 0;
  _DAT_01200020 = 0;
  _DAT_01200024 = 0;
  _DAT_01300050 = 0;
  _DAT_0120006c = (undefined1 *)register0x0000003c;
  do {
    _DAT_01200024 = _DAT_01200024 & 0xfbff | 0x800;
    _DAT_01200028 = _DAT_01200028 + 1;
    _DAT_013000bc = 0x10;
    _DAT_013000b8 = 0x10;
    _DAT_0004d4fc = 0x10a7e;
    FUN_00010aae();
  } while( true );
}



// Function: FUN_0003c8f2 @ 0003c8f2

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003c8f2(void)

{
  _DAT_01200070 = 0x3700;
  _DAT_01200072 = 0;
  _DAT_01200076 = 0;
  _DAT_01200078 = 0;
  _DAT_01200020 = 0;
  _DAT_01200024 = 0;
  _DAT_01300050 = 0;
  _DAT_0120006c = (undefined1 *)register0x0000003c;
  do {
    _DAT_01200024 = _DAT_01200024 & 0xfbff | 0x800;
    _DAT_01200028 = _DAT_01200028 + 1;
    _DAT_013000bc = 0x10;
    _DAT_013000b8 = 0x10;
    _DAT_0004d4fc = 0x10a7e;
    FUN_00010aae();
  } while( true );
}



// Function: FUN_0003c8fe @ 0003c8fe

void FUN_0003c8fe(void)

{
  int in_D0;
  undefined1 *in_A0;
  undefined1 *in_A1;
  int unaff_A6;
  
  if ((*(byte *)(unaff_A6 + 4) & 0x20) != 0) {
    do {
      *in_A1 = *in_A0;
      in_D0 = in_D0 + -1;
      in_A0 = in_A0 + 1;
      in_A1 = in_A1 + 1;
    } while (in_D0 != 0);
    return;
  }
  FUN_0003c94a();
  return;
}



// Function: FUN_0003c924 @ 0003c924

void FUN_0003c924(void)

{
  int in_D0;
  undefined1 *in_A0;
  undefined1 *in_A1;
  int unaff_A6;
  
  if ((*(byte *)(unaff_A6 + 4) & 0x20) != 0) {
    do {
      *in_A1 = *in_A0;
      in_D0 = in_D0 + -1;
      in_A0 = in_A0 + 1;
      in_A1 = in_A1 + 1;
    } while (in_D0 != 0);
    return;
  }
  FUN_0003c96a();
  return;
}



// Function: FUN_0003c94a @ 0003c94a

void FUN_0003c94a(undefined1 *param_1,undefined1 *param_2,short param_3)

{
  param_3 = param_3 + -1;
  do {
    *param_2 = *param_1;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (param_3 != -1);
  return;
}



// Function: FUN_0003c96a @ 0003c96a

void FUN_0003c96a(undefined1 *param_1,undefined1 *param_2,short param_3)

{
  param_3 = param_3 + -1;
  do {
    *param_2 = *param_1;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (param_3 != -1);
  return;
}



// Function: FUN_0003d654 @ 0003d654

longdouble FUN_0003d654(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar6;
  char cVar7;
  short sVar4;
  byte bVar8;
  undefined *puVar9;
  longdouble *extraout_A0;
  int unaff_A6;
  ushort uVar5;
  
  uVar2 = *(int *)(unaff_A6 + -0xe4) << 9;
  uVar5 = (ushort)(uVar2 >> 0x19);
  uVar3 = *(int *)(unaff_A6 + -0x80) << 0x1a;
  bVar6 = (byte)(uVar2 >> 0x19);
  bVar8 = (byte)(uVar3 >> 0x1e);
  if (bVar6 == 0) {
    if (bVar8 == 0) {
      puVar9 = &DAT_00038754;
    }
    else if (bVar8 == 3) {
      puVar9 = &DAT_0003876c;
    }
    else {
      puVar9 = &DAT_00038760;
    }
  }
  else {
    if (bVar6 < 0xb) {
LAB_0003d67e:
      return (longdouble)DAT_0003d64e;
    }
    if (bVar6 < 0xf) {
      iVar1 = (uVar2 >> 0x19) - 0xb;
      uVar5 = (ushort)iVar1;
      if (bVar8 == 0) {
        puVar9 = &DAT_00038778;
      }
      else if (bVar8 == 3) {
        puVar9 = &DAT_000387f0;
      }
      else {
        puVar9 = &DAT_000387b4;
      }
      if ('\x02' < (char)iVar1) goto LAB_0003d756;
    }
    else {
      if ((bVar6 < 0x30) || (0x3f < bVar6)) goto LAB_0003d67e;
      iVar1 = (uVar2 >> 0x19) - 0x30;
      uVar5 = (ushort)iVar1;
      cVar7 = (char)iVar1;
      if (bVar8 == 0) {
        puVar9 = &DAT_0003882c;
      }
      else if (bVar8 == 3) {
        puVar9 = &DAT_000389ac;
      }
      else {
        puVar9 = &DAT_000388ec;
      }
      if (('\x01' < cVar7) && (cVar7 < '\b')) goto LAB_0003d756;
    }
  }
  *(uint *)(unaff_A6 + -0x7c) = *(uint *)(unaff_A6 + -0x7c) | 0x208;
LAB_0003d756:
  sVar4 = uVar5 * 0xc;
  *(uint *)(unaff_A6 + -0x54) = uVar3 >> 0x1e;
  if ((uint)(*(int *)(unaff_A6 + -0x80) << 0x18) >> 0x1e != 0) {
    *(undefined4 *)(unaff_A6 + -0x74) = *(undefined4 *)(puVar9 + sVar4);
    *(undefined4 *)(unaff_A6 + -0x70) = *(undefined4 *)(puVar9 + sVar4 + 4);
    *(undefined4 *)(unaff_A6 + -0x6c) = *(undefined4 *)(puVar9 + sVar4 + 8);
    *(char *)(unaff_A6 + -0x72) = -((*(byte *)(unaff_A6 + -0x74) & 0x80) != 0);
    FUN_0003a73e();
    uVar2 = *(uint *)((int)extraout_A0 + 2) >> 0x18;
    *(uint *)((int)extraout_A0 + 2) = uVar2;
    if (uVar2 != 0) {
      *(byte *)extraout_A0 = *(byte *)extraout_A0 | 0x80;
    }
    return *extraout_A0;
  }
  return *(longdouble *)(puVar9 + sVar4);
}



// Function: FUN_0003eb3a @ 0003eb3a

uint FUN_0003eb3a(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int unaff_A6;
  unkbyte10 in_FP0;
  undefined4 local_c;
  
  uVar1 = *(int *)(unaff_A6 + -0xe4) << 6;
  uVar2 = uVar1 >> 0x1d;
  bVar3 = (byte)(uVar1 >> 0x1d);
  if (3 < bVar3) {
    uVar1 = 1 << (7 - uVar2 & 0x1f);
    local_c = (undefined4)((unkuint10)in_FP0 >> 0x30);
    fmovem(local_c,uVar1);
    return uVar1;
  }
  if (bVar3 == 0) {
    *(unkbyte10 *)(unaff_A6 + -0xb0) = in_FP0;
    return uVar2;
  }
  if (bVar3 == 1) {
    *(unkbyte10 *)(unaff_A6 + -0xa4) = in_FP0;
    return uVar2;
  }
  if (bVar3 != 2) {
    *(unkbyte10 *)(unaff_A6 + -0x8c) = in_FP0;
    return uVar2;
  }
  *(unkbyte10 *)(unaff_A6 + -0x98) = in_FP0;
  return uVar2;
}



// Function: FUN_0003fbd6 @ 0003fbd6

undefined4 FUN_0003fbd6(void)

{
  FUN_0003c924();
  return 0;
}



// Function: FUN_0003fbf0 @ 0003fbf0

uint FUN_0003fbf0(void)

{
  ushort uVar1;
  short sVar3;
  uint uVar2;
  int unaff_A6;
  
  sVar3 = FUN_0003fcb0();
  if (sVar3 == 3) {
    uVar2 = FUN_0003fcc6();
    return uVar2;
  }
  if ((*(byte *)(unaff_A6 + -0xdc) & 2) == 0) {
    uVar2 = *(uint *)(unaff_A6 + -0xe4) & 0x440000;
    if (uVar2 == 0x400000) {
      return 1;
    }
    if (uVar2 == 0x440000) {
      return 2;
    }
    uVar2 = *(uint *)(unaff_A6 + -0xe4) & 0x7f0000;
    if (uVar2 == 0x270000) {
      return 0;
    }
    if (uVar2 == 0x240000) {
      return 0;
    }
  }
  else {
    uVar2 = (uint)(*(int *)(unaff_A6 + -0xf0) << 9) >> 0x1e;
    if (uVar2 == 2) {
      return 1;
    }
    if (uVar2 == 3) {
      return 2;
    }
    uVar1 = *(ushort *)(unaff_A6 + -0xf0) & 0x7f;
    if ((uVar1 == 0x33) || (uVar1 == 0x30)) {
      return 0;
    }
  }
  return (uint)(*(int *)(unaff_A6 + -0x80) << 0x18) >> 0x1e;
}



// Function: FUN_0003fcb0 @ 0003fcb0

uint FUN_0003fcb0(void)

{
  int unaff_A6;
  
  if ((*(byte *)(unaff_A6 + -0xdc) & 2) != 0) {
    return 0;
  }
  return *(uint *)(unaff_A6 + -0xe4) >> 0x1d;
}



// Function: FUN_0003fcc6 @ 0003fcc6

undefined4 FUN_0003fcc6(void)

{
  byte bVar1;
  int unaff_A6;
  
  if ((*(byte *)(unaff_A6 + -0xdc) & 2) != 0) {
    return 0;
  }
  bVar1 = (byte)((uint)(*(int *)(unaff_A6 + -0xe4) << 3) >> 0x1d);
  if (bVar1 == 1) {
    return 1;
  }
  if (bVar1 == 5) {
    return 2;
  }
  return 0;
}



// Function: FUN_0003fd92 @ 0003fd92

void FUN_0003fd92(void)

{
  short in_D0w;
  int unaff_A6;
  
                    /* WARNING: Could not recover jumptable at 0x0003fda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_0003fd52 +
              (short)((ushort)((uint)(*(int *)(unaff_A6 + -0x7d) << 2) >> 0x1e) | in_D0w << 2) * 4))
            ();
  return;
}



// Function: FUN_0003ff2a @ 0003ff2a

void FUN_0003ff2a(void)

{
  short in_D1w;
  
                    /* WARNING: Could not recover jumptable at 0x0003ff32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_0003feca + in_D1w * 4))();
  return;
}



// Function: FUN_0003ffd0 @ 0003ffd0

void FUN_0003ffd0(void)

{
  undefined4 in_FPCR;
  undefined4 in_FPSR;
  undefined4 in_FPIAR;
  undefined4 local_c8;
  undefined4 *local_84;
  
  saveFPUStateFrame(local_c8);
  *local_84 = in_FPCR;
  local_84[3] = in_FPSR;
  local_84[6] = in_FPIAR;
  restoreFPUStateFrame(local_c8);
  thunk_FUN_000108f0();
  return;
}



// Function: FUN_0004071e @ 0004071e

void FUN_0004071e(void)

{
  byte bVar1;
  char cVar4;
  int iVar2;
  uint uVar3;
  byte *in_A0;
  byte *extraout_A0;
  uint *extraout_A0_00;
  int unaff_A6;
  unkbyte10 in_FP0;
  unkbyte10 extraout_FP0;
  unkbyte10 in_FP1;
  unkbyte10 unaff_FP2;
  unkbyte10 unaff_FP3;
  
  if ((*(byte *)(unaff_A6 + -0xdc) & 2) == 0) {
    cVar4 = FUN_0003fcb0();
    if (cVar4 == '\x03') {
      iVar2 = FUN_0003fcc6();
      if (iVar2 == 0) {
        if (*(byte *)((int)extraout_A0_00 + 2) != 0) {
          *(byte *)extraout_A0_00 = *(byte *)extraout_A0_00 | 0x80;
        }
        *(byte *)((int)extraout_A0_00 + 2) = 0;
        FUN_0003c8fe();
        return;
      }
      if (iVar2 != 1) {
        if (*(short *)extraout_A0_00 == 0x7fff) {
          uVar3 = 0x7ff00000;
          extraout_A0_00[1] = 0;
          if (*(byte *)((int)extraout_A0_00 + 2) != 0) {
            uVar3 = 0xfff00000;
          }
          *extraout_A0_00 = uVar3;
        }
        else {
          uVar3 = (uint)(ushort)(*(short *)extraout_A0_00 + 0xc400) << 0x14;
          if (*(byte *)((int)extraout_A0_00 + 2) != 0) {
            uVar3 = uVar3 | 0x80000000;
          }
          *extraout_A0_00 = (extraout_A0_00[1] << 1) >> 0xc | uVar3;
          extraout_A0_00[1] = extraout_A0_00[1] << 0x15;
          extraout_A0_00[1] = extraout_A0_00[2] >> 0xb | extraout_A0_00[1];
        }
        FUN_0003c8fe();
        return;
      }
      if (*(short *)extraout_A0_00 == 0x7fff) {
        uVar3 = 0x7f800000;
        if (*(byte *)((int)extraout_A0_00 + 2) != 0) {
          uVar3 = 0xff800000;
        }
      }
      else {
        uVar3 = (uint)(ushort)(*(short *)extraout_A0_00 + 0xc080) << 0x17;
        if (*(byte *)((int)extraout_A0_00 + 2) != 0) {
          uVar3 = uVar3 | 0x80000000;
        }
        uVar3 = (extraout_A0_00[1] << 1) >> 9 | uVar3;
      }
      *(uint *)(unaff_A6 + -0x54) = uVar3;
      if (*(int *)(unaff_A6 + 0xc) != 0) {
        FUN_0003c8fe();
        return;
      }
      FUN_0003fbd6();
      FUN_0003ff2a();
      return;
    }
    iVar2 = *(int *)(unaff_A6 + -0xe4);
    in_A0 = extraout_A0;
    in_FP0 = extraout_FP0;
  }
  else {
    iVar2 = *(int *)(unaff_A6 + -0xf0);
  }
  bVar1 = (&DAT_00040716)[(short)(ushort)((uint)(iVar2 << 6) >> 0x1d)];
  if (in_A0[2] != 0) {
    *in_A0 = *in_A0 | 0x80;
  }
  fmovem(*(undefined4 *)in_A0,(uint)bVar1);
  if (bVar1 == 0x80) {
    *(unkbyte10 *)(unaff_A6 + -0xb0) = in_FP0;
    return;
  }
  if (bVar1 == 0x40) {
    *(unkbyte10 *)(unaff_A6 + -0xa4) = in_FP1;
    return;
  }
  if (bVar1 == 0x20) {
    *(unkbyte10 *)(unaff_A6 + -0x98) = unaff_FP2;
    return;
  }
  if (bVar1 == 0x10) {
    *(unkbyte10 *)(unaff_A6 + -0x8c) = unaff_FP3;
    return;
  }
  return;
}



// Function: FUN_000408a6 @ 000408a6

undefined4 FUN_000408a6(void)

{
  undefined4 in_D0;
  undefined4 uVar1;
  undefined4 in_FPCR;
  undefined4 in_FPSR;
  undefined4 in_FPIAR;
  uint local_e0;
  undefined4 local_c8;
  undefined4 local_84;
  byte bStack_7e;
  undefined4 local_80;
  
  saveFPUStateFrame(local_c8);
  *local_84 = in_FPCR;
  local_84[3] = in_FPSR;
  local_84[6] = in_FPIAR;
  FUN_000409c0();
  if (((uint)local_84 & 0x800) != 0) {
    if ((local_e0 & 0x2000000) != 0) {
      FUN_00037988();
    }
    restoreFPUStateFrame(local_c8);
    uVar1 = thunk_FUN_000108f0();
    return uVar1;
  }
  if ((bStack_7e & local_84._2_1_ & 3) == 0) {
    if ((local_e0 & 0x2000000) != 0) {
      FUN_00037988();
      restoreFPUStateFrame(local_c8);
    }
    return in_D0;
  }
  if ((local_e0 & 0x2000000) != 0) {
    FUN_00037988();
  }
  restoreFPUStateFrame(local_c8);
  uVar1 = thunk_FUN_000108f0();
  return uVar1;
}



// Function: FUN_000409c0 @ 000409c0

void FUN_000409c0(void)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  byte *pbVar4;
  short *extraout_A0;
  byte *extraout_A0_00;
  int unaff_A6;
  int iVar5;
  
  uVar2 = FUN_0003fbf0();
  iVar5 = (uint)uVar2 << 0x10;
  if ((*(byte *)(unaff_A6 + -0xdc) & 2) == 0) {
    pbVar4 = (byte *)(unaff_A6 + -0xd8);
  }
  else {
    pbVar4 = (byte *)(unaff_A6 + -0x10c);
    uVar2 = *(ushort *)(unaff_A6 + -0xf0) & 0x7f;
    if ((uVar2 == 0x30) || (uVar2 == 0x33)) {
      iVar5 = 0x10000;
    }
  }
  bVar1 = *pbVar4;
  *pbVar4 = bVar1 & 0x7f;
  pbVar4[2] = -((bVar1 & 0x80) != 0);
  FUN_0003a996(iVar5);
  FUN_0003a73e();
  cVar3 = FUN_0003fcb0();
  if (cVar3 == '\x03') {
    cVar3 = FUN_0003fcc6();
    if ((cVar3 != '\0') && (-1 < *(char *)(extraout_A0 + 2))) {
      *extraout_A0 = *extraout_A0 + -1;
    }
    FUN_0004071e();
  }
  else {
    FUN_0004071e();
    if ((*(int *)(extraout_A0_00 + 4) == 0) && (*(int *)(extraout_A0_00 + 8) == 0)) {
      *(byte *)(unaff_A6 + -0x7c) = *(byte *)(unaff_A6 + -0x7c) | 4;
    }
    if ((*extraout_A0_00 & 0x80) != 0) {
      *(byte *)(unaff_A6 + -0x7c) = *(byte *)(unaff_A6 + -0x7c) | 8;
    }
  }
  if ((*(byte *)(unaff_A6 + -0x7a) & 2) != 0) {
    *(byte *)(unaff_A6 + -0x79) = *(byte *)(unaff_A6 + -0x79) | 0x20;
  }
  return;
}



// Function: FUN_00040a6e @ 00040a6e

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00040a6e(void)

{
  undefined4 in_D0;
  undefined4 in_FPCR;
  undefined4 in_FPSR;
  undefined4 in_FPIAR;
  undefined4 uVar1;
  undefined4 local_c8 [11];
  undefined4 *local_84;
  
  saveFPUStateFrame(local_c8[0]);
  *local_84 = in_FPCR;
  local_84[3] = in_FPSR;
  local_84[6] = in_FPIAR;
  if ((local_c8[0]._0_1_ & 0xf0) != 0x40) {
    _DAT_01200070 = 0x3700;
    _DAT_01200072 = 0;
    _DAT_01200076 = 0;
    _DAT_01200078 = 0;
    _DAT_01200020 = 0;
    _DAT_01200024 = 0;
    _DAT_01300050 = 0;
    _DAT_01200030 = CONCAT31((int3)((uint)in_D0 >> 8),local_c8[0]._0_1_) & 0xfffffff0;
    _DAT_01200068 = &stack0xfffffffc;
    _DAT_0120006c = local_c8;
    do {
      _DAT_01200024 = _DAT_01200024 & 0xfbff | 0x800;
      _DAT_01200028 = _DAT_01200028 + 1;
      _DAT_013000bc = 0x10;
      _DAT_013000b8 = 0x10;
      _DAT_0004d4fc = 0x10a7e;
      FUN_00010aae();
    } while( true );
  }
  FUN_00038a6c();
  uVar1 = 0x40ac8;
  FUN_00037ed6();
  saveFPUStateFrame(uVar1);
  FUN_0003eb3a(uVar1);
  FUN_000383bc();
  return;
}



// Function: FUN_00046f54 @ 00046f54

void FUN_00046f54(void)

{
  DAT_000007d8 = 0;
  return;
}



// Function: FUN_00046f5e @ 00046f5e

void FUN_00046f5e(void)

{
  DAT_00000602 = DAT_000040b2;
  DAT_00000606 = DAT_000040b6;
  DAT_0000060a = DAT_000040ba;
  DAT_0000060e = DAT_000040be;
  DAT_00000612 = DAT_000040c2;
  DAT_00000616 = DAT_000040c6;
  DAT_0000061a = DAT_000040ca;
  DAT_0000061e = DAT_000040ce;
  DAT_00000622 = DAT_000040d2;
  DAT_00000626 = DAT_000040d6;
  DAT_0000062a = DAT_000040da;
  DAT_0000062e = DAT_000040de;
  DAT_0000064a = DAT_000040fa;
  DAT_0000064e = DAT_000040fe;
  DAT_00000652 = DAT_00004102;
  DAT_00000656 = DAT_00004106;
  DAT_0000065a = DAT_0000410a;
  DAT_0000065e = DAT_0000410e;
  DAT_00000662 = DAT_00004112;
  DAT_00000666 = DAT_00004116;
  DAT_0000066a = DAT_0000411a;
  return;
}



// Function: FUN_00046fe2 @ 00046fe2

void FUN_00046fe2(void)

{
  int in_A0;
  
  DAT_00000802 = *(undefined4 *)(in_A0 + 0x2a);
  DAT_00000806 = *(undefined4 *)(in_A0 + 0x2e);
  DAT_0000080a = *(undefined4 *)(in_A0 + 0x32);
  DAT_0000080e = *(undefined4 *)(in_A0 + 0x36);
  DAT_00000812 = *(undefined4 *)(in_A0 + 0x3a);
  DAT_00000816 = *(undefined4 *)(in_A0 + 0x3e);
  DAT_0000081a = *(undefined4 *)(in_A0 + 0x42);
  DAT_0000081e = *(undefined4 *)(in_A0 + 0x46);
  DAT_00000822 = *(undefined4 *)(in_A0 + 0x4a);
  DAT_00000826 = *(undefined4 *)(in_A0 + 0x4e);
  DAT_0000082a = *(undefined4 *)(in_A0 + 0x52);
  DAT_0000082e = *(undefined4 *)(in_A0 + 0x56);
  DAT_000007d8 = 0xc000;
  DAT_000007da = 0x8000;
  return;
}



// Function: FUN_0004703a @ 0004703a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004703a(void)

{
  bool bVar1;
  longdouble lVar2;
  byte bVar3;
  ushort *extraout_A0;
  ushort *extraout_A0_00;
  ushort *puVar4;
  ushort *extraout_A0_01;
  ushort *extraout_A0_02;
  int extraout_A1;
  int extraout_A1_00;
  int extraout_A1_01;
  int iVar5;
  ushort *puVar6;
  bool bVar7;
  longdouble lVar8;
  longdouble in_FP1;
  longdouble unaff_FP2;
  longdouble lVar9;
  longdouble unaff_FP4;
  longdouble unaff_FP5;
  longdouble lVar10;
  
  lVar8 = (longdouble)FUN_0000de10();
  puVar4 = extraout_A0;
  iVar5 = extraout_A1;
  if ((*extraout_A0 & 0x8000) != 0) {
    lVar8 = (longdouble)FUN_0000de10();
    puVar4 = extraout_A0_00;
    iVar5 = extraout_A1_00;
  }
  puVar6 = &DAT_000007d8;
  if ((DAT_000007d8 & 0x8000) == 0) {
    puVar6 = puVar4;
  }
  puVar4 = (ushort *)&DAT_00004088;
  if ((DAT_0000408b == '\0') || (DAT_0000408b == '\x02')) {
    lVar8 = (longdouble)_DAT_000040b2 - (longdouble)*(undefined1 (*) [12])(iVar5 + 0x2a);
    in_FP1 = (longdouble)_DAT_000040be - (longdouble)*(undefined1 (*) [12])(iVar5 + 0x36);
    unaff_FP2 = (longdouble)_DAT_000040ca - (longdouble)*(undefined1 (*) [12])(iVar5 + 0x42);
    lVar9 = (longdouble)_DAT_000040d6 - (longdouble)*(undefined1 (*) [12])(iVar5 + 0x4e);
  }
  else {
    lVar9 = (longdouble)(undefined1  [12])0x0;
    bVar3 = (byte)DAT_0000408c & 0x7f;
    if ((DAT_0000408c & 0x7f) == 0) {
      in_FP1 = (longdouble)*(undefined1 (*) [12])(iVar5 + 0x2a) - (longdouble)_DAT_000040fa;
      lVar8 = (longdouble)*(undefined1 (*) [12])(iVar5 + 0x36) - (longdouble)_DAT_00004106;
      unaff_FP2 = (longdouble)0.0;
      if ((DAT_0000408c & 0x80) == 0) {
        in_FP1 = -in_FP1;
      }
      else {
        lVar8 = -lVar8;
      }
    }
    if (bVar3 == 0x20) {
      unaff_FP2 = (longdouble)*(undefined1 (*) [12])(iVar5 + 0x36) - (longdouble)_DAT_00004106;
      in_FP1 = (longdouble)*(undefined1 (*) [12])(iVar5 + 0x42) - (longdouble)_DAT_00004112;
      lVar8 = (longdouble)0.0;
      if ((DAT_0000408c & 0x80) == 0) {
        unaff_FP2 = -unaff_FP2;
      }
      else {
        in_FP1 = -in_FP1;
      }
    }
    if (bVar3 == 0x40) {
      unaff_FP2 = (longdouble)*(undefined1 (*) [12])(iVar5 + 0x2a) - (longdouble)_DAT_000040fa;
      lVar8 = (longdouble)*(undefined1 (*) [12])(iVar5 + 0x42) - (longdouble)_DAT_00004112;
      in_FP1 = (longdouble)0.0;
      if ((DAT_0000408c & 0x80) == 0) {
        unaff_FP2 = -unaff_FP2;
      }
      else {
        lVar8 = -lVar8;
      }
    }
  }
  bVar7 = lVar8 == FLOAT_UNKNOWN;
  bVar1 = in_FP1 == FLOAT_UNKNOWN;
  lVar10 = SQRT(lVar8 * lVar8 + in_FP1 * in_FP1 + unaff_FP2 * unaff_FP2 + lVar9 * lVar9);
  _DAT_00001344 = (undefined1  [12])lVar10;
  _DAT_000041fc = (undefined1  [12])(unaff_FP2 / lVar10);
  if (DAT_0000408b == '\x01') {
    lVar8 = (longdouble)FUN_0004750a();
    puVar4 = extraout_A0_01;
    iVar5 = extraout_A1_01;
  }
  *(undefined1 (*) [12])(puVar4 + 0xc2) =
       (undefined1  [12])(longdouble)*(undefined1 (*) [12])(puVar4 + 200);
  *(undefined1 (*) [12])(puVar4 + 0xce) =
       (undefined1  [12])(longdouble)*(undefined1 (*) [12])(puVar4 + 0xf);
  *(undefined1 (*) [12])(puVar4 + 0xa8) = (undefined1  [12])lVar10;
  *(undefined1 (*) [12])(puVar4 + 0xae) = (undefined1  [12])lVar10;
  if (((lVar10 - (longdouble)(undefined1  [12])0x0 != FLOAT_UNKNOWN) &&
      (lVar10 - (longdouble)(undefined1  [12])0x1ec0000000000000 != FLOAT_UNKNOWN &&
       lVar10 - (longdouble)(undefined1  [12])0x1ec0000000000000 < FLOAT_UNKNOWN)) &&
     (lVar10 = lVar10 * (longdouble)(undefined1  [12])0x0,
     lVar2 = (longdouble)*(undefined1 (*) [12])(puVar4 + 0xf) - lVar10,
     lVar2 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar2)) {
    *(undefined1 (*) [12])(puVar4 + 0xce) = (undefined1  [12])lVar10;
    *(undefined1 (*) [12])(puVar4 + 0xf) = (undefined1  [12])lVar10;
  }
  if (lVar9 == FLOAT_UNKNOWN && (unaff_FP2 != FLOAT_UNKNOWN && (bVar1 && bVar7))) {
    *(byte *)(puVar4 + 1) = *(byte *)(puVar4 + 1) | 1;
  }
  else {
    *(byte *)(puVar4 + 1) = *(byte *)(puVar4 + 1) & 0xfe;
  }
  *(undefined1 (*) [12])(puVar4 + 0xb4) = (undefined1  [12])-1.0;
  if ((((*puVar4 & 0xf939) == 0xc000) &&
      ((*(char *)((int)puVar4 + 3) == '\0' || (*(char *)((int)puVar4 + 3) == '\x01')))) &&
     ((*puVar6 & 0xc000) == 0xc000)) {
    bVar7 = *(char *)(iVar5 + 3) == '\0';
    if (bVar7) {
      lVar9 = (longdouble)*(undefined1 (*) [12])(iVar5 + 0x2a) -
              (longdouble)*(undefined1 (*) [12])(puVar6 + 0x15);
      unaff_FP4 = (longdouble)*(undefined1 (*) [12])(iVar5 + 0x36) -
                  (longdouble)*(undefined1 (*) [12])(puVar6 + 0x1b);
      unaff_FP5 = (longdouble)*(undefined1 (*) [12])(iVar5 + 0x42) -
                  (longdouble)*(undefined1 (*) [12])(puVar6 + 0x21);
    }
    if (*(char *)(iVar5 + 3) == '\x01') {
      bVar3 = (byte)*(ushort *)(iVar5 + 4) & 0x7f;
      if ((*(ushort *)(iVar5 + 4) & 0x7f) == 0) {
        unaff_FP4 = (longdouble)*(undefined1 (*) [12])(iVar5 + 0x2a) -
                    (longdouble)*(undefined1 (*) [12])(iVar5 + 0x72);
        lVar9 = (longdouble)*(undefined1 (*) [12])(iVar5 + 0x36) -
                (longdouble)*(undefined1 (*) [12])(iVar5 + 0x7e);
        unaff_FP5 = (longdouble)0.0;
        if ((*(byte *)(iVar5 + 5) & 0x80) == 0) {
          unaff_FP4 = -unaff_FP4;
        }
        else {
          lVar9 = -lVar9;
        }
      }
      if (bVar3 == 0x20) {
        unaff_FP5 = (longdouble)*(undefined1 (*) [12])(iVar5 + 0x36) -
                    (longdouble)*(undefined1 (*) [12])(iVar5 + 0x7e);
        unaff_FP4 = (longdouble)*(undefined1 (*) [12])(iVar5 + 0x42) -
                    (longdouble)*(undefined1 (*) [12])(iVar5 + 0x8a);
        lVar9 = (longdouble)0.0;
        if ((*(byte *)(iVar5 + 5) & 0x80) == 0) {
          unaff_FP5 = -unaff_FP5;
        }
        else {
          unaff_FP4 = -unaff_FP4;
        }
      }
      if (bVar3 == 0x40) {
        unaff_FP5 = (longdouble)*(undefined1 (*) [12])(iVar5 + 0x2a) -
                    (longdouble)*(undefined1 (*) [12])(iVar5 + 0x72);
        lVar9 = (longdouble)*(undefined1 (*) [12])(iVar5 + 0x42) -
                (longdouble)*(undefined1 (*) [12])(iVar5 + 0x8a);
        unaff_FP4 = (longdouble)0.0;
        if ((*(byte *)(iVar5 + 5) & 0x80) == 0) {
          unaff_FP5 = -unaff_FP5;
        }
        else {
          lVar9 = -lVar9;
        }
      }
      bVar7 = true;
    }
    if (bVar7) {
      lVar10 = SQRT(lVar9 * lVar9 + unaff_FP4 * unaff_FP4 + unaff_FP5 * unaff_FP5) *
               (longdouble)_DAT_00001344;
      if (lVar10 - (longdouble)(undefined1  [12])0x0 == FLOAT_UNKNOWN) {
        lVar8 = (longdouble)(undefined1  [12])0x0;
      }
      else {
        lVar8 = (lVar8 * lVar9 + in_FP1 * unaff_FP4 + unaff_FP2 * unaff_FP5) / lVar10;
      }
      *(undefined1 (*) [12])(puVar4 + 0xb4) = (undefined1  [12])lVar8;
      if ((*(char *)((int)puVar4 + 3) == '\x01') || (*(char *)(iVar5 + 3) == '\x01')) {
        if (lVar8 - (longdouble)(undefined1  [12])0x2b4c24c6b3d90af4 == FLOAT_UNKNOWN ||
            FLOAT_UNKNOWN <= lVar8 - (longdouble)(undefined1  [12])0x2b4c24c6b3d90af4) {
          if (lVar8 - (longdouble)(undefined1  [12])0x69de1d821bf985be == FLOAT_UNKNOWN ||
              FLOAT_UNKNOWN <= lVar8 - (longdouble)(undefined1  [12])0x69de1d821bf985be) {
            if (lVar8 - (longdouble)(undefined1  [12])0x7a67e190a9300f93 == FLOAT_UNKNOWN ||
                FLOAT_UNKNOWN <= lVar8 - (longdouble)(undefined1  [12])0x7a67e190a9300f93) {
              if (lVar8 - (longdouble)(undefined1  [12])0x7f605b8a6a51ad73 == FLOAT_UNKNOWN ||
                  FLOAT_UNKNOWN <= lVar8 - (longdouble)(undefined1  [12])0x7f605b8a6a51ad73) {
                if (*(char *)((int)puVar4 + 3) == '\x01') {
                  FUN_00047d5a();
                  puVar4 = extraout_A0_02;
                }
                else {
                  lVar10 = (longdouble)*(undefined1 (*) [12])(puVar4 + 0xce);
                }
              }
              else {
                lVar10 = (longdouble)(undefined1  [12])0x53aaaaa8eb463499;
              }
            }
            else {
              lVar10 = (longdouble)(undefined1  [12])0x53aaaaaa7ded6ba9;
            }
          }
          else {
            lVar10 = (longdouble)(undefined1  [12])0x53aaaaa9f7b5aea3;
          }
        }
        else {
          lVar10 = (longdouble)(undefined1  [12])0x53aaaaa9f7b5aea3;
        }
        if (lVar10 - (longdouble)*(undefined1 (*) [12])(puVar4 + 0xce) != FLOAT_UNKNOWN &&
            lVar10 - (longdouble)*(undefined1 (*) [12])(puVar4 + 0xce) < FLOAT_UNKNOWN) {
          *(undefined1 (*) [12])(puVar4 + 0xce) = (undefined1  [12])lVar10;
        }
      }
      DAT_000007d8 = 0;
    }
  }
  return;
}



// Function: FUN_0004750a @ 0004750a

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004750a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_000477fc @ 000477fc

void FUN_000477fc(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int in_A0;
  int extraout_A0;
  int extraout_A0_00;
  int extraout_A0_01;
  int extraout_A0_02;
  int iVar4;
  int extraout_A0_03;
  undefined4 extraout_A1;
  int extraout_A1_00;
  int extraout_A1_01;
  int extraout_A1_02;
  int extraout_A1_03;
  int iVar5;
  longdouble lVar6;
  longdouble extraout_FP0;
  longdouble lVar7;
  longdouble lVar8;
  longdouble lVar9;
  longdouble lVar10;
  
  if ((*(byte *)(in_A0 + 2) & 0x20) != 0) {
    if ((*(byte *)(in_A0 + 1) & 2) != 0) {
      FUN_00047ccc();
    }
    DAT_00001376 = DAT_00001376 + 1;
    FUN_00047b0a();
    lVar7 = (longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x150);
    iVar3 = 1;
    *(undefined4 *)(extraout_A0 + 0x180) = 1;
    lVar8 = (longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x184);
    if (((DAT_000032e9 & 0x20) == 0) && ((*(byte *)(extraout_A0 + 0x1d3) & 1) == 0)) {
      FUN_00047b8c(extraout_A0,extraout_A1);
    }
    FUN_0000de10();
    lVar10 = (longdouble)*(undefined1 (*) [12])(extraout_A1_00 + 0x19c);
    lVar9 = lVar10 - (longdouble)*(undefined1 (*) [12])(extraout_A0_00 + 0x19c);
    if (((lVar9 < FLOAT_UNKNOWN && lVar9 != FLOAT_UNKNOWN) ||
        (lVar10 - (longdouble)*(undefined1 (*) [12])(extraout_A1_00 + 0x1e) != FLOAT_UNKNOWN)) &&
       (((longdouble)*(undefined1 (*) [12])(extraout_A0_00 + 0x184) -
         (longdouble)(undefined1  [12])0x0 == FLOAT_UNKNOWN ||
        (lVar10 = lVar10 - (longdouble)*(undefined1 (*) [12])(extraout_A0_00 + 0x184),
        lVar10 != FLOAT_UNKNOWN && lVar10 < FLOAT_UNKNOWN)))) {
      lVar8 = (longdouble)*(undefined1 (*) [12])(extraout_A1_00 + 0x19c);
      lVar7 = (longdouble)0.0;
      *(byte *)(extraout_A0_00 + 2) = *(byte *)(extraout_A0_00 + 2) | 4;
      *(undefined1 (*) [12])(extraout_A0_00 + 0x184) = (undefined1  [12])lVar8;
    }
    FUN_00047a34();
    FUN_00047ad2();
    cVar2 = FUN_00047ae0();
    if (cVar2 == '\0') {
      FUN_0000de10();
      lVar8 = (longdouble)*(undefined1 (*) [12])(extraout_A1_01 + 0x184);
      lVar7 = (longdouble)*(undefined1 (*) [12])(extraout_A1_01 + 0x150);
      FUN_00047a34();
      FUN_00047ad2();
      cVar2 = FUN_00047ae0();
    }
    lVar10 = (longdouble)0.0;
    bVar1 = false;
    while ((cVar2 == '\x01' && (!bVar1))) {
      lVar6 = (longdouble)FUN_00047b70();
      lVar9 = (longdouble)*(undefined1 (*) [12])(extraout_A1_02 + 0x19c);
      if ((*(byte *)(extraout_A0_01 + 2) & 2) != 0) {
        lVar10 = (longdouble)*(undefined1 (*) [12])(extraout_A0_01 + 400);
      }
      if ((lVar10 - (longdouble)(undefined1  [12])0x0 != FLOAT_UNKNOWN &&
           FLOAT_UNKNOWN <= lVar10 - (longdouble)(undefined1  [12])0x0) &&
         (lVar10 - lVar9 != FLOAT_UNKNOWN && lVar10 - lVar9 < FLOAT_UNKNOWN)) {
        lVar9 = lVar10;
      }
      iVar4 = extraout_A0_01;
      iVar5 = extraout_A1_02;
      if (((lVar6 - lVar8 == FLOAT_UNKNOWN || FLOAT_UNKNOWN <= lVar6 - lVar8) &&
          (cVar2 = FUN_00047af4(), iVar4 = extraout_A0_02, iVar5 = extraout_A1_03, lVar6 = lVar8,
          cVar2 == '\0')) &&
         (lVar6 = extraout_FP0,
         extraout_FP0 - lVar9 == FLOAT_UNKNOWN || FLOAT_UNKNOWN <= extraout_FP0 - lVar9)) {
        bVar1 = true;
        lVar6 = lVar9;
      }
      lVar9 = (longdouble)*(undefined1 (*) [12])(iVar5 + 400) -
              (longdouble)*(undefined1 (*) [12])(iVar4 + 0x1e);
      lVar8 = lVar6;
      if (FLOAT_UNKNOWN <= lVar9 || lVar9 == FLOAT_UNKNOWN) {
        *(byte *)(iVar4 + 2) = *(byte *)(iVar4 + 2) | 4;
        lVar8 = (longdouble)*(undefined1 (*) [12])(iVar4 + 0x1e);
      }
      if ((bVar1) &&
         (lVar9 = lVar8 - (longdouble)*(undefined1 (*) [12])(iVar4 + 0x184),
         lVar9 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar9)) {
        bVar1 = false;
      }
      *(undefined1 (*) [12])(iVar4 + 0x184) = (undefined1  [12])lVar8;
      cVar2 = FUN_00047af4();
      if (cVar2 == '\0') {
        lVar7 = (longdouble)0.0;
        iVar3 = 0;
      }
      iVar3 = iVar3 + 1;
      *(int *)(extraout_A0_03 + 0x180) = iVar3;
      lVar7 = lVar7 + (longdouble)*(undefined1 (*) [12])(extraout_A0_03 + 0x150);
      *(undefined1 (*) [12])(extraout_A0_03 + 0x15c) = (undefined1  [12])lVar7;
      FUN_0000de10();
      FUN_00047ad2();
      cVar2 = FUN_00047ae0();
    }
    if (DAT_00001382 < iVar3) {
      DAT_00001382 = iVar3;
    }
  }
  return;
}



// Function: FUN_00047a34 @ 00047a34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00047a34(void)

{
  bool bVar1;
  int in_A0;
  int in_A1;
  longdouble lVar2;
  
  bVar1 = false;
  lVar2 = (longdouble)*(undefined1 (*) [12])(in_A0 + 0x1e) -
          (longdouble)(undefined1  [12])0x55c0000000000000;
  if (FLOAT_UNKNOWN <= lVar2 && lVar2 != FLOAT_UNKNOWN) {
    if ((ushort)((uint)_DAT_0000af58 >> 0x1c) == 3) {
      lVar2 = (longdouble)*(undefined1 (*) [12])(in_A1 + 0x168) -
              (longdouble)(undefined1  [12])0x34fdf3b645a1cac1;
      if (lVar2 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar2) {
        bVar1 = true;
      }
    }
    else {
      if ((*(byte *)(in_A0 + 2) & 8) == 0) {
        lVar2 = (longdouble)(undefined1  [12])0x5db22d0e56041894;
      }
      else {
        lVar2 = (longdouble)(undefined1  [12])0x7c1bda5119ce0760;
      }
      lVar2 = (longdouble)*(undefined1 (*) [12])(in_A1 + 0x168) - lVar2;
      bVar1 = lVar2 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar2;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



// Function: FUN_00047ad2 @ 00047ad2

void FUN_00047ad2(void)

{
  return;
}



// Function: FUN_00047ae0 @ 00047ae0

void FUN_00047ae0(void)

{
  return;
}



// Function: FUN_00047af4 @ 00047af4

void FUN_00047af4(void)

{
  return;
}



// Function: FUN_00047b0a @ 00047b0a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00047b0a(void)

{
  _DAT_00001386 =
       (undefined1  [12])
       (((longdouble)DAT_00000fb4 / (longdouble)DAT_00000f9c) *
       ((longdouble)DAT_00000fb4 / (longdouble)(undefined1  [12])0x0));
  return;
}



// Function: FUN_00047b70 @ 00047b70

longdouble FUN_00047b70(void)

{
  longdouble in_FP0;
  longdouble in_FP1;
  
  return SQRT(in_FP0 * (longdouble)2.0 * (longdouble)DAT_00000f9c + in_FP1 * in_FP1);
}



// Function: FUN_00047b8c @ 00047b8c

unkbyte10 FUN_00047b8c(void)

{
  longdouble lVar1;
  int iVar2;
  ushort *extraout_A0;
  ushort *extraout_A0_00;
  ushort *puVar3;
  ushort *extraout_A1;
  ushort *extraout_A1_00;
  ushort *puVar4;
  unkbyte10 in_FP0;
  longdouble extraout_FP0;
  
  FUN_0000de10();
  *(byte *)(extraout_A0 + 1) = *(byte *)(extraout_A0 + 1) & 0xf7;
  if ((extraout_A0[1] & 0x2000) != 0) {
    puVar3 = extraout_A0;
    puVar4 = extraout_A1;
    if ((((((*extraout_A0 & 0x8000) != 0) &&
          (iVar2 = FUN_00047c8a(), puVar3 = extraout_A0_00, puVar4 = extraout_A1_00, iVar2 == 0)) &&
         (extraout_FP0 - (longdouble)*(undefined1 (*) [12])(extraout_A0_00 + 0xa8) != FLOAT_UNKNOWN
          && extraout_FP0 - (longdouble)*(undefined1 (*) [12])(extraout_A0_00 + 0xa8) <
             FLOAT_UNKNOWN)) &&
        ((extraout_FP0 - (longdouble)*(undefined1 (*) [12])(extraout_A1_00 + 0xa8) != FLOAT_UNKNOWN
          && extraout_FP0 - (longdouble)*(undefined1 (*) [12])(extraout_A1_00 + 0xa8) <
             FLOAT_UNKNOWN && (*(char *)((int)extraout_A0_00 + 3) == '\0')))) &&
       (*(char *)((int)extraout_A1_00 + 3) == '\0')) {
      if ((*extraout_A1_00 & 0x8020) == 0x8020) {
        *(byte *)(extraout_A0_00 + 1) = *(byte *)(extraout_A0_00 + 1) & 0xf7;
        *(byte *)(extraout_A0_00 + 1) = *(byte *)(extraout_A0_00 + 1) & 0xdf;
      }
      else {
        lVar1 = (longdouble)*(undefined1 (*) [12])(extraout_A1_00 + 0xb4) -
                (longdouble)(undefined1  [12])0x7c1bda5119ce0760;
        if (lVar1 == FLOAT_UNKNOWN || lVar1 < FLOAT_UNKNOWN) {
          *(byte *)(extraout_A0_00 + 1) = *(byte *)(extraout_A0_00 + 1) & 0xdf;
        }
        else {
          lVar1 = (longdouble)*(undefined1 (*) [12])(extraout_A1_00 + 0xb4) -
                  (longdouble)(undefined1  [12])0x7f605b8a6a51ad73;
          if (lVar1 != FLOAT_UNKNOWN && lVar1 < FLOAT_UNKNOWN) {
            *(byte *)(extraout_A0_00 + 1) = *(byte *)(extraout_A0_00 + 1) | 8;
          }
        }
      }
    }
    if (((puVar3[1] & 0x800) == 0) &&
       ((longdouble)*(undefined1 (*) [12])(puVar4 + 0xb4) -
        (longdouble)(undefined1  [12])0x7c1bda5119ce0760 != FLOAT_UNKNOWN &&
        (longdouble)*(undefined1 (*) [12])(puVar4 + 0xb4) -
        (longdouble)(undefined1  [12])0x7c1bda5119ce0760 < FLOAT_UNKNOWN)) {
      *(byte *)(puVar3 + 1) = *(byte *)(puVar3 + 1) & 0xdf;
    }
  }
  return in_FP0;
}



// Function: FUN_00047c8a @ 00047c8a

undefined8 FUN_00047c8a(void)

{
  undefined4 uVar1;
  undefined4 in_D1;
  int in_A0;
  ushort *extraout_A0;
  int in_A1;
  
  if ((*(byte *)(in_A0 + 2) & 1) == 0) {
    if ((*(byte *)(in_A1 + 2) & 1) == 0) {
      uVar1 = FUN_0000de10();
      if (((*extraout_A0 & 0xc000) == 0xc000) && ((extraout_A0[1] & 0x100) != 0)) {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(uVar1,in_D1);
}



// Function: FUN_00047ccc @ 00047ccc

void FUN_00047ccc(void)

{
  short sVar1;
  byte *in_A0;
  byte *extraout_A0;
  longdouble lVar2;
  
  lVar2 = (longdouble)*(undefined1 (*) [12])(in_A0 + 0x150);
  *(undefined1 (*) [12])(in_A0 + 0x1a8) = (undefined1  [12])lVar2;
  if ((*in_A0 & 2) == 0) {
    sVar1 = 1;
    while (sVar1 == 1) {
      sVar1 = FUN_0000de10();
      if ((*extraout_A0 & 2) == 0) {
        if ((extraout_A0[1] & 2) == 0) {
          sVar1 = 0;
        }
        else {
          lVar2 = lVar2 + (longdouble)*(undefined1 (*) [12])(extraout_A0 + 0x150);
          *(undefined1 (*) [12])(extraout_A0 + 0x1a8) = (undefined1  [12])lVar2;
        }
      }
      else {
        sVar1 = 0;
      }
    }
  }
  return;
}



// Function: FUN_00047d28 @ 00047d28

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00047d28(void)

{
  DAT_00000588 = 0;
  _DAT_0000058c = 0;
  _DAT_00000590 = 0;
  _DAT_00000594 = 0;
  _DAT_00000598 = 0;
  _DAT_0000059c = 0;
  _DAT_000005a0 = 0;
  _DAT_000005a4 = 0;
  _DAT_000005a8 = 0;
  _DAT_000005ac = 0;
  _DAT_000005b0 = 0;
  _DAT_000005b4 = 0;
  return;
}



// Function: FUN_00047d5a @ 00047d5a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00047d5a(void)

{
  longdouble lVar1;
  int in_A0;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;
  
  lVar4 = (longdouble)_DAT_0000c5d6;
  if (lVar4 - (longdouble)(undefined1  [12])0xefa350fd7388b8d == FLOAT_UNKNOWN ||
      FLOAT_UNKNOWN <= lVar4 - (longdouble)(undefined1  [12])0xefa350fd7388b8d) {
    lVar2 = (longdouble)1.4;
    if (lVar4 - (longdouble)(undefined1  [12])0xefa350fd7388b8d != FLOAT_UNKNOWN &&
        FLOAT_UNKNOWN <= lVar4 - (longdouble)(undefined1  [12])0xefa350fd7388b8d) {
      if (lVar4 - (longdouble)(undefined1  [12])0xefa34e4e41ac72c == FLOAT_UNKNOWN ||
          FLOAT_UNKNOWN <= lVar4 - (longdouble)(undefined1  [12])0xefa34e4e41ac72c) {
        if (lVar4 - (longdouble)(undefined1  [12])0x56774fc2b5f295b4 == FLOAT_UNKNOWN ||
            FLOAT_UNKNOWN <= lVar4 - (longdouble)(undefined1  [12])0x56774fc2b5f295b4) {
          lVar2 = lVar2 * (longdouble)4.0;
        }
        else {
          lVar2 = lVar2 * (longdouble)3.0;
        }
      }
      else {
        lVar2 = lVar2 * (longdouble)2.0;
      }
    }
    lVar3 = (longdouble)*(undefined1 (*) [12])(in_A0 + 0x150) * (longdouble)0.5;
    lVar4 = (longdouble)1693.33333;
    lVar1 = lVar3 - lVar2 * (longdouble)(undefined1  [12])0xae8000000000000;
    if (lVar1 != FLOAT_UNKNOWN && FLOAT_UNKNOWN <= lVar1) {
      lVar4 = (lVar4 * lVar3) / (lVar2 * (longdouble)(undefined1  [12])0xae8000000000000);
    }
  }
  else {
    lVar4 = (longdouble)(undefined1  [12])0x44aab367a0f9097;
  }
  lVar2 = lVar4 - (longdouble)*(undefined1 (*) [12])(in_A0 + 0x1e);
  if (lVar2 != FLOAT_UNKNOWN && lVar2 < FLOAT_UNKNOWN) {
    *(undefined1 (*) [12])(in_A0 + 0x1e) = (undefined1  [12])lVar4;
  }
  return;
}



