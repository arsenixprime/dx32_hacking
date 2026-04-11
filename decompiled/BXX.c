// Decompiled: BXX.EXE
// Processor: x86
// Language: x86:LE:16:Real Mode
//
// Memory Map:
//   CODE_0               1000:0000 - 1000:128f  [RWX] initialized
//   CODE_1               1129:0000 - 1129:44cf  [RWX] initialized
//   CODE_2               1576:0000 - 1576:47f3  [RWX] initialized
//   CODE_3               19f5:0004 - 19f5:02db  [RWX] initialized
//   CODE_4               1a22:000c - 1a22:6f3f  [RWX] initialized
//   CODE_5               2116:0000 - 2116:80bf  [RWX] initialized
//   CODE_6               2922:0000 - 2922:067c  [RWX] initialized
//   CODE_7               2989:000d - 2989:023e  [RWX] initialized
//   CODE_8               29ac:000f - 29ac:0045  [RWX] initialized
//   CODE_9               29b0:0006 - 29b0:016c  [RWX] initialized
//   CODE_10              29c6:000d - 29c6:0185  [RWX] initialized
//   CODE_11              29de:0006 - 29de:0149  [RWX] initialized
//   CODE_12              29f2:000a - 29f2:016d  [RWX] initialized
//   CODE_13              2a08:000e - 2a08:06d8  [RWX] initialized
//   CODE_14              2a75:0009 - 2a75:014c  [RWX] initialized
//   CODE_15              2a89:000d - 2a89:0057  [RWX] initialized
//   CODE_16              2a8e:0008 - 2a8e:022a  [RWX] initialized
//   CODE_17              2ab0:000b - 2ab0:005a  [RWX] initialized
//   CODE_18              2ab5:000b - 2ab5:01d5  [RWX] initialized
//   CODE_19              2ad2:0006 - 2ad2:008f  [RWX] initialized
//   CODE_20              2adb:0000 - 2adb:0108  [RWX] initialized
//   CODE_21              2aeb:0009 - 2aeb:00ba  [RWX] initialized
//   CODE_22              2af6:000b - 2af6:00ba  [RWX] initialized
//   CODE_23              2b01:000b - 2b01:0123  [RWX] initialized
//   CODE_24              2b13:0004 - 2b13:01c2  [RWX] initialized
//   CODE_25              2b2f:0003 - 2b2f:0051  [RWX] initialized
//   CODE_26              2b34:0002 - 2b34:00ba  [RWX] initialized
//   CODE_27              2b3f:000b - 2b3f:0149  [RWX] initialized
//   CODE_28              2b53:000a - 2b53:0138  [RWX] initialized
//   CODE_29              2b66:0009 - 2b66:008e  [RWX] initialized
//   CODE_30              2b6e:000f - 2b6e:0062  [RWX] initialized
//   CODE_31              2b74:0003 - 2b74:0053  [RWX] initialized
//   CODE_32              2b79:0004 - 2b79:0044  [RWX] initialized
//   CODE_33              2b7d:0005 - 2b7d:0135  [RWX] initialized
//   CODE_34              2b90:0006 - 2b90:0227  [RWX] initialized
//   CODE_35              2bb2:0008 - 2bb2:2e3e  [RWX] initialized
//   CODE_36              2e95:000f - 2e95:0a46  [RWX] initialized
//   CODE_37              2f39:0007 - 2f39:006a  [RWX] initialized
//   CODE_38              2f3f:000b - 2f3f:055a  [RWX] initialized
//   CODE_39              2f94:000b - 2f94:00e5  [RWX] initialized
//   CODE_40              2fa2:0006 - 2fa2:00f3  [RWX] initialized
//   CODE_41              2fb1:0004 - 2fb1:30d6  [RWX] initialized
//   CODE_42              32be:0007 - 32be:0143  [RWX] initialized
//   CODE_43              32d2:0004 - 32d2:00b4  [RWX] initialized
//   CODE_44              32dd:0005 - 32dd:0079  [RWX] initialized
//   CODE_45              32e4:000a - 32e4:008a  [RWX] initialized
//   CODE_46              32ec:000b - 32ec:008e  [RWX] initialized
//   CODE_47              32f4:000f - 32f4:0284  [RWX] initialized
//   CODE_48              331c:0005 - 331c:079d  [RWX] initialized
//   CODE_49              3395:000e - 3395:01b4  [RWX] initialized
//   CODE_50              33b0:0005 - 33b0:008d  [RWX] initialized
//   CODE_51              33b8:000e - 33b8:0228  [RWX] initialized
//   CODE_52              33da:0009 - 33da:0044  [RWX] initialized
//   CODE_53              33de:0005 - 33de:011b  [RWX] initialized
//   CODE_54              33ef:000c - 33ef:0376  [RWX] initialized
//   CODE_55              3426:0007 - 3426:0146  [RWX] initialized
//   CODE_56              343a:0007 - 343a:0034  [RWX] initialized
//   CODE_57              343d:0005 - 343d:0027  [RWX] initialized
//   CODE_58              343f:0008 - 343f:08a6  [RWX] initialized
//   CODE_59              34c9:0007 - 34c9:00df  [RWX] initialized
//   CODE_60              34d7:0000 - 34d7:0300  [RWX] initialized
//   CODE_61              3507:0001 - 3507:004b  [RWX] initialized
//   CODE_62              350b:000c - 350b:0035  [RWX] initialized
//   CODE_63              350e:0006 - 350e:008d  [RWX] initialized
//   CODE_64              3516:000e - 3516:01bb  [RWX] initialized
//   CODE_65              3531:000c - 3531:0924  [RWX] initialized
//   CODE_66              35c3:0005 - 35c3:0099  [RWX] initialized
//   CODE_67              35cc:000a - 35cc:00dc  [RWX] initialized
//   CODE_68              35d9:000d - 35d9:014e  [RWX] initialized
//   CODE_69              35ed:000f - 35ed:0075  [RWX] initialized
//   CODE_70              35f4:0006 - 35f4:0089  [RWX] initialized
//   CODE_71              35fc:000a - 35fc:00b8  [RWX] initialized
//   CODE_72              3607:0009 - 3607:0464  [RWX] initialized
//   CODE_73              364d:0005 - 364d:02af  [RWX] initialized
//   CODE_74              3678:0000 - 3678:038d  [RWX] initialized
//   CODE_75              36b0:000e - 36b0:536a  [RWX] initialized
//   CODE_76              3be6:000b - 3be6:08db  [RWX] initialized
//   CODE_77              3c73:000c - 3c73:0ce4  [RWX] initialized
//   CODE_78              3d41:0005 - 3d41:0645  [RWX] initialized
//   CODE_79              3da5:0006 - 3da5:0067  [RWX] initialized
//   CODE_80              3dab:0008 - 3dab:072e  [RWX] initialized
//   CODE_81              3e1d:000f - 3e1d:1f4c  [RWX] initialized
//   CODE_82              4011:000d - 4011:a12f  [RWX] initialized
//   CODE_83              4a24:0000 - 4a24:26ef  [RWX] initialized
//   CODE_84              4c93:0000 - 4c93:5ddf  [RWX] initialized
//   CODE_85              5271:0000 - 5271:01bf  [RWX] initialized
//   CODE_86              528d:0000 - 528d:09ff  [RWX] initialized
//   CODE_87              532d:0000 - 532d:007f  [RWX] initialized
//   CODE_88              5335:0000 - 5335:0c1f  [RWX] initialized
//   CODE_89              53f7:0000 - 53f7:034f  [RWX] initialized
//   CODE_90              542c:0000 - 542c:052f  [RWX] initialized
//   CODE_91              547f:0000 - 547f:000f  [RWX] initialized
//   CODE_92              5480:0000 - 5480:016f  [RWX] initialized
//   CODE_93              5497:0000 - 5497:54cf  [RWX] initialized
//   CODE_94              59e4:0000 - 59e4:750f  [RWX] initialized
//   CODE_95              6135:0000 - 6135:bbf7  [RWX] initialized
//   DATA                 6135:bbf8 - 6135:fc37  [RW-] uninitialized
//   HEADER               HEADER::00000000 - HEADER::00003bff  [---] initialized

// Function: FUN_1000_0648 @ 1000:0648

/* WARNING: Instruction at (ram,0x00010748) overlaps instruction at (ram,0x00010747)
    */
/* WARNING: Removing unreachable block (ram,0x0001072f) */
/* WARNING: Removing unreachable block (ram,0x0001070c) */
/* WARNING: Removing unreachable block (ram,0x0001077a) */
/* WARNING: Removing unreachable block (ram,0x00010711) */
/* WARNING: Removing unreachable block (ram,0x00010748) */
/* WARNING: Removing unreachable block (ram,0x0001071a) */
/* WARNING: Removing unreachable block (ram,0x000106bd) */
/* WARNING: Removing unreachable block (ram,0x0001069f) */
/* WARNING: Removing unreachable block (ram,0x00010724) */
/* WARNING: Removing unreachable block (ram,0x000106ab) */
/* WARNING: Removing unreachable block (ram,0x0001071c) */
/* WARNING: Removing unreachable block (ram,0x000106b0) */
/* WARNING: Removing unreachable block (ram,0x000106d6) */
/* WARNING: Removing unreachable block (ram,0x0001074d) */
/* WARNING: Removing unreachable block (ram,0x000106d9) */
/* WARNING: Removing unreachable block (ram,0x000106b6) */
/* WARNING: Removing unreachable block (ram,0x000106bb) */
/* WARNING: Removing unreachable block (ram,0x00010731) */
/* WARNING: Removing unreachable block (ram,0x00010720) */
/* WARNING: Removing unreachable block (ram,0x00010723) */
/* WARNING: Removing unreachable block (ram,0x0001073f) */
/* WARNING: Removing unreachable block (ram,0x0001074e) */
/* WARNING: Removing unreachable block (ram,0x00010751) */
/* WARNING: Removing unreachable block (ram,0x000106bc) */
/* WARNING: Removing unreachable block (ram,0x000106be) */
/* WARNING: Removing unreachable block (ram,0x000106c0) */
/* WARNING: Removing unreachable block (ram,0x000106c6) */
/* WARNING: Removing unreachable block (ram,0x000106c8) */
/* WARNING: Removing unreachable block (ram,0x000106ca) */
/* WARNING: Removing unreachable block (ram,0x000106ce) */
/* WARNING: Removing unreachable block (ram,0x000106da) */
/* WARNING: Removing unreachable block (ram,0x000106dc) */
/* WARNING: Removing unreachable block (ram,0x000106e8) */
/* WARNING: Removing unreachable block (ram,0x000106e7) */
/* WARNING: Removing unreachable block (ram,0x0001073c) */
/* WARNING: Removing unreachable block (ram,0x000106f2) */
/* WARNING: Removing unreachable block (ram,0x00010725) */
/* WARNING: Removing unreachable block (ram,0x0001072d) */
/* WARNING: Removing unreachable block (ram,0x00010737) */
/* WARNING: Removing unreachable block (ram,0x00010705) */

undefined2 * __cdecl16near FUN_1000_0648(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  code *pcVar5;
  ulong uVar6;
  undefined2 uVar7;
  undefined2 *puVar8;
  char extraout_AH;
  int iVar9;
  uint uVar10;
  undefined2 *puVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  undefined1 *in_stack_0000000c;
  undefined2 *in_stack_0000000e;
  undefined2 in_stack_00000016;
  undefined2 *in_stack_00000018;
  undefined2 *in_stack_0000001a;
  undefined2 *in_stack_0000001c;
  byte *in_stack_0000001e;
  undefined2 in_stack_00000024;
  undefined2 in_stack_00000026;
  uint in_stack_00000028;
  undefined2 *in_stack_0000002c;
  
  uVar7 = uRam00010024;
  uVar6 = (ulong)uRam00010004 >> 0x10;
  iVar13 = (int)uRam00010004;
  *(int *)0xa = iVar13;
  *(undefined2 *)0xc = (int)uVar6;
  iVar9 = 0x1000;
  uRam00000084 = uRam00010042;
  uRam00000086 = uRam00010044;
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  if (iVar13 == -1) {
    pbVar1 = in_stack_0000001e;
    *pbVar1 = *pbVar1 | (byte)((uint)in_stack_00000024 >> 8);
    if (*pbVar1 == 0) {
      uRam0001001e = in_stack_00000026;
      uRam00010020 = 0x1000;
      uRam0001001c = 0;
      uRam00010014 = in_stack_00000028 >> 0xc;
      uRam00010012 = (in_stack_00000028 << 4 | uRam00010014) ^ uRam00010014;
      uRam0001001a = uRam0001000a >> 0xc;
      uRam00010018 = (uRam0001000a << 4 | uRam0001001a) ^ uRam0001001a;
      uRam00010016 = uRam0001003e;
      uRam0001000a = uRam0001000a + in_stack_00000028;
      puVar8 = (undefined2 *)(*pcRam0001000e)();
      if (puVar8 != (undefined2 *)0x0) {
        return puVar8;
      }
      puVar8 = (undefined2 *)FUN_1000_0648();
      return puVar8;
    }
    while( true ) {
      if (in_stack_00000028 == 0) {
        return in_stack_0000002c;
      }
      uVar12 = in_stack_00000028;
      if (0xffe < in_stack_00000028) {
        uVar12 = 0xfff;
      }
      bVar14 = (int)(uVar12 << 3) < 0;
      uVar12 = uVar12 << 4;
      uVar10 = (*(code *)*(undefined2 *)0x42)();
      if (bVar14) break;
      if (uVar10 != uVar12) {
        puVar8 = (undefined2 *)FUN_1000_0648();
        return puVar8;
      }
      in_stack_0000002c = (undefined2 *)(uVar10 >> 4);
      in_stack_00000028 = in_stack_00000028 - (int)in_stack_0000002c;
      iVar9 = iVar9 + (int)in_stack_0000002c;
    }
    puVar8 = (undefined2 *)FUN_1000_0648();
    return puVar8;
  }
  uVar3 = in(in_stack_00000016);
  *in_stack_0000000c = uVar3;
  in_stack_0000000c[0x73] = in_stack_0000000c[0x73] & (byte)in_stack_0000001a;
  *(byte *)((int)in_stack_0000000e + 0x6f) =
       *(byte *)((int)in_stack_0000000e + 0x6f) & (byte)((uint)in_stack_00000018 >> 8);
  puVar8 = in_stack_0000001a;
  while( true ) {
    puVar11 = in_stack_00000018;
    if (puVar8 <= in_stack_00000018) {
      puVar11 = puVar8;
    }
    pcVar5 = (code *)swi(0x67);
    (*pcVar5)();
    uVar7 = uRam0001000c;
    if (extraout_AH != '\0') break;
    puVar8 = in_stack_0000001a;
    for (iVar13 = (int)puVar11 << 3; iVar13 != 0; iVar13 = iVar13 + -1) {
      puVar4 = puVar8;
      puVar8 = puVar8 + 1;
      puVar2 = in_stack_0000000e;
      in_stack_0000000e = in_stack_0000000e + 1;
      *puVar4 = *puVar2;
    }
    iVar9 = iVar9 + (int)puVar11;
    uRam0001000a = uRam0001000a + (int)puVar11;
    in_stack_00000018 = (undefined2 *)((int)in_stack_0000001c - (int)puVar11);
    if (in_stack_00000018 == (undefined2 *)0x0) {
      return puVar11;
    }
    in_stack_0000000e = (undefined2 *)((uRam0001000a & 0x3ff) << 4);
    puVar8 = (undefined2 *)-((uRam0001000a & 0x3ff) - 0x400);
    in_stack_0000001c = in_stack_00000018;
  }
  puVar8 = (undefined2 *)FUN_1000_0648();
  return puVar8;
}



// Function: FUN_1000_071d @ 1000:071d

void __cdecl16near FUN_1000_071d(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  bool bVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  
  bVar3 = DAT_1000_032b < 0x44;
  if (DAT_1000_032b != 0x44) {
    if (DAT_1000_032b == 0x45) {
      pcVar1 = (code *)swi(0x67);
      (*pcVar1)();
    }
    uRam0001000a = 0;
    return;
  }
  uVar2 = (*(code *)*(undefined2 *)0x42)
                    (0x1000,(uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 |
                            (uint)(in_TF & 1) * 0x100 | 0x40 | (uint)(in_AF & 1) * 0x10 | 4);
  if (bVar3) {
    FUN_1000_0648();
    return;
  }
  uRam0001003e = uVar2;
  return;
}



// Function: FUN_1000_0756 @ 1000:0756

void __cdecl16near FUN_1000_0756(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  code *pcVar4;
  undefined2 uVar5;
  char extraout_AH;
  int iVar6;
  uint uVar7;
  uint in_CX;
  uint uVar8;
  undefined2 *in_DX;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int unaff_DS;
  bool bVar11;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  
  if (DAT_1000_032b == 'E') {
    while( true ) {
      if (in_CX == 0) {
        return;
      }
      puVar9 = (undefined2 *)((uRam0001000a & 0x3ff) << 4);
      uVar7 = -((uRam0001000a & 0x3ff) - 0x400);
      uVar8 = in_CX;
      if (uVar7 <= in_CX) {
        uVar8 = uVar7;
      }
      pcVar4 = (code *)swi(0x67);
      (*pcVar4)();
      uVar5 = uRam0001000c;
      if (extraout_AH != '\0') break;
      puVar10 = in_DX;
      for (iVar6 = uVar8 << 3; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar2 = puVar10;
        puVar10 = puVar10 + 1;
        puVar1 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar2 = *puVar1;
      }
      unaff_DS = unaff_DS + uVar8;
      uRam0001000a = uRam0001000a + uVar8;
      in_CX = in_CX - uVar8;
    }
    FUN_1000_0648();
    return;
  }
  if (DAT_1000_032b == 'X') {
    uRam0001001c = 0;
    uRam00010014 = in_CX >> 0xc;
    uRam00010012 = (in_CX << 4 | uRam00010014) ^ uRam00010014;
    uRam0001001a = uRam0001000a >> 0xc;
    uRam00010018 = (uRam0001000a << 4 | uRam0001001a) ^ uRam0001001a;
    uRam00010016 = uRam0001003e;
    uRam0001000a = uRam0001000a + in_CX;
    puRam0001001e = in_DX;
    iRam00010020 = unaff_DS;
    iVar6 = (*pcRam0001000e)(0x1000);
    if (iVar6 != 0) {
      return;
    }
    FUN_1000_0648();
    return;
  }
  while( true ) {
    if (in_CX == 0) {
      return;
    }
    uVar8 = in_CX;
    if (0xffe < in_CX) {
      uVar8 = 0xfff;
    }
    bVar11 = (int)(uVar8 << 3) < 0;
    uVar8 = uVar8 << 4;
    bVar3 = in_IF & 1;
    in_IF = 0;
    uVar7 = (*(code *)*(undefined2 *)0x42)
                      (0x1000,(uint)(in_NT & 1) * 0x4000 | (uint)(bVar11 != (int)uVar8 < 0) * 0x800
                              | (uint)bVar3 * 0x200 | (uint)(in_TF & 1) * 0x100 |
                              (uint)((int)uVar8 < 0) * 0x80 | (uint)(uVar8 == 0) * 0x40 |
                              (uint)(in_AF & 1) * 0x10 |
                              (uint)((POPCOUNT(uVar8 & 0xff) & 1U) == 0) * 4 | (uint)bVar11);
    if (bVar11) break;
    if (uVar7 != uVar8) {
      FUN_1000_0648();
      return;
    }
    in_CX = in_CX - (uVar7 >> 4);
    unaff_DS = unaff_DS + (uVar7 >> 4);
  }
  FUN_1000_0648();
  return;
}



// Function: entry @ 1000:0881

/* WARNING: This function may have set the stack pointer */

void entry(void)

{
  DAT_6135_fc2e = 0x884;
  FUN_1000_0889();
  FUN_4c93_071d();
  return;
}



// Function: FUN_1000_0889 @ 1000:0889

void __cdecl16near FUN_1000_0889(void)

{
  undefined2 unaff_ES;
  
  FUN_5335_06db();
  uRam00010042 = uRam00000084;
  uRam00010044 = uRam00000086;
  uRam00010024 = unaff_ES;
  FUN_5335_0700();
  FUN_1000_0e45();
  uRam00000084 = 0x336;
  uRam00000086 = 0x5335;
  DAT_1000_0290 = 0x535d;
  return;
}



// Function: FUN_1000_0ab3 @ 1000:0ab3

void __cdecl16near FUN_1000_0ab3(void)

{
  char cVar1;
  code *pcVar2;
  undefined2 unaff_DS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  
  if (DAT_1000_032b == 0x45) {
    pcVar2 = (code *)swi(0x67);
    (*pcVar2)();
    return;
  }
  cVar1 = DAT_1000_032b + 0xa8;
  if (cVar1 != '\0') {
    (*(code *)*(undefined2 *)0x42)
              (0x1000,(uint)(in_NT & 1) * 0x4000 | (uint)SBORROW1(DAT_1000_032b,'X') * 0x800 |
                      (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                      (uint)(cVar1 < '\0') * 0x80 | (uint)(in_AF & 1) * 0x10 |
                      (uint)((POPCOUNT(cVar1) & 1U) == 0) * 4 | (uint)(DAT_1000_032b < 0x58));
    return;
  }
  (*(code *)*(undefined2 *)0xe)(0x1000);
  return;
}



// Function: FUN_1000_0ae9 @ 1000:0ae9

void __cdecl16near FUN_1000_0ae9(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  
  if (DAT_1000_032b == 'D') {
    (*(code *)*(undefined2 *)0x42)
              (0x1000,(uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 |
                      (uint)(in_TF & 1) * 0x100 | 0x40 | (uint)(in_AF & 1) * 0x10 | 4);
    return;
  }
  if (DAT_1000_032b != 'E') {
    return;
  }
  pcVar1 = (code *)swi(0x67);
  (*pcVar1)();
  return;
}



// Function: FUN_1000_0e43 @ 1000:0e43

void __cdecl16far FUN_1000_0e43(void)

{
  return;
}



// Function: FUN_1000_0e45 @ 1000:0e45

void FUN_1000_0e45(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  puVar5 = (undefined2 *)0xe9a;
  puVar4 = (undefined2 *)0x0;
  for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



// Function: FUN_1000_0e5c @ 1000:0e5c

void __cdecl16near FUN_1000_0e5c(void)

{
  return;
}



// Function: FUN_1000_0e60 @ 1000:0e60

undefined4 __cdecl16near FUN_1000_0e60(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 in_AX;
  int iVar4;
  undefined2 in_DX;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_CS;
  
  puVar5 = (undefined2 *)0x0;
  puVar6 = (undefined2 *)0xe9a;
  iVar4 = 0x100;
  do {
    uVar3 = puVar6[1];
    LOCK();
    uVar1 = *puVar5;
    *puVar5 = *puVar6;
    UNLOCK();
    LOCK();
    uVar2 = puVar5[1];
    puVar5[1] = uVar3;
    UNLOCK();
    *puVar6 = uVar1;
    puVar6[1] = uVar2;
    puVar6 = puVar6 + 2;
    puVar5 = puVar5 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return CONCAT22(in_DX,in_AX);
}



// Function: caseD_0 @ 1000:0ec6

void switchD_1000:9d41::caseD_0(void)

{
  char in_AL;
  int in_BX;
  int unaff_SI;
  undefined2 unaff_DS;
  
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1000_0ee6 @ 1000:0ee6

void FUN_1000_0ee6(void)

{
  char in_AL;
  int in_BX;
  int unaff_SI;
  undefined2 unaff_DS;
  
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1000_0f11 @ 1000:0f11

void FUN_1000_0f11(void)

{
  char in_AL;
  undefined2 in_DX;
  int in_BX;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_DS;
  
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(unaff_DI + -0x75) = *(char *)(unaff_DI + -0x75) + (char)in_DX;
  in(in_DX);
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1129_000a @ 1129:000a

void FUN_1129_000a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1129_4428 @ 1129:4428

void FUN_1129_4428(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1576_0000 @ 1576:0000

void FUN_1576_0000(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1576_0252 @ 1576:0252

void FUN_1576_0252(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1576_03b0 @ 1576:03b0

void FUN_1576_03b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1576_040a @ 1576:040a

void FUN_1576_040a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1576_07f4 @ 1576:07f4

void FUN_1576_07f4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1576_0836 @ 1576:0836

void FUN_1576_0836(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1576_0bb4 @ 1576:0bb4

void FUN_1576_0bb4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1576_0e2e @ 1576:0e2e

void FUN_1576_0e2e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1576_0fc4 @ 1576:0fc4

void FUN_1576_0fc4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1576_109a @ 1576:109a

void FUN_1576_109a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1576_1178 @ 1576:1178

void FUN_1576_1178(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1576_27a6 @ 1576:27a6

void FUN_1576_27a6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1576_2ae0 @ 1576:2ae0

void FUN_1576_2ae0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1576_2cae @ 1576:2cae

void FUN_1576_2cae(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1576_3312 @ 1576:3312

void FUN_1576_3312(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_1576_42b6 @ 1576:42b6

void FUN_1576_42b6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: caseD_0 @ 19f5:01b4

void __cdecl16far switchD_1000:c554::caseD_0(void)

{
  char *pcVar1;
  undefined2 uVar2;
  int iVar3;
  byte in_CL;
  int in_BX;
  int unaff_BP;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 in_GS;
  
  pcVar1 = (char *)(in_BX + unaff_DI + 8);
  *pcVar1 = *pcVar1 + (char)((uint)in_BX >> 8);
  if ((*(uint *)(unaff_BP + -4) >> (in_CL & 0x1f) & 1) == 0) {
    FUN_2116_2e76(unaff_BP + -0x5c);
  }
  else {
    FUN_2116_2e76(unaff_BP + -0x5c);
  }
  *(char *)(unaff_BP + -0xc) = (char)*(undefined2 *)(unaff_BP + -4) + 'A';
  FUN_2116_2e76(unaff_BP + -0x5c);
  uVar2 = FUN_3395_00ab(0x2116,8,0,0xd,0x4f,0,0,6,0,0,3,0);
  *(undefined2 *)(unaff_BP + -6) = uVar2;
  FUN_2b01_000b(0x3395,*(undefined2 *)(unaff_BP + -6),1,5,unaff_BP + -0x5c);
  FUN_2b01_000b(0x2b01,*(undefined2 *)(unaff_BP + -6),2,5,0x1b6c);
  uVar2 = 0x2b01;
  do {
    iVar3 = FUN_2922_065e(uVar2);
    uVar2 = 0x2922;
  } while (iVar3 == 0);
  uVar2 = FUN_1576_0000(0x2922);
  *(undefined2 *)(unaff_BP + -8) = uVar2;
  FUN_2b53_000a(0x1576,*(undefined2 *)(unaff_BP + -6));
  if ((*(int *)(unaff_BP + -8) == 0x52) || (*(int *)(unaff_BP + -8) == 0x72)) {
    FUN_2116_4cd3(0x2b53,1);
  }
  else {
    FUN_2116_4cd3(0x2b53,3);
  }
  return;
}



// Function: FUN_1a22_01b6 @ 1a22:01b6

void __cdecl16far FUN_1a22_01b6(void)

{
  FUN_1a22_318e();
  FUN_1a22_335c();
  FUN_1a22_31b5();
  return;
}



// Function: FUN_1a22_0205 @ 1a22:0205

void __cdecl16far FUN_1a22_0205(undefined2 param_1)

{
  undefined1 uVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0xb87c = param_1;
  *(undefined2 *)0xb93e = param_1;
  uVar1 = 0;
  if (*(char *)0x8e9a == '\0') {
    uVar1 = 0xfd;
  }
  *(undefined1 *)0xb99e = uVar1;
  return;
}



// Function: FUN_1a22_0222 @ 1a22:0222

undefined2 __cdecl16far FUN_1a22_0222(void)

{
  undefined1 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = 0;
  if (*(char *)0x8e9a == '\0') {
    uVar1 = 0xfd;
  }
  *(undefined1 *)0xb99e = uVar1;
  return *(undefined2 *)0xb87c;
}



// Function: FUN_1a22_0321 @ 1a22:0321

int __cdecl16far FUN_1a22_0321(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  byte bVar3;
  
  FUN_1a22_188e();
  iVar2 = (int)((ulong)param_1 >> 0x10);
  bVar3 = 0;
  if (iVar2 == 0 && (undefined2 *)param_1 == (undefined2 *)0x0) {
    bVar3 = 0xfc;
    iVar1 = 0;
  }
  else {
    (*(code *)*(undefined2 *)0x8ec0)();
    iVar1 = bVar3 - 1;
    if ((iVar1 != 0) && (*(char *)0x8e9a != '\0')) {
      *(undefined2 *)0xb876 = *param_1;
      *(undefined2 *)0xb878 = ((undefined2 *)param_1)[1];
    }
    bVar3 = ~(byte)iVar1;
  }
  *(byte *)0xb99e = bVar3;
  return iVar1;
}



// Function: FUN_1a22_0486 @ 1a22:0486

void __cdecl16far FUN_1a22_0486(int *param_1,int *param_2,int *param_3,int *param_4)

{
  undefined2 unaff_DS;
  
  *(undefined1 *)0xb99e = 0;
  *param_1 = *(int *)0xb89d + 1;
  *param_2 = *(int *)0xb89f + 1;
  *param_3 = *(int *)0xb8a1 + 1;
  *param_4 = *(int *)0xb8a3 + 1;
  return;
}



// Function: FUN_1a22_04b2 @ 1a22:04b2

void __cdecl16far FUN_1a22_04b2(int param_1)

{
  undefined2 unaff_DS;
  
  FUN_1a22_318e();
  if (param_1 == 0) {
    *(undefined1 *)0xb99e = 1;
  }
  else {
    FUN_1a22_3c86();
    FUN_1a22_327f();
  }
  FUN_1a22_31b5();
  return;
}



// Function: FUN_1a22_04fc @ 1a22:04fc

void __cdecl16near FUN_1a22_04fc(void)

{
  undefined2 in_CX;
  undefined2 uVar1;
  byte extraout_DL;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int in_BX;
  int unaff_BP;
  undefined2 unaff_DS;
  undefined1 in_CF;
  int iVar2;
  
  FUN_1a22_0552();
  if (!(bool)in_CF) {
    FUN_1a22_05c4();
    LOCK();
    uVar1 = *(undefined2 *)0xb932;
    *(undefined2 *)0xb932 = in_CX;
    UNLOCK();
    LOCK();
    *(undefined2 *)0xb934 = extraout_DX;
    UNLOCK();
    FUN_1a22_05c4();
    FUN_1a22_0607();
    if ((bool)in_CF) {
      LOCK();
      *(undefined2 *)0xb934 = extraout_DX_00;
      UNLOCK();
    }
    in_BX = in_BX + 1;
    iVar2 = in_BX;
    FUN_1a22_05fc(in_BX);
    if ((bool)in_CF) {
      LOCK();
      *(undefined2 *)0xb932 = uVar1;
      UNLOCK();
    }
    *(byte *)0xb94f = extraout_DL & 7;
    (*(code *)*(undefined2 *)0x8ed1)(in_BX + 1);
    do {
      (*(code *)*(undefined2 *)0x8ef5)(iVar2);
      iVar2 = -0x58a3;
      (*(code *)*(undefined2 *)0x8edb)();
      *(char *)0xb94f = *(char *)0xb94f + '\x01';
      *(byte *)0xb94f = *(byte *)0xb94f & 7;
      unaff_BP = unaff_BP + -1;
    } while (unaff_BP != 0);
  }
  *(undefined2 *)0xb93e = 0xffff;
  return;
}



// Function: FUN_1a22_0552 @ 1a22:0552

void __cdecl16near FUN_1a22_0552(void)

{
  int iVar1;
  int iVar2;
  int in_CX;
  int in_DX;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0xb932;
  iVar2 = iVar1;
  if (iVar1 < in_CX) {
    iVar2 = in_CX;
    in_CX = iVar1;
  }
  *(int *)0xb834 = iVar2;
  *(int *)0xb836 = in_CX;
  iVar1 = *(int *)0xb934;
  iVar2 = iVar1;
  if (iVar1 < in_DX) {
    iVar2 = in_DX;
    in_DX = iVar1;
  }
  *(int *)0xb838 = iVar2;
  *(int *)0xb83a = in_DX;
  FUN_1a22_057a();
  return;
}



// Function: FUN_1a22_057a @ 1a22:057a

void __cdecl16near FUN_1a22_057a(void)

{
  undefined2 unaff_DS;
  
  if ((((*(int *)0xb840 <= *(int *)0xb834) && (*(int *)0xb836 <= *(int *)0xb842)) &&
      (*(int *)0xb844 <= *(int *)0xb838)) && (*(int *)0xb83a <= *(int *)0xb846)) {
    return;
  }
  return;
}



// Function: FUN_1a22_05a2 @ 1a22:05a2

uint __cdecl16near FUN_1a22_05a2(void)

{
  uint in_AX;
  uint uVar1;
  int in_CX;
  int in_DX;
  undefined2 unaff_DS;
  
  uVar1 = in_AX & 0xff00;
  if (in_CX < *(int *)0xb840) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)0xb842 < in_CX) {
    uVar1 = uVar1 | 2;
  }
  if (in_DX < *(int *)0xb844) {
    uVar1 = uVar1 | 4;
  }
  if (*(int *)0xb846 < in_DX) {
    uVar1 = uVar1 | 8;
  }
  return uVar1;
}



// Function: FUN_1a22_05c4 @ 1a22:05c4

void __cdecl16near FUN_1a22_05c4(void)

{
  char cVar1;
  undefined2 unaff_DS;
  
  cVar1 = FUN_1a22_05a2();
  if (cVar1 != '\0') {
    *(undefined1 *)0xb99e = 2;
  }
  return;
}



// Function: FUN_1a22_05fc @ 1a22:05fc

void __cdecl16near FUN_1a22_05fc(void)

{
  return;
}



// Function: FUN_1a22_0607 @ 1a22:0607

void __cdecl16near FUN_1a22_0607(void)

{
  return;
}



// Function: FUN_1a22_0610 @ 1a22:0610

undefined2 __cdecl16near FUN_1a22_0610(void)

{
  int iVar1;
  undefined2 in_AX;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0xb840;
  iVar2 = *(int *)0xb842 - iVar1;
  *(int *)0xb84c = iVar2;
  *(int *)0xb92a = iVar1 + (iVar2 + 1U >> 1);
  iVar1 = *(int *)0xb844;
  iVar2 = *(int *)0xb846 - iVar1;
  *(int *)0xb84e = iVar2;
  *(int *)0xb92c = iVar1 + (iVar2 + 1U >> 1);
  return in_AX;
}



// Function: FUN_1a22_0687 @ 1a22:0687

void __cdecl16near FUN_1a22_0687(void)

{
  undefined2 unaff_DS;
  
  FUN_1a22_38c0();
  FUN_1a22_0610();
  (*(code *)*(undefined2 *)0x8ed1)();
  FUN_2116_0011();
  return;
}



// Function: FUN_1a22_06c4 @ 1a22:06c4

/* WARNING: Instruction at (ram,0x0001a8f9) overlaps instruction at (ram,0x0001a8f8)
    */

void __cdecl16far FUN_1a22_06c4(uint param_1)

{
  undefined2 unaff_DS;
  undefined1 in_ZF;
  
  FUN_1a22_318e();
  if ((bool)in_ZF) {
    *(undefined1 *)0xb99e = 0xfd;
  }
  else {
    if (param_1 < 5) goto code_r0x0001a8f4;
    *(undefined1 *)0xb99e = 0xfc;
  }
  param_1 = 0xff;
code_r0x0001a8f4:
  LOCK();
  *(undefined1 *)0xb9a8 = (char)param_1;
  UNLOCK();
  FUN_1a22_31b5();
  return;
}



// Function: FUN_1a22_0707 @ 1a22:0707

undefined2 __cdecl16far FUN_1a22_0707(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined2 unaff_DS;
  
  uVar1 = 0;
  if (*(char *)0x8e9a == '\0') {
    uVar2 = 0xfd;
  }
  else {
    uVar2 = 0;
    LOCK();
    uVar1 = *(undefined2 *)0xb872;
    *(undefined2 *)0xb872 = param_1;
    UNLOCK();
    LOCK();
    *(undefined2 *)0xb874 = param_2;
    UNLOCK();
  }
  *(undefined1 *)0xb99e = uVar2;
  return uVar1;
}



// Function: FUN_1a22_072c @ 1a22:072c

undefined2 __cdecl16far FUN_1a22_072c(void)

{
  undefined1 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = 0;
  if (*(char *)0x8e9a == '\0') {
    uVar1 = 0xfd;
  }
  *(undefined1 *)0xb99e = uVar1;
  return *(undefined2 *)0xb872;
}



// Function: FUN_1a22_0743 @ 1a22:0743

void __cdecl16far FUN_1a22_0743(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  bVar2 = true;
  uVar1 = FUN_1a22_318e();
  if (bVar2) {
    uVar1 = 0xfd;
  }
  else {
    *(undefined1 *)0xb897 = uVar1;
    (*(code *)*(undefined2 *)0x8edd)();
    *(undefined2 *)0xb93e = *(undefined2 *)0xb87c;
    *(int *)0xb932 = *(int *)0xb848 + param_1;
    *(int *)0xb934 = *(int *)0xb84a + param_2;
    FUN_1000_0f11();
    *(int *)0xb872 = param_1;
    *(int *)0xb874 = param_2;
    if (*(char *)0xb897 != '\0') goto LAB_1a22_0797;
    uVar1 = 1;
  }
  *(undefined1 *)0xb99e = uVar1;
LAB_1a22_0797:
  FUN_1a22_31b5();
  return;
}



// Function: FUN_1a22_07aa @ 1a22:07aa

void __cdecl16far FUN_1a22_07aa(undefined2 param_1,uint param_2)

{
  undefined1 uVar1;
  undefined2 unaff_DS;
  bool bVar2;
  undefined1 in_ZF;
  
  FUN_1a22_318e();
  if ((bool)in_ZF) {
    uVar1 = 0xfd;
  }
  else {
    bVar2 = CARRY2(param_2,*(uint *)0xb84a);
    FUN_1a22_16f0();
    if (bVar2) {
      (*(code *)*(undefined2 *)0x8ed1)();
      (*(code *)*(undefined2 *)0x8edf)();
      (*(code *)*(undefined2 *)0x8edd)();
      (*(code *)*(undefined2 *)0x8ee1)();
      goto LAB_1a22_07dc;
    }
    uVar1 = 1;
  }
  *(undefined1 *)0xb99e = uVar1;
LAB_1a22_07dc:
  FUN_1a22_31b5();
  return;
}



// Function: FUN_1a22_081c @ 1a22:081c

/* WARNING: Instruction at (ram,0x0001aaa9) overlaps instruction at (ram,0x0001aaa8)
    */

void __cdecl16far FUN_1a22_081c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  bVar2 = true;
  uVar1 = FUN_1a22_318e();
  if (!bVar2) {
    *(undefined1 *)0xb897 = uVar1;
    (*(code *)*(undefined2 *)0x8edd)();
    param_2 = param_2 + *(int *)0xb848;
    param_4 = *(int *)0xb848 + param_4;
    if (param_4 < param_2) {
      *(undefined1 *)0xb99e = 3;
      param_4 = param_2;
    }
    *(int *)0xb932 = param_4;
    *(int *)0xb92a = param_4;
    param_3 = param_3 + *(int *)0xb84a;
    param_5 = *(int *)0xb84a + param_5;
    if (param_5 < param_3) {
      *(undefined1 *)0xb99e = 3;
      param_5 = param_3;
    }
    *(int *)0xb934 = param_5;
    *(int *)0xb92c = param_5;
    *(undefined2 *)0xb93e = *(undefined2 *)0xb87c;
    if (param_1 == 3) {
      if (*(char *)0xb886 != '\0') {
        *(undefined1 *)0xb9c1 = 0xff;
      }
      FUN_1a22_04fc();
      *(undefined1 *)0xb9c1 = 0;
    }
    else if (param_1 == 2) {
      FUN_1000_0ee6();
    }
    else {
      *(undefined1 *)0xb99e = 0xfc;
    }
    if ((*(char *)0xb897 != '\0') || (*(char *)0xb99e < '\0')) goto LAB_1a22_08ac;
  }
  *(undefined1 *)0xb99e = 1;
LAB_1a22_08ac:
  FUN_1a22_31b5();
  return;
}



// Function: FUN_1a22_0a3e @ 1a22:0a3e

int __cdecl16far FUN_1a22_0a3e(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = 0;
  if (*(char *)0x8e9a == '\0') {
    *(undefined1 *)0xb99e = 0xfd;
  }
  else {
    *param_1 = *(undefined2 *)0xb850;
    ((undefined2 *)param_1)[1] = *(undefined2 *)0xb852;
    *param_2 = *(undefined2 *)0xb854;
    ((undefined2 *)param_2)[1] = *(undefined2 *)0xb856;
    *param_3 = *(undefined2 *)0xb858;
    ((undefined2 *)param_3)[1] = *(undefined2 *)0xb85a;
    iVar1 = (int)*(char *)0xb99f;
    *(char *)0xb99e = *(char *)0xb99f + -1;
  }
  return iVar1;
}



// Function: FUN_1a22_14ac @ 1a22:14ac

void __cdecl16near FUN_1a22_14ac(void)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  int *unaff_SI;
  uint *puVar13;
  uint *puVar14;
  int *unaff_DI;
  uint *puVar15;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  int local_8;
  int local_4;
  
  uVar3 = unaff_SI[1];
  if (uVar3 == unaff_DI[1]) {
    iVar9 = *unaff_DI;
    local_8 = *unaff_SI;
    puVar11 = (uint *)(unaff_SI + 2);
    puVar13 = (uint *)(unaff_SI + -5);
    local_4 = 0;
    puVar15 = (uint *)(unaff_SI + local_8 * 5 + -3);
    do {
      while( true ) {
        puVar14 = puVar15;
        uVar4 = *puVar14;
        if (uVar4 != *puVar13) break;
        puVar14[1] = puVar14[1] + (puVar14[1] - puVar13[1] & (int)(puVar14[1] - puVar13[1]) >> 0xf);
LAB_1a22_1541:
        puVar13 = puVar13 + -5;
        iVar9 = iVar9 + -1;
        puVar15 = puVar14;
        if (iVar9 == 0) {
          if (local_8 != 0) {
            puVar14 = puVar14 + (local_8 + -1) * -5;
          }
          puVar11 = puVar14 + -2;
          goto LAB_1a22_1557;
        }
      }
      if (*puVar13 <= uVar4) {
        if (*puVar13 + puVar13[1] < uVar4) {
          uVar4 = puVar13[4];
          uVar8 = puVar13[3];
          uVar5 = puVar13[2];
          uVar6 = puVar13[1];
          uVar7 = *puVar13;
          puVar12 = puVar11 + -5;
          puVar15 = puVar12;
          for (uVar10 = (uint)((int)puVar14 + (10 - (int)puVar11)) >> 1; uVar10 != 0;
              uVar10 = uVar10 - 1) {
            puVar2 = puVar15;
            puVar15 = puVar15 + 1;
            puVar1 = puVar11;
            puVar11 = puVar11 + 1;
            *puVar2 = *puVar1;
          }
          puVar14 = puVar11 + -10;
          *puVar15 = uVar7;
          puVar15[1] = uVar6;
          puVar15[2] = uVar5;
          puVar15[3] = uVar8;
          puVar15[4] = uVar4;
          local_4 = local_4 + 1;
          puVar11 = puVar12;
        }
        else {
          uVar8 = *puVar13;
          puVar14[1] = puVar14[1] + (uVar4 - uVar8);
          *puVar14 = *puVar14 - (uVar4 - uVar8);
        }
        goto LAB_1a22_1541;
      }
      uVar8 = (uVar4 + puVar14[1]) - *puVar13;
      if (*puVar13 <= uVar4 + puVar14[1] && uVar8 != 0) {
        if (uVar8 < puVar13[1]) {
          puVar14[1] = puVar14[1] - (uVar8 - puVar13[1]);
        }
        goto LAB_1a22_1541;
      }
      local_4 = local_4 + 1;
      local_8 = local_8 + -1;
      puVar15 = puVar14 + -5;
    } while (local_8 != 0);
    puVar11 = puVar14 + -2;
    local_8 = 0;
    if (iVar9 != 0) {
      local_4 = local_4 + iVar9;
      puVar13 = puVar13 + 4;
      for (iVar9 = iVar9 * 5; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar1 = puVar13;
        puVar13 = puVar13 + -1;
        puVar14[-1] = *puVar1;
        puVar14 = puVar14 + -1;
      }
      puVar11 = puVar14 + -2;
      local_8 = 0;
    }
LAB_1a22_1557:
    *puVar11 = local_8 + local_4;
    puVar11[1] = uVar3;
    *(undefined2 *)0xb998 = puVar11;
    *(undefined2 *)0xb992 = puVar11 + -1;
    *(undefined2 *)0xb994 = puVar11 + -1;
  }
  return;
}



// Function: FUN_1a22_15aa @ 1a22:15aa

void __cdecl16near FUN_1a22_15aa(void)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *unaff_DI;
  uint *puVar5;
  undefined2 unaff_DS;
  bool bVar6;
  
  uVar2 = *unaff_DI;
  if (uVar2 - 1 != 0 && 0 < (int)uVar2) {
    puVar5 = unaff_DI + 2;
    puVar4 = puVar5 + (uVar2 - 1) * 5;
    uVar2 = uVar2 >> 1;
    do {
      uVar3 = 8;
      do {
        LOCK();
        uVar1 = *(undefined2 *)(uVar3 + (int)puVar5);
        *(undefined2 *)(uVar3 + (int)puVar5) = *(undefined2 *)(uVar3 + (int)puVar4);
        UNLOCK();
        *(undefined2 *)(uVar3 + (int)puVar4) = uVar1;
        bVar6 = 1 < uVar3;
        uVar3 = uVar3 - 2;
      } while (bVar6);
      puVar5 = puVar5 + 5;
      puVar4 = puVar4 + -5;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// Function: FUN_1a22_16f0 @ 1a22:16f0

void __cdecl16near FUN_1a22_16f0(void)

{
  int in_CX;
  int in_DX;
  undefined2 unaff_DS;
  
  if ((((*(int *)0xb840 <= in_CX) && (in_CX <= *(int *)0xb842)) && (*(int *)0xb844 <= in_DX)) &&
     (in_DX <= *(int *)0xb846)) {
    return;
  }
  return;
}



// Function: FUN_1a22_188e @ 1a22:188e

void __cdecl16near FUN_1a22_188e(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)0xa89a == -0x292a) {
    FUN_2116_0060();
  }
  return;
}



// Function: FUN_1a22_189c @ 1a22:189c

undefined2 __cdecl16far FUN_1a22_189c(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = 0;
  *(undefined1 *)0xb99e = 0xfd;
  if (*(char *)0x8e9a != '\0') {
    *(undefined1 *)0xb99e = 0;
    *(undefined1 *)0xb99f = 0;
    LOCK();
    uVar1 = *(undefined2 *)0xb848;
    *(undefined2 *)0xb848 = param_1;
    UNLOCK();
    LOCK();
    *(undefined2 *)0xb84a = param_2;
    UNLOCK();
  }
  return uVar1;
}



// Function: FUN_1a22_18c3 @ 1a22:18c3

void __cdecl16far FUN_1a22_18c3(void)

{
  undefined2 unaff_DS;
  
  if (*(char *)0x8e9a == '\0') {
    *(undefined1 *)0xb99e = 0xfd;
  }
  else {
    *(undefined1 *)0xb99e = 0;
    FUN_1a22_195f();
  }
  return;
}



// Function: FUN_1a22_192a @ 1a22:192a

int __cdecl16far FUN_1a22_192a(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0xb848;
  uVar2 = 0;
  if (*(char *)0x8e9a == '\0') {
    uVar2 = 0xfd;
  }
  *(undefined1 *)0xb99e = uVar2;
  return iVar1 + param_1;
}



// Function: FUN_1a22_195f @ 1a22:195f

void __cdecl16near FUN_1a22_195f(void)

{
  int in_AX;
  undefined2 uVar1;
  int in_CX;
  int in_DX;
  int in_BX;
  undefined2 unaff_DS;
  
  if (in_CX < in_AX) {
    *(undefined1 *)0xb99e = 3;
  }
  if (in_DX < in_BX) {
    *(undefined1 *)0xb99e = 3;
    in_BX = in_DX;
  }
  uVar1 = FUN_1a22_346a(in_BX);
  *(undefined2 *)0xb840 = uVar1;
  uVar1 = FUN_1a22_346a();
  *(undefined2 *)0xb842 = uVar1;
  uVar1 = FUN_1a22_346a();
  *(undefined2 *)0xb844 = uVar1;
  uVar1 = FUN_1a22_346a();
  *(undefined2 *)0xb846 = uVar1;
  *(undefined1 *)0xb956 = 1;
  FUN_1a22_0687();
  return;
}



// Function: FUN_1a22_19a6 @ 1a22:19a6

int __cdecl16near FUN_1a22_19a6(byte *param_1,undefined2 param_2,byte *param_3,undefined2 param_4)

{
  byte bVar1;
  uint uVar2;
  
  do {
    if ((*param_1 < 0x41) || (0x5a < *param_1)) {
      bVar1 = *param_1;
    }
    else {
      bVar1 = *param_1 | 0x20;
    }
    uVar2 = (uint)bVar1;
    if ((*param_3 < 0x41) || (0x5a < *param_3)) {
      bVar1 = *param_3;
    }
    else {
      bVar1 = *param_3 | 0x20;
    }
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
  } while ((uVar2 != 0) && (bVar1 == uVar2));
  return uVar2 - bVar1;
}



// Function: FUN_1a22_1a06 @ 1a22:1a06

char * __cdecl16near
FUN_1a22_1a06(char *param_1,undefined2 param_2,char *param_3,undefined2 param_4)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *param_3;
    *pcVar2 = cVar1;
    param_3 = param_3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return (char *)CONCAT22(param_2,param_1);
}



// Function: FUN_1a22_1a3e @ 1a22:1a3e

int __cdecl16near FUN_1a22_1a3e(uint param_1)

{
  return (param_1 ^ (int)param_1 >> 0xf) - ((int)param_1 >> 0xf);
}



// Function: FUN_1a22_1a4c @ 1a22:1a4c

int __cdecl16near FUN_1a22_1a4c(char *param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = *param_1;
    if (((cVar1 == '\0') || (cVar1 < '0')) || ('9' < cVar1)) break;
    iVar2 = (int)cVar1 + iVar2 * 10 + -0x30;
    param_1 = param_1 + 1;
  }
  return iVar2;
}



// Function: FUN_1a22_1a92 @ 1a22:1a92

int __cdecl16near FUN_1a22_1a92(char *param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while (*param_1 != '\0') {
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  }
  return iVar1;
}



// Function: FUN_1a22_1ab2 @ 1a22:1ab2

undefined4 __cdecl16near FUN_1a22_1ab2(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar4 = *(int *)0x8e3a;
  iVar3 = 0;
  iVar2 = *(int *)0x8e38;
  if (0 < param_1) {
    while (iVar4 != 0 || iVar2 != 0) {
      iVar3 = iVar3 + 1;
      if (iVar3 == param_1) goto LAB_1a22_1aed;
      piVar1 = (int *)(iVar2 + 0x98);
      iVar4 = *(int *)(iVar2 + 0x9a);
      iVar2 = *piVar1;
    }
  }
  iVar2 = 0;
  iVar4 = 0;
LAB_1a22_1aed:
  return CONCAT22(iVar4,iVar2);
}



// Function: FUN_1a22_1af2 @ 1a22:1af2

int __cdecl16near FUN_1a22_1af2(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar2 = 0;
  iVar3 = *(int *)0x8e3a;
  iVar4 = *(int *)0x8e38;
  while ((iVar3 != 0 || iVar4 != 0 && ((iVar2 = iVar2 + 1, iVar4 != param_1 || (iVar3 != param_2))))
        ) {
    piVar1 = (int *)(iVar4 + 0x98);
    iVar3 = *(int *)(iVar4 + 0x9a);
    iVar4 = *piVar1;
  }
  return iVar2;
}



// Function: FUN_1a22_1b32 @ 1a22:1b32

void __cdecl16near
FUN_1a22_1b32(undefined2 param_1,undefined2 param_2,undefined2 param_3,uint param_4,int param_5,
             undefined2 param_6,undefined2 param_7)

{
  undefined2 *puVar1;
  int *piVar2;
  ulong uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  int *piVar7;
  undefined2 unaff_DS;
  int local_90 [33];
  undefined2 local_4e;
  undefined2 local_46;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_35;
  byte local_31;
  byte local_30;
  char local_2f;
  uint local_27;
  int local_25;
  int local_1f;
  int local_1d;
  undefined4 local_a;
  undefined4 local_6;
  
  iVar5 = 0;
  uVar4 = FUN_1a22_2ebc(0x9c,0);
  *(undefined2 *)0x8e3c = uVar4;
  *(int *)0x8e3e = iVar5;
  if (iVar5 != 0 || *(int *)0x8e3c != 0) {
    uVar4 = (undefined2)((ulong)*(undefined4 *)0x8e3c >> 0x10);
    iVar5 = (int)*(undefined4 *)0x8e3c;
    *(undefined2 *)(iVar5 + 0x92) = 0;
    *(undefined2 *)(iVar5 + 0x90) = 0;
    *(undefined2 *)(iVar5 + 0x96) = 0;
    *(undefined2 *)(iVar5 + 0x94) = 0;
    *(undefined2 *)(iVar5 + 0x98) = param_6;
    *(undefined2 *)(iVar5 + 0x9a) = param_7;
    local_a = FUN_1a22_2e70(param_1,0,0,1);
    local_6 = FUN_1a22_2e70(param_1,param_4,param_5,0);
    iVar5 = FUN_1a22_2e57(param_1,local_90);
    local_6 = local_6 + (long)iVar5;
    if (local_90[0] < 0x300) {
      local_6 = CONCAT22((int)(local_6 >> 0x10) - (uint)((uint)local_6 < 0x11),(uint)local_6 - 0x11)
      ;
    }
    puVar1 = (undefined2 *)*(undefined4 *)0x8e3c;
    uVar4 = (undefined2)((ulong)puVar1 >> 0x10);
    puVar6 = (undefined2 *)puVar1;
    puVar6[0x46] = local_90[0];
    *puVar1 = local_4e;
    puVar6[1] = local_46;
    puVar6[2] = local_3a;
    puVar6[3] = local_38;
    puVar6[4] = local_35;
    puVar6[5] = (uint)local_31;
    puVar6[6] = (uint)local_30;
    puVar6[0x47] = (int)local_2f;
    FUN_1a22_1a06(puVar6 + 7,uVar4,param_2,param_3);
    piVar2 = (int *)*(undefined4 *)0x8e3c;
    uVar4 = (undefined2)((ulong)piVar2 >> 0x10);
    piVar7 = (int *)piVar2;
    piVar7[0x40] = param_4;
    piVar7[0x41] = param_5;
    uVar3 = local_6;
    if ((*piVar2 == 0) && ((local_6 & 1) != 0)) {
      uVar3 = local_6 + 1;
    }
    local_6._2_2_ = (int)(uVar3 >> 0x10);
    local_6._0_2_ = (int)uVar3;
    piVar7[0x42] = (int)local_6;
    piVar7[0x43] = local_6._2_2_;
    piVar7[0x44] = local_1f;
    piVar7[0x45] = local_1d;
    local_6 = uVar3;
    FUN_1a22_2e70(param_1,local_27 + param_4,local_25 + param_5 + (uint)CARRY2(local_27,param_4),0);
    FUN_1a22_2e57(param_1,*(int *)0x8e3c + 0x60,*(undefined2 *)0x8e3e,0x20);
    *(undefined1 *)((int)*(undefined4 *)0x8e3c + 0x7f) = 0;
    FUN_1a22_2e70(param_1,local_a,0);
  }
  return;
}



// Function: FUN_1a22_1cc8 @ 1a22:1cc8

undefined2 __cdecl16near FUN_1a22_1cc8(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int extraout_DX;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 unaff_DS;
  bool bVar15;
  uint local_c;
  int local_a;
  uint local_6;
  int local_4;
  
  uVar13 = (undefined2)((ulong)*(undefined4 *)0x8e3c >> 0x10);
  iVar5 = (int)*(undefined4 *)0x8e3c;
  if (*(int *)(iVar5 + 0x96) == 0 && *(int *)(iVar5 + 0x94) == 0) {
    iVar5 = FUN_1a22_2e2c(iVar5 + 0xe,uVar13);
    if (iVar5 < 0) {
      *(undefined1 *)0xb99e = 0xfb;
      return 0xffff;
    }
    piVar2 = (int *)*(undefined4 *)0x8e3c;
    uVar13 = (undefined2)((ulong)piVar2 >> 0x10);
    piVar6 = (int *)piVar2;
    iVar10 = *piVar2;
    iVar9 = piVar6[2];
    iVar1 = piVar6[0x46];
    FUN_1a22_2e70(iVar5,piVar6[0x42],piVar6[0x43],0);
    uVar13 = (undefined2)((ulong)*(undefined4 *)0x8e3c >> 0x10);
    iVar7 = (int)*(undefined4 *)0x8e3c;
    iVar7 = *(int *)(iVar7 + 0xc) - *(int *)(iVar7 + 10);
    iVar11 = iVar7 + 2;
    if (iVar10 == 0) {
      if (iVar1 < 0x300) goto LAB_1a22_1d66;
      iVar11 = iVar11 << ((char)iVar7 + 5U & 0x1f);
    }
    else {
      if (iVar9 == 0) {
LAB_1a22_1d66:
        iVar11 = iVar11 * 2;
      }
      iVar11 = iVar11 << 1;
    }
    iVar4 = extraout_DX;
    uVar13 = FUN_1a22_2ebc(iVar11,0);
    uVar14 = (undefined2)((ulong)*(undefined4 *)0x8e3c >> 0x10);
    iVar8 = (int)*(undefined4 *)0x8e3c;
    *(undefined2 *)(iVar8 + 0x90) = uVar13;
    *(int *)(iVar8 + 0x92) = iVar4;
    if (iVar4 != 0 || *(int *)(iVar8 + 0x90) != 0) {
      FUN_1a22_2e57(iVar5,*(undefined2 *)(iVar8 + 0x90),iVar4,iVar11);
      if (iVar10 == 0) {
        if (iVar1 < 0x300) {
          uVar3 = *(undefined4 *)((int)*(undefined4 *)0x8e3c + 0x90);
          local_c = *(uint *)((int)uVar3 + iVar7 * 4 + 2);
          goto LAB_1a22_1de3;
        }
        uVar3 = *(undefined4 *)((int)*(undefined4 *)0x8e3c + 0x90);
        uVar13 = (undefined2)((ulong)uVar3 >> 0x10);
        iVar10 = (int)uVar3 + iVar7 * 6;
        local_c = *(uint *)(iVar10 + 2);
        local_a = *(int *)(iVar10 + 4);
      }
      else if (iVar9 == 0) {
        uVar3 = *(undefined4 *)((int)*(undefined4 *)0x8e3c + 0x90);
        local_c = *(uint *)((int)uVar3 + (iVar7 + 1) * 4);
LAB_1a22_1de3:
        local_a = 0;
      }
      else {
        uVar3 = *(undefined4 *)((int)*(undefined4 *)0x8e3c + 0x90);
        local_c = *(uint *)((int)uVar3 + (iVar7 + 1) * 2);
        local_a = (int)local_c >> 0xf;
      }
      iVar10 = local_a;
      uVar13 = FUN_1a22_2ebc(local_c,local_a);
      uVar14 = (undefined2)((ulong)*(undefined4 *)0x8e3c >> 0x10);
      iVar9 = (int)*(undefined4 *)0x8e3c;
      *(undefined2 *)(iVar9 + 0x94) = uVar13;
      *(int *)(iVar9 + 0x96) = iVar10;
      if (iVar10 != 0 || *(int *)(iVar9 + 0x94) != 0) {
        FUN_1a22_2e70(iVar5,*(uint *)(iVar9 + 0x80) + *(uint *)(iVar9 + 0x88),
                      *(int *)(iVar9 + 0x82) + *(int *)(iVar9 + 0x8a) +
                      (uint)CARRY2(*(uint *)(iVar9 + 0x80),*(uint *)(iVar9 + 0x88)),0);
        uVar13 = (undefined2)((ulong)*(undefined4 *)0x8e3c >> 0x10);
        iVar10 = (int)*(undefined4 *)0x8e3c;
        local_6 = *(uint *)(iVar10 + 0x94);
        local_4 = *(int *)(iVar10 + 0x96);
        uVar12 = 0x8000;
        for (; (-1 < local_a && ((0 < local_a || (local_c != 0)))); local_c = local_c - uVar12) {
          if ((local_a < 1) && ((local_a < 0 || (local_c < uVar12)))) {
            uVar12 = local_c;
          }
          FUN_1a22_2e57(iVar5,local_6,local_4,uVar12);
          local_a = local_a - (uint)(local_c < uVar12);
          bVar15 = CARRY2(local_6,uVar12);
          local_6 = local_6 + uVar12;
          local_4 = local_4 + (uint)bVar15 * 0x1000;
        }
        FUN_1a22_2e42(iVar5);
        goto LAB_1a22_1eeb;
      }
    }
    FUN_1a22_2e42(iVar5);
    *(undefined1 *)0xb99e = 0xf8;
    uVar13 = 0xfffc;
  }
  else {
LAB_1a22_1eeb:
    uVar13 = 0;
  }
  return uVar13;
}



// Function: FUN_1a22_1ef4 @ 1a22:1ef4

void __cdecl16near FUN_1a22_1ef4(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  uVar2 = (undefined2)((ulong)*(undefined4 *)0x8e3c >> 0x10);
  iVar1 = (int)*(undefined4 *)0x8e3c;
  if (*(int *)(iVar1 + 0x92) != 0 || *(int *)(iVar1 + 0x90) != 0) {
    FUN_1a22_2ee8(*(undefined2 *)(iVar1 + 0x90),*(undefined2 *)(iVar1 + 0x92));
    uVar2 = (undefined2)((ulong)*(undefined4 *)0x8e3c >> 0x10);
    iVar1 = (int)*(undefined4 *)0x8e3c;
    *(undefined2 *)(iVar1 + 0x92) = 0;
    *(undefined2 *)(iVar1 + 0x90) = 0;
  }
  if (*(int *)(iVar1 + 0x96) != 0 || *(int *)(iVar1 + 0x94) != 0) {
    FUN_1a22_2ee8(*(undefined2 *)(iVar1 + 0x94),*(undefined2 *)(iVar1 + 0x96));
    uVar2 = (undefined2)((ulong)*(undefined4 *)0x8e3c >> 0x10);
    iVar1 = (int)*(undefined4 *)0x8e3c;
    *(undefined2 *)(iVar1 + 0x96) = 0;
    *(undefined2 *)(iVar1 + 0x94) = 0;
  }
  return;
}



// Function: FUN_1a22_1f56 @ 1a22:1f56

int __cdecl16near FUN_1a22_1f56(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (param_2 == 0 && param_1 == 0) {
    *(undefined1 *)0xb99e = 0xfc;
    iVar1 = -1;
  }
  else {
    FUN_1a22_1ef4();
    *(int *)0x8e3c = param_1;
    *(int *)0x8e3e = param_2;
    iVar1 = FUN_1a22_1cc8();
    if (-1 < iVar1) {
      iVar1 = FUN_1a22_1af2(*(undefined2 *)0x8e3c,*(undefined2 *)0x8e3e);
    }
  }
  return iVar1;
}



// Function: FUN_1a22_1f9e @ 1a22:1f9e

int __cdecl16near FUN_1a22_1f9e(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  int aiStack_22 [6];
  int iStack_16;
  int iStack_14;
  uint local_e;
  int local_c;
  byte abStack_a [2];
  uint local_8;
  int iStack_6;
  char local_3;
  
  *(undefined1 *)0xb99e = 0;
  iVar2 = FUN_1a22_2e2c(param_1,param_2);
  if (iVar2 < 0) {
    *(undefined1 *)0xb99e = 0xfb;
    iVar2 = -1;
  }
  else {
    FUN_1a22_2e70(iVar2,0x18,0,0);
    FUN_1a22_2e57(iVar2,&local_3);
    if (local_3 == '@') {
      FUN_1a22_2e70(iVar2,0x3c,0,0);
      FUN_1a22_2e57(iVar2,&local_e);
      FUN_1a22_2e70(iVar2,local_e + 0x24,local_c + (uint)(0xffdb < local_e),0);
      FUN_1a22_2e57(iVar2,&local_8);
      FUN_1a22_2e70(iVar2,local_8 + local_e,
                    ((int)local_8 >> 0xf) + local_c + (uint)CARRY2(local_8,local_e),0);
      FUN_1a22_2e57(iVar2,abStack_a);
      iStack_6 = iVar2;
LAB_1a22_2077:
      if (*(char *)0xb99e == '\0') {
        iVar3 = FUN_1a22_2e57(iVar2,&iStack_16);
        if (iVar3 != 8) {
          *(undefined1 *)0xb99e = 0xf9;
          goto LAB_1a22_212c;
        }
        if (iStack_16 == 0) goto LAB_1a22_212c;
        for (iVar3 = 0; iVar3 < iStack_14; iVar3 = iVar3 + 1) {
          iVar4 = FUN_1a22_2e57(iVar2,aiStack_22);
          if (iVar4 != 0xc) {
            *(undefined1 *)0xb99e = 0xf9;
            break;
          }
          if (iStack_16 == -0x7ff8) {
            FUN_1a22_1b32(iVar2,param_1,param_2,aiStack_22[0] << (abStack_a[0] & 0x1f),0,
                          *(undefined2 *)0x8e3c,*(undefined2 *)0x8e3e);
            if (*(int *)0x8e3e == 0 && *(int *)0x8e3c == 0) {
              *(undefined1 *)0xb99e = 0xf8;
              break;
            }
            uVar1 = *(undefined2 *)0x8e3e;
            *(undefined2 *)0x8e38 = *(undefined2 *)0x8e3c;
            *(undefined2 *)0x8e3a = uVar1;
          }
        }
        goto LAB_1a22_2077;
      }
    }
    else {
      *(undefined1 *)0xb99e = 0xfa;
    }
LAB_1a22_212c:
    FUN_1a22_2e42(iVar2);
    if (*(char *)0xb99e == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = *(char *)0xb99e + 4;
    }
  }
  return iVar2;
}



// Function: FUN_1a22_204e @ 1a22:204e

int __cdecl16near FUN_1a22_204e(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int unaff_BP;
  undefined2 unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  FUN_1a22_2e70();
  FUN_1a22_2e57();
  *(undefined2 *)(unaff_BP + -4) = unaff_DI;
  do {
    if (*(char *)0xb99e != '\0') {
LAB_1a22_212c:
      FUN_1a22_2e42();
      if (*(char *)0xb99e == '\0') {
        iVar3 = 0;
      }
      else {
        iVar3 = *(char *)0xb99e + 4;
      }
      return iVar3;
    }
    iVar3 = FUN_1a22_2e57();
    if (iVar3 != 8) {
      *(undefined1 *)0xb99e = 0xf9;
      goto LAB_1a22_212c;
    }
    if (*(int *)(unaff_BP + -0x14) == 0) goto LAB_1a22_212c;
    for (iVar3 = 0; iVar3 < *(int *)(unaff_BP + -0x12); iVar3 = iVar3 + 1) {
      iVar2 = FUN_1a22_2e57();
      if (iVar2 != 0xc) {
        *(undefined1 *)0xb99e = 0xf9;
        break;
      }
      if (*(int *)(unaff_BP + -0x14) == -0x7ff8) {
        FUN_1a22_1b32();
        if (*(int *)0x8e3e == 0 && *(int *)0x8e3c == 0) {
          *(undefined1 *)0xb99e = 0xf8;
          break;
        }
        uVar1 = *(undefined2 *)0x8e3e;
        *(undefined2 *)0x8e38 = *(undefined2 *)0x8e3c;
        *(undefined2 *)0x8e3a = uVar1;
      }
    }
  } while( true );
}



// Function: FUN_1a22_2152 @ 1a22:2152

int __cdecl16far FUN_1a22_2152(char *param_1,undefined2 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char local_84 [82];
  undefined1 local_32 [30];
  undefined1 local_14 [14];
  char *local_6;
  
  *(undefined1 *)0xb99e = 0;
  for (pcVar2 = param_1; ((*pcVar2 != '\0' && (*pcVar2 != '*')) && (*pcVar2 != '?'));
      pcVar2 = pcVar2 + 1) {
  }
  if (*pcVar2 == '\0') {
    iVar1 = FUN_1a22_1f9e(param_1,param_2);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  else {
    FUN_1a22_1a06(local_84);
    iVar1 = FUN_1a22_1a92(local_84);
    for (pcVar2 = local_84 + iVar1; ((pcVar2 != local_84 && (*pcVar2 != '\\')) && (*pcVar2 != ':'));
        pcVar2 = pcVar2 + -1) {
    }
    if (pcVar2 != local_84) {
      pcVar2 = pcVar2 + 1;
    }
    iVar1 = FUN_1a22_2e8b(param_1,param_2,local_32);
    local_6 = pcVar2;
    if (iVar1 != 0) {
      *(undefined1 *)0xb99e = 0xfb;
      return -1;
    }
    do {
      FUN_1a22_1a06(pcVar2,unaff_SS,local_14);
      iVar1 = FUN_1a22_1f9e(local_84);
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar1 = FUN_1a22_2eab();
    } while (iVar1 == 0);
  }
  iVar1 = FUN_1a22_1af2(0,0);
  return iVar1;
}



// Function: FUN_1a22_22b8 @ 1a22:22b8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001c7da) overlaps instruction at (ram,0x0001c7d9)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Possible PIC construction at 0x0001718d: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001722a: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00017192) */
/* WARNING: Removing unreachable block (ram,0x000171da) */
/* WARNING: Removing unreachable block (ram,0x000171d7) */
/* WARNING: Removing unreachable block (ram,0x00017224) */
/* WARNING: Removing unreachable block (ram,0x0001722f) */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x0001c68d) */
/* WARNING: Removing unreachable block (ram,0x0001712b) */
/* WARNING: Removing unreachable block (ram,0x00017304) */
/* WARNING: Removing unreachable block (ram,0x0001c7e8) */
/* WARNING: Removing unreachable block (ram,0x0001c7d0) */
/* WARNING: Removing unreachable block (ram,0x0001c803) */
/* WARNING: Removing unreachable block (ram,0x0001c6a4) */
/* WARNING: Removing unreachable block (ram,0x0001c7c1) */
/* WARNING: Removing unreachable block (ram,0x0001c75e) */
/* WARNING: Removing unreachable block (ram,0x0001c778) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * __cdecl16far FUN_1a22_22b8(code *param_1,code *param_2,code *param_3)

{
  int *piVar1;
  undefined2 *puVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  code *pcVar5;
  byte *pbVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  char cVar15;
  code cVar16;
  uint *puVar17;
  code *pcVar18;
  int iVar19;
  undefined2 uVar20;
  uint uVar21;
  code *pcVar22;
  int iVar23;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  uint uVar24;
  code *pcVar25;
  code *in_CX;
  code *extraout_DX;
  undefined2 extraout_DX_00;
  undefined1 extraout_DH;
  undefined1 extraout_DH_00;
  undefined2 extraout_DX_01;
  undefined2 extraout_DX_02;
  undefined2 extraout_DX_03;
  uint extraout_DX_04;
  uint extraout_DX_05;
  uint extraout_DX_06;
  char extraout_DH_01;
  code *extraout_DX_07;
  int extraout_DX_08;
  code *pcVar26;
  undefined2 *puVar27;
  code *in_BX;
  code *pcVar28;
  undefined2 *puVar29;
  undefined1 *puVar30;
  int *piVar31;
  int *unaff_BP;
  code *pcVar32;
  undefined1 *puVar33;
  byte *pbVar34;
  byte *pbVar35;
  code *pcVar36;
  int *piVar37;
  code *unaff_SI;
  code *pcVar38;
  byte *pbVar39;
  undefined2 *puVar40;
  byte *pbVar41;
  code *unaff_DI;
  int unaff_SS;
  uint uVar42;
  code *unaff_DS;
  undefined2 in_GS;
  byte bVar43;
  bool bVar44;
  byte bVar45;
  byte in_AF;
  byte bVar46;
  bool bVar47;
  undefined1 uVar48;
  byte bVar49;
  byte in_TF;
  byte in_IF;
  byte bVar50;
  byte in_NT;
  longdouble lVar51;
  code *pcVar52;
  byte in_stack_00003bde;
  uint uStack_352;
  code *pcStack_2ee;
  int iStack_2cc;
  undefined1 auStack_2c6 [82];
  code *pcStack_274;
  undefined4 uStack_272;
  int iStack_264;
  undefined4 uStack_25a;
  int iStack_252;
  int iStack_250;
  undefined4 uStack_24e;
  uint uStack_242;
  int iStack_238;
  int iStack_236;
  undefined4 uStack_234;
  undefined1 auStack_230 [166];
  int iStack_18a;
  undefined2 uStack_188;
  char acStack_186 [24];
  undefined4 uStack_16e;
  undefined2 uStack_16a;
  int iStack_168;
  int iStack_166;
  int iStack_164;
  char acStack_162 [160];
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined1 auStack_92 [12];
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  int iStack_7e;
  int iStack_5e;
  code *in_stack_0000ffca;
  undefined2 in_stack_0000ffce;
  int in_stack_0000ffe2;
  int local_16;
  int local_12;
  uint local_8;
  code *local_4;
  
  bVar47 = false;
  pcVar32 = (code *)&stack0xfffe;
  pcVar18 = (code *)&stack0xfffe;
  puVar33 = &stack0xfffe;
  piVar37 = (int *)*(undefined2 *)0x8e38;
  local_12 = *(int *)0x8e3a;
  pbVar34 = (byte *)*(undefined2 *)0x8e3c;
  local_8 = *(uint *)0x8e3e;
  pcVar26 = (code *)(local_8 | (uint)pbVar34);
  if (pcVar26 == (code *)0x0) goto LAB_1a22_2612;
  *(undefined1 *)0xb99e = 0;
  pcVar38 = param_1;
  do {
    pcVar36 = pcVar38;
    if (((char)*pcVar36 < 'A') || ('Z' < (char)*pcVar36)) {
      cVar16 = *pcVar36;
    }
    else {
      cVar16 = (code)((byte)*pcVar36 | 0x20);
    }
    local_4 = (code *)((uint)(byte)cVar16 << 8);
    if (cVar16 == (code)0x0) {
      if ((*(int *)pbVar34 == 0) ||
         (((byte *)*(undefined2 *)0x8e3c == pbVar34 && (*(uint *)0x8e3e == local_8))))
      goto LAB_1a22_24bf;
      *(int *)0x0 = *(int *)(pbVar34 + 6);
      *(int *)0x2 = *(int *)(pbVar34 + 8);
      if (((byte *)*(undefined2 *)0x8e3c == pbVar34) && (*(uint *)0x8e3e == local_8)) {
        pcVar26 = (code *)FUN_1a22_1af2();
        return pcVar26;
      }
      goto LAB_1a22_24b6;
    }
    pcVar38 = pcVar36 + 1;
    uVar21 = (int)(char)cVar16 - 0x62;
  } while (0x15 < uVar21);
  bVar44 = (int)uVar21 < 0;
  pcVar22 = (code *)(uVar21 * 2);
  switch(uVar21) {
  case 0:
    (pcVar22 + (int)pbVar34)[8] =
         (code)((char)(pcVar22 + (int)pbVar34)[8] + (char)((uint)pcVar22 >> 8));
    if ((0U >> ((byte)in_CX & 0x1f) & 1) == 0) {
      FUN_2116_2e76();
    }
    else {
      FUN_2116_2e76();
    }
    FUN_2116_2e76();
    FUN_3395_00ab();
    FUN_2b01_000b();
    FUN_2b01_000b();
    do {
      iVar23 = FUN_2922_065e();
    } while (iVar23 == 0);
    iVar23 = FUN_1576_0000();
    FUN_2b53_000a();
    if ((iVar23 == 0x52) || (iVar23 == 0x72)) {
      pcVar26 = (code *)FUN_2116_4cd3();
    }
    else {
      pcVar26 = (code *)FUN_2116_4cd3();
    }
    return pcVar26;
  case 1:
    *(undefined1 *)0xb99e = 0;
    return (code *)0x0;
  default:
    if (!bVar44) goto code_r0x0001e8d3;
    (*pcVar22)();
    bVar47 = (in_stack_00003bde >> 3 & 1) != 0;
    while( true ) {
      if ((bVar47) && (pcVar38 = pcVar38 + 1, pcVar38 == (code *)0x0)) {
        FUN_1a22_392e();
      }
      pcVar32 = pcVar18 + -8;
      if (pcVar18 < (code *)0x8 || pcVar32 == (code *)0x0) break;
      FUN_1a22_4625();
code_r0x0001e8d3:
      bVar47 = in_CX < pcVar32;
      pcVar18 = pcVar32;
    }
    FUN_1a22_394c();
    pcVar26 = (code *)FUN_1a22_4625();
    return pcVar26;
  case 7:
    cVar15 = (char)in_BX;
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    (&stack0x0038)[(int)pbVar34] = (&stack0x0038)[(int)pbVar34] + cVar15;
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar28 = unaff_SI + -2;
    unaff_SI = unaff_SI + -2;
    *(code **)pcVar28 = pcVar26;
code_r0x0001031d:
    cVar15 = (char)in_BX + -1;
    bVar43 = (byte)((uint)pcVar26 >> 8);
    pcVar22[(int)pcVar38] = (code)((byte)pcVar22[(int)pcVar38] ^ bVar43);
    pcVar22[(int)pcVar38] = (code)((byte)pcVar22[(int)pcVar38] ^ bVar43);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pbVar34[0x4d] = pbVar34[0x4d] + cVar15;
    pcVar36[0x3e] = (code)((byte)pcVar36[0x3e] ^ (byte)pcVar22);
    if (pcVar22 + -1 == (code *)0x0) {
      in_NT = ((uint)unaff_DI & 0x4000) != 0;
      in_TF = ((uint)unaff_DI & 0x100) != 0;
      in_AF = ((uint)unaff_DI & 0x10) != 0;
      if ((cRam00010329 == '\0') && (DAT_1000_0328 == '\0')) {
        DAT_1000_0328 = -1;
        bVar43 = 1;
        uRam00010026 = in_stack_0000ffce;
        DAT_1000_0028 = unaff_SI;
        DAT_1000_002a = pcVar22 + -1;
        _DAT_1000_002c = in_CX;
        pcRam0001002e = pcVar26;
        pcRam00010030 = pcVar38;
        pbRam00010032 = pbVar34;
        ppcRam00010034 = &local_4;
        pcRam00010036 = unaff_DS;
        pcRam00010038 = param_2;
        puRam0001003a = &stack0xffca;
        iRam0001003c = unaff_SS;
        FUN_5335_07df();
        FUN_1000_0e60();
        uRam00010006 = (undefined2)((ulong)*puRam00010000 >> 0x10);
        pcVar22 = (code *)(code *)*puRam00010000;
        pcRam00010040 = (code *)0x0;
        uRam00010270 = (uint)(in_NT & 1) * 0x4000 | (uint)(((uint)unaff_DI & 0x400) != 0) * 0x400 |
                       (uint)(bVar43 & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | 0x40 |
                       (uint)(in_AF & 1) * 0x10 | 4;
        uRam0001026e = 0x1000;
        uRam0001026c = 0xdbf;
        pcRam00010004 = pcVar22;
        uVar20 = (*pcRam00010042)();
        if ((0x31d < CONCAT11((char)uVar20,(char)((uint)uVar20 >> 8))) &&
           ((code *)*(undefined2 *)0x36 != pcRam00010024)) {
          pcRam00010040 = (code *)*(undefined2 *)0x36 + -1;
        }
        uRam00010022 = 0x99c;
        uRam00010008 = 0;
        func_0x00010909();
        func_0x00010b48();
        uRam00010022 = 0x9a2;
        func_0x00010909();
        FUN_1000_0ae9();
        pcVar26 = pcRam00010038;
        piVar37 = (int *)0x60;
        pcVar38 = DAT_1000_002a;
        for (iVar23 = 7; iVar23 != 0; iVar23 = iVar23 + -1) {
          piVar1 = piVar37;
          piVar37 = piVar37 + 1;
          pcVar52 = pcVar38;
          pcVar38 = pcVar38 + 2;
          *piVar1 = *(int *)pcVar52;
        }
        param_2 = (code *)0x1000;
        DAT_1000_006e = (code *)CONCAT22(pcRam00010036,pcRam0001002e);
        pbVar34 = (byte *)0x54;
        in_CX = (code *)0x5;
        unaff_DS = param_2;
switchD_1000_c554_caseD_a:
        cVar15 = (char)((uint)in_CX >> 8);
        *(char *)0x36a1 = *(char *)0x36a1 + cVar15;
        *(char *)0x70a3 = *(char *)0x70a3 + cVar15;
        pcVar38[-0x7138] = (code)((char)pcVar38[-0x7138] + (char)in_CX);
        (pcVar22 + (int)pbVar34)[5] =
             (code)((char)(pcVar22 + (int)pbVar34)[5] + (char)((uint)pcVar22 >> 8));
        puVar17 = (uint *)0x5e;
        do {
          uVar21 = *puVar17;
          *puVar17 = uVar21 & 0xf;
          puVar17[1] = puVar17[1] + (uVar21 >> 4);
          pbVar6 = pbVar34;
          pbVar34 = pbVar34 + 2;
          *(uint **)pbVar6 = puVar17;
          puVar17 = puVar17 + 2;
          in_CX = in_CX + -1;
        } while (in_CX != (code *)0x0);
        iVar23 = 4;
        do {
          piVar37 = (int *)0x54;
          iVar19 = iVar23;
          do {
            puVar17 = (uint *)*piVar37;
            uVar21 = *puVar17;
            uVar42 = puVar17[1];
            while( true ) {
              puVar7 = (uint *)piVar37[1];
              if ((uVar42 < puVar7[1]) || ((uVar42 == puVar7[1] && (uVar21 <= *puVar7)))) break;
              *piVar37 = (int)puVar7;
              piVar37[1] = (int)puVar17;
              piVar37 = piVar37 + 1;
              iVar19 = iVar19 + -1;
              if (iVar19 == 0) goto LAB_1000_03d5;
            }
            piVar37 = piVar37 + 1;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
LAB_1000_03d5:
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
        puVar27 = (undefined2 *)0x54;
        iVar23 = 5;
        do {
          puVar8 = (undefined4 *)*puVar27;
          uVar21 = *(uint *)(((uint)((int)puVar8 + -0x5e) >> 1) + 0x4a);
          pbVar6 = (byte *)*puVar8;
          uVar42 = (uint)((ulong)pbVar6 >> 0x10);
          pbVar34 = (byte *)pbVar6;
          if (pbRam00010046._2_2_ <= uVar42) {
            pbVar41 = (byte *)pbRam00010046;
            *(byte **)puVar8 = pbVar41;
            *(uint *)((int)puVar8 + 2) = pbRam00010046._2_2_;
            if (uVar21 == 0) {
              do {
                pbVar6 = pbVar34;
                pbVar34 = pbVar34 + 1;
                bVar43 = *pbVar6;
                pbVar6 = pbVar41;
                pbVar41 = pbVar41 + 1;
                *pbVar6 = bVar43;
              } while (bVar43 != 0);
            }
            else {
              if ((int)uVar21 < 0) {
                if (uVar21 == 0xffff) {
                  pbVar14 = (byte *)0x0;
                  if (pbVar41 != (byte *)0x0) {
                    pbRam00010046._2_2_ = pbRam00010046._2_2_ + 1;
                    *(undefined2 *)puVar8 = 0;
                    *(uint *)((int)puVar8 + 2) = pbRam00010046._2_2_;
                    pbVar14 = (byte *)0x0;
                  }
                  do {
                    do {
                      pbVar39 = pbVar14;
                      pbVar35 = pbVar34;
                      bVar43 = *pbVar35;
                      *pbVar39 = bVar43;
                      pbVar34 = pbVar35 + 1;
                      pbVar14 = pbVar39 + 1;
                    } while (bVar43 != 0);
                    bVar43 = pbVar35[1];
                    pbVar41 = pbVar39 + 2;
                    pbVar39[1] = bVar43;
                    pbVar34 = pbVar35 + 2;
                    pbVar14 = pbVar41;
                  } while (bVar43 != 0);
                  goto LAB_1000_0451;
                }
                uVar21 = *pbVar6 + 2;
              }
              for (uVar24 = uVar21 >> 1; uVar24 != 0; uVar24 = uVar24 - 1) {
                pbVar3 = pbVar41;
                pbVar41 = pbVar41 + 2;
                pbVar6 = pbVar34;
                pbVar34 = pbVar34 + 2;
                *(undefined2 *)pbVar3 = *(undefined2 *)pbVar6;
              }
              if ((uVar21 & 1) != 0) {
                pbVar6 = pbVar41;
                pbVar41 = pbVar41 + 1;
                *pbVar6 = *pbVar34;
              }
            }
LAB_1000_0451:
            pbRam00010046 =
                 (byte *)((ulong)CONCAT22(pbRam00010046._2_2_ + ((uint)pbVar41 >> 4),pbVar41) &
                         0xffff000f);
          }
          puVar27 = puVar27 + 1;
          iVar23 = iVar23 + -1;
          if (iVar23 == 0) {
            pcRam00010040 = pcRam00010040 + 1;
            in_IF = 0;
            (*(code *)*(undefined2 *)0x42)();
            iVar23 = *(int *)0x3;
            pcVar18 = pcRam00010024;
            unaff_DS = pcRam00010024 + -1;
            while( true ) {
              pcVar26 = pcVar18 + iVar23;
switchD_1000_9d41_caseD_12:
              bVar43 = *(byte *)0x0 < 0x4d;
              if (*(byte *)0x0 != 0x4d) break;
              pcVar18 = pcVar26 + 1;
              iVar23 = *(int *)0x3;
              unaff_DS = pcVar26;
              if (((code *)*(undefined2 *)0x1 == pcRam00010024) && (pcVar18 != pcRam00010040)) {
                in_IF = 0;
                (*(code *)*(undefined2 *)0x42)();
                pcVar18 = extraout_DX;
              }
            }
            bVar50 = SBORROW2((int)pcRam00010040,1);
            pcRam00010040 = pcRam00010040 + -1;
            bVar49 = (int)pcRam00010040 < 0;
            bVar46 = pcRam00010040 == (code *)0x0;
            bVar45 = (POPCOUNT((uint)pcRam00010040 & 0xff) & 1U) == 0;
            DAT_1000_0292 = &stack0xffc6;
            DAT_1000_0028 = (code *)(*(code *)*(undefined2 *)0x42)();
            puVar33 = DAT_1000_0292;
            puVar29 = (undefined2 *)(DAT_1000_0292 + -2);
            *(uint *)(DAT_1000_0292 + -2) =
                 (uint)(in_NT & 1) * 0x4000 | (uint)(bVar50 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200
                 | (uint)(in_TF & 1) * 0x100 | (uint)(bVar49 & 1) * 0x80 | (uint)(bVar46 & 1) * 0x40
                 | (uint)(in_AF & 1) * 0x10 | (uint)(bVar45 & 1) * 4 | (uint)(bVar43 & 1);
            pcVar26 = pcRam00010024;
            uRam00010026 = *puVar29;
            unaff_DS = (code *)0x1000;
            *(uint *)(puVar33 + -2) =
                 (uint)(in_NT & 1) * 0x4000 | (uint)(bVar50 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200
                 | (uint)(in_TF & 1) * 0x100 | (uint)(bVar49 & 1) * 0x80 | (uint)(bVar46 & 1) * 0x40
                 | (uint)(in_AF & 1) * 0x10 | (uint)(bVar45 & 1) * 4 | (uint)(bVar43 & 1);
            pcVar52 = pcRam00010042;
            *(undefined2 *)(puVar33 + -4) = 0x1000;
            (*pcVar52)();
            (*pcRam00010042)();
            (*pcRam00010042)();
            DAT_1000_0294 = pcVar26 + -1;
            FUN_1000_071d();
            do {
              FUN_1000_0756();
              pcVar26 = pcRam00010024;
              if (DAT_1000_0277 != DAT_1000_0294) {
                pcVar26 = (code *)FUN_1000_0648();
                return pcVar26;
              }
              if (*(uint *)0x3 < DAT_1000_0275) {
                pcVar26 = (code *)FUN_1000_0648();
                return pcVar26;
              }
              if (DAT_1000_0275 != *(uint *)0x3) {
                iVar23 = *(int *)0x3 - DAT_1000_0275;
                pcVar18 = DAT_1000_0294 + DAT_1000_0275 + 1;
                *(undefined1 *)0x0 = *(undefined1 *)0x0;
                *(undefined2 *)0x1 = pcVar26;
                *(int *)0x3 = iVar23 + -1;
              }
              pcVar26 = DAT_1000_0294;
              *(undefined1 *)0x0 = *(undefined1 *)0x272;
              *(undefined2 *)0x1 = *(undefined2 *)0x273;
              *(undefined2 *)0x3 = *(undefined2 *)0x275;
              FUN_1000_0756();
              param_2 = DAT_1000_0294;
              do {
                if (*(char *)0x0 != 'M') {
                  FUN_1000_0ae9();
                  FUN_1000_0ab3();
                  FUN_1000_0e60();
                  FUN_5335_07df();
                  *(undefined2 *)(puRam0001003a + 4) = uRam00010026;
                  DAT_1000_0328 = 0;
                  return DAT_1000_0028;
                }
                param_2 = param_2 + *(int *)0x3 + 1;
                DAT_1000_0294 = param_2;
                if ((code *)*(undefined2 *)0x1 == (code *)0x0) break;
                bVar47 = (code *)*(undefined2 *)0x1 == pcRam00010024;
code_r0x000105e3:
              } while ((!bVar47) || (param_2 == pcRam00010040));
            } while( true );
          }
        } while( true );
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001033d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar26 = (code *)(*(code *)ZEXT24(pcRam00010042))();
    return pcVar26;
  case 8:
    do {
      FUN_2116_11dc();
      FUN_2116_4918();
      pcStack_274 = (code *)0x0;
      FUN_2116_11dc();
      pcStack_274 = (code *)FUN_1576_0000();
      if (pcStack_274 != (code *)0x2a) {
        iStack_264 = 1;
      }
      FUN_2b53_000a();
      FUN_53f7_00b0();
      while( true ) {
        if (iStack_264 != 0) {
          FUN_53f7_00b0();
          FUN_3be6_000c();
          pcVar52 = (code *)swi(0x39);
          (*pcVar52)();
          LOCK();
          uVar48 = (&stack0xcdfa)[(int)pcVar38];
          (&stack0xcdfa)[(int)pcVar38] = (char)((uint)extraout_DX_03 >> 8);
          UNLOCK();
          *(uint *)(&stack0x004e + (int)pcVar38) =
               *(uint *)(&stack0x004e + (int)pcVar38) & CONCAT11(uVar48,(char)extraout_DX_03);
          iVar23 = FUN_1576_03b0();
          if (iVar23 != 0) {
            FUN_53f7_00b0();
          }
          FUN_53f7_00b0();
          FUN_53f7_00b0();
          FUN_53f7_00b0();
          FUN_53f7_00b0();
          FUN_53f7_00b0();
          FUN_53f7_00b0();
          FUN_53f7_00b0();
          FUN_53f7_00b0();
          iStack_238 = 1;
          in_stack_0000ffe2 = 1;
          goto LAB_1129_4324;
        }
        FUN_29ac_000f();
        FUN_1576_0252();
        FUN_2bb2_248b();
        iVar23 = FUN_2bb2_1c60();
        if (iVar23 == 0xd) break;
        iStack_264 = 1;
      }
      FUN_3395_00ab();
      FUN_2116_11dc();
    } while( true );
  case 9:
code_r0x00010000:
    in_BX = (code *)((uint)in_BX ^ 0x53);
    cVar15 = (char)in_BX;
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
    goto switchD_1000_8d0b_caseD_2;
  case 10:
    goto switchD_1000_c554_caseD_a;
  case 0xb:
    *(undefined1 *)0xb99e = 0xff;
    return (code *)0xffff;
  case 0xc:
    func_0x000f08e9();
    pcVar52 = (code *)swi(0);
    (*pcVar52)();
    iVar23 = extraout_DX_08;
    do {
      if (iVar23 < 0) {
        pbVar41 = (byte *)(*(int *)0xb98c + -2);
        if (*(int *)0xb992 != *(int *)0xb994) {
          for (uVar21 = (uint)((int)pcVar38 - *(int *)0xb992) >> 1; pcVar38 = pcVar38 + -2,
              uVar21 != 0; uVar21 = uVar21 - 1) {
            pbVar6 = pbVar41;
            pbVar41 = pbVar41 + -2;
            *(int *)pbVar6 = *(int *)pcVar38;
          }
          bVar47 = bVar47 != false;
        }
        *(undefined2 *)0xb992 = pbVar41;
        *(undefined2 *)0xb994 = pbVar41;
        if (((byte *)0xfffd < pbVar41) ||
           (pbVar34 = pbVar41 + 2, (byte *)*(undefined2 *)0xb92e <= pbVar41 + 2)) {
          pbVar34 = pbVar41;
        }
        *(undefined2 *)0xb998 = pbVar34;
        if (pbVar34 != (byte *)*(undefined2 *)0xb992) {
switchD_1000_8d0b_caseD_1:
          pbVar41 = (byte *)*(undefined2 *)0xb98c;
          if (((pbVar41 != pbVar34) && (pbVar41 + -2 < (byte *)*(undefined2 *)0xb92e)) &&
             (*(int *)(pbVar34 + 2) == *(int *)(pbVar41 + 2))) {
            FUN_1a22_14ac();
          }
        }
        pcVar26 = (code *)*(int *)0xb996;
        pcVar18 = (code *)*(int *)0xb990;
        bVar44 = pcVar26 == pcVar18;
        if (!bVar44) goto LAB_1a22_166b;
LAB_1a22_1690:
        pcVar26 = (code *)*(int *)0xb998;
        if (pcVar26 == (code *)*(int *)0xb994) {
          return pcVar26;
        }
LAB_1a22_169c:
        FUN_1a22_15aa();
      }
      else {
        pcVar18 = (code *)*(int *)0xb990;
        bVar44 = (code *)*(int *)0xb98c == pcVar18;
        pcVar26 = (code *)*(int *)0xb98c;
        if (bVar44) {
          pcVar18 = (code *)*(int *)0xb930;
          *(int *)0xb990 = (int)pcVar18;
          pcVar26 = pcVar18;
        }
        *(int *)0xb996 = (int)pcVar26;
LAB_1a22_166b:
        *(int *)0xb98e = (int)pcVar18;
        if (bVar44) {
          pcVar26 = (code *)*(int *)0xb992;
          if (pcVar26 == (code *)*(int *)0xb994) goto LAB_1a22_1690;
          *(int *)0xb992 = *(int *)0xb992 + -2;
          *(int *)0xb998 = (int)pcVar26;
          goto LAB_1a22_169c;
        }
      }
      *(undefined2 *)0xb98a = pcVar26;
      *(undefined2 *)0xb99a = *(undefined2 *)pcVar26;
      *(int *)0xb99a = *(int *)0xb99a + -1;
      *(undefined2 *)0xb98c = pcVar26 + 4;
      do {
        piVar37 = (int *)(*(int *)0xb98c + 2 + (uint)bVar47 * -4);
        iVar23 = *piVar37;
        *(undefined2 *)0xb98c =
             piVar37 + (uint)bVar47 * -2 +
                       (uint)bVar47 * -2 + (uint)bVar47 * -2 + (uint)bVar47 * -2 + 4;
        if (iVar23 != 0) {
          pcVar26 = (code *)FUN_1000_0e43();
          return pcVar26;
        }
        pcVar38 = (code *)*(undefined2 *)0xb98a;
        iVar23 = *(int *)(pcVar38 + 2);
        piVar1 = (int *)0xb99a;
        *piVar1 = *piVar1 + -1;
      } while (-1 < *piVar1);
    } while( true );
  case 0xd:
    goto LAB_1a22_24b6;
  case 0xe:
switchD_1000_9d41_caseD_1:
    return unaff_DI;
  case 0xf:
switchD_1000_9d41_caseD_2:
    do {
      FUN_36b0_3190();
      FUN_3678_01b4();
      while (iVar23 = FUN_36b0_0096(), iVar23 == 0) {
        FUN_1576_1178();
      }
      FUN_36b0_3190();
      FUN_3678_01b4();
      while (iVar23 = FUN_36b0_0096(), iVar23 == 0) {
        FUN_1576_1178();
      }
      FUN_36b0_105e();
      *(undefined2 *)0x3acc = 0x2d;
      FUN_2b53_000a();
      *(undefined2 *)0xc8cc = 0xffff;
      pcStack_274 = (code *)0xffff;
      FUN_36b0_50ec();
      FUN_3678_01b4();
      do {
        uVar20 = 0x1576;
        FUN_1576_0252();
        do {
          while( true ) {
            while( true ) {
              while( true ) {
                if (pcStack_274 == (code *)0x30) {
                  FUN_2b53_000a();
                  *(undefined2 *)0xc8cc = 0xffff;
                  pcStack_274 = (code *)0xffff;
                  FUN_1576_0252();
                  goto LAB_1129_4324;
                }
                if (*(int *)0xc8cc == -1) {
                  uStack_82 = 0xfb0;
                  uStack_86 = 0x49bc;
                  uStack_84 = uVar20;
                  FUN_53f7_00bc();
                  FUN_2b01_000b();
                }
                uVar20 = 0x1576;
                pcStack_274 = (code *)FUN_1576_0000();
                if (pcStack_274 != (code *)0x1b) break;
                uVar20 = 14000;
                FUN_36b0_1c8c();
                if (*(int *)0xc8d4 == 1) {
                  uVar20 = 0x2b53;
                  FUN_2b53_000a();
                  *(undefined2 *)0xc8d4 = 0xffff;
                }
              }
              if (pcStack_274 != (code *)0x31) break;
              uVar20 = 0x1576;
              iVar23 = FUN_1576_07f4();
              if (iVar23 == 0) {
                uVar20 = 14000;
                FUN_36b0_3190();
                *(undefined2 *)0x3acc = 0x33;
              }
            }
            if (pcStack_274 != (code *)0x32) break;
            iVar23 = FUN_1576_07f4();
            if (iVar23 == 0) {
              FUN_1576_0252();
              FUN_36b0_3190();
              FUN_3678_01b4();
              FUN_3be6_000c();
              pcVar52 = (code *)swi(0x39);
              (*pcVar52)();
              LOCK();
              cVar16 = (pcVar22 + (int)pcVar38)[-0x3203];
              (pcVar22 + (int)pcVar38)[-0x3203] = SUB21((uint)pcVar22 >> 8,0);
              pcVar22 = (code *)CONCAT11(cVar16,(char)pcVar22);
              UNLOCK();
              *(uint *)(&stack0x004e + (int)pcVar38) =
                   *(uint *)(&stack0x004e + (int)pcVar38) & extraout_DX_04;
              iVar23 = FUN_1576_03b0();
              if (iVar23 != 0) {
                FUN_1576_1178();
                    /* WARNING: Subroutine does not return */
                FUN_36b0_2920();
              }
            }
            uVar20 = 0x1576;
            FUN_1576_0252();
          }
        } while (pcStack_274 != (code *)0x39);
        FUN_1576_0252();
        iStack_264 = 0;
        while (((iStack_264 < 0x50 &&
                (pcStack_274 = (code *)FUN_1576_0000(), pcStack_274 != (code *)0xd)) &&
               (pcStack_274 != (code *)0x1b))) {
          puVar33 = auStack_2c6 + iStack_264;
          iStack_264 = iStack_264 + 1;
          *puVar33 = (char)pcStack_274;
        }
        pcVar22 = (code *)(auStack_2c6 + iStack_264);
        *pcVar22 = (code)0x0;
        iVar23 = FUN_2116_2f06();
      } while (iVar23 != 0);
      FUN_36b0_50ec();
      FUN_3678_01b4();
      FUN_1576_0252();
      uVar20 = 0x2b53;
      FUN_2b53_000a();
      *(undefined2 *)0xc8cc = 0xffff;
      while (pcStack_274 != (code *)0x30) {
        if (*(int *)0xc8cc == -1) {
          uStack_82 = 0x1098;
          uStack_86 = 0x4c62;
          uStack_84 = uVar20;
          FUN_53f7_00bc();
          FUN_2b01_000b();
        }
        uVar20 = 0x1576;
        pcVar26 = (code *)FUN_1576_0000();
        pcStack_274 = pcVar26;
LAB_1129_3d7a:
        if (pcVar26 == (code *)0x1b) {
          uVar20 = 14000;
          FUN_36b0_1c8c();
          if (*(int *)0xc8d4 == 1) {
            uVar20 = 0x2b53;
            FUN_2b53_000a();
            *(undefined2 *)0xc8d4 = 0xffff;
          }
        }
        else if (pcVar26 == (code *)0x31) {
          FUN_1576_0252();
          FUN_36b0_00da();
          uStack_242 = uStack_242 & 0xfff3;
          FUN_36b0_010a();
          FUN_3678_01b4();
          pcVar52 = (code *)swi(0x3c);
          (*pcVar52)();
          pcVar52 = (code *)swi(0x39);
          (*pcVar52)();
          pcVar52 = (code *)swi(0x3d);
          (*pcVar52)();
          FUN_36b0_0ac4();
          FUN_36b0_010a();
          FUN_3678_01b4();
          while (iVar23 = FUN_36b0_0096(), iVar23 == 0) {
            FUN_1576_1178();
          }
          FUN_1576_0252();
          FUN_36b0_3190();
          FUN_3678_01b4();
          while (iVar23 = FUN_36b0_0096(), iVar23 == 0) {
            FUN_1576_1178();
          }
          FUN_36b0_3190();
          FUN_3678_01b4();
          while (iVar23 = FUN_36b0_0096(), iVar23 == 0) {
            FUN_1576_1178();
          }
          FUN_36b0_3190();
          FUN_3678_01b4();
          while (iVar23 = FUN_36b0_0096(), iVar23 == 0) {
            FUN_1576_1178();
          }
          FUN_36b0_105e();
          *(undefined2 *)0x3acc = 0x35;
          uVar20 = 0x1576;
          FUN_1576_0252();
          in_stack_0000ffca = unaff_DS;
        }
        else if (pcVar26 == (code *)0x33) {
          FUN_1576_0252();
          FUN_53f7_0110();
          uVar20 = 0x1576;
          FUN_1576_0252();
        }
        else if (pcVar26 == (code *)0x34) {
          FUN_36b0_105e();
          *(undefined2 *)0x3acc = 0x35;
          uVar20 = 0x1576;
          FUN_1576_0252();
        }
        else if (pcVar26 == (code *)0x35) {
          FUN_36b0_3190();
          FUN_3678_01b4();
          while (iVar23 = FUN_36b0_0096(), iVar23 == 0) {
            FUN_1576_1178();
          }
LAB_1129_3c78:
          FUN_36b0_3190();
          FUN_3678_01b4();
          while (iVar23 = FUN_36b0_0096(), iVar23 == 0) {
            FUN_1576_1178();
          }
          FUN_36b0_3190();
          FUN_3678_01b4();
          while (iVar23 = FUN_36b0_0096(), iVar23 == 0) {
            FUN_1576_1178();
          }
          FUN_36b0_105e();
          *(undefined2 *)0x3acc = 0xf;
          uVar20 = 0x1576;
          FUN_1576_0252();
        }
        else {
          if (pcVar26 == (code *)0x37) goto LAB_1129_3c78;
          if (pcVar26 == (code *)0x39) {
            FUN_1576_0252();
            FUN_53f7_011c();
            FUN_1576_0252();
            FUN_36b0_105e();
            *(undefined2 *)0x3acc = 0x35;
            uVar20 = 0x1576;
            FUN_1576_0252();
          }
        }
      }
    } while( true );
  case 0x10:
    return in_BX;
  case 0x11:
    if (in_CX == (code *)0x1) {
      FUN_2b01_000b();
      pcVar26 = extraout_DX_07;
    }
    uVar21 = *(uint *)0xb1bc;
    if (5 < uVar21) {
      if ((*(uint *)0xc8e6 >> 9 & 1) == 0) {
        FUN_2b01_000b();
        *(undefined2 *)0x13d0 = 0;
        *(undefined2 *)0x13d2 = 0;
      }
      if ((*(int *)0x18e8 != *(int *)0x3acc) ||
         ((*(uint *)0xb1b8 >> 9 & 1) != (*(uint *)0xc8e6 >> 9 & 1))) {
        iStack_164 = *(int *)0x3acc / 10 + -1;
        iVar23 = *(int *)0x3acc % 10;
        if ((iStack_164 == 0) || (iStack_164 == 1)) {
          if (iStack_164 == 0) {
            FUN_2116_2eca();
          }
          else {
            FUN_2116_2eca();
          }
          if (iVar23 == 1) {
            FUN_2116_2e76();
            FUN_2b01_000b();
            FUN_2b01_000b();
          }
          else if (iVar23 == 2) {
            FUN_2116_2e76();
            FUN_2b01_000b();
            FUN_2b01_000b();
          }
          else if (iVar23 == 3) {
            FUN_2116_2e76();
            FUN_2b01_000b();
            FUN_2b01_000b();
          }
          else if (iVar23 == 4) {
            FUN_2116_2e76();
            FUN_2b01_000b();
            FUN_2b01_000b();
          }
          else if (iVar23 == 5) {
            FUN_2116_2e76();
            FUN_2b01_000b();
            FUN_2b01_000b();
          }
        }
        else if (iStack_164 == 3) {
          if ((*(uint *)0xc8e6 >> 9 & 1) == 0) {
            FUN_2b01_000b();
          }
          else {
            FUN_2b01_000b();
          }
          FUN_2b01_000b();
        }
        else if (iStack_164 == 4) {
          if (iVar23 == 1) {
            FUN_2b01_000b();
            FUN_2b01_000b();
          }
          else if (iVar23 == 3) {
            FUN_2b01_000b();
            FUN_2b01_000b();
          }
        }
        *(undefined2 *)0x18e8 = *(undefined2 *)0x3acc;
      }
      if (((*(uint *)0xb1b6 >> 0xe & 1) != (*(uint *)0xc8e4 >> 0xe & 1)) ||
         ((*(uint *)0xb1b6 >> 0xd & 1) != (*(uint *)0xc8e4 >> 0xd & 1))) {
        uStack_16a = 0;
        FUN_2b01_000b();
        if (((*(uint *)0xc8e4 >> 0xe & 1) == 0) && ((*(uint *)0xc8e4 >> 0xd & 1) == 0)) {
          FUN_2b01_000b();
        }
        else {
          if ((*(uint *)0xc8e4 >> 0xe & 1) != 0) {
            FUN_2b01_006c();
          }
          if ((*(uint *)0xc8e4 >> 0xd & 1) != 0) {
            FUN_2b01_006c();
          }
          uStack_16a = 1;
        }
      }
      if ((*(uint *)0xb1b8 & 1) != (*(uint *)0xc8e6 & 1)) {
        if ((*(uint *)0xc8e6 & 1) == 0) {
          FUN_2b01_000b();
        }
        else {
          FUN_2b01_000b();
        }
      }
      if ((*(uint *)0xb1b8 >> 1 & 1) != (*(uint *)0xc8e6 >> 1 & 1)) {
        if ((*(uint *)0xc8e6 >> 1 & 1) == 0) {
          FUN_2b01_000b();
        }
        else {
          FUN_2b01_000b();
        }
      }
      if ((((*(uint *)0xb1b6 >> 9 & 1) != (*(uint *)0xc8e4 >> 9 & 1)) ||
          ((*(uint *)0xb1b6 >> 10 & 1) != (*(uint *)0xc8e4 >> 10 & 1))) ||
         ((*(uint *)0xb1b6 >> 6 & 1) != (*(uint *)0xc8e4 >> 6 & 1))) {
        if ((((*(uint *)0xc8e4 >> 10 & 1) == 0) && ((*(uint *)0xc8e4 >> 9 & 1) == 0)) &&
           ((*(uint *)0xc8e4 >> 6 & 1) == 0)) {
          FUN_2b01_000b();
        }
        else if ((*(uint *)0xc8e4 >> 9 & 1) == 0) {
          if (((*(uint *)0xc8e4 >> 10 & 1) != 0) || ((*(uint *)0xc8e4 >> 6 & 1) != 0)) {
            FUN_2b01_000b();
          }
        }
        else {
          FUN_2b01_000b();
          if (((*(uint *)0xc8e4 >> 10 & 1) != 0) || ((*(uint *)0xc8e4 >> 6 & 1) != 0)) {
            FUN_2b01_000b();
          }
        }
      }
      if ((*(uint *)0xb1b8 >> 2 & 1) != (*(uint *)0xc8e6 >> 2 & 1)) {
        if ((*(uint *)0xc8e6 >> 2 & 1) == 1) {
          FUN_2b01_006c();
        }
        else {
          FUN_2b01_006c();
        }
      }
      if ((*(int *)0x13cc != 0) || ((*(uint *)0xb1b8 >> 3 & 1) != (*(uint *)0xc8e6 >> 3 & 1))) {
        if ((*(uint *)0xc8e6 >> 3 & 1) == 1) {
          FUN_2b01_006c();
        }
        else {
          FUN_2b01_006c();
        }
      }
      if ((*(int *)0x13cc != 0) || (*(uint *)0xb1b8 >> 0xf != *(uint *)0xc8e6 >> 0xf)) {
        if (*(int *)0xc8e6 < 0) {
          FUN_2b01_000b();
        }
        else {
          FUN_2b01_000b();
        }
      }
      if ((*(int *)0x13cc != 0) || ((*(uint *)0xb1b8 >> 10 & 1) != (*(uint *)0xc8e6 >> 10 & 1))) {
        if ((*(uint *)0xc8e6 >> 10 & 1) == 1) {
          FUN_2b01_006c();
        }
        else {
          FUN_2b01_000b();
          *(undefined1 *)0xb162 = 0;
        }
      }
      if ((*(int *)0x13cc != 0) || ((*(uint *)0xb1b8 >> 0xe & 1) != (*(uint *)0xc8e6 >> 0xe & 1))) {
        if ((*(uint *)0xc8e6 >> 0xe & 1) == 1) {
          FUN_2b01_006c();
        }
        else {
          FUN_2b01_006c();
        }
      }
      if (((*(int *)0x13cc != 0) || ((*(uint *)0xc8e4 >> 8 & 1) != (*(uint *)0xb1b6 >> 8 & 1))) ||
         ((*(uint *)0xb1b8 >> 0xd & 1) != (*(uint *)0xc8e6 >> 0xd & 1))) {
        FUN_2116_3588();
        uStack_16e = FUN_29f2_011d();
        if (uStack_16e == 0) {
          FUN_36b0_1238();
        }
        else {
          FUN_2116_1024();
          FUN_3da5_0006();
          if (pbVar34 == (byte *)0x1) {
            if ((*(uint *)0xc8e4 >> 8 & 1) == 0) {
              FUN_36b0_1238();
            }
            else {
              FUN_36b0_1238();
            }
          }
          else {
            FUN_36b0_1238();
          }
        }
        if ((*(uint *)0xc8e6 >> 0xd & 1) == 0) {
          FUN_2b01_000b();
        }
        else {
          FUN_2b01_006c();
        }
      }
      pcVar26 = (code *)FUN_36b0_32ba();
      if (pcVar26 == (code *)0x1) {
        if (*(int *)0xc8d4 == 1) {
          FUN_29de_00b8();
        }
        else {
          *(undefined2 *)0xc8d4 = 1;
          uStack_188 = *(undefined2 *)0x9106;
          uVar20 = FUN_3395_00ab();
          *(undefined2 *)0xcae4 = uVar20;
          FUN_2fa2_0006();
        }
        if (acStack_162[0] == '\0') {
          pcVar26 = (code *)0x0;
        }
        else {
          FUN_2b01_006c();
          FUN_2116_3baa();
          iVar23 = FUN_2116_3a84();
          _iStack_168 = CONCAT22(unaff_SS,iVar23);
          if (*(int *)(iVar23 + 4) < 0xc) {
            FUN_2116_2eca();
          }
          else {
            FUN_2116_2eca();
          }
          uVar20 = (undefined2)((ulong)_iStack_168 >> 0x10);
          if (0xc < *(int *)((int)_iStack_168 + 4)) {
            piVar1 = (int *)((int)_iStack_168 + 4);
            *piVar1 = *piVar1 + -0xc;
          }
          FUN_2116_3874();
          FUN_2116_3588();
          FUN_29ac_000f();
          iStack_18a = 0;
          for (iStack_5e = 0xb; acStack_186[iStack_5e] != '\0'; iStack_5e = iStack_5e + 1) {
            (&stack0xffb6)[iStack_18a] = acStack_186[iStack_5e];
            iStack_18a = iStack_18a + 1;
          }
          iStack_5e = 0;
          for (iStack_18a = iStack_18a + -2;
              ((acStack_162[iStack_5e] != '\0' && (acStack_162[iStack_5e] != '\r')) &&
              (iStack_18a < 0x3e)); iStack_18a = iStack_18a + 1) {
            (&stack0xffb6)[iStack_18a] = acStack_162[iStack_5e];
            iStack_5e = iStack_5e + 1;
          }
          (&stack0xffb6)[iStack_18a] = 0;
          pcVar26 = (code *)FUN_2b01_000b();
        }
      }
      return pcVar26;
    }
    bVar44 = (int)uVar21 < 0;
    in_BX = (code *)(uVar21 * 2);
    pcVar22 = in_BX;
    switch(uVar21) {
    case 0:
      goto switchD_1000_8d0b_caseD_0;
    default:
      goto switchD_1000_8d0b_caseD_1;
    case 2:
switchD_1000_8d0b_caseD_2:
      cVar15 = (char)in_BX;
      pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
      pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
      pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
      pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
      pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
      pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
      pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
      pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
      pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
      pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
      pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
      pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
      pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
      pcVar22[(int)pcVar38] = (code)((char)pcVar22[(int)pcVar38] + cVar15);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 4:
      goto code_r0x00010000;
    case 5:
      auStack_92[(int)in_BX] = 0xe8;
      (&stack0xffb4)[iStack_7e] = 0xf8;
      auStack_92[iStack_7e + 1] = 0xe9;
      (&stack0xffb5)[iStack_7e] = 0xf9;
      pcVar18 = (code *)(iStack_7e + 2);
      do {
        unaff_DI = unaff_DI + 1;
        if (9 < (int)unaff_DI) {
          auStack_92[(int)pcVar18] = 0;
          (&stack0xffb4)[(int)pcVar18] = 0;
          if (param_1 == (code *)0x1) {
            uStack_aa = 0x90;
            uStack_a9 = 0x91;
            uStack_a8 = 0x20;
            uStack_a7 = 0;
            FUN_2116_2e76();
            FUN_2116_2e76();
            FUN_2b01_000b();
            pcVar18 = (code *)FUN_2b01_000b();
          }
          if (param_1 == (code *)0x2) {
            FUN_2116_2e76();
            FUN_2116_2e76();
            FUN_2b01_000b();
            pcVar18 = (code *)FUN_2b01_000b();
          }
          if (param_1 == (code *)0x3) {
            uStack_c2 = 0x84;
            uStack_c1 = 0x85;
            uStack_c0 = 0x20;
            uStack_bf = 0;
            FUN_2116_2e76();
            FUN_2116_2e76();
            FUN_2b01_000b();
            pcVar18 = (code *)FUN_2b01_000b();
          }
          return pcVar18;
        }
        in_stack_0000ffca = (code *)(int)(char)param_2[(int)unaff_DI];
        pcVar32 = in_stack_0000ffca + -0x20;
      } while ((code *)0x19 < pcVar32);
    }
    break;
  case 0x12:
switchD_1000_8d0b_caseD_0:
    if (bVar44 || pcVar22 == (code *)0x0) goto code_r0x000152f1;
code_r0x000152dc:
    if (in_BX == (code *)0x0) {
      FUN_1576_1178();
                    /* WARNING: Subroutine does not return */
      FUN_36b0_2920();
    }
    FUN_1576_1178();
code_r0x000152f1:
                    /* WARNING: Subroutine does not return */
    FUN_36b0_2920();
  case 0x13:
    goto switchD_1000_8d0b_caseD_1;
  case 0x14:
    bVar47 = true;
    goto code_r0x000105e3;
  case 0x15:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in_BX = (code *)((int)pcVar32 * 2);
  pcVar52 = (code *)CONCAT22(pcVar26,in_BX);
  uVar20 = 0x1000;
  cVar15 = (char)in_BX;
  pcVar25 = param_3;
  pcVar18 = in_BX;
  pcVar22 = in_BX;
  puVar13 = &stack0xfffe;
  switch(pcVar32) {
  case (code *)0x0:
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
                    /* WARNING: Subroutine does not return */
    FUN_2116_0a38();
  case (code *)0x1:
    goto switchD_1000_9d41_caseD_1;
  case (code *)0x2:
  case (code *)0x18:
    goto switchD_1000_9d41_caseD_2;
  default:
    do {
      if (in_BX == *(code **)pbVar34) {
        *(int *)(pcVar38 + 2) =
             *(int *)(pcVar38 + 2) +
             (*(int *)(pcVar38 + 2) - *(int *)(pbVar34 + 2) &
             *(int *)(pcVar38 + 2) - *(int *)(pbVar34 + 2) >> 0xf);
LAB_1a22_1541:
        pbVar34 = pbVar34 + -10;
        pcVar25 = pcVar25 + -1;
        pcVar26 = pcVar38;
        if (pcVar25 == (code *)0x0) {
          if (local_8 != 0) {
            pcVar38 = pcVar38 + (local_8 - 1) * -10;
          }
          pcVar26 = pcVar38 + -4;
LAB_1a22_1557:
          *(code **)pcVar26 = local_4 + local_8;
          *(int *)(pcVar26 + 2) = 0;
          *(undefined2 *)0xb998 = pcVar26;
          *(undefined2 *)0xb992 = pcVar26 + -2;
          *(undefined2 *)0xb994 = pcVar26 + -2;
          return (code *)0x0;
        }
      }
      else {
        if (*(code **)pbVar34 < in_BX) {
          if ((code *)(*(int *)pbVar34 + *(int *)(pbVar34 + 2)) < in_BX) {
            iVar23 = *(int *)(pbVar34 + 8);
            iVar19 = *(int *)(pbVar34 + 6);
            iVar9 = *(int *)(pbVar34 + 4);
            iVar10 = *(int *)(pbVar34 + 2);
            iVar11 = *(int *)pbVar34;
            pcVar32 = pcVar18 + -10;
            pcVar26 = pcVar32;
            for (uVar21 = (uint)(pcVar38 + (10 - (int)pcVar18)) >> 1; uVar21 != 0;
                uVar21 = uVar21 - 1) {
              pcVar5 = pcVar26;
              pcVar26 = pcVar26 + 2;
              pcVar52 = pcVar18;
              pcVar18 = pcVar18 + 2;
              *(int *)pcVar5 = *(int *)pcVar52;
            }
            pcVar38 = pcVar18 + -0x14;
            *(int *)pcVar26 = iVar11;
            *(int *)(pcVar26 + 2) = iVar10;
            *(int *)(pcVar26 + 4) = iVar9;
            *(int *)(pcVar26 + 6) = iVar19;
            *(int *)(pcVar26 + 8) = iVar23;
            local_4 = local_4 + 1;
            pcVar18 = pcVar32;
          }
          else {
            iVar23 = *(int *)pbVar34;
            *(int *)(pcVar38 + 2) = *(int *)(pcVar38 + 2) + ((int)in_BX - iVar23);
            *(int *)pcVar38 = *(int *)pcVar38 - ((int)in_BX - iVar23);
          }
          goto LAB_1a22_1541;
        }
        uVar21 = (int)(in_BX + *(int *)(pcVar38 + 2)) - *(int *)pbVar34;
        if (*(code **)pbVar34 <= in_BX + *(int *)(pcVar38 + 2) && uVar21 != 0) {
          if (uVar21 < *(uint *)(pbVar34 + 2)) {
            *(uint *)(pcVar38 + 2) = *(int *)(pcVar38 + 2) - (uVar21 - *(uint *)(pbVar34 + 2));
          }
          goto LAB_1a22_1541;
        }
        pcVar26 = pcVar38 + -10;
        local_4 = local_4 + 1;
        local_8 = local_8 - 1;
        if (local_8 == 0) {
          pcVar26 = pcVar38 + -4;
          local_8 = 0;
          if (pcVar25 != (code *)0x0) {
            local_4 = local_4 + (int)pcVar25;
            pbVar34 = pbVar34 + 8;
            for (iVar23 = (int)pcVar25 * 5; iVar23 != 0; iVar23 = iVar23 + -1) {
              pbVar6 = pbVar34;
              pbVar34 = pbVar34 + -2;
              *(int *)(pcVar38 + -2) = *(int *)pbVar6;
              pcVar38 = pcVar38 + -2;
            }
            pcVar26 = pcVar38 + -4;
            local_8 = 0;
          }
          goto LAB_1a22_1557;
        }
      }
      in_BX = *(code **)pcVar26;
      pcVar38 = pcVar26;
    } while( true );
  case (code *)0x4:
  case (code *)0xc:
    puVar33 = &stack0xfffe;
    do {
      uVar48 = (undefined1)((uint)in_BX >> 8);
      bVar43 = ~(byte)pcVar18 ^ (byte)pcVar26;
      bVar47 = (bVar43 >> 1 & 0x55 & bVar43) == 0;
      if (bVar47) {
        puVar33 = puVar33 + 4;
        pbVar34 = pbVar34 + 1;
      }
      else {
        while( true ) {
          do {
            pcVar52 = (code *)FUN_1a22_5a7c();
            uVar48 = (undefined1)((ulong)pcVar52 >> 8);
            if (bVar47) goto LAB_1a22_5bfd;
            bVar44 = pbVar34 < (byte *)*(undefined2 *)0xb9da;
            puVar13 = puVar33;
            if (pbVar34 == (byte *)*(undefined2 *)0xb9da) {
switchD_1000_9d41_caseD_16:
              puVar33 = puVar13;
              uVar48 = (undefined1)((ulong)pcVar52 >> 8);
              bVar43 = *(byte *)0xb9e3;
              bVar45 = (byte)((uint)pcVar25 >> 8);
              bVar44 = bVar45 < bVar43;
              if (bVar45 == bVar43) goto LAB_1a22_5bfd;
              if (bVar45 <= bVar43) {
                puVar33 = (undefined1 *)0x0;
                goto LAB_1a22_5bfd;
              }
            }
            pcVar26 = (code *)((ulong)pcVar52 >> 0x10);
            pcVar32 = (code *)pcVar52;
            bVar47 = false;
            bVar43 = (byte)pcVar25 & 7;
            uVar21 = (uint)pcVar25 & 0x1f;
            bVar45 = (byte)((uint)pcVar25 >> 8);
            bVar43 = bVar45 >> bVar43 | bVar45 << 8 - bVar43;
            pcVar25 = (code *)CONCAT11(bVar43,(byte)pcVar25);
            bVar12 = uVar21 != 0;
          } while (!(bool)(!bVar12 & bVar44 | (bVar12 && (char)bVar43 < '\0')));
          pbVar34 = pbVar34 + 1;
          if (*(char *)0x8ec2 == '\x02') break;
          while( true ) {
            uVar48 = (undefined1)((uint)pcVar32 >> 8);
            bVar45 = (byte)((uint)pcVar18 >> 8);
            pcVar18 = (code *)CONCAT11(bVar45,*pbVar34);
            pbVar41 = (byte *)*(undefined2 *)0xb9da;
            bVar43 = pbVar41 < pbVar34;
            bVar47 = pbVar41 == pbVar34;
            if (pbVar41 <= pbVar34) goto LAB_1a22_5bd5;
            bVar43 = ~*pbVar34 ^ (byte)((ulong)pcVar52 >> 0x10);
            pcVar32 = (code *)CONCAT11(uVar48,bVar43);
            bVar47 = bVar43 == 0;
            if (!bVar47) break;
            pcVar18 = (code *)((uint)bVar45 << 8);
            puVar33 = puVar33 + 8;
            pbVar34 = pbVar34 + 1;
          }
        }
        uVar48 = (undefined1)((ulong)pcVar52 >> 8);
      }
      in_BX = (code *)((uint)pcVar18 & 0xff00);
      pcVar18 = (code *)CONCAT11(uVar48,*pbVar34);
switchD_1000_9d41_caseD_6:
      uVar48 = (undefined1)((uint)in_BX >> 8);
      pbVar41 = (byte *)*(undefined2 *)0xb9da;
      bVar43 = pbVar41 < pbVar34;
      bVar47 = pbVar41 == pbVar34;
    } while (pbVar34 < pbVar41);
LAB_1a22_5bd5:
    if (bVar47) {
      pcVar25 = (code *)CONCAT11(*(undefined1 *)0x8ec6,(char)pcVar25);
      bVar47 = true;
LAB_1a22_5be4:
      FUN_1a22_5a7c();
      uVar48 = extraout_AH;
      if (!bVar47) {
        bVar45 = (byte)pcVar25;
        uVar21 = (uint)pcVar25 & 0x1f;
        bVar46 = (byte)((uint)pcVar25 >> 8);
        bVar46 = bVar46 >> (bVar45 & 7) | bVar46 << 8 - (bVar45 & 7);
        pcVar25 = (code *)CONCAT11(bVar46,bVar45);
        bVar47 = uVar21 != 0;
        if (!(bool)(!bVar47 & bVar43 | (bVar47 && (char)bVar46 < '\0'))) goto code_r0x0001fe0d;
        goto LAB_1a22_5bfb;
      }
    }
    else {
      bVar45 = (byte)((uint)pcVar25 >> 8);
      bVar43 = *(byte *)0x8ec2 & 7;
      pcVar25 = (code *)CONCAT11(bVar45 << bVar43 | bVar45 >> 8 - bVar43,*(byte *)0x8ec2);
      pbVar34 = pbVar34 + 1;
    }
LAB_1a22_5bfd:
    if (puVar33 != (undefined1 *)0x0) {
      FUN_1a22_5975();
      uVar48 = extraout_AH_00;
    }
    *(undefined2 *)0xb9b4 = pbVar34;
    *(undefined1 *)0xb9b2 = (char)((uint)pcVar25 >> 8);
    return (code *)CONCAT11(uVar48,*(undefined1 *)0xba54);
  case (code *)0x6:
  case (code *)0xe:
    goto switchD_1000_9d41_caseD_6;
  case (code *)0x7:
    *(undefined1 *)0x5e9 = 0;
    if ((*(int *)0xca90 != 0) || (iVar23 = FUN_2116_2f06(), iVar23 != 0)) {
      if (*(int *)0xc8da == 1) {
        FUN_1576_42b6();
      }
      FUN_2b01_000b();
      FUN_2116_2eca();
    }
    if ((*(uint *)0xc8e4 >> 8 & 1) == 0) {
      FUN_2116_2eca();
      if ((*(int *)0xca90 != 0) || (iVar23 = FUN_2116_2f06(), iVar23 != 0)) {
        if (*(int *)0xc8da == 1) {
          FUN_1576_42b6();
        }
        FUN_2b01_000b();
        FUN_2116_2eca();
      }
      if (*(int *)0xca80 == 0) {
        FUN_2116_2eca();
      }
      else if ((*(uint *)0xc8e4 >> 8 & 1) == 0) {
        FUN_2116_2eca();
      }
      else {
        pcVar52 = (code *)swi(0x39);
        uVar48 = (*pcVar52)();
        *(undefined1 *)0xcdb2 = uVar48;
        pcVar52 = (code *)swi(0x39);
        (*pcVar52)();
        pcVar52 = (code *)swi(0x3d);
        (*pcVar52)();
        FUN_2116_3588();
        *(undefined1 *)0x5e9 = 0;
        FUN_2116_2eca();
      }
      if ((*(int *)0xca90 != 0) || (iVar23 = FUN_2116_2f06(), iVar23 != 0)) {
        FUN_2b01_000b();
        FUN_2116_2eca();
      }
      *(undefined2 *)0xca90 = 0;
      iVar23 = FUN_36b0_2574();
      if (iVar23 != 0) {
        uVar20 = *(undefined2 *)0xb180;
        FUN_2116_3588();
        pcVar52 = (code *)swi(0x39);
        (*pcVar52)();
        pcVar52 = (code *)swi(0x39);
        (*pcVar52)();
        pcVar52 = (code *)swi(0x3d);
        (*pcVar52)();
        FUN_2116_3588();
        *(undefined1 *)0x5e9 = 0;
        FUN_2116_2eca();
        pcVar52 = (code *)swi(0x39);
        (*pcVar52)();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar23 = FUN_36b0_086e();
      if (iVar23 == 1) {
        pcVar52 = (code *)swi(0x39);
        (*pcVar52)();
        pcVar52 = (code *)swi(0x39);
        (*pcVar52)();
        pcVar52 = (code *)swi(0x3d);
        (*pcVar52)();
        FUN_2116_3588();
        *(undefined1 *)0x5e4 = 0;
        FUN_2116_2eca();
        pcVar52 = (code *)swi(0x39);
        (*pcVar52)();
        pcVar52 = (code *)swi(0x39);
        (*pcVar52)();
        pcVar52 = (code *)swi(0x3d);
        (*pcVar52)();
        FUN_2116_5406();
        pcVar52 = (code *)swi(0x3c);
        (*pcVar52)();
        pcVar52 = (code *)swi(0x3d);
        (*pcVar52)();
        pcVar52 = (code *)swi(0x39);
        (*pcVar52)();
        pcVar52 = (code *)swi(0x3d);
        (*pcVar52)();
        FUN_2116_3588();
        *(undefined1 *)0x5e4 = 0;
        FUN_2116_2eca();
        pcVar52 = (code *)swi(0x39);
        (*pcVar52)();
        pcVar52 = (code *)swi(0x39);
        (*pcVar52)();
        pcVar52 = (code *)swi(0x3d);
        (*pcVar52)();
        FUN_2116_3588();
        *(undefined1 *)0x5e3 = 0;
        FUN_2116_2eca();
        if (s_Cursor_Up_Dn_for_Feed_Override___6135_5622._24_2_ == 0) {
          FUN_2116_2eca();
        }
        else {
          FUN_2116_2eca();
        }
        FUN_2116_2e76();
        FUN_2116_2e76();
        FUN_2116_2e76();
        FUN_2b01_000b();
        if (iRam0005b20c != 0) {
          FUN_3be6_000c();
          pcVar52 = (code *)swi(0x39);
          (*pcVar52)();
          *(uint *)(&stack0xca8a + (int)pbVar34) =
               *(uint *)(&stack0xca8a + (int)pbVar34) & (uint)&stack0xffc6;
          uRam000668ce = extraout_DX_06;
        }
        if (((uRam000668ce >> 8 & 0xf) == 0) || ((uRam000668ce >> 8 & 0xf) == 2)) {
          if ((((uint)s_SELECT_AXIS_MODE__6135_53d3._3_2_ >> 9 & 1) != 0) &&
             ((FUN_36b0_5166(), uRam0005b214 != uRam0005b210 || (iRam0005b216 != iRam0005b212)))) {
            uRam0005b210 = uRam0005b214;
            iRam0005b212 = iRam0005b216;
            if ((iRam0005b216 < 0) || ((iRam0005b216 < 1 && (uRam0005b214 < 2)))) {
              FUN_2b01_000b();
            }
            else {
              FUN_2b01_000b();
            }
          }
        }
        else if (((uint)s_SELECT_AXIS_MODE__6135_53d3._3_2_ >> 9 & 1) != 0) {
          pcVar52 = (code *)swi(0x39);
          (*pcVar52)();
          pcVar52 = (code *)swi(0x39);
          (*pcVar52)();
          bVar47 = false;
          FUN_2116_531b();
          if (bVar47) {
            pcVar52 = (code *)swi(0x39);
            (*pcVar52)();
            pcVar52 = (code *)swi(0x39);
            (*pcVar52)();
          }
          pcVar52 = (code *)swi(0x39);
          (*pcVar52)();
          pcVar52 = (code *)swi(0x39);
          (*pcVar52)();
          pcVar52 = (code *)swi(0x3d);
          (*pcVar52)();
          FUN_2116_3588();
          pcVar52 = (code *)swi(0x39);
          (*pcVar52)();
          bVar47 = false;
          bVar44 = extraout_DH_01 == '\0' && (&stack0x3dcb)[(int)pbVar34] == '\0';
          FUN_2116_531b();
          if (bVar47 || bVar44) {
            FUN_2b01_000b();
          }
          else {
            FUN_2b01_006c();
          }
        }
      }
      iVar23 = FUN_36b0_069a();
      if (iVar23 != 1) {
        FUN_1576_0fc4();
        return (code *)0x0;
      }
      pcVar52 = (code *)swi(0x39);
      (*pcVar52)();
    }
    else {
      pcVar52 = (code *)swi(0x39);
      (*pcVar52)();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (code *)0x8:
    pcVar38 = (code *)0xfdb0;
    *(char *)0xfdb3 = *(char *)0xfdb3 + '\x01';
    goto code_r0x00011616;
  case (code *)0x9:
  case (code *)0x11:
    FUN_2b01_000b();
    FUN_2116_2eca();
    FUN_2b01_000b();
    FUN_2116_2eca();
    FUN_2b01_000b();
    FUN_2116_2eca();
    FUN_2b01_000b();
    FUN_2116_2eca();
    pcVar26 = (code *)FUN_2b01_000b();
    return pcVar26;
  case (code *)0xa:
    do {
      (*(code *)*(undefined2 *)0x42)();
      pbVar34 = (byte *)0x322;
      while( true ) {
        *pbVar34 = *pbVar34 + 1;
        bVar47 = *pbVar34 < 0x39;
        if (*pbVar34 < 0x3a) break;
        *pbVar34 = 0x30;
        pbVar34 = pbVar34 + -1;
        if (pbVar34 < (byte *)0x31b) goto LAB_1000_0b16;
      }
      puVar27 = (undefined2 *)0x31b;
      puVar40 = DAT_1000_0296;
      for (iVar23 = 7; iVar23 != 0; iVar23 = iVar23 + -1) {
        puVar4 = puVar40;
        puVar40 = puVar40 + 1;
        puVar2 = puVar27;
        puVar27 = puVar27 + 1;
        *puVar4 = *puVar2;
      }
      (*(code *)*(undefined2 *)0x42)();
    } while (!bVar47);
    bVar47 = false;
    uVar20 = (*(code *)*(undefined2 *)0x42)();
    if (bVar47) goto LAB_1000_0b16;
    uRam0001003e = uVar20;
    (*(code *)*(undefined2 *)0x42)();
    bVar47 = false;
    (*(code *)*(undefined2 *)0x42)();
    if (!bVar47) {
      pcVar26 = (code *)(*(code *)*(undefined2 *)0x42)();
      return pcVar26;
    }
    break;
  case (code *)0xf:
    if (in_BX == (code *)0x0) {
LAB_1129_4324:
      if (iStack_2cc != 0) {
        FUN_2116_3588();
        uStack_234 = FUN_29f2_011d();
        if (uStack_234 != 0) {
          for (iStack_264 = 0; iStack_264 < 8; iStack_264 = iStack_264 + 1) {
            FUN_2116_0e70();
          }
          FUN_3da5_0006();
        }
                    /* WARNING: Subroutine does not return */
        FUN_36b0_2920();
      }
      if (iStack_236 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_36b0_2920();
      }
      if (iStack_238 == 0) {
        iVar23 = FUN_2116_49d4();
        if (iVar23 != 0) {
          FUN_2116_3588();
          FUN_2116_4a3e();
          FUN_2116_49fd();
          FUN_2116_3588();
          iVar23 = unaff_SS;
          iVar19 = FUN_2116_0e54();
          if ((iVar19 != 0) || (iVar23 != 0)) {
            FUN_2116_0e70();
            FUN_2116_0e70();
            FUN_3da5_0006();
          }
        }
        iStack_264 = *(int *)0x42;
        if (3 < iStack_264) {
          iStack_264 = 3;
        }
        uStack_24e = FUN_53f7_008c();
        FUN_29ac_000f();
        iVar23 = unaff_SS;
        iVar19 = FUN_2116_4a5a();
        if ((iVar19 != 0) || (iVar23 != 0)) {
          FUN_2ab0_000b();
        }
        FUN_2116_2eca();
        FUN_2116_3588();
        FUN_3be6_000c();
        FUN_3be6_000c();
        pcVar52 = (code *)swi(0x39);
        (*pcVar52)();
        LOCK();
        uVar48 = (&stack0xcdfa)[(int)pcVar38];
        (&stack0xcdfa)[(int)pcVar38] = (char)((uint)extraout_DX_01 >> 8);
        UNLOCK();
        *(uint *)(&stack0x004e + (int)pcVar38) =
             *(uint *)(&stack0x004e + (int)pcVar38) & CONCAT11(uVar48,(char)extraout_DX_01);
        pcVar52 = (code *)swi(0x3c);
        (*pcVar52)();
        pcVar52 = (code *)swi(0x3d);
        (*pcVar52)();
        pcVar52 = (code *)swi(0x39);
        (*pcVar52)();
        pcVar52 = (code *)swi(0x3d);
        (*pcVar52)();
        FUN_2116_3588();
        FUN_53f7_0098();
        if (*(int *)0xca38 == -1) {
          if (*(int *)0x42 == 1) {
            FUN_1576_0252();
          }
        }
        else {
          FUN_1576_0252();
        }
        if (*(int *)0xc8d2 == 1) {
          FUN_2b53_000a();
        }
        uVar20 = FUN_3395_00ab();
        *(undefined2 *)0xcae2 = uVar20;
        *(undefined2 *)0xc8d2 = 1;
        FUN_2989_000d();
        FUN_53f7_00a4();
        *(int *)0x42 = *(int *)0x42 + 1;
        FUN_53f7_00b0();
        FUN_53f7_00b0();
        FUN_53f7_00b0();
        FUN_53f7_00b0();
        FUN_53f7_00b0();
        FUN_53f7_00b0();
        FUN_3be6_000c();
        pcVar52 = (code *)swi(0x39);
        (*pcVar52)();
        LOCK();
        uVar48 = (&stack0xcdfa)[(int)pcVar38];
        (&stack0xcdfa)[(int)pcVar38] = (char)((uint)extraout_DX_02 >> 8);
        UNLOCK();
        *(uint *)(&stack0x004e + (int)pcVar38) =
             *(uint *)(&stack0x004e + (int)pcVar38) & CONCAT11(uVar48,(char)extraout_DX_02);
        iVar23 = FUN_1576_03b0();
        if (iVar23 != 0) {
          FUN_53f7_00b0();
        }
        FUN_53f7_00b0();
        FUN_53f7_00b0();
        FUN_53f7_00b0();
        uVar48 = &stack0x0000 == (undefined1 *)0x20;
        pcVar52 = (code *)swi(0x39);
        (*pcVar52)();
        in(0xa8);
        pcVar52 = (code *)swi(0x3d);
        (*pcVar52)();
        pcVar52 = (code *)swi(0x3c);
        (*pcVar52)();
        pcVar52 = (code *)swi(0x3d);
        (*pcVar52)();
        FUN_2116_531b();
        if ((bool)uVar48) {
          FUN_53f7_00bc();
        }
        else {
          FUN_53f7_00bc();
        }
        in_stack_0000ffe2 = 0x53f7;
        FUN_2b01_000b();
        unaff_DS = in_stack_0000ffca;
      }
      if (in_stack_0000ffe2 == 1) {
        FUN_1576_0252();
      }
      pcStack_274 = (code *)FUN_1576_0000();
      if (*(int *)0xc8d4 == 1) {
        FUN_2b53_000a();
        *(undefined2 *)0xc8d4 = 0xffff;
      }
      FUN_36b0_10e2();
                    /* WARNING: Subroutine does not return */
      FUN_36b0_2920();
    }
    FUN_3678_01b4();
    FUN_3be6_000c();
    pcVar52 = (code *)swi(0x39);
    (*pcVar52)();
    LOCK();
    (in_BX + (int)pcVar38)[-0x3203] = SUB21((uint)in_BX >> 8,0);
    UNLOCK();
    *(uint *)(&stack0x004e + (int)pcVar38) = *(uint *)(&stack0x004e + (int)pcVar38) & extraout_DX_05
    ;
    in_BX = (code *)FUN_1576_03b0();
    goto code_r0x000152dc;
  case (code *)0x10:
    if (iStack_252 == -2) {
      FUN_2116_11dc();
      return (code *)0xffff;
    }
code_r0x00011616:
    if (iStack_252 == -3) {
      FUN_2116_11dc();
    }
    else {
      FUN_364d_024e();
      FUN_2116_11dc();
      FUN_2116_11dc();
      FUN_2116_11dc();
      iStack_250 = 0xfa;
      pcStack_2ee = in_BX;
      while( true ) {
        iVar23 = FUN_36b0_0042();
        if (iVar23 != 0) {
          FUN_2116_11dc();
          FUN_3678_01b4();
          *(undefined2 *)0x9198 = 0x4e;
          *(undefined2 *)0x919a = 0x4e;
          *(undefined2 *)0x91b0 = 0x71;
          *(undefined2 *)0x91b2 = 0x71;
          *(undefined2 *)0x91b4 = 0x1f;
          *(undefined2 *)0x91ae = 0x71;
          *(undefined2 *)0x91b8 = 0x71;
          *(undefined2 *)0x91b6 = 0x1e;
          *(undefined2 *)0x91bc = 0x4f;
          *(undefined2 *)0x91be = 0x4f;
          *(undefined2 *)0x91c8 = 0x3e;
          *(undefined2 *)0x91ca = 0x3e;
          *(undefined2 *)0x91d4 = 0x70;
          *(undefined2 *)0x91d6 = 0x70;
          *(undefined2 *)0x91e0 = 0x6f;
          *(undefined2 *)0x91e2 = 0x6f;
          *(undefined2 *)0x9204 = 0x5e;
          *(undefined2 *)0x9206 = 0x5e;
          *(undefined2 *)0x9202 = 0x5e;
          *(undefined2 *)0x920c = 0x5e;
          *(undefined2 *)0x91c6 = 0x5e;
          *(undefined2 *)0x91d0 = 0x5e;
          *(undefined2 *)0x91a4 = 0x40;
          *(undefined2 *)0x91d6 = 0x40;
          FUN_2116_11dc();
          FUN_2116_11dc();
          *(undefined2 *)0x904a = 0;
          *(undefined2 *)0xc8cc = 0xffff;
          *(undefined2 *)0xc8ce = 0xffff;
          *(undefined2 *)0xc8d0 = 0xffff;
          *(undefined2 *)0xc8d2 = 0xffff;
          *(undefined2 *)0xc8d4 = 0xffff;
          *(undefined2 *)0xc8d6 = 0xffff;
          *(undefined2 *)0xc8d8 = 0xffff;
          *(undefined2 *)0xc8da = 0xffff;
          *(undefined2 *)0xc8dc = 0xffff;
          *(undefined2 *)0xc8de = 0xffff;
          *(undefined2 *)0xc8d2 = 0xffff;
          FUN_2b13_0004();
          uVar20 = FUN_3395_00ab();
          *(undefined2 *)0xc8e0 = uVar20;
          FUN_29de_00b8();
          FUN_3be6_000c();
          pcVar52 = (code *)swi(0x3c);
          (*pcVar52)();
          lVar51 = (longdouble)*(double *)0x7e0;
          pcVar52 = (code *)swi(0x39);
          (*pcVar52)();
          pcVar52 = (code *)swi(0x3a);
          (*pcVar52)();
          uVar48 = 1;
          pcVar52 = (code *)swi(0x3c);
          (*pcVar52)();
          *(double *)0x7e0 = (double)lVar51;
          pcVar52 = (code *)swi(0x39);
          (*pcVar52)();
          in(0x74);
          pcVar52 = (code *)swi(0x3d);
          (*pcVar52)();
          pcVar52 = (code *)swi(0x3c);
          (*pcVar52)();
          pcVar52 = (code *)swi(0x3d);
          (*pcVar52)();
          FUN_2116_531b();
          if (!(bool)uVar48) {
            iVar23 = FUN_53f7_0014();
            if (iVar23 == 0) {
              FUN_2a75_006d();
              FUN_1576_0000();
              FUN_2ad2_0006();
              FUN_2116_11dc();
              FUN_2116_11dc();
              FUN_2116_30ba();
            }
                    /* WARNING: Subroutine does not return */
            FUN_36b0_2920();
          }
          uVar20 = FUN_3395_00ab();
          *(undefined2 *)0xc8e2 = uVar20;
          FUN_2a75_0009();
          FUN_2a75_0009();
          FUN_2a75_0009();
          FUN_2a75_0009();
          FUN_2a75_0009();
          FUN_1576_0000();
          FUN_2b53_000a();
          FUN_53f7_0020();
          FUN_53f7_002c();
          FUN_3be6_000c();
          pcVar52 = (code *)swi(0x39);
          (*pcVar52)();
          LOCK();
          uVar48 = (&stack0xcdfa)[(int)pcVar38];
          (&stack0xcdfa)[(int)pcVar38] = (char)((uint)extraout_DX_00 >> 8);
          UNLOCK();
          *(uint *)(&stack0x004e + (int)pcVar38) =
               *(uint *)(&stack0x004e + (int)pcVar38) & CONCAT11(uVar48,(char)extraout_DX_00);
          iVar23 = FUN_1576_03b0();
          if (iVar23 == 0) {
            *(undefined2 *)0x74ee = 0;
            *(undefined2 *)0x1882 = 0xffff;
          }
          FUN_2116_3588();
          uStack_234 = FUN_29f2_011d();
          if (uStack_234 == 0) {
            for (iStack_264 = 0; iStack_264 < 8; iStack_264 = iStack_264 + 1) {
              FUN_29ac_000f();
              FUN_29ac_000f();
              FUN_29ac_000f();
              FUN_53f7_0038();
              FUN_53f7_0038();
              param_3 = (code *)(iStack_264 * 10 + -0x3678);
              FUN_53f7_0038();
            }
          }
          else {
            for (iStack_264 = 0; iStack_264 < 8; iStack_264 = iStack_264 + 1) {
              FUN_2116_1024();
              FUN_29ac_000f();
              FUN_29ac_000f();
              FUN_29ac_000f();
              FUN_53f7_0038();
              FUN_53f7_0038();
              param_3 = (code *)(iStack_264 * 10 + -0x3678);
              FUN_53f7_0038();
            }
            FUN_3da5_0006();
          }
          FUN_29ac_000f();
          FUN_2116_2eca();
          bVar47 = false;
          iVar23 = FUN_36b0_30f4();
          if (iVar23 == 1) {
            iStack_264 = 0;
            while ((iStack_264 < 0x14 && (!bVar47))) {
              pcStack_2ee = (code *)(auStack_230 + iStack_264);
              if ((*pcStack_2ee == (code)0x2e) &&
                 ((pcStack_2ee = (code *)(auStack_230 + iStack_264 + 1), *pcStack_2ee == (code)0x54
                  && (pcStack_2ee = (code *)(auStack_230 + iStack_264 + 2),
                     *pcStack_2ee == (code)0x58)))) {
                bVar47 = true;
              }
              iStack_264 = iStack_264 + 1;
            }
          }
          FUN_2116_3588();
          iVar23 = 0x59e4;
          pcVar26 = (code *)FUN_2116_0e54();
          uStack_234._0_2_ = pcVar26;
          uStack_234._2_2_ = iVar23;
          if ((pcVar26 == (code *)0x0) && (iVar23 == 0)) {
            FUN_2116_3588();
            iVar23 = FUN_2116_49d4();
            if (iVar23 == -1) {
              FUN_2116_4918();
              FUN_2116_4918();
              FUN_2116_4918();
            }
            else {
              FUN_2116_4918();
            }
          }
          else {
            FUN_2116_3248();
            FUN_2116_3f22();
            FUN_2116_3588();
            pcStack_2ee = (code *)uStack_234;
            if (((byte)((code *)uStack_234)[10] & 0x10) == 0) {
              FUN_2116_3248();
              *(undefined1 *)0xca37 = 0;
              pcVar26 = unaff_DS;
              puVar33 = (undefined1 *)FUN_2116_3f54();
              uStack_25a = (undefined1 *)CONCAT22(pcVar26,puVar33);
              if ((puVar33 != (undefined1 *)0x0) || (pcVar26 != (code *)0x0)) {
                *uStack_25a = 0;
              }
              pcStack_2ee = (code *)(*(byte *)0xca08 + 0x9fe7);
              if (((byte)*pcStack_2ee & 2) == 0) {
                uVar21 = (uint)*(byte *)0xca08;
              }
              else {
                uVar21 = *(byte *)0xca08 - 0x20;
              }
              if ((uVar21 == 0x41) || (iVar23 = FUN_2116_49d4(), iVar23 != 0)) {
                FUN_2116_3588();
                FUN_2116_2eca();
              }
              else {
                pcStack_2ee = (code *)(*(byte *)0xca08 + 0x9fe7);
                FUN_2116_4a3e();
              }
            }
            iVar23 = FUN_2116_49d4();
            if (iVar23 == -1) {
              FUN_2116_3588();
              iVar23 = FUN_2116_49d4();
              if (iVar23 == -1) {
                FUN_2116_4918();
                FUN_2116_4918();
                FUN_2116_4918();
              }
              else {
                FUN_2116_4918();
              }
            }
            else {
              FUN_2116_4918();
            }
            FUN_3da5_0006();
          }
          if (bVar47) {
            FUN_2ab0_000b();
            pcStack_2ee = (code *)0x0;
            for (iStack_264 = 1;
                (((iStack_264 < 0x30 && (auStack_230[iStack_264] != '\0')) &&
                 (auStack_230[iStack_264] != '\n')) && (auStack_230[iStack_264] != '\r'));
                iStack_264 = iStack_264 + 1) {
              pcStack_2ee[-0x3628] = (code)auStack_230[iStack_264];
              pcStack_2ee = pcStack_2ee + 1;
            }
            pcStack_2ee[-0x3628] = (code)0x0;
          }
          FUN_1576_0252();
          uVar20 = FUN_53f7_0044();
          *(undefined2 *)0xca38 = uVar20;
          if (*(int *)0xca38 != 0) {
            if (*(int *)0xca38 == 2) {
              FUN_1576_0252();
            }
            else {
              FUN_1576_0252();
              FUN_53f7_0050();
            }
            FUN_1576_0000();
          }
          FUN_53f7_005c();
          FUN_29ac_000f();
          iVar23 = unaff_SS;
          iVar19 = FUN_2116_4a5a();
          if ((iVar19 != 0) || (iVar23 != 0)) {
            FUN_2ab0_000b();
          }
          FUN_2116_2eca();
          FUN_2116_2eca();
          FUN_29ac_000f();
          FUN_29ac_000f();
          FUN_2116_2eca();
          *(undefined2 *)0xca7e = 0;
          FUN_2116_2eca();
          uStack_272 = FUN_32f4_020e();
          uVar20 = FUN_3395_00ab();
          *(undefined2 *)0xc8e2 = uVar20;
          FUN_3be6_000c();
          pcVar52 = (code *)swi(0x39);
          (*pcVar52)();
          LOCK();
          (&stack0xcdfa)[(int)pcVar38] = extraout_DH;
          UNLOCK();
          *(uint *)(pcStack_2ee + (int)pbVar34 + -0x4f7a) =
               *(uint *)(pcStack_2ee + (int)pbVar34 + -0x4f7a) & (uint)param_3;
          if ((uStack_352 >> 2 & 1) == 1) {
            *(undefined2 *)0xca80 = 1;
          }
          else {
            *(undefined2 *)0xca80 = 0;
          }
          FUN_3be6_000c();
          pcVar52 = (code *)swi(0x39);
          (*pcVar52)();
          in(0xa8);
          pcVar52 = (code *)swi(0x39);
          (*pcVar52)();
          LOCK();
          (&stack0xcdfa)[(int)pcVar38] = extraout_DH_00;
          UNLOCK();
          *(uint *)(pcVar38 + 3) = *(uint *)(pcVar38 + 3) & (uint)pcVar38;
          *(undefined2 *)0xca82 = 0;
          FUN_53f7_0068();
          FUN_53f7_0074();
          FUN_2b01_000b();
          FUN_2b01_006c();
                    /* WARNING: Subroutine does not return */
          FUN_36b0_2920();
        }
        if (iStack_250 == 0) break;
        param_3 = (code *)0x4;
        iStack_250 = iStack_250 + -1;
        FUN_2116_11dc();
      }
    }
    return (code *)0xffff;
  case (code *)0x12:
    goto switchD_1000_9d41_caseD_12;
  case (code *)0x13:
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    in_BX[(int)pcVar38] = (code)((char)in_BX[(int)pcVar38] + cVar15);
    (&stack0x0052)[(int)pcVar38] = (&stack0x0052)[(int)pcVar38] + (char)pcVar26;
    in_CX = param_3;
    param_2 = param_3;
    goto code_r0x0001031d;
  case (code *)0x14:
    pcVar26 = in_BX + ((int)pcVar32 < 0) + 0xc483;
    goto LAB_1129_3d7a;
  case (code *)0x15:
    FUN_2116_0e70();
    FUN_3da5_0006();
    *(undefined2 *)0xb1b4 = *(undefined2 *)0x1882;
    if (*(int *)0x13cc != 0) {
      *(int *)0x13cc = *(int *)0x13cc + -1;
    }
    if (*(int *)0x1882 == -1) {
      FUN_2116_3588();
    }
    else {
      FUN_2116_3588();
    }
    if ((*(int *)0x13c6 < 1) && (*(int *)0xc8da == 1)) {
      FUN_2b01_000b();
    }
    FUN_3be6_000c();
    pcVar52 = (code *)swi(0x39);
    (*pcVar52)();
    pcVar52 = (code *)swi(0x3d);
    (*pcVar52)();
    FUN_2116_5334();
    FUN_2116_4cfe();
    pcVar52 = (code *)swi(0x37);
    (*pcVar52)();
    pcVar52 = (code *)swi(0x3a);
    (*pcVar52)();
    pcVar52 = (code *)swi(0x39);
    (*pcVar52)();
    pcVar36 = pcVar36 + 4;
    pcVar52 = (code *)swi(0x35);
    (*pcVar52)();
    iVar19 = *unaff_BP;
    piVar31 = unaff_BP + 1;
    pcVar52 = (code *)swi(0x3a);
    iVar23 = (*pcVar52)();
    if ((int)(*(uint *)(pbVar34 + iVar19 + 0x8c4) & 0x868d) < 1) {
      pcVar26 = (code *)*(undefined2 *)0xe850;
      puVar30 = (undefined1 *)((int)piVar31 + -2);
      *(undefined2 *)((int)piVar31 + -2) = 0xc45b;
      (*pcVar26)();
      pcVar36 = *(code **)(puVar30 + 2);
      iVar19 = *(int *)(puVar30 + 4);
      iVar23 = *(int *)(puVar30 + 0xe);
      piVar31 = (int *)(puVar30 + 0x10);
    }
    while( true ) {
      *(int *)((int)piVar31 + -2) = unaff_SS;
      *(int *)((int)piVar31 + -4) = iVar23;
      *(undefined2 *)((int)piVar31 + -6) = 0xc45d;
      pcVar26 = (code *)FUN_1a22_1f9e();
      if ((int)pcVar26 < 0) {
        return pcVar26;
      }
      *(undefined2 *)((int)piVar31 + -2) = 0xc469;
      iVar23 = FUN_1a22_2eab();
      if (iVar23 != 0) break;
      *(int *)((int)piVar31 + -2) = unaff_SS;
      *(int *)((int)piVar31 + -4) = iVar19 + -0x12;
      *(undefined2 *)((int)piVar31 + -6) = *(undefined2 *)(iVar19 + -2);
      *(undefined2 *)((int)piVar31 + -8) = pcVar36;
      *(undefined2 *)((int)piVar31 + -10) = 0xc451;
      FUN_1a22_1a06();
      iVar23 = iVar19 + -0x82;
    }
    *(undefined2 *)((int)piVar31 + -2) = 0;
    *(undefined2 *)((int)piVar31 + -4) = 0;
    *(undefined2 *)((int)piVar31 + -6) = 0xc474;
    pcVar26 = (code *)FUN_1a22_1af2();
    return pcVar26;
  case (code *)0x16:
    goto switchD_1000_9d41_caseD_16;
  case (code *)0x17:
    func_0x000068de();
    FUN_1a22_33bf();
    *(undefined2 *)0xb876 = 0;
    *(undefined2 *)0xb878 = 0;
    FUN_1a22_335c();
    *(undefined2 *)0xb89f = 0;
    *(undefined2 *)0xb89d = 0;
    *(undefined1 *)0xb8a5 = 0;
    *(undefined1 *)0xb8a7 = 0;
    *(undefined1 *)0xb886 = 0;
    *(undefined1 *)0xb99f = 0;
    *(undefined1 *)0xb8a6 = 1;
    bVar43 = *(byte *)0x8e9e;
    *(int *)0xb8a3 = bVar43 - 1;
    pcVar26 = (code *)CONCAT11((char)(bVar43 - 1 >> 8),*(undefined1 *)0x8e9f);
    *(int *)0xb8a1 = (int)(pcVar26 + -1);
    return pcVar26;
  case (code *)0x19:
    (&stack0x006f)[(int)pcVar38] = (&stack0x006f)[(int)pcVar38] + (char)((uint)(pcVar26 + 1) >> 8);
    pcVar26 = unaff_DS;
    do {
      if (in_BX < param_3) break;
      pcVar18 = (code *)((uint)in_BX >> 4);
      unaff_DS = unaff_DS + (int)pcVar18;
      pcVar26 = pcVar26 + -(int)pcVar18;
      if (pcVar26 == (code *)0x0) {
        return pcVar18;
      }
      param_3 = pcVar26;
      if ((code *)0xffe < pcVar26) {
        param_3 = (code *)0xff;
      }
      param_3 = (code *)((int)param_3 << 4);
      bVar47 = false;
      in_BX = (code *)(*(code *)*(undefined2 *)0x42)();
    } while (!bVar47);
  }
  FUN_1000_0ae9();
  FUN_1000_0ab3();
LAB_1000_0b16:
  DAT_1000_0328 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010b43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar26 = (code *)(*(code *)ZEXT24(pcRam00010042))();
  return pcVar26;
LAB_1a22_24bf:
  if (local_12 == 0 && piVar37 == (int *)0x0) goto LAB_1a22_2602;
  if ((((((((uint)local_4 & 0x20) == 0) || (iVar23 = FUN_1a22_19a6(), iVar23 == 0)) &&
        ((((uint)local_4 & 2) == 0 || (piVar37[2] != 0)))) &&
       ((((uint)local_4 & 4) == 0 || (piVar37[2] == 0)))) &&
      ((((uint)local_4 & 8) == 0 || (*piVar37 == 0)))) &&
     ((((uint)local_4 & 0x10) == 0 || (*piVar37 != 0)))) {
    if ((((uint)local_4 & 1) == 0) || (*piVar37 != 0)) {
      if (*piVar37 != 0) {
        *(undefined2 *)0x0 = *(undefined2 *)((int)*(undefined4 *)0x8e3c + 6);
        *(undefined2 *)0x2 = *(undefined2 *)((int)*(undefined4 *)0x8e3c + 8);
      }
      goto LAB_1a22_24b6;
    }
    if (0 < local_16) {
      local_16 = 0;
    }
  }
  piVar1 = piVar37 + 0x4c;
  local_12 = piVar37[0x4d];
  piVar37 = (int *)*piVar1;
  goto LAB_1a22_24bf;
code_r0x0001fe0d:
  bVar43 = pbVar34 < (byte *)*(undefined2 *)0xb9da;
  bVar47 = false;
  if (pbVar34 == (byte *)*(undefined2 *)0xb9da) {
    bVar47 = bVar46 == *(byte *)0xb9e3;
    if (bVar46 < *(byte *)0xb9e3) {
LAB_1a22_5bfb:
      pcVar25 = (code *)CONCAT11(bVar46 << (bVar45 & 7) | bVar46 >> 8 - (bVar45 & 7),bVar45);
      goto LAB_1a22_5bfd;
    }
    bVar43 = false;
  }
  goto LAB_1a22_5be4;
LAB_1a22_2602:
  if (((uint)local_4 & 1) != 0) {
LAB_1a22_24b6:
    pcVar26 = (code *)FUN_1a22_1f56();
    return pcVar26;
  }
LAB_1a22_2612:
  *(undefined1 *)0xb99e = 0xff;
  return (code *)0xffff;
}



// Function: FUN_1a22_2626 @ 1a22:2626

undefined2 __cdecl16far FUN_1a22_2626(undefined2 *param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  if (*(int *)0x8e3e != 0 || *(int *)0x8e3c != 0) {
    puVar1 = (undefined2 *)*(undefined4 *)0x8e3c;
    uVar3 = (undefined2)((ulong)puVar1 >> 0x10);
    puVar2 = (undefined2 *)puVar1;
    if (puVar2[0x4b] != 0 || puVar2[0x4a] != 0) {
      *param_1 = *puVar1;
      param_1[1] = puVar2[1];
      param_1[2] = puVar2[2];
      param_1[3] = puVar2[3];
      param_1[4] = puVar2[4];
      FUN_1a22_1a06(param_1 + 5,param_2,puVar2 + 7,*(undefined2 *)0x8e3e);
      FUN_1a22_1a06((int)param_1 + 0x5b,param_2,*(int *)0x8e3c + 0x60,*(undefined2 *)0x8e3e);
      *(undefined1 *)0xb99e = 0;
      return 0;
    }
  }
  *(undefined1 *)0xb99e = 0xff;
  return 0xffff;
}



// Function: FUN_1a22_26e0 @ 1a22:26e0

void __cdecl16near FUN_1a22_26e0(int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int in_DX;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 unaff_DS;
  bool bVar19;
  long lVar20;
  long lVar21;
  uint local_22;
  int local_c;
  int local_a;
  undefined4 local_8;
  
  bVar4 = 1;
  iVar5 = FUN_1a22_072c();
  lVar2 = CONCAT22((int)(char)((uint)iVar5 >> 8),iVar5 << 8);
  lVar3 = CONCAT22((int)(char)((uint)in_DX >> 8),in_DX << 8);
  uVar17 = (undefined2)((ulong)*(undefined4 *)0x8e3c >> 0x10);
  iVar12 = (int)*(undefined4 *)0x8e3c;
  param_1 = param_1 - *(int *)(iVar12 + 10);
  if (*(int *)(iVar12 + 4) == 0) {
    uVar18 = (undefined2)((ulong)*(undefined4 *)(iVar12 + 0x90) >> 0x10);
    puVar13 = (uint *)((int)*(undefined4 *)(iVar12 + 0x90) + param_1 * 4);
    local_22 = puVar13[1];
    uVar15 = *puVar13;
    iVar12 = -(uVar15 - puVar13[2]);
  }
  else {
    local_22 = *(uint *)(iVar12 + 4);
    uVar18 = (undefined2)((ulong)*(undefined4 *)(iVar12 + 0x90) >> 0x10);
    puVar13 = (uint *)((int)*(undefined4 *)(iVar12 + 0x90) + param_1 * 2);
    uVar15 = *puVar13;
    iVar12 = puVar13[1] - uVar15;
  }
  uVar17 = (undefined2)((ulong)*(undefined4 *)0x8e3c >> 0x10);
  iVar14 = (int)*(undefined4 *)0x8e3c;
  piVar6 = (int *)(uVar15 + *(uint *)(iVar14 + 0x94));
  iVar11 = (((int)uVar15 >> 0xf) + (uint)CARRY2(uVar15,*(uint *)(iVar14 + 0x94))) * 0x1000 +
           *(int *)(iVar14 + 0x96);
  local_8 = (int *)CONCAT22(iVar11,piVar6);
  iVar14 = *(int *)(iVar14 + 6);
  iVar16 = 0;
  while( true ) {
    while( true ) {
      if (iVar12 <= iVar16) {
        iVar12 = (int)*(undefined4 *)0x8e3c;
        FUN_1a22_0707(iVar5 + (int)(*(int *)0x2 * local_22 * *(int *)0x8e40) / *(int *)(iVar12 + 8),
                      in_DX - (int)(*(int *)0x2 * local_22 * *(int *)0x8e42) / *(int *)(iVar12 + 8))
        ;
        if (bVar4 == 3) {
          bVar4 = 1;
        }
        *(byte *)0xb99e = bVar4;
        return;
      }
      if (iVar14 < 0x81) {
        bVar19 = (char)*piVar6 == -0x80;
        if (bVar19) {
          piVar6 = (int *)((int)piVar6 + 1);
          iVar16 = iVar16 + 1;
        }
        local_a = (int)(char)*piVar6;
        local_c = (int)*(char *)((int)piVar6 + 1);
        iVar16 = iVar16 + 2;
        piVar6 = piVar6 + 1;
      }
      else {
        uVar17 = (undefined2)((ulong)local_8 >> 0x10);
        bVar19 = *local_8 == -0x8000;
        if (bVar19) {
          local_8 = (int *)CONCAT22(uVar17,(int *)local_8 + 1);
          iVar16 = iVar16 + 2;
        }
        local_a = *(int *)local_8;
        local_c = ((int *)local_8)[1];
        iVar16 = iVar16 + 4;
        local_8 = (int *)CONCAT22(local_8._2_2_,(int *)local_8 + 2);
      }
      iVar10 = *(int *)((int)*(undefined4 *)0x8e3c + 6);
      iVar9 = *(int *)0x0;
      iVar7 = local_c * iVar9 * *(int *)0x8e42;
      lVar20 = FUN_2116_4cfe(iVar7 * 0x100,(int)(char)((uint)iVar7 >> 8),iVar10,iVar10 >> 0xf);
      iVar7 = *(int *)((int)*(undefined4 *)0x8e3c + 8);
      iVar1 = *(int *)0x2;
      iVar8 = local_a * iVar1 * *(int *)0x8e40;
      lVar21 = FUN_2116_4cfe(iVar8 * 0x100,(int)(char)((uint)iVar8 >> 8),iVar7,iVar7 >> 0xf);
      lVar2 = lVar20 + lVar21 + lVar2;
      uVar17 = (undefined2)((ulong)lVar2 >> 8);
      iVar9 = local_c * iVar9 * *(int *)0x8e40;
      lVar20 = FUN_2116_4cfe(iVar9 * 0x100,(int)(char)((uint)iVar9 >> 8),iVar10,iVar10 >> 0xf);
      iVar10 = local_a * iVar1 * *(int *)0x8e42;
      lVar21 = FUN_2116_4cfe(iVar10 * 0x100,(int)(char)((uint)iVar10 >> 8),iVar7,iVar7 >> 0xf);
      lVar3 = (lVar20 - lVar21) + lVar3;
      uVar18 = (undefined2)((ulong)lVar3 >> 8);
      if (!bVar19) break;
      FUN_1a22_0707(uVar17,uVar18);
    }
    FUN_1a22_0743(uVar17,uVar18);
    if (*(char *)0xb99e < '\0') break;
    if ('\0' < DAT_6135_b99e) {
      bVar4 = bVar4 | 2;
    }
    if (DAT_6135_b99e != '\x01') {
      bVar4 = bVar4 & 2;
    }
  }
  return;
}



// Function: FUN_1a22_29d0 @ 1a22:29d0

void __cdecl16far FUN_1a22_29d0(char *param_1)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  int in_DX;
  int iVar6;
  char *pcVar7;
  undefined2 uVar8;
  undefined2 unaff_DS;
  undefined4 uVar9;
  int local_e;
  int local_c;
  
  uVar4 = FUN_1a22_0222();
  if (-1 < *(char *)0xb99e) {
    if ((*(int *)0x8e3e == 0 && *(int *)0x8e3c == 0) ||
       (uVar8 = (undefined2)((ulong)*(undefined4 *)0x8e3c >> 0x10),
       iVar6 = (int)*(undefined4 *)0x8e3c,
       *(int *)(iVar6 + 0x96) == 0 && *(int *)(iVar6 + 0x94) == 0)) {
      *(undefined1 *)0xb99e = 0xff;
    }
    else if (*param_1 == '\0') {
      *(undefined1 *)0xb99e = 1;
    }
    else {
      piVar2 = (int *)*(undefined4 *)0x8e3c;
      uVar1 = ((int *)piVar2)[5];
      if (*piVar2 == 0) {
        local_e = FUN_1a22_072c();
        bVar3 = 1;
        local_c = in_DX;
        while (*(char *)param_1 != '\0') {
          pcVar7 = (char *)param_1 + 1;
          uVar5 = FUN_1a22_2ef6(*(char *)param_1);
          uVar5 = uVar5 & 0xff;
          if (uVar5 < uVar1) {
LAB_1a22_2b24:
            if (uVar5 == 0x20) {
              uVar4 = (undefined2)((ulong)*(undefined4 *)0x8e3c >> 0x10);
              iVar6 = (int)*(undefined4 *)0x8e3c;
              uVar5 = *(int *)(iVar6 + 0xc) + 1;
            }
            else {
              uVar4 = (undefined2)((ulong)*(undefined4 *)0x8e3c >> 0x10);
              iVar6 = (int)*(undefined4 *)0x8e3c;
              uVar5 = *(int *)(iVar6 + 0x8e) + uVar1;
            }
          }
          else {
            uVar4 = (undefined2)((ulong)*(undefined4 *)0x8e3c >> 0x10);
            iVar6 = (int)*(undefined4 *)0x8e3c;
            if (*(uint *)(iVar6 + 0xc) < uVar5) goto LAB_1a22_2b24;
          }
          uVar9 = FUN_1a22_2d2d(iVar6,uVar4,uVar5,local_e,local_c);
          local_e = local_e + (int)uVar9;
          local_c = local_c + (int)((ulong)uVar9 >> 0x10);
          if (*(char *)0xb99e < '\0') {
            return;
          }
          if ('\0' < DAT_6135_b99e) {
            bVar3 = bVar3 | 2;
          }
          param_1._0_2_ = pcVar7;
          if (DAT_6135_b99e != '\x01') {
            bVar3 = bVar3 & 2;
          }
        }
        FUN_1a22_0707(local_e,local_c);
      }
      else {
        FUN_1a22_0205(0xffff);
        uVar8 = FUN_1a22_06c4(3);
        bVar3 = 1;
        while (*(char *)param_1 != '\0') {
          pcVar7 = (char *)param_1 + 1;
          uVar5 = FUN_1a22_2ef6(*(char *)param_1);
          uVar5 = uVar5 & 0xff;
          if ((uVar5 < uVar1) || (*(uint *)((int)*(undefined4 *)0x8e3c + 0xc) < uVar5)) {
            if (uVar5 == 0x20) {
              uVar5 = *(int *)((int)*(undefined4 *)0x8e3c + 0xc) + 1;
            }
            else {
              uVar5 = *(int *)((int)*(undefined4 *)0x8e3c + 0x8e) + uVar1;
            }
          }
          FUN_1a22_26e0(uVar5);
          if (*(char *)0xb99e < '\0') {
            return;
          }
          if ('\0' < DAT_6135_b99e) {
            bVar3 = bVar3 | 2;
          }
          param_1._0_2_ = pcVar7;
          if (DAT_6135_b99e != '\x01') {
            bVar3 = bVar3 & 2;
          }
        }
        FUN_1a22_0205(uVar4);
        FUN_1a22_06c4(uVar8);
      }
      if (bVar3 == 3) {
        bVar3 = 1;
      }
      *(byte *)0xb99e = bVar3;
    }
  }
  return;
}



// Function: FUN_1a22_2bbe @ 1a22:2bbe

int __cdecl16far FUN_1a22_2bbe(char *param_1,undefined2 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined2 uVar9;
  undefined2 unaff_DS;
  byte local_3;
  
  iVar7 = 0;
  if (*(int *)0x8e3e != 0 || *(int *)0x8e3c != 0) {
    uVar9 = (undefined2)((ulong)*(undefined4 *)0x8e3c >> 0x10);
    iVar5 = (int)*(undefined4 *)0x8e3c;
    if (*(int *)(iVar5 + 0x96) != 0 || *(int *)(iVar5 + 0x94) != 0) {
      uVar3 = (uint)(*(uint *)(iVar5 + 0x8c) < 0x300);
      *(undefined1 *)0xb99e = 0;
      uVar4 = uVar3;
      while (*param_1 != '\0') {
        pcVar8 = param_1 + 1;
        local_3 = FUN_1a22_2ef6(CONCAT11((char)(uVar4 >> 8),*param_1));
        piVar1 = (int *)*(undefined4 *)0x8e3c;
        uVar9 = (undefined2)((ulong)piVar1 >> 0x10);
        piVar6 = (int *)piVar1;
        if (((uint)local_3 < (uint)piVar6[5]) || ((uint)piVar6[6] < (uint)local_3)) {
          if (local_3 == 0x20) {
            local_3 = ((char)piVar6[6] - (char)piVar6[5]) + 1;
          }
          else {
            local_3 = *(byte *)(piVar6 + 0x47);
          }
        }
        else {
          local_3 = local_3 - (char)piVar6[5];
        }
        uVar4 = 0;
        param_1 = pcVar8;
        if (*piVar1 == 0) {
          if (uVar3 == 0) {
            iVar5 = (uint)local_3 * 3;
          }
          else {
            iVar5 = (uint)local_3 << 1;
          }
          uVar4 = iVar5 * 2;
          uVar2 = *(undefined4 *)((int)*(undefined4 *)0x8e3c + 0x90);
          iVar7 = iVar7 + *(int *)((int)uVar2 + uVar4);
        }
        else if (piVar6[2] == 0) {
          uVar4 = (uint)(((ulong)*(uint *)((int)*(undefined4 *)(piVar6 + 0x48) + (uint)local_3 * 4 +
                                          2) * (ulong)*(uint *)0x2 & 0xffff) /
                        (ulong)*(uint *)((int)*(undefined4 *)0x8e3c + 8));
          iVar7 = iVar7 + uVar4;
        }
        else {
          iVar7 = iVar7 + piVar6[2];
        }
      }
      return iVar7;
    }
  }
  *(undefined1 *)0xb99e = 0xff;
  return -1;
}



// Function: FUN_1a22_2ce0 @ 1a22:2ce0

/* WARNING: Instruction at (ram,0x0001cf36) overlaps instruction at (ram,0x0001cf35)
    */

undefined2 __cdecl16far FUN_1a22_2ce0(uint param_1,uint param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)0x8e40;
  uVar4 = 0;
  uVar2 = ((int)param_1 >> 0xf) << 1 | (uint)(param_1 != 0);
  if (uVar2 != 0 || param_2 != 0) {
    uVar3 = ((int)param_2 >> 0xf) << 1 | (uint)(param_2 != 0);
    *(uint *)0x8e40 = uVar2;
    *(uint *)0x8e42 = uVar3;
    if ((uVar2 != param_1) || (uVar3 != param_2)) {
      uVar4 = 3;
    }
  }
  *(undefined1 *)0xb99e = uVar4;
  return uVar1;
}



// Function: FUN_1a22_2d2d @ 1a22:2d2d

undefined4 __cdecl16near FUN_1a22_2d2d(undefined4 param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  undefined2 unaff_DS;
  undefined2 uVar15;
  bool bVar16;
  byte local_3;
  
  local_3 = 1;
  uVar15 = (undefined2)((ulong)param_1 >> 0x10);
  iVar10 = (int)param_1;
  param_2 = param_2 - *(int *)(iVar10 + 10);
  iVar14 = (int)((ulong)*(undefined4 *)(iVar10 + 0x90) >> 0x10);
  iVar5 = param_2 * 2;
  bVar16 = 0x2ff < *(uint *)(iVar10 + 0x8c);
  if (bVar16) {
    iVar5 = param_2 * 3;
  }
  pbVar11 = (byte *)((int)*(undefined4 *)(iVar10 + 0x90) + iVar5 * 2);
  bVar1 = *pbVar11;
  iVar5 = 0;
  uVar6 = *(uint *)(pbVar11 + 2) - *(uint *)(iVar10 + 0x88);
  if (*(uint *)(pbVar11 + 2) < *(uint *)(iVar10 + 0x88)) {
    iVar5 = -0x1000;
  }
  if (bVar16) {
    iVar5 = (iVar5 + *(int *)(pbVar11 + 4)) - iVar14;
  }
  uVar12 = (uint)*(undefined4 *)(iVar10 + 0x94);
  pcVar13 = (char *)(uVar12 + uVar6);
  if (CARRY2(uVar12,uVar6)) {
    iVar5 = CONCAT11((char)((uint)iVar5 >> 8) + '\x10',(char)iVar5);
  }
  iVar5 = (int)((ulong)*(undefined4 *)(iVar10 + 0x94) >> 0x10) + iVar5;
  cVar2 = *(char *)(iVar10 + 6);
  iVar14 = param_4;
  iVar10 = param_3;
  cVar7 = cVar2;
  bVar4 = bVar1;
  do {
    do {
      cVar3 = *pcVar13;
      iVar9 = iVar14;
      iVar8 = iVar10;
      while (cVar3 != '\0') {
        bVar16 = cVar3 < '\0';
        cVar3 = cVar3 << 1;
        if (bVar16) {
          FUN_1a22_07aa(iVar8,iVar9);
          local_3 = local_3 & (*(byte *)0xb99e | 0xfe) | *(byte *)0xb99e << 1;
        }
        iVar8 = iVar8 + *(int *)0x8e40;
        iVar9 = iVar9 - *(int *)0x8e42;
      }
      pcVar13 = pcVar13 + 1;
      if (pcVar13 == (char *)0x0) {
        iVar5 = CONCAT11((char)((uint)iVar5 >> 8) + '\n',(char)iVar5);
      }
      cVar7 = cVar7 + -1;
      iVar14 = iVar14 + *(int *)0x8e40;
      iVar10 = iVar10 + *(int *)0x8e42;
    } while (cVar7 != '\0');
    iVar10 = param_3 + *(int *)0x8e40 * 8;
    iVar14 = param_4 + *(int *)0x8e42 * -8;
    bVar16 = 7 < bVar4;
    bVar4 = bVar4 - 8;
    cVar7 = cVar2;
    param_4 = iVar14;
    param_3 = iVar10;
  } while (bVar16 && bVar4 != 0);
  if ('\x02' < (char)local_3) {
    local_3 = 1;
  }
  *(byte *)0xb99e = local_3;
  iVar5 = 0;
  iVar10 = 0;
  uVar6 = (uint)bVar1;
  do {
    iVar5 = iVar5 + *(int *)0x8e40;
    iVar10 = iVar10 - *(int *)0x8e42;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  return CONCAT22(iVar10,iVar5);
}



// Function: FUN_1a22_2e2c @ 1a22:2e2c

undefined2 __cdecl16near FUN_1a22_2e2c(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = 0xffff;
  }
  return uVar2;
}



// Function: FUN_1a22_2e42 @ 1a22:2e42

undefined2 __cdecl16near FUN_1a22_2e42(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = 0xffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1a22_2e57 @ 1a22:2e57

undefined2 __cdecl16near FUN_1a22_2e57(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = 0xffff;
  }
  return uVar2;
}



// Function: FUN_1a22_2e70 @ 1a22:2e70

void __cdecl16near FUN_1a22_2e70(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// Function: FUN_1a22_2e8b @ 1a22:2e8b

undefined2 __cdecl16near FUN_1a22_2e8b(void)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  bVar3 = false;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (bVar3) {
    uVar2 = 0xffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1a22_2eab @ 1a22:2eab

undefined2 __cdecl16near FUN_1a22_2eab(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = 0xffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1a22_2ebc @ 1a22:2ebc

undefined2 __cdecl16far FUN_1a22_2ebc(uint param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2 + (uint)(0xfff0 < param_1);
  iVar2 = 4;
  do {
    uVar3 = uVar3 >> 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (uVar3 == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return 0;
}



// Function: FUN_1a22_2ee8 @ 1a22:2ee8

void __cdecl16far FUN_1a22_2ee8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// Function: FUN_1a22_2ef6 @ 1a22:2ef6

uint __cdecl16near FUN_1a22_2ef6(uint param_1)

{
  if ((char)param_1 < '\0') {
    param_1 = (uint)*(byte *)(ulong)((param_1 & 0x7f) + 0x2f0a);
  }
  return param_1;
}



// Function: FUN_1a22_318e @ 1a22:318e

void __cdecl16near FUN_1a22_318e(void)

{
  undefined2 unaff_DS;
  
  FUN_1a22_188e();
  if ((*(char *)0x8e9a != '\0') && (*(undefined2 *)0x8e7e = 0xffff, *(char *)0xb8a7 != '\0')) {
    FUN_1a22_31e0();
    *(undefined1 *)0xb8a7 = 0;
  }
  *(undefined1 *)0xb99e = 0;
  return;
}



// Function: FUN_1a22_31b5 @ 1a22:31b5

void __cdecl16near FUN_1a22_31b5(void)

{
  undefined2 unaff_DS;
  
  if (*(char *)0x8e9a != '\0') {
    if ((*(char *)0x8e36 < '\0') && (*(char *)0xb8a7 == '\0')) {
      FUN_1a22_31e0();
      *(char *)0xb8a7 = *(char *)0xb8a7 + '\x01';
    }
    if (*(int *)0x8e7e != -1) {
      FUN_1a22_53e6();
      return;
    }
  }
  return;
}



// Function: FUN_1a22_31e0 @ 1a22:31e0

void __cdecl16near
FUN_1a22_31e0(undefined2 param_1,undefined2 *param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined1 uVar1;
  code *pcVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined2 unaff_DS;
  
  FUN_1a22_327f();
  if (*(byte *)0x8e9a < 3) {
    uRam0000007c = 0x8e80;
    uRam0000007e = unaff_DS;
  }
  else if (*(int *)0x8e9c == 0x13) {
    (*(code *)*(undefined2 *)0x8ed1)();
    uVar1 = *(undefined1 *)0xb87b;
    puVar3 = (uint *)*(undefined4 *)0xb9b4;
    puVar6 = (uint *)puVar3;
    iVar4 = 8;
    do {
      iVar5 = 4;
      do {
        puVar7 = puVar6;
        *puVar7 = *puVar7 ^ CONCAT11(uVar1,uVar1);
        iVar5 = iVar5 + -1;
        puVar6 = puVar7 + 1;
      } while (iVar5 != 0);
      puVar6 = puVar7 + 0x9d;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return;
  }
  pcVar2 = (code *)swi(0x10);
  (*pcVar2)();
  if (*(byte *)0x8e9a < 3) {
    *param_2 = param_4;
    param_2[1] = param_5;
  }
  return;
}



// Function: FUN_1a22_327f @ 1a22:327f

void __cdecl16near FUN_1a22_327f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  return;
}



// Function: FUN_1a22_335c @ 1a22:335c

undefined1 __cdecl16near FUN_1a22_335c(void)

{
  undefined1 uVar1;
  uint in_AX;
  byte bVar2;
  undefined2 unaff_DS;
  
  if ((char)(in_AX >> 8) == '\0') {
    bVar2 = *(byte *)0x8ea6;
    if (*(char *)0x8e9a == '\0') {
      bVar2 = 0x1f;
    }
    if ((byte)in_AX <= bVar2) goto LAB_1a22_337b;
  }
  in_AX = (uint)*(byte *)0x8ea6;
  *(undefined1 *)0xb99e = 3;
LAB_1a22_337b:
  LOCK();
  uVar1 = *(undefined1 *)0xb87a;
  *(undefined1 *)0xb87a = (char)in_AX;
  UNLOCK();
  FUN_1a22_3385();
  return uVar1;
}



// Function: FUN_1a22_3385 @ 1a22:3385

void __cdecl16near FUN_1a22_3385(void)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  bVar1 = *(byte *)0xb87a;
  if (*(char *)0x8e9a == '\0') {
    bVar1 = bVar1 & 0xf | (*(byte *)0xb87a & 0x10) << 3 | (*(byte *)0xb876 & 7) << 4;
  }
  else if (*(char *)0x8ec3 == '\x02') {
    (*(code *)*(undefined2 *)0x8edd)();
    bVar1 = *(byte *)0xb9b3;
  }
  *(byte *)0xb87b = bVar1;
  return;
}



// Function: FUN_1a22_33bf @ 1a22:33bf

/* WARNING: Instruction at (ram,0x0001d616) overlaps instruction at (ram,0x0001d615)
    */

byte __cdecl16near FUN_1a22_33bf(undefined2 param_1,undefined2 param_2)

{
  byte bVar1;
  code *pcVar2;
  uint in_AX;
  undefined2 uVar3;
  char cVar5;
  uint uVar4;
  undefined2 unaff_SI;
  undefined2 unaff_DS;
  byte in_stack_00000000;
  
  if (*(char *)0x8e9a == '\x04') {
    if (in_AX < 0x10) {
      pcVar2 = (code *)swi(0x10);
      (*pcVar2)();
      return in_stack_00000000;
    }
  }
  else if ((*(char *)0x8e9a == '\x01') && (in_AX < 4)) {
    if ((*(byte *)0xb9ae & 0x1c) != 0) {
      (*(code *)*(undefined2 *)0x8ec0)();
      LOCK();
      bVar1 = *(byte *)0xb9a2;
      *(byte *)0xb9a2 = (byte)unaff_SI;
      UNLOCK();
      return bVar1;
    }
    uVar3 = CONCAT11(uRam00000466,(char)in_AX);
    pcVar2 = (code *)swi(0x10);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x10);
    (*pcVar2)(uVar3,unaff_SI);
    cVar5 = (char)((int)param_2 >> 0xc);
    uVar4 = CONCAT11(cVar5,cVar5) & 0xff01;
    uVar4 = CONCAT11((char)(uVar4 >> 8),(char)uVar4 << 1) & 0x2ff;
    return (byte)uVar4 | (byte)(uVar4 >> 9);
  }
  *(undefined1 *)0xb99e = 0xfc;
  return 0xff;
}



// Function: FUN_1a22_346a @ 1a22:346a

int __cdecl16near FUN_1a22_346a(void)

{
  int in_AX;
  int in_BX;
  undefined2 unaff_DS;
  
  if (in_AX < 0) {
    in_AX = 0;
    *(undefined1 *)0xb99e = 3;
  }
  if (in_BX <= in_AX) {
    in_AX = in_BX + -1;
    *(undefined1 *)0xb99e = 3;
  }
  return in_AX;
}



// Function: FUN_1a22_3524 @ 1a22:3524

void __cdecl16near FUN_1a22_3524(void)

{
  undefined2 in_AX;
  undefined2 unaff_DS;
  
  if (*(int *)0x8e7e != -1) {
    in_AX = FUN_1a22_53e6();
  }
  FUN_1a22_37c7(in_AX);
  FUN_1a22_37a8();
  FUN_1a22_37c2();
  *(undefined1 *)0xb99f = 0;
  return;
}



// Function: FUN_1a22_37a8 @ 1a22:37a8

void __cdecl16near FUN_1a22_37a8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  return;
}



// Function: FUN_1a22_37c2 @ 1a22:37c2

void __cdecl16near FUN_1a22_37c2(void)

{
  byte bVar1;
  long lVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  bVar1 = *(byte *)0x8e99;
  lVar2 = (ulong)bVar1 * (ulong)(uint)(*(int *)0x8ea9 << 4);
  uVar3 = (undefined2)((ulong)lVar2 >> 0x10);
  *(undefined2 *)0x44e = (int)lVar2;
  *(byte *)0x462 = bVar1;
  return;
}



// Function: FUN_1a22_37c7 @ 1a22:37c7

void __cdecl16near FUN_1a22_37c7(void)

{
  byte bVar1;
  long lVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  bVar1 = *(byte *)0x8e98;
  lVar2 = (ulong)bVar1 * (ulong)(uint)(*(int *)0x8ea9 << 4);
  uVar3 = (undefined2)((ulong)lVar2 >> 0x10);
  *(undefined2 *)0x44e = (int)lVar2;
  *(byte *)0x462 = bVar1;
  return;
}



// Function: FUN_1a22_3878 @ 1a22:3878

void __cdecl16near FUN_1a22_3878(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  int in_CX;
  int iVar4;
  undefined1 *in_BX;
  undefined2 *puVar5;
  undefined1 *puVar6;
  undefined2 unaff_DS;
  
  if (in_CX == 0x28) {
    puVar5 = (undefined2 *)0x8ed1;
    for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar3 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar3 = 0x3875;
    }
  }
  puVar6 = (undefined1 *)0x8e9a;
  for (; in_CX != 0; in_CX = in_CX + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = in_BX;
    in_BX = in_BX + 1;
    *puVar2 = *puVar1;
  }
  (*(code *)*(undefined2 *)0x8edd)();
  *(undefined1 *)0xb9e4 = 0;
  *(undefined2 *)0xb9b8 = 0;
  *(undefined2 *)0xb9bc = 0x312b;
  *(undefined2 *)0xb9be = 0x1a22;
  return;
}



// Function: FUN_1a22_38c0 @ 1a22:38c0

void __cdecl16near FUN_1a22_38c0(undefined1 param_1,undefined2 param_2,undefined2 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined2 unaff_DS;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar4 = *(undefined2 *)0xb9b8;
  uVar3 = *(undefined2 *)0xb9b4;
  (*(code *)*(undefined2 *)0x8ed1)();
  *(undefined2 *)0xb9d2 = *(undefined2 *)0xb9b4;
  *(undefined2 *)0xb9d4 = *(undefined2 *)0xb9b8;
  (*(code *)*(undefined2 *)0x8ed1)();
  uVar1 = *(uint *)0xb9b4;
  uVar2 = *(uint *)0x8ec4;
  *(int *)0xb9ce = uVar1 + *(uint *)0x8ec4;
  *(int *)0xb9d0 = *(int *)0xb9b8 + (uint)CARRY2(uVar1,uVar2);
  (*(code *)*(undefined2 *)0x8ed1)(uVar3,uVar4);
  *(undefined2 *)0xb9de = *(undefined2 *)0xb9b4;
  *(undefined1 *)0xb9e2 = *(undefined1 *)0xb9b2;
  (*(code *)*(undefined2 *)0x8ed1)();
  *(undefined2 *)0xb9e0 = *(undefined2 *)0xb9b4;
  *(undefined1 *)0xb9e3 = *(undefined1 *)0xb9b2;
  *(undefined1 *)0xb9b2 = param_1;
  *(undefined2 *)0xb9b4 = param_2;
  *(undefined2 *)0xb9b8 = param_3;
  return;
}



// Function: FUN_1a22_392e @ 1a22:392e

undefined2 __cdecl16near FUN_1a22_392e(void)

{
  undefined2 in_AX;
  
  return in_AX;
}



// Function: FUN_1a22_394c @ 1a22:394c

void __cdecl16near FUN_1a22_394c(void)

{
  undefined1 in_AL;
  undefined1 in_AH;
  int in_DX;
  
  out(in_DX,in_AL);
  out(in_DX + 1,in_AH);
  return;
}



// Function: FUN_1a22_3b72 @ 1a22:3b72

void __cdecl16far FUN_1a22_3b72(byte *param_1)

{
  byte *pbVar1;
  char cVar2;
  code *pcVar3;
  byte *pbVar4;
  char extraout_DL;
  char extraout_DH;
  byte *pbVar5;
  byte *pbVar6;
  undefined2 unaff_DS;
  undefined2 uVar7;
  
  FUN_1a22_318e();
  FUN_1a22_327f();
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  pbVar5 = (byte *)param_1;
  pbVar4 = pbVar5;
  while( true ) {
    do {
      do {
        pbVar6 = pbVar4;
        pbVar4 = pbVar6 + 1;
      } while (0xd < *pbVar6);
    } while (((*pbVar6 != 0xd) && (*pbVar6 != 10)) && (*pbVar6 != 0));
    FUN_1a22_3c07();
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    if (*pbVar1 == 0) break;
    if (*pbVar1 == 0xd) {
      FUN_1a22_3c70();
      pbVar4 = pbVar5;
    }
    else {
      FUN_1a22_3c59();
      pbVar4 = pbVar5;
    }
  }
  pcVar3 = (code *)swi(0x10);
  (*pcVar3)(pbVar5,&stack0xfffe);
  cVar2 = *(char *)0xb89d;
  *(char *)0xb89b = extraout_DL - *(char *)0xb89f;
  *(char *)0xb899 = extraout_DH - cVar2;
  FUN_1a22_31b5();
  return;
}



// Function: FUN_1a22_3c07 @ 1a22:3c07

undefined2 __cdecl16near FUN_1a22_3c07(void)

{
  code *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint in_CX;
  undefined2 in_DX;
  undefined2 in_BX;
  undefined2 unaff_SS;
  undefined4 uVar5;
  
  uVar2 = 0x6135;
  if ((in_CX != 0) && (*(char *)0xb8a5 == '\0')) {
    do {
      uVar3 = (int)(char)in_DX + in_CX;
      iVar4 = uVar3 - *(uint *)0xb8a3;
      if (uVar3 < *(uint *)0xb8a3 || iVar4 == 0) {
        uVar2 = FUN_1000_0e5c();
        return uVar2;
      }
      uVar3 = iVar4 - 1;
      if (uVar3 < in_CX) {
        FUN_1000_0e5c(uVar3,in_BX);
      }
      if (*(char *)0xb8a6 == '\0') {
        *(undefined1 *)0xb8a5 = 1;
        pcVar1 = (code *)swi(0x10);
        uVar2 = (*pcVar1)();
        return uVar2;
      }
      in_CX = uVar3;
      uVar5 = FUN_1a22_3c59();
      in_DX = (undefined2)((ulong)uVar5 >> 0x10);
      uVar2 = (undefined2)uVar5;
    } while (in_CX != 0);
  }
  return uVar2;
}



// Function: FUN_1a22_3c59 @ 1a22:3c59

void FUN_1a22_3c59(void)

{
  code *pcVar1;
  char in_DH;
  undefined2 unaff_SS;
  
  if (*(byte *)0xb8a1 < (byte)(in_DH + 1U)) {
    FUN_1a22_3c86();
  }
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  *(undefined1 *)0xb8a5 = 0;
  return;
}



// Function: FUN_1a22_3c70 @ 1a22:3c70

void __cdecl16near FUN_1a22_3c70(void)

{
  code *pcVar1;
  undefined2 unaff_SS;
  
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  *(undefined1 *)0xb8a5 = 0;
  return;
}



// Function: FUN_1a22_3c86 @ 1a22:3c86

void __cdecl16near FUN_1a22_3c86(void)

{
  FUN_1a22_3524();
  return;
}



// Function: FUN_1a22_4625 @ 1a22:4625

undefined4 __cdecl16near FUN_1a22_4625(void)

{
  byte *pbVar1;
  undefined2 in_AX;
  uint unaff_DI;
  undefined2 unaff_SS;
  undefined2 in_stack_00000000;
  
  out(0x3ce,4);
  out(0x3cf,*(char *)0xb9f9 + ((unaff_DI & 1) != 0));
  out(0x3c4,2);
  out(0x3c5,*(byte *)0xb9c5 & *(byte *)0xb9f8 & 0xf);
  pbVar1 = (byte *)0xb9f8;
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  (*(code *)*(undefined2 *)0x8eff)();
  return CONCAT22(in_AX,in_stack_00000000);
}



// Function: FUN_1a22_4b52 @ 1a22:4b52

void __cdecl16near FUN_1a22_4b52(void)

{
  undefined2 unaff_DS;
  
  if (((*(byte *)0xb9af & 0x10) != 0) && ((*(byte *)0xb9a7 & 4) != 0)) {
    FUN_1a22_3878();
    return;
  }
  return;
}



// Function: FUN_1a22_4b7e @ 1a22:4b7e

void __cdecl16near FUN_1a22_4b7e(void)

{
  undefined2 in_AX;
  undefined2 unaff_DS;
  undefined1 in_CF;
  
  FUN_1a22_4b52();
  if (!(bool)in_CF) {
    *(undefined2 *)0x8e9c = in_AX;
    *(undefined1 *)0x8e9a = 0x66;
    *(undefined2 *)0x8ea0 = 800;
    *(undefined2 *)0x8ea2 = 600;
    *(undefined2 *)0x8ec4 = 100;
    *(undefined1 *)0x8e9e = 100;
    *(undefined2 *)0x8ed1 = 0x5d7e;
  }
  return;
}



// Function: FUN_1a22_518f @ 1a22:518f

void __cdecl16near FUN_1a22_518f(void)

{
  int *piVar1;
  uint *puVar2;
  undefined2 *puVar3;
  uint *puVar4;
  undefined2 uVar5;
  uint uVar6;
  byte bVar7;
  int in_AX;
  int iVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  undefined2 *puVar13;
  uint *puVar14;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar15;
  undefined2 local_10c [132];
  int local_4;
  
  if ((*(byte *)0xb9af & 0x10) != 0) {
    puVar13 = local_10c;
    local_4 = in_AX;
    for (iVar10 = 0x80; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar3 = puVar13;
      puVar13 = puVar13 + 1;
      *puVar3 = 0;
    }
    puVar12 = puVar13 + -0x80;
    *(undefined2 *)0xba46 = 0;
    *(undefined2 *)0xba48 = 0;
    *(undefined2 *)0xba42 = 0;
    iVar10 = local_4;
    iVar8 = FUN_1a22_37a8();
    if ((iVar8 == 0x4f) && (uVar11 = *puVar12, (uVar11 & 1) != 0)) {
      if ((uVar11 & 4) == 0) {
        *(undefined1 *)0xb99e = 4;
      }
      if ((iVar10 == 0x6a) || (iVar10 == 0x102)) {
        FUN_1a22_4b7e();
        *(undefined2 *)0x8eb6 = 0x5344;
      }
      else {
        if ((uVar11 & 2) == 0) {
          cVar9 = (char)((uint)iVar10 >> 8) + -1;
          if (cVar9 != '\0') {
            return;
          }
          if (7 < (byte)iVar10) {
            return;
          }
          iVar8 = 0xc;
          iVar10 = CONCAT11(cVar9,(byte)iVar10) * 0xc;
          do {
            *(undefined2 *)((int)puVar12 + iVar10 + 0x12) = *(undefined2 *)(iVar10 + 0x50d6);
            iVar10 = iVar10 + 2;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        uVar11 = puVar13[-0x7f] & 0x707;
        if (puVar13[-0x7d] == 0x20) {
          if (uVar11 != 0x707) {
            return;
          }
          *(int *)0xba42 = *(int *)0xba42 + 1;
          uVar11 = puVar13[-0x7c];
          *(uint *)0x8ea4 = uVar11;
          iVar10 = uVar11 - puVar13[-0x7b];
          uVar6 = (uint)(uVar11 < (uint)puVar13[-0x7b]);
          uVar11 = *(uint *)0xba48;
          *(uint *)0xba48 = uVar11 - uVar6;
          if (uVar6 <= uVar11) {
            *(int *)0xba46 = *(int *)0xba46 + -1;
            *(int *)0x8ea4 = *(int *)0x8ea4 - iVar10;
            iVar10 = -iVar10;
          }
          if (iVar10 != -0x800) {
            return;
          }
        }
        else {
          if (puVar13[-0x7d] != 0x40) {
            return;
          }
          bVar15 = (byte)uVar11 == 7;
          if (!bVar15) {
            if ((byte)((byte)uVar11 | (byte)(uVar11 >> 8)) != 7) {
              return;
            }
            piVar1 = (int *)0xba42;
            *piVar1 = *piVar1 + 1;
            bVar15 = *piVar1 == 0;
          }
          iVar10 = puVar13[-0x7c];
          *(int *)0x8ea4 = iVar10;
          if ((!bVar15) && (iVar10 != puVar13[-0x7b])) {
            return;
          }
        }
        if ((*(byte *)((int)puVar13 + -0xe5) < 5) && (2 < *(byte *)((int)puVar13 + -0xe5))) {
          puVar14 = (uint *)0xb9fc;
          for (iVar10 = 0xf; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar4 = puVar14;
            puVar14 = puVar14 + 1;
            puVar2 = puVar12;
            puVar12 = puVar12 + 1;
            *puVar4 = *puVar2;
          }
          uVar5 = *(undefined2 *)0x8ea4;
          FUN_1a22_3878();
          *(undefined2 *)0x8ea4 = uVar5;
          *(int *)0x8e9c = local_4;
          *(char *)0x8e9a = (char)((uint)local_4 >> 8) * 'd' + (char)local_4;
          *(undefined2 *)0xb9bc = *(undefined2 *)0xba08;
          *(undefined2 *)0xb9be = *(undefined2 *)0xba0a;
          uVar11 = *(uint *)0xba0e;
          *(uint *)0x8ea0 = uVar11;
          uVar6 = (uint)*(byte *)0xba12;
          if (*(byte *)0xba12 == 0) {
            uVar6 = 8;
          }
          *(undefined1 *)0x8e9e = (char)(uVar11 / uVar6);
          *(undefined2 *)0x8ea2 = *(undefined2 *)0xba10;
          *(undefined1 *)0x8ec3 = *(undefined1 *)0xba14;
          *(undefined2 *)0x8ec4 = *(undefined2 *)0xba0c;
          *(char *)0xba3e = -((int)(0x10000 % (ulong)*(uint *)0x8ec4) == 0);
          bVar7 = (byte)(0x40 / *(byte *)0xba00);
          *(int *)0xba40 = (int)(char)bVar7;
          cVar9 = '\0';
          bVar7 = bVar7 >> 1;
          uVar11 = (uint)bVar7;
          if (bVar7 != 0) {
            *(uint *)0xba46 = *(uint *)0xba46 & uVar11;
            *(uint *)0xba48 = *(uint *)0xba48 & uVar11;
            cVar9 = '\0';
            do {
              cVar9 = cVar9 + '\x01';
              bVar7 = (byte)uVar11 >> 1;
              uVar11 = (uint)bVar7;
            } while (bVar7 != 0);
          }
          *(char *)0xba3f = cVar9;
        }
      }
    }
  }
  return;
}



// Function: FUN_1a22_53e6 @ 1a22:53e6

undefined2 __cdecl16near FUN_1a22_53e6(void)

{
  int iVar1;
  undefined2 in_AX;
  undefined2 unaff_DS;
  
  LOCK();
  *(undefined2 *)0x8e7e = 0xffff;
  UNLOCK();
  *(undefined2 *)0xb9b8 = 0;
  FUN_1a22_5413();
  iVar1 = *(int *)0xba42;
  *(undefined2 *)0xba3c = 0;
  if (iVar1 != 0) {
    (*(code *)*(undefined2 *)0xb9bc)(0x1a22);
  }
  return in_AX;
}



// Function: FUN_1a22_5413 @ 1a22:5413

void __cdecl16near FUN_1a22_5413(void)

{
  undefined2 in_AX;
  int iVar1;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar2;
  
  *(undefined2 *)0xba3c = in_AX;
  iVar1 = *(int *)0xba42;
  do {
    (*(code *)*(undefined2 *)0xb9bc)(0x1a22);
    bVar2 = iVar1 == 1;
    iVar1 = 0;
  } while (bVar2);
  return;
}



// Function: FUN_1a22_5975 @ 1a22:5975

void __cdecl16near FUN_1a22_5975(void)

{
  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  byte bVar5;
  byte extraout_AH;
  uint uVar4;
  byte extraout_AH_00;
  byte bVar6;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  uint in_BX;
  byte *pbVar8;
  undefined2 uVar9;
  undefined2 unaff_DS;
  bool bVar10;
  undefined2 uVar7;
  
  *(undefined1 *)0xb897 = 1;
  uVar9 = (undefined2)((ulong)*(undefined4 *)0xb9b4 >> 0x10);
  pbVar8 = (byte *)(byte *)*(undefined4 *)0xb9b4;
  uVar7 = *(undefined2 *)0xb9b2;
  bVar10 = (char)uVar7 == '\0';
  if ((char)uVar7 < '\0') goto LAB_1a22_59ac;
  do {
    bVar5 = 0;
    do {
      bVar6 = (byte)uVar7;
      bVar5 = bVar5 | bVar6;
      in_BX = in_BX - 1;
      if (in_BX == 0) {
        if (*(char *)0xb9c1 != '\0') {
          FUN_1a22_5a19();
          uVar7 = extraout_DX_00;
          bVar5 = extraout_AH_00;
        }
        *pbVar8 = *pbVar8 ^ ((byte)((uint)uVar7 >> 8) ^ *pbVar8) & bVar5;
        return;
      }
      bVar3 = *(byte *)0x8ec2 & 7;
      bVar6 = bVar6 >> bVar3 | bVar6 << 8 - bVar3;
      uVar7 = CONCAT11((char)((uint)uVar7 >> 8),bVar6);
    } while ((*(byte *)0x8ec2 & 0x1f) == 0 || -1 < (char)bVar6);
    if (*(char *)0xb9c1 != '\0') {
      FUN_1a22_5a19();
      uVar7 = extraout_DX;
      bVar5 = extraout_AH;
    }
    *pbVar8 = *pbVar8 ^ ((byte)((uint)uVar7 >> 8) ^ *pbVar8) & bVar5;
    pbVar8 = pbVar8 + 1;
    bVar10 = pbVar8 == (byte *)0x0;
LAB_1a22_59ac:
    uVar4 = in_BX >> (*(byte *)0x8eca & 0x1f);
    bVar2 = (*(byte *)0x8eca & 0x1f) != 0;
    if (!(bool)(!bVar2 & bVar10 | (bVar2 && uVar4 == 0))) {
      bVar5 = (byte)((uint)uVar7 >> 8);
      if (*(char *)0xb9c1 == '\0') {
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          pbVar1 = pbVar8;
          pbVar8 = pbVar8 + 1;
          *pbVar1 = bVar5;
        }
      }
      else {
        bVar6 = *(byte *)0xb94f;
        if (*(char *)0x8ec2 == '\x02') {
          do {
            *pbVar8 = *pbVar8 ^ (bVar5 ^ *pbVar8) &
                                *(byte *)(((uint)bVar6 << 1 | (uint)(((uint)pbVar8 & 1) != 0)) +
                                         0xb887);
            pbVar8 = pbVar8 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        else {
          do {
            *pbVar8 = *pbVar8 ^ (bVar5 ^ *pbVar8) & *(byte *)(bVar6 + 0xb887);
            pbVar8 = pbVar8 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
      }
    }
    in_BX = in_BX & *(uint *)0x8ecb;
  } while (in_BX != 0);
  return;
}



// Function: FUN_1a22_5a19 @ 1a22:5a19

void __cdecl16near FUN_1a22_5a19(void)

{
  return;
}



// Function: FUN_1a22_5a7c @ 1a22:5a7c

undefined2 __cdecl16near FUN_1a22_5a7c(void)

{
  byte bVar1;
  undefined2 in_AX;
  byte bVar2;
  byte in_CH;
  byte in_DL;
  byte in_DH;
  byte in_BL;
  
  bVar2 = (byte)((uint)in_AX >> 8);
  bVar1 = 0;
  if (((in_BL ^ in_DL) & in_CH) != 0) {
    bVar1 = (in_BL ^ in_DH) & in_CH & bVar2;
  }
  return CONCAT11(bVar2,bVar1);
}



// Function: FUN_1a22_6168 @ 1a22:6168

void __cdecl16near FUN_1a22_6168(void)

{
  return;
}



// Function: FUN_1a22_64c6 @ 1a22:64c6

void __cdecl16near FUN_1a22_64c6(void)

{
  char *pcVar1;
  char cVar2;
  undefined2 in_AX;
  byte bVar3;
  int iVar4;
  undefined2 unaff_SI;
  undefined2 unaff_DS;
  bool bVar5;
  
  bVar3 = 0x80;
  iVar4 = 8;
  do {
    bVar3 = bVar3 << 1 | (char)bVar3 < '\0';
    iVar4 = iVar4 + -1;
    bVar5 = (bool)((byte)in_AX & 1);
    in_AX = CONCAT11((char)((uint)in_AX >> 8),(byte)in_AX >> 1 | bVar5 << 7);
  } while (!bVar5);
  *(byte *)0xb9b2 = bVar3;
  while( true ) {
    bVar3 = (byte)((uint)in_AX >> 8);
    if ((*(byte *)0xb9b2 & bVar3) != 0) {
      *(undefined2 *)0xb9b4 = unaff_SI;
      cVar2 = (*(code *)*(undefined2 *)0x8edf)();
      if (*(char *)(iVar4 + -0x45a3) != cVar2) {
        return;
      }
    }
    iVar4 = iVar4 + -1;
    bVar5 = (bool)((byte)in_AX & 1);
    in_AX = CONCAT11(bVar3,(byte)in_AX >> 1 | bVar5 << 7);
    if (!bVar5) break;
    pcVar1 = (char *)0xb9b2;
    cVar2 = *pcVar1;
    *pcVar1 = *pcVar1 << 1;
    if (cVar2 < '\0') {
      return;
    }
  }
  return;
}



// Function: FUN_1a22_64fb @ 1a22:64fb

void __cdecl16near FUN_1a22_64fb(void)

{
  byte *pbVar1;
  char cVar2;
  undefined2 in_AX;
  byte bVar3;
  int iVar4;
  undefined2 unaff_SI;
  undefined2 unaff_DS;
  
  bVar3 = 1;
  iVar4 = -1;
  do {
    bVar3 = bVar3 >> 1 | bVar3 << 7;
    iVar4 = iVar4 + 1;
    cVar2 = (char)in_AX;
    in_AX = CONCAT11((char)((uint)in_AX >> 8),cVar2 << 1 | cVar2 < '\0');
  } while (cVar2 >= '\0');
  *(undefined2 *)0xb9b4 = unaff_SI;
  *(byte *)0xb9b2 = bVar3;
  do {
    bVar3 = (byte)((uint)in_AX >> 8);
    if (((*(byte *)0xb9b2 & bVar3) != 0) &&
       (cVar2 = (*(code *)*(undefined2 *)0x8edf)(), *(char *)(iVar4 + -0x45a3) != cVar2)) {
      return;
    }
    cVar2 = (char)in_AX;
    in_AX = CONCAT11(bVar3,cVar2 << 1 | cVar2 < '\0');
    if (cVar2 >= '\0') {
      return;
    }
    iVar4 = iVar4 + 1;
    pbVar1 = (byte *)0xb9b2;
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 >> 1;
  } while (!(bool)(bVar3 & 1));
  return;
}



// Function: FUN_1a22_67df @ 1a22:67df

void __cdecl16near FUN_1a22_67df(void)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  code *pcVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  puVar7 = (uint *)&stack0xfffe;
  puVar5 = (uint *)(*(byte *)0x8ea6 + 1);
  pcVar4 = (code *)swi(0x10);
  puVar6 = puVar5;
  (*pcVar4)();
  do {
    puVar1 = puVar5;
    puVar2 = puVar5 + 1;
    puVar5 = puVar5 + 2;
    uVar3 = *puVar2;
    if ((*puVar1 != 0xffff) || (uVar3 != 0xffff)) {
      *puVar7 = *puVar1 & 0x3f3f;
      *(byte *)(puVar7 + 1) = (byte)uVar3 & 0x3f;
    }
    puVar7 = (uint *)((int)puVar7 + 3);
    puVar6 = (uint *)((int)puVar6 + -1);
  } while (puVar6 != (uint *)0x0);
  pcVar4 = (code *)swi(0x10);
  (*pcVar4)(puVar5,unaff_DS);
  return;
}



// Function: FUN_2116_0010 @ 2116:0010

void __cdecl16near FUN_2116_0010(void)

{
  return;
}



// Function: FUN_2116_0011 @ 2116:0011

void __cdecl16far FUN_2116_0011(void)

{
  FUN_2116_0010();
  return;
}



// Function: FUN_2116_0060 @ 2116:0060

void __cdecl16far FUN_2116_0060(void)

{
  undefined2 unaff_DS;
  
  (*(code *)*(undefined2 *)0xa89c)();
  return;
}



// Function: FUN_2116_0782 @ 2116:0782

void __cdecl16far FUN_2116_0782(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined2 unaff_DS;
  
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if ((byte)uVar3 < 2) {
    return;
  }
  uVar5 = *(int *)0x2 + 0x9ecb;
  if (0xfff < uVar5) {
    uVar5 = 0x1000;
  }
  if ((undefined1 *)0x33d1 < &stack0x0004) {
    unaff_DS = 0x6135;
    FUN_2116_0a10();
    FUN_2116_0cf3();
    pcVar2 = (code *)swi(0x21);
    uVar3 = (*pcVar2)();
  }
  DAT_6135_9d04 = CONCAT11((char)uVar3,(char)((uint)uVar3 >> 8));
  DAT_6135_9cc4 = uVar5 * 0x10 + -1;
  DAT_6135_9cc6 = 0x6135;
  DAT_6135_9cca = &stack0xcc32;
  DAT_6135_9cd0 = &stack0xcc30;
  DAT_6135_9ccc = &stack0xcc2e;
  DAT_6135_9cce = &stack0xcc2e;
  DAT_6135_9cc0 = &stack0xcc2e;
  DAT_6135_9d06 = uVar3;
  *(int *)0x2 = uVar5 + 0x6135;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  puVar6 = (undefined1 *)0xb012;
  DAT_6135_9d02 = unaff_DS;
  for (iVar4 = 0x1c1e; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = 0;
  }
  if (DAT_6135_a8ae != (code *)0x0) {
    (*DAT_6135_a8ae)();
  }
  FUN_2116_0c28();
  FUN_2116_0a80();
  FUN_2116_0894();
  FUN_1129_000a();
  FUN_2116_095d();
  return;
}



// Function: FUN_2116_0866 @ 2116:0866

void FUN_2116_0866(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined2 uVar5;
  undefined2 in_AX;
  int iVar6;
  char extraout_DH;
  uint extraout_DX;
  undefined2 uVar7;
  int iVar8;
  byte *pbVar9;
  char *unaff_DI;
  byte *pbVar10;
  undefined2 unaff_ES;
  undefined2 uVar11;
  undefined2 unaff_SS;
  bool bVar12;
  
  uVar5 = DAT_1a22_6672;
  uVar11 = 0x2116;
  uVar7 = DAT_1a22_6672;
  FUN_2116_0d50();
  FUN_2116_0a10();
  FUN_2116_0cf3(in_AX);
  if (*(int *)0xa89a == -0x292a) {
    uVar11 = 0x2000;
    (*(code *)*(undefined2 *)0xa89e)();
  }
  (*(code *)*(undefined2 *)0x9cc2)(uVar11,0xff);
  *unaff_DI = *unaff_DI + extraout_DH;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  *(undefined2 *)0x9cee = uVar7;
  *(undefined2 *)0x9cf0 = unaff_ES;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  if (*(int *)0xa8b4 != 0) {
    bVar12 = false;
    (*(code *)*(undefined2 *)0xa8b2)();
    if (bVar12) {
      FUN_2116_0a32();
      return;
    }
    (*(code *)*(undefined2 *)0xa8b2)();
  }
  iVar8 = *(int *)0x2c;
  if (iVar8 != 0) {
    pbVar10 = (byte *)0x0;
    do {
      if (*pbVar10 == 0) break;
      iVar6 = 0xd;
      pbVar9 = (byte *)0x9ce0;
      bVar12 = false;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar3 = pbVar10;
        pbVar10 = pbVar10 + 1;
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar12 = *pbVar1 == *pbVar3;
      } while (bVar12);
      if (bVar12) {
        pbVar9 = (byte *)0x9d0e;
        goto LAB_2116_0911;
      }
      iVar6 = 0x7fff;
      bVar12 = true;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar1 = pbVar10;
        pbVar10 = pbVar10 + 1;
        bVar12 = *pbVar1 == 0;
      } while (!bVar12);
    } while (bVar12);
  }
LAB_2116_0925:
  iVar8 = 4;
  do {
    bVar12 = false;
    *(byte *)(iVar8 + -0x62f2) = *(byte *)(iVar8 + -0x62f2) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar12) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar8 + -0x62f2) = *(byte *)(iVar8 + -0x62f2) | 0x40;
    }
    iVar8 = iVar8 + -1;
  } while (-1 < iVar8);
  FUN_2116_09fd();
  FUN_2116_09fd();
  FUN_2116_09fd();
  return;
LAB_2116_0911:
  pbVar1 = pbVar10;
  pbVar2 = pbVar10 + 1;
  if (*pbVar1 < 0x41) goto LAB_2116_0925;
  pbVar10 = pbVar10 + 2;
  if (*pbVar2 < 0x41) goto LAB_2116_0925;
  pbVar3 = pbVar9;
  pbVar9 = pbVar9 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_2116_0911;
}



// Function: FUN_2116_0894 @ 2116:0894

void __cdecl16far FUN_2116_0894(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  code *pcVar4;
  int iVar5;
  uint extraout_DX;
  undefined2 in_BX;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  *(undefined2 *)0x9cee = in_BX;
  *(undefined2 *)0x9cf0 = unaff_ES;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  if (*(int *)0xa8b4 != 0) {
    bVar9 = false;
    (*(code *)*(undefined2 *)0xa8b2)();
    if (bVar9) {
      FUN_2116_0a32();
      return;
    }
    (*(code *)*(undefined2 *)0xa8b2)();
  }
  iVar6 = *(int *)0x2c;
  if (iVar6 != 0) {
    pbVar8 = (byte *)0x0;
    do {
      if (*pbVar8 == 0) break;
      iVar5 = 0xd;
      pbVar7 = (byte *)0x9ce0;
      bVar9 = false;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar3 = pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar1 = pbVar7;
        pbVar7 = pbVar7 + 1;
        bVar9 = *pbVar1 == *pbVar3;
      } while (bVar9);
      if (bVar9) {
        pbVar7 = (byte *)0x9d0e;
        goto LAB_2116_0911;
      }
      iVar5 = 0x7fff;
      bVar9 = true;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar1 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar9 = *pbVar1 == 0;
      } while (!bVar9);
    } while (bVar9);
  }
LAB_2116_0925:
  iVar6 = 4;
  do {
    bVar9 = false;
    *(byte *)(iVar6 + -0x62f2) = *(byte *)(iVar6 + -0x62f2) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar9) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar6 + -0x62f2) = *(byte *)(iVar6 + -0x62f2) | 0x40;
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  FUN_2116_09fd();
  FUN_2116_09fd();
  FUN_2116_09fd();
  return;
LAB_2116_0911:
  pbVar1 = pbVar8;
  pbVar2 = pbVar8 + 1;
  if (*pbVar1 < 0x41) goto LAB_2116_0925;
  pbVar8 = pbVar8 + 2;
  if (*pbVar2 < 0x41) goto LAB_2116_0925;
  pbVar3 = pbVar7;
  pbVar7 = pbVar7 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_2116_0911;
}



// Function: FUN_2116_095d @ 2116:095d

void FUN_2116_095d(void)

{
  FUN_2116_097e();
  return;
}



// Function: FUN_2116_0964 @ 2116:0964

void FUN_2116_0964(void)

{
  FUN_2116_097e();
  return;
}



// Function: FUN_2116_097e @ 2116:097e

void __cdecl16far FUN_2116_097e(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 in_CX;
  char cVar3;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  cVar3 = (char)((uint)in_CX >> 8);
  *(char *)0x9d39 = cVar3;
  if ((char)in_CX == '\0') {
    FUN_2116_09fd();
    FUN_2116_09fd();
    if (*(int *)0xa89a == -0x292a) {
      (*(code *)*(undefined2 *)0xa8a0)();
    }
  }
  FUN_2116_09fd();
  FUN_2116_09fd();
  iVar2 = FUN_2116_0a5c();
  if (((iVar2 != 0) && (cVar3 == '\0')) && (*(int *)(unaff_BP + 6) == 0)) {
    *(undefined2 *)(unaff_BP + 6) = 0xff;
  }
  FUN_2116_09e4();
  if (cVar3 == '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}



// Function: FUN_2116_09e4 @ 2116:09e4

void __cdecl16near FUN_2116_09e4(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0xa8b4 != 0) {
    (*(code *)*(undefined2 *)0xa8b2)(0x2116);
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_09fd @ 2116:09fd

void __cdecl16near FUN_2116_09fd(void)

{
  int *piVar1;
  int *unaff_SI;
  int *unaff_DI;
  int *piVar2;
  undefined2 unaff_DS;
  
  while (unaff_SI < unaff_DI) {
    piVar2 = unaff_DI + -2;
    piVar1 = unaff_DI + -1;
    unaff_DI = piVar2;
    if (*piVar2 != 0 || *piVar1 != 0) {
      (*(code *)*piVar2)(0x2116);
    }
  }
  return;
}



// Function: FUN_2116_0a10 @ 2116:0a10

void __cdecl16far FUN_2116_0a10(void)

{
  undefined2 unaff_DS;
  
  FUN_2116_0cf3(0xfc);
  if (*(int *)0x9d3c != 0) {
    (*(code *)*(undefined2 *)0x9d3a)(0x2116);
  }
  FUN_2116_0cf3(0xff);
  return;
}



// Function: FUN_2116_0a32 @ 2116:0a32

void FUN_2116_0a32(void)

{
  FUN_2116_0866();
  return;
}



// Function: FUN_2116_0a38 @ 2116:0a38

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16far FUN_2116_0a38(void)

{
  int iVar1;
  undefined1 *in_AX;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  undefined2 in_stack_00000002;
  
  iVar1 = -(int)in_AX;
  if ((in_AX <= &stack0x0004) && ((undefined1 *)*(uint *)0x9d42 <= &stack0x0004 + iVar1)) {
    *(undefined2 *)(&stack0x0002 + iVar1) = in_stack_00000002;
    *(undefined2 *)(&stack0x0000 + iVar1) = in_stack_00000000;
    return;
  }
  if (*(int *)0x9d3e == -1) {
    FUN_2116_0866();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00021bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)0x9d3e)();
  return;
}



// Function: FUN_2116_0a5c @ 2116:0a5c

uint __cdecl16far FUN_2116_0a5c(void)

{
  byte *pbVar1;
  byte bVar3;
  uint uVar2;
  int iVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  
  pbVar5 = (byte *)0x0;
  iVar4 = 0x42;
  bVar3 = 0;
  do {
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = bVar3 ^ *pbVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar2 = CONCAT11(bVar3,*pbVar1) ^ 0x5500;
  if (bVar3 != 0x55) {
    FUN_2116_0a10();
    FUN_2116_0cf3(1);
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_2116_0a80 @ 2116:0a80

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_2116_0a80(undefined2 param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  undefined2 uVar13;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  
  *(undefined2 *)0x9d44 = in_stack_00000000;
  *(undefined2 *)0x9d46 = param_1;
  uVar7 = 1;
  if ((char)*(undefined2 *)0x9d06 != '\x02') {
    uVar13 = *(undefined2 *)0x2c;
    *(undefined2 *)0x9d2e = uVar13;
    iVar5 = -0x8000;
    pcVar10 = (char *)0x0;
LAB_2116_0aa7:
    do {
      pcVar11 = pcVar10;
      if (iVar5 != 0) {
        iVar5 = iVar5 + -1;
        pcVar3 = pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar10;
        if (*pcVar3 != '\0') goto LAB_2116_0aa7;
      }
      pcVar10 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    pcVar11 = pcVar11 + 3;
    *(undefined2 *)0x9d2c = pcVar11;
    uVar7 = 0xffff;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar3 = pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (*pcVar3 != '\0');
    uVar7 = ~uVar7;
  }
  iVar5 = 1;
  pcVar10 = (char *)0x81;
  uVar13 = *(undefined2 *)0x9d02;
LAB_2116_0ac5:
  do {
    do {
      pcVar3 = pcVar10;
      pcVar10 = pcVar10 + 1;
      cVar2 = *pcVar3;
    } while (cVar2 == ' ');
  } while (cVar2 == '\t');
  if ((cVar2 != '\r') && (cVar2 != '\0')) {
    iVar5 = iVar5 + 1;
    do {
      pcVar10 = pcVar10 + -1;
LAB_2116_0ad8:
      pcVar3 = pcVar10;
      pcVar10 = pcVar10 + 1;
      cVar2 = *pcVar3;
      if ((cVar2 == ' ') || (cVar2 == '\t')) goto LAB_2116_0ac5;
      if ((cVar2 == '\r') || (cVar2 == '\0')) break;
      if (cVar2 == '\"') {
LAB_2116_0b11:
        do {
          while( true ) {
            while( true ) {
              pcVar3 = pcVar10;
              pcVar10 = pcVar10 + 1;
              cVar2 = *pcVar3;
              if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_2116_0b41;
              if (cVar2 == '\"') goto LAB_2116_0ad8;
              if (cVar2 == '\\') break;
              uVar7 = uVar7 + 1;
            }
            uVar6 = 0;
            do {
              pcVar11 = pcVar10;
              uVar6 = uVar6 + 1;
              pcVar10 = pcVar11 + 1;
            } while (*pcVar11 == '\\');
            if (*pcVar11 == '\"') break;
            uVar7 = uVar7 + uVar6;
            pcVar10 = pcVar11;
          }
          uVar7 = uVar7 + (uVar6 >> 1) + (uint)((uVar6 & 1) != 0);
        } while ((uVar6 & 1) != 0);
        goto LAB_2116_0ad8;
      }
      if (cVar2 != '\\') {
        uVar7 = uVar7 + 1;
        goto LAB_2116_0ad8;
      }
      uVar6 = 0;
      do {
        uVar6 = uVar6 + 1;
        pcVar3 = pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (*pcVar3 == '\\');
      if (*pcVar3 == '\"') {
        uVar7 = uVar7 + (uVar6 >> 1) + (uint)((uVar6 & 1) != 0);
        if ((uVar6 & 1) == 0) goto LAB_2116_0b11;
        goto LAB_2116_0ad8;
      }
      uVar7 = uVar7 + uVar6;
    } while( true );
  }
LAB_2116_0b41:
  *(int *)0x9d22 = iVar5;
  iVar12 = (iVar5 + 1) * 4;
  iVar5 = -(uVar7 + iVar5 + iVar12 + 1 & 0xfffe);
  *(undefined1 **)0x9d24 = &stack0x0004 + iVar5;
  *(undefined2 *)0x9d26 = unaff_SS;
  pcVar11 = &stack0x0004 + iVar12 + iVar5;
  *(undefined2 *)((int)&stack0x0002 + iVar5) = unaff_SS;
  uVar13 = *(undefined2 *)((int)&stack0x0002 + iVar5);
  *(char **)(&stack0x0004 + iVar5) = pcVar11;
  *(undefined2 *)(&stack0x0006 + iVar5) = unaff_SS;
  puVar8 = (undefined2 *)(&stack0x0008 + iVar5);
  pcVar3 = (char *)*(undefined4 *)0x9d2c;
  pcVar10 = (char *)pcVar3;
  do {
    pcVar1 = pcVar10;
    pcVar10 = pcVar10 + 1;
    cVar2 = *pcVar1;
    pcVar1 = pcVar11;
    pcVar11 = pcVar11 + 1;
    *pcVar1 = cVar2;
  } while (cVar2 != '\0');
  uVar4 = *(undefined2 *)0x9d02;
  pcVar10 = (char *)0x81;
LAB_2116_0b86:
  do {
    do {
      pcVar3 = pcVar10;
      pcVar10 = pcVar10 + 1;
      cVar2 = *pcVar3;
    } while (cVar2 == ' ');
  } while (cVar2 == '\t');
  if ((cVar2 == '\r') || (cVar2 == '\0')) {
LAB_2116_0c19:
    *(undefined2 *)((int)&stack0x0002 + iVar5) = unaff_SS;
    uVar13 = *(undefined2 *)((int)&stack0x0002 + iVar5);
    *puVar8 = 0;
    puVar8[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x00021d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)*(uint *)0x9d44)();
    return;
  }
  *puVar8 = pcVar11;
  puVar8[1] = unaff_SS;
  puVar8 = puVar8 + 2;
  do {
    pcVar10 = pcVar10 + -1;
LAB_2116_0ba7:
    pcVar3 = pcVar10;
    pcVar10 = pcVar10 + 1;
    cVar2 = *pcVar3;
    if ((cVar2 == ' ') || (cVar2 == '\t')) {
      pcVar3 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar3 = '\0';
      goto LAB_2116_0b86;
    }
    if ((cVar2 == '\r') || (cVar2 == '\0')) {
LAB_2116_0c16:
      *pcVar11 = '\0';
      goto LAB_2116_0c19;
    }
    pcVar9 = pcVar10;
    if (cVar2 == '\"') {
LAB_2116_0be3:
      while( true ) {
        pcVar10 = pcVar9 + 1;
        cVar2 = *pcVar9;
        if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_2116_0c16;
        if (cVar2 == '\"') break;
        if (cVar2 == '\\') {
          uVar7 = 0;
          do {
            pcVar9 = pcVar10;
            uVar7 = uVar7 + 1;
            pcVar10 = pcVar9 + 1;
          } while (*pcVar9 == '\\');
          if (*pcVar9 == '\"') {
            for (uVar6 = uVar7 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
              pcVar3 = pcVar11;
              pcVar11 = pcVar11 + 1;
              *pcVar3 = '\\';
            }
            if ((uVar7 & 1) == 0) break;
            pcVar3 = pcVar11;
            pcVar11 = pcVar11 + 1;
            *pcVar3 = '\"';
            pcVar9 = pcVar10;
          }
          else {
            for (; uVar7 != 0; uVar7 = uVar7 - 1) {
              pcVar3 = pcVar11;
              pcVar11 = pcVar11 + 1;
              *pcVar3 = '\\';
            }
          }
        }
        else {
          pcVar3 = pcVar11;
          pcVar11 = pcVar11 + 1;
          *pcVar3 = cVar2;
          pcVar9 = pcVar10;
        }
      }
      goto LAB_2116_0ba7;
    }
    if (cVar2 != '\\') {
      pcVar3 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar3 = cVar2;
      goto LAB_2116_0ba7;
    }
    uVar7 = 0;
    do {
      uVar7 = uVar7 + 1;
      pcVar3 = pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar3 == '\\');
    if (*pcVar3 == '\"') {
      for (uVar6 = uVar7 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
        pcVar3 = pcVar11;
        pcVar11 = pcVar11 + 1;
        *pcVar3 = '\\';
      }
      pcVar9 = pcVar10;
      if ((uVar7 & 1) == 0) goto LAB_2116_0be3;
      pcVar3 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar3 = '\"';
      goto LAB_2116_0ba7;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar3 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar3 = '\\';
    }
  } while( true );
}



// Function: FUN_2116_0c28 @ 2116:0c28

void __cdecl16far FUN_2116_0c28(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 *puVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  int *piVar13;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar14;
  char *pcVar15;
  undefined2 *puVar16;
  
  iVar4 = *(int *)0x2c;
  iVar9 = 0;
  pcVar12 = (char *)0x0;
  iVar5 = -1;
  if (iVar4 != 0) {
    cVar3 = *(char *)0x0;
    while (cVar3 != '\0') {
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar15 = pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (*pcVar15 != '\0');
      iVar9 = iVar9 + 1;
      pcVar15 = pcVar12;
      pcVar12 = pcVar12 + 1;
      cVar3 = *pcVar15;
    }
  }
  pcVar15 = (char *)FUN_2116_0d2a();
  uVar6 = (undefined2)((ulong)pcVar15 >> 0x10);
  pcVar12 = (char *)pcVar15;
  puVar16 = (undefined2 *)FUN_2116_0d2a();
  uVar7 = (undefined2)((ulong)puVar16 >> 0x10);
  puVar8 = (undefined2 *)puVar16;
  *(undefined2 *)0x9d28 = puVar8;
  *(undefined2 *)0x9d2a = uVar7;
  piVar10 = (int *)0x0;
  do {
    if (iVar9 == 0) {
      *puVar8 = 0;
      puVar8[1] = 0;
      return;
    }
    bVar14 = *piVar10 == *(int *)0x9ce0;
    if (bVar14) {
      piVar13 = (int *)0x9ce0;
      iVar5 = 6;
      piVar11 = piVar10;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        piVar2 = piVar13;
        piVar13 = piVar13 + 1;
        piVar1 = piVar11;
        piVar11 = piVar11 + 1;
        bVar14 = *piVar1 == *piVar2;
      } while (bVar14);
      if (!bVar14) goto LAB_2116_0ca5;
    }
    else {
LAB_2116_0ca5:
      *puVar8 = pcVar12;
      puVar8[1] = uVar6;
      puVar8 = puVar8 + 2;
    }
    do {
      piVar1 = piVar10;
      piVar10 = (int *)((int)piVar10 + 1);
      iVar5 = *piVar1;
      pcVar15 = pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar15 = (char)iVar5;
    } while ((char)iVar5 != '\0');
    iVar9 = iVar9 + -1;
  } while( true );
}



// Function: FUN_2116_0cc8 @ 2116:0cc8

int * __stdcall16far FUN_2116_0cc8(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar3 = (int *)0xadf8;
  do {
    piVar1 = piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar3;
    if ((*piVar1 == param_1) || (piVar4 = (int *)0x0, *piVar1 == -1)) {
      return piVar4;
    }
    iVar2 = -1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      piVar1 = piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
    } while ((char)*piVar1 != '\0');
  } while( true );
}



// Function: FUN_2116_0cf3 @ 2116:0cf3

void __stdcall16far FUN_2116_0cf3(undefined2 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  pcVar3 = (char *)FUN_2116_0cc8(param_1);
  if (pcVar3 != (char *)0x0) {
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
    if (*(int *)0xa89a == -0x292a) {
      (*(code *)*(undefined2 *)0xa89c)();
    }
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}



// Function: FUN_2116_0d2a @ 2116:0d2a

void __cdecl16near FUN_2116_0d2a(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_DX;
  undefined2 unaff_DS;
  
  LOCK();
  uVar1 = *(undefined2 *)0x9fc2;
  *(undefined2 *)0x9fc2 = 0x400;
  UNLOCK();
  iVar2 = FUN_2116_2c1d();
  *(undefined2 *)0x9fc2 = uVar1;
  if (in_DX != 0 || iVar2 != 0) {
    return;
  }
  FUN_2116_0866();
  return;
}



// Function: FUN_2116_0d50 @ 2116:0d50

void __cdecl16far FUN_2116_0d50(void)

{
  return;
}



// Function: FUN_2116_0e20 @ 2116:0e20

undefined2 __cdecl16far
FUN_2116_0e20(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  int iVar1;
  undefined2 uVar2;
  int in_DX;
  
  iVar1 = FUN_2116_25e6();
  if (in_DX == 0 && iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_2116_142c(param_1,param_2,param_3,param_4,param_5,iVar1,in_DX);
  }
  return uVar2;
}



// Function: FUN_2116_0e54 @ 2116:0e54

void __cdecl16far
FUN_2116_0e54(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  FUN_2116_0e20(param_1,param_2,param_3,param_4,0);
  return;
}



// Function: FUN_2116_0e70 @ 2116:0e70

undefined2 __cdecl16far FUN_2116_0e70(undefined2 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar1 = FUN_2116_1568(param_1);
  uVar2 = FUN_2116_20fc(0x2116,param_1);
  FUN_2116_15e9(uVar1,param_1);
  return uVar2;
}



// Function: FUN_2116_0eb0 @ 2116:0eb0

uint __cdecl16far FUN_2116_0eb0(uint param_1,undefined2 param_2,uint param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  lVar1 = (ulong)param_3 * (ulong)param_4;
  lVar2 = lVar1;
  if (lVar1 == 0) {
    param_4 = 0;
  }
  else {
    while( true ) {
      iVar7 = (int)((ulong)lVar2 >> 0x10);
      uVar3 = (uint)lVar2;
      if (((iVar7 == 0) && (uVar3 != 0xffff)) &&
         ((param_1 + uVar3 == 0 || (!CARRY2(param_1,uVar3))))) break;
      if (param_1 < 2) {
        uVar4 = 0x8000;
      }
      else {
        uVar4 = -param_1;
      }
      uVar6 = FUN_2116_0f53();
      iVar5 = uVar3 - uVar6;
      iVar7 = iVar7 - (uint)(uVar3 < uVar6);
      if ((uVar6 < uVar4) ||
         (param_1 = param_1 + uVar6, lVar2 = CONCAT22(iVar7,iVar5), iVar5 == 0 && iVar7 == 0))
      goto LAB_2116_0f31;
    }
    uVar4 = FUN_2116_0f53(0,param_1);
    iVar5 = uVar3 - uVar4;
    iVar7 = iVar7 - (uint)(uVar3 < uVar4);
LAB_2116_0f31:
    if (iVar5 != 0 || iVar7 != 0) {
      param_4 = (uint)((ulong)(lVar1 - CONCAT22(iVar7,iVar5)) / (ulong)param_3);
    }
  }
  return param_4;
}



// Function: FUN_2116_0f53 @ 2116:0f53

int __cdecl16near FUN_2116_0f53(void)

{
  uint uVar1;
  int iVar2;
  uint in_CX;
  uint uVar3;
  undefined1 *in_BX;
  int *unaff_SI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  uint local_6;
  
  uVar3 = in_CX;
  if (((*(byte *)(unaff_SI + 5) & 0xc) == 0) && ((*(byte *)(unaff_SI + 0x78) & 1) == 0)) {
    local_6 = 0x200;
  }
  else {
    local_6 = unaff_SI[0x79];
  }
  do {
    if ((((*(byte *)(unaff_SI + 5) & 0xc) == 0) && ((*(byte *)(unaff_SI + 0x78) & 1) == 0)) ||
       (uVar1 = unaff_SI[2], uVar1 == 0)) {
      if (uVar3 < local_6) {
        iVar2 = FUN_2116_1220();
        if (iVar2 == -1) break;
        *in_BX = (char)iVar2;
        in_BX = in_BX + 1;
        uVar3 = uVar3 - 1;
        local_6 = unaff_SI[0x79];
      }
      else {
        iVar2 = FUN_2116_293c(0x2116,*(undefined1 *)((int)unaff_SI + 0xb),in_BX,unaff_ES,
                              uVar3 - uVar3 % local_6);
        if (iVar2 == 0) {
          *(byte *)(unaff_SI + 5) = *(byte *)(unaff_SI + 5) | 0x10;
          break;
        }
        if (iVar2 == -1) {
          *(byte *)(unaff_SI + 5) = *(byte *)(unaff_SI + 5) | 0x20;
          break;
        }
        uVar3 = uVar3 - iVar2;
        in_BX = in_BX + iVar2;
      }
    }
    else {
      if (uVar3 < uVar1) {
        uVar1 = uVar3;
      }
      FUN_2116_40e2(in_BX,unaff_ES,*unaff_SI,unaff_SI[1],uVar1);
      uVar3 = uVar3 - uVar1;
      unaff_SI[2] = unaff_SI[2] - uVar1;
      in_BX = in_BX + uVar1;
      *unaff_SI = *unaff_SI + uVar1;
    }
  } while (uVar3 != 0);
  return in_CX - uVar3;
}



// Function: FUN_2116_1024 @ 2116:1024

void __cdecl16far FUN_2116_1024(void)

{
  FUN_2116_177c();
  return;
}



// Function: FUN_2116_1044 @ 2116:1044

uint __cdecl16far FUN_2116_1044(uint param_1,undefined2 param_2,uint param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  lVar1 = (ulong)param_3 * (ulong)param_4;
  lVar2 = lVar1;
  if (lVar1 == 0) {
    param_4 = 0;
  }
  else {
    while( true ) {
      iVar7 = (int)((ulong)lVar2 >> 0x10);
      uVar3 = (uint)lVar2;
      if (((iVar7 == 0) && (uVar3 != 0xffff)) &&
         ((param_1 + uVar3 == 0 || (!CARRY2(param_1,uVar3))))) break;
      if (param_1 < 2) {
        uVar4 = 0x8000;
      }
      else {
        uVar4 = -param_1;
      }
      uVar6 = FUN_2116_10e7();
      iVar5 = uVar3 - uVar6;
      iVar7 = iVar7 - (uint)(uVar3 < uVar6);
      if ((uVar6 < uVar4) ||
         (param_1 = param_1 + uVar6, lVar2 = CONCAT22(iVar7,iVar5), iVar5 == 0 && iVar7 == 0))
      goto LAB_2116_10c5;
    }
    uVar4 = FUN_2116_10e7(0,param_1);
    iVar5 = uVar3 - uVar4;
    iVar7 = iVar7 - (uint)(uVar3 < uVar4);
LAB_2116_10c5:
    if (iVar5 != 0 || iVar7 != 0) {
      param_4 = (uint)((ulong)(lVar1 - CONCAT22(iVar7,iVar5)) / (ulong)param_3);
    }
  }
  return param_4;
}



// Function: FUN_2116_10e7 @ 2116:10e7

int __cdecl16near FUN_2116_10e7(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint in_CX;
  uint uVar4;
  undefined1 *in_BX;
  int *unaff_SI;
  byte *pbVar5;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  uint local_6;
  
  pbVar5 = (byte *)(unaff_SI + 0x78);
  uVar4 = in_CX;
  if (((*(byte *)(unaff_SI + 5) & 0xc) == 0) && ((*pbVar5 & 1) == 0)) {
    local_6 = 0x200;
  }
  else {
    local_6 = unaff_SI[0x79];
  }
  do {
    if ((((*(byte *)(unaff_SI + 5) & 8) == 0) && ((*pbVar5 & 1) == 0)) ||
       (uVar1 = unaff_SI[2], uVar1 == 0)) {
      if (uVar4 < local_6) {
        iVar2 = FUN_2116_12bc(*in_BX);
        if (iVar2 == -1) goto LAB_2116_11d3;
        in_BX = in_BX + 1;
        uVar4 = uVar4 - 1;
        local_6 = unaff_SI[0x79];
        if (local_6 == 0) {
          local_6 = 1;
        }
      }
      else {
        if ((((*(byte *)(unaff_SI + 5) & 8) != 0) || ((*pbVar5 & 1) != 0)) &&
           (iVar2 = FUN_2116_1688(), iVar2 != 0)) goto LAB_2116_11d3;
        iVar2 = uVar4 - uVar4 % local_6;
        iVar3 = FUN_2116_2a3a(0x2116,*(undefined1 *)((int)unaff_SI + 0xb),in_BX,unaff_ES,iVar2);
        if ((iVar3 == -1) || (uVar4 = uVar4 - iVar3, iVar3 != iVar2)) {
          *(byte *)(unaff_SI + 5) = *(byte *)(unaff_SI + 5) | 0x20;
          goto LAB_2116_11d3;
        }
        in_BX = in_BX + iVar3;
      }
    }
    else {
      if (uVar4 < uVar1) {
        uVar1 = uVar4;
      }
      FUN_2116_40e2(*unaff_SI,unaff_SI[1],in_BX,unaff_ES,uVar1);
      uVar4 = uVar4 - uVar1;
      unaff_SI[2] = unaff_SI[2] - uVar1;
      in_BX = in_BX + uVar1;
      *unaff_SI = *unaff_SI + uVar1;
    }
    if (uVar4 == 0) {
LAB_2116_11d3:
      return in_CX - uVar4;
    }
  } while( true );
}



// Function: FUN_2116_11dc @ 2116:11dc

undefined2 __cdecl16far FUN_2116_11dc(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar1 = FUN_2116_1568(0x9d58);
  uVar2 = FUN_2116_20fc(0x2116,0x9d58);
  FUN_2116_15e9(uVar1,0x9d58);
  return uVar2;
}



// Function: FUN_2116_1220 @ 2116:1220

uint __cdecl16far FUN_2116_1220(undefined4 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  
  bVar2 = *(byte *)((int)param_1 + 10);
  if (((bVar2 & 0x83) != 0) && ((bVar2 & 0x40) == 0)) {
    if ((bVar2 & 2) == 0) {
      *(byte *)((int)param_1 + 10) = bVar2 | 1;
      if (((bVar2 & 0xc) == 0) && ((*(byte *)(param_1 + 0x3c) & 1) == 0)) {
        FUN_2116_13e0(param_1);
      }
      uVar3 = *(undefined2 *)((int)param_1 + 6);
      *(undefined2 *)param_1 = uVar3;
      uVar5 = (uint)*(byte *)((int)param_1 + 0xb);
      iVar4 = FUN_2116_293c(0x2116,uVar5,uVar3,*(undefined2 *)(param_1 + 2),
                            *(undefined2 *)((int)param_1 + 0xf2));
      if (iVar4 == 0) {
        *(byte *)((int)param_1 + 10) = *(byte *)((int)param_1 + 10) | 0x10;
      }
      else {
        if (iVar4 != -1) {
          if (((*(byte *)(uVar5 + 0x9d0e) & 0x82) == 0x82) &&
             ((*(byte *)((int)param_1 + 10) & 0x82) == 0)) {
            pbVar1 = (byte *)(param_1 + 0x3c);
            *pbVar1 = *pbVar1 | 0x20;
          }
          *(int *)(param_1 + 1) = iVar4 + -1;
          bVar2 = *(byte *)*param_1;
          *(byte **)param_1 = (byte *)(byte *)*param_1 + 1;
          return (uint)bVar2;
        }
        *(byte *)((int)param_1 + 10) = *(byte *)((int)param_1 + 10) | 0x20;
      }
      *(undefined2 *)(param_1 + 1) = 0;
    }
    else {
      *(byte *)((int)param_1 + 10) = *(byte *)((int)param_1 + 10) | 0x20;
    }
  }
  return 0xffff;
}



// Function: FUN_2116_12bc @ 2116:12bc

uint __cdecl16far FUN_2116_12bc(uint param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  
  piVar1 = param_2;
  bVar2 = *(byte *)(param_2 + 5);
  if (((bVar2 & 0x82) != 0) && ((bVar2 & 0x40) == 0)) {
    param_2[2] = 0;
    if ((bVar2 & 1) != 0) {
      if ((bVar2 & 0x10) == 0) goto LAB_2116_1335;
      *param_2 = param_2[3];
      bVar2 = bVar2 & 0xfe;
    }
    *(byte *)(param_2 + 5) = bVar2 & 0xef | 2;
    uVar5 = (uint)*(byte *)((int)param_2 + 0xb);
    if (((bVar2 & 8) == 0) &&
       (((bVar2 & 4) != 0 ||
        (((*(byte *)(param_2 + 0x78) & 1) == 0 &&
         (((((param_2 == (int *)0x9d58 || (param_2 == (int *)0x9d64)) || (param_2 == (int *)0x9d7c))
           && ((*(byte *)(uVar5 + 0x9d0e) & 0x40) != 0)) ||
          (FUN_2116_13e0(param_2), (*(byte *)(piVar1 + 5) & 8) == 0)))))))) {
      iVar3 = FUN_2116_2a3a(0x2116,uVar5,&param_1);
      iVar4 = 1;
    }
    else {
      iVar4 = *piVar1 - piVar1[3];
      *piVar1 = piVar1[3] + 1;
      piVar1[2] = piVar1[0x79] + -1;
      if (iVar4 == 0) {
        iVar3 = 0;
        if ((*(byte *)(uVar5 + 0x9d0e) & 0x20) != 0) {
          FUN_2116_26ee(0x2116,uVar5,0,0,2);
          iVar3 = 0;
          iVar4 = 0;
        }
      }
      else {
        iVar3 = FUN_2116_2a3a(0x2116,uVar5,piVar1[3],piVar1[4],iVar4);
      }
      **(undefined1 **)(piVar1 + 3) = (char)param_1;
    }
    if (iVar3 == iVar4) {
      return param_1 & 0xff;
    }
  }
LAB_2116_1335:
  *(byte *)(piVar1 + 5) = *(byte *)(piVar1 + 5) | 0x20;
  return 0xffff;
}



// Function: FUN_2116_13e0 @ 2116:13e0

void __cdecl16near FUN_2116_13e0(int *param_1)

{
  int iVar1;
  int in_DX;
  int unaff_DS;
  
  iVar1 = FUN_2116_2c1d(0x200);
  if (in_DX == 0) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 4;
    param_1[0x79] = 1;
    iVar1 = (int)param_1 + 0xf1;
    in_DX = unaff_DS;
  }
  else {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 8;
    param_1[0x79] = 0x200;
  }
  param_1[1] = in_DX;
  *param_1 = iVar1;
  param_1[4] = in_DX;
  param_1[3] = iVar1;
  param_1[2] = 0;
  return;
}



// Function: FUN_2116_142c @ 2116:142c

undefined2 * __cdecl16far
FUN_2116_142c(undefined2 param_1,undefined2 param_2,byte *param_3,undefined2 param_4,
             undefined2 *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  undefined1 local_c;
  byte local_6;
  undefined1 local_4;
  
  local_6 = *(byte *)0x9fa8;
  bVar3 = false;
  bVar1 = *param_3;
  if (bVar1 == 0x77) {
    uVar5 = 0x301;
  }
  else {
    if (0x77 < bVar1) {
      return (undefined2 *)0x0;
    }
    if (bVar1 != 0x61) {
      if (bVar1 != 0x72) {
        return (undefined2 *)0x0;
      }
      uVar5 = 0;
      local_4 = 1;
      goto LAB_2116_1462;
    }
    uVar5 = 0x109;
  }
  local_4 = 2;
LAB_2116_1462:
  bVar2 = true;
LAB_2116_1467:
  param_3 = (byte *)CONCAT22(param_3._2_2_,(byte *)param_3 + 1);
  if ((*param_3 == 0) || (!bVar2)) {
    iVar4 = FUN_2116_2770(param_1,param_2,uVar5,param_4,0x1a4);
    if (iVar4 < 0) {
      return (undefined2 *)0x0;
    }
    *(int *)0xa208 = *(int *)0xa208 + 1;
    *(undefined1 *)(param_5 + 5) = local_4;
    param_5[1] = 0;
    *param_5 = 0;
    param_5[4] = 0;
    param_5[3] = 0;
    local_c = (undefined1)iVar4;
    *(undefined1 *)((int)param_5 + 0xb) = local_c;
    *(byte *)(param_5 + 0x78) = local_6;
    param_5[2] = 0;
    param_5[0x7a] = 0;
    return param_5;
  }
  bVar1 = *param_3;
  if (bVar1 == 0x74) {
    if ((uVar5 & 0xc000) == 0) {
      uVar5 = uVar5 | 0x4000;
      goto LAB_2116_1467;
    }
  }
  else {
    if (0x74 < bVar1) goto LAB_2116_149a;
    if (bVar1 == 0x2b) {
      if ((uVar5 & 2) != 0) goto LAB_2116_149a;
      uVar5 = uVar5 & 0xfffe | 2;
      local_4 = 0x80;
      goto LAB_2116_1467;
    }
    if (bVar1 == 0x62) {
      if ((uVar5 & 0xc000) == 0) {
        uVar5 = uVar5 | 0x8000;
        goto LAB_2116_1467;
      }
    }
    else {
      if (bVar1 != 99) {
        if ((bVar1 != 0x6e) || (bVar3)) goto LAB_2116_149a;
        bVar3 = true;
        local_6 = local_6 & 0xbf;
        goto LAB_2116_1467;
      }
      if (!bVar3) {
        bVar3 = true;
        local_6 = local_6 | 0x40;
        goto LAB_2116_1467;
      }
    }
  }
LAB_2116_149a:
  bVar2 = false;
  goto LAB_2116_1467;
}



// Function: FUN_2116_1568 @ 2116:1568

undefined2 __cdecl16near FUN_2116_1568(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar4 = (int *)0x9f30;
  if ((((param_1 == (int *)0x9d58) || (piVar4 = (int *)0x9f34, param_1 == (int *)0x9d64)) ||
      (piVar4 = (int *)0x9f38, param_1 == (int *)0x9d7c)) &&
     (((*(byte *)(param_1 + 5) & 0xc) == 0 && ((*(byte *)(param_1 + 0x78) & 1) == 0)))) {
    iVar2 = *piVar4;
    iVar3 = piVar4[1];
    if (iVar2 == 0 && iVar3 == 0) {
      iVar2 = FUN_2116_2c1d(0x200);
      if (iVar3 == 0) goto LAB_2116_15e3;
      *piVar4 = iVar2;
      piVar4[1] = iVar3;
    }
    param_1[3] = iVar2;
    param_1[4] = iVar3;
    *param_1 = iVar2;
    param_1[1] = iVar3;
    param_1[2] = 0x200;
    param_1[0x79] = 0x200;
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 2;
    *(byte *)(param_1 + 0x78) = 0x11;
    uVar1 = 1;
  }
  else {
LAB_2116_15e3:
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_2116_15e9 @ 2116:15e9

void __cdecl16near FUN_2116_15e9(int param_1,undefined2 *param_2)

{
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_2 + 0x78) & 0x10) != 0) &&
     ((*(byte *)(*(byte *)((int)param_2 + 0xb) + 0x9d0e) & 0x40) != 0)) {
    FUN_2116_1688(param_2);
    if (param_1 != 0) {
      *(byte *)(param_2 + 0x78) = 0;
      param_2[0x79] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
    }
  }
  return;
}



// Function: FUN_2116_1630 @ 2116:1630

int __cdecl16far FUN_2116_1630(undefined4 param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (param_1._2_2_ == 0 && (int)param_1 == 0) {
    iVar1 = FUN_2116_1710(0);
  }
  else {
    iVar1 = FUN_2116_1688((int)param_1,param_1._2_2_);
    if (iVar1 == 0) {
      iVar1 = 0;
      if ((*(byte *)((int)param_1 + 0xf0) & 0x40) != 0) {
        iVar1 = FUN_2116_364c(*(undefined1 *)((int)param_1 + 0xb));
        iVar1 = -(uint)(iVar1 != 0);
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



// Function: FUN_2116_1688 @ 2116:1688

undefined2 __cdecl16near FUN_2116_1688(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  uVar3 = 0;
  if (((*(byte *)(param_1 + 5) & 3) == 2) &&
     (((*(byte *)(param_1 + 5) & 8) != 0 || ((*(byte *)(param_1 + 0x78) & 1) != 0)))) {
    iVar1 = *param_1 - param_1[3];
    if (0 < iVar1) {
      iVar2 = FUN_2116_2a3a(0x2116,*(undefined1 *)((int)param_1 + 0xb),param_1[3],param_1[4],iVar1);
      if (iVar2 == iVar1) {
        if ((*(byte *)(param_1 + 5) & 0x80) != 0) {
          *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfd;
        }
      }
      else {
        *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x20;
        uVar3 = 0xffff;
      }
    }
  }
  iVar1 = param_1[4];
  *param_1 = param_1[3];
  param_1[1] = iVar1;
  param_1[2] = 0;
  return uVar3;
}



// Function: FUN_2116_1710 @ 2116:1710

int FUN_2116_1710(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_4;
  
  iVar3 = 0;
  local_4 = 0;
  for (uVar2 = 0x9d4c; uVar2 <= *(uint *)0x9f2c; uVar2 = uVar2 + 0xc) {
    if ((param_1 == 1) && ((*(byte *)(uVar2 + 10) & 0x83) != 0)) {
      iVar1 = FUN_2116_1630(uVar2);
      if (iVar1 != -1) {
        iVar3 = iVar3 + 1;
      }
    }
    else if ((param_1 == 0) &&
            (((*(byte *)(uVar2 + 10) & 2) != 0 && (iVar1 = FUN_2116_1630(uVar2), iVar1 == -1)))) {
      local_4 = -1;
    }
  }
  if (param_1 == 1) {
    local_4 = iVar3;
  }
  return local_4;
}



// Function: FUN_2116_177c @ 2116:177c

void FUN_2116_177c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2116_1797 @ 2116:1797

void FUN_2116_1797(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  byte bVar3;
  uint uVar4;
  int unaff_BP;
  undefined2 unaff_SI;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  pbVar1 = (byte *)*(undefined4 *)(unaff_BP + 10);
  uVar5 = (undefined2)((ulong)pbVar1 >> 0x10);
  if (*pbVar1 == 0) {
    FUN_2116_2032();
    return;
  }
  if ((*(byte *)(*pbVar1 + 0x9fe7) & 8) != 0) {
    *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + -1;
    uVar5 = FUN_2116_20c8(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),
                          unaff_BP + -400,unaff_SS);
    FUN_2116_20aa(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),uVar5);
    do {
      *(int *)(unaff_BP + 10) = *(int *)(unaff_BP + 10) + 1;
      uVar5 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 10) >> 0x10);
    } while ((*(byte *)(*(byte *)*(undefined4 *)(unaff_BP + 10) + 0x9fe7) & 8) != 0);
  }
  if (*(char *)*(undefined2 *)(unaff_BP + 10) != '%') {
    FUN_2116_1ff6();
    return;
  }
  *(undefined1 *)(unaff_BP + -0x1a8) = 0;
  *(undefined1 *)(unaff_BP + -0x19c) = 0;
  *(undefined1 *)(unaff_BP + -0x1aa) = 0;
  *(undefined1 *)(unaff_BP + -0x1a6) = 0;
  *(undefined1 *)(unaff_BP + -0x1a4) = 0;
  *(undefined1 *)(unaff_BP + -0x1ac) = 0;
  *(undefined1 *)(unaff_BP + -0x1a0) = 0;
  *(undefined2 *)(unaff_BP + -0x196) = 0;
  *(undefined2 *)(unaff_BP + -0x19a) = 0;
  *(undefined2 *)(unaff_BP + -0x198) = 0;
  *(undefined2 *)(unaff_BP + -0x180) = 0;
  *(undefined2 *)(unaff_BP + -0x182) = 0;
LAB_2116_181e:
  do {
    while( true ) {
      while( true ) {
        if (*(char *)(unaff_BP + -0x1a0) != '\0') {
          if (*(char *)(unaff_BP + -0x1ac) == '\0') {
            puVar2 = (undefined2 *)*(undefined4 *)(unaff_BP + 0xe);
            *(int *)(unaff_BP + 0xe) = *(int *)(unaff_BP + 0xe) + 4;
            uVar5 = ((undefined2 *)puVar2)[1];
            *(undefined2 *)(unaff_BP + -0x186) = *puVar2;
            *(undefined2 *)(unaff_BP + -0x184) = uVar5;
          }
          *(undefined1 *)(unaff_BP + -0x1a0) = 0;
          bVar3 = *(byte *)*(undefined4 *)(unaff_BP + 10) | 0x20;
          if (bVar3 != 0x6e) {
            if ((bVar3 == 99) || (bVar3 == 0x7b)) {
              *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + 1;
              unaff_SI = FUN_2116_2072(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8));
            }
            else {
              unaff_SI = FUN_2116_20c8(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),
                                       unaff_BP + -400,unaff_SS);
            }
          }
          if ((*(int *)(unaff_BP + -0x19a) != 0) && (*(int *)(unaff_BP + -0x198) == 0)) {
            *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + -1;
            FUN_2116_20aa(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),unaff_SI);
            FUN_2116_2032();
            return;
          }
          FUN_2116_1faa();
          return;
        }
        *(int *)(unaff_BP + 10) = *(int *)(unaff_BP + 10) + 1;
        bVar3 = *(byte *)*(undefined4 *)(unaff_BP + 10);
        uVar4 = (uint)bVar3;
        if ((*(byte *)(uVar4 + 0x9fe7) & 4) == 0) break;
        *(int *)(unaff_BP + -0x19a) = *(int *)(unaff_BP + -0x19a) + 1;
        *(int *)(unaff_BP + -0x198) = uVar4 + *(int *)(unaff_BP + -0x198) * 10 + -0x30;
      }
      if (uVar4 != 0x6c) break;
LAB_2116_187a:
      *(char *)(unaff_BP + -0x1a4) = *(char *)(unaff_BP + -0x1a4) + '\x01';
    }
    if (0x6c < uVar4) goto LAB_2116_188e;
    if (bVar3 == 0x4c) {
      *(char *)(unaff_BP + -0x1a4) = *(char *)(unaff_BP + -0x1a4) + '\x01';
      goto LAB_2116_187a;
    }
    if ('L' < (char)bVar3) break;
    if (bVar3 == 0x2a) {
      *(char *)(unaff_BP + -0x1ac) = *(char *)(unaff_BP + -0x1ac) + '\x01';
    }
    else if (bVar3 != 0x46) goto LAB_2116_188e;
  } while( true );
  if (bVar3 != 0x4e) {
    if (bVar3 == 0x68) {
      *(char *)(unaff_BP + -0x19c) = *(char *)(unaff_BP + -0x19c) + '\x01';
    }
    else {
LAB_2116_188e:
      *(char *)(unaff_BP + -0x1a0) = *(char *)(unaff_BP + -0x1a0) + '\x01';
    }
  }
  goto LAB_2116_181e;
}



// Function: FUN_2116_1b56 @ 2116:1b56

void __cdecl16near FUN_2116_1b56(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  int iVar8;
  int unaff_BP;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + 1;
  iVar8 = FUN_2116_2072(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8));
  if (iVar8 == 0x30) {
    *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + 1;
    iVar8 = FUN_2116_2072(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8));
    if (((char)iVar8 == 'x') || ((char)iVar8 == 'X')) {
      *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + 1;
      iVar8 = FUN_2116_2072(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8));
      unaff_DI = 0x78;
    }
    else {
      *(int *)(unaff_BP + -0x196) = *(int *)(unaff_BP + -0x196) + 1;
      if (unaff_DI == 0x78) {
        *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + -1;
        FUN_2116_20aa(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),iVar8);
        iVar8 = 0x30;
      }
      else {
        unaff_DI = 0x6f;
      }
    }
  }
LAB_2116_1d02:
  do {
    if (*(char *)(unaff_BP + -0x1a0) != '\0') {
      if ((unaff_DI == 0x70) && (*(char *)(unaff_BP + -0x1a4) != '\0')) {
        *(undefined2 *)(unaff_BP + -0x180) = *(undefined2 *)(unaff_BP + -0x194);
      }
      if (*(char *)(unaff_BP + -0x1a6) != '\0') {
        piVar2 = (int *)(unaff_BP + -0x182);
        iVar8 = *piVar2;
        *piVar2 = -*piVar2;
        *(int *)(unaff_BP + -0x180) = *(int *)(unaff_BP + -0x180) + (uint)(iVar8 != 0);
        *(int *)(unaff_BP + -0x180) = -*(int *)(unaff_BP + -0x180);
      }
      if (unaff_DI == 0x46) {
        *(undefined2 *)(unaff_BP + -0x196) = 0;
      }
      if (*(int *)(unaff_BP + -0x196) == 0) {
        FUN_2116_2032();
        return;
      }
      if (*(char *)(unaff_BP + -0x1ac) != '\0') {
        FUN_2116_1fec();
        return;
      }
      *(int *)(unaff_BP + -0x192) = *(int *)(unaff_BP + -0x192) + 1;
      if (*(char *)(unaff_BP + -0x1a4) == '\0') {
        *(undefined2 *)*(undefined4 *)(unaff_BP + -0x186) = *(undefined2 *)(unaff_BP + -0x182);
        FUN_2116_1fec();
        return;
      }
      uVar6 = *(undefined2 *)(unaff_BP + -0x180);
      puVar7 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x186);
      *puVar7 = *(undefined2 *)(unaff_BP + -0x182);
      ((undefined2 *)puVar7)[1] = uVar6;
      FUN_2116_1fec();
      return;
    }
    if (((unaff_DI == 0x78) || (unaff_DI == 0x70)) || (unaff_DI == 0x46)) {
      if ((*(byte *)(iVar8 + -0x6019) & 0x80) == 0) {
        if ((unaff_DI == 0x46) && (*(int *)(unaff_BP + -0x196) != 0)) {
          if (iVar8 == 0x3a) {
            *(undefined2 *)(unaff_BP + -0x194) = *(undefined2 *)(unaff_BP + -0x182);
            *(undefined2 *)(unaff_BP + -0x180) = 0;
            *(undefined2 *)(unaff_BP + -0x182) = 0;
            *(undefined2 *)(unaff_BP + -0x196) = 0xffff;
            unaff_DI = 0x70;
            iVar8 = 0x30;
            goto LAB_2116_1c78;
          }
          *(undefined2 *)(unaff_BP + -0x196) = 0;
        }
LAB_2116_1c74:
        *(char *)(unaff_BP + -0x1a0) = *(char *)(unaff_BP + -0x1a0) + '\x01';
      }
      else {
        uVar4 = *(uint *)(unaff_BP + -0x182);
        iVar5 = *(int *)(unaff_BP + -0x180);
        *(int *)(unaff_BP + -0x182) = uVar4 * 0x10;
        *(uint *)(unaff_BP + -0x180) =
             (((iVar5 << 1 | (uint)CARRY2(uVar4,uVar4)) << 1 | (uint)CARRY2(uVar4 * 2,uVar4 * 2)) <<
              1 | (uint)CARRY2(uVar4 * 4,uVar4 * 4)) << 1 | (uint)CARRY2(uVar4 * 8,uVar4 * 8);
        iVar8 = FUN_2116_2054(iVar8);
      }
    }
    else {
      if ((*(byte *)(iVar8 + -0x6019) & 4) == 0) goto LAB_2116_1c74;
      if (unaff_DI == 0x6f) {
        if (0x37 < iVar8) goto LAB_2116_1c74;
        uVar4 = *(uint *)(unaff_BP + -0x182);
        iVar5 = *(int *)(unaff_BP + -0x180);
        *(int *)(unaff_BP + -0x182) = uVar4 * 8;
        *(uint *)(unaff_BP + -0x180) =
             ((iVar5 << 1 | (uint)CARRY2(uVar4,uVar4)) << 1 | (uint)CARRY2(uVar4 * 2,uVar4 * 2)) <<
             1 | (uint)CARRY2(uVar4 * 4,uVar4 * 4);
      }
      else {
        FUN_2116_4cdc(unaff_BP + -0x182,unaff_SS,10,0);
      }
    }
LAB_2116_1c78:
    if (*(char *)(unaff_BP + -0x1a0) != '\0') {
      *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + -1;
      FUN_2116_20aa(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),iVar8);
      goto LAB_2116_1d02;
    }
    *(int *)(unaff_BP + -0x196) = *(int *)(unaff_BP + -0x196) + 1;
    uVar4 = iVar8 - 0x30;
    puVar1 = (uint *)(unaff_BP + -0x182);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + uVar4;
    *(int *)(unaff_BP + -0x180) =
         *(int *)(unaff_BP + -0x180) + ((int)uVar4 >> 0xf) + (uint)CARRY2(uVar3,uVar4);
    if (*(int *)(unaff_BP + -0x19a) == 0) {
LAB_2116_1c9f:
      *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + 1;
      iVar8 = FUN_2116_2072(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8));
    }
    else {
      piVar2 = (int *)(unaff_BP + -0x198);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 != 0) goto LAB_2116_1c9f;
      *(char *)(unaff_BP + -0x1a0) = *(char *)(unaff_BP + -0x1a0) + '\x01';
    }
  } while( true );
}



// Function: FUN_2116_1bd2 @ 2116:1bd2

void FUN_2116_1bd2(void)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  undefined1 in_BL;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  LOCK();
  *(undefined1 *)(unaff_BP + unaff_SI + -2) = in_BL;
  UNLOCK();
  piVar1 = (int *)(unaff_BP + -0x198);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(int *)(unaff_BP + -0x19a) != 0)) goto LAB_2116_1bf3;
LAB_2116_1c9f:
  *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + 1;
  unaff_SI = FUN_2116_2072(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8));
LAB_2116_1d02:
  do {
    if (*(char *)(unaff_BP + -0x1a0) != '\0') {
      if ((unaff_DI == 0x70) && (*(char *)(unaff_BP + -0x1a4) != '\0')) {
        *(undefined2 *)(unaff_BP + -0x180) = *(undefined2 *)(unaff_BP + -0x194);
      }
      if (*(char *)(unaff_BP + -0x1a6) != '\0') {
        piVar1 = (int *)(unaff_BP + -0x182);
        iVar5 = *piVar1;
        *piVar1 = -*piVar1;
        *(int *)(unaff_BP + -0x180) = *(int *)(unaff_BP + -0x180) + (uint)(iVar5 != 0);
        *(int *)(unaff_BP + -0x180) = -*(int *)(unaff_BP + -0x180);
      }
      if (unaff_DI == 0x46) {
        *(undefined2 *)(unaff_BP + -0x196) = 0;
      }
      if (*(int *)(unaff_BP + -0x196) == 0) {
        FUN_2116_2032();
        return;
      }
      if (*(char *)(unaff_BP + -0x1ac) != '\0') {
        FUN_2116_1fec();
        return;
      }
      *(int *)(unaff_BP + -0x192) = *(int *)(unaff_BP + -0x192) + 1;
      if (*(char *)(unaff_BP + -0x1a4) == '\0') {
        *(undefined2 *)*(undefined4 *)(unaff_BP + -0x186) = *(undefined2 *)(unaff_BP + -0x182);
        FUN_2116_1fec();
        return;
      }
      uVar6 = *(undefined2 *)(unaff_BP + -0x180);
      puVar7 = (undefined2 *)*(undefined4 *)(unaff_BP + -0x186);
      *puVar7 = *(undefined2 *)(unaff_BP + -0x182);
      ((undefined2 *)puVar7)[1] = uVar6;
      FUN_2116_1fec();
      return;
    }
    if (((unaff_DI == 0x78) || (unaff_DI == 0x70)) || (unaff_DI == 0x46)) {
      if ((*(byte *)(unaff_SI + -0x6019) & 0x80) == 0) {
        if ((unaff_DI == 0x46) && (*(int *)(unaff_BP + -0x196) != 0)) {
          if (unaff_SI == 0x3a) {
            *(undefined2 *)(unaff_BP + -0x194) = *(undefined2 *)(unaff_BP + -0x182);
            *(undefined2 *)(unaff_BP + -0x180) = 0;
            *(undefined2 *)(unaff_BP + -0x182) = 0;
            *(undefined2 *)(unaff_BP + -0x196) = 0xffff;
            unaff_DI = 0x70;
            unaff_SI = 0x30;
            goto LAB_2116_1c78;
          }
          *(undefined2 *)(unaff_BP + -0x196) = 0;
        }
LAB_2116_1c74:
        *(char *)(unaff_BP + -0x1a0) = *(char *)(unaff_BP + -0x1a0) + '\x01';
      }
      else {
        uVar4 = *(uint *)(unaff_BP + -0x182);
        iVar5 = *(int *)(unaff_BP + -0x180);
        *(int *)(unaff_BP + -0x182) = uVar4 * 0x10;
        *(uint *)(unaff_BP + -0x180) =
             (((iVar5 << 1 | (uint)CARRY2(uVar4,uVar4)) << 1 | (uint)CARRY2(uVar4 * 2,uVar4 * 2)) <<
              1 | (uint)CARRY2(uVar4 * 4,uVar4 * 4)) << 1 | (uint)CARRY2(uVar4 * 8,uVar4 * 8);
        unaff_SI = FUN_2116_2054(unaff_SI);
      }
    }
    else {
      if ((*(byte *)(unaff_SI + -0x6019) & 4) == 0) goto LAB_2116_1c74;
      if (unaff_DI == 0x6f) {
        if (0x37 < unaff_SI) goto LAB_2116_1c74;
        uVar4 = *(uint *)(unaff_BP + -0x182);
        iVar5 = *(int *)(unaff_BP + -0x180);
        *(int *)(unaff_BP + -0x182) = uVar4 * 8;
        *(uint *)(unaff_BP + -0x180) =
             ((iVar5 << 1 | (uint)CARRY2(uVar4,uVar4)) << 1 | (uint)CARRY2(uVar4 * 2,uVar4 * 2)) <<
             1 | (uint)CARRY2(uVar4 * 4,uVar4 * 4);
      }
      else {
        FUN_2116_4cdc(unaff_BP + -0x182,unaff_SS,10,0);
      }
    }
LAB_2116_1c78:
    if (*(char *)(unaff_BP + -0x1a0) != '\0') {
      *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + -1;
      FUN_2116_20aa(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),unaff_SI);
      goto LAB_2116_1d02;
    }
    *(int *)(unaff_BP + -0x196) = *(int *)(unaff_BP + -0x196) + 1;
    uVar4 = unaff_SI - 0x30;
    puVar2 = (uint *)(unaff_BP + -0x182);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + uVar4;
    *(int *)(unaff_BP + -0x180) =
         *(int *)(unaff_BP + -0x180) + ((int)uVar4 >> 0xf) + (uint)CARRY2(uVar3,uVar4);
    if (*(int *)(unaff_BP + -0x19a) == 0) goto LAB_2116_1c9f;
    piVar1 = (int *)(unaff_BP + -0x198);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) goto LAB_2116_1c9f;
LAB_2116_1bf3:
    *(char *)(unaff_BP + -0x1a0) = *(char *)(unaff_BP + -0x1a0) + '\x01';
  } while( true );
}



// Function: FUN_2116_1faa @ 2116:1faa

/* WARNING: Instruction at (ram,0x00028df9) overlaps instruction at (ram,0x00028df8)
    */
/* WARNING: Unable to track spacebase fully for stack */

uint __cdecl16near
FUN_2116_1faa(undefined2 param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4,
             undefined2 param_5,int param_6)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  uint *puVar4;
  undefined2 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  char cVar8;
  byte bVar9;
  char cVar13;
  uint uVar10;
  int in_AX;
  int iVar11;
  undefined2 uVar12;
  uint in_CX;
  uint in_DX;
  uint in_BX;
  undefined2 *puVar14;
  int iVar15;
  undefined1 *puVar16;
  undefined2 *unaff_BP;
  uint *puVar17;
  uint *unaff_SI;
  uint *puVar18;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 uVar19;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar20;
  bool bVar21;
  byte in_AF;
  uint *in_stack_00000000;
  uint uStackY_18;
  
  if (0x18 < in_AX - 99U) {
    if ((uint *)(uint)**(byte **)(unaff_BP + 5) != unaff_SI) {
      unaff_BP[-200] = unaff_BP[-200] + -1;
      FUN_2116_20aa();
      uVar10 = FUN_2116_2032();
      return uVar10;
    }
    *(char *)(unaff_BP + -0xd7) = *(char *)(unaff_BP + -0xd7) + -1;
    if (*(char *)(unaff_BP + -0xd6) != '\0') {
      *(char *)(unaff_BP + -0xd7) = *(char *)(unaff_BP + -0xd7) + '\x01';
      unaff_BP[5] = unaff_BP[5] + 1;
      uVar10 = FUN_2116_2017();
      return uVar10;
    }
    unaff_BP[7] = unaff_BP[7] + -4;
    uVar10 = FUN_2116_1fec();
    return uVar10;
  }
  puVar14 = (undefined2 *)((in_AX - 99U) * 2);
  cVar8 = (char)in_BX;
  switch(in_AX) {
  default:
    *(char *)((int)unaff_BP + (int)unaff_DI) = '\0';
    puVar5 = (undefined2 *)unaff_BP[2];
    puVar5[4] = in_BX;
    puVar5[3] = puVar14;
    puVar5[2] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    return in_BX;
  case 100:
    pcVar2 = (char *)((int)unaff_SI + CONCAT11(0x84,(char)puVar14) + 1);
    *pcVar2 = *pcVar2 + -0x7c;
    break;
  case 0x65:
    uVar10 = *unaff_SI;
    while( true ) {
      puVar17 = unaff_SI + 1;
      if ((uVar10 != 0xffff) || (in_DX != 0xffff)) {
        bVar20 = false;
        uVar10 = (*(code *)*(undefined2 *)0x8ebe)();
        if (bVar20) {
          return uVar10;
        }
      }
      in_CX = in_CX - 1;
      if (in_CX == 0) break;
      unaff_SI = unaff_SI + 2;
      in_DX = *puVar17;
      uVar10 = *unaff_SI;
    }
    iVar11 = *(byte *)0x8ea6 + 1;
    do {
      bVar20 = false;
      uVar10 = (*(code *)*(undefined2 *)0x8ebc)();
      if (bVar20) {
        return uVar10;
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    return uVar10;
  case 0x67:
    LOCK();
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) = cVar8;
    UNLOCK();
    break;
  case 0x68:
    uVar10 = FUN_1a22_6168();
    bVar20 = (char)uVar10 == '\0';
    if ((bVar20) || (uVar10 = FUN_1a22_64c6(), bVar20)) {
      iVar11 = *(int *)0xba65;
      while (iVar11 != 0) {
        bVar20 = unaff_SI == (uint *)0x0;
        unaff_SI = (uint *)((int)unaff_SI + -1);
        if (bVar20) {
          uVar10 = FUN_2f3f_0279();
        }
        *(undefined2 *)0xb9b4 = unaff_SI;
        *(undefined1 *)0xb9b2 = 1;
        iVar11 = 7;
        do {
          if (((*(byte *)0xb9b2 & (byte)(uVar10 >> 8)) != 0) &&
             (cVar8 = (*(code *)*(undefined2 *)0x8edf)(), cVar8 != *(char *)(iVar11 + -0x45a3)))
          goto LAB_1a22_64b3;
          iVar11 = iVar11 + -1;
          pcVar2 = (char *)0xb9b2;
          cVar8 = *pcVar2;
          *pcVar2 = *pcVar2 << 1;
        } while (-1 < cVar8);
        piVar1 = (int *)0xba65;
        *piVar1 = *piVar1 + -1;
        iVar11 = *piVar1;
      }
      if ((char)((uint)in_stack_00000000 >> 8) != '\0') {
        if (unaff_SI == (uint *)0x0) {
          FUN_2f3f_0279();
        }
        uVar10 = FUN_1a22_64fb();
      }
    }
LAB_1a22_64b3:
    *(undefined2 *)0xb9b2 = param_1;
    *(undefined2 *)0xb9b4 = param_2;
    return uVar10;
  case 0x69:
    return (uint)(CONCAT22((unaff_BP[-1] - in_DX) - (uint)(in_CX < in_BX),in_CX - in_BX) /
                 (ulong)(uint)unaff_BP[5]);
  case 0x6a:
    cVar13 = (char)(in_BX >> 8);
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar13;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar13;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar13;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar13;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar13;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar13;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar13;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar13;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar13;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar13;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar13;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar13;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar13;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar13;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar13;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    *(char *)(uint *)((int)puVar14 + (int)unaff_SI) =
         (char)*(uint *)((int)puVar14 + (int)unaff_SI) + cVar8;
    iVar11 = *(int *)0x431;
    uVar12 = *(undefined2 *)0x437;
    uVar19 = *(undefined2 *)0x435;
    *(undefined2 *)(iVar11 + -2) = *(undefined2 *)0x42d;
    *(undefined2 *)(iVar11 + -4) = uVar19;
    if (iRam00054d3f == 1) {
      *(undefined2 *)(iVar11 + -2) = 0x18b3;
      uVar10 = func_0x000218b8();
    }
    else {
      uVar10 = *(uint *)(iVar11 + -2);
    }
    return uVar10;
  case 0x6b:
    return in_BX;
  case 0x6c:
    *(undefined2 *)0xa17a = param_3._2_2_;
    *(undefined2 *)0xa178 = (undefined2)param_3;
    pcVar6 = (code *)swi(0x21);
    (*pcVar6)();
    return 0;
  case 0x6d:
    if ((in_DX & 1) != 0) {
      bVar21 = 0xfffe < in_DX;
      in_DX = in_DX + 1;
      bVar20 = CARRY2(in_CX,(uint)bVar21);
      in_CX = in_CX + bVar21;
      uVar10 = (uint)bVar20;
      bVar20 = CARRY2((uint)puVar14,uVar10);
      puVar14 = (undefined2 *)((int)puVar14 + uVar10);
      uVar10 = (uint)bVar20;
      bVar20 = CARRY2(in_BX,uVar10);
      in_BX = in_BX + uVar10;
      uVar10 = (uint)bVar20;
      bVar20 = CARRY2((uint)unaff_DI,uVar10);
      unaff_DI = unaff_DI + uVar10;
      if (bVar20) {
        unaff_DI = (char *)0x8000;
        unaff_SI[5] = unaff_SI[5] + 1;
      }
    }
    if (unaff_SI[5] < 0x7fff) {
      unaff_SI[4] = (uint)unaff_DI;
      unaff_SI[3] = in_BX;
      unaff_SI[2] = (uint)puVar14;
      unaff_SI[1] = in_CX;
      *unaff_SI = in_DX;
      uVar10 = unaff_BP[-1];
      unaff_SI[5] = unaff_SI[5] | uVar10;
    }
    else {
      unaff_SI[5] = unaff_BP[-1] | 0x7fff;
      uVar10 = 0;
      unaff_SI[4] = 0;
      unaff_SI[3] = 0;
      unaff_SI[2] = 0;
      unaff_SI[1] = 0;
      *unaff_SI = 0;
    }
    return uVar10;
  case 0x6e:
    pcVar6 = (code *)swi(0xcc);
    (*pcVar6)();
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return uVar10;
  case 0x6f:
    return in_BX;
  case 0x70:
    unaff_DS = (undefined2)((ulong)*(undefined4 *)(unaff_DI + -0x30) >> 0x10);
    puVar14 = (undefined2 *)&stack0xfffe;
    puVar16 = &stack0xfffe;
    cVar8 = '\a';
    do {
      unaff_BP = unaff_BP + -1;
      puVar14 = puVar14 + -1;
      *puVar14 = *unaff_BP;
      cVar8 = cVar8 + -1;
    } while ('\0' < cVar8);
    goto LAB_1a22_64d6;
  case 0x71:
    uVar10 = FUN_2116_5467();
    return uVar10;
  case 0x72:
    *in_stack_00000000 = in_BX;
    in_stack_00000000[1] = in_BX;
    in_stack_00000000[2] = in_BX;
    in_stack_00000000[3] = in_BX;
    in_stack_00000000[4] = in_BX;
    return in_BX;
  case 0x73:
    do {
      *puVar14 = unaff_DI;
      puVar14[1] = unaff_ES;
      do {
        uVar12 = unaff_BP[-1];
        do {
          puVar3 = in_stack_00000000;
          in_stack_00000000 = (uint *)((int)in_stack_00000000 + 1);
          uVar10 = *puVar3;
          pcVar2 = unaff_DI;
          unaff_DI = unaff_DI + 1;
          *pcVar2 = (char)uVar10;
        } while ((char)uVar10 != '\0');
        in_CX = in_CX - 1;
        if (in_CX == 0) {
          uVar12 = unaff_BP[-2];
          puVar14[2] = 0;
          puVar14[3] = 0;
          return 0;
        }
        bVar20 = *in_stack_00000000 == *(uint *)0x9ce0;
        if (!bVar20) break;
        puVar18 = (uint *)0x9ce0;
        iVar11 = 6;
        puVar17 = in_stack_00000000;
        do {
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          puVar4 = puVar18;
          puVar18 = puVar18 + 1;
          puVar3 = puVar17;
          puVar17 = puVar17 + 1;
          bVar20 = *puVar3 == *puVar4;
        } while (bVar20);
      } while (bVar20);
      unaff_DS = unaff_BP[-2];
      puVar14 = puVar14 + 2;
    } while( true );
  case 0x74:
    *(char *)((int)unaff_SI + 5) = *(char *)((int)unaff_SI + 5) + (char)(in_DX >> 8);
    unaff_BP[5] = 0;
    FUN_2bb2_0828();
    return 0;
  case 0x75:
    puVar16 = (undefined1 *)0x8;
    do {
      bVar9 = (char)(in_CX >> 8) << 1 | (int)in_CX < 0;
      in_CX = (uint)bVar9 << 8;
      puVar16 = puVar16 + -1;
      bVar20 = (bool)((byte)in_BX & 1);
      in_BX = CONCAT11((char)(in_BX >> 8),(byte)in_BX >> 1 | bVar20 << 7);
    } while (!bVar20);
    *(byte *)0xb9b2 = bVar9;
LAB_1a22_64d6:
    while( true ) {
      bVar9 = (byte)(in_BX >> 8);
      if ((*(byte *)0xb9b2 & bVar9) != 0) {
        *(undefined2 *)0xb9b4 = unaff_SI;
        cVar8 = (*(code *)*(undefined2 *)0x8edf)();
        if (puVar16[-0x45a3] != cVar8) {
          return in_BX;
        }
      }
      puVar16 = puVar16 + -1;
      bVar20 = (bool)((byte)in_BX & 1);
      in_BX = CONCAT11(bVar9,(byte)in_BX >> 1 | bVar20 << 7);
      if (!bVar20) break;
      pcVar2 = (char *)0xb9b2;
      cVar8 = *pcVar2;
      *pcVar2 = *pcVar2 << 1;
      if (cVar8 < '\0') {
        return in_BX;
      }
    }
    return in_BX;
  case 0x76:
    iVar11 = (unaff_BP[-0x22] - unaff_BP[-3]) + -1;
    unaff_BP[-0x22] = iVar11;
    uVar7 = *(undefined4 *)((int)*(undefined4 *)(unaff_BP + 3) + 0x48);
    *(undefined1 *)(((int)uVar7 + unaff_BP[-1]) - iVar11) = *(undefined1 *)0x904e;
    uVar12 = FUN_2116_2f30();
    unaff_BP[-2] = uVar12;
    iVar11 = FUN_2bb2_19dc(0x2116);
    if (iVar11 == 0) {
      uVar19 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 3) >> 0x10);
      iVar11 = (int)*(undefined4 *)(unaff_BP + 3);
      uVar12 = *(undefined2 *)(iVar11 + 0x4a);
      iVar11 = *(int *)(iVar11 + 0x48) + unaff_BP[-2];
    }
    else {
      unaff_BP[-1] = unaff_BP[-2] + -1;
      while ((-1 < (int)unaff_BP[-1] &&
             (uVar7 = *(undefined4 *)((int)*(undefined4 *)(unaff_BP + 3) + 0x48),
             iVar11 = unaff_BP[-1], (uint)*(byte *)((int)uVar7 + iVar11) != *(uint *)0x904e))) {
        uVar7 = *(undefined4 *)((int)*(undefined4 *)(unaff_BP + 3) + 0x48);
        if (*(char *)((int)uVar7 + iVar11) == ' ') {
          uVar7 = *(undefined4 *)((int)*(undefined4 *)(unaff_BP + 3) + 0x48);
          *(undefined1 *)((int)uVar7 + iVar11) = 0x30;
        }
        uVar7 = *(undefined4 *)((int)*(undefined4 *)(unaff_BP + 3) + 0x48);
        if (*(char *)((int)uVar7 + unaff_BP[-1]) != '0') break;
        unaff_BP[-1] = unaff_BP[-1] + -1;
      }
      uVar7 = *(undefined4 *)((int)*(undefined4 *)(unaff_BP + 3) + 0x48);
      iVar11 = unaff_BP[-1];
      if (((uint)*(byte *)((int)uVar7 + iVar11) != *(uint *)0x904e) || (iVar11 < 1))
      goto LAB_2bb2_0a77;
      uVar19 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 3) >> 0x10);
      iVar15 = (int)*(undefined4 *)(unaff_BP + 3);
      uVar12 = *(undefined2 *)(iVar15 + 0x4a);
      iVar11 = *(int *)(iVar15 + 0x48) + iVar11;
    }
    unaff_BP[-0x24] = iVar11 + -1;
    unaff_BP[-0x23] = uVar12;
    if (**(char **)(unaff_BP + -0x24) == ' ') {
      **(char **)(unaff_BP + -0x24) = '0';
    }
LAB_2bb2_0a77:
    FUN_34d7_0000();
    if (unaff_BP[5] == 0) {
      FUN_2a75_00d9();
    }
    else {
      FUN_2b01_006c();
    }
    return 0;
  case 0x77:
    uVar10 = in_BX + 1 & 0x1ae5;
    *(uint *)((int)puVar14 + (int)unaff_SI) = *(uint *)((int)puVar14 + (int)unaff_SI) + uVar10;
    return uVar10;
  case 0x78:
    if ((POPCOUNT((uint)puVar14 & 0xff) & 1U) == 0) {
      uVar10 = *unaff_SI;
      cVar8 = in(CONCAT11(0x69,(char)in_DX));
      unaff_DI[2] = cVar8;
      in_AF = 9 < ((char)uVar10 + 0xbeU & 0xf) | in_AF;
      in(0xd5);
      in_BX = 0x7a42;
    }
    bVar9 = (char)in_BX + (char)(in_BX >> 8) * -0x6c;
    return (byte)(bVar9 + (9 < (bVar9 & 0xf) | in_AF) * -6) & 0xff0f;
  case 0x79:
    *(char *)0xb9b2 = cVar8;
    return CONCAT11(0xb9,cVar8);
  case 0x7a:
    puVar14 = (undefined2 *)&stack0xfffe;
    cVar8 = '\x12';
    do {
      unaff_BP = unaff_BP + -1;
      puVar14 = puVar14 + -1;
      *puVar14 = *unaff_BP;
      cVar8 = cVar8 + -1;
    } while ('\0' < cVar8);
    iVar11 = FUN_2116_4d98();
    uStackY_18 = iVar11 + param_6 + *(int *)0xa12a;
    if ((*(int *)0xa12e != 0) && (iVar11 = FUN_2116_3d5c(), iVar11 != 0)) {
      uStackY_18 = uStackY_18 - 0xe10;
    }
    return uStackY_18;
  }
code_r0x0002ff12:
  iVar11 = FUN_2116_0eb0();
  unaff_BP[-2] = iVar11;
  if ((iVar11 == 0) ||
     (uVar12 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 3) >> 0x10),
     iVar11 = (int)*(undefined4 *)(unaff_BP + 3), *(int *)(iVar11 + 0xc) <= *(int *)(iVar11 + 0x18))
     ) {
    *(undefined1 *)*(undefined4 *)((int)*(undefined4 *)(unaff_BP + 3) + 0x14) = 0x1a;
    uVar19 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 3) >> 0x10);
    iVar11 = (int)*(undefined4 *)(unaff_BP + 3);
    uVar12 = unaff_BP[-6];
    *(undefined2 *)(iVar11 + 0xe) = unaff_BP[-7];
    *(undefined2 *)(iVar11 + 0x10) = uVar12;
    if ((unaff_BP[-2] == 0) ||
       (uVar12 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 3) >> 0x10),
       iVar11 = (int)*(undefined4 *)(unaff_BP + 3), *(int *)(iVar11 + 0x18) < *(int *)(iVar11 + 0xc)
       )) {
      uVar10 = unaff_BP[-1];
    }
    else {
      *(undefined2 *)0x90a0 = 0x11;
      uVar10 = 0xffff;
    }
    return uVar10;
  }
  if (*(char *)(unaff_BP + -4) != '\t') goto LAB_2fb1_0471;
  unaff_BP[-3] = 4;
  do {
    uVar12 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 3) >> 0x10);
    iVar11 = (int)*(undefined4 *)(unaff_BP + 3);
    if (*(int *)(iVar11 + 0xc) + -1 <= *(int *)(iVar11 + 0x18)) break;
    puVar16 = (undefined1 *)*(undefined2 *)(iVar11 + 0xe);
    *(int *)(iVar11 + 0xe) = *(int *)(iVar11 + 0xe) + 1;
    *puVar16 = 0x20;
    piVar1 = (int *)((int)*(undefined4 *)(unaff_BP + 3) + 0x14);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)((int)*(undefined4 *)(unaff_BP + 3) + 0x18);
    *piVar1 = *piVar1 + 1;
    unaff_BP[-1] = unaff_BP[-1] + 1;
    piVar1 = unaff_BP + -3;
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  goto LAB_2fb1_046a;
LAB_2fb1_0471:
  if (*(char *)(unaff_BP + -4) != -0x60) {
    if (*(char *)(unaff_BP + -4) != '\r') {
      if (*(char *)(unaff_BP + -4) == -0x73) {
        unaff_BP[-5] = 1;
        goto code_r0x0002ff12;
      }
      if ((*(char *)(unaff_BP + -4) == '\n') && (unaff_BP[-5] != 0)) {
        *(undefined1 *)(unaff_BP + -4) = 0x8a;
        uVar12 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 3) >> 0x10);
        iVar11 = (int)*(undefined4 *)(unaff_BP + 3);
        piVar1 = (int *)(iVar11 + 0xe);
        *piVar1 = *piVar1 + -1;
        if (*(char *)*(undefined4 *)(iVar11 + 0xe) != ' ') {
          piVar1 = (int *)((int)*(undefined4 *)(unaff_BP + 3) + 0xe);
          *piVar1 = *piVar1 + 1;
        }
      }
      uVar12 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 3) >> 0x10);
      iVar11 = (int)*(undefined4 *)(unaff_BP + 3);
      puVar16 = (undefined1 *)*(undefined2 *)(iVar11 + 0xe);
      *(int *)(iVar11 + 0xe) = *(int *)(iVar11 + 0xe) + 1;
      *puVar16 = *(undefined1 *)(unaff_BP + -4);
      piVar1 = (int *)((int)*(undefined4 *)(unaff_BP + 3) + 0x14);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)((int)*(undefined4 *)(unaff_BP + 3) + 0x18);
      *piVar1 = *piVar1 + 1;
      unaff_BP[-1] = unaff_BP[-1] + 1;
    }
LAB_2fb1_046a:
    unaff_BP[-5] = 0;
  }
  goto code_r0x0002ff12;
}



// Function: FUN_2116_1fec @ 2116:1fec

void FUN_2116_1fec(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  
  *(char *)(unaff_BP + -0x1ae) = *(char *)(unaff_BP + -0x1ae) + '\x01';
  *(int *)(unaff_BP + 10) = *(int *)(unaff_BP + 10) + 1;
  FUN_2116_2017();
  return;
}



// Function: FUN_2116_1ff6 @ 2116:1ff6

undefined2 __cdecl16far FUN_2116_1ff6(void)

{
  byte *pbVar1;
  char *pcVar2;
  undefined2 uVar3;
  uint uVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  
  *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + 1;
  uVar4 = FUN_2116_2072(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8));
  pbVar1 = (byte *)*(undefined4 *)(unaff_BP + 10);
  *(int *)(unaff_BP + 10) = *(int *)(unaff_BP + 10) + 1;
  if (uVar4 != *pbVar1) {
    *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + -1;
    FUN_2116_20aa(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),uVar4);
    uVar3 = FUN_2116_2032();
    return uVar3;
  }
  if (uVar4 == 0xffff) {
    pcVar2 = (char *)*(undefined4 *)(unaff_BP + 10);
    if ((*pcVar2 == '%') && (((char *)pcVar2)[1] == 'n')) {
      uVar3 = FUN_2116_1797();
      return uVar3;
    }
    if ((*(int *)(unaff_BP + -0x192) == 0) && (*(char *)(unaff_BP + -0x1ae) == '\0')) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(undefined2 *)(unaff_BP + -0x192);
    }
    return uVar3;
  }
  uVar3 = FUN_2116_1797();
  return uVar3;
}



// Function: FUN_2116_2017 @ 2116:2017

void FUN_2116_2017(void)

{
  char *pcVar1;
  int unaff_BP;
  int unaff_SI;
  undefined2 unaff_SS;
  
  if (unaff_SI != -1) {
    FUN_2116_1797();
    return;
  }
  pcVar1 = (char *)*(undefined4 *)(unaff_BP + 10);
  if ((*pcVar1 == '%') && (((char *)pcVar1)[1] == 'n')) {
    FUN_2116_1797();
    return;
  }
  return;
}



// Function: FUN_2116_2032 @ 2116:2032

void __cdecl16far FUN_2116_2032(void)

{
  return;
}



// Function: FUN_2116_2054 @ 2116:2054

uint FUN_2116_2054(uint param_1)

{
  undefined2 unaff_DS;
  
  if ((*(byte *)(param_1 + 0x9fe7) & 4) == 0) {
    param_1 = (param_1 & 0xffdf) - 7;
  }
  return param_1;
}



// Function: FUN_2116_2072 @ 2116:2072

uint FUN_2116_2072(int *param_1)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined2 uVar6;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  piVar5 = (int *)param_1;
  piVar1 = piVar5 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar4 = FUN_2116_1220(piVar5,uVar6);
  }
  else {
    pbVar2 = (byte *)*param_1;
    iVar3 = piVar5[1];
    *param_1 = *param_1 + 1;
    uVar4 = (uint)*pbVar2;
  }
  return uVar4;
}



// Function: FUN_2116_20aa @ 2116:20aa

void FUN_2116_20aa(undefined2 param_1,undefined2 param_2,int param_3)

{
  if (param_3 != -1) {
    FUN_2116_265e(param_3,param_1,param_2);
  }
  return;
}



// Function: FUN_2116_20c8 @ 2116:20c8

void FUN_2116_20c8(undefined2 param_1,undefined2 param_2,int *param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  
  do {
    *param_3 = *param_3 + 1;
    iVar1 = FUN_2116_2072(param_1,param_2);
  } while ((*(byte *)(iVar1 + -0x6019) & 8) != 0);
  return;
}



// Function: FUN_2116_20fc @ 2116:20fc

void FUN_2116_20fc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2116_25e6 @ 2116:25e6

undefined2 * __cdecl16far FUN_2116_25e6(void)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)0x9d4c;
  while( true ) {
    if ((undefined2 *)*(undefined2 *)0x9f2c < puVar1) {
      return (undefined2 *)0x0;
    }
    if ((*(byte *)(puVar1 + 5) & 0x83) == 0) break;
    puVar1 = puVar1 + 6;
  }
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined1 *)((int)puVar1 + 0xb) = 0xff;
  return puVar1;
}



// Function: FUN_2116_2634 @ 2116:2634

undefined2 __cdecl16far FUN_2116_2634(void)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 extraout_AH;
  undefined2 unaff_DS;
  
  piVar1 = (int *)0x9d50;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_2116_1220(0x9d4c);
    uVar3 = extraout_AH;
  }
  else {
    *(int *)0x9d4c = *(int *)0x9d4c + 1;
    uVar2 = *(undefined1 *)((int)*(undefined4 *)0x9d4c + -1);
    uVar3 = 0;
  }
  return CONCAT11(uVar3,uVar2);
}



// Function: FUN_2116_265e @ 2116:265e

uint __cdecl16far FUN_2116_265e(uint param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined2 unaff_DS;
  
  if ((param_1 == 0xffff) ||
     (((*(byte *)(param_2 + 5) & 1) == 0 &&
      (((*(byte *)(param_2 + 5) & 0x80) == 0 || ((*(byte *)(param_2 + 5) & 2) != 0)))))) {
LAB_2116_2684:
    param_1 = 0xffff;
  }
  else {
    if (param_2[4] == 0 && param_2[3] == 0) {
      FUN_2116_13e0(param_2);
    }
    if ((param_2[3] == *param_2) && (param_2[4] == param_2[1])) {
      if (param_2[2] != 0) goto LAB_2116_2684;
      *param_2 = *param_2 + 1;
    }
    param_2[2] = param_2[2] + 1;
    *param_2 = *param_2 + -1;
    puVar1 = *(undefined1 **)param_2;
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) & 0xef;
    *puVar1 = (char)param_1;
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 1;
    param_1 = param_1 & 0xff;
  }
  return param_1;
}



// Function: FUN_2116_26ce @ 2116:26ce

void FUN_2116_26ce(undefined2 param_1,uint param_2)

{
  code *pcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  bVar2 = param_2 < *(uint *)0x9d0c;
  if (bVar2) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!bVar2) {
      *(undefined1 *)(param_2 + 0x9d0e) = 0;
    }
  }
  FUN_2116_5452();
  return;
}



// Function: FUN_2116_26ee @ 2116:26ee

void FUN_2116_26ee(undefined2 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(uint *)0x9d0c <= param_2) goto LAB_2116_276c;
  bVar5 = false;
  if ((*(int *)0x9faa != 0) && (bVar5 = false, (param_4 & 0x8000) != 0)) {
    if (param_5 == 0) goto LAB_2116_276c;
    bVar5 = false;
    pcVar2 = (code *)swi(0x21);
    uVar6 = (*pcVar2)();
    uVar3 = (uint)((ulong)uVar6 >> 0x10);
    if (bVar5) goto LAB_2116_276c;
    if ((param_5 & 2) == 0) {
      uVar1 = (uint)CARRY2((uint)uVar6,param_3);
      bVar5 = CARRY2(uVar3,param_4) || CARRY2(uVar3 + param_4,uVar1);
      if ((int)(uVar3 + param_4 + uVar1) < 0) goto LAB_2116_276c;
    }
    else {
      pcVar2 = (code *)swi(0x21);
      uVar6 = (*pcVar2)(uVar3);
      uVar4 = (uint)((ulong)uVar6 >> 0x10);
      uVar3 = (uint)CARRY2((uint)uVar6,param_3);
      uVar1 = uVar4 + param_4;
      bVar5 = CARRY2(uVar4,param_4) || CARRY2(uVar1,uVar3);
      if ((int)(uVar1 + uVar3) < 0) {
        pcVar2 = (code *)swi(0x21);
        (*pcVar2)();
        goto LAB_2116_276c;
      }
    }
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (!bVar5) {
    *(byte *)(param_2 + 0x9d0e) = *(byte *)(param_2 + 0x9d0e) & 0xfd;
  }
LAB_2116_276c:
  FUN_2116_5467();
  return;
}



// Function: FUN_2116_2770 @ 2116:2770

/* WARNING: Removing unreachable block (ram,0x000239e8) */

uint __cdecl16far
FUN_2116_2770(undefined2 param_1,undefined2 param_2,uint param_3,char param_4,uint param_5)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint extraout_DX;
  undefined2 unaff_DS;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  uint in_stack_00000000;
  byte local_6;
  undefined2 local_4;
  
  cVar2 = '\0';
  if (2 < *(byte *)0x9d05) {
    cVar2 = param_4;
  }
  _param_4 = param_5;
  local_4 = CONCAT11(local_4._1_1_,cVar2);
  local_6 = 0;
  if (((param_3 & 0x8000) == 0) && (((param_3 & 0x4000) != 0 || ((*(byte *)0x9fa7 & 0x80) == 0)))) {
    local_6 = 0x80;
  }
  bVar7 = false;
  pcVar1 = (code *)swi(0x21);
  uVar5 = param_3;
  uVar3 = (*pcVar1)();
  if (bVar7) {
    if ((uVar3 != 2) || ((uVar5 & 0x100) == 0)) goto LAB_2116_27d0;
    bVar7 = false;
    FUN_2116_292b();
    uVar8 = 0;
    uVar5 = 0;
    _param_4 = param_5;
LAB_2116_2892:
    pcVar1 = (code *)swi(0x21);
    uVar3 = (*pcVar1)();
    if ((bool)uVar8) {
LAB_2116_289d:
      uVar5 = FUN_2116_5467();
      return uVar5;
    }
    local_4 = in_stack_00000000;
    if ((cVar2 != '\0') || ((param_3 & 2) == 0)) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      bVar9 = false;
      pcVar1 = (code *)swi(0x21);
      uVar3 = (*pcVar1)();
      if (bVar9) goto LAB_2116_289d;
      if ((!bVar7) && ((_param_4 & 1) != 0)) {
        bVar7 = false;
        uVar5 = (uint)(byte)((byte)uVar5 | 1);
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
        if (bVar7) goto LAB_2116_289d;
      }
    }
  }
  else {
    if ((uVar5 & 0x500) == 0x500) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      goto LAB_2116_27d0;
    }
    bVar7 = true;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if ((extraout_DX & 0x80) != 0) {
      local_6 = local_6 | 0x40;
    }
    if ((local_6 & 0x40) == 0) {
      if ((param_3 & 0x200) == 0) {
        if (((local_6 & 0x80) != 0) && ((param_3 & 2) != 0)) {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          pcVar1 = (code *)swi(0x21);
          iVar4 = (*pcVar1)();
          if ((iVar4 != 0) && (local_4._1_1_ == '\x1a')) {
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
          }
          uVar5 = 0;
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          local_4 = param_3;
        }
      }
      else {
        uVar8 = 0;
        if ((param_3 & 3) == 0) {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          goto LAB_2116_2892;
        }
        uVar5 = 0;
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
      }
    }
  }
  if ((local_6 & 0x40) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    bVar6 = 0;
    if ((uVar5 & 1) != 0) {
      bVar6 = 0x10;
    }
    if ((param_3 & 8) != 0) {
      bVar6 = bVar6 | 0x20;
    }
  }
  else {
    bVar6 = 0;
  }
  if (uVar3 < *(uint *)0x9d0c) {
    *(byte *)(uVar3 + 0x9d0e) = bVar6 | local_6 | 1;
    return uVar3;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
LAB_2116_27d0:
  uVar5 = FUN_2116_5467();
  return uVar5;
}



// Function: FUN_2116_292b @ 2116:292b

void __cdecl16near FUN_2116_292b(void)

{
  return;
}



// Function: FUN_2116_293c @ 2116:293c

/* WARNING: Removing unreachable block (ram,0x00023b98) */
/* WARNING: Removing unreachable block (ram,0x00023b8d) */

void FUN_2116_293c(undefined2 param_1,uint param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  undefined2 uVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  int iVar5;
  undefined1 extraout_AH_01;
  int iVar7;
  uint extraout_DX;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_DS;
  undefined1 uVar10;
  bool bVar11;
  undefined4 uVar12;
  char cVar6;
  
  if (((*(uint *)0x9d0c <= param_2) || (param_4 == 0)) || ((*(byte *)(param_2 + 0x9d0e) & 2) != 0))
  {
LAB_2116_29c4:
    FUN_2116_5467();
    return;
  }
  uVar10 = *(uint *)0xa89a < 0xd6d6;
  if (*(uint *)0xa89a == 0xd6d6) {
    (*(code *)*(undefined2 *)0xa89c)();
  }
  pcVar3 = (code *)swi(0x21);
  uVar12 = (*pcVar3)();
  pcVar9 = (char *)((ulong)uVar12 >> 0x10);
  if (((bool)uVar10) || ((*(byte *)(param_2 + 0x9d0e) & 0x80) == 0)) goto LAB_2116_29c4;
  *(byte *)(param_2 + 0x9d0e) = *(byte *)(param_2 + 0x9d0e) & 0xfb;
  if ((int)uVar12 == 0) goto LAB_2116_29c4;
  uVar4 = 0xd00;
  if (*pcVar9 == '\n') {
    *(byte *)(param_2 + 0x9d0e) = *(byte *)(param_2 + 0x9d0e) | 4;
  }
LAB_2116_29a6:
  pcVar8 = (char *)((ulong)uVar12 >> 0x10);
  iVar7 = (int)uVar12;
  pcVar1 = pcVar8 + 1;
  cVar2 = *pcVar8;
  cVar6 = (char)((uint)uVar4 >> 8);
  uVar4 = CONCAT11(cVar6,cVar2);
  if (cVar2 == cVar6) {
    if (iVar7 != 1) {
      if (*pcVar1 != '\n') goto LAB_2116_29b7;
      goto LAB_2116_29ba;
    }
    bVar11 = false;
    if ((*(byte *)(param_2 + 0x9d0e) & 0x40) == 0) {
      pcVar3 = (code *)swi(0x21);
      iVar5 = (*pcVar3)();
      if (!bVar11) {
        uVar10 = 0;
        if (iVar5 != 0) {
          pcVar3 = (code *)swi(0x21);
          (*pcVar3)();
          iVar7 = 1;
          uVar10 = extraout_AH_01;
        }
        uVar4 = CONCAT11(uVar10,0xd);
        goto LAB_2116_29b7;
      }
      goto LAB_2116_29c4;
    }
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    bVar11 = false;
    uVar10 = extraout_AH;
    if ((extraout_DX & 0x20) == 0) {
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      uVar10 = extraout_AH_00;
      if (bVar11) goto LAB_2116_29c4;
    }
    uVar4 = CONCAT11(uVar10,10);
  }
  else if (cVar2 == '\x1a') {
    *(byte *)(param_2 + 0x9d0e) = *(byte *)(param_2 + 0x9d0e) | 2;
    goto LAB_2116_29c4;
  }
LAB_2116_29b7:
  *pcVar9 = (char)uVar4;
  pcVar9 = pcVar9 + 1;
LAB_2116_29ba:
  uVar12 = CONCAT22(pcVar1,iVar7 + -1);
  if (iVar7 + -1 == 0) goto LAB_2116_29c4;
  goto LAB_2116_29a6;
}



// Function: FUN_2116_2a3a @ 2116:2a3a

void FUN_2116_2a3a(undefined2 param_1,uint param_2,char *param_3,int param_4)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  
  if (*(uint *)0x9d0c <= param_2) {
LAB_2116_2a4d:
    FUN_2116_5467();
    return;
  }
  if (*(int *)0xa89a == -0x292a) {
    (*(code *)*(undefined2 *)0xa89c)();
  }
  if ((*(byte *)(param_2 + 0x9d0e) & 0x20) != 0) {
    bVar9 = false;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (bVar9) goto LAB_2116_2a4d;
  }
  if ((*(byte *)(param_2 + 0x9d0e) & 0x80) != 0) {
    pcVar6 = (char *)param_3;
    bVar9 = true;
    iVar5 = param_4;
    pcVar8 = pcVar6;
    if (param_4 != 0) {
      do {
        if (iVar5 == 0) break;
        bVar9 = *pcVar8 == '\n';
        iVar5 = iVar5 + -1;
        pcVar8 = pcVar8 + 1;
      } while (!bVar9);
      if (!bVar9) goto LAB_2116_2af1;
      uVar4 = FUN_2116_2b9a();
      if (uVar4 < 0xa9) {
                    /* WARNING: Subroutine does not return */
        FUN_2116_0a38();
      }
      pcVar7 = &stack0xfff0;
      pcVar8 = &stack0xfff2;
      do {
        pcVar1 = pcVar6;
        pcVar6 = pcVar6 + 1;
        cVar3 = *pcVar1;
        if (cVar3 == '\n') {
          cVar3 = '\r';
          if (pcVar8 == pcVar7) {
            cVar3 = FUN_2116_2afa();
          }
          pcVar1 = pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar1 = cVar3;
          cVar3 = '\n';
        }
        if (pcVar8 == pcVar7) {
          cVar3 = FUN_2116_2afa();
        }
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        *pcVar1 = cVar3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      FUN_2116_2afa();
    }
    FUN_2116_2b4f();
    return;
  }
LAB_2116_2af1:
  FUN_2116_2b60();
  return;
}



// Function: FUN_2116_2afa @ 2116:2afa

/* WARNING: Unable to track spacebase fully for stack */

undefined2 __cdecl16near FUN_2116_2afa(void)

{
  code *pcVar1;
  undefined2 in_AX;
  uint uVar2;
  undefined2 uVar3;
  uint in_DX;
  int unaff_BP;
  uint unaff_DI;
  undefined2 unaff_SS;
  bool bVar4;
  
  bVar4 = unaff_DI < in_DX;
  if (unaff_DI != in_DX) {
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if ((bVar4) ||
       (*(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + uVar2, uVar2 < unaff_DI - in_DX)) {
      uVar3 = FUN_2116_5467();
      return uVar3;
    }
  }
  return in_AX;
}



// Function: FUN_2116_2b4f @ 2116:2b4f

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_2116_2b4f(void)

{
  FUN_2116_5467();
  return;
}



// Function: FUN_2116_2b60 @ 2116:2b60

void FUN_2116_2b60(void)

{
  code *pcVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if (*(int *)(unaff_BP + 0xc) != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    FUN_2116_5467();
    return;
  }
  FUN_2116_5467();
  return;
}



// Function: FUN_2116_2b9a @ 2116:2b9a

int __cdecl16far FUN_2116_2b9a(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if ((undefined1 *)*(uint *)0x9d42 < &stack0x0004) {
    iVar1 = -((int)*(uint *)0x9d42 - (int)&stack0x0004);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



// Function: FUN_2116_2bcf @ 2116:2bcf

void __cdecl16far FUN_2116_2bcf(uint param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  do {
    bVar2 = param_1 < 0xffe8;
    if (param_1 < 0xffe9) {
      FUN_2116_2cb6();
      if (!bVar2) {
        return;
      }
      FUN_2116_2d32();
      if ((!bVar2) && (FUN_2116_2cb6(), !bVar2)) {
        return;
      }
    }
    if (*(int *)0x9fae == 0 && *(int *)0x9fac == 0) {
      return;
    }
    iVar1 = (*(code *)*(undefined2 *)0x9fac)(0x2116,param_1);
  } while (iVar1 != 0);
  return;
}



// Function: FUN_2116_2c0a @ 2116:2c0a

void __cdecl16far FUN_2116_2c0a(undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = (int)((ulong)param_1 >> 0x10);
  if (iVar2 != 0) {
    pbVar1 = (byte *)((int)param_1 + -2);
    *pbVar1 = *pbVar1 | 1;
  }
  return;
}



// Function: FUN_2116_2c1d @ 2116:2c1d

undefined2 __cdecl16far FUN_2116_2c1d(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_BX;
  uint uVar3;
  code *pcVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  uint uVar10;
  
  uVar5 = 0x2116;
  do {
    if (param_1 < 0xffe9) {
      bVar7 = false;
      if (*(int *)0x9fb6 != 0) {
        pcVar4 = (code *)0x2cb6;
        while( true ) {
          uVar3 = *(uint *)0x9fbe;
          uVar6 = (uint)((ulong)*(undefined4 *)0x9fb8 >> 0x10);
          in_BX = (int)*(undefined4 *)0x9fb8;
          uVar10 = uVar6;
          do {
            do {
              uVar5 = 0x2000;
              uVar9 = (*pcVar4)();
              if (!bVar7) {
                if (pcVar4 == (code *)0x2cb6) goto LAB_2116_2c87;
                goto LAB_2116_2c84;
              }
              puVar1 = (undefined4 *)(in_BX + 0xc);
              in_BX = (int)*puVar1;
              bVar7 = uVar6 < uVar3;
              bVar8 = uVar6 != uVar3;
              uVar6 = (uint)((ulong)*puVar1 >> 0x10);
            } while (bVar8);
            uVar3 = *(uint *)((int)*(undefined4 *)0x9fb8 + 0x12);
            uVar6 = (uint)((ulong)*(undefined4 *)0x9fb4 >> 0x10);
            in_BX = (int)*(undefined4 *)0x9fb4;
            bVar7 = uVar6 < uVar10;
            bVar8 = uVar6 != uVar10;
            uVar10 = uVar6;
          } while (bVar8);
          bVar7 = pcVar4 < (code *)0x2d32;
          if (pcVar4 == (code *)0x2d32) break;
          pcVar4 = (code *)0x2d32;
        }
      }
      FUN_2116_2e32();
      if (!bVar7) {
LAB_2116_2c84:
        uVar9 = FUN_2116_2cb6();
LAB_2116_2c87:
        *(undefined2 *)0x9fba = (int)((ulong)uVar9 >> 0x10);
        *(int *)0x9fb8 = in_BX;
        return (int)uVar9;
      }
    }
    if (*(int *)0x9fb2 == 0 && *(int *)0x9fb0 == 0) {
      return 0;
    }
    iVar2 = (*(code *)*(undefined2 *)0x9fb0)(uVar5,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}



// Function: FUN_2116_2cb6 @ 2116:2cb6

uint * __cdecl16near FUN_2116_2cb6(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int in_CX;
  uint uVar4;
  int in_BX;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined2 unaff_DS;
  
  uVar4 = in_CX + 1U & 0xfffe;
  puVar7 = (uint *)*(undefined2 *)(in_BX + 8);
  puVar5 = (uint *)*(undefined2 *)(in_BX + 10);
  do {
    while( true ) {
      puVar1 = puVar7 + 1;
      uVar3 = *puVar7;
      puVar6 = puVar1;
      if ((uVar3 & 1) != 0) {
        while( true ) {
          uVar2 = uVar3 - 1;
          if (uVar4 <= uVar2) {
            *puVar7 = uVar4;
            puVar7 = puVar1;
            if (uVar2 != uVar4) {
              *(int *)((int)puVar1 + uVar4) = (uVar2 - uVar4) + -1;
              puVar7 = (uint *)((int)((int)puVar1 + uVar4) - uVar4);
            }
            *(int *)(in_BX + 8) = (int)puVar7 + uVar4;
            return puVar1;
          }
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_2116_2d0f;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_2116_2d0f;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 6);
      if ((uint *)*(undefined2 *)(in_BX + 8) == puVar7) goto LAB_2116_2d0f;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 8) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_2116_2d0f:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 6);
  *(undefined2 *)(in_BX + 8) = puVar7;
  return puVar7;
}



// Function: FUN_2116_2d32 @ 2116:2d32

void __cdecl16near FUN_2116_2d32(void)

{
  int *piVar1;
  int iVar2;
  int in_CX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_BX;
  uint *unaff_SI;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  bool bVar7;
  
  if ((*(byte *)(in_BX + 2) & 1) != 0) {
    FUN_2116_2e12();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar4 = *(uint *)(in_BX + 4);
    if (uVar4 != 0) {
      if (!CARRY2(in_CX + 2U,uVar4)) {
        uVar4 = DAT_6135_9fc2;
        if (DAT_6135_9fc2 == 0x2000) goto LAB_2116_2d82;
        uVar4 = 0x8000;
        while (DAT_6135_9fc2 <= uVar4) {
          uVar4 = uVar4 >> 1;
          if (uVar4 == 0) goto LAB_2116_2d9b;
        }
        if (uVar4 < 8) goto LAB_2116_2d9b;
        uVar4 = uVar4 << 1;
        goto LAB_2116_2d82;
      }
      uVar3 = 0xfff0;
      if (in_CX + 2U + uVar4 == 0) {
        while( true ) {
          bVar7 = false;
          iVar2 = FUN_2116_2dc1();
          if (!bVar7) break;
          if (uVar3 == 0xfff0) {
            return;
          }
LAB_2116_2d9b:
          uVar4 = 0x10;
LAB_2116_2d82:
          uVar3 = ~(uVar4 - 1);
        }
        iVar5 = iVar2 - *(int *)(in_BX + 4);
        *(int *)(in_BX + 4) = iVar2;
        *(undefined2 *)(in_BX + 8) = unaff_SI;
        piVar1 = (int *)*(int *)(in_BX + 10);
        *piVar1 = iVar5 + -1;
        puVar6 = (undefined2 *)((int)piVar1 + iVar5);
        *puVar6 = 0xfffe;
        *(undefined2 *)(in_BX + 10) = puVar6;
      }
    }
  }
  return;
}



// Function: FUN_2116_2dc1 @ 2116:2dc1

void __cdecl16near FUN_2116_2dc1(int param_1)

{
  code *pcVar1;
  uint in_AX;
  uint uVar2;
  int extraout_DX;
  int in_BX;
  int unaff_DS;
  bool bVar3;
  
  if ((((*(byte *)(in_BX + 2) & 4) == 0) || (in_AX - 1 <= *(int *)(in_BX + 4) - 1U)) ||
     (*(uint *)(in_BX + -2) < in_AX - 1)) {
    uVar2 = in_AX >> 4;
    if (uVar2 == 0) {
      uVar2 = 0x1000;
    }
    bVar3 = false;
    if ((*(byte *)(in_BX + 2) & 4) != 0) {
      bVar3 = uVar2 + unaff_DS < *(uint *)0x9d02;
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if ((!bVar3) && ((*(byte *)(param_1 + 2) & 4) != 0)) {
      *(int *)(param_1 + -2) = extraout_DX + -1;
    }
  }
  return;
}



// Function: FUN_2116_2e12 @ 2116:2e12

void __cdecl16near FUN_2116_2e12(void)

{
  int in_BX;
  uint *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (uint *)*(undefined2 *)(in_BX + 8);
  if (puVar1 == (uint *)*(undefined2 *)(in_BX + 10)) {
    puVar1 = (uint *)*(undefined2 *)(in_BX + 6);
  }
  while( true ) {
    if (*puVar1 == 0xfffe) break;
    puVar1 = (uint *)((int)puVar1 + (*puVar1 & 0xfffe) + 2);
  }
  return;
}



// Function: FUN_2116_2e32 @ 2116:2e32

void __cdecl16near FUN_2116_2e32(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar3;
  
  bVar3 = false;
  do {
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if (bVar3) {
      return;
    }
    bVar3 = uVar2 < *(uint *)0x9cdc;
  } while (uVar2 <= *(uint *)0x9cdc);
  if (*(uint *)0x9cda < uVar2) {
    *(uint *)0x9cda = uVar2;
  }
  *(undefined2 *)0x2 = *(undefined2 *)(unaff_DI + 0xc);
  FUN_2116_54be();
  FUN_2116_54f2();
  return;
}



// Function: FUN_2116_2e76 @ 2116:2e76

char * __cdecl16far FUN_2116_2e76(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  bool bVar11;
  
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  bVar11 = true;
  iVar3 = -1;
  pcVar6 = (char *)param_1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
    bVar11 = *pcVar1 == '\0';
  } while (!bVar11);
  pcVar8 = pcVar6 + -1;
  uVar10 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar7 = (char *)param_2;
  uVar4 = 0xffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
    bVar11 = *pcVar1 == '\0';
  } while (!bVar11);
  uVar4 = ~uVar4;
  if (!bVar11) {
    pcVar7 = pcVar7 + -uVar4;
    uVar4 = uVar4 + 1;
  }
  pcVar7 = pcVar7 + -uVar4;
  if (uVar4 == 0) {
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 2;
    *(undefined2 *)pcVar8 = *(undefined2 *)pcVar1;
    uVar4 = 0xfffe;
    pcVar8 = pcVar6 + 1;
  }
  else if (((uint)pcVar7 & 1) != 0) {
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
    *pcVar8 = *pcVar1;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6;
  }
  for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar2 = pcVar8;
    pcVar8 = pcVar8 + 2;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
    *pcVar2 = *pcVar1;
  }
  return (char *)param_1;
}



// Function: FUN_2116_2eca @ 2116:2eca

void __cdecl16far FUN_2116_2eca(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  bool bVar9;
  
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar5 = (char *)param_2;
  bVar9 = true;
  uVar3 = 0xffff;
  pcVar6 = pcVar5;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
    bVar9 = *pcVar1 == '\0';
  } while (!bVar9);
  uVar3 = ~uVar3;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar6 = (char *)param_1;
  if (bVar9) {
    if (((ulong)param_1 & 1) != 0) {
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
      *param_1 = *param_2;
      uVar3 = uVar3 - 1;
    }
  }
  else {
    pcVar6 = pcVar6 + 2;
    pcVar5 = pcVar5 + 2;
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    uVar3 = uVar3 - 1;
  }
  for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = pcVar6;
    pcVar6 = pcVar6 + 2;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar2 = *pcVar1;
  }
  return;
}



// Function: FUN_2116_2f06 @ 2116:2f06

int __cdecl16far FUN_2116_2f06(byte *param_1,char *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined2 uVar10;
  bool bVar11;
  bool bVar12;
  
  pbVar7 = (byte *)param_1;
  uVar10 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar8 = (char *)param_2;
  iVar4 = 0;
  uVar5 = 0xffff;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar2 = pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (*pcVar2 != '\0');
  pcVar6 = (char *)~uVar5;
  bVar11 = pcVar8 < pcVar6;
  pbVar9 = (byte *)(pcVar8 + -(int)pcVar6);
  bVar12 = pbVar9 == (byte *)0x0;
  do {
    if (pcVar6 == (char *)0x0) break;
    pcVar6 = pcVar6 + -1;
    pbVar3 = pbVar9;
    pbVar9 = pbVar9 + 1;
    pbVar1 = pbVar7;
    pbVar7 = pbVar7 + 1;
    bVar11 = *pbVar1 < *pbVar3;
    bVar12 = *pbVar1 == *pbVar3;
  } while (bVar12);
  if (!bVar12) {
    iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
  }
  return iVar4;
}



// Function: FUN_2116_2f30 @ 2116:2f30

uint __cdecl16far FUN_2116_2f30(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = (char *)param_1;
  bVar4 = true;
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
    bVar4 = *pcVar1 == '\0';
  } while (!bVar4);
  uVar2 = ~uVar2;
  if (bVar4) {
    uVar2 = uVar2 - 1;
  }
  return uVar2;
}



// Function: FUN_2116_2f82 @ 2116:2f82

char * __cdecl16far FUN_2116_2f82(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar3 = (char *)param_2;
  pcVar4 = (char *)param_1;
  if (param_3 != 0) {
    do {
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
      if (*pcVar1 == '\0') break;
      pcVar2 = pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar2 = *pcVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    for (; param_3 != 0; param_3 = param_3 + -1) {
      pcVar1 = pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar1 = '\0';
    }
  }
  return (char *)param_1;
}



// Function: FUN_2116_2fac @ 2116:2fac

uint __cdecl16far FUN_2116_2fac(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  uVar4 = 0;
  if (param_3 != 0) {
    uVar7 = (undefined2)((ulong)param_1 >> 0x10);
    pcVar6 = (char *)param_1;
    iVar3 = param_3;
    pcVar5 = pcVar6;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\0');
    param_3 = param_3 - iVar3;
    uVar8 = (undefined2)((ulong)param_2 >> 0x10);
    pcVar5 = (char *)param_2;
    do {
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pcVar2 = pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 == *pcVar2);
    uVar4 = 0;
    if ((byte)pcVar5[-1] <= (byte)pcVar6[-1]) {
      if (pcVar5[-1] == pcVar6[-1]) {
        return 0;
      }
      uVar4 = 0xfffe;
    }
    uVar4 = ~uVar4;
  }
  return uVar4;
}



// Function: thunk_FUN_2116_3048 @ 2116:2fec

int __cdecl16far thunk_FUN_2116_3048(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  undefined2 uVar6;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  pbVar5 = (byte *)param_1;
  iVar4 = 0;
  do {
    do {
      pbVar1 = pbVar5;
      pbVar5 = pbVar5 + 1;
      bVar2 = *pbVar1;
    } while (bVar2 == 0x20);
  } while (bVar2 == 9);
  if ((bVar2 != 0x2d) && (bVar3 = bVar2, bVar2 != 0x2b)) goto LAB_2116_3069;
  while( true ) {
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = *pbVar1;
LAB_2116_3069:
    if ((0x39 < bVar3) || (bVar3 < 0x30)) break;
    iVar4 = iVar4 * 10 + (uint)(byte)(bVar3 - 0x30);
  }
  if (bVar2 == 0x2d) {
    iVar4 = -iVar4;
  }
  return iVar4;
}



// Function: FUN_2116_2ff0 @ 2116:2ff0

undefined2 __cdecl16far FUN_2116_2ff0(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 in_DX;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  while (uVar3 = (undefined2)((ulong)param_1 >> 0x10), (*(byte *)(*param_1 + -0x6019) & 8) != 0) {
    param_1 = (char *)CONCAT22(uVar3,(char *)param_1 + 1);
  }
  uVar1 = FUN_2116_2f30((char *)param_1,uVar3,0,0);
  iVar2 = FUN_2116_5368((char *)param_1,uVar3,uVar1);
  *(undefined2 *)0xcc18 = *(undefined2 *)(iVar2 + 8);
  *(undefined2 *)0xcc1a = *(undefined2 *)(iVar2 + 10);
  *(undefined2 *)0xcc1c = *(undefined2 *)(iVar2 + 0xc);
  *(undefined2 *)0xcc1e = *(undefined2 *)(iVar2 + 0xe);
  return 0xcc18;
}



// Function: FUN_2116_3048 @ 2116:3048

int __cdecl16far FUN_2116_3048(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  undefined2 uVar6;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  pbVar5 = (byte *)param_1;
  iVar4 = 0;
  do {
    do {
      pbVar1 = pbVar5;
      pbVar5 = pbVar5 + 1;
      bVar2 = *pbVar1;
    } while (bVar2 == 0x20);
  } while (bVar2 == 9);
  if ((bVar2 != 0x2d) && (bVar3 = bVar2, bVar2 != 0x2b)) goto LAB_2116_3069;
  while( true ) {
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = *pbVar1;
LAB_2116_3069:
    if ((0x39 < bVar3) || (bVar3 < 0x30)) break;
    iVar4 = iVar4 * 10 + (uint)(byte)(bVar3 - 0x30);
  }
  if (bVar2 == 0x2d) {
    iVar4 = -iVar4;
  }
  return iVar4;
}



// Function: FUN_2116_309e @ 2116:309e

void FUN_2116_309e(void)

{
  FUN_2116_4195();
  return;
}



// Function: FUN_2116_30ba @ 2116:30ba

void __cdecl16far FUN_2116_30ba(void)

{
  FUN_2116_0cf3(10);
  FUN_2116_440e(0x16);
  FUN_2116_0964();
  return;
}



// Function: FUN_2116_30da @ 2116:30da

int __cdecl16far FUN_2116_30da(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined4 local_6;
  
  local_6 = (int *)CONCAT22(*(int *)0x9d2a,(int *)*(int *)0x9d28);
  if ((*(int *)0x9d2a != 0 || (int *)*(int *)0x9d28 != (int *)0x0) && (param_2 != 0 || param_1 != 0)
     ) {
    uVar1 = FUN_2116_2f30(param_1,param_2);
    while( true ) {
      uVar5 = (undefined2)((ulong)local_6 >> 0x10);
      piVar4 = (int *)local_6;
      if (piVar4[1] == 0 && *local_6 == 0) break;
      uVar2 = FUN_2116_2f30(*local_6,piVar4[1]);
      if (((uVar1 < uVar2) && (*(char *)((int)*(undefined4 *)local_6 + uVar1) == '=')) &&
         (iVar3 = FUN_2116_2fac(*local_6,piVar4[1],param_1,param_2,uVar1), iVar3 == 0)) {
        return *local_6 + uVar1 + 1;
      }
      local_6 = (int *)CONCAT22(uVar5,piVar4 + 2);
    }
  }
  return 0;
}



// Function: FUN_2116_3248 @ 2116:3248

char * __cdecl16far FUN_2116_3248(char *param_1,int param_2,int *param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined2 uVar11;
  undefined2 unaff_DS;
  
  if (param_2 < 1) {
LAB_2116_32aa:
    pcVar9 = (char *)0x0;
  }
  else {
    uVar7 = param_2 - 1;
    uVar11 = (undefined2)((ulong)param_1 >> 0x10);
    pcVar9 = (char *)param_1;
    pcVar10 = pcVar9;
    while (uVar7 != 0) {
      uVar5 = param_3[2];
      if (uVar5 == 0) {
        iVar4 = FUN_2116_1220(param_3,unaff_DS);
        if (iVar4 == -1) {
          if ((pcVar10 == pcVar9) || ((*(byte *)(param_3 + 5) & 0x20) != 0)) goto LAB_2116_32aa;
          break;
        }
        pcVar3 = pcVar10;
        pcVar10 = pcVar10 + 1;
        *pcVar3 = (char)iVar4;
        if ((char)iVar4 == '\n') break;
        uVar7 = uVar7 - 1;
      }
      else {
        if (uVar7 < uVar5) {
          uVar5 = uVar7;
        }
        pcVar3 = *(char **)param_3;
        pcVar8 = (char *)pcVar3;
        uVar6 = uVar5;
        do {
          pcVar1 = pcVar8;
          pcVar8 = pcVar8 + 1;
          cVar2 = *pcVar1;
          pcVar1 = pcVar10;
          pcVar10 = pcVar10 + 1;
          *pcVar1 = cVar2;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0 && cVar2 != '\n');
        *param_3 = (int)pcVar8;
        if (cVar2 == '\n') {
          param_3[2] = param_3[2] - (uVar5 - uVar6);
          break;
        }
        param_3[2] = param_3[2] - uVar5;
        uVar7 = uVar7 - uVar5;
      }
    }
    *pcVar10 = '\0';
  }
  return pcVar9;
}



// Function: FUN_2116_3324 @ 2116:3324

undefined2 __cdecl16far
FUN_2116_3324(int param_1,undefined2 param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  int in_DX;
  undefined2 unaff_DS;
  bool bVar2;
  long lVar3;
  
  if ((((*(byte *)(param_1 + 10) & 0x83) == 0) || (2 < param_5)) || (param_5 < 0)) {
    *(undefined2 *)0x9cfc = 0x16;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    if (param_5 == 1) {
      uVar1 = FUN_2116_33a4(param_1);
      bVar2 = CARRY2(param_3,uVar1);
      param_3 = param_3 + uVar1;
      param_4 = param_4 + in_DX + (uint)bVar2;
      param_5 = 0;
    }
    FUN_2116_1688(param_1);
    if ((*(byte *)(param_1 + 10) & 0x80) != 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    }
    lVar3 = FUN_2116_26ee(0x2116,*(undefined1 *)(param_1 + 0xb),param_3,param_4,param_5);
    if (lVar3 != -1) {
      return 0;
    }
  }
  return 0xffff;
}



// Function: FUN_2116_33a4 @ 2116:33a4

int __cdecl16far FUN_2116_33a4(int *param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  long lVar3;
  long lVar4;
  undefined4 local_16;
  int local_12;
  int local_a;
  int local_6;
  
  uVar1 = (uint)*(byte *)((int)param_1 + 0xb);
  if (param_1[2] < 0) {
    param_1[2] = 0;
  }
  lVar3 = FUN_2116_26ee(0x2116,uVar1,0,0,1);
  local_a = (int)lVar3;
  if (lVar3 < 0) {
LAB_2116_33ee:
    local_6 = -1;
  }
  else {
    if (((*(byte *)(param_1 + 5) & 8) == 0) && ((*(byte *)(param_1 + 0x78) & 1) == 0)) {
      return local_a - param_1[2];
    }
    local_6 = *param_1 - param_1[3];
    if ((*(byte *)(param_1 + 5) & 3) == 0) {
      if ((*(byte *)(param_1 + 5) & 0x80) == 0) {
        *(undefined2 *)0x9cfc = 0x16;
        goto LAB_2116_33ee;
      }
    }
    else if ((*(byte *)(uVar1 + 0x9d0e) & 0x80) != 0) {
      local_16 = (char *)CONCAT22(param_1[4],(char *)param_1[3]);
      while ((char *)local_16 < (char *)*param_1) {
        if (*local_16 == '\n') {
          local_6 = local_6 + 1;
        }
        local_16 = (char *)CONCAT22(local_16._2_2_,(char *)local_16 + 1);
      }
    }
    if (lVar3 != 0) {
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        if (param_1[2] == 0) {
          local_6 = 0;
        }
        else {
          local_12 = (*param_1 - param_1[3]) + param_1[2];
          if ((*(byte *)(uVar1 + 0x9d0e) & 0x80) != 0) {
            lVar4 = FUN_2116_26ee(0x2116,uVar1,0,0,2);
            if (lVar4 == lVar3) {
              pcVar2 = (char *)(local_12 + param_1[3]);
              local_16 = (char *)CONCAT22(param_1[4],(char *)param_1[3]);
              while ((char *)local_16 < pcVar2) {
                if (*local_16 == '\n') {
                  local_12 = local_12 + 1;
                }
                local_16 = (char *)CONCAT22(local_16._2_2_,(char *)local_16 + 1);
              }
              if ((*(byte *)(param_1 + 0x78) & 0x20) != 0) {
                local_12 = local_12 + 1;
              }
            }
            else {
              FUN_2116_26ee(0x2116,uVar1,lVar3,0);
              local_12 = param_1[0x79];
              if ((*(byte *)(uVar1 + 0x9d0e) & 4) != 0) {
                local_12 = local_12 + 1;
              }
            }
          }
          local_a = local_a - local_12;
        }
      }
      local_6 = local_a + local_6;
    }
  }
  return local_6;
}



// Function: FUN_2116_3544 @ 2116:3544

void __cdecl16far FUN_2116_3544(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 unaff_DS;
  
  bVar2 = *(byte *)(param_1 + 0xb);
  FUN_2116_1688(param_1);
  pbVar1 = (byte *)(bVar2 + 0x9d0e);
  *pbVar1 = *pbVar1 & 0xfd;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xcf;
  if ((*(byte *)(param_1 + 10) & 0x80) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  }
  FUN_2116_26ee(0x2116,(uint)bVar2,0,0,0);
  return;
}



// Function: FUN_2116_3588 @ 2116:3588

undefined2 __cdecl16far FUN_2116_3588(undefined2 param_1,undefined2 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  *(undefined1 *)0xbbba = 0x42;
  *(undefined2 *)0xbbb6 = param_1;
  *(undefined2 *)0xbbb8 = param_2;
  *(undefined2 *)0xbbb0 = param_1;
  *(undefined2 *)0xbbb2 = param_2;
  *(undefined2 *)0xbbb4 = 0x7fff;
  uVar3 = FUN_2116_20fc(0x2116,0xbbb0);
  piVar1 = (int *)0xbbb4;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    FUN_2116_12bc(0,0xbbb0);
  }
  else {
    puVar2 = (undefined1 *)*(undefined4 *)0xbbb0;
    *(int *)0xbbb0 = *(int *)0xbbb0 + 1;
    *puVar2 = 0;
  }
  return uVar3;
}



// Function: FUN_2116_35f2 @ 2116:35f2

void __cdecl16far FUN_2116_35f2(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  *(undefined1 *)0xbbc6 = 0x49;
  *(undefined2 *)0xbbc2 = param_1;
  *(undefined2 *)0xbbc4 = param_2;
  *(undefined2 *)0xbbbc = param_1;
  *(undefined2 *)0xbbbe = param_2;
  uVar1 = FUN_2116_2f30(param_1,param_2);
  *(undefined2 *)0xbbc0 = uVar1;
  FUN_2116_177c(0x2116,0xbbbc);
  return;
}



// Function: FUN_2116_363e @ 2116:363e

undefined1 __cdecl16far FUN_2116_363e(undefined4 param_1)

{
  return *(undefined1 *)((int)param_1 + 0xb);
}



// Function: FUN_2116_364c @ 2116:364c

undefined2 __cdecl16far FUN_2116_364c(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if ((param_1 < 0) || (*(int *)0x9d0c <= param_1)) {
    *(undefined2 *)0x9cfc = 9;
    uVar1 = 0xffff;
  }
  else if (CONCAT11(*(undefined1 *)0x9d05,*(undefined1 *)0x9d04) < 0x31e) {
    uVar1 = 0;
  }
  else {
    if ((*(byte *)(param_1 + -0x62f2) & 1) != 0) {
      iVar2 = FUN_2116_4bbe(0x2116,param_1);
      if (iVar2 == 0) {
        return 0;
      }
      *(int *)0x9d0a = iVar2;
    }
    *(undefined2 *)0x9cfc = 9;
    uVar1 = 0xffff;
  }
  return uVar1;
}



// Function: FUN_2116_36a6 @ 2116:36a6

undefined2 __cdecl16far FUN_2116_36a6(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  long lVar2;
  long lVar3;
  
  if ((param_1 < 0) || (*(int *)0x9d0c <= param_1)) {
    *(undefined2 *)0x9cfc = 9;
    uVar1 = 0xffff;
  }
  else {
    lVar2 = FUN_2116_26ee(0x2116,param_1,0,0,1);
    if (lVar2 == -1) {
      uVar1 = 0xffff;
    }
    else {
      lVar3 = FUN_2116_26ee(0x2116,param_1,0,0,2);
      uVar1 = (undefined2)lVar3;
      if (lVar3 != lVar2) {
        FUN_2116_26ee(0x2116,param_1,lVar2,0);
      }
    }
  }
  return uVar1;
}



// Function: FUN_2116_372c @ 2116:372c

undefined2 * __cdecl16far FUN_2116_372c(uint param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  
  iVar4 = (int)((ulong)param_1 * (ulong)param_2 >> 0x10);
  if (iVar4 == 0) {
    puVar2 = (undefined2 *)FUN_2116_2c1d();
    if (puVar2 != (undefined2 *)0x0 || iVar4 != 0) {
      puVar5 = puVar2;
      for (uVar3 = (int)((ulong)param_1 * (ulong)param_2) + 1U >> 1; uVar3 != 0; uVar3 = uVar3 - 1)
      {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar1 = 0;
      }
    }
  }
  else {
    puVar2 = (undefined2 *)0x0;
  }
  return puVar2;
}



// Function: FUN_2116_37fa @ 2116:37fa

void __cdecl16far
FUN_2116_37fa(undefined2 param_1,undefined1 *param_2,undefined2 param_3,undefined1 *param_4,
             int param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  for (; param_5 != 0; param_5 = param_5 + -1) {
    puVar2 = param_4;
    param_4 = param_4 + 1;
    puVar1 = param_2;
    param_2 = param_2 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



// Function: FUN_2116_3818 @ 2116:3818

void __cdecl16far FUN_2116_3818(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 unaff_ES;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000002;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)param_1;
  puVar1[3] = unaff_DS;
  *param_1 = unaff_ES;
  puVar1[1] = in_stack_00000002;
  puVar1[2] = unaff_SS;
  return;
}



// Function: FUN_2116_3838 @ 2116:3838

undefined1 __cdecl16far FUN_2116_3838(undefined2 param_1,undefined1 param_2)

{
  out(param_1,param_2);
  return param_2;
}



// Function: FUN_2116_3846 @ 2116:3846

char * FUN_2116_3846(int param_1,char *param_2)

{
  undefined2 unaff_DS;
  
  *param_2 = (char)(param_1 / 10) + '0';
  param_2[1] = (char)(param_1 % 10) + '0';
  return param_2 + 2;
}



// Function: FUN_2116_3874 @ 2116:3874

undefined2 __cdecl16far FUN_2116_3874(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  int local_8;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined2 *)param_1;
  iVar1 = puVar4[6];
  iVar2 = puVar4[4];
  local_8 = 0;
  puVar3 = (undefined1 *)0xbbc8;
  do {
    puVar5 = puVar3;
    *puVar5 = *(undefined1 *)(iVar1 * 3 + local_8 + -0x5f16);
    puVar5[4] = *(undefined1 *)(iVar2 * 3 + local_8 + -0x5f00);
    local_8 = local_8 + 1;
    puVar3 = puVar5 + 1;
  } while (local_8 < 3);
  puVar5[1] = 0x20;
  puVar5[5] = 0x20;
  puVar3 = (undefined1 *)FUN_2116_3846(puVar4[3],puVar5 + 6);
  *puVar3 = 0x20;
  puVar3 = (undefined1 *)FUN_2116_3846(puVar4[2],puVar3 + 1);
  *puVar3 = 0x3a;
  puVar3 = (undefined1 *)FUN_2116_3846(puVar4[1],puVar3 + 1);
  *puVar3 = 0x3a;
  puVar3 = (undefined1 *)FUN_2116_3846(*param_1,puVar3 + 1);
  *puVar3 = 0x20;
  iVar1 = puVar4[5];
  uVar6 = FUN_2116_3846((iVar1 + 0x76c) / 100,puVar3 + 1);
  puVar3 = (undefined1 *)FUN_2116_3846((iVar1 + 0x76c) % 100,uVar6);
  *puVar3 = 10;
  puVar3[1] = 0;
  return 0xbbc8;
}



// Function: FUN_2116_3948 @ 2116:3948

undefined2 __cdecl16far FUN_2116_3948(void)

{
  FUN_2116_5145();
  FUN_2116_5145();
  FUN_2116_4f50(0x2116);
  FUN_2116_4fa4();
  return 0x9cf2;
}



// Function: FUN_2116_3972 @ 2116:3972

void __cdecl16far FUN_2116_3972(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined1 local_24 [4];
  uint local_20;
  uint local_1e;
  int local_1c;
  int local_1a;
  int local_16;
  byte local_12;
  char local_11;
  undefined1 local_10;
  byte local_f;
  byte local_e;
  byte local_d;
  int local_c;
  uint local_8;
  uint local_6;
  uint local_4;
  
  FUN_2116_3c00();
  uVar1 = FUN_2116_4cfe(*(undefined2 *)0xa12a,*(undefined2 *)0xa12c,0x3c,0);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined2 *)param_1;
  puVar3[3] = uVar1;
  FUN_2116_4c4c(&local_e);
  FUN_2116_4c68(&local_12);
  if ((local_12 == 0) && (local_11 == '\0')) {
    FUN_2116_4c4c(&local_e);
  }
  local_4 = local_c - 0x7bc;
  local_1a = local_c + -0x76c;
  local_1e = (uint)local_e;
  local_6 = (uint)local_d;
  local_1c = local_6 - 1;
  local_16 = local_1e + *(int *)(local_1c * 2 + -0x5ddc);
  if (((local_4 & 3) == 0) && (2 < local_d)) {
    local_16 = local_16 + 1;
  }
  local_20 = (uint)local_12;
  puVar3[2] = (uint)local_f * 10;
  iVar2 = local_16;
  local_8 = local_1e;
  uVar1 = FUN_2116_3e2a(local_4,local_6,local_1e,local_12,local_11,local_10);
  *param_1 = uVar1;
  puVar3[1] = iVar2;
  if ((*(int *)0xa12e != 0) && (iVar2 = FUN_2116_3d5c(local_24), iVar2 != 0)) {
    puVar3[4] = 1;
    return;
  }
  puVar3[4] = 0;
  return;
}



// Function: FUN_2116_3a84 @ 2116:3a84

int __cdecl16far FUN_2116_3a84(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  bool bVar6;
  int in_stack_0000fff6;
  uint local_6;
  int local_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  if (-1 < (int)((uint *)param_1)[1]) {
    FUN_2116_3c00();
    uVar1 = *param_1 - *(uint *)0xa12a;
    iVar4 = (((uint *)param_1)[1] - *(int *)0xa12c) - (uint)(*param_1 < *(uint *)0xa12a);
    if (iVar4 < 0) {
      local_6 = uVar1 + 0x5180;
      iVar2 = iVar4 + 1 + (uint)(0xae7f < uVar1);
      if (-1 < iVar2) {
        local_4 = iVar2;
        iVar4 = FUN_2116_564a(&local_6);
        *(undefined2 *)(iVar4 + 10) = 0x45;
        *(undefined2 *)(iVar4 + 8) = 0xb;
        *(undefined2 *)(iVar4 + 6) = 0x1f;
        *(undefined2 *)(iVar4 + 0xc) = 3;
        *(undefined2 *)(iVar4 + 0xe) = 0x16c;
        return iVar4;
      }
      local_6 = uVar1 + 0xae80;
      iVar4 = (iVar4 + -1) - (uint)(uVar1 < 0x5180);
      if (iVar4 < 0) {
        return in_stack_0000fff6;
      }
      local_4 = iVar4;
      iVar2 = FUN_2116_564a(&local_6);
      *(int *)(iVar2 + 6) = *(int *)(iVar2 + 6) + 1;
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      *(int *)(iVar2 + 0xe) = *(int *)(iVar2 + 0xe) + 1;
      return iVar2;
    }
    local_6 = uVar1;
    local_4 = iVar4;
    iVar2 = FUN_2116_564a(&local_6);
    if (*(int *)0xa12e == 0) {
      return iVar2;
    }
    iVar3 = FUN_2116_3d5c(iVar2,iVar4,iVar2,iVar4);
    if (iVar3 == 0) {
      return iVar2;
    }
    bVar6 = 0xf1ef < local_6;
    local_6 = local_6 + 0xe10;
    local_4 = local_4 + (uint)bVar6;
    if (-1 < local_4) {
      iVar2 = FUN_2116_564a(&local_6);
      *(undefined2 *)(iVar2 + 0x10) = 1;
      return iVar2;
    }
  }
  return 0;
}



// Function: FUN_2116_3baa @ 2116:3baa

void __cdecl16far FUN_2116_3baa(undefined2 *param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  uint in_CX;
  uint uVar3;
  uint uVar4;
  uint extraout_DX;
  uint extraout_DX_00;
  uint uVar5;
  uint uVar6;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  uVar3 = in_CX;
  uVar6 = extraout_DX;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  uVar4 = uVar3;
  (*pcVar1)(uVar3 >> 8);
  uVar5 = extraout_DX_00;
  if ((uVar6 != extraout_DX_00) && (uVar5 = extraout_DX_00, (char)uVar3 == '\x17')) {
    uVar4 = in_CX;
    uVar5 = uVar6;
  }
  uVar2 = FUN_2116_3e2a(uVar4 - 0x7bc,uVar5 >> 8);
  if (param_1._2_2_ != 0) {
    ((undefined2 *)param_1)[1] = uVar5;
    *param_1 = uVar2;
  }
  return;
}



// Function: FUN_2116_3c00 @ 2116:3c00

void __cdecl16far FUN_2116_3c00(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)0xbbe2 == 0) {
    FUN_2116_3c12();
    *(int *)0xbbe2 = *(int *)0xbbe2 + 1;
  }
  return;
}



// Function: FUN_2116_3c12 @ 2116:3c12

void __cdecl16far FUN_2116_3c12(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  undefined2 uVar6;
  uint uVar7;
  int in_DX;
  undefined2 uVar8;
  int iVar9;
  undefined2 unaff_DS;
  undefined4 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined4 local_6;
  
  pcVar5 = (char *)FUN_2116_30da(0xa126);
  local_6 = (char *)CONCAT22(in_DX,pcVar5);
  if ((in_DX != 0 || pcVar5 != (char *)0x0) && (*local_6 != '\0')) {
    FUN_2116_2f82(*(undefined2 *)0xa138,*(undefined2 *)0xa13a,pcVar5,in_DX,3);
    local_6 = (char *)CONCAT22(in_DX,pcVar5 + 3);
    cVar4 = *local_6;
    if (cVar4 == '-') {
      local_6 = (char *)CONCAT22(in_DX,pcVar5 + 4);
    }
    uVar8 = 0;
    uVar12 = 0;
    uVar11 = 0xe10;
    uVar6 = thunk_FUN_2116_3048((char *)local_6,in_DX,0xe10,0);
    uVar10 = FUN_2116_4d98(uVar6,uVar8,uVar11,uVar12);
    *(undefined2 *)0xa12a = (int)uVar10;
    *(undefined2 *)0xa12c = (int)((ulong)uVar10 >> 0x10);
    while( true ) {
      uVar6 = (undefined2)((ulong)local_6 >> 0x10);
      if ((*local_6 != '+') && ((*local_6 < '0' || ('9' < *local_6)))) break;
      local_6 = (char *)CONCAT22(uVar6,(char *)local_6 + 1);
    }
    if (*local_6 == ':') {
      uVar8 = 0;
      uVar12 = 0;
      uVar11 = 0x3c;
      local_6._0_2_ = (char *)local_6 + 1;
      local_6 = (char *)CONCAT22(uVar6,(char *)local_6);
      uVar6 = thunk_FUN_2116_3048((char *)local_6,uVar6,0x3c,0);
      uVar10 = FUN_2116_4d98(uVar6,uVar8,uVar11,uVar12);
      iVar9 = (int)((ulong)uVar10 >> 0x10);
      puVar1 = (uint *)0xa12a;
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + (uint)uVar10;
      *(int *)0xa12c = *(int *)0xa12c + iVar9 + (uint)CARRY2(uVar3,(uint)uVar10);
      while( true ) {
        uVar6 = (undefined2)((ulong)local_6 >> 0x10);
        if ((*local_6 < '0') || ('9' < *local_6)) break;
        local_6 = (char *)CONCAT22(uVar6,(char *)local_6 + 1);
      }
      if (*local_6 == ':') {
        local_6._0_2_ = (char *)local_6 + 1;
        local_6 = (char *)CONCAT22(uVar6,(char *)local_6);
        uVar7 = thunk_FUN_2116_3048((char *)local_6,uVar6);
        puVar1 = (uint *)0xa12a;
        uVar3 = *puVar1;
        *puVar1 = *puVar1 + uVar7;
        *(int *)0xa12c = *(int *)0xa12c + iVar9 + (uint)CARRY2(uVar3,uVar7);
        while (('/' < *local_6 && (*local_6 < ':'))) {
          local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + 1);
        }
      }
    }
    if (cVar4 == '-') {
      piVar2 = (int *)0xa12a;
      iVar9 = *piVar2;
      *piVar2 = -*piVar2;
      *(int *)0xa12c = *(int *)0xa12c + (uint)(iVar9 != 0);
      *(int *)0xa12c = -*(int *)0xa12c;
    }
    cVar4 = *local_6;
    *(int *)0xa12e = (int)cVar4;
    if (cVar4 == 0) {
      *(undefined1 *)*(undefined4 *)0xa13c = 0;
    }
    else {
      FUN_2116_2f82(*(undefined2 *)0xa13c,*(undefined2 *)0xa13e,(char *)local_6,
                    (int)((ulong)local_6 >> 0x10),3);
    }
  }
  return;
}



// Function: FUN_2116_3d5c @ 2116:3d5c

undefined2 __cdecl16far FUN_2116_3d5c(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int local_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (((*(int *)(iVar4 + 10) < 0x43) || (*(int *)(iVar4 + 8) < 3)) || (9 < *(int *)(iVar4 + 8)))
  goto LAB_2116_3e23;
  if ((*(int *)(iVar4 + 8) < 4) || (8 < *(int *)(iVar4 + 8))) {
    uVar1 = *(uint *)(iVar4 + 10);
    if (((int)uVar1 < 0x57) || (*(int *)(iVar4 + 8) != 3)) {
      local_4 = *(int *)(*(int *)(iVar4 + 8) * 2 + -0x5dda);
    }
    else {
      local_4 = *(int *)(*(int *)(iVar4 + 8) * 2 + -0x5ddc) + 7;
    }
    if ((uVar1 & 3) == 0) {
      local_4 = local_4 + 1;
    }
    uVar1 = (uVar1 - 0x46) * 0x16d + ((int)(uVar1 - 1) >> 2) + local_4;
    iVar2 = FUN_2116_4dca(uVar1 - 0xd,((int)uVar1 >> 0xf) - (uint)(uVar1 < 0xd),7,0);
    iVar3 = -(iVar2 - local_4);
    if (*(int *)(iVar4 + 8) == 3) {
      if ((iVar3 < *(int *)(iVar4 + 0xe)) ||
         ((-*(int *)(iVar4 + 0xe) == iVar2 - local_4 && (1 < *(int *)(iVar4 + 4)))))
      goto LAB_2116_3e0e;
    }
    else if ((*(int *)(iVar4 + 0xe) < iVar3) ||
            ((*(int *)(iVar4 + 0xe) == iVar3 && (*(int *)(iVar4 + 4) < 1)))) goto LAB_2116_3e0e;
LAB_2116_3e23:
    uVar5 = 0;
  }
  else {
LAB_2116_3e0e:
    uVar5 = 1;
  }
  return uVar5;
}



// Function: FUN_2116_3e2a @ 2116:3e2a

int __cdecl16far
FUN_2116_3e2a(uint param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int local_18;
  undefined1 local_14 [4];
  uint local_10;
  int local_c;
  int local_a;
  int local_6;
  
  iVar3 = *(int *)(param_2 * 2 + -0x5dde);
  if (((param_1 & 3) == 0) && (2 < param_2)) {
    iVar3 = iVar3 + 1;
  }
  FUN_2116_3c00();
  uVar8 = 0;
  uVar7 = 0x3c;
  uVar6 = 0;
  uVar5 = 0x3c;
  uVar1 = (int)(param_1 + 3) >> 2;
  uVar4 = FUN_2116_4d98((long)(int)param_1 * 0x16d +
                        CONCAT22(((int)(param_1 + 3) >> 0xf) + ((int)param_3 >> 0xf) +
                                 (uint)CARRY2(uVar1,param_3),uVar1 + param_3) + (long)iVar3 + 0xe44,
                        0x18,0);
  uVar4 = FUN_2116_4d98((uint)uVar4 + param_4,
                        (int)((ulong)uVar4 >> 0x10) + ((int)param_4 >> 0xf) +
                        (uint)CARRY2((uint)uVar4,param_4),uVar5,uVar6);
  iVar2 = FUN_2116_4d98((uint)uVar4 + param_5,
                        (int)((ulong)uVar4 >> 0x10) + ((int)param_5 >> 0xf) +
                        (uint)CARRY2((uint)uVar4,param_5),uVar7,uVar8);
  local_18 = iVar2 + param_6 + *(int *)0xa12a;
  local_6 = param_3 + iVar3;
  local_a = param_1 + 0x50;
  local_c = param_2 + -1;
  local_10 = param_4;
  if (*(int *)0xa12e != 0) {
    iVar3 = FUN_2116_3d5c(local_14);
    if (iVar3 != 0) {
      local_18 = local_18 + -0xe10;
    }
  }
  return local_18;
}



// Function: FUN_2116_3f22 @ 2116:3f22

char * __cdecl16far FUN_2116_3f22(char *param_1,char param_2)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 uVar5;
  bool bVar6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar3 = (char *)param_1;
  bVar6 = true;
  uVar2 = 0xffff;
  pcVar4 = pcVar3;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
    bVar6 = *pcVar1 == '\0';
  } while (!bVar6);
  uVar2 = ~uVar2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
    bVar6 = param_2 == *pcVar1;
  } while (!bVar6);
  if (!bVar6) {
    if (param_2 != '\0') {
      return (char *)0x0;
    }
    pcVar3 = pcVar3 + 1;
  }
  return pcVar3 + -1;
}



// Function: FUN_2116_3f54 @ 2116:3f54

char * __cdecl16far FUN_2116_3f54(char *param_1,char param_2)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 uVar5;
  bool bVar6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar3 = (char *)param_1;
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar3 + -1;
  bVar6 = param_2 == '\0';
  if (bVar6) {
    if (*pcVar4 == '\0') {
      pcVar4 = pcVar3 + -2;
    }
  }
  else {
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar1 = pcVar4;
      pcVar4 = pcVar4 + -1;
      bVar6 = param_2 == *pcVar1;
    } while (!bVar6);
    if (!bVar6) {
      return (char *)0x0;
    }
  }
  return pcVar4 + 1;
}



// Function: FUN_2116_3f88 @ 2116:3f88

char * __cdecl16far FUN_2116_3f88(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  for (pcVar2 = (char *)param_1; cVar1 = *pcVar2, cVar1 != '\0'; pcVar2 = pcVar2 + 1) {
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      *pcVar2 = cVar1 + -0x20;
    }
  }
  return (char *)param_1;
}



// Function: FUN_2116_3fac @ 2116:3fac

char * __cdecl16far FUN_2116_3fac(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  bool bVar10;
  
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  bVar10 = true;
  uVar3 = 0xffff;
  pcVar2 = (char *)param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar2;
    pcVar2 = pcVar2 + 1;
    bVar10 = *pcVar1 == '\0';
  } while (!bVar10);
  uVar3 = ~uVar3;
  if (bVar10) {
    uVar3 = uVar3 - 1;
  }
  pcVar2 = (char *)param_1;
  if (uVar3 != 0) {
    uVar3 = uVar3 - 1;
    uVar9 = (undefined2)((ulong)param_1 >> 0x10);
    bVar10 = true;
    uVar4 = 0xffff;
    pcVar6 = pcVar2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 1;
      bVar10 = *pcVar1 == '\0';
    } while (!bVar10);
    uVar4 = ~uVar4;
    if (bVar10) {
      uVar4 = uVar4 - 1;
    }
    iVar5 = uVar4 - uVar3;
    bVar10 = iVar5 == 0;
    if (uVar4 < uVar3 || bVar10) {
LAB_2116_400d:
      pcVar2 = (char *)0x0;
    }
    else {
      do {
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar1 = pcVar2;
          pcVar2 = pcVar2 + 1;
          bVar10 = *param_2 == *pcVar1;
        } while (!bVar10);
        if (!bVar10) goto LAB_2116_400d;
        uVar4 = uVar3;
        pcVar7 = pcVar2;
        pcVar6 = (char *)param_2;
        if (uVar3 == 0) break;
        do {
          pcVar6 = pcVar6 + 1;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar1 = pcVar7;
          pcVar7 = pcVar7 + 1;
          bVar10 = *pcVar6 == *pcVar1;
        } while (bVar10);
      } while (!bVar10);
      pcVar2 = pcVar2 + -1;
    }
  }
  return pcVar2;
}



// Function: FUN_2116_4018 @ 2116:4018

undefined2 * __cdecl16far FUN_2116_4018(undefined2 *param_1,undefined2 *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  
  puVar10 = (undefined2 *)param_1;
  if (param_3 != 0) {
    iVar14 = (int)((ulong)param_2 >> 0x10);
    puVar8 = (undefined2 *)param_2;
    iVar13 = (int)((ulong)param_1 >> 0x10);
    lVar15 = FUN_2116_5596(puVar10,iVar13,puVar8,iVar14);
    puVar12 = puVar10;
    if ((lVar15 < 0) || ((uint)((uint)lVar15 < param_3) <= (uint)((ulong)lVar15 >> 0x10))) {
      while( true ) {
        uVar6 = ~(uint)puVar12;
        uVar6 = ((param_3 - 1) - uVar6 & -(uint)(param_3 - 1 < uVar6)) + uVar6;
        uVar7 = ~(uint)puVar8;
        uVar6 = (uVar6 - uVar7 & -(uint)(uVar6 < uVar7)) + uVar7 + 1;
        param_3 = param_3 - uVar6;
        for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
          puVar4 = puVar12;
          puVar12 = puVar12 + 1;
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar4 = *puVar2;
        }
        for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
          puVar4 = puVar12;
          puVar12 = (undefined2 *)((int)puVar12 + 1);
          puVar2 = puVar8;
          puVar8 = (undefined2 *)((int)puVar8 + 1);
          *(undefined1 *)puVar4 = *(undefined1 *)puVar2;
        }
        if (param_3 == 0) break;
        if (puVar8 == (undefined2 *)0x0) {
          iVar14 = iVar14 + 0x1000;
        }
        if (puVar12 == (undefined2 *)0x0) {
          iVar13 = iVar13 + 0x1000;
        }
      }
    }
    else {
      uVar6 = param_3 - 1;
      puVar9 = (undefined1 *)((int)puVar8 + uVar6);
      if (CARRY2((uint)puVar8,uVar6)) {
        iVar14 = iVar14 + 0x1000;
      }
      puVar11 = (undefined1 *)((int)puVar10 + uVar6);
      if (CARRY2((uint)puVar10,uVar6)) {
        iVar13 = iVar13 + 0x1000;
      }
      while( true ) {
        puVar5 = puVar9 + ((int)(puVar11 +
                                ((int)(param_3 - 1) - (int)puVar11 &
                                -(uint)((undefined1 *)(param_3 - 1) < puVar11))) - (int)puVar9 &
                          -(uint)(puVar11 + ((int)(param_3 - 1) - (int)puVar11 &
                                            -(uint)((undefined1 *)(param_3 - 1) < puVar11)) < puVar9
                                 )) + 1;
        param_3 = param_3 - (int)puVar5;
        for (; puVar5 != (undefined1 *)0x0; puVar5 = puVar5 + -1) {
          puVar3 = puVar11;
          puVar11 = puVar11 + -1;
          puVar1 = puVar9;
          puVar9 = puVar9 + -1;
          *puVar3 = *puVar1;
        }
        if (param_3 == 0) break;
        if (puVar9 == (undefined1 *)0xffff) {
          iVar14 = iVar14 + -0x1000;
        }
        if (puVar11 == (undefined1 *)0xffff) {
          iVar13 = iVar13 + -0x1000;
        }
      }
    }
  }
  return puVar10;
}



// Function: FUN_2116_40e2 @ 2116:40e2

undefined2 * __cdecl16far FUN_2116_40e2(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  
  if (param_3 != 0) {
    iVar8 = (int)((ulong)param_2 >> 0x10);
    puVar5 = (undefined2 *)param_2;
    iVar7 = (int)((ulong)param_1 >> 0x10);
    puVar6 = (undefined2 *)param_1;
    while( true ) {
      uVar3 = ~(uint)puVar6;
      uVar3 = ((param_3 - 1U) - uVar3 & -(uint)(param_3 - 1U < uVar3)) + uVar3;
      uVar4 = ~(uint)puVar5;
      uVar3 = (uVar3 - uVar4 & -(uint)(uVar3 < uVar4)) + uVar4 + 1;
      param_3 = param_3 - uVar3;
      for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar1;
      }
      for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
        puVar2 = puVar6;
        puVar6 = (undefined2 *)((int)puVar6 + 1);
        puVar1 = puVar5;
        puVar5 = (undefined2 *)((int)puVar5 + 1);
        *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
      }
      if (param_3 == 0) break;
      if (puVar5 == (undefined2 *)0x0) {
        iVar8 = iVar8 + 0x1000;
      }
      if (puVar6 == (undefined2 *)0x0) {
        iVar7 = iVar7 + 0x1000;
      }
    }
  }
  return (undefined2 *)param_1;
}



// Function: FUN_2116_4140 @ 2116:4140

undefined2 * __cdecl16far FUN_2116_4140(undefined2 *param_1,undefined1 param_2,uint param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  
  if (param_3 != 0) {
    iVar6 = (int)((ulong)param_1 >> 0x10);
    uVar2 = -(int)(undefined2 *)param_1;
    uVar4 = 0;
    uVar3 = param_3;
    if (uVar2 != 0) {
      uVar3 = (uVar2 - param_3 & -(uint)(uVar2 < param_3)) + param_3;
      uVar4 = param_3 - uVar3;
    }
    puVar5 = (undefined2 *)param_1;
    for (uVar2 = uVar3 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = CONCAT11(param_2,param_2);
    }
    for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar1 = puVar5;
      puVar5 = (undefined2 *)((int)puVar5 + 1);
      *(undefined1 *)puVar1 = param_2;
    }
    if (uVar4 != 0) {
      for (uVar3 = uVar4 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar1 = CONCAT11(param_2,param_2);
      }
      for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
        puVar1 = puVar5;
        puVar5 = (undefined2 *)((int)puVar5 + 1);
        *(undefined1 *)puVar1 = param_2;
      }
    }
  }
  return (undefined2 *)param_1;
}



// Function: FUN_2116_4195 @ 2116:4195

byte * __cdecl16far FUN_2116_4195(void)

{
  ulong uVar1;
  byte bVar2;
  int in_AX;
  uint uVar4;
  uint in_CX;
  uint in_DX;
  uint uVar5;
  char in_BL;
  byte *pbVar6;
  byte *unaff_DI;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_DS;
  bool bVar9;
  char cVar3;
  
  pbVar7 = unaff_DI;
  pbVar6 = unaff_DI;
  if (((in_BL != '\0') && (in_CX == 10)) && ((int)in_DX < 0)) {
    pbVar7 = unaff_DI + 1;
    *unaff_DI = 0x2d;
    bVar9 = in_AX != 0;
    in_AX = -in_AX;
    in_DX = -(in_DX + bVar9);
    pbVar6 = pbVar7;
  }
  do {
    uVar5 = 0;
    uVar4 = in_DX;
    if (in_DX != 0) {
      uVar4 = in_DX / in_CX;
      uVar5 = in_DX % in_CX;
    }
    uVar1 = CONCAT22(uVar5,in_AX);
    in_AX = (int)(uVar1 / in_CX);
    cVar3 = (char)(uVar1 % (ulong)in_CX);
    bVar2 = cVar3 + 0x30;
    if (0x39 < bVar2) {
      bVar2 = cVar3 + 0x57;
    }
    pbVar8 = pbVar7 + 1;
    *pbVar7 = bVar2;
    in_DX = uVar4;
    pbVar7 = pbVar8;
  } while (uVar4 != 0 || in_AX != 0);
  *pbVar8 = 0;
  do {
    pbVar8 = pbVar8 + -1;
    LOCK();
    bVar2 = *pbVar8;
    *pbVar8 = *pbVar6;
    UNLOCK();
    *pbVar6 = bVar2;
    pbVar7 = pbVar6 + 2;
    pbVar6 = pbVar6 + 1;
  } while (pbVar7 < pbVar8);
  return unaff_DI;
}



// Function: FUN_2116_440e @ 2116:440e

/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined2 __cdecl16far FUN_2116_440e(uint param_1)

{
  code *pcVar1;
  code *pcVar2;
  uint uVar3;
  undefined2 uVar4;
  int in_CX;
  uint *in_BX;
  undefined2 unaff_DS;
  bool bVar5;
  uint local_4;
  
  uVar3 = param_1;
  if (param_1 == 2) {
    bVar5 = false;
    pcVar2 = (code *)swi(0x23);
    (*pcVar2)();
    if (bVar5) {
      pcVar2 = (code *)swi(0x21);
      uVar3 = (*pcVar2)();
      goto LAB_2116_4425;
    }
LAB_2116_4495:
    uVar4 = 0;
  }
  else {
LAB_2116_4425:
    bVar5 = uVar3 < 8;
    if (uVar3 == 8) {
      bVar5 = false;
      in_BX = (uint *)(*(uint *)0xa8b2 | *(uint *)0xa8b4);
      if (in_BX != (uint *)0x0) goto LAB_2116_4434;
    }
    else {
LAB_2116_4434:
      FUN_2116_458a();
      if (!bVar5) {
        pcVar1 = (code *)*in_BX;
        local_4 = in_BX[1];
        if ((local_4 == 0) && (pcVar1 < (code *)0x2)) {
          if (pcVar1 == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000255b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar4 = (*(code *)*(undefined2 *)(in_CX * 2 + 0x4402))();
            return uVar4;
          }
        }
        else {
          if (param_1 != 8) {
            *in_BX = 0;
            in_BX[1] = 0;
          }
          (*pcVar1)(0x2116,param_1,0x8c);
        }
        goto LAB_2116_4495;
      }
    }
    uVar4 = 0xffff;
  }
  return uVar4;
}



// Function: FUN_2116_458a @ 2116:458a

void __cdecl16far FUN_2116_458a(void)

{
  char in_AL;
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x44db;
  iVar1 = 6;
  do {
    if (*pcVar2 == in_AL) {
      return;
    }
    pcVar2 = pcVar2 + -1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



// Function: FUN_2116_466a @ 2116:466a

void __cdecl16far
FUN_2116_466a(char *param_1,char *param_2,undefined1 *param_3,undefined4 param_4,undefined1 *param_5
             )

{
  char *pcVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 local_10;
  char *local_a;
  int local_8;
  char *local_6;
  int local_4;
  
  local_8 = 0;
  local_a = (char *)0x0;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar1 = (char *)param_1;
  if ((*param_1 == '\0') || (pcVar1[1] != ':')) {
    if (param_2._2_2_ != 0 || (char *)param_2 != (char *)0x0) {
      *param_2 = '\0';
    }
  }
  else {
    if (param_2._2_2_ != 0 || (char *)param_2 != (char *)0x0) {
      *param_2 = *param_1;
      ((char *)param_2)[1] = pcVar1[1];
      ((char *)param_2)[2] = '\0';
    }
    param_1 = (char *)CONCAT22(uVar2,pcVar1 + 2);
  }
  local_4 = 0;
  local_6 = (char *)0x0;
  local_10 = param_1;
  while( true ) {
    iVar3 = (int)((ulong)local_10 >> 0x10);
    pcVar1 = (char *)local_10;
    if (*local_10 == '\0') break;
    if ((*local_10 == '/') || (*local_10 == '\\')) {
      local_6 = pcVar1 + 1;
      local_4 = iVar3;
    }
    else if (*local_10 == '.') {
      local_a = pcVar1;
      local_8 = iVar3;
    }
    local_10 = (char *)CONCAT22(iVar3,pcVar1 + 1);
  }
  if (local_4 == 0 && local_6 == (char *)0x0) {
    if (param_3._2_2_ != 0 || (undefined1 *)param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
  }
  else {
    if (param_3._2_2_ != 0 || (undefined1 *)param_3 != (undefined1 *)0x0) {
      iVar3 = (int)local_6 - (int)(char *)param_1;
      if (0xff < iVar3) {
        iVar3 = 0xff;
      }
      FUN_2116_2f82((undefined1 *)param_3,param_3._2_2_,(char *)param_1,param_1._2_2_,iVar3);
      ((undefined1 *)param_3)[iVar3] = 0;
    }
    param_1 = (char *)CONCAT22(local_4,local_6);
  }
  if ((local_8 != 0 || local_a != (char *)0x0) && ((char *)param_1 <= local_a)) {
    if (param_4._2_2_ != 0 || (int)param_4 != 0) {
      iVar3 = (int)local_a - (int)(char *)param_1;
      if (0xff < iVar3) {
        iVar3 = 0xff;
      }
      FUN_2116_2f82((int)param_4,param_4._2_2_,(char *)param_1,param_1._2_2_,iVar3);
      *(undefined1 *)((int)param_4 + iVar3) = 0;
    }
    if (param_5._2_2_ == 0 && (undefined1 *)param_5 == (undefined1 *)0x0) {
      return;
    }
    iVar3 = (int)pcVar1 - (int)local_a;
    if (0xff < iVar3) {
      iVar3 = 0xff;
    }
    FUN_2116_2f82((undefined1 *)param_5,param_5._2_2_,local_a,local_8,iVar3);
    ((undefined1 *)param_5)[iVar3] = 0;
    return;
  }
  if (param_4._2_2_ != 0 || (int)param_4 != 0) {
    iVar3 = (int)pcVar1 - (int)(char *)param_1;
    if (0xff < iVar3) {
      iVar3 = 0xff;
    }
    FUN_2116_2f82((int)param_4,param_4._2_2_,(char *)param_1,param_1._2_2_,iVar3);
    *(undefined1 *)((int)param_4 + iVar3) = 0;
  }
  if (param_5._2_2_ != 0 || (undefined1 *)param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  return;
}



// Function: FUN_2116_4826 @ 2116:4826

void __cdecl16far
FUN_2116_4826(char *param_1,char *param_2,char *param_3,char *param_4,int param_5,char *param_6)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 uVar6;
  undefined4 local_6;
  
  if ((param_2._2_2_ != 0 || (char *)param_2 != (char *)0x0) && (*param_2 != '\0')) {
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    pcVar1 = (char *)param_1 + 1;
    *param_1 = *param_2;
    param_1 = (char *)CONCAT22(uVar6,(char *)param_1 + 2);
    *pcVar1 = ':';
  }
  local_6 = param_3;
  if ((param_3._2_2_ != 0 || (char *)param_3 != (char *)0x0) && (*param_3 != '\0')) {
    do {
      pcVar5 = local_6;
      pcVar3 = param_1;
      local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + 1);
      pcVar1 = (char *)param_1;
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
      pcVar4 = param_1;
      *pcVar3 = *pcVar5;
    } while (*local_6 != '\0');
    if ((*pcVar5 != '/') && (*pcVar5 != '\\')) {
      param_1 = (char *)CONCAT22(param_1._2_2_,pcVar1 + 2);
      *pcVar4 = '\\';
    }
  }
  local_6 = (char *)CONCAT22(param_5,param_4);
  if (param_5 != 0 || param_4 != (char *)0x0) {
    while (*local_6 != '\0') {
      cVar2 = *local_6;
      local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + 1);
      *param_1 = cVar2;
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    }
  }
  pcVar3 = param_1;
  local_6 = param_6;
  if (param_6._2_2_ == 0 && (char *)param_6 == (char *)0x0) {
    *param_1 = '\0';
  }
  else {
    if ((*param_6 != '\0') && (*param_6 != '.')) {
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
      *pcVar3 = '.';
    }
    do {
      pcVar4 = local_6;
      pcVar3 = param_1;
      local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + 1);
      cVar2 = *pcVar4;
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
      *pcVar3 = cVar2;
    } while (cVar2 != '\0');
  }
  return;
}



// Function: FUN_2116_4918 @ 2116:4918

uint __cdecl16far FUN_2116_4918(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int in_DX;
  undefined2 unaff_DS;
  int local_14;
  
  local_14 = FUN_2116_30da(0xa160);
  if (param_2 == 0 && param_1 == 0) {
    iVar1 = FUN_2116_49d4(0x2116,local_14,in_DX,0);
    uVar2 = (uint)(iVar1 == 0);
  }
  else if ((in_DX == 0 && local_14 == 0) ||
          ((uVar2 = FUN_2116_58bc(0x2116,0,local_14,in_DX,&local_14), uVar2 == 0xffff &&
           ((*(int *)0x9cfc == 2 || (*(int *)0x9cfc == 0xd)))))) {
    local_14 = -0x5e95;
    uVar2 = FUN_2116_5a98(0,0xa16b);
  }
  return uVar2;
}



// Function: FUN_2116_49d4 @ 2116:49d4

void FUN_2116_49d4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_2116_5452();
  return;
}



// Function: FUN_2116_49fd @ 2116:49fd

void FUN_2116_49fd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_2116_5452();
  return;
}



// Function: FUN_2116_4a36 @ 2116:4a36

int __cdecl16far FUN_2116_4a36(void)

{
  code *pcVar1;
  byte bVar2;
  
  pcVar1 = (code *)swi(0x21);
  bVar2 = (*pcVar1)();
  return bVar2 + 1;
}



// Function: FUN_2116_4a3e @ 2116:4a3e

undefined2 __cdecl16far FUN_2116_4a3e(char param_1)

{
  code *pcVar1;
  char cVar2;
  undefined2 uVar3;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  cVar2 = (*pcVar1)();
  uVar3 = 0xffff;
  if ((char)(cVar2 + '\x01') == param_1) {
    uVar3 = 0;
  }
  return uVar3;
}



// Function: FUN_2116_4a5a @ 2116:4a5a

void __cdecl16far FUN_2116_4a5a(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_2116_4a72(0,param_1,param_2,param_3);
  return;
}



// Function: FUN_2116_4a72 @ 2116:4a72

uint __cdecl16far FUN_2116_4a72(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char *local_12e;
  undefined2 local_122;
  int local_116;
  undefined1 local_114;
  undefined1 local_113;
  char local_10e;
  char *local_10c;
  char local_106 [260];
  
  _local_12e = (char *)CONCAT22(unaff_SS,local_106);
  if (param_1 == 0) {
    param_1 = FUN_2116_4a36();
  }
  *_local_12e = (char)param_1 + '@';
  local_106[1] = 0x3a;
  local_10c = local_106 + 3;
  local_106[2] = 0x5c;
  local_113 = 0x47;
  local_10e = (char)param_1;
  FUN_2116_55e8(&local_114);
  if (local_116 == 0) {
    iVar1 = FUN_2116_2f30(local_106);
    iVar1 = iVar1 + 1;
    local_12e = (char *)param_2;
    param_2 = param_3 | param_2;
    uVar2 = param_3;
    if (param_2 == 0) {
      if (param_4 < iVar1) {
        param_4 = iVar1;
      }
      local_12e = (char *)FUN_2116_2c1d(param_4);
      uVar2 = param_2;
      if (param_2 == 0 && local_12e == (char *)0x0) {
        *(undefined2 *)0x9cfc = 0xc;
        return (uint)local_12e;
      }
    }
    if (iVar1 <= param_4) {
      uVar2 = FUN_2116_2eca(local_12e,uVar2,local_106);
      return uVar2;
    }
    *(undefined2 *)0x9cfc = 0x22;
  }
  else {
    *(undefined2 *)0x9cfc = 0xd;
    *(undefined2 *)0x9d0a = local_122;
  }
  return 0;
}



// Function: FUN_2116_4b96 @ 2116:4b96

void FUN_2116_4b96(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_2116_5452();
  return;
}



// Function: FUN_2116_4bbe @ 2116:4bbe

void FUN_2116_4bbe(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_2116_545a();
  return;
}



// Function: FUN_2116_4c4c @ 2116:4c4c

undefined2 __cdecl16far FUN_2116_4c4c(undefined1 *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined2 in_CX;
  undefined1 extraout_DL;
  undefined1 extraout_DH;
  undefined1 *puVar3;
  undefined2 uVar4;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined1 *)param_1;
  *(undefined2 *)(puVar3 + 2) = in_CX;
  puVar3[1] = extraout_DH;
  *param_1 = extraout_DL;
  puVar3[4] = uVar2;
  return 0;
}



// Function: FUN_2116_4c68 @ 2116:4c68

undefined2 __cdecl16far FUN_2116_4c68(undefined1 *param_1)

{
  code *pcVar1;
  undefined1 in_CL;
  undefined1 in_CH;
  undefined1 extraout_DL;
  undefined1 extraout_DH;
  undefined1 *puVar2;
  undefined2 uVar3;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined1 *)param_1;
  *param_1 = in_CH;
  puVar2[1] = in_CL;
  puVar2[2] = extraout_DH;
  puVar2[3] = extraout_DL;
  return 0;
}



// Function: FUN_2116_4cc3 @ 2116:4cc3

void FUN_2116_4cc3(void)

{
  return;
}



// Function: FUN_2116_4cd3 @ 2116:4cd3

void FUN_2116_4cd3(void)

{
  FUN_2116_4cc3();
  return;
}



// Function: FUN_2116_4cdc @ 2116:4cdc

void __stdcall16far FUN_2116_4cdc(undefined2 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)param_1;
  uVar3 = FUN_2116_4d98(*param_1,puVar1[1],param_2,param_3);
  *puVar1 = (int)uVar3;
  puVar1[1] = (int)((ulong)uVar3 >> 0x10);
  return;
}



// Function: FUN_2116_4cfe @ 2116:4cfe

undefined4 __stdcall16far FUN_2116_4cfe(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) / (ulong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0xf;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0xf;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT22(uVar7,uVar3) / (ulong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulong)param_3 * (uVar1 & 0xffff);
    uVar3 = (uint)((ulong)lVar2 >> 0x10);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY2(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT22(uVar3,iVar4);
}



// Function: FUN_2116_4d98 @ 2116:4d98

long __stdcall16far FUN_2116_4d98(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulong)param_1 * (ulong)param_3;
  }
  return CONCAT22((int)((ulong)param_1 * (ulong)param_3 >> 0x10) +
                  param_2 * param_3 + param_1 * param_4,(int)((ulong)param_1 * (ulong)param_3));
}



// Function: FUN_2116_4dca @ 2116:4dca

undefined4 __stdcall16far FUN_2116_4dca(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  bVar13 = (int)param_2 < 0;
  if (bVar13) {
    bVar12 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar12 - param_2;
  }
  uVar11 = (uint)bVar13;
  if ((int)param_4 < 0) {
    bVar13 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar13 - param_4;
  }
  uVar3 = param_1;
  uVar4 = param_3;
  uVar8 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    iVar5 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) % (ulong)param_3);
    iVar6 = 0;
    if ((int)(uVar11 - 1) < 0) goto LAB_2116_4e64;
  }
  else {
    do {
      uVar10 = uVar9 >> 1;
      uVar4 = uVar4 >> 1 | (uint)((uVar9 & 1) != 0) << 0xf;
      uVar7 = uVar8 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar8 & 1) != 0) << 0xf;
      uVar8 = uVar7;
      uVar9 = uVar10;
    } while (uVar10 != 0);
    uVar1 = CONCAT22(uVar7,uVar3) / (ulong)uVar4;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffff) * (ulong)param_3;
    uVar8 = (uint)((ulong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2;
    uVar9 = uVar8 + uVar3;
    if (((CARRY2(uVar8,uVar3)) || (param_2 < uVar9)) || ((param_2 <= uVar9 && (param_1 < uVar4)))) {
      bVar13 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar9 = (uVar9 - param_4) - (uint)bVar13;
    }
    iVar5 = uVar4 - param_1;
    iVar6 = (uVar9 - param_2) - (uint)(uVar4 < param_1);
    if (-1 < (int)(uVar11 - 1)) goto LAB_2116_4e64;
  }
  bVar13 = iVar5 != 0;
  iVar5 = -iVar5;
  iVar6 = -(uint)bVar13 - iVar6;
LAB_2116_4e64:
  return CONCAT22(iVar6,iVar5);
}



// Function: FUN_2116_4f44 @ 2116:4f44

void __cdecl16far FUN_2116_4f44(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x3a);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_4f50 @ 2116:4f50

void FUN_2116_4f50(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x3a);
  (*pcVar1)();
  FUN_29de_00a5();
  return;
}



// Function: FUN_2116_4f5c @ 2116:4f5c

/* WARNING: Instruction at (ram,0x000263c1) overlaps instruction at (ram,0x000263bf)
    */

undefined2 __cdecl16far FUN_2116_4f5c(void)

{
  int iVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int in_CX;
  undefined1 uVar6;
  int extraout_DX;
  int iVar7;
  int extraout_DX_00;
  undefined2 extraout_DX_01;
  int *piVar8;
  undefined1 *unaff_SI;
  undefined1 *puVar9;
  int unaff_DI;
  undefined2 unaff_DS;
  undefined2 in_FS;
  char in_ZF;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined2 in_stack_0000ffee;
  int in_stack_0000fff0;
  uint uStack_a;
  
  pcVar2 = (code *)swi(0x3a);
  uVar3 = (*pcVar2)();
  in_CX = in_CX + -1;
  if (in_CX == 0 || in_ZF == '\0') {
    return uVar3;
  }
  if (*(char *)0xa1f2 == '\0') {
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
LAB_2116_51aa_1:
    uVar3 = in(0x5d);
    return uVar3;
  }
  FUN_2116_5c70();
  *(undefined1 *)0xa1b4 = 1;
  cVar11 = (char)((uint)in_stack_0000ffee >> 8);
  if ((cVar11 < '\x01') || (cVar11 == '\x06')) {
    pcVar2 = (code *)swi(0x37);
    (*pcVar2)();
    iVar7 = extraout_DX;
    do {
      in_CX = in_CX + -1;
      if (in_CX != 0) goto LAB_2116_51aa_1;
      iVar1 = *(int *)0x9cf2;
      cVar12 = SBORROW2(iVar1,iVar7);
      cVar11 = iVar1 - iVar7 < 0;
      bVar10 = iVar1 == iVar7;
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      iVar7 = extraout_DX_00;
    } while (bVar10 || cVar12 != cVar11);
    pcVar2 = (code *)swi(0x3d);
    cVar11 = (*pcVar2)();
    if ((uStack_a & 8) == 0) {
      if (cVar11 != '\x06') {
        if (*(char *)0xa1b4 == '\0') {
          pcVar2 = (code *)swi(0x39);
          (*pcVar2)();
        }
        pcVar2 = (code *)swi(0x35);
        (*pcVar2)();
        out(*unaff_SI,extraout_DX_01);
        pcVar2 = (code *)swi(0x3d);
        uVar3 = (*pcVar2)();
        return uVar3;
      }
    }
    else {
      cVar11 = '\x03';
    }
  }
  uVar6 = (undefined1)((uint)in_CX >> 8);
  puVar4 = (undefined1 *)(int)cVar11;
  *(undefined2 *)0xa17e = puVar4;
  piVar8 = (int *)(in_stack_0000fff0 + 1);
  *(undefined2 *)0xa180 = piVar8;
  *(undefined2 *)0xa182 = unaff_DS;
  *(undefined1 *)0xa1b3 = 0;
  if (((*piVar8 == 0x6f6c) && (*(char *)(in_stack_0000fff0 + 3) == 'g')) && (cVar11 == '\x02')) {
    *(undefined1 *)0xa1b3 = 1;
  }
  if (*(char *)0xa1b4 == '\0') {
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x39);
    uVar5 = (*pcVar2)();
    puVar4 = (undefined1 *)(uVar5 | 1);
    puVar9 = unaff_SI + 1;
    if ((byte)((byte)uVar5 | 1) != 0) goto code_r0x000263b8;
  }
  unaff_DI = -0x5e64;
  uVar6 = 0;
  puVar9 = puVar4;
code_r0x000263b8:
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)();
  *(undefined2 *)((int)piVar8 + unaff_DI + -0x406a) = in_FS;
                    /* WARNING: Could not recover jumptable at 0x000263cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*(undefined2 *)
                     (unaff_DI + CONCAT11(uVar6,((undefined1 *)((int)piVar8 + (int)puVar9))[6])))();
  return uVar3;
}



// Function: FUN_2116_4f68 @ 2116:4f68

void __cdecl16far FUN_2116_4f68(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x3a);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_4f74 @ 2116:4f74

void FUN_2116_4f74(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x3a);
  (*pcVar1)();
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_4f80 @ 2116:4f80

void __cdecl16far FUN_2116_4f80(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_4f8c @ 2116:4f8c

void __cdecl16far FUN_2116_4f8c(void)

{
  code *pcVar1;
  int in_CX;
  char in_ZF;
  
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  if (in_CX == 1 || in_ZF != '\0') {
    return;
  }
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_4f98 @ 2116:4f98

void __cdecl16far FUN_2116_4f98(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_4fa4 @ 2116:4fa4

void __cdecl16far FUN_2116_4fa4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_4fb0 @ 2116:4fb0

void __cdecl16far FUN_2116_4fb0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_4fbc @ 2116:4fbc

void __cdecl16far FUN_2116_4fbc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x38);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_4fc8 @ 2116:4fc8

void __cdecl16far FUN_2116_4fc8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x38);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_4fd4 @ 2116:4fd4

void __cdecl16far FUN_2116_4fd4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x38);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_4fe0 @ 2116:4fe0

void __cdecl16far FUN_2116_4fe0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x38);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_4fec @ 2116:4fec

void __cdecl16far FUN_2116_4fec(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x38);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_4ff8 @ 2116:4ff8

void __cdecl16far FUN_2116_4ff8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x38);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_5004 @ 2116:5004

void __cdecl16far FUN_2116_5004(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x3b);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_5010 @ 2116:5010

void __cdecl16far FUN_2116_5010(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x37);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_501c @ 2116:501c

void __cdecl16far FUN_2116_501c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x3b);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_5145 @ 2116:5145

void __cdecl16far FUN_2116_5145(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_5163 @ 2116:5163

/* WARNING: Instruction at (ram,0x000263c1) overlaps instruction at (ram,0x000263bf)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined2 __cdecl16far FUN_2116_5163(void)

{
  int iVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int in_CX;
  undefined1 uVar6;
  int extraout_DX;
  int iVar7;
  int extraout_DX_00;
  undefined2 extraout_DX_01;
  int in_BX;
  int *piVar8;
  undefined1 *unaff_SI;
  undefined1 *puVar9;
  int unaff_DI;
  undefined2 unaff_DS;
  undefined2 in_FS;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined2 in_stack_0000ffec;
  int in_stack_0000ffee;
  uint uStack_c;
  
  cVar11 = (char)((uint)in_stack_0000ffec >> 8);
  if (*(char *)0xa1f2 == '\0') {
    pcVar2 = (code *)swi(0x35);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
    *(undefined2 *)(in_BX + unaff_DI + -0x1b15) = in_FS;
    if (*(char *)0xa1f2 == '\0') {
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
LAB_2116_51aa_1:
      uVar3 = in(0x5d);
      return uVar3;
    }
    FUN_2116_5c70();
    *(undefined1 *)0xa1b4 = 1;
  }
  else {
    FUN_2116_5cb2();
    *(undefined1 *)0xa1b4 = 1;
  }
  if ((cVar11 < '\x01') || (cVar11 == '\x06')) {
    pcVar2 = (code *)swi(0x37);
    (*pcVar2)();
    iVar7 = extraout_DX;
    do {
      in_CX = in_CX + -1;
      if (in_CX != 0) goto LAB_2116_51aa_1;
      iVar1 = *(int *)0x9cf2;
      cVar12 = SBORROW2(iVar1,iVar7);
      cVar11 = iVar1 - iVar7 < 0;
      bVar10 = iVar1 == iVar7;
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      iVar7 = extraout_DX_00;
    } while (bVar10 || cVar12 != cVar11);
    pcVar2 = (code *)swi(0x3d);
    cVar11 = (*pcVar2)();
    if ((uStack_c & 8) == 0) {
      if (cVar11 != '\x06') {
        if (*(char *)0xa1b4 == '\0') {
          pcVar2 = (code *)swi(0x39);
          (*pcVar2)();
        }
        pcVar2 = (code *)swi(0x35);
        (*pcVar2)();
        out(*unaff_SI,extraout_DX_01);
        pcVar2 = (code *)swi(0x3d);
        uVar3 = (*pcVar2)();
        return uVar3;
      }
    }
    else {
      cVar11 = '\x03';
    }
  }
  uVar6 = (undefined1)((uint)in_CX >> 8);
  puVar4 = (undefined1 *)(int)cVar11;
  *(undefined2 *)0xa17e = puVar4;
  piVar8 = (int *)(in_stack_0000ffee + 1);
  *(undefined2 *)0xa180 = piVar8;
  *(undefined2 *)0xa182 = unaff_DS;
  *(undefined1 *)0xa1b3 = 0;
  if (((*piVar8 == 0x6f6c) && (*(char *)(in_stack_0000ffee + 3) == 'g')) && (cVar11 == '\x02')) {
    *(undefined1 *)0xa1b3 = 1;
  }
  if (*(char *)0xa1b4 == '\0') {
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x39);
    uVar5 = (*pcVar2)();
    puVar4 = (undefined1 *)(uVar5 | 1);
    puVar9 = unaff_SI + 1;
    if ((byte)((byte)uVar5 | 1) != 0) goto code_r0x000263b8;
  }
  unaff_DI = -0x5e64;
  uVar6 = 0;
  puVar9 = puVar4;
code_r0x000263b8:
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)();
  *(undefined2 *)((int)piVar8 + unaff_DI + -0x406a) = in_FS;
                    /* WARNING: Could not recover jumptable at 0x000263cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*(undefined2 *)
                     (unaff_DI + CONCAT11(uVar6,((undefined1 *)((int)piVar8 + (int)puVar9))[6])))();
  return uVar3;
}



// Function: FUN_2116_51ae @ 2116:51ae

/* WARNING: Instruction at (ram,0x000263c1) overlaps instruction at (ram,0x000263bf)
    */

undefined2 __cdecl16far FUN_2116_51ae(void)

{
  int iVar1;
  code *pcVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  int in_CX;
  undefined1 uVar6;
  int extraout_DX;
  int iVar7;
  int extraout_DX_00;
  undefined2 extraout_DX_01;
  int *piVar8;
  int unaff_SI;
  uint uVar9;
  int unaff_DI;
  undefined2 unaff_DS;
  undefined2 in_FS;
  bool bVar10;
  char cVar11;
  char cVar12;
  char local_13;
  uint in_stack_0000fff4;
  
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)();
  FUN_2116_5cb2(0x2116);
  *(undefined1 *)0xa1b4 = 0;
  if ((local_13 < '\x01') || (local_13 == '\x06')) {
    pcVar2 = (code *)swi(0x37);
    (*pcVar2)();
    iVar7 = extraout_DX;
    do {
      in_CX = in_CX + -1;
      if (in_CX != 0) {
        uVar3 = in(0x5d);
        return uVar3;
      }
      iVar1 = *(int *)0x9cf2;
      cVar12 = SBORROW2(iVar1,iVar7);
      cVar11 = iVar1 - iVar7 < 0;
      bVar10 = iVar1 == iVar7;
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      iVar7 = extraout_DX_00;
    } while (bVar10 || cVar12 != cVar11);
    pcVar2 = (code *)swi(0x3d);
    local_13 = (*pcVar2)();
    if ((in_stack_0000fff4 & 8) == 0) {
      if (local_13 != '\x06') {
        if (*(char *)0xa1b4 == '\0') {
          pcVar2 = (code *)swi(0x39);
          (*pcVar2)();
        }
        pcVar2 = (code *)swi(0x35);
        (*pcVar2)();
        out(*(undefined1 *)(unaff_SI + 2),extraout_DX_01);
        pcVar2 = (code *)swi(0x3d);
        uVar3 = (*pcVar2)();
        return uVar3;
      }
    }
    else {
      local_13 = '\x03';
    }
  }
  uVar6 = (undefined1)((uint)in_CX >> 8);
  uVar4 = (uint)local_13;
  *(uint *)0xa17e = uVar4;
  piVar8 = (int *)(unaff_DI + 1);
  *(undefined2 *)0xa180 = piVar8;
  *(undefined2 *)0xa182 = unaff_DS;
  *(undefined1 *)0xa1b3 = 0;
  if (((*piVar8 == 0x6f6c) && (*(char *)(unaff_DI + 3) == 'g')) && (local_13 == '\x02')) {
    *(undefined1 *)0xa1b3 = 1;
  }
  if (*(char *)0xa1b4 == '\0') {
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)((undefined1 *)(unaff_SI + 2));
    pcVar2 = (code *)swi(0x39);
    uVar5 = (*pcVar2)();
    uVar4 = uVar5 | 1;
    uVar9 = unaff_SI + 3;
    if ((byte)((byte)uVar5 | 1) != 0) goto code_r0x000263b8;
  }
  unaff_DI = -0x5e64;
  uVar6 = 0;
  uVar9 = uVar4;
code_r0x000263b8:
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)();
  *(undefined2 *)((int)piVar8 + unaff_DI + -0x406a) = in_FS;
                    /* WARNING: Could not recover jumptable at 0x000263cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*(undefined2 *)
                     (unaff_DI + CONCAT11(uVar6,*(undefined1 *)((int)piVar8 + uVar9 + 6))))();
  return uVar3;
}



// Function: FUN_2116_531b @ 2116:531b

undefined2 __cdecl16far FUN_2116_531b(void)

{
  code *pcVar1;
  undefined2 in_stack_00000002;
  
  pcVar1 = (code *)swi(0x3a);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return in_stack_00000002;
}



// Function: FUN_2116_5334 @ 2116:5334

/* WARNING: Instruction at (ram,0x000264a9) overlaps instruction at (ram,0x000264a7)
    */

void __cdecl16far FUN_2116_5334(void)

{
  code *pcVar1;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined1 *unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  char acStack_bbc [2982];
  undefined1 auStack_e [8];
  uint local_6;
  uint local_4;
  
  cVar5 = SBORROW2((int)&stack0xfffe,0xc);
  cVar4 = (int)auStack_e < 0;
  bVar2 = &stack0x0000 == (undefined1 *)0xe;
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  do {
  } while (bVar2 || cVar5 != cVar4);
  while( true ) {
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    cVar5 = '\0';
    local_6 = local_4 | 0xc00;
    cVar4 = (int)local_6 < 0;
    uVar3 = (byte)((byte)(local_4 >> 8) | 0xc) == 0;
    pcVar1 = (code *)swi(0x35);
    (*pcVar1)();
    out(*unaff_SI,extraout_DX);
    pcVar1 = (code *)swi(0x3b);
    (*pcVar1)();
    if (!(bool)uVar3 && cVar5 == cVar4) break;
    unaff_SI = unaff_SI + 2;
  }
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  out(unaff_SI[1],extraout_DX_00);
  acStack_bbc[unaff_DI] = acStack_bbc[unaff_DI] + -1;
  return;
}



// Function: FUN_2116_5368 @ 2116:5368

undefined2 __cdecl16far FUN_2116_5368(int param_1,undefined2 param_2)

{
  uint uVar1;
  undefined2 unaff_DS;
  int local_6 [2];
  
  uVar1 = FUN_2116_66ae(param_1,param_2,local_6);
  *(int *)0xbbe6 = local_6[0] - param_1;
  *(undefined2 *)0xbbe4 = 0;
  if ((uVar1 & 4) != 0) {
    *(undefined2 *)0xbbe4 = 0x200;
  }
  if ((uVar1 & 2) != 0) {
    *(byte *)0xbbe4 = *(byte *)0xbbe4 | 1;
  }
  if ((uVar1 & 1) != 0) {
    *(byte *)0xbbe5 = *(byte *)0xbbe5 | 1;
  }
  return 0xbbe4;
}



// Function: FUN_2116_5406 @ 2116:5406

undefined2 __cdecl16far
FUN_2116_5406(undefined2 param_1,undefined2 param_2,undefined2 param_3,uint param_4)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x9cf2 = param_1;
  *(undefined2 *)0x9cf4 = param_2;
  *(undefined2 *)0x9cf6 = param_3;
  *(uint *)0x9cf8 = param_4 & 0x7fff;
  return 0x9cf2;
}



// Function: FUN_2116_5442 @ 2116:5442

undefined2 __cdecl16far FUN_2116_5442(void)

{
  return 0;
}



// Function: FUN_2116_5452 @ 2116:5452

undefined2 __cdecl16far FUN_2116_5452(void)

{
  bool in_CF;
  
  if (!in_CF) {
    return 0;
  }
  FUN_2116_547a();
  return 0xffff;
}



// Function: FUN_2116_545a @ 2116:545a

undefined1 __cdecl16far FUN_2116_545a(void)

{
  undefined1 in_AL;
  bool in_CF;
  
  if (in_CF) {
    FUN_2116_547a();
    return in_AL;
  }
  return 0;
}



// Function: FUN_2116_5467 @ 2116:5467

void __cdecl16far FUN_2116_5467(void)

{
  bool in_CF;
  
  if (in_CF) {
    FUN_2116_547a();
  }
  return;
}



// Function: FUN_2116_5474 @ 2116:5474

void __cdecl16far FUN_2116_5474(void)

{
  FUN_2116_547a();
  return;
}



// Function: FUN_2116_547a @ 2116:547a

void __cdecl16near FUN_2116_547a(void)

{
  byte bVar1;
  char cVar2;
  uint in_AX;
  undefined2 unaff_DS;
  
  bVar1 = (byte)in_AX;
  *(byte *)0x9d0a = bVar1;
  cVar2 = (char)(in_AX >> 8);
  if (cVar2 != '\0') goto LAB_2116_549e;
  if (*(byte *)0x9d05 < 3) {
LAB_2116_5494:
    if (0x13 < bVar1) {
LAB_2116_5498:
      in_AX = 0x13;
    }
  }
  else {
    if (0x21 < bVar1) goto LAB_2116_5498;
    if (bVar1 < 0x20) goto LAB_2116_5494;
    in_AX = 5;
  }
  cVar2 = *(char *)(ulong)((in_AX & 0xff) + 0xa1f4);
LAB_2116_549e:
  *(int *)0x9cfc = (int)cVar2;
  return;
}



// Function: FUN_2116_54be @ 2116:54be

void __cdecl16near FUN_2116_54be(void)

{
  int *piVar1;
  int in_AX;
  undefined2 *in_BX;
  undefined2 *puVar2;
  undefined2 unaff_DS;
  
  in_BX[2] = in_AX + (int)in_BX;
  puVar2 = (undefined2 *)(in_AX + (int)in_BX + -2);
  piVar1 = in_BX + 10;
  *puVar2 = 0xfffe;
  in_BX[5] = puVar2;
  *piVar1 = in_AX + -0x17;
  *in_BX = unaff_DS;
  in_BX[3] = piVar1;
  in_BX[4] = piVar1;
  in_BX[6] = 0;
  in_BX[7] = 0;
  in_BX[8] = 0;
  in_BX[9] = 0;
  return;
}



// Function: FUN_2116_54f2 @ 2116:54f2

void __cdecl16near FUN_2116_54f2(void)

{
  int in_BX;
  int iVar1;
  int *unaff_DI;
  undefined2 unaff_ES;
  undefined2 uVar2;
  int unaff_DS;
  
  if (unaff_DI[1] == 0) {
    unaff_DI[1] = unaff_DS;
    *unaff_DI = in_BX;
  }
  else {
    uVar2 = (undefined2)((ulong)*(undefined4 *)(unaff_DI + 4) >> 0x10);
    iVar1 = (int)*(undefined4 *)(unaff_DI + 4);
    *(int *)(iVar1 + 0xe) = unaff_DS;
    *(int *)(iVar1 + 0xc) = in_BX;
    *(undefined2 *)(in_BX + 0x12) = uVar2;
    *(int *)(in_BX + 0x10) = iVar1;
  }
  unaff_DI[5] = unaff_DS;
  unaff_DI[4] = in_BX;
  unaff_DI[3] = unaff_DS;
  unaff_DI[2] = in_BX;
  return;
}



// Function: FUN_2116_5528 @ 2116:5528

undefined2 __stdcall16far FUN_2116_5528(undefined2 param_1,undefined2 param_2,undefined2 *param_3)

{
  *param_3 = 1;
  return 0;
}



// Function: FUN_2116_553f @ 2116:553f

void __stdcall16far FUN_2116_553f(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}



// Function: FUN_2116_5554 @ 2116:5554

void __stdcall16far FUN_2116_5554(void)

{
  return;
}



// Function: FUN_2116_555d @ 2116:555d

void __stdcall16far FUN_2116_555d(undefined2 *param_1,undefined2 param_2)

{
  *param_1 = param_2;
  return;
}



// Function: FUN_2116_5573 @ 2116:5573

void __stdcall16far FUN_2116_5573(void)

{
  return;
}



// Function: FUN_2116_557c @ 2116:557c

undefined2 __stdcall16far FUN_2116_557c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return 0;
}



// Function: FUN_2116_5596 @ 2116:5596

undefined4 __stdcall16far FUN_2116_5596(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 - param_4;
  uVar2 = uVar1 * 0x10 + param_1;
  return CONCAT22((((((uint)(param_2 < param_4) * -2 + (uint)CARRY2(uVar1,uVar1)) * 2 +
                    (uint)CARRY2(uVar1 * 2,uVar1 * 2)) * 2 + (uint)CARRY2(uVar1 * 4,uVar1 * 4)) * 2
                   + (uint)CARRY2(uVar1 * 8,uVar1 * 8) + (uint)CARRY2(uVar1 * 0x10,param_1)) -
                  (uint)(uVar2 < param_3),uVar2 - param_3);
}



// Function: FUN_2116_55e8 @ 2116:55e8

undefined2 __cdecl16far FUN_2116_55e8(undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SI;
  int iVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined1 in_CF;
  undefined4 uVar12;
  
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  uVar6 = *(undefined2 *)(iVar7 + 2);
  uVar5 = *(undefined2 *)(iVar7 + 4);
  uVar1 = *(undefined2 *)(iVar7 + 8);
  uVar9 = *(undefined2 *)(iVar7 + 10);
  uVar10 = (undefined2)((ulong)param_3 >> 0x10);
  uVar11 = *param_3;
  uVar2 = ((undefined2 *)param_3)[3];
  pcVar3 = (code *)swi(0x21);
  uVar12 = (*pcVar3)();
  uVar4 = (undefined2)uVar12;
  *param_3 = uVar11;
  ((undefined2 *)param_3)[3] = uVar2;
  uVar11 = (undefined2)((ulong)param_2 >> 0x10);
  puVar8 = (undefined2 *)param_2;
  *param_2 = uVar4;
  puVar8[1] = uVar6;
  puVar8[2] = uVar5;
  puVar8[3] = (int)((ulong)uVar12 >> 0x10);
  puVar8[4] = uVar1;
  puVar8[5] = uVar9;
  if ((bool)in_CF) {
    FUN_2116_5474(unaff_SI);
    uVar4 = *param_2;
  }
  puVar8[6] = (uint)(byte)in_CF;
  return uVar4;
}



// Function: FUN_2116_564a @ 2116:564a

/* WARNING: Removing unreachable block (ram,0x00026813) */

undefined2 __cdecl16far FUN_2116_564a(undefined2 *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 unaff_DS;
  long lVar10;
  long lVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  int local_c;
  
  bVar3 = false;
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = *param_1;
  iVar6 = ((undefined2 *)param_1)[1];
  if (iVar6 < 0) {
    uVar4 = 0;
  }
  else {
    uVar13 = 0xf879;
    uVar12 = 0xe080;
    iVar5 = FUN_2116_4cfe(uVar4,iVar6,0x1f80,0x786);
    lVar10 = FUN_2116_4d98(iVar5,iVar5 >> 0xf,uVar12,uVar13);
    lVar10 = lVar10 + CONCAT22(iVar6,uVar4);
    uVar1 = (uint)lVar10;
    iVar5 = iVar5 * 4;
    iVar6 = iVar5 + 0x46;
    if (0x1e1337f < lVar10) {
      iVar6 = iVar5 + 0x47;
      uVar2 = uVar1 + 0xcc80;
      iVar8 = ((int)((ulong)lVar10 >> 0x10) + -0x1e1) - (uint)(uVar1 < 0x3380);
      lVar10 = CONCAT22(iVar8,uVar2);
      if ((0x1e0 < iVar8) && ((0x1e1 < iVar8 || (lVar10 = CONCAT22(iVar8,uVar2), 0x337f < uVar2))))
      {
        iVar6 = iVar5 + 0x48;
        uVar7 = uVar1 + 0x9900;
        iVar8 = (iVar8 + -0x1e1) - (uint)(uVar2 < 0x3380);
        lVar10 = CONCAT22(iVar8,uVar7);
        if ((iVar8 < 0x1e2) || ((iVar8 < 0x1e3 && (uVar7 < 0x8500)))) {
          bVar3 = true;
        }
        else {
          iVar6 = iVar5 + 0x49;
          lVar10 = CONCAT22((iVar8 + -0x1e2) - (uint)(uVar7 < 0x8500),uVar1 + 0x1400);
        }
      }
    }
    *(int *)0xa248 = iVar6;
    iVar6 = FUN_2116_4cfe(lVar10,0x5180,1);
    *(int *)0xa24c = iVar6;
    lVar11 = FUN_2116_4d98(iVar6,iVar6 >> 0xf,0xae80,0xfffe);
    if (bVar3) {
      local_c = -0x5df6;
    }
    else {
      local_c = -0x5ddc;
    }
    iVar6 = 1;
    while (iVar5 = *(int *)0xa24c, *(int *)(iVar6 * 2 + local_c) < iVar5) {
      iVar6 = iVar6 + 1;
    }
    *(int *)0xa246 = iVar6 + -1;
    *(int *)0xa244 = iVar5 - *(int *)((iVar6 + -1) * 2 + local_c);
    iVar6 = FUN_2116_4cfe(*param_1,((undefined2 *)param_1)[1],0x5180,1);
    *(int *)0xa24a = (iVar6 + 4) % 7;
    iVar6 = FUN_2116_4cfe(lVar11 + lVar10,0xe10,0);
    *(int *)0xa242 = iVar6;
    lVar10 = (long)iVar6 * -0xe10 + lVar11 + lVar10;
    iVar6 = FUN_2116_4cfe(lVar10,0x3c,0);
    *(int *)0xa240 = iVar6;
    *(int *)0xa23e = iVar6 * -0x3c + (int)lVar10;
    *(undefined2 *)0xa24e = 0;
    uVar4 = 0xa23e;
  }
  return uVar4;
}



// Function: FUN_2116_58bc @ 2116:58bc

void FUN_2116_58bc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2116_5a98 @ 2116:5a98

int __cdecl16far
FUN_2116_5a98(undefined2 param_1,char *param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  undefined2 uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 unaff_DS;
  undefined4 uVar7;
  long lVar8;
  undefined4 local_12;
  int local_4;
  
  local_12 = (char *)0x0;
  uVar1 = *(undefined2 *)0x9fc2;
  *(undefined2 *)0x9fc2 = 0x10;
  uVar7 = FUN_2116_58bc(0x2116,param_1,(char *)param_2,param_2._2_2_,param_3,param_4,param_5,param_6
                       );
  uVar6 = (uint)((ulong)uVar7 >> 0x10);
  local_4 = (int)uVar7;
  if ((local_4 == -1) && (*(int *)0x9cfc == 2)) {
    uVar2 = FUN_2116_3f22((char *)param_2,param_2._2_2_,0x2f);
    uVar6 = uVar6 | uVar2;
    if (uVar6 == 0) {
      uVar2 = FUN_2116_3f22((char *)param_2,param_2._2_2_,0x5c);
      uVar6 = uVar6 | uVar2;
      if ((uVar6 == 0) && ((*param_2 == '\0' || (((char *)param_2)[1] != ':')))) {
        uVar2 = FUN_2116_30da(0xa26e);
        lVar8 = CONCAT22(uVar6,uVar2);
        uVar6 = uVar6 | uVar2;
        if (uVar6 != 0) {
          pcVar3 = (char *)FUN_2116_2c1d(0x104);
          local_12 = (char *)CONCAT22(uVar6,pcVar3);
          if (uVar6 != 0 || pcVar3 != (char *)0x0) {
            *(undefined2 *)0x9fc2 = uVar1;
            while( true ) {
              lVar8 = FUN_2116_713e(lVar8,pcVar3,uVar6,0x103);
              if ((lVar8 == 0) || (*local_12 == '\0')) break;
              iVar4 = FUN_2116_2f30(pcVar3,uVar6);
              if ((pcVar3[iVar4 + -1] != '\\') && (pcVar3[iVar4 + -1] != '/')) {
                FUN_2116_2e76(pcVar3,uVar6,0xa273);
              }
              iVar4 = FUN_2116_2f30(pcVar3,uVar6);
              iVar5 = FUN_2116_2f30((char *)param_2,param_2._2_2_);
              if (0x103 < (uint)(iVar4 + iVar5)) break;
              FUN_2116_2e76(pcVar3,uVar6,(char *)param_2,param_2._2_2_);
              local_4 = FUN_2116_58bc(0x2116,param_1,pcVar3,uVar6,param_3,param_4,param_5,param_6);
              if ((local_4 != -1) ||
                 ((*(int *)0x9cfc != 2 &&
                  (((*local_12 != '\\' && (*local_12 != '/')) ||
                   ((pcVar3[1] != '\\' && (pcVar3[1] != '/')))))))) break;
            }
            goto LAB_2116_5c3c;
          }
        }
      }
    }
  }
  *(undefined2 *)0x9fc2 = uVar1;
LAB_2116_5c3c:
  if (local_12._2_2_ != 0 || (char *)local_12 != (char *)0x0) {
    FUN_2116_2c0a((char *)local_12,local_12._2_2_);
  }
  return local_4;
}



// Function: FUN_2116_5c70 @ 2116:5c70

/* WARNING: Control flow encountered bad instruction data */

void FUN_2116_5c70(void)

{
  code *pcVar1;
  undefined2 extraout_DX;
  int unaff_BP;
  undefined1 *unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  char in_SF;
  char in_OF;
  
  do {
    pcVar1 = (code *)swi(0x35);
    (*pcVar1)();
  } while ((bool)in_ZF || in_OF != in_SF);
  *(undefined2 *)(unaff_BP + -8) = CONCAT11(0x13,*(byte *)(unaff_BP + -6) | 0x38);
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  out(*unaff_SI,extraout_DX);
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  in(0x89);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_2116_5cb2 @ 2116:5cb2

/* WARNING: Control flow encountered bad instruction data */

void FUN_2116_5cb2(void)

{
  code *pcVar1;
  undefined2 extraout_DX;
  undefined2 *in_BX;
  int unaff_BP;
  undefined1 *unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  char in_SF;
  char in_OF;
  
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  if (!(bool)in_ZF && in_OF == in_SF) {
    *(undefined2 *)(unaff_BP + -8) = CONCAT11(0x13,*(byte *)(unaff_BP + -6) | 0x38);
    pcVar1 = (code *)swi(0x35);
    (*pcVar1)();
    out(*unaff_SI,extraout_DX);
    pcVar1 = (code *)swi(0x35);
    (*pcVar1)();
    in(0x89);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x00026e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_BX)();
  return;
}



// Function: caseD_63 @ 2116:659f

void switchD_2000:3115::caseD_63(void)

{
  undefined2 *puVar1;
  undefined2 in_AX;
  undefined2 in_BX;
  int unaff_BP;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(undefined1 *)(unaff_BP + unaff_DI) = 0;
  puVar1 = (undefined2 *)*(undefined2 *)(unaff_BP + 4);
  puVar1[4] = in_AX;
  puVar1[3] = in_BX;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  return;
}



// Function: FUN_2116_66ae @ 2116:66ae

/* WARNING: Instruction at (ram,0x00027821) overlaps instruction at (ram,0x0002781f)
    */

void __cdecl16far
FUN_2116_66ae(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  code *pcVar1;
  undefined2 extraout_DX;
  char in_BH;
  undefined1 *unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  undefined2 in_stack_00000002;
  undefined1 *puVar5;
  undefined1 auStack_10 [4];
  undefined1 local_c [10];
  
  cVar4 = SBORROW2((int)&stack0xfffe,0xe);
  cVar3 = (int)auStack_10 < 0;
  uVar2 = &stack0x0000 == (undefined1 *)0x10;
  puVar5 = local_c;
  do {
    FUN_2116_6716(in_stack_00000002,param_1,param_2,param_3,param_4,puVar5,unaff_SS);
    do {
      pcVar1 = (code *)swi(0x35);
      (*pcVar1)();
      if (!(bool)uVar2 && cVar4 == cVar3) {
        pcVar1 = (code *)swi(0x37);
        (*pcVar1)();
        out(*unaff_SI,extraout_DX);
        return;
      }
      cVar4 = false;
      cVar3 = in_BH < '\0';
      uVar2 = in_BH == '\0';
    } while ((bool)uVar2);
  } while( true );
}



// Function: FUN_2116_6716 @ 2116:6716

uint FUN_2116_6716(undefined2 param_1,byte *param_2,int *param_3,uint *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  uint *puVar3;
  bool bVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  uint *puVar12;
  undefined2 uVar13;
  undefined2 unaff_SS;
  int iVar14;
  bool bVar15;
  char local_36 [26];
  uint local_1c;
  uint local_1a;
  int local_18;
  uint local_16;
  byte *local_14;
  int local_12;
  uint local_10;
  uint local_e;
  uint local_c;
  uint local_a;
  uint local_8;
  uint local_6;
  uint local_4;
  
  iVar14 = (int)((ulong)param_2 >> 0x10);
  local_14 = (byte *)param_2;
  local_10 = 0;
  local_12 = iVar14;
  local_16 = 0;
  local_1a = 0;
  local_18 = 0;
  local_1c = 0x19;
  pcVar10 = local_36;
  pbVar11 = local_14;
  do {
    do {
      pbVar9 = pbVar11;
      pbVar11 = pbVar9 + 1;
      bVar6 = *pbVar9;
    } while (bVar6 == 0x20);
  } while (((bVar6 == 9) || (bVar6 == 10)) || (bVar6 == 0xd));
  puVar12 = (uint *)param_4;
  uVar13 = (undefined2)((ulong)param_4 >> 0x10);
  if (bVar6 != 0) {
    if (bVar6 == 0x2b) {
LAB_2116_6765:
      pbVar1 = pbVar11;
      pbVar11 = pbVar9 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_16 = 0x8000;
      goto LAB_2116_6765;
    }
    if ((0x2f < bVar6) && (bVar6 < 0x3a)) {
      while (bVar6 == 0x30) {
        pbVar1 = pbVar11;
        pbVar11 = pbVar11 + 1;
        bVar6 = *pbVar1;
      }
      if (bVar6 != 0) {
        iVar5 = local_18;
        if (bVar6 != 0x2e) {
          while ((0x2f < bVar6 && (bVar6 < 0x3a))) {
            pcVar2 = pcVar10;
            pcVar10 = pcVar10 + 1;
            *pcVar2 = bVar6 - 0x30;
            local_1c = local_1c + -1;
            iVar5 = local_18;
            if (local_1c == 0) goto LAB_2116_67b3;
            pbVar1 = pbVar11;
            pbVar11 = pbVar11 + 1;
            bVar6 = *pbVar1;
          }
          if (bVar6 == 0x2e) {
            do {
              pbVar1 = pbVar11;
              pbVar11 = pbVar11 + 1;
              bVar6 = *pbVar1;
LAB_2116_67cd:
              if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_2116_67e9;
              pcVar2 = pcVar10;
              pcVar10 = pcVar10 + 1;
              *pcVar2 = bVar6 - 0x30;
              local_18 = local_18 + -1;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
            goto LAB_2116_67e0;
          }
          goto LAB_2116_67e9;
        }
        do {
          local_18 = iVar5;
          bVar6 = *pbVar11;
LAB_2116_6792:
          pbVar11 = pbVar11 + 1;
          iVar5 = local_18 + -1;
        } while (bVar6 == 0x30);
        if (bVar6 != 0) goto LAB_2116_67cd;
      }
      local_14 = pbVar11 + -1;
      goto LAB_2116_694b;
    }
    if ((bVar6 == 0x2e) && ((bVar6 = *pbVar11, 0x2f < bVar6 && (bVar6 < 0x3a)))) goto LAB_2116_6792;
  }
  local_10 = 4;
  goto LAB_2116_694b;
  while (iVar5 = local_18 + 1, bVar6 < 0x3a) {
LAB_2116_67b3:
    local_18 = iVar5;
    pbVar1 = pbVar11;
    pbVar11 = pbVar11 + 1;
    bVar6 = *pbVar1;
    if (bVar6 < 0x30) break;
  }
  if (bVar6 == 0x2e) {
LAB_2116_67e0:
    do {
      pbVar1 = pbVar11;
      pbVar11 = pbVar11 + 1;
      bVar6 = *pbVar1;
      if (bVar6 < 0x30) break;
    } while (bVar6 < 0x3a);
  }
LAB_2116_67e9:
  local_1c = 0x19 - local_1c;
  local_14 = pbVar11 + -1;
  if ((((bVar6 == 0x45) || (bVar6 == 0x65)) || (bVar6 == 0x44)) || (bVar6 == 100)) {
    pbVar9 = pbVar11 + 1;
    bVar6 = *pbVar11;
    if (bVar6 == 0x2b) {
LAB_2116_6818:
      pbVar1 = pbVar9;
      pbVar9 = pbVar11 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_1a = 0xffff;
      goto LAB_2116_6818;
    }
    if ((0x2f < bVar6) && (bVar6 < 0x3a)) {
      uVar7 = bVar6 - 0x30;
      uVar8 = uVar7;
      do {
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar6 = *pbVar1;
        if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_2116_684f;
        if (0x666 < uVar8) break;
        uVar7 = CONCAT11((char)(uVar7 >> 8),bVar6 - 0x30) + uVar8 * 2;
        uVar8 = uVar8 * 8 + uVar7;
      } while (-1 < (int)uVar8);
      uVar8 = 0x3fff;
      do {
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        if (*pbVar1 < 0x30) break;
      } while (*pbVar1 < 0x3a);
LAB_2116_684f:
      local_18 = local_18 + ((uVar8 ^ local_1a) - local_1a);
      local_14 = pbVar9 + -1;
    }
  }
  if (local_1c != 0) {
    *pcVar10 = '\0';
    pbVar11 = (byte *)(pcVar10 + -1);
    if (local_1c < 0x19) {
      if (local_18 != 0) goto LAB_2116_6896;
    }
    else {
      bVar6 = *pbVar11;
      *pbVar11 = 0;
      local_1c = local_1c - 1;
      local_18 = local_18 + 1;
      pbVar11 = (byte *)(pcVar10 + -2);
      if (bVar6 < 5) {
LAB_2116_6896:
        for (; *pbVar11 == 0; pbVar11 = pbVar11 + -1) {
          local_1c = local_1c - 1;
          local_18 = local_18 + 1;
        }
      }
      else {
        *pbVar11 = *pbVar11 + 1;
      }
    }
    FUN_2116_8002(&local_e,local_1c,local_36,unaff_SS);
    if (local_18 == 0) {
LAB_2116_68d0:
      if ((0x7fff < local_e) && ((0x8000 < local_e || ((local_c & 1) != 0)))) {
        bVar15 = 0xfffe < local_c;
        local_c = local_c + 1;
        bVar4 = CARRY2(local_a,(uint)bVar15);
        local_a = local_a + bVar15;
        uVar8 = (uint)bVar4;
        bVar4 = CARRY2(local_8,uVar8);
        local_8 = local_8 + uVar8;
        uVar8 = (uint)bVar4;
        bVar4 = CARRY2(local_6,uVar8);
        local_6 = local_6 + uVar8;
        if (bVar4) {
          local_6 = local_6 | 0x8000;
          local_4 = local_4 + 1;
        }
      }
      if (local_4 < 0x7fff) {
        if ((local_4 != 0) || (((local_6 != 0 || local_8 != 0) || local_a != 0) || local_c != 0)) {
          puVar12[3] = local_6;
          puVar12[2] = local_8;
          puVar12[1] = local_a;
          *param_4 = local_c;
          puVar12[4] = local_4 | local_16;
          goto LAB_2116_692d;
        }
LAB_2116_6957:
        local_10 = local_10 | 1;
        goto LAB_2116_694b;
      }
    }
    else if (local_18 < 0x1450) {
      if (-0x1450 < local_18) {
        FUN_2116_7da8(param_1,local_18,&local_e,unaff_SS);
        goto LAB_2116_68d0;
      }
      goto LAB_2116_6957;
    }
    local_10 = local_10 | 2;
    puVar12[4] = local_16 | 0x7fff;
    puVar12[3] = 0x8000;
    puVar12[2] = 0;
    puVar12[1] = 0;
    *param_4 = 0;
    goto LAB_2116_692d;
  }
LAB_2116_694b:
  for (iVar14 = 5; iVar14 != 0; iVar14 = iVar14 + -1) {
    puVar3 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar3 = 0;
  }
LAB_2116_692d:
  *param_3 = (int)local_14;
  ((int *)param_3)[1] = local_12;
  return local_10;
}



// Function: FUN_2116_69ec @ 2116:69ec

void __cdecl16far FUN_2116_69ec(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 uVar5;
  undefined4 local_6;
  
  while( true ) {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    if ((*param_1 == '\0') || (*param_1 == '.')) break;
    param_1 = (char *)CONCAT22(uVar5,(char *)param_1 + 1);
  }
  if (*param_1 != '\0') {
    do {
      pcVar2 = (char *)param_1;
      param_1._0_2_ = pcVar2 + 1;
      pcVar3 = (char *)param_1;
      if ((*(char *)param_1 == '\0') || (*(char *)param_1 == 'e')) break;
    } while (*(char *)param_1 != 'E');
    param_1 = (char *)CONCAT22(uVar5,pcVar2);
    local_6 = (char *)CONCAT22(uVar5,pcVar3);
    while( true ) {
      if (*(char *)param_1 != '0') break;
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + -1);
    }
    if (*(char *)param_1 == '.') {
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + -1);
    }
    do {
      pcVar4 = local_6;
      local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + 1);
      cVar1 = *pcVar4;
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
      *param_1 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}



// Function: FUN_2116_6a66 @ 2116:6a66

undefined2 __cdecl16far FUN_2116_6a66(int param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined1 local_3;
  
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x38);
  (*pcVar1)();
  iVar2 = func_0x00024986();
  cVar5 = SBORROW2(iVar2,param_1);
  cVar4 = iVar2 - param_1 < 0;
  bVar3 = iVar2 == param_1;
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  do {
  } while (bVar3 || cVar5 != cVar4);
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  if ((local_3 & 1) == 0) {
    return 1;
  }
  return 0;
}



// Function: FUN_2116_6a94 @ 2116:6a94

void __cdecl16far FUN_2116_6a94(int param_1,float *param_2,undefined2 param_3,undefined2 param_4)

{
  code *pcVar1;
  undefined2 *puVar2;
  double *pdVar3;
  undefined2 in_DX;
  float *pfVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  longdouble lVar6;
  
  pfVar4 = (float *)param_2;
  if (param_1 != 0) {
    puVar2 = (undefined2 *)FUN_2116_2ff0(param_3,param_4);
    uVar5 = (undefined2)((ulong)param_2 >> 0x10);
    *(undefined2 *)param_2 = *puVar2;
    *(undefined2 *)((int)pfVar4 + 2) = puVar2[1];
    *(undefined2 *)(pfVar4 + 1) = puVar2[2];
    *(undefined2 *)((int)pfVar4 + 6) = puVar2[3];
    return;
  }
  pdVar3 = (double *)FUN_2116_2ff0(param_3,param_4);
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  lVar6 = (longdouble)*pdVar3;
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  *pfVar4 = (float)lVar6;
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return;
}



// Function: FUN_2116_6ae6 @ 2116:6ae6

undefined1 * __cdecl16far
FUN_2116_6ae6(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 in_DX;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined4 local_a;
  undefined4 local_6;
  
  if (*(char *)0xa4d4 == '\0') {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar3 = (undefined2 *)param_1;
    piVar1 = (int *)FUN_2116_7004(*param_1,puVar3[1],puVar3[2],puVar3[3]);
    local_6 = (int *)CONCAT22(in_DX,piVar1);
    FUN_2116_7050(param_2 + (uint)(0 < param_4) + (uint)(*local_6 == 0x2d),param_3,param_4 + 1,
                  piVar1,in_DX);
  }
  else {
    local_6 = (int *)CONCAT22(*(undefined2 *)0xbbf6,(int *)*(undefined2 *)0xbbf4);
    FUN_2116_6f56(0 < param_4,param_2 + (*(int *)*(undefined2 *)0xbbf4 == 0x2d),param_3);
  }
  puVar2 = param_2;
  if (*local_6 == 0x2d) {
    *param_2 = 0x2d;
    puVar2 = param_2 + 1;
  }
  local_a = (char *)CONCAT22(param_3,puVar2);
  if (0 < param_4) {
    *local_a = puVar2[1];
    local_a = (char *)CONCAT22(param_3,puVar2 + 1);
    puVar2[1] = 0x2e;
  }
  puVar2 = (undefined1 *)
           FUN_2116_2eca((undefined1 *)local_a + param_4 + (uint)(*(char *)0xa4d4 == '\0'),
                         local_a._2_2_,0xa4d9);
  local_a = (char *)CONCAT22(local_a._2_2_,puVar2);
  if (param_5 != 0) {
    *local_a = 0x45;
  }
  local_a = (char *)CONCAT22(local_a._2_2_,puVar2 + 1);
  uVar5 = (undefined2)((ulong)local_6 >> 0x10);
  if (**(char **)((int *)local_6 + 3) != '0') {
    iVar4 = ((int *)local_6)[1] + -1;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
      *local_a = 0x2d;
    }
    local_a = (char *)CONCAT22(local_a._2_2_,puVar2 + 2);
    if (99 < iVar4) {
      *local_a = *local_a + (char)(iVar4 / 100);
      iVar4 = iVar4 % 100;
    }
    local_a = (char *)CONCAT22(local_a._2_2_,puVar2 + 3);
    if (9 < iVar4) {
      *local_a = *local_a + (char)(iVar4 / 10);
      iVar4 = iVar4 % 10;
    }
    local_a = (char *)CONCAT22(local_a._2_2_,puVar2 + 4);
    *local_a = *local_a + (char)iVar4;
  }
  return param_2;
}



// Function: FUN_2116_6c74 @ 2116:6c74

void __cdecl16far
FUN_2116_6c74(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  undefined2 unaff_DS;
  
  *(undefined1 *)0xa4d4 = 1;
  FUN_2116_6ae6(param_1,param_2,param_3,param_4,param_5,param_6);
  *(undefined1 *)0xa4d4 = 0;
  return;
}



// Function: FUN_2116_6c9e @ 2116:6c9e

undefined1 * __cdecl16far
FUN_2116_6c9e(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 in_DX;
  undefined2 *puVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  bool bVar6;
  undefined4 local_10;
  undefined4 local_6;
  
  if (*(char *)0xa4d4 == '\0') {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar3 = (undefined2 *)param_1;
    piVar4 = (int *)FUN_2116_7004(*param_1,puVar3[1],puVar3[2],puVar3[3]);
    local_6 = (int *)CONCAT22(in_DX,piVar4);
    FUN_2116_7050(param_2 + (*local_6 == 0x2d),param_3,piVar4[1] + param_4,piVar4,in_DX);
  }
  else {
    local_6 = (int *)CONCAT22(*(undefined2 *)0xbbf6,(int *)*(undefined2 *)0xbbf4);
    bVar6 = *(int *)*(undefined2 *)0xbbf4 == 0x2d;
    iVar2 = *(int *)0xa4d6;
    if (param_4 == iVar2) {
      param_2[iVar2 + (uint)bVar6] = 0x30;
      param_2[iVar2 + (uint)bVar6 + 1] = 0;
    }
  }
  puVar1 = param_2;
  if (*local_6 == 0x2d) {
    *param_2 = 0x2d;
    puVar1 = param_2 + 1;
  }
  local_10 = (undefined1 *)CONCAT22(param_3,puVar1);
  uVar5 = (undefined2)((ulong)local_6 >> 0x10);
  piVar4 = (int *)local_6;
  if (piVar4[1] < 1) {
    FUN_2116_6f56(1,puVar1,param_3);
    puVar1 = puVar1 + 1;
    *local_10 = 0x30;
  }
  else {
    puVar1 = puVar1 + piVar4[1];
  }
  local_10 = (undefined1 *)CONCAT22(param_3,puVar1);
  if (0 < param_4) {
    FUN_2116_6f56(1,puVar1,param_3);
    *local_10 = 0x2e;
    if (piVar4[1] < 0) {
      if (*(char *)0xa4d4 == '\0') {
        iVar2 = -piVar4[1];
        if (-param_4 != piVar4[1] && param_4 <= iVar2) {
          iVar2 = param_4;
        }
      }
      else {
        iVar2 = -piVar4[1];
      }
      FUN_2116_6f56(iVar2,puVar1 + 1,param_3);
      FUN_2116_4140(puVar1 + 1,param_3,0x30,iVar2);
    }
  }
  return param_2;
}



// Function: FUN_2116_6dfa @ 2116:6dfa

void __cdecl16far
FUN_2116_6dfa(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 unaff_DS;
  
  *(undefined1 *)0xa4d4 = 1;
  FUN_2116_6c9e(param_1,param_2,param_3,param_4,param_5);
  *(undefined1 *)0xa4d4 = 0;
  return;
}



// Function: FUN_2116_6e22 @ 2116:6e22

void __cdecl16far
FUN_2116_6e22(undefined2 *param_1,int param_2,undefined2 param_3,int param_4,undefined2 param_5)

{
  int *piVar1;
  char *pcVar2;
  undefined2 uVar3;
  char *pcVar4;
  int iVar5;
  undefined2 in_DX;
  undefined2 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  undefined4 local_6;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar6 = (undefined2 *)param_1;
  uVar3 = FUN_2116_7004(*param_1,puVar6[1],puVar6[2],puVar6[3]);
  *(undefined2 *)0xbbf4 = uVar3;
  *(undefined2 *)0xbbf6 = in_DX;
  piVar1 = (int *)*(undefined4 *)0xbbf4;
  uVar3 = (undefined2)((ulong)piVar1 >> 0x10);
  *(int *)0xa4d6 = ((int *)piVar1)[1] + -1;
  pcVar4 = (char *)((uint)(*piVar1 == 0x2d) + param_2);
  local_6 = (char *)CONCAT22(param_3,pcVar4);
  FUN_2116_7050(pcVar4,param_3,param_4,(int *)piVar1,uVar3);
  iVar5 = *(int *)((int)*(undefined4 *)0xbbf4 + 2) + -1;
  *(bool *)0xa4d8 = *(int *)0xa4d6 < iVar5;
  *(int *)0xa4d6 = iVar5;
  if ((-5 < iVar5) && (iVar5 < param_4)) {
    if (*(char *)0xa4d8 != '\0') {
      do {
        pcVar2 = local_6;
        uVar3 = (undefined2)((ulong)local_6 >> 0x10);
        pcVar4 = (char *)local_6;
        local_6 = (char *)CONCAT22(uVar3,(char *)local_6 + 1);
      } while (*pcVar2 != '\0');
      pcVar4[-1] = '\0';
    }
    FUN_2116_6dfa(puVar6,uVar7,param_2,param_3,param_4);
    return;
  }
  FUN_2116_6c74(puVar6,uVar7,param_2,param_3,param_4,param_5);
  return;
}



// Function: FUN_2116_6ef6 @ 2116:6ef6

void __cdecl16far
FUN_2116_6ef6(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5,undefined2 param_6,undefined2 param_7)

{
  if ((param_5 == 0x65) || (param_5 == 0x45)) {
    FUN_2116_6ae6(param_1,param_2,param_3,param_4,param_6,param_7);
  }
  else {
    if (param_5 != 0x66) {
      FUN_2116_6e22(param_1,param_2,param_3,param_4,param_6,param_7);
      return;
    }
    FUN_2116_6c9e(param_1,param_2,param_3,param_4,param_6);
  }
  return;
}



// Function: FUN_2116_6f56 @ 2116:6f56

void FUN_2116_6f56(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_2116_2f30(param_2,param_3);
    FUN_2116_4018(param_2 + param_1,param_3,param_2,param_3,iVar1 + 1);
  }
  return;
}



// Function: FUN_2116_6f88 @ 2116:6f88

void __cdecl16far FUN_2116_6f88(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  longdouble lVar3;
  longdouble lVar4;
  uint uStack_18;
  uint local_16;
  undefined2 auStack_14 [2];
  undefined4 local_10;
  undefined2 uStack_a;
  undefined4 uStack_8;
  
  if ((*(int *)0xa8b4 != 0) && (iVar2 = (*(code *)*(undefined2 *)0xa8b2)(0x2116), iVar2 != 0)) {
    lVar4 = (longdouble)1 / (longdouble)0;
    lVar3 = -lVar4;
    *(undefined2 *)0xa4e0 = 3;
    if ((lVar3 == lVar4) != 0) {
      puVar1 = &stack0xffe4;
      *(uint *)(puVar1 + 4) =
           (uint)(lVar3 < lVar4) << 8 | (uint)(NAN(lVar3) || NAN(lVar4)) << 10 |
           (uint)(lVar3 == lVar4) << 0xe;
      *(undefined2 *)(puVar1 + 8) = 0xffff;
      *(undefined4 *)(puVar1 + 0x14) = 0;
      *(undefined4 *)(puVar1 + 0xc) = 0x28132;
      *(undefined2 *)(puVar1 + 0x12) = 0;
      *(undefined2 *)0xa4e0 = 2;
      if ((local_16 & 0xf) != 2) {
        *(undefined2 *)0xa4e0 = 1;
      }
    }
  }
  return;
}



// Function: FUN_2116_7004 @ 2116:7004

undefined2 __cdecl16far
FUN_2116_7004(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint in_BX;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  
  *(undefined2 *)0xa4ec = param_1;
  *(undefined2 *)0xa4ee = param_2;
  *(undefined2 *)0xa4f0 = param_3;
  *(undefined2 *)0xa4f2 = param_4;
  uVar6 = FUN_2116_77f2(&stack0xfffe);
  puVar5 = (undefined1 *)0xa4f4;
  puVar4 = (undefined1 *)0xa4ed;
  for (iVar3 = (int)*(char *)0xa4ec; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *puVar5 = 0;
  *(uint *)0xa4e2 = in_BX & 0xff;
  *(undefined2 *)0xa4e4 = (int)((ulong)uVar6 >> 0x10);
  *(undefined2 *)0xa4e6 = (int)uVar6;
  *(undefined2 *)0xa4e8 = 0xa4f4;
  *(undefined2 *)0xa4ea = unaff_DS;
  return 0xa4e2;
}



// Function: FUN_2116_7050 @ 2116:7050

void __cdecl16far FUN_2116_7050(char *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 local_a;
  undefined4 local_6;
  
  uVar5 = (undefined2)((ulong)param_3 >> 0x10);
  iVar3 = (int)param_3;
  local_a = (char *)CONCAT22(*(undefined2 *)(iVar3 + 8),(char *)*(undefined2 *)(iVar3 + 6));
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar4 = (char *)param_1;
  *param_1 = '0';
  local_6 = (char *)CONCAT22(uVar6,pcVar4 + 1);
  for (; pcVar2 = local_6, 0 < param_2; param_2 = param_2 + -1) {
    if (*local_a == '\0') {
      cVar1 = '0';
    }
    else {
      cVar1 = *local_a;
      local_a = (char *)CONCAT22(local_a._2_2_,(char *)local_a + 1);
    }
    local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + 1);
    *pcVar2 = cVar1;
  }
  *local_6 = '\0';
  if ((-1 < param_2) && ('4' < *local_a)) {
    while( true ) {
      local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + -1);
      if (*local_6 != '9') break;
      *local_6 = '0';
    }
    *local_6 = *local_6 + '\x01';
  }
  if (*param_1 == '1') {
    *(int *)(iVar3 + 2) = *(int *)(iVar3 + 2) + 1;
  }
  else {
    FUN_2116_2eca(pcVar4,uVar6,pcVar4 + 1,uVar6);
  }
  return;
}



// Function: FUN_2116_70f8 @ 2116:70f8

int __cdecl16far FUN_2116_70f8(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar6 = (byte *)param_2;
  pbVar5 = (byte *)param_1;
  bVar3 = 0xff;
  do {
    do {
      cVar4 = '\0';
      if (bVar3 == 0) goto LAB_2116_7137;
      pbVar1 = pbVar6;
      pbVar6 = pbVar6 + 1;
      bVar3 = *pbVar1;
      pbVar1 = pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (*pbVar1 == bVar3);
    bVar2 = bVar3 + 0xbf + (-((byte)(bVar3 + 0xbf) < 0x1a) & 0x20U) + 0x41;
    bVar3 = *pbVar1 + 0xbf;
    bVar3 = bVar3 + (-(bVar3 < 0x1a) & 0x20U) + 0x41;
  } while (bVar3 == bVar2);
  cVar4 = (bVar3 < bVar2) * -2 + '\x01';
LAB_2116_7137:
  return (int)cVar4;
}



// Function: FUN_2116_713e @ 2116:713e

void __cdecl16near FUN_2116_713e(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  ulong uVar2;
  undefined2 uVar3;
  
  while( true ) {
    if (*param_1 != ';') break;
    param_1 = (char *)CONCAT22((int)((ulong)param_1 >> 0x10),(char *)param_1 + 1);
  }
  while (param_3 = param_3 + -1, param_3 != 0) {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    if ((*param_1 == '\0') || (*param_1 == ';')) goto LAB_2116_7191;
    cVar1 = *param_1;
    param_1 = (char *)CONCAT22(uVar3,(char *)param_1 + 1);
    *param_2 = cVar1;
    uVar2 = (ulong)param_2 >> 0x10;
    param_2 = (char *)CONCAT22((int)uVar2,(char *)param_2 + 1);
  }
LAB_2116_719a:
  *param_2 = '\0';
  return;
LAB_2116_7191:
  while (*(char *)param_1 == ';') {
    param_1 = (char *)ZEXT24((char *)param_1 + 1);
  }
  goto LAB_2116_719a;
}



// Function: FUN_2116_71b8 @ 2116:71b8

uint __cdecl16far
FUN_2116_71b8(int *param_1,int *param_2,uint param_3,int *param_4,uint *param_5,undefined1 *param_6,
             int param_7,int param_8,int param_9,int param_10)

{
  byte bVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int *piVar4;
  int iVar5;
  undefined2 uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  uint in_DX;
  int *piVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 unaff_DS;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined4 local_14;
  int local_10;
  undefined4 local_a;
  
  uVar10 = 0;
  if (param_3 == 0 && param_2 == (int *)0x0) {
    param_2 = (int *)*(undefined2 *)0x9d28;
    in_DX = *(uint *)0x9d2a;
    param_3 = in_DX;
  }
  if (param_3 != 0 || param_2 != (int *)0x0) {
    local_a = (int *)CONCAT22(param_3,param_2);
    in_DX = param_3;
    while( true ) {
      piVar4 = local_a;
      uVar12 = (undefined2)((ulong)local_a >> 0x10);
      piVar9 = (int *)local_a;
      if ((piVar9[1] == 0 && *local_a == 0) || (0x7fff < uVar10)) break;
      local_a = (int *)CONCAT22(uVar12,piVar9 + 2);
      iVar5 = FUN_2116_2f30(*piVar4,piVar9[1]);
      uVar10 = uVar10 + iVar5 + 1;
    }
  }
  if (*(int *)0xa50c == 0) {
    local_10 = 0;
  }
  else {
    for (local_10 = *(int *)0x9d0c; (local_10 != 0 && (*(char *)(local_10 + -0x62f3) == '\0'));
        local_10 = local_10 + -1) {
    }
  }
  if (local_10 != 0) {
    uVar10 = uVar10 + (local_10 + 7) * 2;
  }
  if (param_8 != 0 || param_7 != 0) {
    iVar5 = FUN_2116_2f30(param_7,param_8);
    uVar10 = uVar10 + iVar5 + 3;
  }
  if (uVar10 + 1 < 0x8000) {
    uVar12 = *(undefined2 *)0x9fc2;
    *(undefined2 *)0x9fc2 = 0x10;
    iVar5 = FUN_2116_2c1d(uVar10 + 0x10);
    if (in_DX != 0 || iVar5 != 0) {
      *(undefined2 *)0x9fc2 = uVar12;
      uVar12 = (undefined2)((ulong)param_4 >> 0x10);
      *param_4 = iVar5;
      ((int *)param_4)[1] = in_DX;
      local_14 = (char *)(CONCAT22(in_DX,iVar5 + 0xfU) & 0xfffffff0);
      *param_5 = iVar5 + 0xfU & 0xfff0;
      ((uint *)param_5)[1] = in_DX;
      if (param_3 != 0 || param_2 != (int *)0x0) {
        local_a = (int *)CONCAT22(param_3,param_2);
        while( true ) {
          uVar13 = (undefined2)((ulong)local_a >> 0x10);
          piVar9 = (int *)local_a;
          in_DX = param_3;
          if (piVar9[1] == 0 && *local_a == 0) break;
          uVar6 = FUN_2116_2eca((char *)local_14,local_14._2_2_,*local_a,piVar9[1],0);
          iVar5 = FUN_2116_3f22(uVar6,param_3);
          local_14 = (char *)CONCAT22(param_3,(char *)(iVar5 + 1));
          local_a = (int *)CONCAT22(uVar13,piVar9 + 2);
        }
      }
      if (local_10 != 0) {
        uVar6 = 0;
        uVar13 = FUN_2116_2eca((char *)local_14,local_14._2_2_,0x9ce0);
        pcVar7 = (char *)FUN_2116_3f22(uVar13,in_DX,uVar6);
        local_14 = (char *)CONCAT22(in_DX,pcVar7);
        iVar5 = 0;
        while( true ) {
          pcVar2 = local_14;
          if (local_10 == 0) break;
          bVar1 = *(byte *)(iVar5 + -0x62f2);
          pcVar7 = (char *)local_14 + 1;
          *local_14 = ((char)bVar1 >> 4 & 0xfU) + 0x41;
          local_14 = (char *)CONCAT22(local_14._2_2_,(char *)local_14 + 2);
          *pcVar7 = (bVar1 & 0xf) + 0x41;
          iVar5 = iVar5 + 1;
          local_10 = local_10 + -1;
        }
        local_14 = (char *)CONCAT22(local_14._2_2_,(char *)local_14 + 1);
        *pcVar2 = '\0';
      }
      uVar13 = (undefined2)((ulong)local_14 >> 0x10);
      *local_14 = '\0';
      if (param_8 != 0 || param_7 != 0) {
        ((char *)local_14)[1] = '\x01';
        ((char *)local_14)[2] = '\0';
        FUN_2116_2eca((char *)local_14 + 3,uVar13,param_7,param_8);
      }
      puVar11 = (undefined1 *)0x0;
      local_14 = (char *)CONCAT22(param_6._2_2_,(undefined1 *)param_6 + 1);
      if (param_10 != 0 || param_9 != 0) {
        uVar15 = 0;
        uVar14 = 0;
        uVar13 = param_6._2_2_;
        uVar6 = FUN_2116_2eca((undefined1 *)param_6 + 1,param_6._2_2_,0xa508);
        uVar6 = FUN_2116_3f22(uVar6,uVar13,uVar14,param_9,param_10,uVar15);
        uVar6 = FUN_2116_2eca(uVar6,uVar13);
        puVar11 = (undefined1 *)FUN_2116_3f22(uVar6,uVar13);
        local_14 = (char *)CONCAT22(uVar13,puVar11);
        puVar11 = puVar11 + (-1 - (int)(undefined1 *)param_6);
      }
      puVar3 = local_14;
      uVar13 = (undefined2)((ulong)param_1 >> 0x10);
      piVar9 = (int *)param_1;
      if (piVar9[1] != 0 || *param_1 != 0) {
        if (piVar9[3] != 0 || piVar9[2] != 0) {
          local_14 = (char *)CONCAT22(local_14._2_2_,(char *)local_14 + 1);
          *puVar3 = 0x20;
          puVar11 = puVar11 + 1;
        }
        local_a = (int *)CONCAT22(uVar13,piVar9 + 2);
        while( true ) {
          piVar4 = local_a;
          uVar6 = (undefined2)((ulong)local_a >> 0x10);
          piVar9 = (int *)local_a;
          if (piVar9[1] == 0 && *local_a == 0) break;
          iVar5 = FUN_2116_2f30(*local_a,piVar9[1]);
          if ((undefined1 *)0x7d < puVar11 + iVar5) {
            *(undefined2 *)0x9cfc = 7;
            *(undefined2 *)0x9d0a = 10;
            FUN_2116_2c0a(*param_4,((int *)param_4)[1]);
            return 0xffff;
          }
          puVar11 = puVar11 + iVar5;
          local_a = (int *)CONCAT22(uVar6,piVar9 + 2);
          uVar14 = FUN_2116_2eca((char *)local_14,local_14._2_2_,*piVar4,piVar9[1],0);
          puVar8 = (undefined1 *)FUN_2116_3f22(uVar14,uVar13);
          local_14 = (char *)CONCAT22(uVar13,puVar8);
          puVar3 = local_14;
          if (piVar9[3] != 0 || *local_a != 0) {
            local_14 = (char *)CONCAT22(uVar13,puVar8 + 1);
            *puVar3 = 0x20;
            puVar11 = puVar11 + 1;
          }
        }
      }
      *local_14 = 0xd;
      *param_6 = (char)puVar11;
      return uVar10 + 1;
    }
    *(undefined2 *)0x9cfc = 0xc;
    *(undefined2 *)0x9d0a = 8;
    *(undefined2 *)0x9fc2 = uVar12;
  }
  else {
    *(undefined2 *)0x9cfc = 7;
    *(undefined2 *)0x9d0a = 10;
  }
  return 0xffff;
}



// Function: FUN_2116_77f2 @ 2116:77f2

undefined4 __cdecl16near FUN_2116_77f2(void)

{
  undefined2 *puVar1;
  char *pcVar2;
  undefined2 *puVar3;
  code *pcVar4;
  long lVar5;
  char cVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int unaff_BP;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined2 *unaff_SI;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  undefined2 *puVar25;
  char *pcVar26;
  undefined2 unaff_DS;
  bool bVar27;
  bool bVar28;
  undefined2 in_stack_00000000;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000012;
  int in_stack_00000014;
  undefined2 in_stack_00000016;
  undefined2 in_stack_00000018;
  undefined2 in_stack_0000001a;
  undefined2 in_stack_0000001c;
  
  puVar25 = (undefined2 *)0xa5e6;
  for (iVar11 = 4; iVar11 != 0; iVar11 = iVar11 + -1) {
    puVar3 = puVar25;
    puVar25 = puVar25 + 1;
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar3 = *puVar1;
  }
  uVar8 = *(uint *)0xa5ec;
  *(byte *)0xa5ed = *(byte *)0xa5ed & 0x7f;
  if (((*(int *)0xa5e6 == 0 && *(int *)0xa5e8 == 0) && *(int *)0xa5ea == 0) && *(int *)0xa5ec == 0)
  {
    *(undefined2 *)0xa5f2 = 0x3001;
    return 1;
  }
  if ((~uVar8 & 0x7ff0) == 0) {
    return 0x10000;
  }
  pcVar4 = (code *)swi(0x35);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  *(undefined1 *)0xa621 = *(undefined1 *)0xa61f;
  pcVar4 = (code *)swi(0x35);
  (*pcVar4)();
  *(uint *)(unaff_BP + 0x39cd) = *(uint *)(unaff_BP + 0x39cd) & (uint)&stack0x000a;
  lVar5 = (ulong)*(uint *)0xa5ee * 0x4d10;
  uVar8 = (uint)lVar5;
  uVar9 = (*(uint *)0xa5ee >> 8) * 0x4d;
  uVar12 = uVar8 + uVar9;
  iVar11 = ((int)((ulong)lVar5 >> 0x10) + ((int)puVar25 + 1) * 2 + (uint)CARRY2(uVar8,uVar9) +
            (uint)CARRY2(uVar12,(uint)*(byte *)0xa5ed * 0x9a) + -0x1343) -
           (uint)(uVar12 + (uint)*(byte *)0xa5ed * 0x9a < 0x12f4);
  FUN_2116_7ab3();
  pcVar4 = (code *)swi(0x3c);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x34);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  if ((*(byte *)0xa61e & 0x41) != 0) {
    iVar11 = iVar11 + 1;
    pcVar4 = (code *)swi(0x3c);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x3a);
    (*pcVar4)();
  }
  pcVar4 = (code *)swi(0x37);
  in_stack_00000014 = iVar11;
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  uVar8 = *(uint *)0xa5e7;
  uVar9 = *(uint *)0xa5e9;
  uVar12 = *(uint *)0xa5eb;
  uVar15 = *(uint *)0xa5ed;
  bVar27 = false;
  bVar10 = 0;
  for (iVar11 = -(*(int *)0xa5ef + -0x3ffe); iVar11 != 0; iVar11 = iVar11 + -1) {
    uVar21 = uVar15 & 1;
    uVar15 = uVar15 >> 1;
    uVar18 = uVar12 & 1;
    uVar12 = uVar12 >> 1 | (uint)(uVar21 != 0) << 0xf;
    uVar21 = uVar9 & 1;
    uVar9 = uVar9 >> 1 | (uint)(uVar18 != 0) << 0xf;
    uVar18 = uVar8 & 1;
    uVar8 = uVar8 >> 1 | (uint)(uVar21 != 0) << 0xf;
    bVar27 = (bVar10 & 1) != 0;
    bVar10 = bVar10 >> 1 | (uVar18 != 0) << 7;
  }
  uVar21 = uVar8 + 0x39a + (uint)bVar27;
  uVar8 = (uint)(0xfc65 < uVar8 || CARRY2(uVar8 + 0x39a,(uint)bVar27));
  uVar18 = uVar9 + uVar8;
  uVar8 = (uint)CARRY2(uVar9,uVar8);
  uVar9 = uVar12 + uVar8;
  uVar15 = uVar15 + CARRY2(uVar12,uVar8);
  iVar11 = 0x10;
  pcVar7 = (char *)0xa5f3;
  do {
    pcVar26 = pcVar7;
    iVar13 = iVar11;
    uVar22 = uVar21 << 1 | (uint)((int)((uint)bVar10 << 8) < 0);
    uVar12 = uVar18 << 1 | (uint)((int)uVar21 < 0);
    uVar8 = uVar9 << 1 | (uint)((int)uVar18 < 0);
    bVar27 = (int)uVar15 < 0;
    uVar16 = uVar15 << 1 | (uint)((int)uVar9 < 0);
    uVar23 = uVar22 << 1 | (uint)((char)(bVar10 << 1) < '\0');
    uVar19 = uVar12 << 1 | (uint)((int)uVar22 < 0);
    uVar14 = uVar8 << 1 | (uint)((int)uVar12 < 0);
    uVar22 = uVar16 << 1 | (uint)((int)uVar8 < 0);
    cVar6 = bVar10 * '\x05';
    uVar8 = (uint)CARRY1(bVar10 * '\x04',bVar10);
    uVar12 = uVar23 + uVar21;
    iVar24 = uVar12 + uVar8;
    uVar8 = (uint)(CARRY2(uVar23,uVar21) || CARRY2(uVar12,uVar8));
    uVar12 = uVar19 + uVar18;
    iVar20 = uVar12 + uVar8;
    uVar8 = (uint)(CARRY2(uVar19,uVar18) || CARRY2(uVar12,uVar8));
    uVar12 = uVar14 + uVar9;
    iVar11 = uVar12 + uVar8;
    uVar8 = (uint)(CARRY2(uVar14,uVar9) || CARRY2(uVar12,uVar8));
    bVar28 = CARRY2(uVar22,uVar15);
    uVar22 = uVar22 + uVar15;
    iVar17 = uVar22 + uVar8;
    bVar10 = bVar10 * '\n';
    uVar21 = iVar24 * 2 | (uint)(cVar6 < '\0');
    uVar18 = iVar20 * 2 | (uint)(iVar24 < 0);
    uVar9 = iVar11 * 2 | (uint)(iVar20 < 0);
    uVar15 = iVar17 * 2 | (uint)(iVar11 < 0);
    *pcVar26 = (((bVar27 << 1 | (int)uVar16 < 0) + (bVar28 || CARRY2(uVar22,uVar8))) * '\x02' |
               iVar17 < 0) + 0x30;
    iVar11 = iVar13 + -1;
    pcVar7 = pcVar26 + 1;
  } while (iVar11 != 0);
  iVar13 = iVar13 + -2;
  do {
    if (iVar13 == 0) break;
    iVar13 = iVar13 + -1;
    pcVar2 = pcVar26;
    pcVar26 = pcVar26 + -1;
  } while (*pcVar2 == '0');
  *(char *)0xa5f2 = (char)iVar13 + '\x12';
  return CONCAT22(in_stack_0000001c,1);
}



// Function: FUN_2116_7ab3 @ 2116:7ab3

/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16near FUN_2116_7ab3(void)

{
  code *pcVar1;
  uint uVar2;
  uint unaff_DI;
  uint uVar3;
  uint uStack_2;
  
  uStack_2 = unaff_DI;
  if ((int)unaff_DI < 0) {
    uStack_2 = -unaff_DI;
  }
  while (uStack_2 != 0) {
    uVar3 = uStack_2 >> 3;
    uVar2 = uStack_2 & 7;
    uStack_2 = uVar3;
    if (uVar2 != 0) {
      pcVar1 = (code *)swi(0x3c);
      (*pcVar1)();
      pcVar1 = (code *)swi(0x3a);
      (*pcVar1)();
    }
  }
  return;
}



// Function: FUN_2116_7da8 @ 2116:7da8

/* WARNING: Instruction at (ram,0x00028f4f) overlaps instruction at (ram,0x00028f4e)
    */

void FUN_2116_7da8(int param_1,uint param_2,undefined2 *param_3)

{
  code *pcVar1;
  uint uVar2;
  int in_CX;
  undefined2 extraout_DX;
  undefined1 *unaff_SI;
  undefined2 unaff_DS;
  bool bVar3;
  char cVar4;
  char cVar5;
  unkbyte10 in_ST0;
  uint uStack_e;
  code *local_8;
  
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
    }
    local_8 = (code *)0x7e46;
    cVar5 = '\0';
    cVar4 = param_1 < 0;
    bVar3 = param_1 == 0;
    uStack_e = param_2;
    if (bVar3) {
      local_8 = (code *)0x7e3c;
      pcVar1 = (code *)swi(0x35);
      (*pcVar1)();
      do {
      } while (bVar3 || cVar5 != cVar4);
      pcVar1 = (code *)swi(0x3d);
      (*pcVar1)();
      pcVar1 = (code *)swi(0x35);
      (*pcVar1)();
      out(*unaff_SI,extraout_DX);
      pcVar1 = (code *)swi(0x3c);
      (*pcVar1)();
      in_ST0 = *(unkbyte10 *)((undefined2 *)param_3 + 1);
    }
    while (uStack_e != 0) {
      uVar2 = uStack_e & 7;
      uStack_e = uStack_e >> 3;
      if (uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00028f72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*local_8)();
        return;
      }
    }
    if (param_1 == 0) {
      pcVar1 = (code *)swi(0x37);
      (*pcVar1)();
      if (in_CX != 1) {
        return;
      }
      pcVar1 = (code *)swi(0x3c);
      (*pcVar1)();
      *(unkbyte10 *)((undefined2 *)param_3 + 1) = in_ST0;
      *param_3 = 0;
      pcVar1 = (code *)swi(0x3d);
      (*pcVar1)();
    }
  }
  return;
}



// Function: FUN_2116_8002 @ 2116:8002

uint * FUN_2116_8002(uint *param_1,int param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar8;
  uint uVar7;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  undefined2 unaff_SS;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  undefined4 uVar17;
  int local_e;
  
  local_e = param_2;
  pbVar11 = (byte *)param_3;
  uVar2 = 0;
  uVar13 = 0;
  uVar9 = 0;
  uVar4 = 0;
  uVar7 = (uint)*param_3;
  while( true ) {
    pbVar11 = pbVar11 + 1;
    local_e = local_e + -1;
    if (local_e == 0) break;
    uVar12 = uVar4;
    uVar5 = uVar9;
    FUN_2116_80b0();
    uVar17 = FUN_2116_80b0();
    uVar7 = (uint)CARRY2((uint)((ulong)uVar17 >> 0x10),uVar7);
    uVar3 = uVar12 + uVar4 + uVar7;
    uVar12 = (uint)(CARRY2(uVar12,uVar4) || CARRY2(uVar12 + uVar4,uVar7));
    bVar15 = CARRY2(uVar5,uVar9);
    uVar5 = uVar5 + uVar9;
    uVar10 = uVar5 + uVar12;
    bVar16 = CARRY2((uint)uVar17,uVar2);
    uVar1 = (uint)uVar17 + uVar2;
    uVar17 = FUN_2116_80b0();
    bVar6 = (byte)((ulong)uVar17 >> 0x10);
    bVar14 = CARRY1(bVar6,*pbVar11);
    bVar8 = (byte)((ulong)uVar17 >> 0x18);
    uVar7 = CONCAT11(bVar8 + bVar14,bVar6 + *pbVar11);
    uVar9 = (uint)CARRY1(bVar8,bVar14);
    uVar4 = uVar3 + uVar9;
    uVar2 = (uint)CARRY2(uVar3,uVar9);
    uVar9 = uVar10 + uVar2;
    uVar3 = (uint)CARRY2(uVar10,uVar2);
    uVar2 = (uint)uVar17 + uVar3;
    uVar13 = uVar13 * 2 + (uint)(bVar16 || CARRY2(uVar1,(uint)(bVar15 || CARRY2(uVar5,uVar12)))) +
             (uint)CARRY2((uint)uVar17,uVar3);
  }
  uVar12 = 0x404e;
  while (uVar5 = uVar4, uVar3 = uVar2, uVar13 == 0) {
    uVar12 = uVar12 - 0x10;
    uVar2 = uVar9;
    uVar4 = uVar7;
    uVar7 = 0;
    uVar9 = uVar5;
    uVar13 = uVar3;
  }
  for (; -1 < (int)uVar13; uVar13 = uVar13 << 1 | (uint)bVar16) {
    bVar15 = (int)uVar7 < 0;
    uVar7 = uVar7 << 1;
    bVar16 = (int)uVar5 < 0;
    uVar5 = uVar5 << 1 | (uint)bVar15;
    bVar15 = (int)uVar9 < 0;
    uVar9 = uVar9 << 1 | (uint)bVar16;
    bVar16 = (int)uVar3 < 0;
    uVar3 = uVar3 << 1 | (uint)bVar15;
    uVar12 = uVar12 - 1;
  }
  param_1[5] = uVar12;
  param_1[4] = uVar13;
  param_1[3] = uVar3;
  param_1[2] = uVar9;
  param_1[1] = uVar5;
  *param_1 = uVar7;
  return param_1;
}



// Function: FUN_2116_80b0 @ 2116:80b0

undefined4 __cdecl16near FUN_2116_80b0(void)

{
  int in_AX;
  int in_DX;
  int in_BX;
  
  return CONCAT22(in_DX << 1,in_AX << 1 | (uint)(in_BX < 0));
}



// Function: FUN_2922_01dd @ 2922:01dd

void FUN_2922_01dd(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2922_020a @ 2922:020a

void FUN_2922_020a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2922_02ed @ 2922:02ed

void FUN_2922_02ed(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2922_065e @ 2922:065e

void FUN_2922_065e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2989_000d @ 2989:000d

void FUN_2989_000d(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_29ac_000f @ 29ac:000f

void FUN_29ac_000f(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_29b0_0059 @ 29b0:0059

void FUN_29b0_0059(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_29b0_00bd @ 29b0:00bd

void FUN_29b0_00bd(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_29c6_0060 @ 29c6:0060

void FUN_29c6_0060(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_29c6_00e4 @ 29c6:00e4

void FUN_29c6_00e4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_29de_0059 @ 29de:0059

void FUN_29de_0059(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_29de_00a5 @ 29de:00a5

void __cdecl16far FUN_29de_00a5(void)

{
  char *pcVar1;
  char in_CL;
  int in_BX;
  int unaff_DI;
  undefined2 unaff_DS;
  
  pcVar1 = (char *)(in_BX + unaff_DI + -0x7cd6);
  *pcVar1 = *pcVar1 + in_CL;
  FUN_33b0_0005();
  return;
}



// Function: FUN_29de_00b8 @ 29de:00b8

void FUN_29de_00b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_29f2_011d @ 29f2:011d

void FUN_29f2_011d(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_29f2_013c @ 29f2:013c

void FUN_29f2_013c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_29f2_0155 @ 29f2:0155

void FUN_29f2_0155(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2a08_0041 @ 2a08:0041

void FUN_2a08_0041(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2a08_0128 @ 2a08:0128

void FUN_2a08_0128(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2a08_02b6 @ 2a08:02b6

void FUN_2a08_02b6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2a08_033f @ 2a08:033f

void FUN_2a08_033f(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2a75_0009 @ 2a75:0009

void FUN_2a75_0009(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2a75_006d @ 2a75:006d

void FUN_2a75_006d(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2a75_00d9 @ 2a75:00d9

void FUN_2a75_00d9(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2a8e_00fc @ 2a8e:00fc

void FUN_2a8e_00fc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2ab0_000b @ 2ab0:000b

void FUN_2ab0_000b(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2ab5_006e @ 2ab5:006e

void FUN_2ab5_006e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2ab5_01c0 @ 2ab5:01c0

void FUN_2ab5_01c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2ad2_0006 @ 2ad2:0006

void FUN_2ad2_0006(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2adb_0020 @ 2adb:0020

void FUN_2adb_0020(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2adb_004c @ 2adb:004c

void FUN_2adb_004c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2b01_000b @ 2b01:000b

void FUN_2b01_000b(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2b01_006c @ 2b01:006c

void FUN_2b01_006c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2b01_00cd @ 2b01:00cd

void FUN_2b01_00cd(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2b13_0004 @ 2b13:0004

void FUN_2b13_0004(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2b13_00a6 @ 2b13:00a6

void FUN_2b13_00a6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2b13_0143 @ 2b13:0143

void FUN_2b13_0143(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2b13_0196 @ 2b13:0196

void FUN_2b13_0196(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2b53_000a @ 2b53:000a

void FUN_2b53_000a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_005e @ 2bb2:005e

void FUN_2bb2_005e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_00b4 @ 2bb2:00b4

void FUN_2bb2_00b4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_0140 @ 2bb2:0140

void FUN_2bb2_0140(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_030e @ 2bb2:030e

void FUN_2bb2_030e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_0360 @ 2bb2:0360

void FUN_2bb2_0360(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_03f4 @ 2bb2:03f4

void FUN_2bb2_03f4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_0828 @ 2bb2:0828

void FUN_2bb2_0828(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_0c22 @ 2bb2:0c22

void FUN_2bb2_0c22(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_0c5a @ 2bb2:0c5a

void FUN_2bb2_0c5a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_17fa @ 2bb2:17fa

void FUN_2bb2_17fa(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_190f @ 2bb2:190f

void FUN_2bb2_190f(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_195b @ 2bb2:195b

void FUN_2bb2_195b(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_19dc @ 2bb2:19dc

void FUN_2bb2_19dc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_1b11 @ 2bb2:1b11

void FUN_2bb2_1b11(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_1bbb @ 2bb2:1bbb

void FUN_2bb2_1bbb(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_1c1c @ 2bb2:1c1c

void FUN_2bb2_1c1c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_1c60 @ 2bb2:1c60

void FUN_2bb2_1c60(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_1cbc @ 2bb2:1cbc

void FUN_2bb2_1cbc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_232f @ 2bb2:232f

void FUN_2bb2_232f(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_2370 @ 2bb2:2370

void FUN_2bb2_2370(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_23ac @ 2bb2:23ac

void FUN_2bb2_23ac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_242a @ 2bb2:242a

void FUN_2bb2_242a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_248b @ 2bb2:248b

void FUN_2bb2_248b(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_24ec @ 2bb2:24ec

void FUN_2bb2_24ec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_29b2 @ 2bb2:29b2

void FUN_2bb2_29b2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_2a0d @ 2bb2:2a0d

void FUN_2bb2_2a0d(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_2d5c @ 2bb2:2d5c

void FUN_2bb2_2d5c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2bb2_2da4 @ 2bb2:2da4

void FUN_2bb2_2da4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2e95_02d6 @ 2e95:02d6

void FUN_2e95_02d6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2e95_0628 @ 2e95:0628

void FUN_2e95_0628(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2e95_071a @ 2e95:071a

void FUN_2e95_071a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2e95_07d7 @ 2e95:07d7

void FUN_2e95_07d7(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2e95_0828 @ 2e95:0828

void FUN_2e95_0828(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2e95_0856 @ 2e95:0856

void FUN_2e95_0856(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2e95_0906 @ 2e95:0906

void FUN_2e95_0906(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2f3f_0279 @ 2f3f:0279

void FUN_2f3f_0279(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// Function: FUN_2f3f_03fb @ 2f3f:03fb

void FUN_2f3f_03fb(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2f3f_04ab @ 2f3f:04ab

void FUN_2f3f_04ab(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fa2_0006 @ 2fa2:0006

void FUN_2fa2_0006(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_00e8 @ 2fb1:00e8

void FUN_2fb1_00e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_016e @ 2fb1:016e

void FUN_2fb1_016e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_02bc @ 2fb1:02bc

void FUN_2fb1_02bc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_03cb @ 2fb1:03cb

void FUN_2fb1_03cb(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_03f2 @ 2fb1:03f2

undefined2 __cdecl16far FUN_2fb1_03f2(void)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int unaff_BP;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
code_r0x0002ff02:
  iVar3 = FUN_2116_0eb0(unaff_BP + -8);
  *(int *)(unaff_BP + -4) = iVar3;
  if ((iVar3 == 0) ||
     (uVar5 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 6) >> 0x10),
     iVar3 = (int)*(undefined4 *)(unaff_BP + 6), *(int *)(iVar3 + 0xc) <= *(int *)(iVar3 + 0x18))) {
    *(undefined1 *)*(undefined4 *)((int)*(undefined4 *)(unaff_BP + 6) + 0x14) = 0x1a;
    uVar4 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 6) >> 0x10);
    iVar3 = (int)*(undefined4 *)(unaff_BP + 6);
    uVar5 = *(undefined2 *)(unaff_BP + -0xc);
    *(undefined2 *)(iVar3 + 0xe) = *(undefined2 *)(unaff_BP + -0xe);
    *(undefined2 *)(iVar3 + 0x10) = uVar5;
    if ((*(int *)(unaff_BP + -4) == 0) ||
       (uVar5 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 6) >> 0x10),
       iVar3 = (int)*(undefined4 *)(unaff_BP + 6), *(int *)(iVar3 + 0x18) < *(int *)(iVar3 + 0xc)))
    {
      uVar5 = *(undefined2 *)(unaff_BP + -2);
    }
    else {
      *(undefined2 *)0x90a0 = 0x11;
      uVar5 = 0xffff;
    }
    return uVar5;
  }
  if (*(char *)(unaff_BP + -8) != '\t') goto LAB_2fb1_0471;
  *(undefined2 *)(unaff_BP + -6) = 4;
  do {
    uVar5 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 6) >> 0x10);
    iVar3 = (int)*(undefined4 *)(unaff_BP + 6);
    if (*(int *)(iVar3 + 0xc) + -1 <= *(int *)(iVar3 + 0x18)) break;
    puVar2 = (undefined1 *)*(undefined2 *)(iVar3 + 0xe);
    *(int *)(iVar3 + 0xe) = *(int *)(iVar3 + 0xe) + 1;
    *puVar2 = 0x20;
    piVar1 = (int *)((int)*(undefined4 *)(unaff_BP + 6) + 0x14);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)((int)*(undefined4 *)(unaff_BP + 6) + 0x18);
    *piVar1 = *piVar1 + 1;
    *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
    piVar1 = (int *)(unaff_BP + -6);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  goto LAB_2fb1_046a;
LAB_2fb1_0471:
  if (*(char *)(unaff_BP + -8) != -0x60) {
    if (*(char *)(unaff_BP + -8) != '\r') {
      if (*(char *)(unaff_BP + -8) == -0x73) {
        *(undefined2 *)(unaff_BP + -10) = 1;
        goto code_r0x0002ff02;
      }
      if ((*(char *)(unaff_BP + -8) == '\n') && (*(int *)(unaff_BP + -10) != 0)) {
        *(undefined1 *)(unaff_BP + -8) = 0x8a;
        uVar5 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 6) >> 0x10);
        iVar3 = (int)*(undefined4 *)(unaff_BP + 6);
        piVar1 = (int *)(iVar3 + 0xe);
        *piVar1 = *piVar1 + -1;
        if (*(char *)*(undefined4 *)(iVar3 + 0xe) != ' ') {
          piVar1 = (int *)((int)*(undefined4 *)(unaff_BP + 6) + 0xe);
          *piVar1 = *piVar1 + 1;
        }
      }
      uVar5 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 6) >> 0x10);
      iVar3 = (int)*(undefined4 *)(unaff_BP + 6);
      puVar2 = (undefined1 *)*(undefined2 *)(iVar3 + 0xe);
      *(int *)(iVar3 + 0xe) = *(int *)(iVar3 + 0xe) + 1;
      *puVar2 = *(undefined1 *)(unaff_BP + -8);
      piVar1 = (int *)((int)*(undefined4 *)(unaff_BP + 6) + 0x14);
      *piVar1 = *piVar1 + 1;
      piVar1 = (int *)((int)*(undefined4 *)(unaff_BP + 6) + 0x18);
      *piVar1 = *piVar1 + 1;
      *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
    }
LAB_2fb1_046a:
    *(undefined2 *)(unaff_BP + -10) = 0;
  }
  goto code_r0x0002ff02;
}



// Function: FUN_2fb1_0525 @ 2fb1:0525

void FUN_2fb1_0525(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_0627 @ 2fb1:0627

void FUN_2fb1_0627(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_067e @ 2fb1:067e

void FUN_2fb1_067e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_0965 @ 2fb1:0965

void FUN_2fb1_0965(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_0d5a @ 2fb1:0d5a

void FUN_2fb1_0d5a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_0f4b @ 2fb1:0f4b

void FUN_2fb1_0f4b(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_1186 @ 2fb1:1186

void FUN_2fb1_1186(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_14ec @ 2fb1:14ec

void FUN_2fb1_14ec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_16e5 @ 2fb1:16e5

void FUN_2fb1_16e5(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_1789 @ 2fb1:1789

void FUN_2fb1_1789(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_1907 @ 2fb1:1907

void FUN_2fb1_1907(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_1a99 @ 2fb1:1a99

void FUN_2fb1_1a99(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_1c2c @ 2fb1:1c2c

void FUN_2fb1_1c2c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_1ca3 @ 2fb1:1ca3

void FUN_2fb1_1ca3(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_1d34 @ 2fb1:1d34

void FUN_2fb1_1d34(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_1dab @ 2fb1:1dab

void FUN_2fb1_1dab(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_1e25 @ 2fb1:1e25

void FUN_2fb1_1e25(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_1ec3 @ 2fb1:1ec3

void FUN_2fb1_1ec3(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_1f0c @ 2fb1:1f0c

void FUN_2fb1_1f0c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_1f55 @ 2fb1:1f55

void FUN_2fb1_1f55(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_1fa6 @ 2fb1:1fa6

void FUN_2fb1_1fa6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_1fc6 @ 2fb1:1fc6

void FUN_2fb1_1fc6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_2008 @ 2fb1:2008

void FUN_2fb1_2008(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_203f @ 2fb1:203f

void FUN_2fb1_203f(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_20a4 @ 2fb1:20a4

void FUN_2fb1_20a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_20fa @ 2fb1:20fa

void FUN_2fb1_20fa(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_2164 @ 2fb1:2164

void FUN_2fb1_2164(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_21d9 @ 2fb1:21d9

void FUN_2fb1_21d9(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_2206 @ 2fb1:2206

void FUN_2fb1_2206(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_2242 @ 2fb1:2242

void FUN_2fb1_2242(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_22ca @ 2fb1:22ca

void FUN_2fb1_22ca(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_2391 @ 2fb1:2391

void FUN_2fb1_2391(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_24b2 @ 2fb1:24b2

void FUN_2fb1_24b2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_2539 @ 2fb1:2539

void FUN_2fb1_2539(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_25a2 @ 2fb1:25a2

void FUN_2fb1_25a2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_25e1 @ 2fb1:25e1

void FUN_2fb1_25e1(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_2656 @ 2fb1:2656

void FUN_2fb1_2656(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_26b0 @ 2fb1:26b0

void FUN_2fb1_26b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_2732 @ 2fb1:2732

void FUN_2fb1_2732(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_279a @ 2fb1:279a

void FUN_2fb1_279a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_28ae @ 2fb1:28ae

void FUN_2fb1_28ae(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_28d1 @ 2fb1:28d1

void FUN_2fb1_28d1(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_28f4 @ 2fb1:28f4

void FUN_2fb1_28f4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_297a @ 2fb1:297a

void FUN_2fb1_297a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_2a38 @ 2fb1:2a38

void FUN_2fb1_2a38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_2b71 @ 2fb1:2b71

void FUN_2fb1_2b71(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_2c02 @ 2fb1:2c02

void FUN_2fb1_2c02(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_2d07 @ 2fb1:2d07

void FUN_2fb1_2d07(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_2ead @ 2fb1:2ead

void FUN_2fb1_2ead(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_2fb1_2fc6 @ 2fb1:2fc6

void FUN_2fb1_2fc6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_32f4_0046 @ 32f4:0046

void FUN_32f4_0046(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_32f4_006a @ 32f4:006a

void FUN_32f4_006a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_32f4_008e @ 32f4:008e

void FUN_32f4_008e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_32f4_018d @ 32f4:018d

void FUN_32f4_018d(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_32f4_01d7 @ 32f4:01d7

void FUN_32f4_01d7(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_32f4_01f2 @ 32f4:01f2

undefined2 __cdecl16far FUN_32f4_01f2(void)

{
  undefined2 uVar1;
  undefined2 in_DX;
  int unaff_BP;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  
  *(undefined2 *)(unaff_BP + -2) = in_DX;
  uVar1 = *(undefined2 *)(unaff_BP + 8);
  *(undefined2 *)0x90c8 = *(undefined2 *)(unaff_BP + 6);
  *(undefined2 *)0x90ca = uVar1;
  return *(undefined2 *)(unaff_BP + -4);
}



// Function: FUN_32f4_020e @ 32f4:020e

void FUN_32f4_020e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_32f4_0245 @ 32f4:0245

void FUN_32f4_0245(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_331c_006b @ 331c:006b

void FUN_331c_006b(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_331c_00d1 @ 331c:00d1

void FUN_331c_00d1(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_331c_022b @ 331c:022b

void FUN_331c_022b(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_331c_0422 @ 331c:0422

void FUN_331c_0422(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_331c_0449 @ 331c:0449

void FUN_331c_0449(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_331c_0511 @ 331c:0511

void FUN_331c_0511(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_331c_05d7 @ 331c:05d7

void FUN_331c_05d7(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_331c_06b9 @ 331c:06b9

void FUN_331c_06b9(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3395_0047 @ 3395:0047

void FUN_3395_0047(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3395_00ab @ 3395:00ab

void FUN_3395_00ab(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_33b0_0005 @ 33b0:0005

void FUN_33b0_0005(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_33b8_0044 @ 33b8:0044

void FUN_33b8_0044(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_33b8_007a @ 33b8:007a

void FUN_33b8_007a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_33b8_00f8 @ 33b8:00f8

void FUN_33b8_00f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_33b8_0176 @ 33b8:0176

void FUN_33b8_0176(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_33b8_019a @ 33b8:019a

void FUN_33b8_019a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_33b8_01be @ 33b8:01be

void FUN_33b8_01be(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_33b8_01e2 @ 33b8:01e2

void FUN_33b8_01e2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_33b8_0206 @ 33b8:0206

void FUN_33b8_0206(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_33ef_006a @ 33ef:006a

void FUN_33ef_006a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_33ef_00a0 @ 33ef:00a0

void FUN_33ef_00a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_33ef_00ff @ 33ef:00ff

void FUN_33ef_00ff(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_33ef_0145 @ 33ef:0145

void FUN_33ef_0145(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_33ef_018b @ 33ef:018b

void FUN_33ef_018b(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_33ef_0274 @ 33ef:0274

void FUN_33ef_0274(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_33ef_02b9 @ 33ef:02b9

void FUN_33ef_02b9(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_33ef_02fe @ 33ef:02fe

void FUN_33ef_02fe(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_33ef_0343 @ 33ef:0343

void FUN_33ef_0343(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3426_002b @ 3426:002b

void FUN_3426_002b(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3426_0041 @ 3426:0041

void FUN_3426_0041(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_343f_016c @ 343f:016c

void FUN_343f_016c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_343f_01e0 @ 343f:01e0

void FUN_343f_01e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_343f_0326 @ 343f:0326

void FUN_343f_0326(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_343f_0345 @ 343f:0345

void FUN_343f_0345(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_343f_03a7 @ 343f:03a7

void FUN_343f_03a7(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_343f_03ee @ 343f:03ee

void FUN_343f_03ee(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_343f_044c @ 343f:044c

void FUN_343f_044c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_343f_049b @ 343f:049b

void FUN_343f_049b(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_343f_04e7 @ 343f:04e7

void FUN_343f_04e7(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_343f_0619 @ 343f:0619

void FUN_343f_0619(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_343f_0645 @ 343f:0645

void FUN_343f_0645(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_343f_06df @ 343f:06df

void FUN_343f_06df(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_34d7_0000 @ 34d7:0000

void FUN_34d7_0000(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3531_0536 @ 3531:0536

void FUN_3531_0536(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3531_0563 @ 3531:0563

void FUN_3531_0563(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3531_05e3 @ 3531:05e3

void FUN_3531_05e3(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3531_067a @ 3531:067a

void FUN_3531_067a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3531_070c @ 3531:070c

void FUN_3531_070c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3531_07c7 @ 3531:07c7

void FUN_3531_07c7(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3531_0898 @ 3531:0898

void FUN_3531_0898(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3531_08e1 @ 3531:08e1

void FUN_3531_08e1(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_364d_0056 @ 364d:0056

void FUN_364d_0056(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_364d_00c4 @ 364d:00c4

void FUN_364d_00c4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_364d_012c @ 364d:012c

void FUN_364d_012c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_364d_0152 @ 364d:0152

void FUN_364d_0152(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_364d_0178 @ 364d:0178

void FUN_364d_0178(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_364d_01dc @ 364d:01dc

void FUN_364d_01dc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_364d_022a @ 364d:022a

void FUN_364d_022a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_364d_024e @ 364d:024e

void FUN_364d_024e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_364d_0272 @ 364d:0272

void FUN_364d_0272(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_364d_0292 @ 364d:0292

void FUN_364d_0292(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3678_00ee @ 3678:00ee

void FUN_3678_00ee(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3678_013a @ 3678:013a

void FUN_3678_013a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3678_0174 @ 3678:0174

void FUN_3678_0174(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3678_01b4 @ 3678:01b4

void FUN_3678_01b4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3678_01f4 @ 3678:01f4

void FUN_3678_01f4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3678_021c @ 3678:021c

void FUN_3678_021c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3678_02e6 @ 3678:02e6

void FUN_3678_02e6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_0028 @ 36b0:0028

void FUN_36b0_0028(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_0042 @ 36b0:0042

void FUN_36b0_0042(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_0096 @ 36b0:0096

void FUN_36b0_0096(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_00da @ 36b0:00da

void FUN_36b0_00da(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_010a @ 36b0:010a

void FUN_36b0_010a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_0138 @ 36b0:0138

void FUN_36b0_0138(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_069a @ 36b0:069a

void FUN_36b0_069a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_086e @ 36b0:086e

void FUN_36b0_086e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_0ac4 @ 36b0:0ac4

void FUN_36b0_0ac4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_0f42 @ 36b0:0f42

void FUN_36b0_0f42(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_0f78 @ 36b0:0f78

void FUN_36b0_0f78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_0fae @ 36b0:0fae

void FUN_36b0_0fae(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_1006 @ 36b0:1006

void FUN_36b0_1006(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_105e @ 36b0:105e

void FUN_36b0_105e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_10aa @ 36b0:10aa

void FUN_36b0_10aa(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_10e2 @ 36b0:10e2

void FUN_36b0_10e2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_1112 @ 36b0:1112

void FUN_36b0_1112(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_1142 @ 36b0:1142

void FUN_36b0_1142(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_11be @ 36b0:11be

void FUN_36b0_11be(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_11e0 @ 36b0:11e0

void FUN_36b0_11e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_1202 @ 36b0:1202

void FUN_36b0_1202(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_1238 @ 36b0:1238

void FUN_36b0_1238(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_126e @ 36b0:126e

void FUN_36b0_126e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_16d8 @ 36b0:16d8

void FUN_36b0_16d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_1750 @ 36b0:1750

void FUN_36b0_1750(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_1c6a @ 36b0:1c6a

void FUN_36b0_1c6a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_1c8c @ 36b0:1c8c

void FUN_36b0_1c8c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_1cae @ 36b0:1cae

void FUN_36b0_1cae(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_2118 @ 36b0:2118

void FUN_36b0_2118(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_2574 @ 36b0:2574

void FUN_36b0_2574(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_28ba @ 36b0:28ba

void FUN_36b0_28ba(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_2920 @ 36b0:2920

void FUN_36b0_2920(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_2962 @ 36b0:2962

void FUN_36b0_2962(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_29c4 @ 36b0:29c4

void FUN_36b0_29c4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_2a26 @ 36b0:2a26

void FUN_36b0_2a26(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_2a48 @ 36b0:2a48

void FUN_36b0_2a48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_2db0 @ 36b0:2db0

void FUN_36b0_2db0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_2f88 @ 36b0:2f88

void FUN_36b0_2f88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_30f4 @ 36b0:30f4

void FUN_36b0_30f4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_3190 @ 36b0:3190

void FUN_36b0_3190(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_3276 @ 36b0:3276

void FUN_36b0_3276(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_3298 @ 36b0:3298

void FUN_36b0_3298(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_32ba @ 36b0:32ba

void FUN_36b0_32ba(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_338e @ 36b0:338e

void FUN_36b0_338e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_3544 @ 36b0:3544

void FUN_36b0_3544(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_3662 @ 36b0:3662

void FUN_36b0_3662(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_3698 @ 36b0:3698

void FUN_36b0_3698(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_3a56 @ 36b0:3a56

void FUN_36b0_3a56(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_3ec0 @ 36b0:3ec0

void FUN_36b0_3ec0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_4884 @ 36b0:4884

void FUN_36b0_4884(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_48fa @ 36b0:48fa

void FUN_36b0_48fa(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_4930 @ 36b0:4930

void FUN_36b0_4930(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_4992 @ 36b0:4992

void FUN_36b0_4992(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_49de @ 36b0:49de

void FUN_36b0_49de(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_4a36 @ 36b0:4a36

void FUN_36b0_4a36(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_4a8e @ 36b0:4a8e

void FUN_36b0_4a8e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_4ae6 @ 36b0:4ae6

void FUN_36b0_4ae6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_4b3e @ 36b0:4b3e

void FUN_36b0_4b3e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_4b96 @ 36b0:4b96

void FUN_36b0_4b96(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_4f48 @ 36b0:4f48

void FUN_36b0_4f48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_50ec @ 36b0:50ec

void FUN_36b0_50ec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_5144 @ 36b0:5144

void FUN_36b0_5144(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_5166 @ 36b0:5166

void FUN_36b0_5166(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_51a8 @ 36b0:51a8

void FUN_36b0_51a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_522a @ 36b0:522a

void FUN_36b0_522a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_36b0_5260 @ 36b0:5260

void FUN_36b0_5260(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3be6_000c @ 3be6:000c

void FUN_3be6_000c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3be6_00ea @ 3be6:00ea

void FUN_3be6_00ea(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3be6_01ca @ 3be6:01ca

void FUN_3be6_01ca(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3be6_03fc @ 3be6:03fc

void FUN_3be6_03fc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3c73_0a08 @ 3c73:0a08

void FUN_3c73_0a08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3c73_0b82 @ 3c73:0b82

void FUN_3c73_0b82(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3c73_0c66 @ 3c73:0c66

void FUN_3c73_0c66(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3c73_0c9c @ 3c73:0c9c

void FUN_3c73_0c9c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3d41_00ea @ 3d41:00ea

void FUN_3d41_00ea(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3d41_0290 @ 3d41:0290

void FUN_3d41_0290(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3da5_0006 @ 3da5:0006

void FUN_3da5_0006(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3da5_0042 @ 3da5:0042

void FUN_3da5_0042(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3dab_0508 @ 3dab:0508

void FUN_3dab_0508(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_2116_0a38();
}



// Function: FUN_3e1d_1b32 @ 3e1d:1b32

void __cdecl16far FUN_3e1d_1b32(void)

{
  byte bVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = 0x79;
  if (*(int *)0x85 == 0x106) {
    out(*(int *)0x87 + 5,0);
    bVar1 = in(*(int *)0x87 + 2);
    out(*(int *)0x87 + 2,bVar1 & 3);
  }
  else {
    bVar1 = in(*(int *)0x87 + 9);
    out(*(int *)0x87 + 9,bVar1 & 0x78);
    if (*(int *)0x97 == 0x40) {
      out(10,*(byte *)0xe3 | 4);
    }
  }
  FUN_3e1d_1ba7();
  FUN_4011_7e0a();
  if (*(int *)(iVar2 + 0xc) != 0x106) {
    bVar1 = *(byte *)(iVar2 + 0x6c) & 0x6f;
    out(*(int *)(iVar2 + 0xe) + 0xb,bVar1);
    *(byte *)(iVar2 + 0x6c) = bVar1;
  }
  *(undefined2 *)(iVar2 + 0x22) = 0;
  *(undefined2 *)(iVar2 + 10) = 0;
  *(undefined2 *)(iVar2 + 0x36) = 0;
  return;
}



// Function: FUN_3e1d_1ba7 @ 3e1d:1ba7

void __cdecl16far FUN_3e1d_1ba7(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x99 != 4) {
    out(*(int *)0x87 + 0xf,0xb4);
    out(*(int *)0x87 + 0xf,0x74);
  }
  return;
}



// Function: FUN_3e1d_1bc6 @ 3e1d:1bc6

void __cdecl16far FUN_3e1d_1bc6(void)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = 0x79;
  FUN_3e1d_1bf1();
  FUN_4011_7e0a();
  uVar1 = *(uint *)(iVar2 + 0x54) & 0xf0;
  *(uint *)(iVar2 + 0x54) = uVar1;
  out(*(int *)(iVar2 + 0xe) + 2,(char)uVar1);
  *(undefined2 *)(iVar2 + 0x22) = 0;
  *(undefined2 *)(iVar2 + 10) = 0;
  return;
}



// Function: FUN_3e1d_1bf1 @ 3e1d:1bf1

void __cdecl16far FUN_3e1d_1bf1(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x99 != 4) {
    out(*(int *)0x87 + 7,0xb4);
  }
  return;
}



// Function: FUN_3e1d_1c07 @ 3e1d:1c07

void __cdecl16far FUN_3e1d_1c07(void)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = 0x79;
  FUN_3e1d_1c32();
  uVar1 = *(uint *)(iVar2 + 0x54) & 0xf0;
  *(uint *)(iVar2 + 0x54) = uVar1;
  out(*(int *)(iVar2 + 0xe) + 2,(char)uVar1);
  FUN_4011_7e0a();
  *(undefined2 *)(iVar2 + 0x22) = 0;
  *(undefined2 *)(iVar2 + 10) = 0;
  return;
}



// Function: FUN_3e1d_1c32 @ 3e1d:1c32

undefined2 __cdecl16far FUN_3e1d_1c32(void)

{
  undefined2 unaff_DS;
  
  out(*(int *)0x268 + 3,0xa0);
  out(*(int *)0x268 + 2,0);
  out(*(int *)0x268 + 3,0x80);
  out(*(int *)0x268 + 7,0xb4);
  out(*(int *)0x268 + 7,0x74);
  return 0x74;
}



// Function: FUN_3e1d_1c66 @ 3e1d:1c66

void __cdecl16far FUN_3e1d_1c66(void)

{
  byte bVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = 0x1e1;
  bVar1 = in(*(int *)0x1ef + 2);
  out(*(int *)0x1ef + 2,bVar1 & 0x7f);
  out(10,*(byte *)0x24b | 4);
  bVar1 = in(*(int *)0x1ef + 3);
  out(*(int *)0x1ef + 3,bVar1 & 0x7f);
  FUN_3e1d_1ca3();
  FUN_4011_7e0a();
  *(undefined2 *)(iVar2 + 10) = 0;
  return;
}



// Function: FUN_3e1d_1ca3 @ 3e1d:1ca3

void __cdecl16far FUN_3e1d_1ca3(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x201 != 4) {
    out(*(int *)0x1ef + 7,0x34);
    out(*(int *)0x1ef + 7,0x74);
  }
  return;
}



// Function: FUN_3e1d_1cc2 @ 3e1d:1cc2

void __cdecl16far FUN_3e1d_1cc2(void)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar3 = 0xf1;
  FUN_3e1d_1cf3();
  uVar2 = *(uint *)(iVar3 + 0x56) & 0xfff0;
  *(uint *)(iVar3 + 0x56) = uVar2;
  out(*(int *)(iVar3 + 0xe) + 2,(char)uVar2);
  uVar1 = FUN_4011_7e0a();
  *(undefined2 *)(iVar3 + 10) = 0;
  *(undefined2 *)(iVar3 + 0x36) = 0;
  out(*(int *)(iVar3 + 0xe) + 4,uVar1);
  return;
}



// Function: FUN_3e1d_1cf3 @ 3e1d:1cf3

void __cdecl16far FUN_3e1d_1cf3(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x99 != 4) {
    out(*(int *)0x87 + 0xe,0xb4);
    out(*(int *)0x87 + 0xe,0x74);
  }
  return;
}



// Function: FUN_3e1d_1d12 @ 3e1d:1d12

void __cdecl16far FUN_3e1d_1d12(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = 0x79;
  out(*(int *)0x87 + 3,0);
  FUN_4011_7e0a();
  *(undefined2 *)(iVar1 + 10) = 0;
  return;
}



// Function: FUN_3e1d_1d2d @ 3e1d:1d2d

void __cdecl16far FUN_3e1d_1d2d(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = 0x79;
  out(*(int *)0x87 + 4,0);
  FUN_4011_7e0a();
  *(undefined2 *)(iVar1 + 10) = 0;
  return;
}



// Function: FUN_3e1d_1dee @ 3e1d:1dee

void __cdecl16far FUN_3e1d_1dee(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x85 == 0x106) {
    *(undefined2 *)0x53c2 = 0xb;
    *(undefined2 *)0x53c4 = 9;
    *(undefined2 *)0x53c6 = 8;
  }
  else {
    *(undefined2 *)0x53c2 = 0x13;
    *(undefined2 *)0x53c4 = 0x11;
    *(undefined2 *)0x53c6 = 0x10;
  }
  out(*(int *)0x87 + *(int *)0x53c2,0x30);
  iVar1 = *(int *)0x91;
  if (*(int *)0x8f != 0) {
    iVar1 = iVar1 + 1;
  }
  out(*(int *)0x87 + *(int *)0x53c6,iVar1);
  out(*(int *)0x87 + *(int *)0x53c2,0x74);
  out(*(int *)0x87 + *(int *)0x53c2,0x70);
  out(*(int *)0x87 + *(int *)0x53c2,0x74);
  iVar1 = *(int *)0x8f;
  if (iVar1 == 1) {
    iVar1 = 2;
    out(*(int *)0x87 + *(int *)0x53c4,2);
    out(*(undefined2 *)0x87,2);
  }
  else {
    out(*(int *)0x87 + *(int *)0x53c4,iVar1);
  }
  out(*(undefined2 *)0x87,(char)iVar1);
  out(*(int *)0x87 + *(int *)0x53c4,0);
  if (*(int *)0x93 == 1) {
    out(*(int *)0x87 + *(int *)0x53c2,0x70);
  }
  FUN_3e1d_1eba(0x3e1d);
  return;
}



// Function: FUN_3e1d_1eba @ 3e1d:1eba

undefined4 FUN_3e1d_1eba(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  
  iVar4 = *(int *)0x85;
  if ((iVar4 == 0x106) || ((iVar4 == 0x105 && (*(int *)0xa1 != 0)))) {
    *(undefined2 *)0x3c5 = 0x16;
    *(undefined2 *)0x3c7 = 0x18;
    if (iVar4 == 0x106) {
      *(undefined2 *)0x3c5 = 6;
      *(undefined2 *)0x3c7 = 7;
    }
    uVar5 = 0;
    cVar1 = in(*(int *)0x87 + *(int *)0x3c5);
    do {
      out(*(int *)0x87 + *(int *)0x3c5,(char)uVar5);
      uVar2 = in(*(int *)0x87 + *(int *)0x3c7);
      *(undefined1 *)(uVar5 + 0x53c8) = uVar2;
      uVar5 = uVar5 + 1;
    } while (uVar5 != (byte)(cVar1 + 1));
    uVar5 = 0;
    do {
      out(*(int *)0x87 + *(int *)0x3c5,(char)uVar5);
      uVar3 = CONCAT11((char)(uVar5 >> 8),*(undefined1 *)(uVar5 + 0x53c8));
      iVar4 = *(int *)0x87 + *(int *)0x3c7;
      out(iVar4,*(undefined1 *)(uVar5 + 0x53c8));
      uVar5 = uVar5 + 1;
    } while (uVar5 != (byte)(cVar1 + 1));
  }
  else {
    uVar2 = in(*(int *)0x87 + 2);
    uVar3 = CONCAT11((char)((uint)iVar4 >> 8),uVar2);
    iVar4 = *(int *)0x87 + 2;
    out(iVar4,uVar2);
  }
  return CONCAT22(iVar4,uVar3);
}



// Function: FUN_3e1d_1ef1 @ 3e1d:1ef1

undefined4 FUN_3e1d_1ef1(void)

{
  undefined1 *puVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int in_BX;
  uint unaff_DI;
  uint uVar6;
  undefined2 unaff_DS;
  
  cVar3 = in(*(int *)(in_BX + 0xe) + *(int *)0x3c5);
  do {
    out(*(int *)(in_BX + 0xe) + *(int *)0x3c5,(char)unaff_DI);
    uVar4 = in(*(int *)(in_BX + 0xe) + *(int *)0x3c7);
    *(undefined1 *)(unaff_DI + 0x53c8) = uVar4;
    unaff_DI = unaff_DI + 1;
  } while (unaff_DI != (byte)(cVar3 + 1));
  uVar6 = 0;
  do {
    out(*(int *)(in_BX + 0xe) + *(int *)0x3c5,(char)uVar6);
    puVar1 = (undefined1 *)(uVar6 + 0x53c8);
    uVar2 = uVar6 >> 8;
    iVar5 = *(int *)(in_BX + 0xe) + *(int *)0x3c7;
    out(iVar5,*puVar1);
    uVar6 = uVar6 + 1;
  } while (uVar6 != (byte)(cVar3 + 1));
  return CONCAT22(iVar5,CONCAT11((char)uVar2,*puVar1));
}



// Function: thunk_FUN_3e1d_1f4c @ 3e1d:1f39

void __cdecl16far thunk_FUN_3e1d_1f4c(void)

{
  return;
}



// Function: FUN_3e1d_1f4c @ 3e1d:1f4c

void __cdecl16far FUN_3e1d_1f4c(void)

{
  return;
}



// Function: FUN_4011_00c0 @ 4011:00c0

undefined2 __cdecl16far FUN_4011_00c0(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  undefined1 in_CF;
  
  FUN_4011_1985();
  FUN_4011_7f16();
  FUN_4011_7ec7();
  FUN_4011_1359();
  if ((bool)in_CF) goto LAB_4011_019c;
  FUN_4011_804e();
  if (*(int *)0xb != 0) {
    *(undefined2 *)0xb = 0;
    uVar1 = *(uint *)0xd & 0xff00;
    if ((uVar1 == 0x100) || (uVar1 == 0xe00)) {
      FUN_3e1d_1b32();
      goto LAB_4011_019c;
    }
    if (uVar1 == 0xc00) {
      FUN_3e1d_1bc6();
      goto LAB_4011_019c;
    }
    if (uVar1 == 0x500) {
      FUN_3e1d_1c66();
      goto LAB_4011_019c;
    }
    if (uVar1 == 0xa00) {
      FUN_3e1d_1cc2();
      goto LAB_4011_019c;
    }
    if (*(int *)0xd == 0x4001) {
      FUN_3e1d_1d12();
      goto LAB_4011_019c;
    }
    if ((*(int *)0xd == 0x4006) || (*(int *)0xd == 0x4007)) {
      FUN_3e1d_1d2d();
      goto LAB_4011_019c;
    }
    if (uVar1 == 0x6000) {
      FUN_3e1d_1c07();
      goto LAB_4011_019c;
    }
  }
  *(undefined2 *)0xb = 0;
  FUN_4011_7e0a();
LAB_4011_019c:
  return *(undefined2 *)0x264;
}



// Function: FUN_4011_03f7 @ 4011:03f7

void __cdecl16near FUN_4011_03f7(void)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  undefined2 unaff_DS;
  bool bVar9;
  undefined4 uVar10;
  
  if ((*(int *)0x27a < 0) || ((*(int *)0x27a == 0 && (*(int *)0x278 == 0)))) {
    FUN_4011_7cc4();
  }
  else {
    if (*(int *)0x26a != 0) {
      uVar10 = FUN_4011_16da();
      *(undefined2 *)0x3e5 = (int)uVar10;
      *(undefined2 *)0x3e7 = (int)((ulong)uVar10 >> 0x10);
    }
    if (*(int *)0x280 == 0) {
      FUN_4011_7cc4();
    }
    else {
      uVar10 = FUN_4011_16da();
      uVar5 = (undefined2)((ulong)uVar10 >> 0x10);
      *(undefined2 *)0x27e = (int)uVar10;
      *(undefined2 *)0x3dd = (int)uVar10;
      *(undefined2 *)0x280 = uVar5;
      *(undefined2 *)0x3df = uVar5;
      uVar4 = *(int *)0x278 * 2;
      *(int *)0x3df = *(int *)0x3df + (*(int *)0x27a << 1 | (uint)(*(int *)0x278 < 0)) * 0x1000;
      puVar1 = (uint *)0x3dd;
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar4;
      if (CARRY2(uVar2,uVar4)) {
        *(int *)0x3df = *(int *)0x3df + 0x1000;
      }
      iVar8 = *(int *)0x280;
      iVar6 = *(int *)0x280;
      puVar7 = (uint *)*(undefined2 *)0x27e;
      do {
        uVar2 = *puVar7;
        *puVar7 = uVar2 >> 4;
        if (*(int *)0x26a != 0) {
          puVar3 = (uint *)*(uint *)0x3e5;
          *puVar3 = uVar2 & 0xf;
          if ((uint *)0xfffd < puVar3) {
            *(int *)0x3e7 = *(int *)0x3e7 + 0x1000;
          }
          *(undefined2 *)0x3e5 = puVar3 + 1;
        }
        bVar9 = (uint *)0xfffd < puVar7;
        puVar7 = puVar7 + 1;
        if (bVar9) {
          iVar6 = iVar6 + 0x1000;
          iVar8 = iVar6;
        }
      } while ((puVar7 != (uint *)*(undefined2 *)0x3dd) || (iVar6 != *(int *)0x3df));
    }
  }
  return;
}



// Function: FUN_4011_0510 @ 4011:0510

void __cdecl16near FUN_4011_0510(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  uint *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar7;
  undefined4 uVar8;
  
  if (*(int *)0x27c < 1) {
    FUN_4011_7cc4();
  }
  else if ((*(int *)0x27a < 0) || ((*(int *)0x27a == 0 && (*(int *)0x278 == 0)))) {
    FUN_4011_7cc4();
  }
  else {
    uVar4 = *(uint *)0x278;
    iVar5 = *(int *)0x27a;
    if ((*(int *)0x3f - 1U & uVar4) != 0) {
      uVar3 = uVar4 & ~(*(int *)0x3f - 1U);
      uVar4 = uVar3 + *(uint *)0x3f;
      iVar5 = iVar5 + (uint)CARRY2(uVar3,*(uint *)0x3f);
    }
    *(uint *)0x278 = uVar4;
    *(int *)0x27a = iVar5;
    if (*(int *)0x280 == 0) {
      FUN_4011_7cc4();
    }
    else {
      uVar8 = FUN_4011_16da();
      uVar6 = (undefined2)((ulong)uVar8 >> 0x10);
      *(undefined2 *)0x3e1 = (int)uVar8;
      *(undefined2 *)0x3e3 = uVar6;
      *(undefined2 *)0x71 = (int)uVar8;
      *(undefined2 *)0x73 = uVar6;
      iVar5 = *(int *)0x278;
      iVar2 = *(int *)0x27a;
      *(int *)0x3ed = iVar5 << 1;
      *(uint *)0x3ef = iVar2 << 1 | (uint)(iVar5 < 0);
      uVar8 = FUN_4011_06d3();
      *(undefined2 *)0x3f1 = (int)uVar8;
      *(undefined2 *)0x3f3 = (int)((ulong)uVar8 >> 0x10);
      func_0x000407b7();
      bVar7 = *(int *)0x25 == 0;
      if ((*(int *)0x25 == 1) || (FUN_4011_03f7(), !bVar7)) {
        *(undefined2 *)0x3e9 = 0;
        *(undefined2 *)0x3eb = 0;
        while( true ) {
          iVar5 = *(int *)0x3eb;
          if ((*(int *)0x3e9 == *(int *)0x3ed) && (iVar5 == *(int *)0x3ef)) break;
          *(int *)0x3f5 = *(int *)0x3e9;
          *(int *)0x3f7 = iVar5;
          FUN_4011_06f1();
          *(uint *)0x3fd = *unaff_DI;
          while ((*(uint *)0x3fd & 0x1000) == 0) {
            uVar8 = FUN_4011_06d3();
            *(undefined2 *)0x3f9 = (int)uVar8;
            *(undefined2 *)0x3fb = (int)((ulong)uVar8 >> 0x10);
            FUN_4011_06f1();
            uVar4 = *unaff_DI;
            *unaff_DI = *(uint *)0x3fd | 0x1000;
            *(uint *)0x3fd = uVar4;
            uVar6 = *(undefined2 *)0x3fb;
            *(undefined2 *)0x3f5 = *(undefined2 *)0x3f9;
            *(undefined2 *)0x3f7 = uVar6;
          }
          puVar1 = (uint *)0x3e9;
          uVar4 = *puVar1;
          *puVar1 = *puVar1 + 2;
          *(int *)0x3eb = *(int *)0x3eb + (uint)(0xfffd < uVar4);
        }
        FUN_4011_071c();
      }
    }
  }
  return;
}



// Function: FUN_4011_05bb @ 4011:05bb

void __cdecl16near FUN_4011_05bb(void)

{
  char *pcVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  byte in_AL;
  int in_BX;
  int unaff_BP;
  uint *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar7;
  undefined4 uVar8;
  
  pcVar1 = (char *)((int)unaff_DI + unaff_BP + 0x253e);
  *pcVar1 = *pcVar1 + in_AL;
  pbVar2 = (byte *)(in_BX + (int)unaff_DI);
  bVar7 = CARRY1(*pbVar2,in_AL);
  *pbVar2 = *pbVar2 + in_AL;
  if ((*pbVar2 == 0) || (FUN_4011_03f7(), !bVar7)) {
    *(undefined2 *)0x3e9 = 0;
    *(undefined2 *)0x3eb = 0;
    while( true ) {
      iVar5 = *(int *)0x3eb;
      if ((*(int *)0x3e9 == *(int *)0x3ed) && (iVar5 == *(int *)0x3ef)) break;
      *(int *)0x3f5 = *(int *)0x3e9;
      *(int *)0x3f7 = iVar5;
      FUN_4011_06f1();
      *(uint *)0x3fd = *unaff_DI;
      while ((*(uint *)0x3fd & 0x1000) == 0) {
        uVar8 = FUN_4011_06d3();
        *(undefined2 *)0x3f9 = (int)uVar8;
        *(undefined2 *)0x3fb = (int)((ulong)uVar8 >> 0x10);
        FUN_4011_06f1();
        uVar4 = *unaff_DI;
        *unaff_DI = *(uint *)0x3fd | 0x1000;
        *(uint *)0x3fd = uVar4;
        uVar6 = *(undefined2 *)0x3fb;
        *(undefined2 *)0x3f5 = *(undefined2 *)0x3f9;
        *(undefined2 *)0x3f7 = uVar6;
      }
      puVar3 = (uint *)0x3e9;
      uVar4 = *puVar3;
      *puVar3 = *puVar3 + 2;
      *(int *)0x3eb = *(int *)0x3eb + (uint)(0xfffd < uVar4);
    }
    FUN_4011_071c();
  }
  return;
}



// Function: FUN_4011_0652 @ 4011:0652

void __cdecl16near FUN_4011_0652(void)

{
  int in_DX;
  
  if (in_DX == 0) {
    FUN_4011_7cc4();
  }
  return;
}



// Function: FUN_4011_0661 @ 4011:0661

void __cdecl16near FUN_4011_0661(void)

{
  return;
}



// Function: FUN_4011_0662 @ 4011:0662

void __cdecl16near FUN_4011_0662(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  byte bVar2;
  byte bVar3;
  byte in_AF;
  byte bVar4;
  byte bVar5;
  byte in_TF;
  byte in_IF;
  byte bVar6;
  byte in_NT;
  
  FUN_4011_068d();
  do {
    FUN_4011_804e();
  } while (*(int *)0xb != 0);
  uVar1 = *(uint *)0x1;
  bVar2 = 0;
  bVar6 = 0;
  bVar5 = (int)uVar1 < 0;
  bVar4 = uVar1 == 0;
  bVar3 = (POPCOUNT(uVar1 & 0xff) & 1U) == 0;
  if (!(bool)bVar4) {
    FUN_4011_7cc4();
  }
  FUN_4011_068e((uint)(in_NT & 1) * 0x4000 | (uint)(bVar6 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
                (uint)(in_TF & 1) * 0x100 | (uint)(bVar5 & 1) * 0x80 | (uint)(bVar4 & 1) * 0x40 |
                (uint)(in_AF & 1) * 0x10 | (uint)(bVar3 & 1) * 4 | (uint)(bVar2 & 1));
  FUN_4011_068f();
  return;
}



// Function: FUN_4011_068d @ 4011:068d

void __cdecl16near FUN_4011_068d(void)

{
  return;
}



// Function: FUN_4011_068e @ 4011:068e

void __cdecl16near FUN_4011_068e(void)

{
  return;
}



// Function: FUN_4011_068f @ 4011:068f

undefined2 __cdecl16near FUN_4011_068f(void)

{
  int iVar1;
  undefined2 in_AX;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x264;
  FUN_4011_00c0();
  if (iVar1 != 0) {
    *(int *)0x264 = iVar1;
  }
  return in_AX;
}



// Function: FUN_4011_06d3 @ 4011:06d3

undefined4 __cdecl16near FUN_4011_06d3(void)

{
  uint in_AX;
  uint uVar1;
  int in_CX;
  int in_DX;
  uint uVar2;
  uint in_BX;
  uint uVar3;
  undefined2 unaff_DS;
  
  uVar1 = in_AX - in_BX;
  uVar2 = (in_DX - in_CX) - (uint)(in_AX < in_BX);
  if ((int)uVar2 < 0) {
    uVar2 = ~uVar2;
    uVar3 = ~uVar1 + 1;
    if (uVar3 == 0) {
      uVar2 = uVar2 + 1;
    }
    uVar1 = *(uint *)0x3ed - uVar3;
    uVar2 = (*(int *)0x3ef - uVar2) - (uint)(*(uint *)0x3ed < uVar3);
  }
  return CONCAT22(uVar2,uVar1);
}



// Function: FUN_4011_06f1 @ 4011:06f1

undefined4 __cdecl16near FUN_4011_06f1(void)

{
  undefined2 in_AX;
  int iVar1;
  undefined2 in_DX;
  
  iVar1 = 4;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return CONCAT22(in_DX,in_AX);
}



// Function: FUN_4011_071c @ 4011:071c

void __cdecl16near FUN_4011_071c(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined2 unaff_DS;
  bool bVar8;
  undefined4 uVar9;
  
  if ((*(int *)0x27a < 0) || ((*(int *)0x27a == 0 && (*(int *)0x278 == 0)))) {
    FUN_4011_7cc4();
  }
  else if (*(int *)0x280 == 0) {
    FUN_4011_7cc4();
  }
  else {
    uVar9 = FUN_4011_16da();
    uVar4 = (undefined2)((ulong)uVar9 >> 0x10);
    *(undefined2 *)0x27e = (int)uVar9;
    *(undefined2 *)0x3dd = (int)uVar9;
    *(undefined2 *)0x280 = uVar4;
    *(undefined2 *)0x3df = uVar4;
    uVar3 = *(int *)0x278 * 2;
    *(int *)0x3df = *(int *)0x3df + (*(int *)0x27a << 1 | (uint)(*(int *)0x278 < 0)) * 0x1000;
    puVar1 = (uint *)0x3dd;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    if (CARRY2(uVar2,uVar3)) {
      *(int *)0x3df = *(int *)0x3df + 0x1000;
    }
    iVar7 = *(int *)0x280;
    iVar5 = *(int *)0x280;
    puVar6 = (uint *)*(undefined2 *)0x27e;
    do {
      *puVar6 = *puVar6 & 0xfff;
      bVar8 = (uint *)0xfffd < puVar6;
      puVar6 = puVar6 + 1;
      if (bVar8) {
        iVar5 = iVar5 + 0x1000;
        iVar7 = iVar5;
      }
    } while ((puVar6 != (uint *)*(undefined2 *)0x3dd) || (iVar5 != *(int *)0x3df));
  }
  return;
}



// Function: FUN_4011_0dea @ 4011:0dea

undefined2 __cdecl16far FUN_4011_0dea(void)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined2 uVar4;
  int in_CX;
  int iVar5;
  int in_BX;
  int unaff_BP;
  int *unaff_SI;
  int *piVar6;
  int unaff_DI;
  char *pcVar7;
  int iVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  piVar6 = unaff_SI + 1;
  if (*unaff_SI == in_BX) {
    *(int *)0x417 = in_CX + 1;
    iVar8 = (int)((ulong)*(undefined4 *)(unaff_BP + 2) >> 0x10);
    pcVar7 = (char *)(char *)*(undefined4 *)(unaff_BP + 2);
    if (iVar8 == 0) {
      FUN_4011_7cc4();
    }
    else {
      iVar5 = 0;
      do {
        if (iVar5 == *(int *)(unaff_BP + 6)) {
          FUN_4011_7cc4();
          break;
        }
        piVar1 = piVar6;
        piVar6 = (int *)((int)piVar6 + 1);
        iVar3 = *piVar1;
        pcVar2 = pcVar7;
        pcVar7 = pcVar7 + 1;
        *pcVar2 = (char)iVar3;
        iVar5 = iVar5 + 1;
      } while ((char)iVar3 != '\0');
    }
  }
  else {
    if ((char)*piVar6 != '\0') {
      for (; (char)*piVar6 != '\0'; piVar6 = (int *)((int)piVar6 + 1)) {
      }
      uVar4 = FUN_4011_0dea();
      return uVar4;
    }
    if (unaff_DI != 1) {
      uVar4 = FUN_4011_0dea();
      return uVar4;
    }
    FUN_4011_7cc4();
  }
  return *(undefined2 *)0x264;
}



// Function: FUN_4011_0df3 @ 4011:0df3

undefined2 __cdecl16far FUN_4011_0df3(void)

{
  undefined2 uVar1;
  char *unaff_SI;
  int unaff_DI;
  undefined2 unaff_DS;
  
  if (*unaff_SI != '\0') {
    for (; *unaff_SI != '\0'; unaff_SI = unaff_SI + 1) {
    }
    uVar1 = FUN_4011_0dea();
    return uVar1;
  }
  if (unaff_DI != 1) {
    uVar1 = FUN_4011_0dea();
    return uVar1;
  }
  FUN_4011_7cc4();
  return *(undefined2 *)0x264;
}



// Function: FUN_4011_1122 @ 4011:1122

undefined1 * __cdecl16near FUN_4011_1122(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *in_AX;
  uint in_CX;
  int in_DX;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined2 unaff_DS;
  
  if ((in_DX == 0) || (in_CX == 0)) {
    FUN_4011_7cc4();
  }
  else {
    if (0xff < in_CX) {
      in_CX = 0x100;
    }
    puVar4 = (undefined1 *)0x556;
    puVar3 = in_AX;
    for (; in_CX != 0; in_CX = in_CX - 1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = *puVar1;
    }
    *puVar4 = 0;
  }
  return (undefined1 *)CONCAT22(in_DX,in_AX);
}



// Function: FUN_4011_115f @ 4011:115f

void __cdecl16near FUN_4011_115f(void)

{
  code *pcVar1;
  undefined2 in_AX;
  undefined2 uVar2;
  undefined2 in_BX;
  undefined2 unaff_DS;
  bool bVar3;
  
  *(undefined2 *)0x656 = in_AX;
  *(undefined2 *)0x658 = in_BX;
  bVar3 = *(uint *)0x658 < 2;
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (bVar3) {
    FUN_4011_7cc4();
  }
  else {
    *(undefined2 *)0x286 = uVar2;
    if (*(int *)0x656 == 1) {
      FUN_4011_1266();
    }
    else {
      FUN_4011_11e1();
    }
  }
  return;
}



// Function: FUN_4011_11a0 @ 4011:11a0

void __cdecl16near FUN_4011_11a0(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  undefined1 in_CF;
  bool bVar2;
  
  FUN_4011_11e1();
  if ((!(bool)in_CF) && (bVar2 = false, *(int *)0x286 != 0)) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    *(undefined2 *)0x286 = 0;
    if (bVar2) {
      FUN_4011_7cc4();
    }
  }
  return;
}



// Function: FUN_4011_11e1 @ 4011:11e1

void __cdecl16near FUN_4011_11e1(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  *(undefined1 *)0x52c = 0xd;
  *(undefined1 *)0x52d = 10;
  FUN_4011_12cf();
  FUN_4011_1310();
  *(undefined2 *)0x542 = *(undefined2 *)0x13;
  *(undefined2 *)0x544 = *(undefined2 *)0x15;
  *(undefined2 *)0x546 = *(undefined2 *)0x270;
  *(undefined2 *)0x548 = *(undefined2 *)0x272;
  *(undefined2 *)0x54a = *(undefined2 *)0x3;
  *(undefined2 *)0x54c = *(undefined2 *)0x5;
  *(undefined2 *)0x54e = *(undefined2 *)0x2b;
  *(undefined2 *)0x550 = *(undefined2 *)0x2d;
  *(undefined2 *)0x552 = *(undefined2 *)0x3bd;
  *(undefined2 *)0x554 = *(undefined2 *)0xb5;
  bVar2 = false;
  if (*(int *)0x286 != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!bVar2) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      if (!bVar2) {
        return;
      }
    }
    FUN_4011_7cc4();
  }
  return;
}



// Function: FUN_4011_1266 @ 4011:1266

void __cdecl16near FUN_4011_1266(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (!(bool)in_CF) {
    *(undefined2 *)0x13 = *(undefined2 *)0x542;
    *(undefined2 *)0x15 = *(undefined2 *)0x544;
    *(undefined2 *)0x270 = *(undefined2 *)0x546;
    *(undefined2 *)0x272 = *(undefined2 *)0x548;
    *(undefined2 *)0x17 = *(undefined2 *)0x54a;
    *(undefined2 *)0x19 = *(undefined2 *)0x54c;
    *(undefined2 *)0x2b = *(undefined2 *)0x54e;
    *(undefined2 *)0x2d = *(undefined2 *)0x550;
    *(undefined2 *)0x3bd = *(undefined2 *)0x552;
    *(undefined2 *)0x3d = *(undefined2 *)0x554;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!(bool)in_CF) {
      return;
    }
  }
  FUN_4011_7cc4();
  return;
}



// Function: FUN_4011_12cf @ 4011:12cf

void __cdecl16near FUN_4011_12cf(undefined2 *param_1)

{
  code *pcVar1;
  int iVar2;
  uint in_CX;
  undefined2 extraout_DX;
  byte bVar3;
  undefined2 unaff_DS;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  bVar3 = (byte)((uint)extraout_DX >> 8);
  iVar2 = CONCAT11(bVar3 / 10,bVar3 % 10) + 0x3030;
  *param_1 = CONCAT11((char)iVar2,(char)((uint)iVar2 >> 8));
  *(undefined1 *)(param_1 + 1) = 0x2f;
  iVar2 = CONCAT11((byte)extraout_DX / 10,(byte)extraout_DX % 10) + 0x3030;
  *(undefined2 *)((int)param_1 + 3) = CONCAT11((char)iVar2,(char)((uint)iVar2 >> 8));
  *(undefined1 *)((int)param_1 + 5) = 0x2f;
  bVar3 = (byte)(in_CX % 100);
  iVar2 = CONCAT11(bVar3 / 10,bVar3 % 10) + 0x3030;
  param_1[3] = CONCAT11((char)iVar2,(char)((uint)iVar2 >> 8));
  *(undefined1 *)(param_1 + 4) = 0xd;
  *(undefined1 *)((int)param_1 + 9) = 10;
  return;
}



// Function: FUN_4011_1310 @ 4011:1310

void __cdecl16near FUN_4011_1310(undefined2 *param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined2 in_CX;
  undefined1 uVar4;
  undefined2 unaff_DS;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  bVar2 = (byte)((uint)in_CX >> 8);
  uVar4 = 0x70;
  if (bVar2 < 0xc) {
    uVar4 = 0x61;
  }
  if (0xc < bVar2) {
    bVar2 = bVar2 - 0xc;
  }
  if (bVar2 == 0) {
    bVar2 = 0xc;
  }
  iVar3 = CONCAT11(bVar2 / 10,bVar2 % 10) + 0x3030;
  *param_1 = CONCAT11((char)iVar3,(char)((uint)iVar3 >> 8));
  *(undefined1 *)(param_1 + 1) = 0x3a;
  iVar3 = CONCAT11((byte)in_CX / 10,(byte)in_CX % 10) + 0x3030;
  *(undefined2 *)((int)param_1 + 3) = CONCAT11((char)iVar3,(char)((uint)iVar3 >> 8));
  *(undefined1 *)((int)param_1 + 5) = 0x20;
  param_1[3] = CONCAT11(0x6d,uVar4);
  *(undefined1 *)(param_1 + 4) = 0xd;
  *(undefined1 *)((int)param_1 + 9) = 10;
  return;
}



// Function: FUN_4011_1359 @ 4011:1359

void __cdecl16near FUN_4011_1359(void)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  bool bVar3;
  
  uVar2 = FUN_4011_1985();
  *(uint *)0x261 = uVar2;
  *(undefined2 *)0x264 = 0;
  *(undefined2 *)0x27 = 0;
  bVar3 = false;
  if (*(char *)0x662 == '\0') {
    *(undefined2 *)0x3 = 0;
    *(undefined2 *)0x5 = 0;
    *(undefined2 *)0x7 = 0;
    *(undefined2 *)0x9 = 0;
    FUN_4011_860b();
    if (bVar3) {
      return;
    }
    FUN_4011_1710();
    uVar2 = FUN_4011_17de();
  }
  bVar3 = uVar2 < 10;
  if (bVar3) {
    FUN_4011_13fb();
    if (bVar3) {
      return;
    }
    iVar1 = *(int *)(*(int *)0x259 + 2);
    if (iVar1 != 0) {
      if (*(int *)(*(int *)0x259 + 8) == 1) {
        return;
      }
      if ((iVar1 != 0x4007) && (iVar1 != 0x4006)) {
        if (iVar1 != 0x4003) {
          return;
        }
        *(undefined2 *)0x3db = 0xffff;
        FUN_4011_a092();
        *(undefined2 *)(*(int *)0x259 + 8) = 1;
        return;
      }
      FUN_4011_9fc9();
      return;
    }
  }
  FUN_4011_7cc4();
  return;
}



// Function: FUN_4011_13fb @ 4011:13fb

undefined4 __cdecl16near FUN_4011_13fb(void)

{
  int iVar1;
  uint in_AX;
  uint uVar2;
  undefined2 in_DX;
  char cVar3;
  undefined2 unaff_DS;
  
  if (in_AX < *(uint *)0x688) {
    *(undefined2 *)0x259 = 0x6c6;
    for (uVar2 = in_AX; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(int *)0x259 = *(int *)0x259 + 100;
    }
    iVar1 = *(int *)(*(int *)0x259 + 2);
    *(int *)0xd = iVar1;
    *(undefined2 *)0x3cd = 0;
    if ((iVar1 == 0x4006) || (iVar1 == 0x4007)) {
      *(undefined2 *)0x3cd = 1;
    }
    cVar3 = (char)*(undefined2 *)(*(int *)0x259 + 6);
    *(char *)0x6b = cVar3;
    if (cVar3 == '\x03') {
      *(undefined2 *)0x63 = 6;
      *(undefined2 *)0x67 = 7;
      *(undefined2 *)0x65 = 0x82;
      *(undefined1 *)0x263 = 8;
    }
    else if (cVar3 == '\x02') {
      *(undefined2 *)0x63 = 4;
      *(undefined2 *)0x67 = 5;
      *(undefined2 *)0x65 = 0x81;
      *(undefined1 *)0x263 = 4;
    }
    else {
      *(undefined2 *)0x63 = 2;
      *(undefined2 *)0x67 = 3;
      *(undefined2 *)0x65 = 0x83;
      *(undefined1 *)0x263 = 2;
    }
  }
  else {
    FUN_4011_7cc4();
  }
  return CONCAT22(in_DX,in_AX);
}



// Function: FUN_4011_14a3 @ 4011:14a3

undefined4 __cdecl16near FUN_4011_14a3(undefined2 param_1,undefined2 param_2)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint in_AX;
  undefined4 in_EBX;
  char *pcVar5;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 in_GS;
  
  bVar4 = (byte)in_AX;
  pcVar5 = (char *)CONCAT22((int)((ulong)in_EBX >> 0x10),
                            (char *)CONCAT11((char)((ulong)in_EBX >> 8) + bVar4,(char)in_EBX));
  *pcVar5 = *pcVar5 + bVar4;
  pbVar2 = (byte *)(unaff_BP + unaff_DI + -0x3a00);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar4;
  puVar1 = (uint *)(unaff_BP + unaff_SI);
  *puVar1 = *puVar1 + (uint)CARRY1(bVar3,bVar4) * ((in_AX & 3) - (*puVar1 & 3));
  return CONCAT22(unaff_ES,param_2);
}



// Function: FUN_4011_14bd @ 4011:14bd

undefined4 __cdecl16near FUN_4011_14bd(void)

{
  uint in_AX;
  uint uVar1;
  undefined2 in_DX;
  undefined2 unaff_DS;
  
  if (in_AX < *(uint *)0x68a) {
    *(undefined2 *)0x25f = 0x2096;
    for (uVar1 = in_AX; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(int *)0x25f = *(int *)0x25f + 0x32;
    }
  }
  else {
    FUN_4011_7cc4();
  }
  return CONCAT22(in_DX,in_AX);
}



// Function: FUN_4011_1503 @ 4011:1503

undefined2 __cdecl16near FUN_4011_1503(void)

{
  int in_AX;
  int iVar1;
  int in_BX;
  int iVar2;
  undefined2 unaff_DS;
  undefined2 in_stack_00000008;
  
  iVar1 = *(int *)(*(int *)0x259 + 0x14);
  if (in_BX == 0) {
LAB_4011_1544:
    FUN_4011_7cc4();
  }
  else {
    iVar2 = 0xe96;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      iVar2 = iVar2 + 0x10;
    }
    *(int *)0x25b = iVar2;
    if (in_AX != 0x32) {
      while (in_AX != *(int *)(*(int *)0x25b + 4)) {
        in_BX = in_BX + -1;
        if (in_BX == 0) goto LAB_4011_1544;
        *(int *)0x25b = *(int *)0x25b + 0x10;
      }
    }
    if ((*(int *)0xd == 0x4002) && (*(int *)(*(int *)0x25b + 2) != 1)) {
      out(*(int *)0x268 + 8,
          (byte)*(undefined2 *)(*(int *)0x259 + 0x46) | (byte)*(undefined2 *)(*(int *)0x259 + 0x48)
          | (byte)*(undefined2 *)(*(int *)0x259 + 0x4a) |
          (byte)*(undefined2 *)(*(int *)0x259 + 0x4c) | (byte)*(undefined2 *)(*(int *)0x259 + 0x4e))
      ;
      *(undefined2 *)(*(int *)0x25b + 2) = 1;
    }
  }
  return in_stack_00000008;
}



// Function: FUN_4011_16a1 @ 4011:16a1

undefined2 __cdecl16near FUN_4011_16a1(undefined2 param_1)

{
  code *pcVar1;
  uint in_AX;
  bool bVar2;
  
  bVar2 = (in_AX >> 3 & 1) != 0;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (bVar2) {
    FUN_4011_7cc4();
  }
  return param_1;
}



// Function: FUN_4011_16be @ 4011:16be

void __cdecl16near FUN_4011_16be(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// Function: FUN_4011_16c5 @ 4011:16c5

undefined4 __cdecl16near FUN_4011_16c5(void)

{
  uint in_AX;
  uint in_DX;
  
  return CONCAT22((in_DX >> 0xc) + (uint)CARRY2(in_AX,in_DX * 0x10),in_AX + in_DX * 0x10);
}



// Function: FUN_4011_16da @ 4011:16da

ulong __cdecl16near FUN_4011_16da(void)

{
  uint in_AX;
  int in_DX;
  
  return CONCAT22(in_DX + (in_AX >> 4),in_AX) & 0xffff000f;
}



// Function: FUN_4011_16ec @ 4011:16ec

void __cdecl16near FUN_4011_16ec(void)

{
  return;
}



// Function: FUN_4011_16fd @ 4011:16fd

undefined2 __cdecl16near FUN_4011_16fd(void)

{
  char *pcVar1;
  char cVar2;
  undefined2 in_AX;
  int in_CX;
  char *unaff_SI;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  while( true ) {
    if (in_CX == 0) {
      return in_AX;
    }
    pcVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    cVar2 = *pcVar1;
    pcVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *pcVar1 = cVar2;
    if (cVar2 == '\0') break;
    in_CX = in_CX + -1;
  }
  return in_AX;
}



// Function: FUN_4011_1710 @ 4011:1710

/* WARNING: Removing unreachable block (ram,0x00041840) */
/* WARNING: Removing unreachable block (ram,0x0004184b) */
/* WARNING: Removing unreachable block (ram,0x00041850) */
/* WARNING: Removing unreachable block (ram,0x00041870) */
/* WARNING: Removing unreachable block (ram,0x0004185f) */
/* WARNING: Removing unreachable block (ram,0x00041865) */
/* WARNING: Removing unreachable block (ram,0x0004186a) */
/* WARNING: Removing unreachable block (ram,0x0004186b) */
/* WARNING: Removing unreachable block (ram,0x00041883) */
/* WARNING: Removing unreachable block (ram,0x00041890) */
/* WARNING: Removing unreachable block (ram,0x00041894) */
/* WARNING: Removing unreachable block (ram,0x0004189f) */
/* WARNING: Removing unreachable block (ram,0x000418a4) */
/* WARNING: Removing unreachable block (ram,0x000418c4) */
/* WARNING: Removing unreachable block (ram,0x000418b3) */
/* WARNING: Removing unreachable block (ram,0x000418b9) */
/* WARNING: Removing unreachable block (ram,0x000418ca) */
/* WARNING: Removing unreachable block (ram,0x000418be) */
/* WARNING: Removing unreachable block (ram,0x000418bf) */
/* WARNING: Removing unreachable block (ram,0x00041876) */
/* WARNING: Removing unreachable block (ram,0x0004187c) */

void __cdecl16near FUN_4011_1710(void)

{
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}



// Function: FUN_4011_17c3 @ 4011:17c3

undefined4 __cdecl16near FUN_4011_17c3(void)

{
  long lVar1;
  undefined2 in_AX;
  uint in_CX;
  int iVar2;
  undefined2 in_DX;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  
  lVar1 = (ulong)*(uint *)0x26da * (ulong)in_CX;
  do {
    do {
      iVar3 = (int)((ulong)lVar1 >> 0x10);
      in(0xfff);
      iVar2 = (int)lVar1 + -1;
      lVar1 = CONCAT22(iVar3,iVar2);
    } while (iVar2 != 0);
    uVar4 = iVar3 - 1;
    lVar1 = (ulong)uVar4 << 0x10;
  } while (-1 < (int)uVar4);
  return CONCAT22(in_DX,in_AX);
}



// Function: FUN_4011_17de @ 4011:17de

undefined2 __cdecl16near FUN_4011_17de(undefined2 param_1)

{
  code *pcVar1;
  undefined2 in_BX;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  *(undefined2 *)0x3b6 = in_BX;
  *(undefined2 *)0x3b8 = unaff_ES;
  return param_1;
}



// Function: FUN_4011_1805 @ 4011:1805

void __cdecl16near FUN_4011_1805(undefined2 param_1)

{
  char *pcVar1;
  undefined2 in_AX;
  uint uVar2;
  int iVar3;
  int iVar4;
  int in_BX;
  uint uVar5;
  int unaff_SI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  char in_CF;
  bool bVar6;
  undefined2 *in_stack_00000000;
  
  uVar2 = CONCAT11((char)((uint)in_AX >> 8),-in_CF);
  pcVar1 = (char *)(in_BX + unaff_SI + -0x2709);
  *pcVar1 = *pcVar1 + -in_CF;
  iVar3 = 0;
  uVar5 = 0x4000;
  while ((uVar5 & uVar2) == 0) {
    uVar5 = uVar5 >> 1;
    iVar3 = iVar3 + 1;
    if (iVar3 == 0xf) goto LAB_4011_1848;
  }
  iVar4 = iVar3 + 9;
  uVar2 = uVar2 & ~uVar5;
  uVar5 = 0;
  do {
    bVar6 = (int)uVar2 < 0;
    uVar2 = uVar2 << 1;
    uVar5 = uVar5 << 1 | (uint)bVar6;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(uint *)0x26d8 = uVar2;
  *(uint *)0x26d6 = *(uint *)0x26d6 | uVar5;
  *(uint *)0x26d6 = *(uint *)0x26d6 | (0x8d - iVar3) * 0x80;
LAB_4011_1848:
  *in_stack_00000000 = *(undefined2 *)0x26d8;
  in_stack_00000000[1] = *(undefined2 *)0x26d6;
  return;
}



// Function: FUN_4011_1985 @ 4011:1985

undefined2 __cdecl16near FUN_4011_1985(void)

{
  undefined2 in_AX;
  
  return in_AX;
}



// Function: FUN_4011_198d @ 4011:198d

undefined2 __cdecl16near FUN_4011_198d(void)

{
  undefined2 in_AX;
  undefined2 unaff_DS;
  
  DAT_3e1d_000f = unaff_DS;
  return in_AX;
}



// Function: FUN_4011_1a67 @ 4011:1a67

char FUN_4011_1a67(void)

{
  char in_AL;
  
  return in_AL + -0x75;
}



// Function: FUN_4011_1ac6 @ 4011:1ac6

undefined1 __cdecl16near FUN_4011_1ac6(void)

{
  byte in_AL;
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = 1 << (in_AL & 0x1f);
  do {
    uVar1 = in(0xfff);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}



// Function: FUN_4011_1ad9 @ 4011:1ad9

undefined4 __cdecl16near FUN_4011_1ad9(void)

{
  char *pcVar1;
  undefined2 in_AX;
  undefined2 in_DX;
  char *unaff_SI;
  undefined2 unaff_DS;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  uint uVar2;
  
  uVar2 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
          (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
          (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1);
  while (pcVar1 = unaff_SI, unaff_SI = unaff_SI + 1, *pcVar1 != '\0') {
    FUN_4011_1b15(uVar2);
  }
  return CONCAT22(in_DX,in_AX);
}



// Function: FUN_4011_1aeb @ 4011:1aeb

undefined4 __cdecl16near FUN_4011_1aeb(void)

{
  uint in_AX;
  undefined2 in_CX;
  int iVar1;
  undefined2 in_stack_00000000;
  
  iVar1 = 0;
  do {
    in_AX = in_AX / 10;
    iVar1 = iVar1 + 1;
  } while (in_AX != 0);
  do {
    FUN_4011_1b09();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return CONCAT22(in_CX,in_stack_00000000);
}



// Function: FUN_4011_1b09 @ 4011:1b09

void __cdecl16near FUN_4011_1b09(void)

{
  FUN_4011_1b15();
  return;
}



// Function: FUN_4011_1b15 @ 4011:1b15

void __cdecl16near FUN_4011_1b15(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// Function: FUN_4011_1b7c @ 4011:1b7c

undefined2 __cdecl16far FUN_4011_1b7c(void)

{
  undefined2 in_DX;
  undefined1 *unaff_SI;
  int unaff_DI;
  undefined2 unaff_DS;
  
  out(*unaff_SI,in_DX);
  *(char *)(unaff_DI + 8) = *(char *)(unaff_DI + 8) + (char)((uint)in_DX >> 8);
  FUN_4011_7cc4();
  return *(undefined2 *)0x264;
}



// Function: FUN_4011_1eb9 @ 4011:1eb9

undefined2 __cdecl16far FUN_4011_1eb9(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int unaff_BP;
  int iVar3;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 in_CF;
  bool bVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  
  *(undefined2 *)0x13 = *(undefined2 *)(unaff_BP + 2);
  *(undefined2 *)0x15 = *(undefined2 *)(unaff_BP + 4);
  FUN_4011_2b88();
  if ((bool)in_CF) goto LAB_4011_2018;
  if ((int)((ulong)*(undefined4 *)(unaff_BP + 6) >> 0x10) != 0) {
    *(undefined2 *)0x2b = *(undefined2 *)*(undefined4 *)(unaff_BP + 6);
    *(undefined2 *)0x2d = 0;
    puVar2 = (undefined2 *)*(undefined4 *)(unaff_BP + 10);
    iVar3 = (int)((ulong)puVar2 >> 0x10);
    if (iVar3 != 0) {
      *(undefined2 *)0x17 = *puVar2;
      *(undefined2 *)0x19 = ((undefined2 *)puVar2)[1];
      puVar2 = (undefined2 *)*(undefined4 *)(unaff_BP + 0xe);
      iVar3 = (int)((ulong)puVar2 >> 0x10);
      if (iVar3 != 0) {
        *(undefined2 *)0x270 = *puVar2;
        *(undefined2 *)0x272 = ((undefined2 *)puVar2)[1];
        *(undefined2 *)0x26e = *(undefined2 *)(unaff_BP + 0x12);
        bVar4 = false;
        if ((*(uint *)(unaff_BP + 0x18) & 0xd7e2) != 0) {
          FUN_4011_7cc4();
          goto LAB_4011_2018;
        }
        FUN_4011_2ad4();
        if (bVar4) goto LAB_4011_2018;
        FUN_4011_7eb6();
        if ((*(int *)0x276 == 1) && (*(int *)0x1d == 1)) {
          FUN_4011_7cc4();
          goto LAB_4011_2018;
        }
        *(undefined2 *)0x61 = 0;
        *(undefined2 *)0x288 = 1;
        uVar5 = *(uint *)0xd < 0x104;
        if (((*(uint *)0xd != 0x104) && (uVar5 = *(uint *)0xd < 0x105, *(uint *)0xd != 0x105)) &&
           (uVar5 = *(uint *)0xd < 0x106, *(uint *)0xd != 0x106)) {
          FUN_4011_7cc4();
          goto LAB_4011_2018;
        }
        uVar6 = FUN_4011_0652();
        *(undefined2 *)0x71 = (int)uVar6;
        *(undefined2 *)0x73 = (int)((ulong)uVar6 >> 0x10);
        FUN_4011_4ada();
        if (!(bool)uVar5) {
          bVar4 = *(int *)0x276 == 0;
          if (*(int *)0x276 == 1) goto LAB_4011_2018;
          FUN_4011_0662();
          if (!bVar4) {
            bVar4 = *(int *)0x1d == 0;
            if (*(int *)0x1d == 1) {
              *(undefined2 *)0x27c = *(undefined2 *)0x2b;
              uVar1 = *(undefined2 *)0x19;
              *(undefined2 *)0x278 = *(undefined2 *)0x17;
              *(undefined2 *)0x27a = uVar1;
              uVar1 = *(undefined2 *)0x73;
              *(undefined2 *)0x27e = *(undefined2 *)0x71;
              *(undefined2 *)0x280 = uVar1;
              *(undefined2 *)0x26a = 0;
              FUN_4011_0510();
              if (bVar4) goto LAB_4011_2012;
            }
            puVar2 = (undefined2 *)*(undefined4 *)(unaff_BP + 6);
            *puVar2 = *(undefined2 *)0x2b;
            ((undefined2 *)puVar2)[1] = *(undefined2 *)0x2d;
            puVar2 = (undefined2 *)*(undefined4 *)(unaff_BP + 10);
            *puVar2 = *(undefined2 *)0x17;
            ((undefined2 *)puVar2)[1] = *(undefined2 *)0x19;
            puVar2 = (undefined2 *)*(undefined4 *)(unaff_BP + 0xe);
            *puVar2 = *(undefined2 *)0x270;
            ((undefined2 *)puVar2)[1] = *(undefined2 *)0x272;
          }
        }
LAB_4011_2012:
        FUN_4011_0661();
        goto LAB_4011_2018;
      }
    }
  }
  FUN_4011_7cc4();
LAB_4011_2018:
  return *(undefined2 *)0x264;
}



// Function: FUN_4011_2076 @ 4011:2076

/* WARNING: Instruction at (ram,0x0004218a) overlaps instruction at (ram,0x00042189)
    */

undefined2 __cdecl16far FUN_4011_2076(void)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 in_CF;
  bool bVar4;
  undefined1 uVar5;
  
  uVar1 = *(undefined2 *)(unaff_BP + 0xe);
  *(undefined2 *)0x26e = uVar1;
  *(undefined2 *)0x3bd = uVar1;
  FUN_4011_1122();
  if (!(bool)in_CF) {
    FUN_4011_115f();
    if (!(bool)in_CF) {
      bVar4 = false;
      if ((*(uint *)(unaff_BP + 0x16) & 0x9f03) == 0) {
        FUN_4011_2ad4();
        if (!bVar4) {
          FUN_4011_7eb6();
          *(undefined2 *)0x61 = 1;
          *(undefined2 *)0x276 = 0;
          *(undefined2 *)0x288 = 0;
          uVar2 = *(uint *)0xd;
          uVar5 = uVar2 < 0x104;
          if (((uVar2 == 0x104) || (uVar5 = uVar2 < 0x105, uVar2 == 0x105)) ||
             (uVar5 = uVar2 < 0x106, uVar2 == 0x106)) {
            FUN_4011_4bce();
          }
          else {
            uVar5 = uVar2 < 0x4006;
            if ((uVar2 == 0x4006) || (uVar5 = uVar2 < 0x4007, uVar2 == 0x4007)) {
              FUN_4011_9adc();
            }
            else {
              uVar5 = (uVar2 & 0xff00) < 0x6000;
              if ((uVar2 & 0xff00) == 0x6000) {
                FUN_4011_696f();
              }
              else {
                FUN_4011_7cc4();
              }
            }
          }
          if (!(bool)uVar5) {
            FUN_4011_0662();
          }
        }
      }
      else {
        FUN_4011_7cc4();
      }
    }
    FUN_4011_7ec7();
    FUN_4011_11a0();
    puVar3 = (undefined2 *)*(undefined4 *)(unaff_BP + 10);
    *puVar3 = *(undefined2 *)0x270;
    ((undefined2 *)puVar3)[1] = *(undefined2 *)0x272;
  }
  return *(undefined2 *)0x264;
}



// Function: FUN_4011_2ad4 @ 4011:2ad4

void __cdecl16near FUN_4011_2ad4(void)

{
  uint in_AX;
  undefined2 uVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  *(uint *)0x276 = (uint)((in_AX & 1) != 0);
  *(uint *)0x1b = (uint)((in_AX & 2) != 0);
  uVar1 = 0;
  if ((in_AX & 4) != 0) {
    uVar1 = 4;
  }
  *(undefined2 *)0x21 = uVar1;
  *(uint *)0x1d = (uint)((in_AX & 8) != 0);
  *(uint *)0x274 = (uint)((in_AX & 0x10) != 0);
  *(uint *)0x28a = (uint)((in_AX & 0x100) != 0);
  *(uint *)0x2a2 = (uint)((in_AX & 0x200) != 0);
  bVar2 = (in_AX & 0x800) != 0;
  if (bVar2) {
    *(undefined2 *)0x274 = 1;
  }
  *(uint *)0x5f = (uint)bVar2;
  *(uint *)0x27 = (uint)((in_AX & 0x1000) != 0);
  *(uint *)0x3bb = (uint)((in_AX & 0x2000) != 0);
  *(uint *)0x3c1 = (uint)((in_AX & 0x4000) != 0);
  *(uint *)0x1f = in_AX & 0xe0;
  return;
}



// Function: FUN_4011_2b88 @ 4011:2b88

void __cdecl16near FUN_4011_2b88(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  bool bVar4;
  
  iVar1 = *(int *)0x13;
  iVar3 = *(int *)0x15;
  iVar2 = *(int *)(*(int *)0x259 + 0xe);
  *(undefined2 *)0x26f6 = 0xffff;
  if ((iVar1 <= iVar3) && (-1 < iVar1)) {
    if (iVar2 <= iVar1) {
      bVar4 = *(uint *)0xd < 0xd01;
      if (*(uint *)0xd == 0xd01) goto LAB_4011_2bcd;
      FUN_4011_2c28();
      if (bVar4) {
        return;
      }
    }
    if (-1 < iVar3) {
      if (iVar3 < iVar2) {
        return;
      }
      FUN_4011_2c28();
      return;
    }
  }
LAB_4011_2bcd:
  FUN_4011_7cc4();
  return;
}



// Function: FUN_4011_2c28 @ 4011:2c28

void __cdecl16near FUN_4011_2c28(void)

{
  uint in_AX;
  int iVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x26f6 = 0xffff;
  if ((*(int *)(*(int *)0x259 + 0x10) == 1) && (0xf < in_AX)) {
    iVar1 = (in_AX >> 4) - 1;
    *(int *)0x26de = iVar1;
    iVar1 = *(int *)(*(int *)0x259 + iVar1 * 2 + 0x24);
    if ((iVar1 == -1) || (iVar1 == -2)) {
      FUN_4011_7cc4();
    }
    else {
      *(int *)0x26f6 = iVar1;
      FUN_4011_14bd();
    }
  }
  else {
    FUN_4011_7cc4();
  }
  return;
}



// Function: FUN_4011_31a6 @ 4011:31a6

void __cdecl16near FUN_4011_31a6(void)

{
  uint in_AX;
  uint in_BX;
  undefined2 unaff_DS;
  
  if (*(int *)0x21 == 4) {
    return;
  }
  if (*(int *)0x28a != 1) {
    if ((in_AX & 1) == 0) {
      if (2 < in_AX) {
        in_AX = in_AX >> 1;
        goto LAB_4011_31de;
      }
    }
    else if ((in_BX & 1) == 0) {
      in_BX = in_BX >> 1;
      goto LAB_4011_31de;
    }
    if (in_BX <= in_AX) {
      in_AX = in_AX >> 1;
    }
  }
LAB_4011_31de:
  out(*(int *)0x268 + 7,0x34);
  out(*(int *)0x268 + 7,0x74);
  out(*(int *)0x268 + 4,(char)in_AX);
  out(*(int *)0x268 + 4,(char)(in_AX >> 8));
  out(*(int *)0x268 + 5,(char)in_BX);
  out(*(int *)0x268 + 5,(char)(in_BX >> 8));
  return;
}



// Function: FUN_4011_4ada @ 4011:4ada

void __cdecl16near FUN_4011_4ada(void)

{
  int iVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  *(undefined2 *)0x3f = 0x200;
  if (*(int *)(*(int *)0x259 + 0x62) != -1) {
    *(int *)0x3f = *(int *)(*(int *)0x259 + 0x62) << 9;
  }
  if ((*(int *)0x2d == 0) && (bVar2 = *(uint *)0x2b < 0x8000, bVar2)) {
    iVar1 = FUN_4011_6122();
    if (bVar2) {
      return;
    }
    bVar2 = false;
    if ((*(int *)0x19 != 0) ||
       (bVar2 = (uint)(iVar1 + *(int *)0x3f) < *(uint *)0x17,
       (uint)(iVar1 + *(int *)0x3f) <= *(uint *)0x17)) {
      FUN_4011_5c5b();
      if (bVar2) {
        return;
      }
      bVar2 = *(int *)0x5f == 0;
      if (*(int *)0x5f == 1) {
        FUN_4011_4b97();
      }
      else {
        FUN_4011_4b44();
        if (bVar2) {
          return;
        }
      }
      FUN_4011_5632();
      return;
    }
  }
  FUN_4011_7cc4();
  return;
}



// Function: FUN_4011_4b44 @ 4011:4b44

void __cdecl16near FUN_4011_4b44(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  
  uVar5 = FUN_4011_16da();
  *(undefined2 *)0x71 = (int)uVar5;
  *(undefined2 *)0x73 = (int)((ulong)uVar5 >> 0x10);
  uVar3 = *(uint *)0x17;
  iVar4 = *(int *)0x19;
  if ((*(uint *)0x3f & uVar3) != 0) {
    uVar2 = uVar3 & ~(*(uint *)0x3f - 1);
    uVar3 = uVar2 + *(uint *)0x3f;
    iVar4 = iVar4 + (uint)CARRY2(uVar2,*(uint *)0x3f);
  }
  uVar2 = iVar4 << 1 | (uint)((int)uVar3 < 0);
  *(int *)0x4f = (uVar3 << 1 & 0xfff) + *(int *)0x71;
  uVar3 = uVar3 << 1 & 0xf000;
  iVar4 = 4;
  do {
    uVar1 = uVar2 & 1;
    uVar2 = uVar2 >> 1;
    uVar3 = uVar3 >> 1 | (uint)(uVar1 != 0) << 0xf;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(int *)0x51 = uVar3 + *(int *)0x73;
  return;
}



// Function: FUN_4011_4b97 @ 4011:4b97

void __cdecl16near FUN_4011_4b97(void)

{
  long lVar1;
  undefined2 unaff_DS;
  undefined1 in_CF;
  
  FUN_4011_13fb();
  if (!(bool)in_CF) {
    lVar1 = (ulong)((*(uint *)(*(int *)0x259 + 0x26) >> 1) * 1000) *
            (ulong)*(uint *)(*(int *)0x259 + 0x24);
    *(undefined2 *)0x4b = (int)lVar1;
    *(undefined2 *)0x4d = (int)((ulong)lVar1 >> 0x10);
    FUN_4011_13fb();
  }
  return;
}



// Function: FUN_4011_4bce @ 4011:4bce

undefined2 __cdecl16near FUN_4011_4bce(void)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint in_BX;
  undefined2 unaff_DS;
  byte in_CF;
  bool bVar7;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  uint uVar8;
  
  FUN_4011_5c5b();
  if ((!(bool)in_CF) && (FUN_4011_6122(), !(bool)in_CF)) {
    *(undefined2 *)0x37 = 1;
    *(undefined2 *)0x49 = 0;
    *(undefined2 *)0x71 = 0;
    FUN_4011_16a1();
    *(uint *)0x73 = in_BX;
  }
  if (!(bool)in_CF) {
    *(undefined2 *)0x47 = 1;
    FUN_4011_507d();
    if (!(bool)in_CF) {
      do {
        *(undefined2 *)0x3c9 = 0;
        *(undefined2 *)0x3cb = 5;
        uVar5 = in_BX;
        while( true ) {
          uVar8 = *(uint *)0x79;
          in_CF = 0;
          in_OF = 0;
          in_SF = (int)uVar8 < 0;
          in_ZF = uVar8 == 0;
          in_PF = (POPCOUNT(uVar8 & 0xff) & 1U) == 0;
          if (!(bool)in_ZF) goto LAB_4011_4cfd;
          in_BX = *(uint *)0x7f;
          uVar8 = *(uint *)0x83;
          in_IF = 1;
          piVar1 = (int *)0x3c9;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            piVar1 = (int *)0x3cb;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              *(undefined2 *)0x3c9 = 0;
              bVar3 = in(*(int *)0x268 + *(int *)0xab);
              cVar4 = in(*(int *)0x268 + *(int *)0xab);
              uVar5 = CONCAT11(cVar4,bVar3);
              in_CF = 0;
              in_OF = 0;
              in_SF = cVar4 < '\0';
              in_ZF = uVar5 == 0;
              in_PF = (POPCOUNT((uint)bVar3) & 1U) == 0;
              if ((bool)in_ZF) {
                FUN_4011_7cc4();
                goto LAB_4011_4cfd;
              }
            }
          }
          if (in_BX != *(uint *)0xc1) break;
          if (*(int *)0x85 == 0x106) {
            bVar3 = in(*(int *)(uVar5 + 0xe) + 2);
          }
          else {
            bVar3 = in(*(int *)0x268 + 0xb);
          }
          in_ZF = (bVar3 & 0x20) == 0;
          if (!(bool)in_ZF) {
            in_OF = 0;
            in_SF = 0;
            in_PF = POPCOUNT(bVar3 & 0x20) == '\0';
            in_CF = 0;
            FUN_4011_7cc4();
            goto LAB_4011_4cfd;
          }
        }
        if (in_BX < *(uint *)0xc1) {
          iVar6 = 0x7c00 - *(int *)0xc1;
          in_BX = 0;
        }
        else {
          iVar6 = in_BX - *(int *)0xc1;
        }
        bVar7 = CARRY2(*(int *)0x71 + *(int *)0xc1,*(uint *)0xc1);
        pcVar2 = (code *)swi(0x21);
        uVar5 = (*pcVar2)();
        if (bVar7) {
          in_CF = 0xfe0b < uVar5;
          in_OF = SCARRY2(uVar5,500);
          uVar5 = uVar5 + 500;
          in_SF = (int)uVar5 < 0;
          in_ZF = uVar5 == 0;
          in_PF = (POPCOUNT(uVar5 & 0xff) & 1U) == 0;
          FUN_4011_7cc4();
          goto LAB_4011_4cfd;
        }
        in_CF = uVar5 < (uint)(iVar6 * 2);
        in_OF = SBORROW2(uVar5,iVar6 * 2);
        uVar5 = uVar5 + iVar6 * -2;
        in_SF = (int)uVar5 < 0;
        in_ZF = uVar5 == 0;
        in_PF = (POPCOUNT(uVar5 & 0xff) & 1U) == 0;
        if (!(bool)in_ZF) {
          FUN_4011_7cc4();
          goto LAB_4011_4cfd;
        }
        *(uint *)0xc1 = in_BX;
        *(undefined2 *)0xbf = 1;
        *(undefined2 *)0x3c9 = 0;
        *(undefined2 *)0x3cb = 5;
        in_CF = 0;
        in_OF = 0;
        in_SF = (int)uVar8 < 0;
        in_ZF = uVar8 == 0;
        in_PF = (POPCOUNT(uVar8 & 0xff) & 1U) == 0;
      } while (!(bool)in_ZF);
      FUN_4011_16be();
    }
  }
LAB_4011_4cfd:
  FUN_4011_068f((uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
                (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
                (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1));
  return *(undefined2 *)0x264;
}



// Function: FUN_4011_507d @ 4011:507d

undefined2 __cdecl16near FUN_4011_507d(void)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined1 extraout_AH;
  undefined1 uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  
  *(undefined2 *)0x3f = 0x200;
  if (*(int *)(*(int *)0x259 + 0x62) != -1) {
    *(int *)0x3f = *(int *)(*(int *)0x259 + 0x62) << 9;
  }
  *(undefined2 *)0x3 = 0;
  *(undefined2 *)0x5 = 0;
  *(undefined2 *)0x7 = 0;
  *(undefined2 *)0x9 = 0;
  *(undefined2 *)0x2b = 0;
  uVar4 = 0;
  if (*(int *)(*(int *)0x259 + 0x5c) != 2) {
    uVar4 = 2;
  }
  *(undefined1 *)0x3ba = uVar4;
  uVar3 = *(undefined2 *)0x73;
  *(undefined2 *)0x75 = *(undefined2 *)0x71;
  *(undefined2 *)0x77 = uVar3;
  bVar5 = *(int *)0xb == 0;
  if ((*(int *)0xb != 1) || (FUN_4011_7cc4(), !bVar5)) {
    if (*(int *)0xd == 0x106) {
      uVar3 = FUN_4011_5223();
      return uVar3;
    }
    uVar4 = 0xfff4 < *(uint *)0x268;
    out(*(uint *)0x268 + 0xb,*(byte *)0x6d & 0x7f);
    *(byte *)0x6d = *(byte *)0x6d & 0x7f;
    FUN_4011_6155();
    FUN_4011_5b6d();
    if ((!(bool)uVar4) && (FUN_4011_7feb(), !(bool)uVar4)) {
      FUN_3e1d_1ba7();
      FUN_4011_198d();
      FUN_4011_5b94();
      if (!(bool)uVar4) {
        bVar5 = 0xfff7 < *(uint *)0x268;
        out(*(uint *)0x268 + 8,0);
        FUN_4011_5311();
        if (!bVar5) {
          bVar1 = *(byte *)0x279b;
          if ((*(int *)0x3c1 != 1) && (*(int *)0x21 != 4)) {
            bVar1 = bVar1 | 1;
          }
          out(*(int *)0x268 + 10,bVar1 | *(byte *)0x3ba);
          bVar1 = in(*(int *)0x268 + 2);
          out(*(int *)0x268 + 2,bVar1);
          bVar5 = *(uint *)0x1f < 0x40;
          if ((*(uint *)0x1f != 0x40) || (bVar1 = FUN_4011_5553(), !bVar5)) {
            if (*(int *)0x279e != 1) {
              if (*(int *)0x1f == 0x60) {
                out(*(int *)0x268 + 0xb,*(byte *)0x6d | 0x10);
                *(byte *)0x6d = *(byte *)0x6d | 0x10;
                FUN_4011_61b3();
              }
              bVar1 = in(*(int *)0x268 + 9);
              bVar1 = bVar1 | 0x80;
              out(*(int *)0x268 + 9,bVar1);
            }
            bVar5 = false;
            if ((*(int *)0x274 == 0) || (bVar1 = FUN_4011_5406(), !bVar5)) {
              uVar4 = 0xfff7 < *(uint *)0x268;
              out(*(uint *)0x268 + 8,bVar1);
              FUN_4011_7e56();
              *(undefined2 *)0xb = 1;
              FUN_4011_7feb();
              FUN_4011_595d();
              if (!(bool)uVar4) {
                bVar1 = in(*(int *)0x268 + 9);
                bVar2 = bVar1 | 2;
                if (*(int *)0x21 != 4) {
                  bVar2 = bVar1 | 3;
                }
                if (*(int *)0x3c1 == 1) {
                  do {
                    bVar1 = in(*(int *)0x268 + 3);
                  } while ((bVar1 & 1) == 0);
                }
                out(*(int *)0x268 + 9,bVar2);
                return CONCAT11(extraout_AH,bVar2);
              }
            }
          }
        }
      }
    }
  }
  uVar3 = FUN_4011_7e0a();
  *(undefined2 *)0xb = 0;
  return uVar3;
}



// Function: FUN_4011_5223 @ 4011:5223

uint __cdecl16near FUN_4011_5223(void)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined2 unaff_DS;
  undefined1 in_CF;
  bool bVar5;
  undefined1 uVar6;
  
  uVar3 = FUN_4011_7feb();
  if ((bool)in_CF) {
    return uVar3;
  }
  FUN_3e1d_1ba7();
  FUN_4011_198d();
  uVar3 = *(uint *)0x13;
  uVar1 = *(uint *)0x15;
  bVar5 = uVar3 < uVar1;
  if (uVar3 == uVar1) {
LAB_4011_5259:
    uVar3 = FUN_4011_5b94();
    if (!bVar5) {
      bVar5 = 0xfffb < *(uint *)0x268;
      out(*(uint *)0x268 + 4,0);
      uVar3 = FUN_4011_5311();
      if (!bVar5) {
        out(*(int *)0x268 + 2,1);
        bVar5 = *(uint *)0x1f < 0x40;
        if ((*(uint *)0x1f != 0x40) || (uVar3 = FUN_4011_5553(), !bVar5)) {
          bVar2 = 0x30;
          out(*(int *)0x268 + 0xb,0x30);
          if (*(int *)0x279e != 1) {
            if (*(int *)0x1f == 0x60) {
              FUN_4011_61b3();
            }
            bVar2 = in(*(int *)0x268 + 5);
            bVar2 = bVar2 | 0x80;
            out(*(int *)0x268 + 5,bVar2);
          }
          bVar5 = false;
          if (*(int *)0x274 != 0) {
            uVar3 = FUN_4011_5406();
            if (bVar5) {
              return uVar3;
            }
            bVar2 = FUN_4011_7feb();
          }
          uVar6 = 0xfffb < *(uint *)0x268;
          out(*(uint *)0x268 + 4,bVar2);
          FUN_4011_7e56();
          *(undefined2 *)0xb = 1;
          FUN_4011_7feb();
          uVar3 = FUN_4011_595d();
          if (!(bool)uVar6) {
            uVar4 = (undefined1)(uVar3 >> 8);
            uVar6 = in(*(int *)0x268 + 5);
            uVar3 = CONCAT11(uVar4,uVar6);
            if ((*(int *)0x1f == 0x20) || (uVar3 = CONCAT11(uVar4,uVar6) | 2, *(int *)0x21 != 4)) {
              uVar3 = uVar3 | 1;
            }
            out(*(int *)0x268 + 5,(char)uVar3);
          }
        }
      }
    }
  }
  else {
    if ((uVar3 & 1) == 0) {
      bVar5 = uVar3 == 0;
      if ((uVar3 == 1) || (bVar5 = false, (uVar1 - uVar3 & 1) != 0)) goto LAB_4011_5259;
    }
    uVar3 = FUN_4011_7cc4();
  }
  return uVar3;
}



// Function: FUN_4011_5311 @ 4011:5311

void __cdecl16near FUN_4011_5311(void)

{
  char cVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x279e = 0;
  if (*(int *)0xd == 0x106) {
    uVar2 = *(uint *)0x11;
    cVar1 = '0';
    if (uVar2 != 0xf) {
      if (uVar2 < 10) {
        cVar1 = '0';
        if ((((uVar2 != 0xf) && (cVar1 = '@', uVar2 != 2)) && (cVar1 = 'P', uVar2 != 3)) &&
           (cVar1 = '`', uVar2 != 5)) {
          cVar1 = 'p';
        }
      }
      else {
        cVar1 = ((char)uVar2 + -10) * '\x10';
      }
    }
    out(*(int *)0x268 + 5,cVar1);
  }
  else {
    uVar2 = *(uint *)0x11;
    if (9 < uVar2) {
      uVar2 = uVar2 - 10;
    }
    out(*(int *)0x268 + 9,(char)(uVar2 << 4));
  }
  if ((((*(int *)0x288 != 1) && (*(int *)0x61 != 1)) &&
      ((*(int *)0x1f != 0x40 && ((*(int *)0x1f != 0x20 && (*(int *)0x5f == 1)))))) &&
     ((*(uint *)0xd & 0xff00) == 0xe00)) {
    FUN_4011_13fb();
    *(undefined2 *)0x11 = *(undefined2 *)(*(int *)0x259 + 4);
    FUN_4011_13fb();
    *(undefined2 *)0x279e = 1;
  }
  FUN_4011_7d02();
  return;
}



// Function: FUN_4011_5406 @ 4011:5406

void __cdecl16near FUN_4011_5406(void)

{
  undefined2 uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined2 unaff_DS;
  bool bVar7;
  
  if (*(int *)0x274 == 0) {
    return;
  }
  uVar6 = *(uint *)0xd;
  if ((uVar6 == 0x105) || (uVar6 == 0x104)) {
    out(*(int *)0x268 + 0xb,*(byte *)0x6d | 0x80);
    *(byte *)0x6d = *(byte *)0x6d | 0x80;
  }
  else {
    if (uVar6 != 0x106) {
      if (((uVar6 == 0xe04) || (uVar6 == 0xe05)) || (uVar6 = uVar6 & 0xff00, uVar6 != 0xe00)) {
        *(undefined2 *)0x274 = 0;
        return;
      }
      goto LAB_4011_547d;
    }
    bVar4 = in(*(int *)0x268 + 2);
    bVar3 = bVar4 | 4;
    if (*(int *)0x5f == 1) {
      *(int *)0x3f = *(int *)0x3f + 1;
      bVar3 = bVar4 | 0x14;
    }
    out(*(int *)0x268 + 2,bVar3);
  }
  *(undefined2 *)0x23 = 1;
LAB_4011_547d:
  bVar7 = *(int *)0x5f == 0;
  if (*(int *)0x5f == 1) {
    *(undefined2 *)0x279c = *(undefined2 *)0x268;
    FUN_4011_13fb();
    if (!bVar7) {
      uVar1 = *(undefined2 *)*(undefined2 *)0x259;
      *(undefined2 *)0x39 = uVar1;
      *(undefined2 *)0x268 = uVar1;
      if (*(int *)0x288 == 1) {
        FUN_4011_7aa3();
      }
      FUN_4011_7bb5();
      lVar2 = (ulong)(uint)(*(int *)(*(int *)0x259 + 0x26) * 0x100) *
              (ulong)*(uint *)(*(int *)0x259 + 0x24);
      uVar5 = (uint)((ulong)lVar2 >> 0x10);
      if ((*(uint *)0x19 < uVar5) || ((*(uint *)0x19 <= uVar5 && (*(uint *)0x17 <= (uint)lVar2)))) {
        if ((uVar6 & 0xff00) == 0xe00) {
          bVar4 = in(*(int *)0x279c + 9);
          out(*(int *)0x279c + 9,bVar4 & 0x7f);
          FUN_4011_7b26();
          bVar4 = (byte)*(undefined2 *)0x11;
          if (bVar4 < 10) {
            if (bVar4 == 2) {
              bVar4 = 4;
            }
          }
          else if (bVar4 == 0xf) {
            bVar4 = 3;
          }
          else {
            bVar4 = bVar4 - 10;
          }
          out(*(int *)0x268 + 2,bVar4 << 4 | 0x80);
        }
        FUN_4011_13fb();
        *(undefined2 *)0x268 = *(undefined2 *)0x279c;
      }
      else {
        FUN_4011_7cc4();
      }
    }
  }
  return;
}



// Function: FUN_4011_5553 @ 4011:5553

void __cdecl16near FUN_4011_5553(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  
  out(*(int *)0x268 + 8,0);
  bVar1 = in(*(int *)0x268 + 9);
  bVar2 = bVar1 | 4;
  out(*(int *)0x268 + 9,bVar2);
  if ((*(int *)0x1b == 0) || (*(int *)0x45 == 1)) {
    bVar2 = bVar1 | 0x84;
  }
  out(*(int *)0x268 + 9,bVar2);
  uVar4 = FUN_4011_16c5();
  *(undefined2 *)0x77 = (int)((ulong)uVar4 >> 0x10);
  *(undefined2 *)0x75 = (int)uVar4;
  uVar3 = *(int *)0x17 << 1;
  if ((CARRY2(uVar3,*(uint *)0x75)) || ((*(uint *)0x19 & 0x7fff) != 0 || *(int *)0x17 < 0)) {
    *(undefined2 *)0x45 = 1;
    if ((*(int *)0xd == 0x101) || (*(int *)0xd == 0x103)) {
      FUN_4011_7cc4();
    }
    uVar3 = -*(int *)0x75;
  }
  *(uint *)0x3b = uVar3;
  out(10,*(byte *)0x6b | 4);
  out(*(undefined2 *)0x65,(char)*(undefined2 *)0x77);
  out(0xc,(char)*(undefined2 *)0x77);
  out(*(undefined2 *)0x63,(char)*(undefined2 *)0x75);
  out(*(undefined2 *)0x63,(char)((uint)*(undefined2 *)0x75 >> 8));
  out(*(undefined2 *)0x67,(char)(*(int *)0x3b + -1));
  out(*(undefined2 *)0x67,(char)((uint)(*(int *)0x3b + -1) >> 8));
  bVar1 = *(byte *)0x6b;
  if ((*(int *)0x1b == 1) && (*(int *)0x45 != 1)) {
    bVar1 = bVar1 | 0x10;
  }
  out(0xb,bVar1 | 0x44);
  out(10,*(undefined1 *)0x6b);
  FUN_4011_7feb();
  return;
}



// Function: FUN_4011_5632 @ 4011:5632

byte __cdecl16near FUN_4011_5632(void)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined1 uVar6;
  
  bVar5 = *(int *)0xb == 0;
  if ((*(int *)0xb != 1) || (bVar2 = FUN_4011_7cc4(), !bVar5)) {
    *(undefined2 *)0x33 = 0x10;
    if (*(int *)0xd == 0x106) {
      *(undefined2 *)0x33 = 8;
    }
    uVar3 = 0;
    uVar6 = *(uint *)(*(int *)0x259 + 0x5c) < 2;
    if (*(uint *)(*(int *)0x259 + 0x5c) != 2) {
      uVar3 = 2;
    }
    *(undefined1 *)0x3ba = uVar3;
    *(undefined2 *)0x1 = 0;
    bVar2 = FUN_4011_5b6d();
    if (!(bool)uVar6) {
      FUN_4011_7feb();
      bVar2 = FUN_4011_595d();
      if ((!(bool)uVar6) && (bVar2 = FUN_4011_5b94(), !(bool)uVar6)) {
        FUN_4011_198d();
        bVar5 = false;
        if (-1 < *(int *)0x2b) goto LAB_4011_56a3;
        do {
          bVar2 = FUN_4011_7cc4();
          if (bVar5) goto LAB_4011_5955;
LAB_4011_56a3:
        } while ((*(int *)0x19 == 0) &&
                (bVar5 = (uint)(*(int *)0x2b + *(int *)0x3f) < *(uint *)0x17,
                *(uint *)0x17 < (uint)(*(int *)0x2b + *(int *)0x3f)));
        bVar2 = in(*(int *)0x268 + 3);
        if ((bVar2 & 1) == 0) {
          *(int *)0x77 = (*(uint *)0x71 >> 4) + *(int *)0x73;
          uVar1 = *(uint *)0x71;
          *(uint *)0x75 = uVar1 & 0xf;
          *(uint *)0x71 = uVar1 & 0xf;
          *(undefined2 *)0x73 = *(undefined2 *)0x77;
          *(undefined2 *)0x3 = 0;
          *(undefined2 *)0x5 = 0;
          *(undefined2 *)0x7 = 0;
          *(undefined2 *)0x9 = 0;
          if (*(int *)0xd == 0x106) {
            bVar5 = 0xfffd < *(uint *)0x268;
            out(*(uint *)0x268 + 2,*(undefined1 *)0x3ba);
          }
          else {
            out(*(int *)0x268 + 10,*(byte *)0x279b | 1 | *(byte *)0x3ba);
            bVar2 = (byte)*(undefined2 *)0x26e | 0x10;
            out(*(int *)0x268 + 0xb,bVar2);
            *(byte *)0x6d = bVar2;
            bVar5 = 0xfff7 < *(uint *)0x268;
            out(*(uint *)0x268 + 8,bVar2);
          }
          bVar2 = FUN_4011_5311();
          if (!bVar5) {
            FUN_4011_7e56();
            if (*(int *)0xd != 0x106) {
              uVar3 = in(*(int *)0x268 + 2);
              out(*(int *)0x268 + 2,uVar3);
            }
            *(undefined2 *)0x75 = *(undefined2 *)0x71;
            *(undefined2 *)0x3 = 0;
            *(undefined2 *)0x5 = 0;
            *(undefined2 *)0x7 = 0;
            *(undefined2 *)0x9 = 0;
            FUN_4011_7feb();
            if (*(int *)0xd == 0x106) {
              bVar2 = in(*(int *)0x268 + 2);
              out(*(int *)0x268 + 2,bVar2 & 0xf7);
              out(*(int *)0x268 + 2,bVar2 & 0xf7 | 8);
              out(*(int *)0x268 + 0xb,0x7a);
              out(*(int *)0x268 + 0xb,0xb0);
              out(*(int *)0x268 + 10,(char)*(undefined2 *)0x3f);
              out(*(int *)0x268 + 10,(char)((uint)*(undefined2 *)0x3f >> 8));
              out(*(int *)0x268 + 0xb,0x30);
              out(*(int *)0x268 + 8,(char)(*(int *)0x19 + 1));
              out(*(int *)0x268 + 8,(char)((uint)(*(int *)0x19 + 1) >> 8));
              out(*(int *)0x268 + 0xb,0x70);
              out(*(int *)0x268 + 0xb,0x7a);
              iVar4 = (*(int *)0x17 - *(int *)0x2b) + -1;
              out(*(int *)0x268 + 9,(char)iVar4);
              out(*(int *)0x268 + 9,(char)((uint)iVar4 >> 8));
            }
            else {
              out(*(int *)0x268 + 0xb,*(byte *)0x6d & 0xbf);
              bVar2 = *(byte *)0x6d & 0xbf | 0x40;
              out(*(int *)0x268 + 0xb,bVar2);
              *(byte *)0x6d = bVar2;
              out(*(int *)0x268 + 0x13,0x7a);
              out(*(int *)0x268 + 0x13,0xb0);
              out(*(int *)0x268 + 0x12,(char)*(undefined2 *)0x3f);
              out(*(int *)0x268 + 0x12,(char)((uint)*(undefined2 *)0x3f >> 8));
              out(*(int *)0x268 + 0x13,0x30);
              out(*(int *)0x268 + 0x10,(char)(*(int *)0x19 + 1));
              out(*(int *)0x268 + 0x10,(char)((uint)(*(int *)0x19 + 1) >> 8));
              out(*(int *)0x268 + 0x13,0x70);
              out(*(int *)0x268 + 0x13,0x7a);
              iVar4 = (*(int *)0x17 - *(int *)0x2b) + -1;
              out(*(int *)0x268 + 0x11,(char)iVar4);
              out(*(int *)0x268 + 0x11,(char)((uint)iVar4 >> 8));
            }
            uVar3 = FUN_4011_5406();
            if (*(int *)0x5f == 1) {
              FUN_4011_7feb();
              *(undefined2 *)0x268 = *(undefined2 *)0x39;
              uVar3 = FUN_4011_7b9d();
              *(undefined2 *)0x268 = *(undefined2 *)0x279c;
            }
            if (*(int *)0xd == 0x106) {
              out(*(int *)0x268 + 4,uVar3);
              bVar2 = in(*(int *)0x268 + 5);
              out(*(int *)0x268 + 5,bVar2 | 0x80);
              bVar2 = bVar2 | 0x83;
              out(*(int *)0x268 + 5,bVar2);
            }
            else {
              out(*(int *)0x268 + 8,uVar3);
              bVar2 = in(*(int *)0x268 + 9);
              out(*(int *)0x268 + 9,bVar2 | 3);
              out(*(int *)0x268 + 9,bVar2 | 0x83);
              bVar2 = *(byte *)0x279b | *(byte *)0x3ba;
              out(*(int *)0x268 + 10,bVar2);
            }
            *(undefined2 *)0xb = 1;
            return bVar2;
          }
        }
        else {
          *(undefined2 *)0x2b = 0;
          bVar2 = FUN_4011_7cc4();
        }
      }
    }
  }
LAB_4011_5955:
  *(undefined2 *)0xb = 0;
  return bVar2;
}



// Function: FUN_4011_595d @ 4011:595d

undefined2 __cdecl16near FUN_4011_595d(void)

{
  undefined2 uVar1;
  undefined2 in_AX;
  uint uVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  
  if (*(int *)0x21 == 4) {
    return in_AX;
  }
  uVar1 = *(undefined2 *)0x272;
  *(undefined2 *)0x278f = *(undefined2 *)0x270;
  *(undefined2 *)0x2791 = uVar1;
  if (*(int *)0x27 != 1) {
    uVar3 = FUN_4011_85ac();
    *(undefined2 *)0x278f = (int)uVar3;
    *(undefined2 *)0x2791 = (int)((ulong)uVar3 >> 0x10);
  }
  if (*(int *)(*(int *)0x259 + 10) == 10) {
    *(undefined2 *)0x2787 = 0x9680;
    *(undefined2 *)0x2789 = 0x98;
    *(undefined2 *)0x278b = 0;
    *(undefined2 *)0x278d = 0;
  }
  else {
    *(undefined2 *)0x2787 = 0x4240;
    *(undefined2 *)0x2789 = 0xf;
    *(undefined2 *)0x278b = 0;
    *(undefined2 *)0x278d = 0;
  }
  FUN_4011_84c8();
  *(undefined2 *)0x2793 = *(undefined2 *)0x2787;
  *(undefined2 *)0x2795 = *(undefined2 *)0x2789;
  *(undefined2 *)0x2797 = 1;
  do {
    do {
      *(int *)0x2797 = *(int *)0x2797 + 1;
      *(undefined2 *)0x2787 = *(undefined2 *)0x2793;
      *(undefined2 *)0x2789 = *(undefined2 *)0x2795;
      FUN_4011_84c8();
    } while (*(int *)0x2789 != 0);
  } while (*(int *)0x2787 < 0);
  *(undefined2 *)0x2799 = *(undefined2 *)0x2787;
  if (*(int *)0x2797 != 1) {
    if (*(int *)0x2799 != 1) {
      uVar2 = *(uint *)0xd & 0xff00;
      if ((uVar2 == 0x100) || (uVar2 == 0xe00)) {
        FUN_4011_5b2e();
      }
      else if (uVar2 == 0xc00) {
        FUN_4011_6f19();
      }
      else if (uVar2 == 0x500) {
        FUN_4011_31a6();
      }
      else if (uVar2 == 0xa00) {
        FUN_4011_7669();
      }
      else if (uVar2 == 0x6000) {
        FUN_4011_7274();
      }
      else {
        FUN_4011_9da5();
      }
      if (*(int *)(*(int *)0x259 + 10) == 10) {
        *(undefined2 *)0x2787 = 0x9680;
        *(undefined2 *)0x2789 = 0x98;
        *(undefined2 *)0x278b = 0;
        *(undefined2 *)0x278d = 0;
      }
      else {
        *(undefined2 *)0x2787 = 0x4240;
        *(undefined2 *)0x2789 = 0xf;
        *(undefined2 *)0x278b = 0;
        *(undefined2 *)0x278d = 0;
      }
      FUN_4011_84c8();
      uVar3 = CONCAT22(*(undefined2 *)0x2789,*(undefined2 *)0x2787);
      if (*(int *)0x27 != 1) {
        uVar3 = FUN_4011_845c();
      }
      *(undefined2 *)0x270 = (int)uVar3;
      *(undefined2 *)0x272 = (int)((ulong)uVar3 >> 0x10);
      return in_AX;
    }
    if (*(int *)(*(int *)0x259 + 10) != 10) {
      FUN_4011_7cc4();
      return in_AX;
    }
  }
  FUN_4011_7cc4();
  return in_AX;
}



// Function: FUN_4011_5b2e @ 4011:5b2e

undefined4 __cdecl16near FUN_4011_5b2e(void)

{
  undefined2 in_AX;
  undefined1 uVar1;
  undefined2 in_DX;
  undefined2 in_BX;
  undefined2 unaff_DS;
  
  uVar1 = (undefined1)((uint)in_AX >> 8);
  out(*(int *)0x268 + 0xf,0xb4);
  out(*(int *)0x268 + 0xf,0x74);
  out(*(int *)0x268 + 0xe,(char)in_BX);
  out(*(int *)0x268 + 0xe,(char)((uint)in_BX >> 8));
  out(*(int *)0x268 + 0xd,(char)in_AX);
  out(*(int *)0x268 + 0xd,uVar1);
  return CONCAT22(in_DX,CONCAT11(uVar1,0x74));
}



// Function: FUN_4011_5b6d @ 4011:5b6d

void __cdecl16near FUN_4011_5b6d(void)

{
  undefined2 unaff_DS;
  
  if ((*(int *)0x29 == 0) && (*(int *)0xd != 0x106)) {
    out(*(int *)0x268 + 2,(char)*(undefined2 *)0x13 + (char)(*(int *)0x15 << 4));
  }
  return;
}



// Function: FUN_4011_5b94 @ 4011:5b94

void __cdecl16near FUN_4011_5b94(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined1 uVar6;
  
  bVar5 = false;
  if (*(int *)0x29 == 0) {
    uVar2 = FUN_4011_608e();
    uVar6 = true;
    if (bVar5) goto LAB_4011_5be9;
    if ((*(uint *)0xd & 0xff00) == 0xe00) goto LAB_4011_5beb;
    if ((((*(int *)0xd == 0x103) || (*(int *)0xd == 0x104)) || (*(int *)0xd == 0x105)) ||
       (*(int *)0xd == 0x106)) {
      uVar6 = false;
      if (((int)uVar2 < 0) || (uVar6 = uVar2 < 8, 8 < (int)uVar2)) {
        do {
          uVar2 = FUN_4011_7cc4();
LAB_4011_5be9:
          if ((bool)uVar6) {
            return;
          }
LAB_4011_5beb:
          uVar6 = false;
        } while (((int)uVar2 < 0) || (uVar6 = uVar2 < 3, 3 < (int)uVar2));
      }
      if (*(int *)0xd == 0x106) {
        uVar3 = *(uint *)0x13;
        cVar4 = '\0';
        do {
          out(*(int *)0x268 + 6,cVar4);
          out(*(int *)0x268 + 7,(byte)uVar2 * '\x10' + (char)uVar3);
          cVar4 = cVar4 + '\x01';
          uVar3 = uVar3 + 1;
        } while (uVar3 <= *(uint *)0x15);
      }
      else {
        bVar1 = *(byte *)0x6d & 0xf0 | (byte)uVar2;
        out(*(int *)0x268 + 0xb,bVar1);
        *(byte *)0x6d = bVar1;
        if (*(int *)0x26e != *(int *)0x3aa) {
          *(int *)0x3aa = *(int *)0x26e;
          FUN_4011_17c3();
        }
      }
    }
  }
  return;
}



// Function: FUN_4011_5c5b @ 4011:5c5b

void __cdecl16near FUN_4011_5c5b(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  if ((*(int *)0x19 < 0) || ((*(int *)0x19 == 0 && (*(int *)0x17 == 0)))) {
    FUN_4011_7cc4();
  }
  else {
    *(undefined2 *)0x25 = 1;
    bVar2 = *(uint *)0xd < 0xe06;
    if ((*(uint *)0xd != 0xe06) && (bVar2 = *(uint *)0xd < 0xe03, *(uint *)0xd != 0xe03)) {
      *(undefined2 *)0x25 = 0;
    }
    FUN_4011_5d8c();
    if (((!bVar2) && (FUN_4011_5ed2(), !bVar2)) &&
       ((*(int *)0x1b != 1 ||
        (((bVar2 = *(int *)0x276 == 0, *(int *)0x276 == 1 || (FUN_4011_7cc4(), !bVar2)) &&
         ((*(int *)0x1f != 0x60 ||
          (((*(int *)0x19 != 0 || (bVar2 = *(uint *)0x17 < 0x200, !bVar2)) ||
           (FUN_4011_7cc4(), !bVar2)))))))))) {
      if (((*(int *)0x1d == 1) && (*(int *)0x1f == 0x40)) && (*(int *)0x276 == 1)) {
        FUN_4011_7cc4();
      }
      else if ((((*(int *)0x274 != 1) || (uVar1 = *(uint *)0xd, uVar1 == 0x105)) ||
               ((uVar1 == 0x104 || (uVar1 == 0x106)))) ||
              ((((bVar2 = uVar1 < 0xe04, uVar1 != 0xe04 && (bVar2 = uVar1 < 0xe05, uVar1 != 0xe05))
                && (bVar2 = (uVar1 & 0xff00) < 0xe00, (uVar1 & 0xff00) == 0xe00)) ||
               (FUN_4011_7cc4(), !bVar2)))) {
        if (*(int *)0x5f == 1) {
          *(undefined2 *)0x2a8 = *(undefined2 *)(*(int *)0x259 + 0x22);
          *(undefined2 *)0x1f = 0x60;
          if (*(int *)0x1d == 1) {
            FUN_4011_7cc4();
            return;
          }
        }
        if ((*(int *)0x1d == 1) && (*(int *)0x25 == 1)) {
          FUN_4011_7cc4();
        }
        else if ((*(int *)0x27 == 1) &&
                ((bVar2 = (*(uint *)0xd & 0xff00) < 0xe00, (*(uint *)0xd & 0xff00) == 0xe00 ||
                 (FUN_4011_7cc4(), !bVar2)))) {
          *(undefined2 *)0x1f = 0x40;
        }
      }
    }
  }
  return;
}



// Function: FUN_4011_5d8c @ 4011:5d8c

void __cdecl16near FUN_4011_5d8c(void)

{
  byte bVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  if (*(int *)0xd == 0x106) {
    if ((*(int *)0x1f != 0x40) && (*(int *)0x1f != 0x20)) {
      *(undefined2 *)0x1f = 0x60;
      return;
    }
LAB_4011_5dc0:
    FUN_4011_7cc4();
    return;
  }
  if ((*(int *)0x29 != 0) && ((*(int *)0x1f == 0x20 || (*(int *)0x1f == 0x40)))) goto LAB_4011_5dc0;
  if ((*(int *)0x61 == 1) || (*(int *)0x5f == 1)) {
    if (*(int *)0x1f == 0x60) goto LAB_4011_5e3d;
    if (*(int *)0x1f != 0) {
      FUN_4011_7cc4();
      return;
    }
  }
  if (((*(int *)0x1f == 0) &&
      ((*(undefined2 *)0x1f = 0x20, *(int *)0x272 != 0 || (1000 < *(uint *)0x270)))) &&
     ((*(undefined2 *)0x1f = 0x40, *(int *)0xd == 0x104 ||
      ((*(int *)0xd == 0x105 || (*(int *)0xd == 0x106)))))) {
    *(undefined2 *)0x1f = 0x60;
  }
  if (*(int *)0x61 == 1) {
    *(undefined2 *)0x1f = 0x60;
  }
LAB_4011_5e3d:
  if ((((*(int *)0x1f == 0x60) && (*(int *)0xd != 0x104)) && (*(int *)0xd != 0x105)) &&
     (bVar2 = *(uint *)0xd < 0x106, *(uint *)0xd != 0x106)) {
    FUN_4011_7cc4();
    *(undefined2 *)0x1f = 0x40;
    if (bVar2) {
      return;
    }
  }
  while( true ) {
    if (*(int *)0x1f == 0x60) {
      out(*(int *)0x268 + 0xb,*(byte *)0x6d | 0x10);
      bVar1 = in(*(int *)0x268 + 0xb);
      if ((bVar1 & 0x10) == 0) {
        *(byte *)0x6d = *(byte *)0x6d & 0xef;
        FUN_4011_7cc4();
        *(undefined2 *)0x1f = 0x40;
      }
    }
    if ((*(int *)0x29 == 0) || ((*(int *)0x1f != 0x40 && (*(int *)0x1f != 0x20)))) break;
    *(undefined2 *)0x1f = 0x60;
  }
  if (*(int *)0xd != 0x106) {
    return;
  }
  if (*(int *)0x21 != 4) {
    return;
  }
  *(undefined2 *)0x1f = 0x60;
  return;
}



// Function: FUN_4011_5ed2 @ 4011:5ed2

void __cdecl16near FUN_4011_5ed2(void)

{
  undefined2 unaff_DS;
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  *(undefined2 *)0x27d8 = 0;
  if (*(int *)0x21 != 4) {
    if ((*(int *)0x272 < 0) || ((*(int *)0x272 == 0 && (*(int *)0x270 == 0)))) {
      bVar1 = false;
      FUN_4011_7cc4();
      if (bVar1) {
        return;
      }
    }
    if (*(int *)0xd == 0x106) {
      if (((*(int *)0x1f == 0x60) && (*(int *)0x5f != 1)) &&
         ((*(int *)0x19 != 0 || (0x400 < *(uint *)0x17)))) {
        *(undefined2 *)0x27d8 = 2;
      }
    }
    else if (((((*(int *)0xd != 0x104) && (*(int *)0xd != 0x105)) && (*(int *)0xd != 0x103)) &&
             ((*(int *)0xd != 0x102 && (*(int *)0xd != 0x4006)))) &&
            ((*(int *)0xd != 0x4007 && ((*(int *)0xd == 0x104 || (*(int *)0xd == 0x105)))))) {
      *(undefined2 *)0x27d8 = 1;
    }
    uVar2 = *(int *)0x27 == 0;
    uVar3 = *(int *)0x27 == 1;
    if (!(bool)uVar3) {
      uVar2 = false;
      uVar3 = false;
      if (*(int *)0x29 == 0) {
        uVar2 = *(uint *)0x15 < *(uint *)0x13;
        uVar3 = *(uint *)0x15 - *(uint *)0x13 == -1;
      }
      FUN_4011_85ac();
    }
    FUN_4011_16ec();
    if (!(bool)uVar2 && !(bool)uVar3) {
      if (*(int *)0x27d8 == 1) {
        FUN_4011_7cc4();
      }
      else if (*(int *)0x27d8 == 2) {
        FUN_4011_7cc4();
      }
      else {
        FUN_4011_7cc4();
      }
    }
  }
  return;
}



// Function: FUN_4011_608e @ 4011:608e

void __cdecl16near FUN_4011_608e(void)

{
  uint in_AX;
  uint *puVar1;
  undefined2 unaff_DS;
  
  if ((*(uint *)0xd & 0xff00) == 0xe00) {
    if (in_AX < 100) {
      if (*(int *)(*(int *)0x259 + 0xc) != 0x12d) goto LAB_4011_6110;
    }
    else if (*(int *)(*(int *)0x259 + 0xc) != 300) goto LAB_4011_6110;
    if ((*(int *)0xd == 0xe01) || (*(int *)0xd == 0xe04)) {
      puVar1 = (uint *)0x2765;
    }
    else {
      puVar1 = (uint *)0x2743;
    }
  }
  else {
    if ((((*(int *)0xd != 0x103) && (*(int *)0xd != 0x104)) && (*(int *)0xd != 0x105)) &&
       (*(int *)0xd != 0x106)) {
LAB_4011_611b:
      *(uint *)0x26e = in_AX;
      return;
    }
    puVar1 = (uint *)0x271d;
  }
  for (; *puVar1 != 0xffff; puVar1 = puVar1 + 2) {
    if (*puVar1 == in_AX) {
      in_AX = puVar1[1];
      goto LAB_4011_611b;
    }
  }
LAB_4011_6110:
  FUN_4011_7cc4();
  return;
}



// Function: FUN_4011_6122 @ 4011:6122

undefined2 __cdecl16near FUN_4011_6122(void)

{
  byte bVar1;
  undefined2 in_AX;
  undefined2 unaff_DS;
  
  if (*(int *)0xd != 0x106) {
    out(*(int *)0x268 + 0xb,*(byte *)0x6d | 0x10);
    *(byte *)0x6d = *(byte *)0x6d | 0x10;
    bVar1 = in(*(int *)0x268 + 0xb);
    if ((bVar1 & 0x10) == 0) {
      *(byte *)0x6d = *(byte *)0x6d & 0xef;
      FUN_4011_7cc4();
    }
  }
  return in_AX;
}



// Function: FUN_4011_6155 @ 4011:6155

void __cdecl16near FUN_4011_6155(void)

{
  undefined2 unaff_DS;
  
  *(undefined1 *)0x279b = 0;
  if (((*(uint *)0xd & 0xff00) == 0xe00) && (*(int *)0x27 == 1)) {
    *(char *)0x279b = ((char)*(undefined2 *)0x15 - (char)*(undefined2 *)0x13) * '\x10';
    out(*(int *)0x268 + 0x406,0x40);
    out(*(int *)0x268 + 0x405,0x40);
    FUN_4011_13fb();
    *(undefined2 *)0x11 = *(undefined2 *)(*(int *)0x259 + 4);
    FUN_4011_13fb();
  }
  else {
    *(undefined2 *)0x27 = 0;
  }
  return;
}



// Function: FUN_4011_61b3 @ 4011:61b3

void __cdecl16near FUN_4011_61b3(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  uVar1 = *(uint *)0xd;
  *(undefined2 *)0x33 = 0x10;
  if (uVar1 == 0x106) {
    *(undefined2 *)0x33 = 8;
  }
  if (((*(int *)0x5f == 1) && ((uVar1 & 0xff00) == 0xe00)) && (*(int *)0x17 != 0)) {
    *(undefined2 *)0x17 = 0;
    *(int *)0x19 = *(int *)0x19 + 1;
  }
  FUN_4011_7feb();
  FUN_3e1d_1dee();
  return;
}



// Function: FUN_4011_696f @ 4011:696f

undefined2 __cdecl16near FUN_4011_696f(void)

{
  int *piVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 in_BX;
  undefined2 unaff_DS;
  undefined1 in_CF;
  byte bVar7;
  bool bVar8;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  int iVar9;
  
  *(undefined2 *)0x37 = 1;
  *(undefined2 *)0x49 = 0;
  *(undefined2 *)0x71 = 0;
  FUN_4011_16a1();
  *(undefined2 *)0x73 = in_BX;
  do {
    bVar8 = (bool)in_CF;
    if (bVar8) {
      bVar7 = 1;
      goto LAB_4011_6a59;
    }
    *(undefined2 *)0x47 = 1;
    FUN_4011_6a67();
    in_CF = true;
  } while (bVar8);
  do {
    *(undefined2 *)0x3c9 = 0;
    *(undefined2 *)0x3cb = 5;
    while( true ) {
      uVar4 = *(uint *)0x79;
      bVar7 = 0;
      in_OF = 0;
      in_SF = (int)uVar4 < 0;
      in_ZF = uVar4 == 0;
      in_PF = (POPCOUNT(uVar4 & 0xff) & 1U) == 0;
      if (!(bool)in_ZF) goto LAB_4011_6a59;
      uVar4 = *(uint *)0x7f;
      iVar9 = *(int *)0x83;
      in_IF = 1;
      bVar7 = uVar4 < *(uint *)0xc1;
      if (!(bool)bVar7 && uVar4 != *(uint *)0xc1) {
        iVar6 = uVar4 - *(int *)0xc1;
        goto LAB_4011_69ec;
      }
      if ((bool)bVar7) break;
      piVar1 = (int *)0x3c9;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        puVar2 = (uint *)0x3cb;
        in_OF = SBORROW2(*puVar2,1);
        *puVar2 = *puVar2 - 1;
        in_SF = (int)*puVar2 < 0;
        in_ZF = *puVar2 == 0;
        in_PF = (POPCOUNT(*puVar2 & 0xff) & 1U) == 0;
        if ((bool)in_ZF) {
          FUN_4011_7cc4();
          goto LAB_4011_6a59;
        }
      }
    }
    iVar6 = 0x7c00 - *(int *)0xc1;
    uVar4 = 0;
LAB_4011_69ec:
    *(undefined2 *)0x3c9 = 0;
    *(undefined2 *)0x3cb = 5;
    bVar8 = CARRY2(*(int *)0x71 + *(int *)0xc1,*(uint *)0xc1);
    pcVar3 = (code *)swi(0x21);
    uVar5 = (*pcVar3)();
    if (bVar8) {
      bVar7 = 0xfe0b < uVar5;
      in_OF = SCARRY2(uVar5,500);
      uVar5 = uVar5 + 500;
      in_SF = (int)uVar5 < 0;
      in_ZF = uVar5 == 0;
      in_PF = (POPCOUNT(uVar5 & 0xff) & 1U) == 0;
      FUN_4011_7cc4();
      goto LAB_4011_6a59;
    }
    bVar7 = uVar5 < (uint)(iVar6 * 2);
    in_OF = SBORROW2(uVar5,iVar6 * 2);
    uVar5 = uVar5 + iVar6 * -2;
    in_SF = (int)uVar5 < 0;
    in_ZF = uVar5 == 0;
    in_PF = (POPCOUNT(uVar5 & 0xff) & 1U) == 0;
    if (!(bool)in_ZF) {
      FUN_4011_7cc4();
      goto LAB_4011_6a59;
    }
    *(uint *)0xc1 = uVar4;
    *(undefined2 *)0xbf = 1;
  } while (iVar9 != 0);
  FUN_4011_16be();
  uVar4 = *(uint *)0x1;
  bVar7 = 0;
  in_OF = 0;
  in_SF = (int)uVar4 < 0;
  in_ZF = uVar4 == 0;
  in_PF = (POPCOUNT(uVar4 & 0xff) & 1U) == 0;
  if (!(bool)in_ZF) {
    FUN_4011_7cc4();
  }
LAB_4011_6a59:
  FUN_4011_068f((uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
                (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
                (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(bVar7 & 1));
  return *(undefined2 *)0x264;
}



// Function: FUN_4011_6a67 @ 4011:6a67

undefined2 __cdecl16near FUN_4011_6a67(void)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined1 uVar4;
  
  uVar4 = *(int *)0xb == 0;
  if (((*(int *)0xb != 1) || (FUN_4011_7cc4(), !(bool)uVar4)) && (FUN_4011_7142(), !(bool)uVar4)) {
    *(undefined2 *)0x3f = 0x80;
    *(undefined2 *)0x3 = 0;
    *(undefined2 *)0x5 = 0;
    *(undefined2 *)0x7 = 0;
    *(undefined2 *)0x9 = 0;
    *(undefined2 *)0x2b = 0;
    uVar3 = *(undefined2 *)0x73;
    *(undefined2 *)0x75 = *(undefined2 *)0x71;
    *(undefined2 *)0x77 = uVar3;
    FUN_4011_7feb();
    FUN_3e1d_1c32();
    FUN_4011_198d();
    bVar1 = FUN_4011_7087();
    if (!(bool)uVar4) {
      if (*(int *)0x1f == 0x60) {
        bVar1 = bVar1 | 0x10;
      }
      uVar4 = 0xfffc < *(uint *)0x268;
      out(*(uint *)0x268 + 3,bVar1);
      FUN_4011_7255();
      FUN_4011_7218();
      if (!(bool)uVar4) {
        FUN_4011_7e56();
        out(*(int *)0x268 + 3,0xa0);
        bVar1 = 0x1a;
        if (*(int *)0x21 != 4) {
          bVar1 = 0x1b;
        }
        bVar2 = bVar1 | 4;
        if (*(int *)0x3c1 != 1) {
          bVar2 = bVar1 | 0x24;
        }
        out(*(int *)0x268 + 2,bVar2);
        *(undefined2 *)0xb = 1;
        FUN_4011_7feb();
        FUN_4011_595d();
        in(*(int *)0x268);
        in(*(int *)0x268 + 1);
        out(*(int *)0x268 + 3,0xa0);
        out(*(int *)0x268 + 2,0x80);
        out(*(int *)0x268 + 3,0x80);
        return 0x80;
      }
    }
  }
  uVar3 = FUN_4011_7e0a();
  *(undefined2 *)0xb = 0;
  return uVar3;
}



// Function: FUN_4011_6f19 @ 4011:6f19

undefined4 __cdecl16near FUN_4011_6f19(void)

{
  undefined2 in_AX;
  undefined1 uVar1;
  undefined2 in_DX;
  undefined2 unaff_DS;
  
  uVar1 = (undefined1)((uint)in_AX >> 8);
  out(*(int *)0x268 + 7,0xb4);
  out(*(int *)0x268 + 6,(char)in_AX);
  out(*(int *)0x268 + 6,uVar1);
  return CONCAT22(in_DX,CONCAT11(uVar1,0xb4));
}



// Function: FUN_4011_7087 @ 4011:7087

void __cdecl16near FUN_4011_7087(void)

{
  int iVar1;
  int in_AX;
  int *piVar2;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0xd;
  piVar2 = (int *)0x27e8;
  if (((((iVar1 == 0xc02) || (iVar1 == 0xc04)) || (piVar2 = (int *)0x280e, iVar1 == 0xc03)) ||
      ((iVar1 == 0xc05 || (piVar2 = (int *)0x2840, iVar1 == 0xc06)))) ||
     ((iVar1 == 0xc07 ||
      ((piVar2 = (int *)0x2866, iVar1 == 0x6002 || (piVar2 = (int *)0x2898, iVar1 == 0x6003)))))) {
    for (; *piVar2 != -1; piVar2 = piVar2 + 2) {
      if (*piVar2 == in_AX) {
        return;
      }
    }
    FUN_4011_7cc4();
  }
  return;
}



// Function: FUN_4011_7142 @ 4011:7142

void __cdecl16near FUN_4011_7142(void)

{
  undefined2 unaff_DS;
  undefined1 uVar1;
  bool bVar2;
  
  if ((*(int *)0x19 < 0) || ((*(int *)0x19 == 0 && (*(int *)0x17 == 0)))) {
    bVar2 = false;
    FUN_4011_7cc4();
    if (bVar2) {
      return;
    }
  }
  uVar1 = *(uint *)0x1f < 0x40;
  if (*(uint *)0x1f == 0x40) {
    FUN_4011_7cc4();
  }
  FUN_4011_72b3();
  if (((((!(bool)uVar1) && (FUN_4011_71b6(), !(bool)uVar1)) &&
       ((*(int *)0x1b != 1 ||
        ((bVar2 = *(int *)0x276 == 0, *(int *)0x276 == 1 || (FUN_4011_7cc4(), !bVar2)))))) &&
      ((bVar2 = *(int *)0x274 == 0, *(int *)0x274 != 1 || (FUN_4011_7cc4(), !bVar2)))) &&
     (((bVar2 = *(int *)0x5f == 0, *(int *)0x5f != 1 || (FUN_4011_7cc4(), !bVar2)) &&
      (*(int *)0x27 == 1)))) {
    FUN_4011_7cc4();
  }
  return;
}



// Function: FUN_4011_71b6 @ 4011:71b6

void __cdecl16near FUN_4011_71b6(void)

{
  undefined2 unaff_DS;
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  if (*(int *)0x21 != 4) {
    if ((*(int *)0x272 < 0) || ((*(int *)0x272 == 0 && (*(int *)0x270 == 0)))) {
      bVar1 = false;
      FUN_4011_7cc4();
      if (bVar1) {
        return;
      }
    }
    uVar2 = *(int *)0x27 == 0;
    uVar3 = *(int *)0x27 == 1;
    if (!(bool)uVar3) {
      uVar2 = false;
      uVar3 = false;
      if (*(int *)0x29 == 0) {
        uVar2 = *(uint *)0x15 < *(uint *)0x13;
        uVar3 = *(uint *)0x15 - *(uint *)0x13 == -1;
      }
      FUN_4011_85ac();
    }
    FUN_4011_16ec();
    if (!(bool)uVar2 && !(bool)uVar3) {
      FUN_4011_7cc4();
    }
  }
  return;
}



// Function: FUN_4011_7218 @ 4011:7218

void __cdecl16near FUN_4011_7218(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  bVar2 = *(int *)0x61 == 0;
  if (*(int *)0x61 != 1) {
    bVar2 = *(uint *)0x1f < 0x20;
  }
  FUN_4011_7d02();
  if (!bVar2) {
    out(*(int *)0x268 + 3,0x80);
    uVar1 = *(uint *)0x55;
    *(uint *)0x55 = uVar1 | 8;
    out(*(int *)0x268 + 2,(char)(uVar1 | 8));
  }
  return;
}



// Function: FUN_4011_7255 @ 4011:7255

undefined4 __cdecl16near FUN_4011_7255(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  out(*(int *)0x268 + 3,0xc0);
  uVar1 = *(int *)0x15 << 3 | *(uint *)0x13;
  out(*(int *)0x268 + 2,(char)uVar1);
  return CONCAT22(*(int *)0x268 + 2,uVar1);
}



// Function: FUN_4011_7274 @ 4011:7274

undefined4 __cdecl16near FUN_4011_7274(void)

{
  undefined2 in_AX;
  undefined1 uVar1;
  undefined2 in_DX;
  undefined2 in_BX;
  undefined2 unaff_DS;
  
  uVar1 = (undefined1)((uint)in_AX >> 8);
  out(*(int *)0x268 + 7,0xb4);
  out(*(int *)0x268 + 7,0x74);
  out(*(int *)0x268 + 6,(char)in_BX);
  out(*(int *)0x268 + 6,(char)((uint)in_BX >> 8));
  out(*(int *)0x268 + 5,(char)in_AX);
  out(*(int *)0x268 + 5,uVar1);
  return CONCAT22(in_DX,CONCAT11(uVar1,0x74));
}



// Function: FUN_4011_72b3 @ 4011:72b3

void __cdecl16near FUN_4011_72b3(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x61 != 1) {
    if ((*(int *)0x1f == 0x60) || (*(int *)0x1f == 0x20)) goto LAB_4011_72f2;
    if (*(int *)0x1f != 0) {
      FUN_4011_7cc4();
      return;
    }
    *(undefined2 *)0x1f = 0x20;
    if ((*(int *)0x272 == 0) && (*(uint *)0x270 < 0x3e9)) goto LAB_4011_72f2;
  }
  *(undefined2 *)0x1f = 0x60;
LAB_4011_72f2:
  if (*(int *)0x61 == 1) {
    *(undefined2 *)0x1f = 0x60;
  }
  return;
}



// Function: FUN_4011_7669 @ 4011:7669

void __cdecl16near FUN_4011_7669(void)

{
  undefined2 in_AX;
  undefined2 in_BX;
  undefined2 unaff_DS;
  
  if (*(int *)0x21 != 4) {
    out(*(int *)0x268 + 0xe,0xb4);
    out(*(int *)0x268 + 0xe,0x74);
    out(*(int *)0x268 + 0xc,(char)in_BX);
    out(*(int *)0x268 + 0xc,(char)((uint)in_BX >> 8));
    out(*(int *)0x268 + 10,(char)in_AX);
    out(*(int *)0x268 + 10,(char)((uint)in_AX >> 8));
  }
  return;
}



// Function: FUN_4011_7aa3 @ 4011:7aa3

undefined4 __cdecl16near FUN_4011_7aa3(void)

{
  undefined2 unaff_DS;
  
  out(*(int *)0x268 + 2,3);
  out(*(int *)0x268 + 0xe,0xb4);
  in(*(undefined2 *)0x268);
  out(*(int *)0x268 + 0xe,0xb0);
  return CONCAT22(*(int *)0x268 + 0xe,0xb0);
}



// Function: FUN_4011_7b26 @ 4011:7b26

undefined4 __cdecl16near FUN_4011_7b26(void)

{
  int in_AX;
  int in_DX;
  int iVar1;
  undefined2 unaff_DS;
  
  if (in_DX != 0) {
    if (in_AX == 0) goto LAB_4011_7b34;
    in_AX = 0;
  }
  in_DX = in_DX + 1;
LAB_4011_7b34:
  out(*(int *)0x268 + 0xe,0xb0);
  out(*(int *)0x268 + 0xc,(char)in_DX);
  out(*(int *)0x268 + 0xc,(char)((uint)in_DX >> 8));
  out(*(int *)0x268 + 0xe,0x70);
  out(*(int *)0x268 + 0xe,0x74);
  out(*(int *)0x268 + 0xe,0x70);
  out(*(int *)0x268 + 0xe,0x74);
  iVar1 = *(int *)0x268 + 10;
  out(iVar1,(char)in_AX);
  out(iVar1,(char)((uint)in_AX >> 8));
  return CONCAT22(iVar1,in_AX);
}



// Function: FUN_4011_7b9d @ 4011:7b9d

undefined1 __cdecl16near FUN_4011_7b9d(void)

{
  undefined2 unaff_DS;
  
  out(*(int *)0x268 + 0xe,0x70);
  out(*(int *)0x268 + 0xe,0x74);
  return 0x74;
}



// Function: FUN_4011_7bb5 @ 4011:7bb5

void __cdecl16near FUN_4011_7bb5(void)

{
  char cVar1;
  int in_AX;
  undefined2 unaff_DS;
  
  cVar1 = (char)in_AX;
  if ((in_AX == 0) || (cVar1 == '\x02')) {
    out(*(int *)0x268 + 2,cVar1);
    *(char *)0x28f8 = cVar1;
  }
  else {
    FUN_4011_7cc4();
  }
  return;
}



// Function: FUN_4011_7c2b @ 4011:7c2b

undefined4 __cdecl16near FUN_4011_7c2b(void)

{
  code *pcVar1;
  undefined2 in_AX;
  undefined2 in_DX;
  int in_BX;
  undefined2 unaff_DS;
  
  if (*(int *)0x3d63 == 0) goto LAB_4011_7c7e;
  if (*(int *)0x3d63 != 3) {
    if (*(int *)0x3d63 == 1) {
      if (*(int *)(in_BX + 2) != 1) goto LAB_4011_7c7e;
    }
    else if (*(int *)(in_BX + 2) != 0) goto LAB_4011_7c7e;
  }
  FUN_4011_1ad9();
  FUN_4011_1aeb();
  FUN_4011_1ad9();
  FUN_4011_1ad9();
  FUN_4011_1ad9();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
LAB_4011_7c7e:
  return CONCAT22(in_DX,in_AX);
}



// Function: FUN_4011_7c84 @ 4011:7c84

int __cdecl16near FUN_4011_7c84(void)

{
  int *piVar1;
  int in_AX;
  int iVar2;
  int *piVar3;
  undefined2 unaff_DS;
  
  piVar3 = (int *)0x28f9;
  do {
    if ((*piVar3 == -1) || (*piVar3 == in_AX)) {
      return in_AX;
    }
    piVar3 = piVar3 + 2;
    iVar2 = 0xfff;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      piVar1 = piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
    } while ((char)*piVar1 != '\0');
  } while( true );
}



// Function: FUN_4011_7cc4 @ 4011:7cc4

void __cdecl16near FUN_4011_7cc4(void)

{
  int iVar1;
  int in_BX;
  undefined2 unaff_DS;
  
  iVar1 = FUN_4011_1985();
  *(int *)0x264 = iVar1;
  if (iVar1 != 0) {
    FUN_4011_7c84();
    FUN_4011_7c2b();
    if ((*(int *)0x3d65 != 0) && ((*(int *)0x3d65 == 2 || (*(int *)(in_BX + 2) == 0)))) {
      *(undefined2 *)0x3cf = 1;
    }
  }
  return;
}



// Function: FUN_4011_7d02 @ 4011:7d02

undefined2 __cdecl16near FUN_4011_7d02(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  code *pcVar1;
  char cVar2;
  uint in_AX;
  int in_DX;
  undefined2 uVar3;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  if (in_AX == 0) {
    param_3 = FUN_4011_7cc4();
  }
  else {
    if (in_AX < 10) {
      cVar2 = (char)in_AX + '\b';
    }
    else {
      cVar2 = (char)in_AX + 'h';
    }
    uVar3 = 0x11;
    if (((((((in_DX != 1) && (uVar3 = 0x17d, in_DX != 2)) && (uVar3 = 0x2bf, in_DX != 3)) &&
          ((uVar3 = 0x46c, in_DX != 4 && (uVar3 = 0x6a0, in_DX != 5)))) &&
         ((uVar3 = 0x89f, in_DX != 6 && ((uVar3 = 0x9d7, in_DX != 7 && (uVar3 = 0xd3a, in_DX != 8)))
          ))) && (uVar3 = 0xc0e, in_DX != 9)) &&
       (((((uVar3 = 0xd8c, in_DX != 10 && (uVar3 = 0xf1c, in_DX != 0xb)) &&
          (uVar3 = 0x1073, in_DX != 0xc)) &&
         (((uVar3 = 0x1178, in_DX != 0xd && (uVar3 = 0x12e0, in_DX != 0xe)) &&
          ((uVar3 = 0x137e, in_DX != 0xf &&
           ((uVar3 = 0x14b4, in_DX != 0x10 && (uVar3 = 0x1610, in_DX != 0x11)))))))) &&
        ((uVar3 = 0x1718, in_DX != 0x12 && (uVar3 = 0x184c, in_DX != 0x13)))))) {
      uVar3 = 0x19ab;
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)(cVar2);
    *(undefined2 *)0x3dac = uVar3;
    *(undefined2 *)0x3dae = unaff_ES;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    FUN_4011_7ed8();
  }
  return param_3;
}



// Function: FUN_4011_7e0a @ 4011:7e0a

undefined2 __cdecl16far FUN_4011_7e0a(void)

{
  code *pcVar1;
  undefined2 in_AX;
  undefined2 unaff_DS;
  
  FUN_4011_7e88();
  if ((*(int *)0x3dae != 0) && (*(char *)*(undefined4 *)0x3b6 == '\0')) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    *(undefined2 *)0x3dac = 0;
    *(undefined2 *)0x3dae = 0;
    FUN_4011_7f16();
  }
  return in_AX;
}



// Function: FUN_4011_7e56 @ 4011:7e56

uint __cdecl16near FUN_4011_7e56(void)

{
  undefined1 uVar1;
  byte bVar2;
  uint in_AX;
  uint uVar3;
  undefined2 unaff_DS;
  
  if (in_AX < 10) {
    uVar1 = in(0x21);
    uVar3 = in_AX;
  }
  else {
    uVar1 = in(0xa1);
    uVar3 = in_AX - 8;
  }
  *(undefined2 *)0x3db8 = CONCAT11((char)(in_AX >> 8),uVar1);
  bVar2 = ~(byte)(1 << ((byte)uVar3 & 0x1f)) & (byte)*(undefined2 *)0x3db8;
  if (in_AX < 10) {
    out(0x21,bVar2);
  }
  else {
    out(0xa1,bVar2);
  }
  return in_AX;
}



// Function: FUN_4011_7e88 @ 4011:7e88

undefined4 __cdecl16near FUN_4011_7e88(void)

{
  byte bVar1;
  uint in_AX;
  uint uVar2;
  undefined2 in_DX;
  
  if (in_AX < 10) {
    bVar1 = in(0x21);
    uVar2 = in_AX;
  }
  else {
    bVar1 = in(0xa1);
    uVar2 = in_AX - 8;
  }
  bVar1 = '\x01' << ((byte)uVar2 & 0x1f) | bVar1;
  if (in_AX < 10) {
    out(0x21,bVar1);
  }
  else {
    out(0xa1,bVar1);
  }
  return CONCAT22(in_DX,in_AX);
}



// Function: FUN_4011_7eb6 @ 4011:7eb6

void __cdecl16near FUN_4011_7eb6(void)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x3bb == 1) {
    bVar1 = in(0x21);
    out(0x21,bVar1 | 1);
  }
  return;
}



// Function: FUN_4011_7ec7 @ 4011:7ec7

void __cdecl16near FUN_4011_7ec7(void)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x3bb == 1) {
    bVar1 = in(0x21);
    out(0x21,bVar1 & 0xfe);
  }
  return;
}



// Function: FUN_4011_7ed8 @ 4011:7ed8

undefined4 __cdecl16near FUN_4011_7ed8(void)

{
  code *pcVar1;
  undefined2 in_AX;
  undefined2 in_DX;
  undefined2 in_BX;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  FUN_4011_1985();
  if (*(int *)0x3db2 == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    *(undefined2 *)0x3db0 = in_BX;
    *(undefined2 *)0x3db2 = unaff_ES;
    pcVar1 = (code *)swi(0x21);
    DAT_4011_7bee = in_BX;
    DAT_4011_7bf0 = unaff_ES;
    (*pcVar1)();
  }
  return CONCAT22(in_DX,in_AX);
}



// Function: FUN_4011_7f16 @ 4011:7f16

undefined2 __cdecl16far FUN_4011_7f16(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  uVar2 = FUN_4011_1985();
  if (*(int *)0x3db2 != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    *(undefined2 *)0x3db0 = 0;
    *(undefined2 *)0x3db2 = 0;
  }
  return uVar2;
}



// Function: FUN_4011_7feb @ 4011:7feb

int __cdecl16near FUN_4011_7feb(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int in_AX;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *unaff_DI;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x1 = 0;
  *(undefined2 *)0xf = *(undefined2 *)0x268;
  *(undefined2 *)0x35 = 1;
  *(undefined2 *)0xb = 1;
  if (in_AX == 0) {
    unaff_DI = (undefined1 *)0x79;
  }
  else if (in_AX == 1) {
    unaff_DI = (undefined1 *)0xf1;
  }
  else if (in_AX == 2) {
    unaff_DI = (undefined1 *)0x169;
  }
  else if (in_AX == 3) {
    unaff_DI = (undefined1 *)0x1e1;
  }
  puVar4 = (undefined1 *)0x1;
  for (iVar3 = 0x78; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return in_AX;
}



// Function: FUN_4011_804e @ 4011:804e

int __cdecl16near FUN_4011_804e(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int in_AX;
  int iVar3;
  undefined1 *unaff_SI;
  undefined1 *puVar4;
  undefined2 unaff_DS;
  
  if (in_AX == 0) {
    unaff_SI = (undefined1 *)0x79;
  }
  else if (in_AX == 1) {
    unaff_SI = (undefined1 *)0xf1;
  }
  else if (in_AX == 2) {
    unaff_SI = (undefined1 *)0x169;
  }
  else if (in_AX == 3) {
    unaff_SI = (undefined1 *)0x1e1;
  }
  puVar4 = (undefined1 *)0x1;
  for (iVar3 = 0x70; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar2 = *puVar1;
  }
  return in_AX;
}



// Function: FUN_4011_8448 @ 4011:8448

void __cdecl16near FUN_4011_8448(void)

{
  return;
}



// Function: FUN_4011_845c @ 4011:845c

int __cdecl16near FUN_4011_845c(void)

{
  int iVar1;
  int in_CX;
  uint in_BX;
  
  iVar1 = FUN_4011_8448();
  if ((in_CX < 0) || (in_BX <= (uint)(in_CX << 1))) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// Function: FUN_4011_84c8 @ 4011:84c8

void __cdecl16near FUN_4011_84c8(void)

{
  uint *puVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint in_CX;
  uint uVar7;
  uint in_BX;
  int iVar8;
  int iVar9;
  int *unaff_DI;
  undefined2 unaff_DS;
  bool bVar10;
  bool bVar11;
  
  iVar8 = 0x40;
  iVar9 = *unaff_DI;
  uVar6 = 0;
  uVar7 = 0;
  do {
    if ((char)(uVar7 >> 8) != '\0') goto LAB_4011_8517;
    uVar3 = CONCAT11((char)uVar7,(char)(uVar6 >> 8));
    uVar4 = CONCAT11((char)uVar6,*(undefined1 *)((int)unaff_DI + 7));
    if ((in_CX <= uVar3) && ((in_CX < uVar3 || (in_BX <= uVar4)))) {
      uVar7 = uVar7 & 0xff;
      goto LAB_4011_8517;
    }
    LOCK();
    puVar1 = (uint *)(unaff_DI + 1);
    uVar6 = *puVar1;
    *(char *)puVar1 = (char)((uint)iVar9 >> 8);
    UNLOCK();
    LOCK();
    uVar2 = *(undefined1 *)((int)unaff_DI + 3);
    *(undefined1 *)((int)unaff_DI + 3) = (char)uVar6;
    UNLOCK();
    LOCK();
    iVar5 = unaff_DI[2];
    *(undefined1 *)(unaff_DI + 2) = uVar2;
    UNLOCK();
    LOCK();
    uVar2 = *(undefined1 *)((int)unaff_DI + 5);
    *(undefined1 *)((int)unaff_DI + 5) = (char)iVar5;
    UNLOCK();
    LOCK();
    iVar5 = unaff_DI[3];
    *(undefined1 *)(unaff_DI + 3) = uVar2;
    UNLOCK();
    *(undefined1 *)((int)unaff_DI + 7) = (char)iVar5;
    iVar9 = iVar9 << 8;
    iVar8 = iVar8 + -8;
    uVar6 = uVar4;
    uVar7 = uVar3;
  } while (iVar8 != 0);
  iVar9 = 0;
LAB_4011_8538:
  *unaff_DI = iVar9;
  return;
LAB_4011_8517:
  do {
    bVar10 = iVar9 < 0;
    iVar9 = iVar9 * 2;
    puVar1 = (uint *)(unaff_DI + 1);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 << 1 | (uint)bVar10;
    puVar1 = (uint *)(unaff_DI + 2);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 << 1 | (uint)((int)uVar3 < 0);
    puVar1 = (uint *)(unaff_DI + 3);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 << 1 | (uint)((int)uVar4 < 0);
    bVar10 = (int)uVar6 < 0;
    uVar6 = uVar6 << 1 | (uint)((int)uVar3 < 0);
    bVar11 = (int)uVar7 < 0;
    uVar7 = uVar7 << 1 | (uint)bVar10;
    if ((bVar11) || ((in_CX <= uVar7 && ((in_CX < uVar7 || (in_BX <= uVar6)))))) {
      bVar10 = uVar6 < in_BX;
      uVar6 = uVar6 - in_BX;
      uVar7 = (uVar7 - in_CX) - (uint)bVar10;
      iVar9 = iVar9 + 1;
    }
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  goto LAB_4011_8538;
}



// Function: FUN_4011_85ac @ 4011:85ac

undefined4 __cdecl16near FUN_4011_85ac(void)

{
  uint in_AX;
  int in_DX;
  uint in_BX;
  
  return CONCAT22((int)((ulong)in_AX * (ulong)in_BX >> 0x10) + in_DX * in_BX,
                  (int)((ulong)in_AX * (ulong)in_BX));
}



// Function: FUN_4011_860b @ 4011:860b

undefined4 __cdecl16near
FUN_4011_860b(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  code *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined1 in_CF;
  bool bVar3;
  
  FUN_4011_9059();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if ((bool)in_CF) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      *(undefined2 *)0x3cf = 1;
      goto LAB_4011_869c;
    }
  }
  bVar3 = false;
  pcVar1 = (code *)swi(0x21);
  iVar2 = (*pcVar1)();
  if ((!bVar3) && (bVar3 = false, iVar2 != 0)) {
    FUN_4011_9195();
    if (bVar3) {
      iVar2 = *(int *)0x688;
      if (iVar2 != 0) {
        do {
          bVar3 = false;
          FUN_4011_86a7();
          if (bVar3) goto LAB_4011_869c;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        for (iVar2 = *(int *)0x68a; iVar2 != 0; iVar2 = iVar2 + -1) {
          bVar3 = false;
          FUN_4011_8773();
          if (bVar3) break;
        }
      }
    }
    else {
      FUN_4011_8794();
    }
  }
LAB_4011_869c:
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return CONCAT22(param_2,param_5);
}



// Function: FUN_4011_86a7 @ 4011:86a7

undefined4 __cdecl16near FUN_4011_86a7(undefined2 param_1)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined2 in_BX;
  undefined2 unaff_DS;
  undefined1 in_CF;
  bool bVar5;
  undefined1 in_ZF;
  
  FUN_4011_13fb();
  iVar4 = 100;
  pcVar2 = (code *)swi(0x21);
  iVar3 = (*pcVar2)();
  if ((bool)in_CF) goto LAB_4011_871c;
  in_ZF = true;
  if (iVar3 == 0) goto LAB_4011_871c;
  *(undefined2 *)(*(int *)0x259 + 8) = 0;
  iVar4 = *(int *)(*(int *)0x259 + 0x12);
  if (iVar4 != 0) {
    *(undefined2 *)0x25b = 0xe96;
    for (iVar3 = *(int *)(*(int *)0x259 + 0x14); iVar3 != 0; iVar3 = iVar3 + -1) {
      *(int *)0x25b = *(int *)0x25b + 0x10;
    }
    do {
      bVar5 = false;
      pcVar2 = (code *)swi(0x21);
      iVar3 = (*pcVar2)();
      if (bVar5) goto LAB_4011_876e;
      in_ZF = iVar3 == 0;
LAB_4011_871c:
      if ((bool)in_ZF) goto LAB_4011_876e;
      *(int *)0x25b = *(int *)0x25b + 0x10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)(*(int *)0x259 + 0x16);
  if (iVar4 != 0) {
    *(undefined2 *)0x25d = 0x1d96;
    bVar5 = 0xffe7 < *(uint *)0x259;
    for (iVar3 = *(int *)(*(uint *)0x259 + 0x18); iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = (uint *)0x25d;
      bVar5 = 0xfff3 < *puVar1;
      *puVar1 = *puVar1 + 0xc;
    }
    do {
      pcVar2 = (code *)swi(0x21);
      iVar3 = (*pcVar2)();
      if ((bVar5) || (iVar3 == 0)) break;
      puVar1 = (uint *)0x25d;
      bVar5 = 0xfff3 < *puVar1;
      *puVar1 = *puVar1 + 0xc;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
LAB_4011_876e:
  return CONCAT22(in_BX,param_1);
}



// Function: FUN_4011_8773 @ 4011:8773

undefined4 __cdecl16near FUN_4011_8773(void)

{
  code *pcVar1;
  undefined2 in_AX;
  undefined2 in_DX;
  undefined1 in_CF;
  
  FUN_4011_14bd();
  if (!(bool)in_CF) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return CONCAT22(in_DX,in_AX);
}



// Function: FUN_4011_8794 @ 4011:8794

void __cdecl16near FUN_4011_8794(void)

{
  code *pcVar1;
  int unaff_SI;
  undefined2 unaff_DS;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (!(bool)in_CF) {
    FUN_4011_9015();
    *(undefined2 *)0x4f27 = 0;
    *(undefined2 *)0x4f25 = 0;
    *(undefined2 *)0x4f29 = 1;
    while ((FUN_4011_90dc(), !(bool)in_CF && (unaff_SI != 0))) {
      in_CF = *(int *)0x4f29 == 0;
      if (*(int *)0x4f29 == 1) {
        FUN_4011_8844();
      }
      else {
        in_CF = *(uint *)0x4f29 < 2;
        if ((*(uint *)0x4f29 == 2) || (in_CF = *(uint *)0x4f29 < 3, *(uint *)0x4f29 == 3)) {
          FUN_4011_8981();
        }
        else {
          in_CF = *(int *)0x4f29 == 0;
          if (*(int *)0x4f29 == 1) {
            FUN_4011_8981();
          }
          else {
            in_CF = *(uint *)0x4f29 < 4;
            if (*(uint *)0x4f29 == 4) {
              FUN_4011_8c9e();
            }
            else {
              in_CF = *(uint *)0x4f29 < 5;
              if (*(uint *)0x4f29 == 5) {
                FUN_4011_8e31();
              }
              else {
                do {
                  in_CF = *(uint *)0x4f29 < 6;
                } while (*(uint *)0x4f29 != 6);
                FUN_4011_8f4e();
              }
            }
          }
        }
      }
    }
  }
  return;
}



// Function: FUN_4011_8844 @ 4011:8844

undefined2 __cdecl16near FUN_4011_8844(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 in_BX;
  char *unaff_SI;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined4 uVar3;
  
  uVar2 = FUN_4011_9195();
  if (((bool)in_CF) && (uVar2 = FUN_4011_9195(), (bool)in_CF)) {
    FUN_4011_9195();
    if ((bool)in_CF) {
      FUN_4011_9195();
      if ((bool)in_CF) {
        FUN_4011_9195();
        if ((bool)in_CF) {
          FUN_4011_9195();
          if ((bool)in_CF) {
            FUN_4011_9195();
            if ((bool)in_CF) {
              FUN_4011_9195();
              if ((bool)in_CF) {
                uVar3 = FUN_4011_9195();
                if ((bool)in_CF) {
                  uVar2 = (int)uVar3;
                  if (unaff_SI != (char *)0x0) {
                    pcVar1 = (code *)swi(0x21);
                    (*pcVar1)(uVar3);
                    FUN_4011_1b15();
                    FUN_4011_1b15();
                    FUN_4011_1ad9();
                    FUN_4011_1b15();
                    FUN_4011_1b15();
                    uVar2 = in_BX;
                  }
                }
                else {
                  uVar2 = FUN_4011_91d3();
                  if (*unaff_SI != ':') {
                    uVar2 = FUN_4011_14bd();
                    *(undefined2 *)0x4f29 = 2;
                  }
                }
              }
              else {
                uVar2 = FUN_4011_91d3();
                if (*unaff_SI != ':') {
                  uVar2 = FUN_4011_13fb();
                  *(undefined2 *)0x4f29 = 2;
                }
              }
            }
            else {
              uVar2 = FUN_4011_92d0();
              *(undefined2 *)0x68e = uVar2;
            }
          }
          else {
            uVar2 = FUN_4011_91d3();
            *(undefined2 *)0x68c = uVar2;
          }
        }
        else {
          uVar2 = FUN_4011_91d3();
          *(undefined2 *)0x68a = uVar2;
        }
      }
      else {
        uVar2 = FUN_4011_91d3();
        *(undefined2 *)0x688 = uVar2;
      }
    }
    else {
      uVar2 = FUN_4011_91d3();
      *(undefined2 *)0x686 = uVar2;
    }
  }
  return uVar2;
}



// Function: FUN_4011_8981 @ 4011:8981

undefined2 __cdecl16near FUN_4011_8981(void)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 in_BX;
  undefined2 *puVar6;
  int unaff_SI;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined4 uVar7;
  
  FUN_4011_9195();
  if ((bool)in_CF) {
    FUN_4011_9195();
    if ((bool)in_CF) {
      FUN_4011_9195();
      if ((bool)in_CF) {
        FUN_4011_9195();
        if ((bool)in_CF) {
          FUN_4011_9195();
          if ((bool)in_CF) {
            FUN_4011_9195();
            if ((bool)in_CF) {
              FUN_4011_9195();
              if ((bool)in_CF) {
                FUN_4011_9195();
                if ((bool)in_CF) {
                  FUN_4011_9195();
                  if ((bool)in_CF) {
                    FUN_4011_9195();
                    if ((bool)in_CF) {
                      FUN_4011_9195();
                      if ((bool)in_CF) {
                        FUN_4011_9195();
                        if ((bool)in_CF) {
                          FUN_4011_9195();
                          if ((bool)in_CF) {
                            FUN_4011_9195();
                            if ((bool)in_CF) {
                              FUN_4011_9195();
                              if ((bool)in_CF) {
                                FUN_4011_9195();
                                if ((bool)in_CF) {
                                  FUN_4011_9195();
                                  if ((bool)in_CF) {
                                    FUN_4011_9195();
                                    if ((bool)in_CF) {
                                      FUN_4011_9195();
                                      if ((bool)in_CF) {
                                        uVar2 = FUN_4011_9195();
                                        if ((bool)in_CF) {
                                          uVar7 = FUN_4011_9195();
                                          uVar2 = (int)uVar7;
                                          if ((bool)in_CF) {
                                            if (unaff_SI != 0) {
                                              pcVar1 = (code *)swi(0x21);
                                              (*pcVar1)(uVar7);
                                              FUN_4011_1b15();
                                              FUN_4011_1b15();
                                              FUN_4011_1ad9();
                                              FUN_4011_1b15();
                                              FUN_4011_1b15();
                                              uVar2 = in_BX;
                                            }
                                          }
                                          else {
                                            *(undefined2 *)0x4f29 = 1;
                                          }
                                        }
                                        else {
                                          *(undefined2 *)0x4f29 = 1;
                                          *(undefined2 *)0x4f2d = 0xffff;
                                          *(undefined2 *)0x4f2f = 0xffff;
                                        }
                                      }
                                      else {
                                        iVar5 = FUN_4011_91d3();
                                        iVar3 = 0x1d96;
                                        for (iVar4 = iVar5; iVar4 != 0; iVar4 = iVar4 + -1) {
                                          iVar3 = iVar3 + 0xc;
                                        }
                                        *(int *)0x25d = iVar3;
                                        if (*(int *)0x4f2f == -1) {
                                          *(int *)0x4f2f = iVar5;
                                          *(int *)(*(int *)0x259 + 0x18) = iVar5;
                                        }
                                        uVar2 = *(undefined2 *)0x4f29;
                                        *(undefined2 *)0x4f2b = uVar2;
                                        *(undefined2 *)0x4f29 = 6;
                                      }
                                    }
                                    else {
                                      iVar5 = FUN_4011_91d3();
                                      iVar3 = 0xe96;
                                      for (iVar4 = iVar5; iVar4 != 0; iVar4 = iVar4 + -1) {
                                        iVar3 = iVar3 + 0x10;
                                      }
                                      *(int *)0x25b = iVar3;
                                      if (*(int *)0x4f2d == -1) {
                                        *(int *)0x4f2d = iVar5;
                                        *(int *)(*(int *)0x259 + 0x14) = iVar5;
                                      }
                                      uVar2 = *(undefined2 *)0x4f29;
                                      *(undefined2 *)0x4f2b = uVar2;
                                      *(undefined2 *)0x4f29 = 5;
                                    }
                                  }
                                  else {
                                    iVar4 = FUN_4011_91d3();
                                    iVar3 = 0x2096;
                                    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
                                      iVar3 = iVar3 + 0x32;
                                    }
                                    *(int *)0x25f = iVar3;
                                    uVar2 = *(undefined2 *)0x4f29;
                                    *(undefined2 *)0x4f2b = uVar2;
                                    *(undefined2 *)0x4f29 = 4;
                                  }
                                }
                                else {
                                  iVar3 = FUN_4011_91d3();
                                  puVar6 = (undefined2 *)(*(int *)0x259 + 0x24);
                                  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                                    puVar6 = puVar6 + 1;
                                  }
                                  uVar2 = FUN_4011_91d3();
                                  *puVar6 = uVar2;
                                }
                              }
                              else {
                                FUN_4011_9195();
                                if ((bool)in_CF) {
                                  uVar2 = FUN_4011_91d3();
                                }
                                else {
                                  uVar2 = 0xfffe;
                                }
                                *(undefined2 *)(*(int *)0x259 + 0x22) = uVar2;
                              }
                            }
                            else {
                              uVar2 = FUN_4011_91d3();
                              *(undefined2 *)(*(int *)0x259 + 0x20) = uVar2;
                            }
                          }
                          else {
                            uVar2 = FUN_4011_938a();
                            *(undefined2 *)(*(int *)0x259 + 0x10) = uVar2;
                          }
                        }
                        else {
                          uVar2 = FUN_4011_91d3();
                          *(undefined2 *)(*(int *)0x259 + 0x16) = uVar2;
                        }
                      }
                      else {
                        uVar2 = FUN_4011_91d3();
                        *(undefined2 *)(*(int *)0x259 + 0x12) = uVar2;
                      }
                    }
                    else {
                      uVar2 = FUN_4011_91d3();
                      *(undefined2 *)(*(int *)0x259 + 0x1a) = uVar2;
                    }
                  }
                  else {
                    uVar2 = FUN_4011_91d3();
                    *(undefined2 *)(*(int *)0x259 + 0xe) = uVar2;
                  }
                }
                else {
                  uVar2 = FUN_4011_938a();
                  *(undefined2 *)(*(int *)0x259 + 0x1c) = uVar2;
                }
              }
              else {
                uVar2 = FUN_4011_938a();
                *(undefined2 *)(*(int *)0x259 + 0xc) = uVar2;
              }
            }
            else {
              uVar2 = FUN_4011_91d3();
              *(undefined2 *)(*(int *)0x259 + 10) = uVar2;
            }
          }
          else {
            uVar2 = FUN_4011_91d3();
            *(undefined2 *)(*(int *)0x259 + 6) = uVar2;
          }
        }
        else {
          uVar2 = FUN_4011_91d3();
          *(undefined2 *)(*(int *)0x259 + 4) = uVar2;
        }
      }
      else {
        uVar2 = FUN_4011_91d3();
        *(undefined2 *)(*(int *)0x259 + 0x1e) = uVar2;
      }
    }
    else {
      uVar2 = FUN_4011_92d0();
      *(undefined2 *)*(undefined2 *)0x259 = uVar2;
    }
  }
  else {
    uVar2 = FUN_4011_938a();
    *(undefined2 *)(*(int *)0x259 + 2) = uVar2;
    *(undefined2 *)0x4f2d = 0xffff;
    *(undefined2 *)0x4f2f = 0xffff;
  }
  return uVar2;
}



// Function: FUN_4011_8c9e @ 4011:8c9e

undefined2 __cdecl16near FUN_4011_8c9e(void)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 in_BX;
  undefined2 *puVar4;
  int unaff_SI;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined4 uVar5;
  
  FUN_4011_9195();
  if ((bool)in_CF) {
    FUN_4011_9195();
    if ((bool)in_CF) {
      FUN_4011_9195();
      if ((bool)in_CF) {
        FUN_4011_9195();
        if ((bool)in_CF) {
          FUN_4011_9195();
          if ((bool)in_CF) {
            FUN_4011_9195();
            if ((bool)in_CF) {
              FUN_4011_9195();
              if ((bool)in_CF) {
                FUN_4011_9195();
                if ((bool)in_CF) {
                  FUN_4011_9195();
                  if ((bool)in_CF) {
                    FUN_4011_9195();
                    if ((bool)in_CF) {
                      uVar5 = FUN_4011_9195();
                      if ((bool)in_CF) {
                        uVar2 = (int)uVar5;
                        if (unaff_SI != 0) {
                          pcVar1 = (code *)swi(0x21);
                          (*pcVar1)(uVar5);
                          FUN_4011_1b15();
                          FUN_4011_1b15();
                          FUN_4011_1ad9();
                          FUN_4011_1b15();
                          FUN_4011_1b15();
                          uVar2 = in_BX;
                        }
                      }
                      else {
                        uVar2 = *(undefined2 *)0x4f2b;
                        *(undefined2 *)0x4f29 = uVar2;
                      }
                    }
                    else {
                      uVar2 = FUN_4011_91d3();
                      *(undefined2 *)(*(int *)0x25f + 0x10) = uVar2;
                    }
                  }
                  else {
                    iVar3 = FUN_4011_91d3();
                    puVar4 = (undefined2 *)(*(int *)0x25f + 0x12);
                    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                      puVar4 = puVar4 + 1;
                    }
                    uVar2 = FUN_4011_91d3();
                    *puVar4 = uVar2;
                  }
                }
                else {
                  uVar2 = FUN_4011_91d3();
                  *(undefined2 *)(*(int *)0x25f + 0xe) = uVar2;
                }
              }
              else {
                uVar2 = FUN_4011_938a();
                *(undefined2 *)(*(int *)0x25f + 0xc) = uVar2;
              }
            }
            else {
              uVar2 = FUN_4011_91d3();
              *(undefined2 *)(*(int *)0x25f + 10) = uVar2;
            }
          }
          else {
            uVar2 = FUN_4011_91d3();
            *(undefined2 *)(*(int *)0x25f + 8) = uVar2;
          }
        }
        else {
          uVar2 = FUN_4011_91d3();
          *(undefined2 *)(*(int *)0x25f + 6) = uVar2;
        }
      }
      else {
        uVar2 = FUN_4011_91d3();
        *(undefined2 *)(*(int *)0x25f + 4) = uVar2;
      }
    }
    else {
      uVar2 = FUN_4011_91d3();
      *(undefined2 *)(*(int *)0x25f + 2) = uVar2;
    }
  }
  else {
    uVar2 = FUN_4011_938a();
    *(undefined2 *)*(undefined2 *)0x25f = uVar2;
  }
  return uVar2;
}



// Function: FUN_4011_8e31 @ 4011:8e31

undefined2 __cdecl16near FUN_4011_8e31(void)

{
  code *pcVar1;
  undefined2 uVar2;
  int unaff_SI;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined4 uVar3;
  undefined2 in_stack_00000000;
  
  FUN_4011_9195();
  if ((bool)in_CF) {
    FUN_4011_9195();
    if ((bool)in_CF) {
      FUN_4011_9195();
      if ((bool)in_CF) {
        FUN_4011_9195();
        if ((bool)in_CF) {
          FUN_4011_9195();
          if ((bool)in_CF) {
            FUN_4011_9195();
            if ((bool)in_CF) {
              uVar3 = FUN_4011_9195();
              if ((bool)in_CF) {
                uVar2 = (int)uVar3;
                if (unaff_SI != 0) {
                  pcVar1 = (code *)swi(0x21);
                  (*pcVar1)(uVar3);
                  FUN_4011_1b15();
                  FUN_4011_1b15();
                  FUN_4011_1ad9();
                  FUN_4011_1b15();
                  FUN_4011_1b15();
                  uVar2 = in_stack_00000000;
                }
              }
              else {
                uVar2 = *(undefined2 *)0x4f2b;
                *(undefined2 *)0x4f29 = uVar2;
              }
            }
            else {
              uVar2 = FUN_4011_91d3();
              *(undefined2 *)(*(int *)0x25b + 0xc) = uVar2;
            }
          }
          else {
            uVar2 = FUN_4011_938a();
            *(undefined2 *)(*(int *)0x25b + 10) = uVar2;
          }
        }
        else {
          uVar2 = FUN_4011_938a();
          *(undefined2 *)(*(int *)0x25b + 8) = uVar2;
        }
      }
      else {
        uVar2 = FUN_4011_92d0();
        *(undefined2 *)(*(int *)0x25b + 6) = uVar2;
      }
    }
    else {
      uVar2 = FUN_4011_938a();
      *(undefined2 *)(*(int *)0x25b + 4) = uVar2;
    }
  }
  else {
    uVar2 = FUN_4011_92d0();
    *(undefined2 *)*(undefined2 *)0x25b = uVar2;
  }
  return uVar2;
}



// Function: FUN_4011_8f4e @ 4011:8f4e

undefined2 __cdecl16near FUN_4011_8f4e(void)

{
  code *pcVar1;
  undefined2 uVar2;
  int unaff_SI;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined4 uVar3;
  undefined2 in_stack_00000000;
  
  FUN_4011_9195();
  if ((bool)in_CF) {
    FUN_4011_9195();
    if ((bool)in_CF) {
      FUN_4011_9195();
      if ((bool)in_CF) {
        uVar3 = FUN_4011_9195();
        if ((bool)in_CF) {
          uVar2 = (int)uVar3;
          if (unaff_SI != 0) {
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)(uVar3);
            FUN_4011_1b15();
            FUN_4011_1b15();
            FUN_4011_1ad9();
            FUN_4011_1b15();
            FUN_4011_1b15();
            uVar2 = in_stack_00000000;
          }
        }
        else {
          uVar2 = *(undefined2 *)0x4f2b;
          *(undefined2 *)0x4f29 = uVar2;
        }
      }
      else {
        uVar2 = FUN_4011_91d3();
        *(undefined2 *)(*(int *)0x25d + 6) = uVar2;
      }
    }
    else {
      uVar2 = FUN_4011_938a();
      *(undefined2 *)(*(int *)0x25d + 4) = uVar2;
    }
  }
  else {
    uVar2 = FUN_4011_92d0();
    *(undefined2 *)*(undefined2 *)0x25d = uVar2;
  }
  return uVar2;
}



// Function: FUN_4011_9015 @ 4011:9015

undefined4 __cdecl16near FUN_4011_9015(void)

{
  undefined2 in_AX;
  int iVar1;
  int iVar2;
  undefined2 in_DX;
  int iVar3;
  undefined2 unaff_DS;
  
  do {
    iVar1 = FUN_4011_13fb();
    *(undefined2 *)(*(int *)0x259 + 0x20) = 0xffff;
    *(undefined2 *)(*(int *)0x259 + 0x22) = 0xffff;
    iVar3 = 0x24;
    iVar2 = 0x20;
    do {
      *(undefined2 *)(*(int *)0x259 + iVar3) = 0xffff;
      iVar3 = iVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  } while (iVar1 != 9);
  return CONCAT22(in_DX,in_AX);
}



// Function: FUN_4011_9059 @ 4011:9059

void __cdecl16near FUN_4011_9059(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 uVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  undefined2 in_BX;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  uVar3 = *(undefined2 *)0x2c;
  pcVar7 = (char *)0x0;
  do {
    pcVar9 = (char *)0x4f1d;
    iVar6 = 8;
    pcVar8 = pcVar7;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
      in_ZF = *pcVar1 == *pcVar2;
    } while ((bool)in_ZF);
    if ((bool)in_ZF) {
      FUN_4011_16fd();
      *(undefined1 *)0x2aa = 0x5c;
      goto LAB_4011_90ca;
    }
    do {
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
    in_ZF = 0;
    if (*pcVar7 == '\0') {
      pcVar7 = (char *)0x2aa;
      FUN_4011_16fd();
      do {
        pcVar7 = pcVar7 + -1;
      } while (*pcVar7 != '\\');
      pcVar4 = (code *)swi(0x21);
      bVar5 = (*pcVar4)();
      if (bVar5 < 3) {
        *(undefined1 *)0x2aa = 0x2e;
        *(undefined1 *)0x2ab = 0x5c;
      }
LAB_4011_90ca:
      FUN_4011_16fd();
      return;
    }
  } while( true );
}



// Function: FUN_4011_90dc @ 4011:90dc

uint __cdecl16near FUN_4011_90dc(void)

{
  uint *puVar1;
  uint uVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  undefined1 in_CF;
  bool bVar10;
  undefined4 uVar11;
  uint in_stack_00000000;
  
  while( true ) {
    *(undefined1 *)0x2aa = 0;
    pcVar6 = (code *)swi(0x21);
    uVar11 = (*pcVar6)();
    if (((bool)in_CF) || ((int)uVar11 == 0)) break;
    pcVar8 = (char *)0x2aa;
    iVar7 = 0x50;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar3 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar3 != '\r');
    puVar1 = (uint *)0x4f25;
    uVar2 = *puVar1;
    *puVar1 = (uint)(pcVar8 + -0x2a9 + *puVar1);
    uVar5 = (uint)CARRY2(uVar2,(uint)(pcVar8 + -0x2a9));
    uVar2 = *(uint *)0x4f27;
    bVar10 = CARRY2(uVar2,uVar5);
    *(uint *)0x4f27 = uVar2 + uVar5;
    pcVar6 = (code *)swi(0x21);
    uVar11 = (*pcVar6)();
    if (bVar10) break;
    pcVar9 = (char *)0x2aa;
    iVar7 = 0x50;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar3 = pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (*pcVar3 == ' ');
    bVar4 = pcVar9[-1];
    in_CF = bVar4 < 0xd;
    if ((bVar4 != 0xd) && (in_CF = bVar4 < 10, bVar4 != 10)) {
      pcVar8[-1] = '\0';
      return (uint)uVar11 & 0xff00;
    }
  }
  if ((int)uVar11 == 0) {
    return 0;
  }
  pcVar6 = (code *)swi(0x21);
  (*pcVar6)(uVar11);
  FUN_4011_1aeb();
  return in_stack_00000000;
}



// Function: FUN_4011_9195 @ 4011:9195

void __cdecl16near FUN_4011_9195(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *unaff_SI;
  char *unaff_DI;
  char *pcVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar5;
  
  iVar3 = 0x50;
  pcVar4 = unaff_DI;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  iVar3 = (int)pcVar4 - (int)unaff_DI;
  for (; *unaff_SI == ' '; unaff_SI = unaff_SI + 1) {
  }
  bVar5 = false;
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) break;
    pcVar2 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    pcVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    bVar5 = *pcVar1 == *pcVar2;
  } while (bVar5);
  if (bVar5) {
    for (; *unaff_SI == ' '; unaff_SI = unaff_SI + 1) {
    }
  }
  return;
}



// Function: FUN_4011_91d3 @ 4011:91d3

undefined4 __cdecl16near FUN_4011_91d3(void)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  bool bVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined2 in_DX;
  undefined2 uVar7;
  char *unaff_SI;
  char *pcVar8;
  undefined2 unaff_DS;
  undefined1 in_CF;
  
  *(undefined2 *)0x3c3 = 0;
  FUN_4011_9195();
  if ((bool)in_CF) {
    FUN_4011_9195();
    if ((bool)in_CF) {
      FUN_4011_9195();
      if ((bool)in_CF) {
        bVar4 = false;
        uVar6 = 0;
        lVar3 = 0;
        while( true ) {
          while( true ) {
            do {
              pcVar8 = unaff_SI;
              uVar7 = (undefined2)((ulong)lVar3 >> 0x10);
              unaff_SI = pcVar8 + 1;
              cVar1 = *pcVar8;
              uVar5 = CONCAT11((char)((ulong)lVar3 >> 8),cVar1);
              lVar3 = CONCAT22(uVar7,uVar5);
            } while (cVar1 == ' ');
            if (cVar1 != '-') break;
            *(undefined2 *)0x3c3 = 1;
            lVar3 = CONCAT22(uVar7,uVar5);
          }
          if (9 < (byte)(cVar1 - 0x30U)) break;
          bVar4 = true;
          lVar3 = (ulong)uVar6 * 10;
          uVar6 = (int)lVar3 + (uint)(byte)(cVar1 - 0x30U);
        }
        if ((!bVar4) || ((((cVar1 != '\0' && (cVar1 != ' ')) && (cVar1 != ']')) && (cVar1 != ':'))))
        {
          pcVar2 = (code *)swi(0x21);
          (*pcVar2)(uVar5,uVar7);
          FUN_4011_1b15(pcVar8,unaff_DS,uVar5);
          FUN_4011_1b15();
          FUN_4011_1ad9();
          FUN_4011_1b15();
          FUN_4011_1b15();
        }
      }
      else {
        uVar6 = 0xfffd;
      }
    }
    else {
      uVar6 = 0xffff;
    }
  }
  else {
    uVar6 = 0xfffe;
  }
  if (*(int *)0x3c3 == 1) {
    uVar6 = -uVar6;
  }
  return CONCAT22(in_DX,uVar6);
}



// Function: FUN_4011_92d0 @ 4011:92d0

int __cdecl16near FUN_4011_92d0(void)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined2 in_DX;
  int iVar5;
  byte *unaff_SI;
  byte *pbVar6;
  undefined2 unaff_DI;
  undefined2 unaff_DS;
  
  bVar3 = false;
  iVar5 = 0;
  do {
    do {
      pbVar6 = unaff_SI;
      bVar1 = *pbVar6;
      unaff_SI = pbVar6 + 1;
    } while (bVar1 == 0x20);
    if ((((bVar1 == 0) || (bVar1 == 0x20)) || (bVar1 == 0x5d)) ||
       ((bVar1 == 0x3a || (bVar1 < 0x30)))) goto LAB_4011_931e;
    if (bVar1 < 0x3a) {
      uVar4 = (uint)(byte)(bVar1 - 0x30);
    }
    else {
      if (bVar1 < 0x41) {
LAB_4011_931e:
        if (!bVar3) {
          pcVar2 = (code *)swi(0x21);
          (*pcVar2)(bVar1);
          FUN_4011_1b15(pbVar6,in_DX,unaff_DI);
          FUN_4011_1b15();
          FUN_4011_1ad9();
          FUN_4011_1b15();
          FUN_4011_1b15();
        }
        return iVar5;
      }
      if (bVar1 < 0x47) {
        uVar4 = (uint)(byte)(bVar1 - 0x37);
      }
      else {
        do {
          if (bVar1 < 0x61) goto LAB_4011_931e;
        } while (0x66 < bVar1);
        uVar4 = (uint)(byte)(bVar1 + 0xa9);
      }
    }
    bVar3 = true;
    iVar5 = iVar5 * 0x10 + uVar4;
  } while( true );
}



// Function: FUN_4011_938a @ 4011:938a

undefined2 __cdecl16near FUN_4011_938a(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  code *pcVar4;
  char cVar5;
  char *in_DX;
  char *unaff_SI;
  char *pcVar6;
  char *pcVar7;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  for (pcVar6 = unaff_SI; cVar5 = *pcVar6, cVar5 == ' '; pcVar6 = pcVar6 + 1) {
    unaff_SI = unaff_SI + 1;
  }
LAB_4011_939f:
  do {
    pcVar1 = in_DX;
    pcVar6 = unaff_SI;
    pcVar7 = in_DX + 2;
    if (in_DX[2] == '\0') {
      pcVar4 = (code *)swi(0x21);
      (*pcVar4)(cVar5,unaff_SI);
      FUN_4011_1b15(unaff_SI,pcVar6,unaff_ES);
      FUN_4011_1b15();
      FUN_4011_1ad9();
      FUN_4011_1b15();
      FUN_4011_1b15();
      return 0;
    }
    do {
      if (*pcVar7 == '\0') {
        if (*pcVar6 == '\0') {
          return *(undefined2 *)pcVar1;
        }
        in_DX = pcVar7 + 1;
        pcVar7 = (char *)0x0;
        if (in_DX != (char *)0x0) goto LAB_4011_939f;
      }
      pcVar3 = pcVar7;
      in_DX = pcVar7 + 1;
      pcVar2 = pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = in_DX;
    } while (*pcVar2 == *pcVar3);
    do {
      pcVar1 = in_DX;
      in_DX = in_DX + 1;
    } while (*pcVar1 != '\0');
    cVar5 = '\0';
  } while( true );
}



// Function: FUN_4011_9adc @ 4011:9adc

undefined2 __cdecl16near FUN_4011_9adc(void)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 in_BX;
  undefined2 unaff_DS;
  byte in_CF;
  bool bVar7;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  uint uVar8;
  
  FUN_4011_9ebb();
  if (!(bool)in_CF) {
    *(undefined2 *)0x37 = 1;
    *(undefined2 *)0x49 = 0;
    *(undefined2 *)0x71 = 0;
    FUN_4011_16a1();
    *(undefined2 *)0x73 = in_BX;
  }
  if (!(bool)in_CF) {
    *(undefined2 *)0x47 = 1;
    FUN_4011_9be8();
    if ((bool)in_CF) {
      in_CF = 1;
    }
    else {
      *(undefined2 *)0x3c9 = 0;
      do {
        do {
          uVar8 = *(uint *)0x79;
          in_CF = 0;
          in_OF = 0;
          in_SF = (int)uVar8 < 0;
          in_ZF = uVar8 == 0;
          in_PF = (POPCOUNT(uVar8 & 0xff) & 1U) == 0;
          if (!(bool)in_ZF) goto LAB_4011_9bda;
          uVar4 = *(uint *)0x7f;
          uVar8 = *(uint *)0x83;
          in_IF = 1;
          *(int *)0x3c9 = *(int *)0x3c9 + 1;
          if ((*(int *)0x3c9 == 0) && (*(int *)0x3cb = *(int *)0x3cb + 1, *(int *)0x3cb == 0)) {
            *(undefined2 *)0x3c9 = 0;
            bVar2 = in(*(int *)0x268 + *(int *)0xab);
            cVar3 = in(*(int *)0x268 + *(int *)0xab);
            in_CF = 0;
            in_OF = 0;
            in_SF = cVar3 < '\0';
            in_ZF = CONCAT11(cVar3,bVar2) == 0;
            in_PF = (POPCOUNT((uint)bVar2) & 1U) == 0;
            if ((bool)in_ZF) {
              FUN_4011_7cc4();
              goto LAB_4011_9bda;
            }
          }
        } while (uVar4 == *(uint *)0xc1);
        if (uVar4 < *(uint *)0xc1) {
          iVar6 = 0x7c00 - *(int *)0xc1;
          uVar4 = 0;
        }
        else {
          iVar6 = uVar4 - *(int *)0xc1;
        }
        bVar7 = CARRY2(*(int *)0x71 + *(int *)0xc1,*(uint *)0xc1);
        pcVar1 = (code *)swi(0x21);
        uVar5 = (*pcVar1)();
        if (bVar7) {
          in_CF = 0xfe0b < uVar5;
          in_OF = SCARRY2(uVar5,500);
          uVar5 = uVar5 + 500;
          in_SF = (int)uVar5 < 0;
          in_ZF = uVar5 == 0;
          in_PF = (POPCOUNT(uVar5 & 0xff) & 1U) == 0;
          FUN_4011_7cc4();
          goto LAB_4011_9bda;
        }
        in_CF = uVar5 < (uint)(iVar6 * 2);
        in_OF = SBORROW2(uVar5,iVar6 * 2);
        uVar5 = uVar5 + iVar6 * -2;
        in_SF = (int)uVar5 < 0;
        in_ZF = uVar5 == 0;
        in_PF = (POPCOUNT(uVar5 & 0xff) & 1U) == 0;
        if (!(bool)in_ZF) {
          FUN_4011_7cc4();
          goto LAB_4011_9bda;
        }
        *(uint *)0xc1 = uVar4;
        *(undefined2 *)0xbf = 1;
        *(undefined2 *)0x3c9 = 0;
        in_CF = 0;
        in_OF = 0;
        in_SF = (int)uVar8 < 0;
        in_PF = (POPCOUNT(uVar8 & 0xff) & 1U) == 0;
        in_ZF = 1;
      } while (uVar8 != 0);
    }
    FUN_4011_16be();
  }
LAB_4011_9bda:
  FUN_4011_068f((uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
                (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
                (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1));
  return *(undefined2 *)0x264;
}



// Function: FUN_4011_9be8 @ 4011:9be8

uint __cdecl16near FUN_4011_9be8(void)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  undefined1 uVar4;
  
  *(undefined2 *)0x3f = 0x100;
  if (*(int *)(*(int *)0x259 + 0x62) != -1) {
    *(int *)0x3f = *(int *)(*(int *)0x259 + 0x62) << 9;
  }
  *(undefined2 *)0x5b = *(undefined2 *)0x4f71;
  *(undefined2 *)0x59 = *(undefined2 *)0x4f73;
  *(undefined2 *)0x5d = *(undefined2 *)0x4f75;
  uVar4 = *(int *)0xb == 0;
  if ((*(int *)0xb != 1) || (FUN_4011_7cc4(), !(bool)uVar4)) {
    *(undefined2 *)0x3 = 0;
    *(undefined2 *)0x5 = 0;
    *(undefined2 *)0x7 = 0;
    *(undefined2 *)0x9 = 0;
    *(undefined2 *)0x2b = 0;
    uVar1 = *(undefined2 *)0x73;
    *(undefined2 *)0x75 = *(undefined2 *)0x71;
    *(undefined2 *)0x77 = uVar1;
    FUN_4011_7feb();
    if (!(bool)uVar4) {
      FUN_3e1d_1d2d();
      FUN_4011_198d();
      FUN_4011_9df5();
      if (!(bool)uVar4) {
        *(undefined2 *)0x3 = 0;
        *(undefined2 *)0x5 = 0;
        FUN_4011_9e13();
        uVar2 = in(*(int *)0x268 + 6);
        if (*(int *)0x21 != 4) {
          out(*(int *)0x268 + 6,uVar2 | 1);
        }
        *(undefined2 *)0x5b = *(undefined2 *)0x4f71;
        *(undefined2 *)0x59 = *(undefined2 *)0x4f73;
        *(undefined2 *)0x5d = *(undefined2 *)0x4f75;
        uVar2 = in(*(int *)0x268 + 4);
        uVar4 = 0xfffb < *(uint *)0x268;
        out(*(uint *)0x268 + 4,uVar2 & 0xcff);
        FUN_4011_7e56();
        FUN_4011_7feb();
        FUN_4011_595d();
        if (!(bool)uVar4) {
          out(*(undefined2 *)0x268,0);
          do {
            uVar2 = in(*(int *)0x268 + 6);
          } while ((uVar2 & 8) == 0);
          FUN_4011_9fb1();
          FUN_4011_9f89();
          uVar2 = in(*(int *)0x268 + 4);
          if (*(int *)0x1f == 0x60) {
            uVar3 = 0x4000;
          }
          else {
            uVar3 = 0x3000;
          }
          uVar3 = uVar2 & 0x8cff | uVar3;
          out(*(int *)0x268 + 4,uVar3);
          uVar3 = uVar3 | 0x8000;
          out(*(int *)0x268 + 4,uVar3);
          uVar1 = in(*(int *)0x268 + 6);
          out(*(int *)0x268 + 6,uVar1);
          uVar2 = 0x300;
          if (*(int *)0x21 == 4) {
            uVar2 = 0x200;
          }
          uVar3 = uVar3 | uVar2;
          out(*(int *)0x268 + 4,uVar3);
          *(undefined2 *)0xb = 1;
          if (*(int *)0x3c1 != 1) {
            return uVar3;
          }
          uVar2 = in(*(int *)0x268 + 6);
          do {
            uVar3 = in(*(int *)0x268 + 4);
          } while ((uVar3 & 0x80) != 0);
          out(*(int *)0x268 + 6,uVar2 & 0xfffe);
          return uVar2 & 0xfffe;
        }
      }
    }
  }
  uVar2 = FUN_4011_7e0a();
  return uVar2;
}



// Function: FUN_4011_9da5 @ 4011:9da5

undefined4 __cdecl16near FUN_4011_9da5(void)

{
  uint in_AX;
  undefined2 in_DX;
  byte in_BL;
  byte in_BH;
  undefined2 unaff_DS;
  
  out(*(int *)0x268 + 0xe,0xb4);
  out(*(int *)0x268 + 0xe,0x74);
  out(*(int *)0x268 + 0xc,(uint)in_BL);
  out(*(int *)0x268 + 0xc,(uint)in_BH);
  out(*(int *)0x268 + 10,in_AX & 0xff);
  out(*(int *)0x268 + 10,in_AX >> 8);
  return CONCAT22(in_DX,in_AX >> 8);
}



// Function: FUN_4011_9df5 @ 4011:9df5

void __cdecl16near FUN_4011_9df5(void)

{
  FUN_4011_7d02();
  return;
}



// Function: FUN_4011_9e13 @ 4011:9e13

void __cdecl16near FUN_4011_9e13(void)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined2 unaff_DS;
  
  uVar3 = in(*(int *)0x268 + 6);
  uVar3 = uVar3 & 0x30c0;
  if (*(int *)(*(int *)0x259 + 10) == 10) {
    uVar3 = uVar3 | 4;
  }
  uVar4 = 0;
  if (*(int *)(*(int *)0x259 + 0x5c) != 2) {
    uVar4 = 2;
  }
  *(undefined1 *)0x3ba = (char)uVar4;
  iVar6 = 0x46;
  uVar1 = *(uint *)0x26e;
  *(undefined2 *)0x4f75 = 0;
  if (99 < uVar1) {
    *(undefined2 *)0x4f75 = 1;
    iVar6 = 0x48;
  }
  *(undefined2 *)0x4f71 = *(undefined2 *)(*(int *)0x259 + iVar6);
  iVar6 = 0x4a;
  piVar5 = (int *)0x4f4f;
  while( true ) {
    if (*piVar5 == -1) {
      FUN_4011_7cc4();
      return;
    }
    if (*piVar5 == *(int *)0x26e) break;
    piVar5 = piVar5 + 2;
    iVar6 = iVar6 + 2;
  }
  out(*(int *)0x268 + 6,uVar3 | uVar4 | piVar5[1]);
  uVar2 = *(undefined2 *)(*(int *)0x259 + iVar6);
  *(undefined2 *)0x4f73 = uVar2;
  *(undefined2 *)0x26e = uVar2;
  return;
}



// Function: FUN_4011_9ebb @ 4011:9ebb

void __cdecl16near FUN_4011_9ebb(void)

{
  undefined2 unaff_DS;
  undefined1 in_CF;
  bool bVar1;
  
  FUN_4011_5ed2();
  if ((((!(bool)in_CF) &&
       (((*(int *)0x1b != 1 ||
         (((bVar1 = *(int *)0x276 == 0, *(int *)0x276 == 1 || (FUN_4011_7cc4(), !bVar1)) &&
          ((*(int *)0x1f != 0x60 ||
           (((*(int *)0x19 != 0 || (bVar1 = *(uint *)0x17 < 0x100, !bVar1)) ||
            (FUN_4011_7cc4(), !bVar1)))))))) &&
        ((bVar1 = *(int *)0x274 == 0, *(int *)0x274 != 1 || (FUN_4011_7cc4(), !bVar1)))))) &&
      ((bVar1 = *(int *)0x5f == 0, *(int *)0x5f != 1 || (FUN_4011_7cc4(), !bVar1)))) &&
     ((bVar1 = *(int *)0x27 == 0, *(int *)0x27 != 1 || (FUN_4011_7cc4(), !bVar1)))) {
    if (*(int *)0x61 == 1) {
      *(undefined2 *)0x1f = 0x60;
    }
    else if ((*(int *)0x1f != 0x60) && (*(int *)0x1f != 0x20)) {
      if (*(int *)0x1f == 0) {
        *(undefined2 *)0x1f = 0x20;
        if ((*(int *)0x272 != 0) || (300 < *(uint *)0x270)) {
          *(undefined2 *)0x1f = 0x60;
        }
      }
      else {
        FUN_4011_7cc4();
      }
    }
  }
  return;
}



// Function: FUN_4011_9f89 @ 4011:9f89

undefined4 __cdecl16near FUN_4011_9f89(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  uVar1 = in(*(int *)0x268 + 2);
  uVar1 = uVar1 & 0xff00 | *(int *)0x15 << 4 | *(uint *)0x13;
  out(*(int *)0x268 + 2,uVar1);
  return CONCAT22(*(int *)0x268 + 2,uVar1);
}



// Function: FUN_4011_9fb1 @ 4011:9fb1

void __cdecl16near FUN_4011_9fb1(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  while (uVar1 = in(*(int *)0x268 + 6), (uVar1 & 8) != 0) {
    in(*(undefined2 *)0x268);
  }
  return;
}



// Function: FUN_4011_9fc9 @ 4011:9fc9

void __cdecl16near FUN_4011_9fc9(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 unaff_DS;
  
  if (*(int *)(*(int *)0x259 + 0x46) == -0x8000) {
    iVar3 = 9;
    puVar4 = (undefined2 *)(*(int *)0x259 + 0x46);
    do {
      *puVar4 = 0x8000;
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    FUN_4011_7cc4();
  }
  else {
    iVar3 = *(int *)(*(int *)0x259 + 0x4a);
    iVar2 = *(int *)(*(int *)0x259 + 0x4c);
    iVar1 = *(int *)(*(int *)0x259 + 0x52);
    *(int *)(*(int *)0x259 + 0x4c) = iVar3;
    *(int *)(*(int *)0x259 + 0x52) = iVar3;
    *(int *)(*(int *)0x259 + 0x4a) = iVar2 + iVar3;
    iVar2 = *(int *)(*(int *)0x259 + 0x4e) + iVar3;
    *(int *)(*(int *)0x259 + 0x4e) = iVar2;
    *(int *)(*(int *)0x259 + 0x54) = iVar2;
    iVar2 = *(int *)(*(int *)0x259 + 0x50) + iVar3;
    *(int *)(*(int *)0x259 + 0x50) = iVar2;
    *(int *)(*(int *)0x259 + 0x56) = iVar2;
    *(int *)(*(int *)0x259 + 0x58) = iVar1 + iVar3;
  }
  return;
}



// Function: FUN_4011_a092 @ 4011:a092

undefined4 __cdecl16near FUN_4011_a092(void)

{
  int in_AX;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined2 unaff_DS;
  
  iVar2 = *(int *)*(undefined2 *)0x259 + 5;
  iVar3 = 0;
  if (((in_AX != 0) && (iVar3 = 4, in_AX != 1)) && (iVar3 = 8, in_AX != 0x65)) {
    iVar3 = 0xc;
  }
  puVar5 = (uint *)(*(int *)0x259 + 0x46 + iVar3);
  uVar6 = 0;
  *(undefined2 *)0x4f79 = 0;
  do {
    uVar1 = *puVar5;
    if (*(int *)0x4f79 == 1) {
      puVar5 = puVar5 + 1;
      *(undefined2 *)0x4f79 = 0;
      uVar1 = uVar1 >> 8;
    }
    else {
      *(undefined2 *)0x4f79 = 1;
      uVar1 = uVar1 & 0xff;
    }
    iVar3 = 0xc;
    uVar4 = 0x800;
    do {
      out(iVar2,(uVar4 & (uVar1 | uVar6)) != 0);
      uVar4 = uVar4 >> 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    in(iVar2);
    uVar6 = uVar6 + 0x100;
  } while (uVar6 != 0x400);
  return CONCAT22(iVar2,in_AX);
}



// Function: FUN_4c93_071d @ 4c93:071d

void FUN_4c93_071d(void)

{
  FUN_4c93_0727();
  FUN_2116_0782();
  return;
}



// Function: FUN_4c93_0727 @ 4c93:0727

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_4c93_0727(void)

{
  code *pcVar1;
  byte bVar2;
  char extraout_AH;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint in_CX;
  undefined2 in_DX;
  undefined2 uVar6;
  char cVar7;
  int in_BX;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int unaff_ES;
  undefined2 unaff_SS;
  undefined1 uVar12;
  bool bVar13;
  undefined4 uVar14;
  
  FUN_5335_06db();
  DAT_4011_3885 = unaff_ES;
  FUN_5335_0700(in_DX);
  DAT_4011_3846 = (0x532d - _DAT_4011_3844) * 0x10;
  pcVar1 = (code *)swi(0x21);
  bVar2 = (*pcVar1)();
  uVar12 = bVar2 < 3;
  bVar13 = bVar2 == 3;
  if (!(bool)uVar12) {
    DAT_4011_3b2a = 0xa0;
  }
  DAT_4011_3852 = unaff_SS;
  FUN_4011_14a3();
  iVar8 = in_BX;
  if (bVar13) {
    pcVar1 = (code *)swi(0x67);
    (*pcVar1)();
    DAT_4011_38cd = DAT_4011_38cd | 1;
    DAT_4011_38d8 = in_BX * 0x10;
    uVar12 = 0;
    iVar8 = 0;
    DAT_4011_3893 = in_BX;
    if (DAT_4011_38d8 != 0) {
      iVar8 = 1;
      pcVar1 = (code *)swi(0x67);
      (*pcVar1)();
      uVar12 = 0;
      if (extraout_AH == '\0') {
        pcVar1 = (code *)swi(0x67);
        (*pcVar1)();
      }
      else {
        DAT_4011_38d8 = 0;
      }
    }
  }
  cVar7 = (char)iVar8;
  FUN_4011_1503();
  if (!(bool)uVar12) {
    if (DAT_4011_38d8 != 0) {
      cVar7 = (char)DAT_4011_3893;
      pcVar1 = (code *)swi(0x67);
      (*pcVar1)();
    }
    uVar3 = (*DAT_4011_4d74)(0x5335);
    if (cVar7 == -0x60) {
      uVar3 = 0;
    }
    if (DAT_4011_38d8 != 0) {
      pcVar1 = (code *)swi(0x67);
      uVar3 = in_CX;
      (*pcVar1)();
    }
    if (uVar3 != 0) {
      iVar8 = (*DAT_4011_4d74)(0x5335);
      if (iVar8 == 0) {
        uVar3 = 0;
      }
      else {
        (*DAT_4011_4d74)(0x5335);
      }
    }
    DAT_4011_3897 = uVar3 >> 4;
    DAT_4011_38cd = DAT_4011_38cd | 2;
    DAT_4011_38da = uVar3;
    DAT_4011_38dc = (*DAT_4011_4d74)(0x5335);
    if (cVar7 == -0x60) {
      DAT_4011_38dc = 0;
    }
  }
  while( true ) {
    iVar8 = -1;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    DAT_4011_3887 = iVar8 + DAT_4011_3885;
    uVar4 = (DAT_4011_3887 - *(int *)0x0) - *(int *)0x16;
    uRam00045da7 = *(uint *)0x2;
    uVar3 = uRam00045da7;
    if ((DAT_4011_38cd & 3) != 0) {
      uVar3 = DAT_4011_3897 + DAT_4011_3893;
      if (*(uint *)0x22 <= uVar3) {
        uVar3 = *(uint *)0x22;
      }
      uVar9 = uRam00045da7 + *(int *)0x18 + (uVar3 + 7 >> 3);
      if ((DAT_4011_38cd & 1) != 0) {
        uVar9 = uVar9 + 2;
      }
      uVar3 = uVar9;
      if (((DAT_4011_38cd & 2) != 0) && (uVar3 = uVar9 + 2, (DAT_4011_38cd & 1) != 0)) {
        uVar3 = uVar9 + 3;
      }
    }
    if (uVar3 < uVar4) break;
    if (uVar4 <= *(uint *)0x2) goto LAB_4c93_0a32;
    DAT_4011_3893 = 0;
    DAT_4011_3897 = 0;
    DAT_4011_38d8 = 0;
    DAT_4011_38da = 0;
    DAT_4011_38dc = 0;
    DAT_4011_38cd = DAT_4011_38cd & 0xfc;
  }
  DAT_4011_38d6 = (uVar4 - uVar3) + -1;
  DAT_4011_38a7 = uVar3;
  DAT_5497_23ce = FUN_5335_0000();
  iVar8 = 0;
  if (DAT_5497_23ce != 0) {
    iVar8 = 0xf;
  }
  DAT_5497_2383 = (uint)(DAT_5497_23c8 + iVar8) >> 4;
  DAT_5497_2387 = (uint)(DAT_5497_23ca + iVar8) >> 4;
  FUN_4011_1a67();
  iVar8 = DAT_5497_2379;
  DAT_5497_23d2 = '\0';
  if ((*(uint *)0x26 & 0x3000) == 0x3000) {
    uVar3 = FUN_4011_1ac6();
    if ((2 < uVar3) && (*(uint *)0x2 < uVar3 - 3)) {
      DAT_5497_23d2 = -1;
      *(uint *)0x26 = *(uint *)0x26 & 0xbfff;
      if (*(int *)0x2c != -1) {
        *(int *)0x2c = *(int *)0x2c + *(int *)0x2 + DAT_5497_23c6;
      }
    }
  }
  iVar5 = DAT_5497_2375;
  iVar10 = 0;
  if ((DAT_5497_23bd & 1) != 0) {
    DAT_5497_2381 = 0;
    iVar10 = 2;
    if (DAT_5497_2383 == 0) {
      iVar10 = 0;
      DAT_5497_23bd = DAT_5497_23bd & 0xfe;
    }
  }
  iVar10 = iVar10 + (DAT_5497_2383 + 7 >> 3);
  iVar11 = iVar10;
  if (((DAT_5497_23bd & 2) != 0) &&
     (iVar11 = iVar10 + 2, DAT_5497_2385 = iVar10, DAT_5497_2387 == 0)) {
    DAT_5497_23bd = DAT_5497_23bd & 0xfd;
    iVar11 = iVar10;
  }
  iVar11 = iVar11 + (DAT_5497_2387 + 7 >> 3);
  DAT_5497_2395 = iVar11;
  if ((DAT_5497_23bd & 3) != 0) {
    DAT_5497_2395 = iVar11 + *(int *)0x18;
    DAT_5497_237f = iVar11;
  }
  iVar11 = DAT_5497_2395 + *(int *)0x2;
  iVar10 = DAT_5497_2397 - iVar11;
  iVar8 = *(int *)0x2 + iVar10 + DAT_5497_23c6;
  uVar3 = iVar11 + iVar10 + DAT_5497_23c6;
  DAT_5497_2397 = iVar8;
  if (DAT_5497_23d2 != '\0') {
    DAT_5497_2397 = 0;
    uVar3 = uVar3 - iVar8;
    DAT_5497_2399 = iVar8;
  }
  iVar8 = (DAT_5497_2377 - *(int *)0x0) - *(int *)0x16;
  if ((iVar8 != 0) && (uVar3 < iVar8 - 1U)) {
    iVar8 = ((DAT_5497_2377 - DAT_5497_2375) - uVar3) + -1;
    pcVar1 = (code *)swi(0x21);
    DAT_5497_23a9 = uVar3;
    DAT_5497_23ad = uVar3;
    (*pcVar1)();
    DAT_4011_38bf = *(uint *)0x2;
    if ((uint)(iVar8 + DAT_5497_2375) < DAT_4011_38bf) {
      *(uint *)0x2 = iVar8 + DAT_5497_2375;
    }
    pcVar1 = (code *)swi(0x21);
    DAT_5497_23a3 = (*pcVar1)();
    DAT_4011_38af = 0x39c3;
    DAT_4011_38b1 = 0x4c93;
    DAT_5497_237b = DAT_5497_2379 + 4;
    DAT_5497_2395 = DAT_5497_2395 + DAT_5497_23a3;
    DAT_5497_2385 = DAT_5497_2385 + DAT_5497_23a3;
    DAT_5497_2381 = DAT_5497_2381 + DAT_5497_23a3;
    DAT_5497_237f = DAT_5497_237f + DAT_5497_23a3;
    bVar13 = false;
    if (((DAT_4011_38cd & 1) != 0) &&
       ((DAT_4011_3893 == 0 || ((iVar8 = DAT_4011_3893, FUN_4011_05bb(), bVar13 && (iVar8 == 0))))))
    {
      DAT_4011_38cd = DAT_4011_38cd & 0xfe;
    }
    if (((DAT_4011_38cd & 2) != 0) &&
       ((bVar13 = false, DAT_4011_3897 == 0 ||
        ((uVar3 = DAT_4011_3897, FUN_4011_05bb(), bVar13 && (uVar3 == 0)))))) {
      DAT_4011_38cd = DAT_4011_38cd & 0xfd;
    }
    FUN_4011_1805();
    uVar6 = DAT_4011_3889;
    if ((*(int *)0x2c == -1) && (*(undefined2 *)0x2c = 0x7fff, *(uint *)0x4 < 0x400)) {
      uVar3 = *(uint *)0x4 >> 1;
      uVar4 = uVar3 | (uint)((*(uint *)0x4 & 1) != 0) << 0xf;
      uVar3 = CONCAT11((char)(uVar4 >> 1),
                       (byte)(uVar4 >> 9) | (byte)(((uint)((uVar3 & 1) != 0) << 0xf) >> 8));
      uVar4 = uVar3 - DAT_4011_38a7;
      if (uVar3 < DAT_4011_38a7) {
        uVar4 = 0;
      }
      if ((((uVar4 & 0x8000) == 0) && (*(uint *)0x2c = uVar4, DAT_4011_38e2 != '\0')) &&
         (uVar4 < *(uint *)0x2)) {
        *(undefined2 *)0x2c = *(undefined2 *)0x2;
      }
    }
    iVar8 = *(int *)0x2e;
    if ((((*(int *)0x2c != 0) &&
         ((uVar3 = *(uint *)0x26 & 0x3000, uVar3 < 0x2000 ||
          (iVar5 = FUN_4011_1b7c(), iVar8 < iVar5)))) && (uVar3 != 0x3000)) &&
       ((iVar5 = func_0x00041c95(), iVar8 < iVar5 && (uVar3 == 0x1000)))) {
      FUN_4011_1b7c();
    }
    iVar8 = DAT_4011_3885;
    iVar5 = *(int *)0x2 - DAT_4011_3885;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    DAT_4011_38cd = DAT_4011_38cd | 4;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    iRam0004056e = iVar8;
    if ((*(uint *)0x26 & 0x4000) == 0) {
      uVar3 = *(uint *)0x10 & 0x8080;
    }
    else {
      uVar3 = *(uint *)0x10 & 0x80;
    }
    iRam0004056c = iVar5;
    if (uVar3 == 0) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
    }
    FUN_5335_0700();
    FUN_5335_0700();
    DAT_4011_3867 = 0x56e3;
    DAT_4011_3863 = 0xfffe;
    iVar8 = 2;
    pcVar1 = (code *)swi(0x21);
    uVar14 = (*pcVar1)();
    uVar6 = (undefined2)((ulong)uVar14 >> 0x10);
    DAT_4011_3865 = (undefined2)uVar14;
    if ((*(uint *)0x26 & 0x40) == 0) {
      DAT_4011_38ce = DAT_4011_38ce | 0x20;
    }
    if ((*(uint *)0x26 & 0x200) != 0) {
      DAT_4011_38cd = DAT_4011_38cd | 0x80;
    }
    if ((*(uint *)0x26 & 0x800) != 0) {
      DAT_4011_38cf = DAT_4011_38cf | 1;
    }
    DAT_4011_38c5 = (DAT_4011_38b9 - DAT_4011_38a7) + *(int *)0x2;
    DAT_4011_38c9 = FUN_4c93_5dd0();
    DAT_4011_38c7 = iVar8;
    DAT_4011_38cb = uVar6;
    if (iVar8 != -1) {
      DAT_4011_38ce = DAT_4011_38ce | 0x10;
    }
    return;
  }
LAB_4c93_0a32:
  FUN_3e1d_1ef1();
  return;
}



// Function: FUN_4c93_0dab @ 4c93:0dab

undefined2 FUN_4c93_0dab(undefined2 param_1,undefined2 param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  byte in_CF;
  bool bVar10;
  byte in_ZF;
  bool bVar11;
  int in_stack_00000000;
  
  if ((DAT_4011_38d1 == '\0') && ((DAT_4011_38ce & 0xc) == 0)) {
    DAT_4011_38e1 = '\0';
    DAT_4011_38d1 = 0xff;
    bVar11 = (in_ZF & 1) != 0;
    bVar10 = (in_CF & 1) != 0;
    DAT_4011_3873 = (undefined1 *)&param_2;
    DAT_4011_386d._2_2_ = param_1;
    DAT_4011_38e0 = 0;
    DAT_4011_386d._0_2_ = in_stack_00000000;
    FUN_4c93_2fd2();
    if (bVar10) {
      iVar7 = 0x2fca;
      uVar6 = 0x4000;
    }
    else {
      iVar7 = (int)DAT_4011_386d;
      uVar6 = DAT_4011_386d._2_2_;
      if (bVar11) {
        uVar6 = 0xe52;
        pcVar8 = (code *)0xe93;
        if (DAT_4011_38e1 != '\0') {
          uVar6 = 0x1341;
          pcVar8 = (code *)0x1369;
        }
        *(undefined2 *)((int)DAT_4011_386d + -4) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x0004d76d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*pcVar8)();
        return uVar6;
      }
    }
    uVar5 = 0x1216;
    pcVar8 = (code *)0x1251;
    if (DAT_4011_38e1 != '\0') {
      uVar5 = 0x147c;
      pcVar8 = (code *)0x149c;
    }
    *(undefined2 *)(iVar7 + -4) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0004d74f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*pcVar8)();
    return uVar6;
  }
  DAT_4011_386d = CONCAT22(param_1,in_stack_00000000);
  DAT_4011_3873 = (undefined1 *)&param_2;
  if ((DAT_4011_38d1 == '\0') && ((DAT_4011_38ce & 8) == 0)) {
    if ((uint)(param_3 - *(int *)0x2) < *(uint *)0x4) {
      DAT_4011_38ce = DAT_4011_38ce & 0xfb;
      DAT_4011_386d = CONCAT22(param_1,in_stack_00000000 - 5U);
                    /* WARNING: Could not recover jumptable at 0x0004d60b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)(ulong)(in_stack_00000000 - 5U))();
      return uVar6;
    }
    uVar6 = FUN_4c93_1695();
    return uVar6;
  }
  iVar4 = thunk_FUN_3e1d_1f4c();
  iVar9 = 0xd08;
  iVar7 = 0xd12;
  if ((DAT_4011_38ce & 8) != 0) {
    iVar9 = 0xd4d;
    iVar7 = 0xd57;
  }
  while( true ) {
    uVar3 = in(iVar7 + iRam000403c7);
    *(undefined1 *)(iVar4 + 0x53c8) = uVar3;
    iVar4 = iVar4 + 1;
    if (iVar4 == 6) break;
    out(*(int *)(iVar9 + 0xe) + iRam000403c5,(char)iVar4);
    iVar7 = *(int *)(iVar9 + 0xe);
  }
  iVar7 = 0;
  do {
    out(*(int *)(iVar9 + 0xe) + iRam000403c5,(char)iVar7);
    puVar1 = (undefined1 *)(iVar7 + 0x53c8);
    uVar2 = (uint)iVar7 >> 8;
    out(*(int *)(iVar9 + 0xe) + iRam000403c7,*puVar1);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 6);
  return CONCAT11((char)uVar2,*puVar1);
}



// Function: FUN_4c93_167b @ 4c93:167b

void FUN_4c93_167b(void)

{
  FUN_3e1d_1ef1();
  return;
}



// Function: FUN_4c93_1695 @ 4c93:1695

undefined4 FUN_4c93_1695(void)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  int in_stack_0000000a;
  
  thunk_FUN_3e1d_1f4c();
  FUN_4011_0df3();
  if ((DAT_4011_38ce & 4) == 0) {
    DAT_4011_1686 = 0;
  }
  else {
    FUN_4011_0df3();
    FUN_4011_0df3();
    FUN_4011_0df3();
    FUN_4011_0df3();
  }
  iVar4 = 0x1702;
  while( true ) {
    uVar3 = in(iVar4 + iRam000403c7);
    *(undefined1 *)(in_stack_0000000a + 0x53c8) = uVar3;
    in_stack_0000000a = in_stack_0000000a + 1;
    if (in_stack_0000000a == 6) break;
    out(iRam00041706 + iRam000403c5,(char)in_stack_0000000a);
    iVar4 = iRam00041706;
  }
  iVar4 = 0;
  do {
    out(iRam00041706 + iRam000403c5,(char)iVar4);
    puVar1 = (undefined1 *)(iVar4 + 0x53c8);
    uVar2 = (uint)iVar4 >> 8;
    out(iRam00041706 + iRam000403c7,*puVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 6);
  return CONCAT22(iRam00041706 + iRam000403c7,CONCAT11((char)uVar2,*puVar1));
}



// Function: FUN_4c93_1c61 @ 4c93:1c61

undefined2 __cdecl16far FUN_4c93_1c61(undefined2 *param_1)

{
  undefined2 in_AX;
  
  *param_1 = DAT_4011_3842;
  return in_AX;
}



// Function: FUN_4c93_1c75 @ 4c93:1c75

void __cdecl16far FUN_4c93_1c75(void)

{
  FUN_4c93_1d49();
  return;
}



// Function: FUN_4c93_1d49 @ 4c93:1d49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl16near FUN_4c93_1d49(void)

{
  uint uVar1;
  undefined2 in_AX;
  undefined2 in_DX;
  uint extraout_DX;
  uint extraout_DX_00;
  uint extraout_DX_01;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  
  FUN_4c93_1dbd();
  FUN_4c93_2b22();
  uVar4 = (undefined2)((ulong)_DAT_4011_3842 >> 0x10);
  uVar2 = extraout_DX;
  if ((int)extraout_DX < (int)_DAT_4011_3842) {
    _DAT_4011_3842 = CONCAT22(uVar4,(int)_DAT_4011_3842 + -10);
    do {
      FUN_4c93_2b22();
      uVar1 = DAT_4011_3842;
      uVar2 = extraout_DX_00;
      if (DAT_4011_3842 <= extraout_DX_00) break;
      uVar3 = DAT_4011_3842 - 10;
      _DAT_4011_3842 = CONCAT22(_DAT_4011_3844,uVar3);
      DAT_4011_384c = *(undefined2 *)(uVar1 - 4);
      FUN_4c93_1dbd();
      uVar2 = extraout_DX_01;
    } while (extraout_DX_01 < uVar3);
  }
  _DAT_4011_3842 = CONCAT22(_DAT_4011_3844,uVar2);
  DAT_4011_3848 = 0;
  return CONCAT22(in_DX,in_AX);
}



// Function: FUN_4c93_1dbd @ 4c93:1dbd

void __cdecl16near FUN_4c93_1dbd(void)

{
  uint in_AX;
  int iVar1;
  int in_DX;
  int unaff_DI;
  
  if (((((in_AX & 0x8000) != 0) && ((in_AX & 0x3fff) != 0)) &&
      (iVar1 = ((in_AX & 0x3fff) - 1) * 2 + DAT_4011_388b, (*(uint *)0x0 & 0x20) != 0)) &&
     (*(uint *)0x0 = *(uint *)0x0 & 0x7fff, unaff_DI != in_DX)) {
    FUN_4c93_2d5a();
  }
  return;
}



// Function: FUN_4c93_2ae5 @ 4c93:2ae5

undefined2 __cdecl16near FUN_4c93_2ae5(void)

{
  undefined2 unaff_ES;
  undefined2 in_stack_00000000;
  
  if ((*(uint *)0x0 & 0x21) == 0x21) {
    if (*(uint *)0x6 < 3) {
      if (*(uint *)0x6 == 2) {
        FUN_4011_2076();
      }
      else if ((*(uint *)0x0 & 0x8000) != 0) {
        return in_stack_00000000;
      }
      FUN_4011_2076();
      FUN_4c93_2d5a();
    }
    else {
      FUN_4011_2076();
    }
  }
  return in_stack_00000000;
}



// Function: FUN_4c93_2b22 @ 4c93:2b22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16near FUN_4c93_2b22(void)

{
  undefined2 in_AX;
  uint in_DX;
  uint uVar1;
  undefined2 uVar2;
  bool bVar3;
  
  uVar2 = (undefined2)((ulong)_DAT_4011_3842 >> 0x10);
  uVar1 = (uint)_DAT_4011_3842;
  if (*(int *)(uVar1 - 2) != -1) {
    return in_AX;
  }
  if (in_DX < uVar1) {
    do {
      if (*(int *)(uVar1 - 2) != -1) goto LAB_4c93_2b6f;
      *(uint *)0x0 = *(uint *)0x0 ^ *(uint *)(uVar1 - 4) & 0x8000;
      FUN_4c93_2ae5();
      bVar3 = 3 < uVar1;
      uVar1 = uVar1 - 4;
    } while (bVar3 && uVar1 != 0);
    if (uVar1 != 0) {
      uVar2 = FUN_4c93_167b();
      return uVar2;
    }
  }
LAB_4c93_2b6f:
  _DAT_4011_3842 = CONCAT22(_DAT_4011_3844,uVar1);
  return in_AX;
}



// Function: FUN_4c93_2d5a @ 4c93:2d5a

void __cdecl16near FUN_4c93_2d5a(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int unaff_ES;
  undefined2 uVar4;
  
  if ((*(uint *)0x0 & 0x3800) != 0) {
    if ((*(uint *)0x0 & 0x2000) == 0) {
      if ((*(uint *)0x0 & 0x800) != 0) {
        if ((*(uint *)0x0 & 6) == 0) {
          *(uint *)0x0 = *(uint *)0x0 | 0x800;
        }
        else {
          uVar4 = DAT_4011_3891;
          if ((*(uint *)0x0 & 2) == 0) {
            uVar4 = DAT_4011_3895;
          }
          iVar3 = ((uint)(unaff_ES - DAT_4011_388b) >> 1) + DAT_4011_388f;
          if (iVar3 != *(int *)0x16) {
            uVar1 = *(undefined2 *)0xe;
            iVar2 = *(int *)0xc;
            *(int *)0xc = iVar2;
            if (iVar2 == 0) {
              *(undefined2 *)0x18 = uVar1;
            }
            else {
              *(undefined2 *)0xe = uVar1;
            }
            uVar1 = *(undefined2 *)0x16;
            *(int *)0x16 = iVar3;
            *(undefined2 *)0xe = 0;
            *(undefined2 *)0xc = uVar1;
            *(int *)0xe = iVar3;
          }
        }
      }
      *(undefined2 *)0x6 = 0;
      if ((((*(uint *)0x0 & 1) != 0) && ((*(uint *)0x0 & 0x20) == 0)) && (*(int *)0x18 != 0)) {
        FUN_4011_1eb9();
      }
    }
    else if ((((*(uint *)0x0 & 1) != 0) && (*(int *)0x18 != 0)) &&
            (iVar3 = *(int *)0x18 + -1, (*(byte *)0x0 & 4) == 0)) {
      *(undefined2 *)0x6 = 0x1000;
      func_0x00042015();
    }
    return;
  }
  return;
}



// Function: FUN_4c93_2fd2 @ 4c93:2fd2

void __cdecl16near FUN_4c93_2fd2(void)

{
  int unaff_BP;
  uint uVar1;
  uint uVar2;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  bool bVar3;
  
  *(int *)0x3981 = *(int *)0x397d + -5;
  uVar2 = (uint)((ulong)*(undefined4 *)(unaff_BP + 0x18) >> 0x10);
  uVar1 = (uint)*(undefined4 *)(unaff_BP + 0x18);
  bVar3 = uVar2 < 0x4c93;
  if ((uVar2 == 0x4c93) && (bVar3 = uVar1 < 0x1554, uVar1 == 0x1554)) {
    return;
  }
  FUN_4c93_302e();
  if (!bVar3) {
    FUN_4c93_3018();
    if (!bVar3) {
      FUN_4c93_3094();
      if (!bVar3) {
        FUN_4c93_3046();
        if (!bVar3) {
          FUN_4c93_3367();
          if (!bVar3) {
            FUN_4c93_3322();
            if (!bVar3) {
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// Function: FUN_4c93_3018 @ 4c93:3018

void __cdecl16near FUN_4c93_3018(void)

{
  int unaff_DI;
  undefined2 unaff_ES;
  bool bVar1;
  
  if (*(char *)(unaff_DI + -3) == -0x18) {
    bVar1 = *(int *)(unaff_DI + -2) + unaff_DI == 0;
    FUN_4c93_3254();
    if (bVar1) {
      return;
    }
  }
  return;
}



// Function: FUN_4c93_302e @ 4c93:302e

void __cdecl16near FUN_4c93_302e(void)

{
  int unaff_DI;
  undefined2 unaff_ES;
  bool bVar1;
  
  bVar1 = *(char *)(unaff_DI + -5) == -0x66;
  if (bVar1) {
    FUN_4c93_3254();
    if (bVar1) {
      return;
    }
  }
  return;
}



// Function: FUN_4c93_3046 @ 4c93:3046

void __cdecl16near FUN_4c93_3046(void)

{
  int unaff_DI;
  undefined2 unaff_ES;
  bool bVar1;
  
  bVar1 = *(char *)(unaff_DI + -1) == -0x34;
  if (bVar1) {
    FUN_4c93_3080();
    if (bVar1) {
      return;
    }
  }
  else {
    bVar1 = *(char *)(unaff_DI + -1) == -0x32;
    if (bVar1) {
      FUN_4c93_3080();
      if (bVar1) {
        return;
      }
    }
  }
  if (*(char *)(unaff_DI + -2) == -0x33) {
    bVar1 = *(char *)(unaff_DI + -1) == '\0';
    FUN_4c93_3080();
    if (bVar1) {
      return;
    }
  }
  return;
}



// Function: FUN_4c93_3080 @ 4c93:3080

void __cdecl16near FUN_4c93_3080(void)

{
  FUN_4c93_3254();
  return;
}



// Function: FUN_4c93_3094 @ 4c93:3094

void __cdecl16near FUN_4c93_3094(void)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int unaff_BP;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar6;
  
  iVar5 = -2;
  iVar4 = 3;
  do {
    if (*(char *)(iVar5 + unaff_DI) == -1) {
      bVar1 = *(byte *)(iVar5 + unaff_DI + 1);
      uVar2 = CONCAT11(bVar1,bVar1) & 0xff30;
      if ((char)uVar2 == '\x10') {
        *(undefined2 *)0x2fc8 = *(undefined2 *)(unaff_BP + 8);
        bVar3 = (byte)(uVar2 >> 8);
        if ((bVar3 & 199) == 6) {
          if (iVar5 == -4) {
            *(undefined2 *)0x2fc6 = *(undefined2 *)(unaff_DI + -2);
            uVar6 = 1;
LAB_4c93_311e:
            FUN_4c93_31c4();
LAB_4c93_3121:
            FUN_4c93_3254();
            if (((bool)uVar6) || (FUN_4c93_3254(), (bool)uVar6)) {
              return;
            }
          }
        }
        else {
          uVar2 = CONCAT11(bVar3,bVar3) & 0xffc0;
          if ((bVar1 & 0xc0) == 0) {
            if (iVar5 == -2) {
              *(undefined2 *)0x2fc6 = 0;
LAB_4c93_311b:
              uVar6 = 1;
              FUN_4c93_3179();
              goto LAB_4c93_311e;
            }
          }
          else if ((bVar3 & 0xc0) == 0x40) {
            if (iVar5 == -3) {
              *(int *)0x2fc6 = (int)*(char *)(unaff_DI + -1);
              goto LAB_4c93_311b;
            }
          }
          else if ((char)uVar2 == -0x40) {
            if (((iVar5 == -2) && ((bVar1 & 8) == 0)) &&
               (uVar6 = ((byte)(uVar2 >> 8) & 7) == 4, !(bool)uVar6)) {
              FUN_4c93_3147();
              goto LAB_4c93_3121;
            }
          }
          else if (iVar5 == -4) {
            *(undefined2 *)0x2fc6 = *(undefined2 *)(unaff_DI + -2);
            goto LAB_4c93_311b;
          }
        }
      }
    }
    iVar5 = iVar5 + -1;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return;
    }
  } while( true );
}



// Function: FUN_4c93_3147 @ 4c93:3147

undefined2 __cdecl16near FUN_4c93_3147(void)

{
  undefined2 in_AX;
  byte bVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  bVar1 = (byte)((uint)in_AX >> 8);
  *(undefined2 *)0x2fca = *(undefined2 *)(unaff_BP + *(char *)(ulong)((bVar1 & 7) + 0x3171));
  *(undefined2 *)0x2fcc = *(undefined2 *)0x397f;
  *(undefined2 *)0x2fce = 0;
  *(undefined2 *)0x2fd0 = 0xffff;
  return CONCAT11(bVar1,bVar1);
}



// Function: FUN_4c93_3179 @ 4c93:3179

void __cdecl16near FUN_4c93_3179(void)

{
  byte bVar1;
  undefined2 in_AX;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  bVar1 = (byte)((uint)in_AX >> 8);
  iVar3 = 2;
  iVar4 = 0x31b4;
  do {
    iVar2 = (int)*(char *)(ulong)(iVar4 + (uint)(bVar1 & 7));
    if (-1 < iVar2) {
      *(int *)0x2fc6 = *(int *)0x2fc6 + *(int *)(unaff_BP + iVar2);
    }
    iVar4 = iVar4 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  bVar1 = bVar1 & 7;
  if ((1 < bVar1) && ((bVar1 < 4 || (bVar1 == 6)))) {
    *(undefined2 *)0x2fc8 = unaff_SS;
  }
  return;
}



// Function: FUN_4c93_31c4 @ 4c93:31c4

void __cdecl16near FUN_4c93_31c4(void)

{
  byte extraout_AH;
  byte bVar1;
  int in_BX;
  int unaff_BP;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  FUN_4c93_322c();
  *(undefined2 *)0x2fce = 0;
  *(undefined2 *)0x2fd0 = 0xffff;
  bVar1 = *(byte *)(in_BX + unaff_DI + -1);
  if ((bVar1 & 0xe7) == 0x26) {
    bVar1 = bVar1 & 0x18;
    if (bVar1 == 0) {
      *(undefined2 *)0x2fc8 = *(undefined2 *)(unaff_BP + 6);
    }
    else if (bVar1 == 8) {
      if ((extraout_AH & 8) == 0) {
        *(undefined2 *)0x2fc8 = *(undefined2 *)0x397f;
      }
      else {
        *(undefined2 *)0x2fc8 = *(undefined2 *)(unaff_BP + 0x1a);
      }
    }
    else if (bVar1 == 0x18) {
      *(undefined2 *)0x2fc8 = *(undefined2 *)(unaff_BP + 8);
    }
    else {
      *(undefined2 *)0x2fc8 = unaff_SS;
    }
    FUN_4c93_322c(in_BX);
  }
  return;
}



// Function: FUN_4c93_322c @ 4c93:322c

void __cdecl16near FUN_4c93_322c(void)

{
  ulong uVar1;
  byte in_AH;
  undefined2 *in_BX;
  undefined2 *puVar2;
  undefined2 unaff_DS;
  
  uVar1 = (ulong)DAT_4011_2eb6 >> 0x10;
  puVar2 = (undefined2 *)DAT_4011_2eb6;
  *in_BX = *DAT_4011_2eb6;
  if ((in_AH & 8) != 0) {
    in_BX[1] = puVar2[1];
    return;
  }
  in_BX[1] = *(undefined2 *)0x397f;
  return;
}



// Function: FUN_4c93_3254 @ 4c93:3254

uint * __cdecl16near FUN_4c93_3254(void)

{
  uint *puVar1;
  byte bVar2;
  uint *in_AX;
  uint uVar3;
  int iVar4;
  int in_DX;
  uint *puVar5;
  undefined2 unaff_DS;
  bool bVar6;
  
  if ((in_DX == 0) && (in_AX == (uint *)0x0)) {
    return (uint *)0x0;
  }
  if ((in_AX == (uint *)*(undefined2 *)0x3981) && (in_DX == *(int *)0x397f)) {
    return (uint *)CONCAT22(in_DX,in_AX);
  }
  bVar2 = (byte)*in_AX;
  uVar3 = (uint)bVar2;
  if (bVar2 == 0x9a) {
    uVar3 = (uint)*(byte *)((int)in_AX + 5);
  }
  else if (bVar2 == 0xe8) {
    uVar3 = (uint)*(byte *)((int)in_AX + 3);
  }
  else if (in_AX[2] == 0x447) {
    uVar3 = *in_AX;
    if ((uVar3 == 0xe389) || (uVar3 == 0xdc8b)) {
      if (in_AX[1] == 0x8136) {
        puVar5 = (uint *)((int)in_AX + 1);
      }
      else {
        puVar5 = in_AX;
        if (in_AX[1] != 0x8336) goto LAB_4c93_329f;
      }
      uVar3 = (uint)*(byte *)((int)puVar5 + 7);
    }
  }
  else if ((in_AX[2] == 0x45f) && ((uVar3 = *in_AX, uVar3 == 0xe389 || (uVar3 == 0xdc8b)))) {
    if ((in_AX[1] != 0xc436) || (in_AX[3] != 0x8b26)) goto LAB_4c93_329f;
    iVar4 = 8;
    puVar5 = in_AX + 4;
    bVar6 = puVar5 == (uint *)0x0;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      puVar1 = puVar5;
      puVar5 = (uint *)((int)puVar5 + 1);
      bVar6 = (byte)*puVar1 == 0x8b;
    } while (!bVar6);
    if (((!bVar6) || (*(int *)(byte *)((int)puVar5 + 1) != 0x136)) ||
       (*(int *)(byte *)((int)puVar5 + 3) != 0x447)) goto LAB_4c93_329f;
    uVar3 = (uint)*(byte *)((int)puVar5 + 5);
  }
  if ((char)uVar3 == -0x16) {
    FUN_4c93_3254();
  }
LAB_4c93_329f:
  return (uint *)CONCAT22(in_DX,in_AX);
}



// Function: FUN_4c93_3322 @ 4c93:3322

void __cdecl16near FUN_4c93_3322(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int unaff_DI;
  undefined2 unaff_ES;
  
  iVar3 = 4;
  while (*(int *)(unaff_DI + -5) != -0x74da) {
    unaff_DI = unaff_DI + -1;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return;
    }
  }
  uVar2 = CONCAT11(*(undefined1 *)(unaff_DI + -3),*(undefined1 *)(unaff_DI + -3)) & 0x3fff;
  if ((char)(uVar2 >> 8) != '\x1f') {
    return;
  }
  cVar1 = (char)uVar2;
  iVar3 = unaff_DI;
  if (((cVar1 != '\x1f') && (iVar3 = unaff_DI + 1, cVar1 != '_')) &&
     (iVar3 = unaff_DI + 2, cVar1 != -0x61)) {
    return;
  }
  if ((char)(*(uint *)(iVar3 + -2) >> 8) == -0x21) {
    return;
  }
  if ((*(uint *)(iVar3 + -2) & 0x3fff) != 0x1fff) {
    return;
  }
  return;
}



// Function: FUN_4c93_3367 @ 4c93:3367

void __cdecl16near FUN_4c93_3367(void)

{
  uint uVar1;
  int unaff_DI;
  undefined2 unaff_ES;
  bool bVar2;
  
  if (((*(char *)(unaff_DI + -1) == -0x35) && ((*(uint *)(unaff_DI + -3) & 0xf8f8) == 0x5050)) &&
     ((((*(char *)(unaff_DI + -7) == '\x0e' &&
        ((*(char *)(unaff_DI + -6) == 'h' && (*(int *)(unaff_DI + -5) == unaff_DI)))) ||
       ((*(char *)(unaff_DI + -8) == '\x0e' &&
        (((*(int *)(unaff_DI + -6) == unaff_DI &&
          (uVar1 = CONCAT11(*(undefined1 *)(unaff_DI + -4),*(undefined1 *)(unaff_DI + -4)) & 0xf8ff,
          (char)(uVar1 >> 8) == 'P')) &&
         ((byte)((byte)uVar1 ^ 0x50 | 0xb8) == *(byte *)(unaff_DI + -7))))))) &&
      ((((*(byte *)(unaff_DI + -3) & 7) != 4 &&
        (bVar2 = (*(byte *)(unaff_DI + -2) & 7) == 4, !bVar2)) && (FUN_4c93_3254(), bVar2)))))) {
    return;
  }
  return;
}



// Function: FUN_4c93_5dd0 @ 4c93:5dd0

undefined2 __cdecl16far FUN_4c93_5dd0(void)

{
  return 0x5dd8;
}



// Function: FUN_5335_0000 @ 5335:0000

undefined2 __cdecl16far FUN_5335_0000(void)

{
  int in_AX;
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined2 in_CX;
  uint in_DX;
  int in_BX;
  undefined2 unaff_SI;
  uint *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  DAT_4c93_38ea = in_CX;
  if (in_BX != 1) {
    uVar1 = in_AX + 1U >> 1;
    uVar2 = FUN_5335_023a();
    DAT_4c93_38e8 = uVar2 & 0xfff8;
    if (uVar1 <= DAT_4c93_38e8) {
      DAT_4c93_38e7 = 'E';
    }
    unaff_DI[1] = DAT_4c93_38e8 << 1;
    iVar3 = FUN_5335_023a();
    unaff_DI[2] = iVar3 << 1;
    if (unaff_DI[2] == 0 && unaff_DI[1] == 0) {
      FUN_5335_023a();
    }
    bVar4 = 7;
    uVar2 = FUN_5335_023a();
    if ((DAT_4c93_38e8 < uVar2) && (DAT_4c93_38e8 = uVar2, uVar1 <= uVar2)) {
      DAT_4c93_38e7 = 'C';
    }
    *unaff_DI = uVar2 << (bVar4 & 0x1f);
    iVar3 = uVar1 * 2;
    if (DAT_4c93_38e7 == 'N') {
      *unaff_DI = 0;
      unaff_DI[2] = 0;
      unaff_DI[1] = 0;
    }
    else {
      if (DAT_4c93_38e7 == 'C') {
        in_DX = in_DX + uVar1 * -2;
      }
      else {
        iVar3 = 0;
      }
      if (in_DX < unaff_DI[1]) {
        in_DX = in_DX + 0xf & 0xfff0;
        unaff_DI[1] = in_DX;
      }
      uVar1 = in_DX - unaff_DI[1];
      if (uVar1 < unaff_DI[2]) {
        unaff_DI[2] = uVar1;
      }
      uVar1 = (uVar1 - unaff_DI[2]) + iVar3;
      if ((uVar1 < 0x280) && (uVar1 = uVar1 * 0x40, uVar1 < *unaff_DI)) {
        *unaff_DI = uVar1;
      }
    }
    return 0;
  }
  DAT_4c93_37e2._0_2_ = unaff_SI;
  DAT_4c93_37e2._2_2_ = unaff_DS;
  FUN_5335_033a();
  FUN_5335_033a();
  FUN_5335_033a();
  iVar3 = FUN_5335_0443();
  unaff_DI[1] = iVar3 << 4;
  iVar3 = FUN_5335_0443();
  unaff_DI[2] = iVar3 << 4;
  uVar1 = FUN_5335_0443();
  *unaff_DI = uVar1;
  if (in_DX <= unaff_DI[1]) {
    unaff_DI[1] = in_DX;
    unaff_DI[2] = 0;
  }
  if (in_DX - unaff_DI[1] <= unaff_DI[2]) {
    unaff_DI[2] = in_DX - unaff_DI[1];
  }
  return 1;
}



// Function: FUN_5335_023a @ 5335:023a

undefined4 __cdecl16near FUN_5335_023a(void)

{
  uint in_AX;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined2 in_CX;
  undefined2 in_DX;
  uint in_BX;
  
  uVar3 = in_BX & 0xff00;
  DAT_4c93_3905 = FUN_5335_048f();
  DAT_4c93_3906 = uVar3;
  DAT_4c93_3908 = in_CX;
  if (in_AX == 0) {
    FUN_5335_02b2();
    FUN_5335_02b2();
    uVar3 = 0;
  }
  else {
    uVar1 = FUN_5335_02b2();
    iVar2 = FUN_5335_02b2();
    uVar3 = -(iVar2 - in_AX);
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    if (in_AX <= uVar3) {
      uVar3 = in_AX;
    }
    if (uVar1 <= uVar3) {
      uVar3 = uVar1;
    }
  }
  return CONCAT22(in_DX,uVar3);
}



// Function: FUN_5335_02b2 @ 5335:02b2

void __cdecl16near FUN_5335_02b2(void)

{
  DAT_4c93_3906 = DAT_4c93_3908;
  DAT_4c93_3905 = DAT_4c93_3905 >> 2;
  return;
}



// Function: FUN_5335_033a @ 5335:033a

/* WARNING: Removing unreachable block (ram,0x0005375b) */

undefined4 __cdecl16near FUN_5335_033a(void)

{
  undefined2 in_AX;
  uint uVar1;
  int iVar2;
  uint in_CX;
  int in_DX;
  int in_BX;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined1 in_CF;
  
  uVar3 = CONCAT11((char)((uint)in_BX >> 8),1);
  uVar1 = in_CX;
  DAT_4c93_3b11 = in_DX;
  DAT_4c93_3905 = FUN_5335_048f();
  DAT_4c93_3906 = uVar3;
  DAT_4c93_3908 = uVar1;
  if (!(bool)in_CF) {
    uVar5 = (undefined2)((ulong)DAT_4c93_37e2 >> 0x10);
    iVar4 = (int)DAT_4c93_37e2;
    if ((DAT_4c93_3905 & 1) != 0) {
      *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) & ~in_CX;
      uVar1 = DAT_4c93_3906;
      if (DAT_4c93_3b11 == 0) {
        if ((DAT_4c93_3905 & 2) == 0) {
          uVar1 = DAT_4c93_3906 >> 4;
        }
        else {
          *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | in_CX;
        }
        *(uint *)(in_BX + iVar4) = uVar1;
      }
      else {
        if ((DAT_4c93_3905 & 2) == 0) {
          if (DAT_4c93_3906 < 0x400) {
            uVar1 = DAT_4c93_3906 << 6;
          }
          else {
            uVar1 = 0xffff;
          }
        }
        else {
          *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | in_CX;
        }
        *(uint *)(iVar4 + 0x14) = uVar1;
        *(uint *)(iVar4 + 0x1c) = uVar1;
        *(uint *)(iVar4 + 0x20) = uVar1;
      }
    }
    if ((DAT_4c93_3905 & 4) != 0) {
      *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) & ~(in_CX >> 1);
      uVar1 = DAT_4c93_3908;
      if (DAT_4c93_3b11 == 0) {
        if ((DAT_4c93_3905 & 8) == 0) {
          uVar1 = DAT_4c93_3908 + 0xf >> 4;
        }
        else {
          *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | in_CX >> 1;
        }
        *(uint *)(in_BX + -2 + iVar4) = uVar1;
      }
      else {
        if (DAT_4c93_3908 < 0x400) {
          iVar2 = DAT_4c93_3908 << 6;
        }
        else {
          iVar2 = -1;
        }
        *(int *)(iVar4 + 0x12) = iVar2;
        *(int *)(iVar4 + 0x1a) = iVar2;
        *(int *)(iVar4 + 0x1e) = iVar2;
      }
    }
  }
  return CONCAT22(in_DX,in_AX);
}



// Function: FUN_5335_0443 @ 5335:0443

uint __cdecl16near FUN_5335_0443(void)

{
  uint in_AX;
  uint in_CX;
  uint in_DX;
  uint in_BX;
  
  if ((in_CX & 0x122a) != 0) {
    in_BX = (uint)(((ulong)in_AX * (ulong)(in_BX & 0xff) + 0x32) / 100);
  }
  if ((in_CX & 0x915) != 0) {
    in_DX = (uint)(((ulong)in_AX * (ulong)(in_DX & 0xff) + 0x32) / 100);
  }
  if (in_DX < in_AX) {
    if (-(in_DX - in_AX) < in_AX) {
      in_AX = -(in_DX - in_AX);
    }
    if (in_BX < in_AX) {
      in_AX = in_BX;
    }
    return in_AX;
  }
  return 0;
}



// Function: FUN_5335_048f @ 5335:048f

undefined2 __cdecl16far FUN_5335_048f(void)

{
  char cVar1;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 extraout_AH_01;
  undefined1 uVar3;
  undefined2 uVar2;
  undefined2 uVar4;
  char in_BL;
  undefined1 *puVar5;
  undefined1 in_CF;
  bool bVar6;
  
  uVar2 = 0x5000;
  DAT_4c93_3c3f = 0;
  FUN_5335_08ad();
  uVar3 = extraout_AH;
  if (!(bool)in_CF) {
    FUN_5335_0624();
    if (*(char *)0x547 != ',') {
      bVar6 = false;
      DAT_4c93_3c3f = DAT_4c93_3c3f | 1;
      DAT_4c93_3c42 = FUN_5335_05ed();
      if (bVar6) {
        DAT_4c93_3c3f = DAT_4c93_3c3f | 2;
      }
    }
    FUN_5335_0624();
    puVar5 = (undefined1 *)0x548;
    cVar1 = *(char *)0x547;
    uVar3 = extraout_AH_00;
    if (cVar1 == ',') {
      bVar6 = false;
      DAT_4c93_3c3f = DAT_4c93_3c3f | 4;
      DAT_4c93_3c40 = FUN_5335_05ed();
      if (bVar6) {
        DAT_4c93_3c3f = DAT_4c93_3c3f | 8;
      }
      FUN_5335_0624();
      puVar5 = (undefined1 *)0x549;
      cVar1 = *(char *)0x548;
      uVar3 = extraout_AH_01;
    }
    if (cVar1 != '\0') {
      FUN_5335_062d();
      *puVar5 = 0;
      *(undefined2 *)0x5e3 = 0x5ce;
      uVar4 = 0x5ba;
      if (in_BL != '\0') {
        uVar4 = 0x5c4;
      }
      *(undefined2 *)0x5df = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00053894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(ulong)*(uint *)*(undefined4 *)0x574)();
      return uVar2;
    }
  }
  return CONCAT11(uVar3,DAT_4c93_3c3f);
}



// Function: FUN_5335_05ed @ 5335:05ed

uint __cdecl16near FUN_5335_05ed(void)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *unaff_SI;
  undefined2 unaff_DS;
  
  FUN_5335_0624();
  iVar4 = 0;
  uVar5 = 0;
  while( true ) {
    pbVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    uVar2 = (uint)iVar4 >> 8;
    bVar3 = *pbVar1 - 0x30;
    if ((*pbVar1 < 0x30) || (9 < bVar3)) break;
    iVar4 = (int)((ulong)uVar5 * 10);
    if ((int)((ulong)uVar5 * 10 >> 0x10) == 0) {
      uVar5 = CONCAT11((char)uVar2,bVar3) + iVar4;
      iVar4 = 0;
    }
    else {
      uVar5 = 0xffff;
    }
  }
  return uVar5;
}



// Function: FUN_5335_0624 @ 5335:0624

void __cdecl16near FUN_5335_0624(void)

{
  char *pcVar1;
  char *unaff_SI;
  undefined2 unaff_DS;
  
  do {
    pcVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
  } while (*pcVar1 == ' ');
  return;
}



// Function: FUN_5335_062d @ 5335:062d

undefined2 __cdecl16near FUN_5335_062d(void)

{
  char *pcVar1;
  char cVar2;
  undefined2 in_AX;
  int in_CX;
  char *unaff_SI;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  do {
    pcVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    cVar2 = *pcVar1;
    pcVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *pcVar1 = cVar2;
    if (cVar2 == '\0') {
      return in_AX;
    }
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  *unaff_DI = '\0';
  return in_AX;
}



// Function: FUN_5335_06db @ 5335:06db

undefined2 __cdecl16far FUN_5335_06db(void)

{
  undefined2 in_AX;
  undefined2 unaff_ES;
  
  DAT_4c93_3d2e = unaff_ES;
  if (DAT_4c93_3d2a == 0 && DAT_4c93_3d2c == 0) {
    DAT_4c93_3d2a = *(int *)0xa;
    DAT_4c93_3d2c = *(int *)0xc;
  }
  return in_AX;
}



// Function: FUN_5335_0700 @ 5335:0700

void __cdecl16far FUN_5335_0700(void)

{
  undefined2 uVar1;
  byte in_AL;
  char cVar2;
  int in_DX;
  int *piVar3;
  int unaff_SI;
  int unaff_DS;
  
  uVar1 = DAT_4c93_3d2e;
  for (piVar3 = (int *)0x758; *piVar3 != 0 || piVar3[1] != 0; piVar3 = piVar3 + 3) {
  }
  if (((DAT_4c93_3de3 & 0xff) == 0) && ((in_AL & 2) != 0)) {
    DAT_4c93_3de3 = 0xff;
    *(undefined2 *)0xa = 0x7e3;
    *(undefined2 *)0xc = 0x5000;
  }
  if (piVar3 != (int *)0x7a0) {
    *piVar3 = in_DX;
    piVar3[1] = unaff_DS;
    *(byte *)(piVar3 + 2) = in_AL;
    return;
  }
  cVar2 = FUN_5335_07a4(0x5000);
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  *(char *)((int)piVar3 + unaff_SI) = *(char *)((int)piVar3 + unaff_SI) + cVar2;
  DAT_4c93_3e9f = uRam00050841;
  DAT_4c93_3ea1 = uRam00050843;
  DAT_4c93_3ea3 = 0;
                    /* WARNING: Could not recover jumptable at 0x00053b1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)s_Insufficient_memory_to_run__4c93_3d0a._28_2_)();
  return;
}



// Function: FUN_5335_07a4 @ 5335:07a4

void FUN_5335_07a4(void)

{
  DAT_4c93_3e9f = DAT_5335_0841;
  DAT_4c93_3ea1 = DAT_5335_0843;
  DAT_4c93_3ea3 = 0;
                    /* WARNING: Could not recover jumptable at 0x00053b1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)(uint)s_Insufficient_memory_to_run__4c93_3d0a._28_2_)();
  return;
}



// Function: FUN_5335_07df @ 5335:07df

void __cdecl16far FUN_5335_07df(void)

{
  FUN_5335_080f();
  return;
}



// Function: FUN_5335_080f @ 5335:080f

void __cdecl16near FUN_5335_080f(void)

{
  byte bVar1;
  byte in_AL;
  int *piVar2;
  undefined2 unaff_DS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar3;
  byte in_NT;
  uint uVar4;
  
  bVar3 = false;
  for (piVar2 = (int *)0x758; *piVar2 != 0 || piVar2[1] != 0; piVar2 = piVar2 + 3) {
    bVar1 = *(byte *)(piVar2 + 2) & in_AL;
    if (bVar1 != 0) {
      uVar4 = (uint)(in_NT & 1) * 0x4000 | (uint)bVar3 * 0x400 | (uint)(in_IF & 1) * 0x200 |
              (uint)(in_TF & 1) * 0x100 | (uint)((char)bVar1 < '\0') * 0x80 |
              (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(bVar1) & 1U) == 0) * 4;
      in_AL = (*(code *)*piVar2)(0x5000,uVar4);
      in_NT = (uVar4 & 0x4000) != 0;
      bVar3 = (uVar4 & 0x400) != 0;
      in_IF = (uVar4 & 0x200) != 0;
      in_TF = (uVar4 & 0x100) != 0;
      in_AF = (uVar4 & 0x10) != 0;
    }
  }
  return;
}



// Function: FUN_5335_08ad @ 5335:08ad

undefined2 __cdecl16far FUN_5335_08ad(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined2 in_AX;
  int iVar5;
  char *unaff_SI;
  char *pcVar6;
  char *unaff_DI;
  char *pcVar7;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar4 = *(int *)0x2c;
  if (iVar4 != 0) {
    pcVar7 = (char *)0x0;
LAB_5335_08c3:
    pcVar6 = unaff_SI;
    if (*pcVar7 != '\0') {
      do {
        pcVar2 = pcVar6;
        if (*pcVar2 == '\0') {
          if (*pcVar7 == '=') {
            do {
              pcVar7 = pcVar7 + 1;
              cVar3 = *pcVar7;
              pcVar2 = unaff_DI;
              unaff_DI = unaff_DI + 1;
              *pcVar2 = cVar3;
            } while (cVar3 != '\0');
            return in_AX;
          }
          break;
        }
        pcVar1 = pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar2 == *pcVar1);
      iVar5 = -1;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar2 = pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar2 != '\0');
      goto LAB_5335_08c3;
    }
  }
  return in_AX;
}



// Function: FUN_53f7_0014 @ 53f7:0014

/* WARNING: Control flow encountered bad instruction data */

void FUN_53f7_0014(void)

{
  FUN_4c93_0dab();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_53f7_0020 @ 53f7:0020

/* WARNING: Control flow encountered bad instruction data */

void FUN_53f7_0020(void)

{
  FUN_4c93_0dab();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_53f7_002c @ 53f7:002c

/* WARNING: Control flow encountered bad instruction data */

void FUN_53f7_002c(void)

{
  FUN_4c93_0dab();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_53f7_0038 @ 53f7:0038

/* WARNING: Control flow encountered bad instruction data */

void FUN_53f7_0038(void)

{
  FUN_4c93_0dab();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_53f7_0044 @ 53f7:0044

/* WARNING: Control flow encountered bad instruction data */

void FUN_53f7_0044(void)

{
  FUN_4c93_0dab();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_53f7_0050 @ 53f7:0050

/* WARNING: Control flow encountered bad instruction data */

void FUN_53f7_0050(void)

{
  FUN_4c93_0dab();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_53f7_005c @ 53f7:005c

/* WARNING: Control flow encountered bad instruction data */

void FUN_53f7_005c(void)

{
  FUN_4c93_0dab();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_53f7_0068 @ 53f7:0068

/* WARNING: Control flow encountered bad instruction data */

void FUN_53f7_0068(void)

{
  FUN_4c93_0dab();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_53f7_0074 @ 53f7:0074

/* WARNING: Control flow encountered bad instruction data */

void FUN_53f7_0074(void)

{
  FUN_4c93_0dab();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_53f7_008c @ 53f7:008c

/* WARNING: Control flow encountered bad instruction data */

void FUN_53f7_008c(void)

{
  FUN_4c93_0dab();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_53f7_0098 @ 53f7:0098

/* WARNING: Control flow encountered bad instruction data */

void FUN_53f7_0098(void)

{
  FUN_4c93_0dab();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_53f7_00a4 @ 53f7:00a4

/* WARNING: Control flow encountered bad instruction data */

void FUN_53f7_00a4(void)

{
  FUN_4c93_0dab();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_53f7_00b0 @ 53f7:00b0

/* WARNING: Control flow encountered bad instruction data */

void FUN_53f7_00b0(void)

{
  FUN_4c93_0dab();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_53f7_00bc @ 53f7:00bc

/* WARNING: Control flow encountered bad instruction data */

void FUN_53f7_00bc(void)

{
  FUN_4c93_0dab();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_53f7_0110 @ 53f7:0110

/* WARNING: Control flow encountered bad instruction data */

void FUN_53f7_0110(void)

{
  FUN_4c93_0dab();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_53f7_011c @ 53f7:011c

/* WARNING: Control flow encountered bad instruction data */

void FUN_53f7_011c(void)

{
  FUN_4c93_0dab();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



