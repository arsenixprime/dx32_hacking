// Decompiled: MAINTPG.EXE
// Processor: x86
// Language: x86:LE:16:Real Mode
//
// Memory Map:
//   CODE_0               1000:0000 - 5000:ea4f  [RWX] initialized
//   CODE_1               5ea5:0000 - 5ea5:2559  [RWX] initialized
//   DATA                 5ea5:255a - 7000:0eb9  [RW-] uninitialized
//   HEADER               HEADER::00000000 - HEADER::000001ff  [---] initialized

// Function: FUN_1000_0000 @ 1000:0000

byte __cdecl16far FUN_1000_0000(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  undefined1 local_3;
  
  iVar1 = 0;
  local_3 = 0;
  if (0 < param_3) {
    do {
      local_3 = local_3 ^ *(byte *)(param_1 + iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  return local_3;
}



// Function: FUN_1000_0170 @ 1000:0170

void __cdecl16far FUN_1000_0170(int param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_SS;
  char local_46 [66];
  int local_4;
  
  iVar7 = 0;
  iVar6 = 0;
  if (param_1 < 1) {
    local_4 = 0;
  }
  else {
    do {
      bVar3 = ((char *)param_2)[iVar7];
      local_46[iVar6] = ((char)bVar3 >> 4 & 0xfU) + 0x30;
      local_46[iVar6 + 1] = (bVar3 & 0xf) + 0x30;
      iVar6 = iVar6 + 2;
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_1);
    local_4 = iVar6;
  }
  iVar6 = local_4;
  local_46[local_4] = '\0';
  pcVar8 = local_46;
  uVar4 = 0xffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar1 = pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar8 = pcVar8 + -uVar4;
  pcVar9 = (char *)param_2;
  for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar2 = pcVar9;
    pcVar9 = pcVar9 + 2;
    pcVar1 = pcVar8;
    pcVar8 = pcVar8 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar1 = pcVar8;
    pcVar8 = pcVar8 + 1;
    *pcVar2 = *pcVar1;
  }
  if (0 < iVar6) {
    iVar6 = 0;
    do {
      if ('9' < ((char *)param_2)[iVar6]) {
        ((char *)param_2)[iVar6] = ((char *)param_2)[iVar6] + '\a';
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_4);
  }
  return;
}



// Function: FUN_1000_034e @ 1000:034e

void __cdecl16far FUN_1000_034e(char *param_1,undefined1 *param_2,undefined2 param_3)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  byte local_46 [64];
  int local_6;
  int local_4;
  
  iVar6 = 0;
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar8 = (char *)param_1;
  uVar3 = 0xffff;
  pcVar9 = pcVar8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (*pcVar1 != '\0');
  iVar4 = ~uVar3 - 1;
  local_4 = iVar4;
  if (0 < iVar4) {
    do {
      if (pcVar8[iVar6] < 'A') {
        bVar2 = pcVar8[iVar6] - 0x30;
      }
      else {
        bVar2 = pcVar8[iVar6] - 0x37;
      }
      local_46[iVar6] = bVar2;
      iVar6 = iVar6 + 1;
      unaff_DS = unaff_SS;
    } while (iVar6 < iVar4);
  }
  iVar6 = local_4;
  iVar4 = 0;
  iVar7 = 1;
  if (1 < local_4) {
    pbVar5 = local_46;
    do {
      *pbVar5 = local_46[iVar7] << 4;
      *pbVar5 = *pbVar5 | local_46[iVar7 + 1];
      pbVar5 = pbVar5 + 1;
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + 2;
    } while (iVar7 < iVar6);
  }
  local_6 = iVar4;
  FUN_1000_090e(CONCAT11((char)((uint)local_46 >> 8),*param_1),local_46);
  FUN_1000_0a5e(*param_2,CONCAT11(param_2[1],param_2[2]),0,param_2,param_3);
  return;
}



// Function: FUN_1000_04b4 @ 1000:04b4

void __cdecl16far FUN_1000_04b4(undefined4 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined2 unaff_SS;
  char local_20 [16];
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  long local_8;
  char local_4;
  undefined1 local_3;
  
  iVar3 = FUN_1000_09bc(param_1,&local_3);
  if (iVar3 == 0) {
    local_4 = (char)(local_8 % 8);
    local_10 = local_3;
    local_f = (undefined1)((ulong)local_8 >> 8);
    local_e = (undefined1)local_8;
    FUN_1000_056e((int)(local_8 % 8),&local_10);
    *param_2 = local_4 + '0';
    FUN_1000_0170(3,local_20);
    param_2._0_2_ = (char *)param_2 + 1;
    pcVar6 = local_20;
    uVar4 = 0xffff;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar6 + -uVar4;
    for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      pcVar2 = (char *)param_2;
      param_2._0_2_ = (char *)param_2 + 2;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 2;
      *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
    }
    for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar2 = (char *)param_2;
      param_2._0_2_ = (char *)param_2 + 1;
      pcVar1 = pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar2 = *pcVar1;
    }
  }
  return;
}



// Function: FUN_1000_056e @ 1000:056e

undefined2 __cdecl16far
FUN_1000_056e(byte param_1,undefined2 *param_2,undefined2 param_3,uint param_4,undefined2 *param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_44 [32];
  int local_4;
  
  local_4 = param_4 << 3;
  if ((int)param_4 < 2) {
    return 0;
  }
  puVar4 = local_44;
  for (uVar3 = param_4 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = param_2;
    param_2 = param_2 + 1;
    *puVar2 = *puVar1;
  }
  for (uVar3 = (uint)((param_4 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar4;
    puVar4 = (undefined2 *)((int)puVar4 + 1);
    puVar1 = param_2;
    param_2 = (undefined2 *)((int)param_2 + 1);
    *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
  }
  FUN_1000_0626(0xffff,local_4,local_44);
  FUN_1000_0626(0,local_4,local_44);
  if ((param_1 & 1) != 0) {
    FUN_1000_0626(1,local_4,local_44);
  }
  if ((param_1 & 2) != 0) {
    FUN_1000_0626(2,local_4,local_44);
  }
  if ((param_1 & 4) != 0) {
    FUN_1000_0626(4,local_4,local_44);
  }
  puVar4 = local_44;
  uVar6 = (undefined2)((ulong)param_5 >> 0x10);
  puVar5 = (undefined2 *)param_5;
  for (uVar3 = param_4 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  for (uVar3 = (uint)((param_4 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar5;
    puVar5 = (undefined2 *)((int)puVar5 + 1);
    puVar1 = puVar4;
    puVar4 = (undefined2 *)((int)puVar4 + 1);
    *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
  }
  return 1;
}



// Function: FUN_1000_0626 @ 1000:0626

void __cdecl16far FUN_1000_0626(int param_1,int param_2,int param_3,undefined2 param_4)

{
  byte bVar1;
  int iVar2;
  
  if (param_1 == -1) {
    iVar2 = 0;
    if (param_2 != 1 && -1 < param_2 + -1) {
      do {
        FUN_1000_0afa(param_3,param_4,iVar2,
                      (*(byte *)(param_3 + ((int)(iVar2 + (iVar2 >> 0xf & 7U)) >> 3)) &
                      (byte)(1 << ((byte)(iVar2 % 8) & 0x1f))) == 0);
        iVar2 = iVar2 + 2;
      } while (iVar2 < param_2 + -1);
      return;
    }
  }
  else if (param_1 == 0) {
    iVar2 = 0;
    if (param_2 != 1 && -1 < param_2 + -1) {
      do {
        bVar1 = *(byte *)(param_3 + ((int)(iVar2 + (iVar2 >> 0xf & 7U)) >> 3));
        FUN_1000_0afa(param_3,param_4,iVar2,
                      *(byte *)(param_3 + ((int)(iVar2 + 1 + (iVar2 + 1 >> 0xf & 7U)) >> 3)) &
                      (byte)(1 << ((byte)((iVar2 + 1) % 8) & 0x1f)));
        FUN_1000_0afa(param_3,param_4,iVar2 + 1,bVar1 & (byte)(1 << ((byte)(iVar2 % 8) & 0x1f)));
        iVar2 = iVar2 + 2;
      } while (iVar2 < param_2 + -1);
      return;
    }
  }
  else if (param_1 == 1) {
    iVar2 = 0;
    if (param_2 != 3 && -1 < param_2 + -3) {
      do {
        bVar1 = *(byte *)(param_3 + ((int)(iVar2 + (iVar2 >> 0xf & 7U)) >> 3));
        FUN_1000_0afa(param_3,param_4,iVar2,
                      *(byte *)(param_3 + ((int)(iVar2 + 3 + (iVar2 + 3 >> 0xf & 7U)) >> 3)) &
                      (byte)(1 << ((byte)((iVar2 + 3) % 8) & 0x1f)));
        FUN_1000_0afa(param_3,param_4,iVar2 + 3,bVar1 & (byte)(1 << ((byte)(iVar2 % 8) & 0x1f)));
        iVar2 = iVar2 + 2;
      } while (iVar2 < param_2 + -3);
      return;
    }
  }
  else if (param_1 == 2) {
    iVar2 = 0;
    if (param_2 != 4 && -1 < param_2 + -4) {
      do {
        bVar1 = *(byte *)(param_3 + ((int)(iVar2 + (iVar2 >> 0xf & 7U)) >> 3));
        FUN_1000_0afa(param_3,param_4,iVar2,
                      *(byte *)(param_3 + ((int)(iVar2 + 4 + (iVar2 + 4 >> 0xf & 7U)) >> 3)) &
                      (byte)(1 << ((byte)((iVar2 + 4) % 8) & 0x1f)));
        FUN_1000_0afa(param_3,param_4,iVar2 + 4,bVar1 & (byte)(1 << ((byte)(iVar2 % 8) & 0x1f)));
        iVar2 = iVar2 + 3;
      } while (iVar2 < param_2 + -4);
      return;
    }
  }
  else {
    if (param_1 != 4) {
      return;
    }
    iVar2 = 0;
    if (param_2 != 5 && -1 < param_2 + -5) {
      do {
        bVar1 = *(byte *)(param_3 + ((int)(iVar2 + (iVar2 >> 0xf & 7U)) >> 3));
        FUN_1000_0afa(param_3,param_4,iVar2,
                      *(byte *)(param_3 + ((int)(iVar2 + 5 + (iVar2 + 5 >> 0xf & 7U)) >> 3)) &
                      (byte)(1 << ((byte)((iVar2 + 5) % 8) & 0x1f)));
        FUN_1000_0afa(param_3,param_4,iVar2 + 5,bVar1 & (byte)(1 << ((byte)(iVar2 % 8) & 0x1f)));
        iVar2 = iVar2 + 4;
      } while (iVar2 < param_2 + -5);
    }
  }
  return;
}



// Function: FUN_1000_07cb @ 1000:07cb

void __cdecl16far FUN_1000_07cb(void)

{
  int in_AX;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  
  for (; unaff_SI < in_AX; unaff_SI = unaff_SI + 2) {
    *(uint *)(unaff_BP + -2) =
         (uint)(*(byte *)(unaff_DI + ((int)(unaff_SI + (unaff_SI >> 0xf & 7U)) >> 3)) &
               (byte)(1 << ((byte)(unaff_SI % 8) & 0x1f)));
    FUN_1000_0afa();
    FUN_1000_0afa();
    in_AX = *(int *)(unaff_BP + 8) + -3;
  }
  return;
}



// Function: FUN_1000_08a6 @ 1000:08a6

void __cdecl16far FUN_1000_08a6(void)

{
  byte in_AL;
  int in_CX;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  
  while( true ) {
    *(uint *)(unaff_BP + -2) = (uint)(in_AL & (byte)(1 << ((byte)in_CX & 0x1f)));
    FUN_1000_0afa();
    FUN_1000_0afa();
    unaff_SI = unaff_SI + 4;
    if (*(int *)(unaff_BP + 8) + -5 <= unaff_SI) break;
    in_CX = unaff_SI % 8;
    in_AL = *(byte *)(unaff_DI + ((int)(unaff_SI + (unaff_SI >> 0xf & 7U)) >> 3));
  }
  return;
}



// Function: FUN_1000_090e @ 1000:090e

void __cdecl16far
FUN_1000_090e(byte param_1,undefined2 *param_2,undefined2 param_3,uint param_4,undefined2 *param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_44 [32];
  int local_4;
  
  local_4 = param_4 << 3;
  puVar4 = local_44;
  for (uVar3 = param_4 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = param_2;
    param_2 = param_2 + 1;
    *puVar2 = *puVar1;
  }
  for (uVar3 = (uint)((param_4 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar4;
    puVar4 = (undefined2 *)((int)puVar4 + 1);
    puVar1 = param_2;
    param_2 = (undefined2 *)((int)param_2 + 1);
    *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
  }
  if ((param_1 & 4) != 0) {
    FUN_1000_0626(4,local_4,local_44);
  }
  if ((param_1 & 2) != 0) {
    FUN_1000_0626(2,local_4,local_44);
  }
  if ((param_1 & 1) != 0) {
    FUN_1000_0626(1,local_4,local_44);
  }
  FUN_1000_0626(0,local_4,local_44);
  FUN_1000_0626(0xffff,local_4,local_44);
  puVar4 = local_44;
  uVar6 = (undefined2)((ulong)param_5 >> 0x10);
  puVar5 = (undefined2 *)param_5;
  for (uVar3 = param_4 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  for (uVar3 = (uint)((param_4 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar5;
    puVar5 = (undefined2 *)((int)puVar5 + 1);
    puVar1 = puVar4;
    puVar4 = (undefined2 *)((int)puVar4 + 1);
    *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
  }
  *(undefined1 *)((int)local_44 + param_4) = 0;
  return;
}



// Function: FUN_1000_09bc @ 1000:09bc

undefined2 __cdecl16far
FUN_1000_09bc(undefined4 param_1,char *param_2,undefined2 *param_3,undefined2 param_4)

{
  char *pcVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 unaff_DS;
  undefined4 uVar8;
  
  *param_2 = '\0';
  cVar2 = '\x01';
  pcVar6 = (char *)0x8ac2;
  do {
    iVar4 = -1;
    pcVar7 = pcVar6;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
    iVar4 = FUN_1000_2b7a(param_1,pcVar6);
    if (iVar4 == 0) {
      *param_2 = cVar2;
      goto LAB_1000_0a0b;
    }
    cVar2 = cVar2 + '\x01';
    pcVar6 = pcVar6 + 0xc;
    if ((char *)0x8b3a < pcVar6) {
LAB_1000_0a0b:
      if (*param_2 != '\0') {
        uVar8 = func_0x00013fd4();
        uVar5 = (uint)((ulong)uVar8 >> 0x10) | (uint)uVar8;
        if (uVar5 != 0) {
          uVar3 = FUN_1000_2bb6();
          *param_3 = uVar3;
          param_3[1] = uVar5;
          if (param_3[1] == 0) {
            return 0;
          }
        }
      }
      return 0xfffc;
    }
  } while( true );
}



// Function: FUN_1000_0a5e @ 1000:0a5e

undefined2 __cdecl16far FUN_1000_0a5e(byte param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined2 unaff_DS;
  undefined2 uVar9;
  char *pcVar10;
  undefined1 local_a [8];
  
  if (((param_2._2_2_ != 0) || (param_1 == 0)) || (0xb < param_1)) {
    return 0xfffc;
  }
  pcVar6 = (char *)((uint)param_1 * 0xc + -0x754a);
  uVar9 = (undefined2)((ulong)param_3 >> 0x10);
  pcVar7 = (char *)param_3;
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar10 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar6 + -uVar2;
  pcVar8 = pcVar7;
  for (uVar3 = uVar2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar1 = pcVar8;
    pcVar8 = pcVar8 + 2;
    pcVar10 = pcVar6;
    pcVar6 = pcVar6 + 2;
    *(undefined2 *)pcVar1 = *(undefined2 *)pcVar10;
  }
  for (uVar2 = (uint)((uVar2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
    pcVar1 = pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar6;
    pcVar6 = pcVar6 + 1;
    *pcVar1 = *pcVar10;
  }
  pcVar10 = (char *)FUN_1000_2c84(0x1000,param_2,local_a);
  uVar5 = (undefined2)((ulong)pcVar10 >> 0x10);
  pcVar6 = (char *)pcVar10;
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar10 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar10 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar6 + -uVar2;
  iVar4 = -1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar10 = pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar10 != '\0');
  pcVar7 = pcVar7 + -1;
  for (uVar3 = uVar2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 2;
    pcVar10 = pcVar6;
    pcVar6 = pcVar6 + 2;
    *(undefined2 *)pcVar1 = *(undefined2 *)pcVar10;
  }
  for (uVar2 = (uint)((uVar2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar10 = pcVar6;
    pcVar6 = pcVar6 + 1;
    *pcVar1 = *pcVar10;
  }
  return 0;
}



// Function: FUN_1000_0afa @ 1000:0afa

void __cdecl16far FUN_1000_0afa(undefined4 param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined2 uVar4;
  
  bVar2 = '\x01' << ((byte)(param_2 % 8) & 0x1f);
  uVar3 = (int)(param_2 + (param_2 >> 0xf & 7U)) >> 3;
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_3 != 0) {
    pbVar1 = (byte *)((uVar3 & 0xff) + (int)param_1);
    *pbVar1 = *pbVar1 | bVar2;
    return;
  }
  pbVar1 = (byte *)((uVar3 & 0xff) + (int)param_1);
  *pbVar1 = *pbVar1 & ~bVar2;
  return;
}



// Function: FUN_1000_0b4c @ 1000:0b4c

void FUN_1000_0b4c(undefined2 param_1,undefined4 param_2)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_32f2(param_2,0x8bfe);
}



// Function: FUN_1000_0c16 @ 1000:0c16

void __cdecl16far FUN_1000_0c16(void)

{
  char *pcVar1;
  char in_AL;
  uint uVar2;
  int unaff_BP;
  int unaff_DI;
  char *pcVar3;
  undefined2 unaff_SS;
  char in_CF;
  
  *(char *)(unaff_BP + -0x66) = *(char *)(unaff_BP + -0x66) + '\x01';
  pcVar1 = (char *)(unaff_BP + unaff_DI + 0x4c4);
  *pcVar1 = *pcVar1 + in_AL + in_CF;
  pcVar3 = (char *)(unaff_BP + -0x54);
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  *(undefined1 *)(unaff_BP + ~uVar2 + -0x56) = 0;
  FUN_1000_034e(unaff_BP + -0x54);
  return;
}



// Function: FUN_1000_0d18 @ 1000:0d18

undefined2 FUN_1000_0d18(void)

{
  char *pcVar1;
  char cVar2;
  undefined2 in_AX;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined2 in_DX;
  int unaff_BP;
  int unaff_SI;
  char *pcVar6;
  undefined2 unaff_SS;
  long lVar7;
  
  lVar7 = CONCAT22(in_DX,in_AX);
  uVar3 = 0x1000;
  while ((lVar7 != 0 && (*(char *)(unaff_BP + -0x106) == ';'))) {
    lVar7 = FUN_1000_2f92(uVar3,unaff_BP + -0x106);
    uVar3 = 0x105e;
  }
  if ((*(byte *)(unaff_SI + 10) & 0x10) != 0) {
    FUN_1000_0c16();
    uVar3 = FUN_1000_0e06();
    return uVar3;
  }
  FUN_1000_0c16();
  pcVar6 = (char *)(unaff_BP + -0x106);
  uVar4 = 0xffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  iVar5 = ~uVar4 - 1;
  *(int *)(unaff_BP + -2) = iVar5;
  if ((0xfe < iVar5) || (iVar5 < 10)) {
    return 0xfffe;
  }
  lVar7 = func_0x00014102(0x105e,unaff_BP + -0x106);
  *(undefined2 *)(unaff_BP + -2) = (int)((ulong)lVar7 >> 0x10);
  if (lVar7 != 0) {
    *(undefined2 *)(unaff_BP + -4) = (int)lVar7;
    pcVar6 = (char *)*(undefined2 *)(unaff_BP + 10);
    iVar5 = FUN_1000_335c((int)lVar7,*(undefined2 *)(unaff_BP + -2),0x8c26);
    if (iVar5 != 0) {
      uVar3 = *(undefined2 *)(unaff_BP + 0xc);
      uVar4 = 0xffff;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar1 = pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar1 != '\0');
      iVar5 = ~uVar4 - 1;
      *(int *)(unaff_BP + -2) = iVar5;
      if (iVar5 == 0x10) {
        pcVar6 = (char *)*(undefined2 *)(unaff_BP + 10);
        iVar5 = ~uVar4 - 2;
        cVar2 = FUN_1000_0000(pcVar6,uVar3,iVar5);
        cVar2 = cVar2 % '@' + '0';
        *(char *)(unaff_BP + -3) = cVar2;
        if (pcVar6[iVar5] == cVar2) {
          uVar3 = *(undefined2 *)(unaff_BP + 0xc);
          pcVar6[iVar5] = '\0';
          iVar5 = 0;
          cVar2 = *pcVar6;
          while (cVar2 != '\0') {
            pcVar6[iVar5] = pcVar6[iVar5] + -0x4e;
            iVar5 = iVar5 + 1;
            cVar2 = pcVar6[iVar5];
          }
          return 0;
        }
      }
    }
  }
  return 0xfffd;
}



// Function: FUN_1000_0d34 @ 1000:0d34

void FUN_1000_0d34(void)

{
  FUN_1000_0e06();
  return;
}



// Function: FUN_1000_0d74 @ 1000:0d74

undefined2 __cdecl16far FUN_1000_0d74(void)

{
  char *pcVar1;
  undefined2 uVar2;
  char cVar3;
  int in_AX;
  int iVar4;
  uint uVar5;
  int in_DX;
  int unaff_BP;
  char *pcVar6;
  undefined2 unaff_SS;
  char *pcStack0004;
  
  *(int *)(unaff_BP + -2) = in_DX;
  if (in_DX != 0 || in_AX != 0) {
    *(int *)(unaff_BP + -4) = in_AX;
    pcVar6 = (char *)*(undefined2 *)(unaff_BP + 10);
    pcStack0004 = pcVar6;
    iVar4 = FUN_1000_335c();
    if (iVar4 != 0) {
      pcStack0004 = (char *)*(undefined2 *)(unaff_BP + 0xc);
      uVar5 = 0xffff;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar1 = pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar1 != '\0');
      iVar4 = ~uVar5 - 1;
      *(int *)(unaff_BP + -2) = iVar4;
      if (iVar4 == 0x10) {
        pcVar6 = (char *)*(undefined2 *)(unaff_BP + 10);
        iVar4 = ~uVar5 - 2;
        cVar3 = FUN_1000_0000();
        cVar3 = cVar3 % '@' + '0';
        *(char *)(unaff_BP + -3) = cVar3;
        if (pcVar6[iVar4] == cVar3) {
          uVar2 = *(undefined2 *)(unaff_BP + 0xc);
          pcVar6[iVar4] = '\0';
          iVar4 = 0;
          cVar3 = *pcVar6;
          while (cVar3 != '\0') {
            pcVar6[iVar4] = pcVar6[iVar4] + -0x4e;
            iVar4 = iVar4 + 1;
            cVar3 = pcVar6[iVar4];
          }
          return 0;
        }
      }
    }
  }
  return 0xfffd;
}



// Function: FUN_1000_0e06 @ 1000:0e06

undefined2 __cdecl16far FUN_1000_0e06(void)

{
  return 0xfffe;
}



// Function: FUN_1000_0ee8 @ 1000:0ee8

/* WARNING: Control flow encountered bad instruction data */

void FUN_1000_0ee8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_1000_10a0 @ 1000:10a0

int __cdecl16far FUN_1000_10a0(void)

{
  int iVar1;
  
  iVar1 = FUN_1000_5206();
  return -(uint)(iVar1 != 0);
}



// Function: FUN_1000_140a @ 1000:140a

void FUN_1000_140a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_190a @ 1000:190a

void FUN_1000_190a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_1b82 @ 1000:1b82

void FUN_1000_1b82(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_1bf0 @ 1000:1bf0

void FUN_1000_1bf0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_1c58 @ 1000:1c58

void FUN_1000_1c58(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_1c7e @ 1000:1c7e

void FUN_1000_1c7e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_1ca4 @ 1000:1ca4

void FUN_1000_1ca4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_1d08 @ 1000:1d08

void FUN_1000_1d08(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_1d56 @ 1000:1d56

void FUN_1000_1d56(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_1d7a @ 1000:1d7a

void FUN_1000_1d7a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_1d9e @ 1000:1d9e

void FUN_1000_1d9e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_1dbe @ 1000:1dbe

void FUN_1000_1dbe(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_1eca @ 1000:1eca

void FUN_1000_1eca(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_1f16 @ 1000:1f16

void FUN_1000_1f16(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_1f50 @ 1000:1f50

void FUN_1000_1f50(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_1f90 @ 1000:1f90

void FUN_1000_1f90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_1fd0 @ 1000:1fd0

void FUN_1000_1fd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_1ff8 @ 1000:1ff8

void FUN_1000_1ff8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_20c2 @ 1000:20c2

void FUN_1000_20c2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_216a @ 1000:216a

void FUN_1000_216a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_2184 @ 1000:2184

void FUN_1000_2184(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_219e @ 1000:219e

void FUN_1000_219e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_21f2 @ 1000:21f2

void FUN_1000_21f2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_2236 @ 1000:2236

void FUN_1000_2236(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_2266 @ 1000:2266

void FUN_1000_2266(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_2294 @ 1000:2294

void FUN_1000_2294(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_27f6 @ 1000:27f6

void FUN_1000_27f6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_29ca @ 1000:29ca

void FUN_1000_29ca(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_2a0b @ 1000:2a0b

void FUN_1000_2a0b(void)

{
  undefined2 *puVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)(*(int *)0x8d4c + 0x524 + *(int *)(unaff_BP + -4) * 4);
  func_0x00001fd0(0x1000,*puVar1,puVar1[1]);
  return;
}



// Function: FUN_1000_2a44 @ 1000:2a44

uint FUN_1000_2a44(void)

{
  code *pcVar1;
  uint uVar2;
  double *pdVar3;
  int iVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  longdouble lVar5;
  
  *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  if (*(int *)(unaff_BP + -4) < 3) {
    uVar2 = FUN_1000_2a0b();
    return uVar2;
  }
  pdVar3 = (double *)func_0x0000190a(0x1000,unaff_BP + -0x10);
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  lVar5 = (longdouble)*pdVar3;
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  pdVar3 = (double *)(double *)*(undefined4 *)(unaff_BP + 6);
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  *pdVar3 = (double)lVar5;
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  if ((*(int *)(unaff_BP + 10) != 0) || (*(int *)(unaff_BP + 0xc) != 0)) {
    *(undefined2 *)(unaff_BP + -4) = 0;
    if (*(int *)(unaff_BP + -4) < 3) {
      uVar2 = func_0x00001fd0();
      return uVar2;
    }
    pdVar3 = (double *)func_0x0000190a();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    lVar5 = (longdouble)*pdVar3;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pdVar3 = (double *)(double *)*(undefined4 *)(unaff_BP + 10);
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *pdVar3 = (double)lVar5;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
  }
  if (*(int *)(unaff_BP + 0xe) != 0) {
    uVar2 = FUN_1000_2b07();
    return uVar2;
  }
  if (*(int *)(unaff_BP + 0x10) != 0) {
    *(undefined2 *)(unaff_BP + -4) = 0;
    uVar2 = FUN_1000_2b4c();
    return uVar2;
  }
  if ((*(int *)(unaff_BP + 0x12) != 0) || (*(int *)(unaff_BP + 0x14) != 0)) {
    *(undefined2 *)(unaff_BP + -4) = 0;
    if (*(int *)(unaff_BP + -4) < 3) {
      uVar2 = FUN_1000_2b91();
      return uVar2;
    }
    pdVar3 = (double *)func_0x0000190a();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    lVar5 = (longdouble)*pdVar3;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pdVar3 = (double *)(double *)*(undefined4 *)(unaff_BP + 0x12);
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *pdVar3 = (double)lVar5;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
  }
  iVar4 = FUN_1000_72f0();
  return (uint)(iVar4 != 0);
}



// Function: FUN_1000_2afe @ 1000:2afe

uint FUN_1000_2afe(void)

{
  code *pcVar1;
  uint uVar2;
  double *pdVar3;
  int iVar4;
  int unaff_BP;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  longdouble lVar6;
  
  uVar5 = 0x1000;
  if (*(int *)(unaff_BP + 0x10) != 0) {
    *(undefined2 *)(unaff_BP + -4) = 0;
    uVar2 = FUN_1000_2b4c();
    return uVar2;
  }
  if ((*(int *)(unaff_BP + 0x12) != 0) || (*(int *)(unaff_BP + 0x14) != 0)) {
    *(undefined2 *)(unaff_BP + -4) = 0;
    if (*(int *)(unaff_BP + -4) < 3) {
      uVar2 = FUN_1000_2b91();
      return uVar2;
    }
    uVar5 = 0x140;
    pdVar3 = (double *)func_0x0000190a(0x1000,unaff_BP + -0x10);
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    lVar6 = (longdouble)*pdVar3;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pdVar3 = (double *)(double *)*(undefined4 *)(unaff_BP + 0x12);
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *pdVar3 = (double)lVar6;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
  }
  iVar4 = FUN_1000_72f0(uVar5,0);
  return (uint)(iVar4 != 0);
}



// Function: FUN_1000_2b07 @ 1000:2b07

void FUN_1000_2b07(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  
  *(undefined2 *)(unaff_BP + -4) = 0;
  FUN_1000_2b4c();
  return;
}



// Function: FUN_1000_2b0f @ 1000:2b0f

void FUN_1000_2b0f(void)

{
  undefined2 *puVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)(*(int *)0x8d4c + 0x53c + *(int *)(unaff_BP + -4) * 4);
  func_0x00001fd0(0x1000,*puVar1,puVar1[1]);
  return;
}



// Function: FUN_1000_2b18 @ 1000:2b18

void FUN_1000_2b18(void)

{
  int in_BX;
  undefined2 *puVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)(in_BX + *(int *)(unaff_BP + -4) * 4);
  func_0x00001fd0(0x1000,*puVar1,puVar1[1]);
  return;
}



// Function: FUN_1000_2b4c @ 1000:2b4c

uint FUN_1000_2b4c(void)

{
  code *pcVar1;
  uint uVar2;
  double *pdVar3;
  int iVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  longdouble lVar5;
  
  if (*(int *)(unaff_BP + -4) < 3) {
    uVar2 = FUN_1000_2b0f();
    return uVar2;
  }
  pdVar3 = (double *)func_0x0000190a(0x1000,unaff_BP + -0x10);
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  lVar5 = (longdouble)*pdVar3;
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  pdVar3 = (double *)(double *)*(undefined4 *)(unaff_BP + 0xe);
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  *pdVar3 = (double)lVar5;
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  if ((*(int *)(unaff_BP + 0x12) != 0) || (*(int *)(unaff_BP + 0x14) != 0)) {
    *(undefined2 *)(unaff_BP + -4) = 0;
    if (*(int *)(unaff_BP + -4) < 3) {
      uVar2 = FUN_1000_2b91();
      return uVar2;
    }
    pdVar3 = (double *)func_0x0000190a();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    lVar5 = (longdouble)*pdVar3;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pdVar3 = (double *)(double *)*(undefined4 *)(unaff_BP + 0x12);
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *pdVar3 = (double)lVar5;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
  }
  iVar4 = FUN_1000_72f0();
  return (uint)(iVar4 != 0);
}



// Function: FUN_1000_2b50 @ 1000:2b50

uint FUN_1000_2b50(void)

{
  code *pcVar1;
  uint uVar2;
  double *pdVar3;
  int iVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char in_SF;
  char in_OF;
  longdouble lVar5;
  
  if (in_OF != in_SF) {
    uVar2 = FUN_1000_2b0f();
    return uVar2;
  }
  pdVar3 = (double *)func_0x0000190a(0x1000,unaff_BP + -0x10);
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  lVar5 = (longdouble)*pdVar3;
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  pdVar3 = (double *)(double *)*(undefined4 *)(unaff_BP + 0xe);
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  *pdVar3 = (double)lVar5;
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  if ((*(int *)(unaff_BP + 0x12) != 0) || (*(int *)(unaff_BP + 0x14) != 0)) {
    *(undefined2 *)(unaff_BP + -4) = 0;
    if (*(int *)(unaff_BP + -4) < 3) {
      uVar2 = FUN_1000_2b91();
      return uVar2;
    }
    pdVar3 = (double *)func_0x0000190a();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    lVar5 = (longdouble)*pdVar3;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pdVar3 = (double *)(double *)*(undefined4 *)(unaff_BP + 0x12);
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *pdVar3 = (double)lVar5;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
  }
  iVar4 = FUN_1000_72f0();
  return (uint)(iVar4 != 0);
}



// Function: FUN_1000_2b7a @ 1000:2b7a

uint __cdecl16far FUN_1000_2b7a(void)

{
  code *pcVar1;
  uint uVar2;
  double *pdVar3;
  int iVar4;
  undefined2 in_DX;
  int unaff_BP;
  int unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  longdouble lVar5;
  
  *(char *)(unaff_SI + 3) = *(char *)(unaff_SI + 3) + (char)((uint)in_DX >> 8);
  *(undefined2 *)(unaff_BP + -4) = 0;
  if (*(int *)(unaff_BP + -4) < 3) {
    uVar2 = FUN_1000_2b91();
    return uVar2;
  }
  pdVar3 = (double *)func_0x0000190a(0x1000,unaff_BP + -0x10);
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  lVar5 = (longdouble)*pdVar3;
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  pdVar3 = (double *)(double *)*(undefined4 *)(unaff_BP + 0x12);
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  *pdVar3 = (double)lVar5;
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  iVar4 = FUN_1000_72f0();
  return (uint)(iVar4 != 0);
}



// Function: FUN_1000_2b91 @ 1000:2b91

void FUN_1000_2b91(void)

{
  undefined2 *puVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)(*(int *)0x8d4c + 0x548 + *(int *)(unaff_BP + -4) * 4);
  func_0x00001fd0(0x1000,*puVar1,puVar1[1]);
  return;
}



// Function: FUN_1000_2bb6 @ 1000:2bb6

uint __cdecl16far FUN_1000_2bb6(void)

{
  code *pcVar1;
  undefined2 in_AX;
  uint uVar2;
  double *pdVar3;
  int iVar4;
  undefined2 in_DX;
  int unaff_BP;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  longdouble lVar6;
  
  puVar5 = (undefined2 *)(unaff_BP + -0x10 + *(int *)(unaff_BP + -4) * 4);
  *puVar5 = in_AX;
  puVar5[1] = in_DX;
  *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  if (*(int *)(unaff_BP + -4) < 3) {
    uVar2 = FUN_1000_2b91();
    return uVar2;
  }
  pdVar3 = (double *)func_0x0000190a(0x1000);
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  lVar6 = (longdouble)*pdVar3;
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  pdVar3 = (double *)(double *)*(undefined4 *)(unaff_BP + 0x12);
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  *pdVar3 = (double)lVar6;
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  iVar4 = FUN_1000_72f0();
  return (uint)(iVar4 != 0);
}



// Function: FUN_1000_2c20 @ 1000:2c20

void FUN_1000_2c20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_2c2b @ 1000:2c2b

void FUN_1000_2c2b(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(undefined2 *)(unaff_BP + -6) = 0;
  iVar2 = *(int *)0x8d4c;
  uVar1 = *(undefined2 *)0x8d4a;
  iVar3 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = *(undefined2 *)(unaff_BP + 6);
  if ((*(int *)(unaff_BP + 8) == 0) && (*(int *)(unaff_BP + 10) == 0)) {
    FUN_1000_2cf6();
    return;
  }
  pcVar4 = (code *)swi(0x3c);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x39);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  func_0x0000140a();
  return;
}



// Function: FUN_1000_2c68 @ 1000:2c68

void FUN_1000_2c68(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  func_0x0000140a();
  return;
}



// Function: FUN_1000_2c84 @ 1000:2c84

void FUN_1000_2c84(void)

{
  char *pcVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  byte in_AL;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  pcVar1 = (char *)(in_BX + unaff_SI + 1);
  *pcVar1 = *pcVar1 + (in_AL | 199);
  while (*(int *)(unaff_BP + -4) < 3) {
    uVar2 = *(undefined2 *)(unaff_BP + -0x12 + (*(int *)(unaff_BP + -4) * 2 + 1) * 2);
    iVar3 = *(int *)0x8d4c;
    uVar4 = *(undefined2 *)0x8d4a;
    iVar5 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(iVar3 + 0x404 + iVar5 * 2) = uVar2;
    uVar2 = *(undefined2 *)(unaff_BP + -0x12 + *(int *)(unaff_BP + -4) * 4);
    iVar3 = *(int *)0x8d4c;
    uVar4 = *(undefined2 *)0x8d4a;
    iVar5 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(iVar3 + 0x404 + iVar5 * 2) = uVar2;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  FUN_1000_2d29();
  return;
}



// Function: FUN_1000_2cf6 @ 1000:2cf6

void FUN_1000_2cf6(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 6) {
    iVar2 = *(int *)0x8d4c;
    uVar1 = *(undefined2 *)0x8d4a;
    iVar3 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = 0xffff;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 0xc) != 0) || (*(int *)(unaff_BP + 0xe) != 0)) {
    pcVar4 = (code *)swi(0x3c);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x3d);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x39);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x3d);
    (*pcVar4)();
    func_0x0000140a();
    return;
  }
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 6) {
    iVar2 = *(int *)0x8d4c;
    uVar1 = *(undefined2 *)0x8d4a;
    iVar3 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = 0xffff;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 0x10) == 0) && (*(int *)(unaff_BP + 0x12) == 0)) {
    FUN_1000_2ea6();
    return;
  }
  pcVar4 = (code *)swi(0x3c);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x39);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  func_0x0000140a();
  return;
}



// Function: FUN_1000_2d29 @ 1000:2d29

void FUN_1000_2d29(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  if ((*(int *)(unaff_BP + 0xc) != 0) || (*(int *)(unaff_BP + 0xe) != 0)) {
    pcVar4 = (code *)swi(0x3c);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x3d);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x39);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x3d);
    (*pcVar4)();
    func_0x0000140a();
    return;
  }
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 6) {
    iVar2 = *(int *)0x8d4c;
    uVar1 = *(undefined2 *)0x8d4a;
    iVar3 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = 0xffff;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 0x10) == 0) && (*(int *)(unaff_BP + 0x12) == 0)) {
    FUN_1000_2ea6();
    return;
  }
  pcVar4 = (code *)swi(0x3c);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x39);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  func_0x0000140a();
  return;
}



// Function: thunk_FUN_1000_2e9a @ 1000:2e3a

void thunk_FUN_1000_2e9a(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  
  if (*(int *)(unaff_BP + -4) < 3) {
    FUN_1000_2e3d();
    return;
  }
  FUN_1000_2ed9();
  return;
}



// Function: FUN_1000_2e3d @ 1000:2e3d

void FUN_1000_2e3d(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)(unaff_BP + -0x12 + (*(int *)(unaff_BP + -4) * 2 + 1) * 2);
  iVar2 = *(int *)0x8d4c;
  uVar3 = *(undefined2 *)0x8d4a;
  iVar4 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(iVar2 + 0x404 + iVar4 * 2) = uVar1;
  uVar1 = *(undefined2 *)(unaff_BP + -0x12 + *(int *)(unaff_BP + -4) * 4);
  iVar2 = *(int *)0x8d4c;
  uVar3 = *(undefined2 *)0x8d4a;
  iVar4 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(iVar2 + 0x404 + iVar4 * 2) = uVar1;
  *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  if (*(int *)(unaff_BP + -4) < 3) {
    FUN_1000_2e3d();
    return;
  }
  FUN_1000_2ed9();
  return;
}



// Function: FUN_1000_2e9a @ 1000:2e9a

void FUN_1000_2e9a(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  
  if (*(int *)(unaff_BP + -4) < 3) {
    FUN_1000_2e3d();
    return;
  }
  FUN_1000_2ed9();
  return;
}



// Function: FUN_1000_2ea6 @ 1000:2ea6

void FUN_1000_2ea6(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 6) {
    iVar2 = *(int *)0x8d4c;
    uVar1 = *(undefined2 *)0x8d4a;
    iVar3 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = 0xffff;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 0x14) != 0) || (*(int *)(unaff_BP + 0x16) != 0)) {
    pcVar4 = (code *)swi(0x3c);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x3d);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x39);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x3d);
    (*pcVar4)();
    func_0x0000140a();
    return;
  }
  *(undefined2 *)(unaff_BP + -4) = 0;
  if (*(int *)(unaff_BP + -4) < 6) {
    FUN_1000_2f86();
    return;
  }
  if ((*(int *)(unaff_BP + 0x18) == 0) && (*(int *)(unaff_BP + 0x1a) == 0)) {
    FUN_1000_3056();
    return;
  }
  pcVar4 = (code *)swi(0x3c);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x39);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  func_0x0000140a();
  return;
}



// Function: FUN_1000_2ed9 @ 1000:2ed9

void FUN_1000_2ed9(void)

{
  code *pcVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if ((*(int *)(unaff_BP + 0x14) != 0) || (*(int *)(unaff_BP + 0x16) != 0)) {
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    func_0x0000140a();
    return;
  }
  *(undefined2 *)(unaff_BP + -4) = 0;
  if (*(int *)(unaff_BP + -4) < 6) {
    FUN_1000_2f86();
    return;
  }
  if ((*(int *)(unaff_BP + 0x18) == 0) && (*(int *)(unaff_BP + 0x1a) == 0)) {
    FUN_1000_3056();
    return;
  }
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  func_0x0000140a();
  return;
}



// Function: FUN_1000_2f86 @ 1000:2f86

void FUN_1000_2f86(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  iVar2 = *(int *)0x8d4c;
  uVar1 = *(undefined2 *)0x8d4a;
  iVar3 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = 0xffff;
  *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  if (*(int *)(unaff_BP + -4) < 6) {
    FUN_1000_2f86();
    return;
  }
  if ((*(int *)(unaff_BP + 0x18) == 0) && (*(int *)(unaff_BP + 0x1a) == 0)) {
    FUN_1000_3056();
    return;
  }
  pcVar4 = (code *)swi(0x3c);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x39);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  func_0x0000140a();
  return;
}



// Function: FUN_1000_2f92 @ 1000:2f92

void FUN_1000_2f92(void)

{
  int iVar1;
  code *pcVar2;
  undefined2 in_AX;
  int in_BX;
  int unaff_BP;
  undefined2 unaff_SS;
  
  iVar1 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(in_BX + iVar1 * 2) = 0xffff;
  *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  if (*(int *)(unaff_BP + -4) < 6) {
    FUN_1000_2f86();
    return;
  }
  if ((*(int *)(unaff_BP + 0x18) == 0) && (*(int *)(unaff_BP + 0x1a) == 0)) {
    FUN_1000_3056();
    return;
  }
  pcVar2 = (code *)swi(0x3c);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x3d);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x3d);
  (*pcVar2)();
  func_0x0000140a();
  return;
}



// Function: FUN_1000_2fed @ 1000:2fed

void FUN_1000_2fed(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)(unaff_BP + -0x12 + (*(int *)(unaff_BP + -4) * 2 + 1) * 2);
  iVar2 = *(int *)0x8d4c;
  uVar3 = *(undefined2 *)0x8d4a;
  iVar4 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(iVar2 + 0x404 + iVar4 * 2) = uVar1;
  uVar1 = *(undefined2 *)(unaff_BP + -0x12 + *(int *)(unaff_BP + -4) * 4);
  iVar2 = *(int *)0x8d4c;
  uVar3 = *(undefined2 *)0x8d4a;
  iVar4 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(iVar2 + 0x404 + iVar4 * 2) = uVar1;
  *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  if (*(int *)(unaff_BP + -4) < 3) {
    FUN_1000_2fed();
    return;
  }
  FUN_1000_3089();
  return;
}



// Function: FUN_1000_300c @ 1000:300c

void FUN_1000_300c(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 in_AX;
  undefined2 in_CX;
  int in_DX;
  int in_BX;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(in_BX + in_DX * 2) = in_AX;
  uVar1 = *(undefined2 *)(unaff_BP + -0x12 + *(int *)(unaff_BP + -4) * 4);
  iVar2 = *(int *)0x8d4c;
  uVar3 = *(undefined2 *)0x8d4a;
  iVar4 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(iVar2 + 0x404 + iVar4 * 2) = uVar1;
  *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  if (*(int *)(unaff_BP + -4) < 3) {
    FUN_1000_2fed();
    return;
  }
  FUN_1000_3089();
  return;
}



// Function: FUN_1000_3056 @ 1000:3056

void FUN_1000_3056(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 6) {
    iVar2 = *(int *)0x8d4c;
    uVar1 = *(undefined2 *)0x8d4a;
    iVar3 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = 0xffff;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  FUN_1000_7326(0x1000,1);
  return;
}



// Function: FUN_1000_3089 @ 1000:3089

void __cdecl16far FUN_1000_3089(void)

{
  FUN_1000_7326(0x1000,1);
  return;
}



// Function: FUN_1000_309e @ 1000:309e

void FUN_1000_309e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_30d4 @ 1000:30d4

void FUN_1000_30d4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_310a @ 1000:310a

void FUN_1000_310a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_3162 @ 1000:3162

void FUN_1000_3162(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_31ba @ 1000:31ba

void FUN_1000_31ba(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_3206 @ 1000:3206

void FUN_1000_3206(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_323e @ 1000:323e

void FUN_1000_323e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_326e @ 1000:326e

void FUN_1000_326e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_329e @ 1000:329e

void FUN_1000_329e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_32f2 @ 1000:32f2

bool __cdecl16far FUN_1000_32f2(void)

{
  int iVar1;
  
  iVar1 = FUN_1000_72f0(0x1000);
  return iVar1 != 0;
}



// Function: FUN_1000_331a @ 1000:331a

void FUN_1000_331a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_333c @ 1000:333c

void FUN_1000_333c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_335c @ 1000:335c

void __cdecl16far FUN_1000_335c(void)

{
  return;
}



// Function: FUN_1000_335e @ 1000:335e

void FUN_1000_335e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_3394 @ 1000:3394

void FUN_1000_3394(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_33ca @ 1000:33ca

void FUN_1000_33ca(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_33d5 @ 1000:33d5

void FUN_1000_33d5(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(undefined2 *)(unaff_BP + -6) = 0;
  iVar2 = *(int *)0x8d4c;
  uVar1 = *(undefined2 *)0x8d4a;
  iVar3 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = *(undefined2 *)(unaff_BP + 6);
  if ((*(int *)(unaff_BP + 8) != 0) || (*(int *)(unaff_BP + 10) != 0)) {
    pcVar4 = (code *)swi(0x3c);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x3d);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x39);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x3d);
    (*pcVar4)();
    func_0x0000140a();
    return;
  }
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 6) {
    iVar2 = *(int *)0x8d4c;
    uVar1 = *(undefined2 *)0x8d4a;
    iVar3 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = 0xffff;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 0xc) == 0) && (*(int *)(unaff_BP + 0xe) == 0)) {
    FUN_1000_3570();
    return;
  }
  pcVar4 = (code *)swi(0x3c);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x39);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  func_0x0000140a();
  return;
}



// Function: FUN_1000_350b @ 1000:350b

void FUN_1000_350b(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  puVar4 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
  uVar1 = puVar4[1];
  *(undefined2 *)(unaff_BP + -10) = *puVar4;
  *(undefined2 *)(unaff_BP + -8) = uVar1;
  iVar2 = *(int *)0x8d4c;
  uVar1 = *(undefined2 *)0x8d4a;
  iVar3 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = *(undefined2 *)(unaff_BP + -8);
  iVar2 = *(int *)0x8d4c;
  uVar1 = *(undefined2 *)0x8d4a;
  iVar3 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = *(undefined2 *)(unaff_BP + -10);
  *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  if (*(int *)(unaff_BP + -4) < 3) {
    FUN_1000_350b();
    return;
  }
  FUN_1000_35a3();
  return;
}



// Function: FUN_1000_352e @ 1000:352e

void FUN_1000_352e(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 in_AX;
  int in_BX;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  iVar2 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(in_BX + iVar2 * 2) = *(undefined2 *)(unaff_BP + -8);
  iVar2 = *(int *)0x8d4c;
  uVar1 = *(undefined2 *)0x8d4a;
  iVar3 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = *(undefined2 *)(unaff_BP + -10);
  *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  if (*(int *)(unaff_BP + -4) < 3) {
    FUN_1000_350b();
    return;
  }
  FUN_1000_35a3();
  return;
}



// Function: FUN_1000_3570 @ 1000:3570

void FUN_1000_3570(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 6) {
    iVar2 = *(int *)0x8d4c;
    uVar1 = *(undefined2 *)0x8d4a;
    iVar3 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = 0xffff;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 0x10) == 0) && (*(int *)(unaff_BP + 0x12) == 0)) {
    FUN_1000_3644();
    return;
  }
  pcVar4 = (code *)swi(0x3c);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x39);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  func_0x0000140a();
  return;
}



// Function: FUN_1000_35a3 @ 1000:35a3

void FUN_1000_35a3(void)

{
  code *pcVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if ((*(int *)(unaff_BP + 0x10) == 0) && (*(int *)(unaff_BP + 0x12) == 0)) {
    FUN_1000_3644();
    return;
  }
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  func_0x0000140a();
  return;
}



// Function: FUN_1000_35df @ 1000:35df

void FUN_1000_35df(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  puVar4 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
  uVar1 = puVar4[1];
  *(undefined2 *)(unaff_BP + -10) = *puVar4;
  *(undefined2 *)(unaff_BP + -8) = uVar1;
  iVar2 = *(int *)0x8d4c;
  uVar1 = *(undefined2 *)0x8d4a;
  iVar3 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = *(undefined2 *)(unaff_BP + -8);
  iVar2 = *(int *)0x8d4c;
  uVar1 = *(undefined2 *)0x8d4a;
  iVar3 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = *(undefined2 *)(unaff_BP + -10);
  *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  if (*(int *)(unaff_BP + -4) < 3) {
    FUN_1000_35df();
    return;
  }
  FUN_1000_3677();
  return;
}



// Function: FUN_1000_3632 @ 1000:3632

void FUN_1000_3632(void)

{
  undefined2 in_AX;
  undefined2 *in_BX;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *in_BX = in_AX;
  *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  if (*(int *)(unaff_BP + -4) < 3) {
    FUN_1000_35df();
    return;
  }
  FUN_1000_3677();
  return;
}



// Function: FUN_1000_3644 @ 1000:3644

void FUN_1000_3644(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined2 *puVar5;
  int unaff_BP;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  
  uVar6 = 0x1000;
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 6) {
    iVar2 = *(int *)0x8d4c;
    uVar1 = *(undefined2 *)0x8d4a;
    iVar3 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = 0xffff;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 0x14) == 0) && (*(int *)(unaff_BP + 0x16) == 0)) {
    *(undefined2 *)(unaff_BP + -4) = 0;
    while (*(int *)(unaff_BP + -4) < 6) {
      iVar2 = *(int *)0x8d4c;
      uVar1 = *(undefined2 *)0x8d4a;
      iVar3 = *(int *)(unaff_BP + -6);
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
      *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = 0xffff;
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
    }
    if ((*(int *)(unaff_BP + 0x18) == 0) && (*(int *)(unaff_BP + 0x1a) == 0)) {
      *(undefined2 *)(unaff_BP + -4) = 0;
      while (*(int *)(unaff_BP + -4) < 6) {
        iVar2 = *(int *)0x8d4c;
        uVar1 = *(undefined2 *)0x8d4a;
        iVar3 = *(int *)(unaff_BP + -6);
        *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
        *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = 0xffff;
        *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
      }
    }
    else {
      pcVar4 = (code *)swi(0x3c);
      (*pcVar4)();
      pcVar4 = (code *)swi(0x3d);
      (*pcVar4)();
      pcVar4 = (code *)swi(0x39);
      (*pcVar4)();
      pcVar4 = (code *)swi(0x3d);
      (*pcVar4)();
      uVar6 = 0x140;
      func_0x0000140a();
      *(undefined2 *)(unaff_BP + -4) = 0;
      while (*(int *)(unaff_BP + -4) < 3) {
        puVar5 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
        uVar1 = puVar5[1];
        *(undefined2 *)(unaff_BP + -10) = *puVar5;
        *(undefined2 *)(unaff_BP + -8) = uVar1;
        iVar2 = *(int *)0x8d4c;
        uVar1 = *(undefined2 *)0x8d4a;
        iVar3 = *(int *)(unaff_BP + -6);
        *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
        *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = *(undefined2 *)(unaff_BP + -8);
        iVar2 = *(int *)0x8d4c;
        uVar1 = *(undefined2 *)0x8d4a;
        iVar3 = *(int *)(unaff_BP + -6);
        *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
        *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = *(undefined2 *)(unaff_BP + -10);
        *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
      }
    }
    FUN_1000_7326(uVar6,8);
    return;
  }
  pcVar4 = (code *)swi(0x3c);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x39);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  func_0x0000140a();
  return;
}



// Function: FUN_1000_3677 @ 1000:3677

void __cdecl16far FUN_1000_3677(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined2 *puVar5;
  int unaff_BP;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  
  uVar6 = 0x1000;
  if ((*(int *)(unaff_BP + 0x14) == 0) && (*(int *)(unaff_BP + 0x16) == 0)) {
    *(undefined2 *)(unaff_BP + -4) = 0;
    while (*(int *)(unaff_BP + -4) < 6) {
      iVar2 = *(int *)0x8d4c;
      uVar1 = *(undefined2 *)0x8d4a;
      iVar3 = *(int *)(unaff_BP + -6);
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
      *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = 0xffff;
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
    }
    if ((*(int *)(unaff_BP + 0x18) == 0) && (*(int *)(unaff_BP + 0x1a) == 0)) {
      *(undefined2 *)(unaff_BP + -4) = 0;
      while (*(int *)(unaff_BP + -4) < 6) {
        iVar2 = *(int *)0x8d4c;
        uVar1 = *(undefined2 *)0x8d4a;
        iVar3 = *(int *)(unaff_BP + -6);
        *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
        *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = 0xffff;
        *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
      }
    }
    else {
      pcVar4 = (code *)swi(0x3c);
      (*pcVar4)();
      pcVar4 = (code *)swi(0x3d);
      (*pcVar4)();
      pcVar4 = (code *)swi(0x39);
      (*pcVar4)();
      pcVar4 = (code *)swi(0x3d);
      (*pcVar4)();
      uVar6 = 0x140;
      func_0x0000140a();
      *(undefined2 *)(unaff_BP + -4) = 0;
      while (*(int *)(unaff_BP + -4) < 3) {
        puVar5 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
        uVar1 = puVar5[1];
        *(undefined2 *)(unaff_BP + -10) = *puVar5;
        *(undefined2 *)(unaff_BP + -8) = uVar1;
        iVar2 = *(int *)0x8d4c;
        uVar1 = *(undefined2 *)0x8d4a;
        iVar3 = *(int *)(unaff_BP + -6);
        *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
        *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = *(undefined2 *)(unaff_BP + -8);
        iVar2 = *(int *)0x8d4c;
        uVar1 = *(undefined2 *)0x8d4a;
        iVar3 = *(int *)(unaff_BP + -6);
        *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
        *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = *(undefined2 *)(unaff_BP + -10);
        *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
      }
    }
    FUN_1000_7326(uVar6,8);
    return;
  }
  pcVar4 = (code *)swi(0x3c);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x39);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  func_0x0000140a();
  return;
}



// Function: FUN_1000_3834 @ 1000:3834

void FUN_1000_3834(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_38ac @ 1000:38ac

void FUN_1000_38ac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_3dc6 @ 1000:3dc6

void FUN_1000_3dc6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_3de8 @ 1000:3de8

void FUN_1000_3de8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_3e0a @ 1000:3e0a

void FUN_1000_3e0a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_3e15 @ 1000:3e15

void FUN_1000_3e15(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(undefined2 *)(unaff_BP + -6) = 0;
  iVar2 = *(int *)0x8d4c;
  uVar1 = *(undefined2 *)0x8d4a;
  iVar3 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = *(undefined2 *)(unaff_BP + 6);
  if ((*(int *)(unaff_BP + 8) != 0) || (*(int *)(unaff_BP + 10) != 0)) {
    pcVar4 = (code *)swi(0x3c);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x3d);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x39);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x3d);
    (*pcVar4)();
    func_0x0000140a();
    return;
  }
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 6) {
    iVar2 = *(int *)0x8d4c;
    uVar1 = *(undefined2 *)0x8d4a;
    iVar3 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = 0xffff;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 0xc) == 0) && (*(int *)(unaff_BP + 0xe) == 0)) {
    *(undefined2 *)(unaff_BP + -4) = 0;
    while (*(int *)(unaff_BP + -4) < 6) {
      iVar2 = *(int *)0x8d4c;
      uVar1 = *(undefined2 *)0x8d4a;
      iVar3 = *(int *)(unaff_BP + -6);
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
      *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = 0xffff;
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
    }
    if ((*(int *)(unaff_BP + 0x10) == 0) && (*(int *)(unaff_BP + 0x12) == 0)) {
      FUN_1000_4084();
      return;
    }
    pcVar4 = (code *)swi(0x3c);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x3d);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x39);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x3d);
    (*pcVar4)();
    func_0x0000140a();
    return;
  }
  pcVar4 = (code *)swi(0x3c);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x39);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  func_0x0000140a();
  return;
}



// Function: FUN_1000_4006 @ 1000:4006

void FUN_1000_4006(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  func_0x0000140a();
  return;
}



// Function: FUN_1000_4084 @ 1000:4084

void __cdecl16far FUN_1000_4084(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 6) {
    iVar2 = *(int *)0x8d4c;
    uVar1 = *(undefined2 *)0x8d4a;
    iVar3 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = 0xffff;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 0x14) != 0) || (*(int *)(unaff_BP + 0x16) != 0)) {
    pcVar4 = (code *)swi(0x3c);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x3d);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x39);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x3d);
    (*pcVar4)();
    func_0x0000140a();
    return;
  }
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 6) {
    iVar2 = *(int *)0x8d4c;
    uVar1 = *(undefined2 *)0x8d4a;
    iVar3 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = 0xffff;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 0x18) == 0) && (*(int *)(unaff_BP + 0x1a) == 0)) {
    *(undefined2 *)(unaff_BP + -4) = 0;
    while (*(int *)(unaff_BP + -4) < 6) {
      iVar2 = *(int *)0x8d4c;
      uVar1 = *(undefined2 *)0x8d4a;
      iVar3 = *(int *)(unaff_BP + -6);
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
      *(undefined2 *)(iVar2 + 0x404 + iVar3 * 2) = 0xffff;
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
    }
    FUN_1000_7326(0x1000,0x10);
    return;
  }
  pcVar4 = (code *)swi(0x3c);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x39);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  func_0x0000140a();
  return;
}



// Function: FUN_1000_4274 @ 1000:4274

void FUN_1000_4274(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_46d0 @ 1000:46d0

void FUN_1000_46d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_4a16 @ 1000:4a16

void FUN_1000_4a16(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_4a7c @ 1000:4a7c

void FUN_1000_4a7c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_4abe @ 1000:4abe

void FUN_1000_4abe(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_4b20 @ 1000:4b20

void FUN_1000_4b20(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_4b82 @ 1000:4b82

void FUN_1000_4b82(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_4ba4 @ 1000:4ba4

void FUN_1000_4ba4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_4efc @ 1000:4efc

void FUN_1000_4efc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_4f72 @ 1000:4f72

/* WARNING: Instruction at (ram,0x00014f73) overlaps instruction at (ram,0x00014f72)
    */

void FUN_1000_4f72(void)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int unaff_BP;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  while( true ) {
    func_0x00014238(unaff_CS,unaff_BP + -0x20c);
    *(undefined1 *)(unaff_BP + -0x1fd) = 10;
    *(undefined1 *)(unaff_BP + -0x1fc) = 0;
    *(undefined2 *)(unaff_BP + -0x20e) = 0;
    if ((*(int *)(unaff_BP + -0x210) != 0x200) &&
       ((*(byte *)((int)*(undefined4 *)(unaff_BP + 6) + 10) & 0x20) != 0)) {
      FUN_1000_50cb();
      return;
    }
    *(int *)(unaff_BP + -8) = unaff_BP + -0x20c;
    *(undefined2 *)(unaff_BP + -6) = unaff_SS;
    *(undefined2 *)(unaff_BP + -10) = 0;
    if (*(int *)(unaff_BP + -0x210) != 0) {
      while (1 < *(int *)(unaff_BP + -0x210)) {
        puVar2 = (undefined1 *)*(undefined2 *)(unaff_BP + -8);
        uVar1 = *(undefined2 *)(unaff_BP + -6);
        *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
        *(undefined1 *)(unaff_BP + -0xb) = *puVar2;
        puVar2 = (undefined1 *)*(undefined2 *)(unaff_BP + -8);
        uVar1 = *(undefined2 *)(unaff_BP + -6);
        *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
        *(undefined1 *)(unaff_BP + -0xc) = *puVar2;
        iVar4 = *(int *)0x8d4c;
        uVar1 = *(undefined2 *)0x8d4a;
        iVar3 = *(int *)(unaff_BP + -10);
        *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + 1;
        *(undefined2 *)(iVar4 + 0x200 + iVar3 * 2) = *(undefined2 *)(unaff_BP + -0xc);
        *(int *)(unaff_BP + -0x210) = *(int *)(unaff_BP + -0x210) + -2;
      }
    }
    if (*(int *)(unaff_BP + -0x210) != 0) {
      *(undefined1 *)(unaff_BP + -0xb) = *(undefined1 *)*(undefined4 *)(unaff_BP + -8);
      *(undefined1 *)(unaff_BP + -0xc) = 0;
      iVar4 = *(int *)0x8d4c;
      uVar1 = *(undefined2 *)0x8d4a;
      iVar3 = *(int *)(unaff_BP + -10);
      *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + 1;
      *(undefined2 *)(iVar4 + 0x200 + iVar3 * 2) = *(undefined2 *)(unaff_BP + -0xc);
    }
    if (*(int *)(unaff_BP + -10) < 0x200) {
      iVar4 = *(int *)0x8d4c;
      uVar1 = *(undefined2 *)0x8d4a;
      iVar3 = *(int *)(unaff_BP + -10);
      *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + 1;
      *(undefined2 *)(iVar4 + 0x200 + iVar3 * 2) = 0;
    }
    iVar4 = FUN_1000_7326();
    if (iVar4 == 0) break;
    if ((*(byte *)((int)*(undefined4 *)(unaff_BP + 6) + 10) & 0x10) != 0) {
      FUN_1000_50c5();
      return;
    }
    if (*(int *)(unaff_BP + -0x20e) == 0) {
      FUN_1000_4f98();
      return;
    }
    *(undefined2 *)(unaff_BP + -0x210) = 0x10;
    unaff_CS = 0x105e;
  }
  FUN_1000_50cb();
  return;
}



// Function: FUN_1000_4f98 @ 1000:4f98

void FUN_1000_4f98(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  uVar3 = FUN_1000_0d74(unaff_BP + -0x20c);
  *(undefined2 *)(unaff_BP + -0x210) = uVar3;
  while( true ) {
    if ((*(int *)(unaff_BP + -0x210) != 0x200) &&
       ((*(byte *)((int)*(undefined4 *)(unaff_BP + 6) + 10) & 0x20) != 0)) {
      FUN_1000_50cb();
      return;
    }
    *(int *)(unaff_BP + -8) = unaff_BP + -0x20c;
    *(undefined2 *)(unaff_BP + -6) = unaff_SS;
    *(undefined2 *)(unaff_BP + -10) = 0;
    if (*(int *)(unaff_BP + -0x210) != 0) {
      while (1 < *(int *)(unaff_BP + -0x210)) {
        puVar1 = (undefined1 *)*(undefined2 *)(unaff_BP + -8);
        uVar3 = *(undefined2 *)(unaff_BP + -6);
        *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
        *(undefined1 *)(unaff_BP + -0xb) = *puVar1;
        puVar1 = (undefined1 *)*(undefined2 *)(unaff_BP + -8);
        uVar3 = *(undefined2 *)(unaff_BP + -6);
        *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
        *(undefined1 *)(unaff_BP + -0xc) = *puVar1;
        iVar4 = *(int *)0x8d4c;
        uVar3 = *(undefined2 *)0x8d4a;
        iVar2 = *(int *)(unaff_BP + -10);
        *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + 1;
        *(undefined2 *)(iVar4 + 0x200 + iVar2 * 2) = *(undefined2 *)(unaff_BP + -0xc);
        *(int *)(unaff_BP + -0x210) = *(int *)(unaff_BP + -0x210) + -2;
      }
    }
    if (*(int *)(unaff_BP + -0x210) != 0) {
      *(undefined1 *)(unaff_BP + -0xb) = *(undefined1 *)*(undefined4 *)(unaff_BP + -8);
      *(undefined1 *)(unaff_BP + -0xc) = 0;
      iVar4 = *(int *)0x8d4c;
      uVar3 = *(undefined2 *)0x8d4a;
      iVar2 = *(int *)(unaff_BP + -10);
      *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + 1;
      *(undefined2 *)(iVar4 + 0x200 + iVar2 * 2) = *(undefined2 *)(unaff_BP + -0xc);
    }
    if (*(int *)(unaff_BP + -10) < 0x200) {
      iVar4 = *(int *)0x8d4c;
      uVar3 = *(undefined2 *)0x8d4a;
      iVar2 = *(int *)(unaff_BP + -10);
      *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + 1;
      *(undefined2 *)(iVar4 + 0x200 + iVar2 * 2) = 0;
    }
    iVar4 = FUN_1000_7326(0x105e,0x29);
    if (iVar4 == 0) break;
    if ((*(byte *)((int)*(undefined4 *)(unaff_BP + 6) + 10) & 0x10) != 0) {
      FUN_1000_50c5();
      return;
    }
    if (*(int *)(unaff_BP + -0x20e) == 0) {
      FUN_1000_4f98();
      return;
    }
    *(undefined2 *)(unaff_BP + -0x210) = 0x10;
    func_0x00014238(0x105e,unaff_BP + -0x20c);
    *(undefined1 *)(unaff_BP + -0x1fd) = 10;
    *(undefined1 *)(unaff_BP + -0x1fc) = 0;
    *(undefined2 *)(unaff_BP + -0x20e) = 0;
  }
  FUN_1000_50cb();
  return;
}



// Function: FUN_1000_50c5 @ 1000:50c5

void FUN_1000_50c5(void)

{
  FUN_1000_50cb();
  return;
}



// Function: FUN_1000_50cb @ 1000:50cb

void __cdecl16far FUN_1000_50cb(void)

{
  return;
}



// Function: FUN_1000_50d2 @ 1000:50d2

void FUN_1000_50d2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_5206 @ 1000:5206

/* WARNING: Instruction at (ram,0x00015208) overlaps instruction at (ram,0x00015206)
    */

void FUN_1000_5206(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int in_CX;
  undefined2 *in_BX;
  int unaff_BP;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  if (in_CX != 1) goto LAB_1000_520b_3;
  *in_BX = 0;
  while( true ) {
    iVar4 = FUN_1000_7326(unaff_CS,0x26);
    if (iVar4 == 0) {
      FUN_1000_5236();
      return;
    }
    if ((*(byte *)((int)*(undefined4 *)(unaff_BP + 6) + 10) & 0x10) != 0) break;
    unaff_CS = 0x105e;
    uVar3 = FUN_1000_0d74(unaff_BP + -0x20c);
    *(undefined2 *)(unaff_BP + -0x20e) = uVar3;
    if ((*(int *)(unaff_BP + -0x20e) != 0x200) &&
       ((*(byte *)((int)*(undefined4 *)(unaff_BP + 6) + 10) & 0x20) != 0)) {
      FUN_1000_5236();
      return;
    }
    *(int *)(unaff_BP + -8) = unaff_BP + -0x20c;
    *(undefined2 *)(unaff_BP + -6) = unaff_SS;
    *(undefined2 *)(unaff_BP + -10) = 0;
    if (*(int *)(unaff_BP + -0x20e) != 0) {
      while (1 < *(int *)(unaff_BP + -0x20e)) {
        puVar1 = (undefined1 *)*(undefined2 *)(unaff_BP + -8);
        uVar3 = *(undefined2 *)(unaff_BP + -6);
        *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
        *(undefined1 *)(unaff_BP + -0xb) = *puVar1;
        puVar1 = (undefined1 *)*(undefined2 *)(unaff_BP + -8);
        uVar3 = *(undefined2 *)(unaff_BP + -6);
        *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
        *(undefined1 *)(unaff_BP + -0xc) = *puVar1;
        iVar4 = *(int *)0x8d4c;
        uVar3 = *(undefined2 *)0x8d4a;
        iVar2 = *(int *)(unaff_BP + -10);
        *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + 1;
        *(undefined2 *)(iVar4 + 0x200 + iVar2 * 2) = *(undefined2 *)(unaff_BP + -0xc);
        *(int *)(unaff_BP + -0x20e) = *(int *)(unaff_BP + -0x20e) + -2;
      }
    }
    if (*(int *)(unaff_BP + -0x20e) != 0) {
      *(undefined1 *)(unaff_BP + -0xb) = *(undefined1 *)*(undefined4 *)(unaff_BP + -8);
      *(undefined1 *)(unaff_BP + -0xc) = 0;
      iVar4 = *(int *)0x8d4c;
      uVar3 = *(undefined2 *)0x8d4a;
      iVar2 = *(int *)(unaff_BP + -10);
      *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + 1;
      *(undefined2 *)(iVar4 + 0x200 + iVar2 * 2) = *(undefined2 *)(unaff_BP + -0xc);
    }
    if (*(int *)(unaff_BP + -10) < 0x200) {
      iVar4 = *(int *)0x8d4c;
      unaff_ES = *(undefined2 *)0x8d4a;
      iVar2 = *(int *)(unaff_BP + -10);
      *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + 1;
      in_BX = (undefined2 *)(iVar4 + 0x200 + iVar2 * 2);
LAB_1000_520b_3:
      *in_BX = 0;
    }
  }
  FUN_1000_5230();
  return;
}



// Function: FUN_1000_5230 @ 1000:5230

void FUN_1000_5230(void)

{
  FUN_1000_5236();
  return;
}



// Function: FUN_1000_5236 @ 1000:5236

void __cdecl16far FUN_1000_5236(void)

{
  return;
}



// Function: FUN_1000_523c @ 1000:523c

void FUN_1000_523c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_52d8 @ 1000:52d8

void FUN_1000_52d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_53be @ 1000:53be

void FUN_1000_53be(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_53e0 @ 1000:53e0

void FUN_1000_53e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_5402 @ 1000:5402

void FUN_1000_5402(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_54d6 @ 1000:54d6

void FUN_1000_54d6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_568c @ 1000:568c

void FUN_1000_568c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_57aa @ 1000:57aa

void FUN_1000_57aa(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_57e0 @ 1000:57e0

void FUN_1000_57e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_5826 @ 1000:5826

undefined2 FUN_1000_5826(void)

{
  int iVar1;
  code *pcVar2;
  undefined2 in_AX;
  int iVar3;
  undefined2 uVar4;
  double *pdVar5;
  undefined2 *in_BX;
  undefined2 *puVar6;
  int unaff_BP;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  longdouble lVar7;
  
  *in_BX = in_AX;
  iVar3 = FUN_1000_7326();
  if (iVar3 != 1) {
    uVar4 = FUN_1000_5b78();
    return uVar4;
  }
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 3) {
    iVar3 = *(int *)0x8d4c;
    uVar4 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(iVar3 + 0x404 + iVar1 * 2);
    iVar3 = *(int *)0x8d4c;
    uVar4 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(iVar3 + 0x404 + iVar1 * 2);
    puVar6 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
    uVar4 = *(undefined2 *)(unaff_BP + -8);
    *puVar6 = *(undefined2 *)(unaff_BP + -10);
    puVar6[1] = uVar4;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 8) != 0) || (*(int *)(unaff_BP + 10) != 0)) {
    unaff_CS = 0x140;
    pdVar5 = (double *)func_0x0000190a();
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    lVar7 = (longdouble)*pdVar5;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    pdVar5 = (double *)(double *)*(undefined4 *)(unaff_BP + 8);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    *pdVar5 = (double)lVar7;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
  }
  *(undefined2 *)(unaff_BP + -4) = 0;
  if (2 < *(int *)(unaff_BP + -4)) {
    if ((*(int *)(unaff_BP + 0xc) != 0) || (*(int *)(unaff_BP + 0xe) != 0)) {
      pdVar5 = (double *)func_0x0000190a(unaff_CS,unaff_BP + -0x16);
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      lVar7 = (longdouble)*pdVar5;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      pdVar5 = (double *)(double *)*(undefined4 *)(unaff_BP + 0xc);
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      *pdVar5 = (double)lVar7;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      unaff_CS = 0x140;
    }
    *(undefined2 *)(unaff_BP + -4) = 0;
    while (*(int *)(unaff_BP + -4) < 3) {
      iVar3 = *(int *)0x8d4c;
      uVar4 = *(undefined2 *)0x8d4a;
      iVar1 = *(int *)(unaff_BP + -6);
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
      *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(iVar3 + 0x404 + iVar1 * 2);
      iVar3 = *(int *)0x8d4c;
      uVar4 = *(undefined2 *)0x8d4a;
      iVar1 = *(int *)(unaff_BP + -6);
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
      *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(iVar3 + 0x404 + iVar1 * 2);
      puVar6 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
      uVar4 = *(undefined2 *)(unaff_BP + -8);
      *puVar6 = *(undefined2 *)(unaff_BP + -10);
      puVar6[1] = uVar4;
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
    }
    if ((*(int *)(unaff_BP + 0x10) != 0) || (*(int *)(unaff_BP + 0x12) != 0)) {
      pdVar5 = (double *)func_0x0000190a(unaff_CS,unaff_BP + -0x16);
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      lVar7 = (longdouble)*pdVar5;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      pdVar5 = (double *)(double *)*(undefined4 *)(unaff_BP + 0x10);
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      *pdVar5 = (double)lVar7;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      unaff_CS = 0x140;
    }
    *(undefined2 *)(unaff_BP + -4) = 0;
    while (*(int *)(unaff_BP + -4) < 3) {
      iVar3 = *(int *)0x8d4c;
      uVar4 = *(undefined2 *)0x8d4a;
      iVar1 = *(int *)(unaff_BP + -6);
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
      *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(iVar3 + 0x404 + iVar1 * 2);
      iVar3 = *(int *)0x8d4c;
      uVar4 = *(undefined2 *)0x8d4a;
      iVar1 = *(int *)(unaff_BP + -6);
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
      *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(iVar3 + 0x404 + iVar1 * 2);
      puVar6 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
      uVar4 = *(undefined2 *)(unaff_BP + -8);
      *puVar6 = *(undefined2 *)(unaff_BP + -10);
      puVar6[1] = uVar4;
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
    }
    if ((*(int *)(unaff_BP + 0x14) != 0) || (*(int *)(unaff_BP + 0x16) != 0)) {
      pdVar5 = (double *)func_0x0000190a(unaff_CS,unaff_BP + -0x16);
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      lVar7 = (longdouble)*pdVar5;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      pdVar5 = (double *)(double *)*(undefined4 *)(unaff_BP + 0x14);
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      *pdVar5 = (double)lVar7;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      unaff_CS = 0x140;
    }
    *(undefined2 *)(unaff_BP + -4) = 0;
    while (*(int *)(unaff_BP + -4) < 3) {
      iVar3 = *(int *)0x8d4c;
      uVar4 = *(undefined2 *)0x8d4a;
      iVar1 = *(int *)(unaff_BP + -6);
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
      *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(iVar3 + 0x404 + iVar1 * 2);
      iVar3 = *(int *)0x8d4c;
      uVar4 = *(undefined2 *)0x8d4a;
      iVar1 = *(int *)(unaff_BP + -6);
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
      *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(iVar3 + 0x404 + iVar1 * 2);
      puVar6 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
      uVar4 = *(undefined2 *)(unaff_BP + -8);
      *puVar6 = *(undefined2 *)(unaff_BP + -10);
      puVar6[1] = uVar4;
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
    }
    if ((*(int *)(unaff_BP + 0x18) != 0) || (*(int *)(unaff_BP + 0x1a) != 0)) {
      pdVar5 = (double *)func_0x0000190a(unaff_CS,unaff_BP + -0x16);
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      lVar7 = (longdouble)*pdVar5;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      pdVar5 = (double *)(double *)*(undefined4 *)(unaff_BP + 0x18);
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      *pdVar5 = (double)lVar7;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      unaff_CS = 0x140;
    }
    iVar3 = FUN_1000_72f0(unaff_CS,0);
    if (iVar3 == 0) {
      return 0;
    }
    uVar4 = FUN_1000_5b6f();
    return uVar4;
  }
  uVar4 = FUN_1000_58e5();
  return uVar4;
}



// Function: FUN_1000_58e5 @ 1000:58e5

undefined2 FUN_1000_58e5(void)

{
  int iVar1;
  code *pcVar2;
  undefined2 uVar3;
  double *pdVar4;
  int iVar5;
  undefined2 *puVar6;
  int unaff_BP;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  longdouble lVar8;
  
  uVar7 = 0x1000;
  iVar5 = *(int *)0x8d4c;
  uVar3 = *(undefined2 *)0x8d4a;
  iVar1 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
  iVar5 = *(int *)0x8d4c;
  uVar3 = *(undefined2 *)0x8d4a;
  iVar1 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
  puVar6 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
  uVar3 = *(undefined2 *)(unaff_BP + -8);
  *puVar6 = *(undefined2 *)(unaff_BP + -10);
  puVar6[1] = uVar3;
  *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  if (*(int *)(unaff_BP + -4) < 3) {
    uVar3 = FUN_1000_58e5();
    return uVar3;
  }
  if ((*(int *)(unaff_BP + 0xc) != 0) || (*(int *)(unaff_BP + 0xe) != 0)) {
    uVar7 = 0x140;
    pdVar4 = (double *)func_0x0000190a(0x1000,unaff_BP + -0x16);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    lVar8 = (longdouble)*pdVar4;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    pdVar4 = (double *)(double *)*(undefined4 *)(unaff_BP + 0xc);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    *pdVar4 = (double)lVar8;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
  }
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 3) {
    iVar5 = *(int *)0x8d4c;
    uVar3 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
    iVar5 = *(int *)0x8d4c;
    uVar3 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
    puVar6 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
    uVar3 = *(undefined2 *)(unaff_BP + -8);
    *puVar6 = *(undefined2 *)(unaff_BP + -10);
    puVar6[1] = uVar3;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 0x10) != 0) || (*(int *)(unaff_BP + 0x12) != 0)) {
    pdVar4 = (double *)func_0x0000190a(uVar7,unaff_BP + -0x16);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    lVar8 = (longdouble)*pdVar4;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    pdVar4 = (double *)(double *)*(undefined4 *)(unaff_BP + 0x10);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    *pdVar4 = (double)lVar8;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    uVar7 = 0x140;
  }
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 3) {
    iVar5 = *(int *)0x8d4c;
    uVar3 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
    iVar5 = *(int *)0x8d4c;
    uVar3 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
    puVar6 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
    uVar3 = *(undefined2 *)(unaff_BP + -8);
    *puVar6 = *(undefined2 *)(unaff_BP + -10);
    puVar6[1] = uVar3;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 0x14) != 0) || (*(int *)(unaff_BP + 0x16) != 0)) {
    pdVar4 = (double *)func_0x0000190a(uVar7,unaff_BP + -0x16);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    lVar8 = (longdouble)*pdVar4;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    pdVar4 = (double *)(double *)*(undefined4 *)(unaff_BP + 0x14);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    *pdVar4 = (double)lVar8;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    uVar7 = 0x140;
  }
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 3) {
    iVar5 = *(int *)0x8d4c;
    uVar3 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
    iVar5 = *(int *)0x8d4c;
    uVar3 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
    puVar6 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
    uVar3 = *(undefined2 *)(unaff_BP + -8);
    *puVar6 = *(undefined2 *)(unaff_BP + -10);
    puVar6[1] = uVar3;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 0x18) != 0) || (*(int *)(unaff_BP + 0x1a) != 0)) {
    pdVar4 = (double *)func_0x0000190a(uVar7,unaff_BP + -0x16);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    lVar8 = (longdouble)*pdVar4;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    pdVar4 = (double *)(double *)*(undefined4 *)(unaff_BP + 0x18);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    *pdVar4 = (double)lVar8;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    uVar7 = 0x140;
  }
  iVar5 = FUN_1000_72f0(uVar7,0);
  if (iVar5 == 0) {
    return 0;
  }
  uVar3 = FUN_1000_5b6f();
  return uVar3;
}



// Function: FUN_1000_58e8 @ 1000:58e8

undefined2 FUN_1000_58e8(void)

{
  int iVar1;
  code *pcVar2;
  int in_AX;
  undefined2 uVar3;
  double *pdVar4;
  int iVar5;
  undefined2 *puVar6;
  int unaff_BP;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  longdouble lVar8;
  
  uVar7 = 0x1000;
  iVar5 = *(int *)0x8d4c;
  uVar3 = *(undefined2 *)0x8d4a;
  iVar1 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(iVar5 + in_AX + iVar1 * 2);
  iVar5 = *(int *)0x8d4c;
  uVar3 = *(undefined2 *)0x8d4a;
  iVar1 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
  puVar6 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
  uVar3 = *(undefined2 *)(unaff_BP + -8);
  *puVar6 = *(undefined2 *)(unaff_BP + -10);
  puVar6[1] = uVar3;
  *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  if (*(int *)(unaff_BP + -4) < 3) {
    uVar3 = FUN_1000_58e5();
    return uVar3;
  }
  if ((*(int *)(unaff_BP + 0xc) != 0) || (*(int *)(unaff_BP + 0xe) != 0)) {
    uVar7 = 0x140;
    pdVar4 = (double *)func_0x0000190a(0x1000,unaff_BP + -0x16);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    lVar8 = (longdouble)*pdVar4;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    pdVar4 = (double *)(double *)*(undefined4 *)(unaff_BP + 0xc);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    *pdVar4 = (double)lVar8;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
  }
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 3) {
    iVar5 = *(int *)0x8d4c;
    uVar3 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
    iVar5 = *(int *)0x8d4c;
    uVar3 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
    puVar6 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
    uVar3 = *(undefined2 *)(unaff_BP + -8);
    *puVar6 = *(undefined2 *)(unaff_BP + -10);
    puVar6[1] = uVar3;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 0x10) != 0) || (*(int *)(unaff_BP + 0x12) != 0)) {
    pdVar4 = (double *)func_0x0000190a(uVar7,unaff_BP + -0x16);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    lVar8 = (longdouble)*pdVar4;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    pdVar4 = (double *)(double *)*(undefined4 *)(unaff_BP + 0x10);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    *pdVar4 = (double)lVar8;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    uVar7 = 0x140;
  }
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 3) {
    iVar5 = *(int *)0x8d4c;
    uVar3 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
    iVar5 = *(int *)0x8d4c;
    uVar3 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
    puVar6 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
    uVar3 = *(undefined2 *)(unaff_BP + -8);
    *puVar6 = *(undefined2 *)(unaff_BP + -10);
    puVar6[1] = uVar3;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 0x14) != 0) || (*(int *)(unaff_BP + 0x16) != 0)) {
    pdVar4 = (double *)func_0x0000190a(uVar7,unaff_BP + -0x16);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    lVar8 = (longdouble)*pdVar4;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    pdVar4 = (double *)(double *)*(undefined4 *)(unaff_BP + 0x14);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    *pdVar4 = (double)lVar8;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    uVar7 = 0x140;
  }
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 3) {
    iVar5 = *(int *)0x8d4c;
    uVar3 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
    iVar5 = *(int *)0x8d4c;
    uVar3 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
    puVar6 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
    uVar3 = *(undefined2 *)(unaff_BP + -8);
    *puVar6 = *(undefined2 *)(unaff_BP + -10);
    puVar6[1] = uVar3;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 0x18) != 0) || (*(int *)(unaff_BP + 0x1a) != 0)) {
    pdVar4 = (double *)func_0x0000190a(uVar7,unaff_BP + -0x16);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    lVar8 = (longdouble)*pdVar4;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    pdVar4 = (double *)(double *)*(undefined4 *)(unaff_BP + 0x18);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    *pdVar4 = (double)lVar8;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    uVar7 = 0x140;
  }
  iVar5 = FUN_1000_72f0(uVar7,0);
  if (iVar5 == 0) {
    return 0;
  }
  uVar3 = FUN_1000_5b6f();
  return uVar3;
}



// Function: FUN_1000_5904 @ 1000:5904

undefined2 FUN_1000_5904(void)

{
  int iVar1;
  code *pcVar2;
  undefined2 uVar3;
  double *pdVar4;
  int iVar5;
  undefined2 *puVar6;
  int unaff_BP;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  longdouble lVar8;
  
  uVar7 = 0x1000;
  iVar5 = *(int *)0x8d4c;
  uVar3 = *(undefined2 *)0x8d4a;
  iVar1 = *(int *)(unaff_BP + -6);
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
  puVar6 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
  uVar3 = *(undefined2 *)(unaff_BP + -8);
  *puVar6 = *(undefined2 *)(unaff_BP + -10);
  puVar6[1] = uVar3;
  *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  if (*(int *)(unaff_BP + -4) < 3) {
    uVar3 = FUN_1000_58e5();
    return uVar3;
  }
  if ((*(int *)(unaff_BP + 0xc) != 0) || (*(int *)(unaff_BP + 0xe) != 0)) {
    uVar7 = 0x140;
    pdVar4 = (double *)func_0x0000190a(0x1000,unaff_BP + -0x16);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    lVar8 = (longdouble)*pdVar4;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    pdVar4 = (double *)(double *)*(undefined4 *)(unaff_BP + 0xc);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    *pdVar4 = (double)lVar8;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
  }
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 3) {
    iVar5 = *(int *)0x8d4c;
    uVar3 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
    iVar5 = *(int *)0x8d4c;
    uVar3 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
    puVar6 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
    uVar3 = *(undefined2 *)(unaff_BP + -8);
    *puVar6 = *(undefined2 *)(unaff_BP + -10);
    puVar6[1] = uVar3;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 0x10) != 0) || (*(int *)(unaff_BP + 0x12) != 0)) {
    pdVar4 = (double *)func_0x0000190a(uVar7,unaff_BP + -0x16);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    lVar8 = (longdouble)*pdVar4;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    pdVar4 = (double *)(double *)*(undefined4 *)(unaff_BP + 0x10);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    *pdVar4 = (double)lVar8;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    uVar7 = 0x140;
  }
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 3) {
    iVar5 = *(int *)0x8d4c;
    uVar3 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
    iVar5 = *(int *)0x8d4c;
    uVar3 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
    puVar6 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
    uVar3 = *(undefined2 *)(unaff_BP + -8);
    *puVar6 = *(undefined2 *)(unaff_BP + -10);
    puVar6[1] = uVar3;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 0x14) != 0) || (*(int *)(unaff_BP + 0x16) != 0)) {
    pdVar4 = (double *)func_0x0000190a(uVar7,unaff_BP + -0x16);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    lVar8 = (longdouble)*pdVar4;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    pdVar4 = (double *)(double *)*(undefined4 *)(unaff_BP + 0x14);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    *pdVar4 = (double)lVar8;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    uVar7 = 0x140;
  }
  *(undefined2 *)(unaff_BP + -4) = 0;
  while (*(int *)(unaff_BP + -4) < 3) {
    iVar5 = *(int *)0x8d4c;
    uVar3 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -8) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
    iVar5 = *(int *)0x8d4c;
    uVar3 = *(undefined2 *)0x8d4a;
    iVar1 = *(int *)(unaff_BP + -6);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(iVar5 + 0x404 + iVar1 * 2);
    puVar6 = (undefined2 *)(unaff_BP + -0x16 + *(int *)(unaff_BP + -4) * 4);
    uVar3 = *(undefined2 *)(unaff_BP + -8);
    *puVar6 = *(undefined2 *)(unaff_BP + -10);
    puVar6[1] = uVar3;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  if ((*(int *)(unaff_BP + 0x18) != 0) || (*(int *)(unaff_BP + 0x1a) != 0)) {
    pdVar4 = (double *)func_0x0000190a(uVar7,unaff_BP + -0x16);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    lVar8 = (longdouble)*pdVar4;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    pdVar4 = (double *)(double *)*(undefined4 *)(unaff_BP + 0x18);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    *pdVar4 = (double)lVar8;
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    uVar7 = 0x140;
  }
  iVar5 = FUN_1000_72f0(uVar7,0);
  if (iVar5 == 0) {
    return 0;
  }
  uVar3 = FUN_1000_5b6f();
  return uVar3;
}



// Function: thunk_FUN_1000_5b98 @ 1000:5b6c

void __cdecl16far thunk_FUN_1000_5b98(void)

{
  return;
}



// Function: FUN_1000_5b6f @ 1000:5b6f

void FUN_1000_5b6f(void)

{
  FUN_1000_5b98();
  return;
}



// Function: FUN_1000_5b78 @ 1000:5b78

void FUN_1000_5b78(void)

{
  int iVar1;
  
  iVar1 = FUN_1000_72f0();
  if (iVar1 != 0) {
    FUN_1000_5b98();
    return;
  }
  FUN_1000_5b98();
  return;
}



// Function: FUN_1000_5b98 @ 1000:5b98

void __cdecl16far FUN_1000_5b98(void)

{
  return;
}



// Function: FUN_1000_5b9e @ 1000:5b9e

void FUN_1000_5b9e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_6008 @ 1000:6008

void FUN_1000_6008(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_69cc @ 1000:69cc

void FUN_1000_69cc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_6a42 @ 1000:6a42

void FUN_1000_6a42(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_6a78 @ 1000:6a78

void FUN_1000_6a78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_6ada @ 1000:6ada

void FUN_1000_6ada(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_6b26 @ 1000:6b26

void FUN_1000_6b26(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_6b7e @ 1000:6b7e

void FUN_1000_6b7e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_6bd6 @ 1000:6bd6

void FUN_1000_6bd6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_6c2e @ 1000:6c2e

void FUN_1000_6c2e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_6c86 @ 1000:6c86

void FUN_1000_6c86(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_6cde @ 1000:6cde

void FUN_1000_6cde(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_6e1c @ 1000:6e1c

void FUN_1000_6e1c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  func_0x0000140a();
  return;
}



// Function: FUN_1000_7090 @ 1000:7090

void FUN_1000_7090(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_7234 @ 1000:7234

void FUN_1000_7234(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_728c @ 1000:728c

void FUN_1000_728c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_72ae @ 1000:72ae

void FUN_1000_72ae(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_72f0 @ 1000:72f0

void FUN_1000_72f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_7326 @ 1000:7326

void FUN_1000_7326(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_7510 @ 1000:7510

void FUN_1000_7510(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_75f0 @ 1000:75f0

void FUN_1000_75f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_7822 @ 1000:7822

void FUN_1000_7822(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_7ce8 @ 1000:7ce8

void FUN_1000_7ce8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_7dcc @ 1000:7dcc

void FUN_1000_7dcc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_7f68 @ 1000:7f68

void FUN_1000_7f68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_8314 @ 1000:8314

void FUN_1000_8314(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_8350 @ 1000:8350

void FUN_1000_8350(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_8376 @ 1000:8376

void FUN_1000_8376(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_83d8 @ 1000:83d8

void FUN_1000_83d8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_8408 @ 1000:8408

void FUN_1000_8408(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_8426 @ 1000:8426

void FUN_1000_8426(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_8524 @ 1000:8524

void FUN_1000_8524(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_8580 @ 1000:8580

void FUN_1000_8580(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_85dc @ 1000:85dc

void FUN_1000_85dc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_8860 @ 1000:8860

void FUN_1000_8860(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_8886 @ 1000:8886

void FUN_1000_8886(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_892a @ 1000:892a

void FUN_1000_892a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_89d2 @ 1000:89d2

void FUN_1000_89d2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_8a90 @ 1000:8a90

void FUN_1000_8a90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_8b4c @ 1000:8b4c

void FUN_1000_8b4c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_8bb4 @ 1000:8bb4

void FUN_1000_8bb4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_8bf6 @ 1000:8bf6

void FUN_1000_8bf6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_8cc8 @ 1000:8cc8

void FUN_1000_8cc8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_8d0e @ 1000:8d0e

void FUN_1000_8d0e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_8d86 @ 1000:8d86

void FUN_1000_8d86(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_8eee @ 1000:8eee

void FUN_1000_8eee(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_8f1a @ 1000:8f1a

void FUN_1000_8f1a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_8fd6 @ 1000:8fd6

void FUN_1000_8fd6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_9374 @ 1000:9374

void FUN_1000_9374(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_93c4 @ 1000:93c4

void FUN_1000_93c4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_9416 @ 1000:9416

void FUN_1000_9416(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_947e @ 1000:947e

void FUN_1000_947e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_96ce @ 1000:96ce

void FUN_1000_96ce(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_9746 @ 1000:9746

void FUN_1000_9746(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_9aec @ 1000:9aec

void FUN_1000_9aec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_9e68 @ 1000:9e68

void FUN_1000_9e68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_9e9a @ 1000:9e9a

void FUN_1000_9e9a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_a602 @ 1000:a602

void FUN_1000_a602(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_a6f6 @ 1000:a6f6

void FUN_1000_a6f6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_a73c @ 1000:a73c

void FUN_1000_a73c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_a794 @ 1000:a794

void FUN_1000_a794(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_a896 @ 1000:a896

void FUN_1000_a896(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_a934 @ 1000:a934

void FUN_1000_a934(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_a994 @ 1000:a994

void FUN_1000_a994(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_a9d4 @ 1000:a9d4

void FUN_1000_a9d4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_aa1c @ 1000:aa1c

void FUN_1000_aa1c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_b014 @ 1000:b014

void FUN_1000_b014(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_b048 @ 1000:b048

void FUN_1000_b048(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_b0be @ 1000:b0be

void FUN_1000_b0be(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_b116 @ 1000:b116

void FUN_1000_b116(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_b170 @ 1000:b170

void FUN_1000_b170(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_b56c @ 1000:b56c

void FUN_1000_b56c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_b5c2 @ 1000:b5c2

void FUN_1000_b5c2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_b868 @ 1000:b868

void FUN_1000_b868(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_b8a4 @ 1000:b8a4

void FUN_1000_b8a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_b952 @ 1000:b952

void FUN_1000_b952(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_ba04 @ 1000:ba04

void FUN_1000_ba04(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_bb7c @ 1000:bb7c

void FUN_1000_bb7c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_bbfc @ 1000:bbfc

void FUN_1000_bbfc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_bc13 @ 1000:bc13

void FUN_1000_bc13(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int unaff_BP;
  int unaff_DI;
  undefined2 unaff_CS;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char in_CF;
  undefined4 uVar5;
  
  pcVar1 = (char *)(unaff_BP + unaff_DI + 0x8c4);
  *pcVar1 = *pcVar1 + '$' + in_CF;
  *(undefined2 *)(unaff_BP + -0x106) = 0;
  *(undefined2 *)(unaff_BP + -0x108) = 0;
  *(undefined2 *)(unaff_BP + -8) = 0;
  *(undefined2 *)(unaff_BP + -2) = 0;
  *(int *)(unaff_BP + -0xe) = unaff_BP + -0x60;
  *(undefined2 *)(unaff_BP + -0xc) = unaff_SS;
LAB_1000_bc33:
  if (*(int *)(unaff_BP + -0x108) == 0) {
    if (*(int *)(unaff_BP + -0xc) != 0 || *(int *)(unaff_BP + -0xe) != 0) {
      *(undefined2 *)(unaff_BP + -4) = 0;
      *(undefined2 *)(unaff_BP + -6) = 0;
      uVar5 = FUN_1000_2f92(unaff_CS,unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0xe) = (int)uVar5;
      *(undefined2 *)(unaff_BP + -0xc) = (int)((ulong)uVar5 >> 0x10);
      unaff_CS = 0x105e;
      do {
        *(undefined2 *)(unaff_BP + -4) = 0;
        while (iVar2 = *(int *)(unaff_BP + -6), *(char *)(unaff_BP + iVar2 + -0x60) != '\0') {
          if (*(char *)(unaff_BP + iVar2 + -0x60) == '\\') {
            *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
          }
          else if ((((*(char *)(unaff_BP + iVar2 + -0x60) == ' ') ||
                    (*(char *)(unaff_BP + iVar2 + -0x60) == '~')) ||
                   (*(char *)(unaff_BP + iVar2 + -0x60) == '\n')) ||
                  ((*(char *)(unaff_BP + iVar2 + -0x60) == '\r' ||
                   (*(char *)(unaff_BP + iVar2 + -0x60) == '@')))) break;
          *(undefined2 *)(unaff_BP + -10) = 0;
          *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -4) + -0xb2) =
               *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60);
          *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
          *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
        }
        *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -4) + -0xb2) = 0;
        *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
        if (*(char *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60) == '@') {
          *(undefined2 *)(unaff_BP + -0xc) = 0;
          *(undefined2 *)(unaff_BP + -0xe) = 0;
          goto LAB_1000_bc33;
        }
        iVar2 = FUN_1000_2afe(unaff_CS,unaff_BP + -0xb2);
        if ((iVar2 + *(int *)(unaff_BP + -2) + 1 <
             *(int *)(*(int *)(unaff_BP + 6) * 0x34 + 0x6ec0) + -2) &&
           (*(char *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60) != '\0')) {
          if (0 < *(int *)(unaff_BP + -2)) {
            *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0x20;
            *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
          }
          *(undefined2 *)(unaff_BP + -0x10a) = 0;
          while (iVar2 = FUN_1000_2afe(0x105e,unaff_BP + -0xb2), *(int *)(unaff_BP + -0x10a) < iVar2
                ) {
            *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) =
                 *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x10a) + -0xb2);
            *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
            *(int *)(unaff_BP + -0x10a) = *(int *)(unaff_BP + -0x10a) + 1;
          }
          if (*(char *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60) == '~') {
            *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0;
            *(undefined2 *)(unaff_BP + -0x106) = 1;
            *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
          }
        }
        else {
          *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0;
          *(undefined2 *)(unaff_BP + -0x106) = 1;
        }
        if (*(int *)(unaff_BP + -0x106) != 0) {
          uVar4 = *(undefined2 *)(unaff_BP + -8);
          *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
          func_0x0000c1b4(0x105e,uVar4,1,unaff_BP + -0x104);
          *(undefined2 *)(unaff_BP + -2) = 0;
          *(undefined2 *)(unaff_BP + -0x10a) = 0;
          uVar4 = 0xc1b;
          while( true ) {
            iVar2 = FUN_1000_2afe(uVar4,unaff_BP + -0xb2);
            if (iVar2 <= *(int *)(unaff_BP + -0x10a)) break;
            *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) =
                 *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x10a) + -0xb2);
            *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
            *(int *)(unaff_BP + -0x10a) = *(int *)(unaff_BP + -0x10a) + 1;
            uVar4 = 0x105e;
          }
          *(undefined2 *)(unaff_BP + -0x106) = 0;
        }
        unaff_CS = 0x105e;
        iVar3 = *(int *)(unaff_BP + 6) * 0x34;
        iVar2 = *(int *)(iVar3 + 0x6ec2) + -1;
        if (iVar2 <= *(int *)(unaff_BP + -8)) {
          func_0x0000c1b4(0x105e,iVar2,*(int *)(iVar3 + 0x6ec0) + -9,0x8e8d);
          iVar2 = func_0x00008d86(0xc1b);
          if (iVar2 == 0x1b) goto LAB_1000_be4b;
          *(undefined2 *)(unaff_BP + -8) = 0;
          unaff_CS = 0x8c9;
          func_0x00008c96(0x8d8);
        }
        iVar2 = *(int *)(unaff_BP + -6);
        if (((*(char *)(unaff_BP + iVar2 + -0x60) == '\r') ||
            (*(char *)(unaff_BP + iVar2 + -0x60) == '\n')) ||
           (*(char *)(unaff_BP + iVar2 + -0x60) == '\0')) goto LAB_1000_be76;
        if (*(char *)(unaff_BP + iVar2 + -0x60) == ' ') {
          while (*(char *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60) == ' ') {
            *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
          }
        }
      } while( true );
    }
    *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0;
    func_0x0000c1b4(unaff_CS,*(undefined2 *)(unaff_BP + -8),1,unaff_BP + -0x104);
    iVar2 = *(int *)(unaff_BP + 6) * 0x34;
    func_0x0000c1b4(0xc1b,*(int *)(iVar2 + 0x6ec2) + -1,*(int *)(iVar2 + 0x6ec0) + -8,0x8e86);
    uVar4 = 0xc1b;
    do {
      iVar2 = func_0x00008d86(uVar4);
      uVar4 = 0x8d8;
    } while (iVar2 != 0x1b);
  }
  FUN_1000_bf41();
  return;
LAB_1000_be76:
  if (*(char *)(unaff_BP + iVar2 + -0x60) == '\n') {
    if (*(int *)(unaff_BP + -10) == 1) {
      *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0;
      uVar4 = *(undefined2 *)(unaff_BP + -8);
      *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
      func_0x0000c1b4(unaff_CS,uVar4,1,unaff_BP + -0x104);
      *(undefined2 *)(unaff_BP + -2) = 0;
      *(undefined2 *)(unaff_BP + -0x10a) = 0;
      uVar4 = 0xc1b;
      while( true ) {
        unaff_CS = 0x105e;
        iVar2 = FUN_1000_2afe(uVar4,unaff_BP + -0xb2);
        if (iVar2 <= *(int *)(unaff_BP + -0x10a)) break;
        *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) =
             *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x10a) + -0xb2);
        *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
        *(int *)(unaff_BP + -0x10a) = *(int *)(unaff_BP + -0x10a) + 1;
        uVar4 = unaff_CS;
      }
      *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
    }
    else {
      *(undefined2 *)(unaff_BP + -10) = 1;
    }
  }
  iVar3 = *(int *)(unaff_BP + 6) * 0x34;
  iVar2 = *(int *)(iVar3 + 0x6ec2) + -1;
  if (iVar2 <= *(int *)(unaff_BP + -8)) {
    func_0x0000c1b4(unaff_CS,iVar2,*(int *)(iVar3 + 0x6ec0) + -9,0x8e95);
    iVar2 = func_0x00008d86(0xc1b);
    if (iVar2 == 0x1b) {
LAB_1000_be4b:
      unaff_CS = 0x8d8;
      *(undefined2 *)(unaff_BP + -0x108) = 1;
      goto LAB_1000_bc33;
    }
    *(undefined2 *)(unaff_BP + -8) = 0;
    unaff_CS = 0x8c9;
    func_0x00008c96(0x8d8);
  }
  *(undefined2 *)(unaff_BP + -6) = 0;
  goto LAB_1000_bc33;
}



// Function: FUN_1000_bca7 @ 1000:bca7

void FUN_1000_bca7(void)

{
  int iVar1;
  int in_AX;
  int unaff_BP;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar4;
  
  uVar2 = 0x1000;
code_r0x0001bca7:
  uVar3 = 0x105e;
  uVar4 = FUN_1000_2f92(uVar2,in_AX);
  *(undefined2 *)(unaff_BP + -0xe) = (int)uVar4;
  *(undefined2 *)(unaff_BP + -0xc) = (int)((ulong)uVar4 >> 0x10);
  do {
    *(undefined2 *)(unaff_BP + -4) = 0;
    while (iVar1 = *(int *)(unaff_BP + -6), *(char *)(unaff_BP + iVar1 + -0x60) != '\0') {
      if (*(char *)(unaff_BP + iVar1 + -0x60) == '\\') {
        *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
      }
      else if ((((*(char *)(unaff_BP + iVar1 + -0x60) == ' ') ||
                (*(char *)(unaff_BP + iVar1 + -0x60) == '~')) ||
               (*(char *)(unaff_BP + iVar1 + -0x60) == '\n')) ||
              ((*(char *)(unaff_BP + iVar1 + -0x60) == '\r' ||
               (*(char *)(unaff_BP + iVar1 + -0x60) == '@')))) break;
      *(undefined2 *)(unaff_BP + -10) = 0;
      *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -4) + -0xb2) =
           *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60);
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
    }
    *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -4) + -0xb2) = 0;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
    if (*(char *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60) == '@') {
      *(undefined2 *)(unaff_BP + -0xc) = 0;
      *(undefined2 *)(unaff_BP + -0xe) = 0;
      goto LAB_1000_bc33;
    }
    iVar1 = FUN_1000_2afe();
    if ((iVar1 + *(int *)(unaff_BP + -2) + 1 < *(int *)(*(int *)(unaff_BP + 6) * 0x34 + 0x6ec0) + -2
        ) && (*(char *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60) != '\0')) {
      if (0 < *(int *)(unaff_BP + -2)) {
        *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0x20;
        *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
      }
      *(undefined2 *)(unaff_BP + -0x10a) = 0;
      while (iVar1 = FUN_1000_2afe(), *(int *)(unaff_BP + -0x10a) < iVar1) {
        *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) =
             *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x10a) + -0xb2);
        *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
        *(int *)(unaff_BP + -0x10a) = *(int *)(unaff_BP + -0x10a) + 1;
      }
      if (*(char *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60) == '~') {
        *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0;
        *(undefined2 *)(unaff_BP + -0x106) = 1;
        *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
      }
    }
    else {
      *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0;
      *(undefined2 *)(unaff_BP + -0x106) = 1;
    }
    if (*(int *)(unaff_BP + -0x106) != 0) {
      uVar2 = *(undefined2 *)(unaff_BP + -8);
      *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
      func_0x0000c1b4(0x105e,uVar2);
      *(undefined2 *)(unaff_BP + -2) = 0;
      *(undefined2 *)(unaff_BP + -0x10a) = 0;
      while (iVar1 = FUN_1000_2afe(), *(int *)(unaff_BP + -0x10a) < iVar1) {
        *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) =
             *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x10a) + -0xb2);
        *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
        *(int *)(unaff_BP + -0x10a) = *(int *)(unaff_BP + -0x10a) + 1;
      }
      *(undefined2 *)(unaff_BP + -0x106) = 0;
    }
    uVar3 = 0x105e;
    iVar1 = *(int *)(*(int *)(unaff_BP + 6) * 0x34 + 0x6ec2) + -1;
    if (iVar1 <= *(int *)(unaff_BP + -8)) {
      func_0x0000c1b4(0x105e,iVar1);
      iVar1 = func_0x00008d86();
      if (iVar1 == 0x1b) goto LAB_1000_be4b;
      *(undefined2 *)(unaff_BP + -8) = 0;
      uVar3 = 0x8c9;
      func_0x00008c96();
    }
    iVar1 = *(int *)(unaff_BP + -6);
    if (((*(char *)(unaff_BP + iVar1 + -0x60) == '\r') ||
        (*(char *)(unaff_BP + iVar1 + -0x60) == '\n')) ||
       (*(char *)(unaff_BP + iVar1 + -0x60) == '\0')) break;
    if (*(char *)(unaff_BP + iVar1 + -0x60) == ' ') {
      while (*(char *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60) == ' ') {
        *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
      }
    }
  } while( true );
  if (*(char *)(unaff_BP + iVar1 + -0x60) == '\n') {
    if (*(int *)(unaff_BP + -10) == 1) {
      *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0;
      uVar2 = *(undefined2 *)(unaff_BP + -8);
      *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
      func_0x0000c1b4(uVar3,uVar2);
      *(undefined2 *)(unaff_BP + -2) = 0;
      *(undefined2 *)(unaff_BP + -0x10a) = 0;
      while( true ) {
        uVar3 = 0x105e;
        iVar1 = FUN_1000_2afe();
        if (iVar1 <= *(int *)(unaff_BP + -0x10a)) break;
        *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) =
             *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x10a) + -0xb2);
        *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
        *(int *)(unaff_BP + -0x10a) = *(int *)(unaff_BP + -0x10a) + 1;
      }
      *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
    }
    else {
      *(undefined2 *)(unaff_BP + -10) = 1;
    }
  }
  iVar1 = *(int *)(*(int *)(unaff_BP + 6) * 0x34 + 0x6ec2) + -1;
  if (iVar1 <= *(int *)(unaff_BP + -8)) {
    func_0x0000c1b4(uVar3,iVar1);
    iVar1 = func_0x00008d86();
    if (iVar1 == 0x1b) {
LAB_1000_be4b:
      uVar3 = 0x8d8;
      *(undefined2 *)(unaff_BP + -0x108) = 1;
      goto LAB_1000_bc33;
    }
    *(undefined2 *)(unaff_BP + -8) = 0;
    uVar3 = 0x8c9;
    func_0x00008c96();
  }
  *(undefined2 *)(unaff_BP + -6) = 0;
LAB_1000_bc33:
  if (*(int *)(unaff_BP + -0x108) != 0) goto LAB_1000_bc3a;
  if (*(int *)(unaff_BP + -0xc) == 0 && *(int *)(unaff_BP + -0xe) == 0) {
    *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0;
    func_0x0000c1b4(uVar3,*(undefined2 *)(unaff_BP + -8));
    func_0x0000c1b4(0xc1b,*(int *)(*(int *)(unaff_BP + 6) * 0x34 + 0x6ec2) + -1);
    do {
      iVar1 = func_0x00008d86();
    } while (iVar1 != 0x1b);
LAB_1000_bc3a:
    FUN_1000_bf41();
    return;
  }
  *(undefined2 *)(unaff_BP + -4) = 0;
  *(undefined2 *)(unaff_BP + -6) = 0;
  in_AX = unaff_BP + -0x60;
  uVar2 = uVar3;
  goto code_r0x0001bca7;
}



// Function: FUN_1000_bce8 @ 1000:bce8

void FUN_1000_bce8(void)

{
  int iVar1;
  int iVar2;
  int unaff_BP;
  int unaff_SI;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar5;
  
  uVar3 = 0x1000;
code_r0x0001bce8:
  if ((((*(char *)(unaff_BP + unaff_SI + -0x60) != ' ') &&
       (*(char *)(unaff_BP + unaff_SI + -0x60) != '~')) &&
      (*(char *)(unaff_BP + unaff_SI + -0x60) != '\n')) &&
     ((*(char *)(unaff_BP + unaff_SI + -0x60) != '\r' &&
      (*(char *)(unaff_BP + unaff_SI + -0x60) != '@')))) goto LAB_1000_bcce;
  do {
    *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -4) + -0xb2) = 0;
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
    if (*(char *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60) == '@') {
      *(undefined2 *)(unaff_BP + -0xc) = 0;
      *(undefined2 *)(unaff_BP + -0xe) = 0;
LAB_1000_bc33:
      if (*(int *)(unaff_BP + -0x108) != 0) goto LAB_1000_bc3a;
      if (*(int *)(unaff_BP + -0xc) == 0 && *(int *)(unaff_BP + -0xe) == 0) {
        *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0;
        func_0x0000c1b4(uVar3,*(undefined2 *)(unaff_BP + -8),1,unaff_BP + -0x104);
        iVar1 = *(int *)(unaff_BP + 6) * 0x34;
        func_0x0000c1b4(0xc1b,*(int *)(iVar1 + 0x6ec2) + -1,*(int *)(iVar1 + 0x6ec0) + -8,0x8e86);
        uVar3 = 0xc1b;
        do {
          iVar1 = func_0x00008d86(uVar3);
          uVar3 = 0x8d8;
        } while (iVar1 != 0x1b);
LAB_1000_bc3a:
        FUN_1000_bf41();
        return;
      }
      *(undefined2 *)(unaff_BP + -4) = 0;
      *(undefined2 *)(unaff_BP + -6) = 0;
      uVar5 = FUN_1000_2f92(uVar3,unaff_BP + -0x60);
      *(undefined2 *)(unaff_BP + -0xe) = (int)uVar5;
      *(undefined2 *)(unaff_BP + -0xc) = (int)((ulong)uVar5 >> 0x10);
      uVar3 = 0x105e;
    }
    else {
      iVar1 = FUN_1000_2afe(uVar3,unaff_BP + -0xb2);
      if ((iVar1 + *(int *)(unaff_BP + -2) + 1 <
           *(int *)(*(int *)(unaff_BP + 6) * 0x34 + 0x6ec0) + -2) &&
         (*(char *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60) != '\0')) {
        if (0 < *(int *)(unaff_BP + -2)) {
          *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0x20;
          *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
        }
        *(undefined2 *)(unaff_BP + -0x10a) = 0;
        while (iVar1 = FUN_1000_2afe(0x105e,unaff_BP + -0xb2), *(int *)(unaff_BP + -0x10a) < iVar1)
        {
          *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) =
               *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x10a) + -0xb2);
          *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
          *(int *)(unaff_BP + -0x10a) = *(int *)(unaff_BP + -0x10a) + 1;
        }
        if (*(char *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60) == '~') {
          *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0;
          *(undefined2 *)(unaff_BP + -0x106) = 1;
          *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
        }
      }
      else {
        *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0;
        *(undefined2 *)(unaff_BP + -0x106) = 1;
      }
      if (*(int *)(unaff_BP + -0x106) != 0) {
        uVar3 = *(undefined2 *)(unaff_BP + -8);
        *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
        func_0x0000c1b4(0x105e,uVar3,1,unaff_BP + -0x104);
        *(undefined2 *)(unaff_BP + -2) = 0;
        *(undefined2 *)(unaff_BP + -0x10a) = 0;
        uVar3 = 0xc1b;
        while( true ) {
          iVar1 = FUN_1000_2afe(uVar3,unaff_BP + -0xb2);
          if (iVar1 <= *(int *)(unaff_BP + -0x10a)) break;
          *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) =
               *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x10a) + -0xb2);
          *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
          *(int *)(unaff_BP + -0x10a) = *(int *)(unaff_BP + -0x10a) + 1;
          uVar3 = 0x105e;
        }
        *(undefined2 *)(unaff_BP + -0x106) = 0;
      }
      uVar3 = 0x105e;
      iVar2 = *(int *)(unaff_BP + 6) * 0x34;
      iVar1 = *(int *)(iVar2 + 0x6ec2) + -1;
      if (iVar1 <= *(int *)(unaff_BP + -8)) {
        func_0x0000c1b4(0x105e,iVar1,*(int *)(iVar2 + 0x6ec0) + -9,0x8e8d);
        iVar1 = func_0x00008d86(0xc1b);
        if (iVar1 != 0x1b) {
          *(undefined2 *)(unaff_BP + -8) = 0;
          uVar3 = 0x8c9;
          func_0x00008c96(0x8d8);
          goto LAB_1000_be5e;
        }
LAB_1000_be4b:
        uVar3 = 0x8d8;
        *(undefined2 *)(unaff_BP + -0x108) = 1;
        goto LAB_1000_bc33;
      }
LAB_1000_be5e:
      iVar1 = *(int *)(unaff_BP + -6);
      if (((*(char *)(unaff_BP + iVar1 + -0x60) == '\r') ||
          (*(char *)(unaff_BP + iVar1 + -0x60) == '\n')) ||
         (*(char *)(unaff_BP + iVar1 + -0x60) == '\0')) {
        if (*(char *)(unaff_BP + iVar1 + -0x60) == '\n') {
          if (*(int *)(unaff_BP + -10) == 1) {
            *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0;
            uVar4 = *(undefined2 *)(unaff_BP + -8);
            *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
            func_0x0000c1b4(uVar3,uVar4,1,unaff_BP + -0x104);
            *(undefined2 *)(unaff_BP + -2) = 0;
            *(undefined2 *)(unaff_BP + -0x10a) = 0;
            uVar4 = 0xc1b;
            while( true ) {
              uVar3 = 0x105e;
              iVar1 = FUN_1000_2afe(uVar4,unaff_BP + -0xb2);
              if (iVar1 <= *(int *)(unaff_BP + -0x10a)) break;
              *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) =
                   *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x10a) + -0xb2);
              *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
              *(int *)(unaff_BP + -0x10a) = *(int *)(unaff_BP + -0x10a) + 1;
              uVar4 = uVar3;
            }
            *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
          }
          else {
            *(undefined2 *)(unaff_BP + -10) = 1;
          }
        }
        iVar2 = *(int *)(unaff_BP + 6) * 0x34;
        iVar1 = *(int *)(iVar2 + 0x6ec2) + -1;
        if (iVar1 <= *(int *)(unaff_BP + -8)) {
          func_0x0000c1b4(uVar3,iVar1,*(int *)(iVar2 + 0x6ec0) + -9,0x8e95);
          iVar1 = func_0x00008d86(0xc1b);
          if (iVar1 == 0x1b) goto LAB_1000_be4b;
          *(undefined2 *)(unaff_BP + -8) = 0;
          uVar3 = 0x8c9;
          func_0x00008c96(0x8d8);
        }
        *(undefined2 *)(unaff_BP + -6) = 0;
        goto LAB_1000_bc33;
      }
      if (*(char *)(unaff_BP + iVar1 + -0x60) == ' ') {
        while (*(char *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60) == ' ') {
          *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
        }
      }
    }
    *(undefined2 *)(unaff_BP + -4) = 0;
    while (unaff_SI = *(int *)(unaff_BP + -6), *(char *)(unaff_BP + unaff_SI + -0x60) != '\0') {
      if (*(char *)(unaff_BP + unaff_SI + -0x60) != '\\') goto code_r0x0001bce8;
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
LAB_1000_bcce:
      *(undefined2 *)(unaff_BP + -10) = 0;
      *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -4) + -0xb2) =
           *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60);
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
    }
  } while( true );
}



// Function: FUN_1000_bdf3 @ 1000:bdf3

void FUN_1000_bdf3(void)

{
  undefined1 in_AL;
  int iVar1;
  int iVar2;
  int unaff_BP;
  int unaff_SI;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar5;
  
  uVar3 = 0x1000;
  do {
    *(undefined1 *)(unaff_BP + unaff_SI + -0x104) = in_AL;
    *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
    *(int *)(unaff_BP + -0x10a) = *(int *)(unaff_BP + -0x10a) + 1;
LAB_1000_bdfe:
    iVar1 = FUN_1000_2afe(uVar3,unaff_BP + -0xb2);
    if (iVar1 <= *(int *)(unaff_BP + -0x10a)) {
      *(undefined2 *)(unaff_BP + -0x106) = 0;
LAB_1000_be18:
      uVar3 = 0x105e;
      iVar2 = *(int *)(unaff_BP + 6) * 0x34;
      iVar1 = *(int *)(iVar2 + 0x6ec2) + -1;
      if (*(int *)(unaff_BP + -8) < iVar1) {
LAB_1000_be5e:
        iVar1 = *(int *)(unaff_BP + -6);
        if (((*(char *)(unaff_BP + iVar1 + -0x60) != '\r') &&
            (*(char *)(unaff_BP + iVar1 + -0x60) != '\n')) &&
           (*(char *)(unaff_BP + iVar1 + -0x60) != '\0')) {
          if (*(char *)(unaff_BP + iVar1 + -0x60) != ' ') goto LAB_1000_bcb7;
          do {
            if (*(char *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60) != ' ') goto LAB_1000_bcb7;
            *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
          } while( true );
        }
        if (*(char *)(unaff_BP + iVar1 + -0x60) == '\n') {
          if (*(int *)(unaff_BP + -10) == 1) {
            *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0;
            uVar4 = *(undefined2 *)(unaff_BP + -8);
            *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
            func_0x0000c1b4(uVar3,uVar4,1,unaff_BP + -0x104);
            *(undefined2 *)(unaff_BP + -2) = 0;
            *(undefined2 *)(unaff_BP + -0x10a) = 0;
            uVar4 = 0xc1b;
            while( true ) {
              uVar3 = 0x105e;
              iVar1 = FUN_1000_2afe(uVar4,unaff_BP + -0xb2);
              if (iVar1 <= *(int *)(unaff_BP + -0x10a)) break;
              *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) =
                   *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x10a) + -0xb2);
              *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
              *(int *)(unaff_BP + -0x10a) = *(int *)(unaff_BP + -0x10a) + 1;
              uVar4 = uVar3;
            }
            *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
          }
          else {
            *(undefined2 *)(unaff_BP + -10) = 1;
          }
        }
        iVar2 = *(int *)(unaff_BP + 6) * 0x34;
        iVar1 = *(int *)(iVar2 + 0x6ec2) + -1;
        if (iVar1 <= *(int *)(unaff_BP + -8)) {
          func_0x0000c1b4(uVar3,iVar1,*(int *)(iVar2 + 0x6ec0) + -9,0x8e95);
          iVar1 = func_0x00008d86(0xc1b);
          if (iVar1 == 0x1b) goto LAB_1000_be4b;
          *(undefined2 *)(unaff_BP + -8) = 0;
          uVar3 = 0x8c9;
          func_0x00008c96(0x8d8);
        }
        *(undefined2 *)(unaff_BP + -6) = 0;
      }
      else {
        func_0x0000c1b4(0x105e,iVar1,*(int *)(iVar2 + 0x6ec0) + -9,0x8e8d);
        iVar1 = func_0x00008d86(0xc1b);
        if (iVar1 != 0x1b) {
          *(undefined2 *)(unaff_BP + -8) = 0;
          uVar3 = 0x8c9;
          func_0x00008c96(0x8d8);
          goto LAB_1000_be5e;
        }
LAB_1000_be4b:
        uVar3 = 0x8d8;
        *(undefined2 *)(unaff_BP + -0x108) = 1;
      }
      do {
        if (*(int *)(unaff_BP + -0x108) != 0) goto LAB_1000_bc3a;
        if (*(int *)(unaff_BP + -0xc) == 0 && *(int *)(unaff_BP + -0xe) == 0) {
          *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0;
          func_0x0000c1b4(uVar3,*(undefined2 *)(unaff_BP + -8),1,unaff_BP + -0x104);
          iVar1 = *(int *)(unaff_BP + 6) * 0x34;
          func_0x0000c1b4(0xc1b,*(int *)(iVar1 + 0x6ec2) + -1,*(int *)(iVar1 + 0x6ec0) + -8,0x8e86);
          uVar3 = 0xc1b;
          do {
            iVar1 = func_0x00008d86(uVar3);
            uVar3 = 0x8d8;
          } while (iVar1 != 0x1b);
LAB_1000_bc3a:
          FUN_1000_bf41();
          return;
        }
        *(undefined2 *)(unaff_BP + -4) = 0;
        *(undefined2 *)(unaff_BP + -6) = 0;
        uVar5 = FUN_1000_2f92(uVar3,unaff_BP + -0x60);
        *(undefined2 *)(unaff_BP + -0xe) = (int)uVar5;
        *(undefined2 *)(unaff_BP + -0xc) = (int)((ulong)uVar5 >> 0x10);
        uVar3 = 0x105e;
LAB_1000_bcb7:
        *(undefined2 *)(unaff_BP + -4) = 0;
        while (iVar1 = *(int *)(unaff_BP + -6), *(char *)(unaff_BP + iVar1 + -0x60) != '\0') {
          if (*(char *)(unaff_BP + iVar1 + -0x60) == '\\') {
            *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
          }
          else if (((*(char *)(unaff_BP + iVar1 + -0x60) == ' ') ||
                   (*(char *)(unaff_BP + iVar1 + -0x60) == '~')) ||
                  ((*(char *)(unaff_BP + iVar1 + -0x60) == '\n' ||
                   ((*(char *)(unaff_BP + iVar1 + -0x60) == '\r' ||
                    (*(char *)(unaff_BP + iVar1 + -0x60) == '@')))))) break;
          *(undefined2 *)(unaff_BP + -10) = 0;
          *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -4) + -0xb2) =
               *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60);
          *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
          *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
        }
        *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -4) + -0xb2) = 0;
        *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
        if (*(char *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60) != '@') goto LAB_1000_bd25;
        *(undefined2 *)(unaff_BP + -0xc) = 0;
        *(undefined2 *)(unaff_BP + -0xe) = 0;
      } while( true );
    }
    in_AL = *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x10a) + -0xb2);
    unaff_SI = *(int *)(unaff_BP + -2);
    uVar3 = 0x105e;
  } while( true );
LAB_1000_bd25:
  iVar1 = FUN_1000_2afe(uVar3,unaff_BP + -0xb2);
  if ((iVar1 + *(int *)(unaff_BP + -2) + 1 < *(int *)(*(int *)(unaff_BP + 6) * 0x34 + 0x6ec0) + -2)
     && (*(char *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60) != '\0')) {
    if (0 < *(int *)(unaff_BP + -2)) {
      *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0x20;
      *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
    }
    *(undefined2 *)(unaff_BP + -0x10a) = 0;
    while (iVar1 = FUN_1000_2afe(0x105e,unaff_BP + -0xb2), *(int *)(unaff_BP + -0x10a) < iVar1) {
      *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) =
           *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -0x10a) + -0xb2);
      *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
      *(int *)(unaff_BP + -0x10a) = *(int *)(unaff_BP + -0x10a) + 1;
    }
    if (*(char *)(unaff_BP + *(int *)(unaff_BP + -6) + -0x60) == '~') {
      *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0;
      *(undefined2 *)(unaff_BP + -0x106) = 1;
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    }
  }
  else {
    *(undefined1 *)(unaff_BP + *(int *)(unaff_BP + -2) + -0x104) = 0;
    *(undefined2 *)(unaff_BP + -0x106) = 1;
  }
  if (*(int *)(unaff_BP + -0x106) != 0) goto code_r0x0001bdc7;
  goto LAB_1000_be18;
code_r0x0001bdc7:
  uVar4 = *(undefined2 *)(unaff_BP + -8);
  *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
  uVar3 = 0xc1b;
  func_0x0000c1b4(0x105e,uVar4,1,unaff_BP + -0x104);
  *(undefined2 *)(unaff_BP + -2) = 0;
  *(undefined2 *)(unaff_BP + -0x10a) = 0;
  goto LAB_1000_bdfe;
}



// Function: FUN_1000_bf41 @ 1000:bf41

void __cdecl16far FUN_1000_bf41(void)

{
  return;
}



// Function: FUN_1000_bf44 @ 1000:bf44

void FUN_1000_bf44(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_bf6c @ 1000:bf6c

void FUN_1000_bf6c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_bffa @ 1000:bffa

void FUN_1000_bffa(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c02e @ 1000:c02e

void FUN_1000_c02e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c058 @ 1000:c058

void FUN_1000_c058(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c0b6 @ 1000:c0b6

void FUN_1000_c0b6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c114 @ 1000:c114

void FUN_1000_c114(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c130 @ 1000:c130

void FUN_1000_c130(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c150 @ 1000:c150

void FUN_1000_c150(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c170 @ 1000:c170

void FUN_1000_c170(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c192 @ 1000:c192

void FUN_1000_c192(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c1b4 @ 1000:c1b4

void FUN_1000_c1b4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c1fa @ 1000:c1fa

void FUN_1000_c1fa(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c242 @ 1000:c242

void FUN_1000_c242(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c29e @ 1000:c29e

void FUN_1000_c29e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c2e4 @ 1000:c2e4

void FUN_1000_c2e4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c32a @ 1000:c32a

void FUN_1000_c32a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c358 @ 1000:c358

void FUN_1000_c358(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c374 @ 1000:c374

void FUN_1000_c374(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c390 @ 1000:c390

void FUN_1000_c390(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c45a @ 1000:c45a

void FUN_1000_c45a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c490 @ 1000:c490

void FUN_1000_c490(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c4be @ 1000:c4be

void FUN_1000_c4be(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c4ec @ 1000:c4ec

void FUN_1000_c4ec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c516 @ 1000:c516

void FUN_1000_c516(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c7cc @ 1000:c7cc

void FUN_1000_c7cc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c7f4 @ 1000:c7f4

void FUN_1000_c7f4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c8c8 @ 1000:c8c8

void FUN_1000_c8c8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_c9a0 @ 1000:c9a0

void FUN_1000_c9a0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_cac8 @ 1000:cac8

void FUN_1000_cac8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_cb3c @ 1000:cb3c

void FUN_1000_cb3c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_cb62 @ 1000:cb62

void FUN_1000_cb62(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_cbb0 @ 1000:cbb0

void FUN_1000_cbb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_cbf6 @ 1000:cbf6

void FUN_1000_cbf6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_cd2a @ 1000:cd2a

void FUN_1000_cd2a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_cda2 @ 1000:cda2

void FUN_1000_cda2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_cec0 @ 1000:cec0

void FUN_1000_cec0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_cf38 @ 1000:cf38

void FUN_1000_cf38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d066 @ 1000:d066

void FUN_1000_d066(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d084 @ 1000:d084

void FUN_1000_d084(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d0e2 @ 1000:d0e2

void FUN_1000_d0e2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d126 @ 1000:d126

void FUN_1000_d126(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d176 @ 1000:d176

void FUN_1000_d176(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d1c0 @ 1000:d1c0

void FUN_1000_d1c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d206 @ 1000:d206

void FUN_1000_d206(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d324 @ 1000:d324

void FUN_1000_d324(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d34c @ 1000:d34c

void FUN_1000_d34c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d3e2 @ 1000:d3e2

void FUN_1000_d3e2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d56a @ 1000:d56a

void FUN_1000_d56a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d5e0 @ 1000:d5e0

void FUN_1000_d5e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d664 @ 1000:d664

void FUN_1000_d664(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d6d6 @ 1000:d6d6

void FUN_1000_d6d6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d762 @ 1000:d762

void FUN_1000_d762(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d7cc @ 1000:d7cc

void FUN_1000_d7cc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d7f2 @ 1000:d7f2

void FUN_1000_d7f2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d836 @ 1000:d836

void FUN_1000_d836(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d87e @ 1000:d87e

void FUN_1000_d87e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d8cc @ 1000:d8cc

void FUN_1000_d8cc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_d912 @ 1000:d912

void FUN_1000_d912(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_dc74 @ 1000:dc74

void FUN_1000_dc74(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_dd02 @ 1000:dd02

void FUN_1000_dd02(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_dd90 @ 1000:dd90

void FUN_1000_dd90(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_dec0 @ 1000:dec0

void FUN_1000_dec0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_dfb0 @ 1000:dfb0

void FUN_1000_dfb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e05e @ 1000:e05e

void FUN_1000_e05e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e0de @ 1000:e0de

void FUN_1000_e0de(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e12a @ 1000:e12a

void FUN_1000_e12a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e236 @ 1000:e236

void FUN_1000_e236(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e254 @ 1000:e254

void FUN_1000_e254(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e26c @ 1000:e26c

void FUN_1000_e26c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e284 @ 1000:e284

void FUN_1000_e284(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e2be @ 1000:e2be

void FUN_1000_e2be(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e332 @ 1000:e332

void FUN_1000_e332(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e3d6 @ 1000:e3d6

void FUN_1000_e3d6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e4ce @ 1000:e4ce

void FUN_1000_e4ce(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e4fa @ 1000:e4fa

void FUN_1000_e4fa(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e550 @ 1000:e550

void FUN_1000_e550(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e63a @ 1000:e63a

void FUN_1000_e63a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e692 @ 1000:e692

void FUN_1000_e692(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e6c0 @ 1000:e6c0

void FUN_1000_e6c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e71c @ 1000:e71c

void FUN_1000_e71c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e750 @ 1000:e750

void FUN_1000_e750(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e784 @ 1000:e784

void FUN_1000_e784(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e868 @ 1000:e868

void FUN_1000_e868(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e8aa @ 1000:e8aa

void FUN_1000_e8aa(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e8ec @ 1000:e8ec

void FUN_1000_e8ec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_e92e @ 1000:e92e

void FUN_1000_e92e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_eaa4 @ 1000:eaa4

void FUN_1000_eaa4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_ed16 @ 1000:ed16

void FUN_1000_ed16(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_efdc @ 1000:efdc

void FUN_1000_efdc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_f0bc @ 1000:f0bc

void FUN_1000_f0bc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_f1ac @ 1000:f1ac

void FUN_1000_f1ac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_f1d4 @ 1000:f1d4

void FUN_1000_f1d4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_f38c @ 1000:f38c

void FUN_1000_f38c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_f3dc @ 1000:f3dc

void FUN_1000_f3dc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_f476 @ 1000:f476

void FUN_1000_f476(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_f4cc @ 1000:f4cc

void FUN_1000_f4cc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_f61c @ 1000:f61c

void FUN_1000_f61c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_f6da @ 1000:f6da

void FUN_1000_f6da(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_f8ae @ 1000:f8ae

void FUN_1000_f8ae(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_f942 @ 1000:f942

void FUN_1000_f942(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_f9a8 @ 1000:f9a8

void FUN_1000_f9a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_fa1e @ 1000:fa1e

void FUN_1000_fa1e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_fb40 @ 1000:fb40

void FUN_1000_fb40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_fbac @ 1000:fbac

void FUN_1000_fbac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_1000_fcc7 @ 1000:fcc7

void FUN_1000_fcc7(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_2000_01f1 @ 2000:01f1

void FUN_2000_01f1(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_2000_021e @ 2000:021e

void FUN_2000_021e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_2000_029e @ 2000:029e

void FUN_2000_029e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_2000_0335 @ 2000:0335

void FUN_2000_0335(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_2000_03c7 @ 2000:03c7

void FUN_2000_03c7(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_2000_0482 @ 2000:0482

void FUN_2000_0482(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_2000_0553 @ 2000:0553

void FUN_2000_0553(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_2000_059c @ 2000:059c

void FUN_2000_059c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_2000_0690 @ 2000:0690

void __cdecl16near FUN_2000_0690(void)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined2 in_BX;
  byte bVar3;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  bVar3 = (byte)((uint)in_BX >> 8);
  puVar1 = (uint *)(CONCAT11(bVar3 * '\x02',(char)in_BX) + unaff_SI + -0x17f2);
  *puVar1 = *puVar1 << 1 | (uint)CARRY1(bVar3,bVar3);
  *(char *)(unaff_BP + unaff_DI) = *(char *)(unaff_BP + unaff_DI) + '\x01';
  FUN_2000_08ee(0x1000);
  FUN_2000_0702();
  uVar2 = FUN_2000_6150(0x1000,*(undefined2 *)0x9280,*(undefined2 *)0x9282,*(undefined2 *)0x9284,
                        *(undefined2 *)0x9286,*(undefined2 *)0x9288);
  FUN_2000_07cb(uVar2);
  return;
}



// Function: FUN_2000_06d4 @ 2000:06d4

void FUN_2000_06d4(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined2 uVar5;
  undefined2 in_AX;
  int iVar6;
  uint extraout_DX;
  undefined2 uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  bool bVar11;
  
  uVar5 = DAT_2000_0120;
  uVar7 = DAT_2000_0120;
  FUN_2000_0c14();
  FUN_2000_087e();
  FUN_2000_0b61(in_AX);
  if (*(int *)0x983c == -0x292a) {
    (*(code *)*(undefined2 *)0x9840)();
  }
  (*(code *)*(undefined2 *)0x9220)(0x2000,0xff);
  pcVar4 = (code *)swi(0x51);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  *(undefined2 *)0x924c = uVar7;
  *(undefined2 *)0x924e = unaff_ES;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  if (*(int *)0x984c != 0) {
    bVar11 = false;
    (*(code *)*(undefined2 *)0x984a)();
    if (bVar11) {
      FUN_2000_08a0();
      return;
    }
    (*(code *)*(undefined2 *)0x984a)();
  }
  iVar8 = *(int *)0x2c;
  if (iVar8 != 0) {
    pbVar10 = (byte *)0x0;
    do {
      if (*pbVar10 == 0) break;
      iVar6 = 0xd;
      pbVar9 = (byte *)0x923e;
      bVar11 = false;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar3 = pbVar10;
        pbVar10 = pbVar10 + 1;
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar11 = *pbVar1 == *pbVar3;
      } while (bVar11);
      if (bVar11) {
        pbVar9 = (byte *)0x926c;
        goto LAB_2000_077f;
      }
      iVar6 = 0x7fff;
      bVar11 = true;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar1 = pbVar10;
        pbVar10 = pbVar10 + 1;
        bVar11 = *pbVar1 == 0;
      } while (!bVar11);
    } while (bVar11);
  }
LAB_2000_0793:
  iVar8 = 4;
  do {
    bVar11 = false;
    *(byte *)(iVar8 + -0x6d94) = *(byte *)(iVar8 + -0x6d94) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar11) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar8 + -0x6d94) = *(byte *)(iVar8 + -0x6d94) | 0x40;
    }
    iVar8 = iVar8 + -1;
  } while (-1 < iVar8);
  FUN_2000_086b();
  FUN_2000_086b();
  FUN_2000_086b();
  return;
LAB_2000_077f:
  pbVar1 = pbVar10;
  pbVar2 = pbVar10 + 1;
  if (*pbVar1 < 0x41) goto LAB_2000_0793;
  pbVar10 = pbVar10 + 2;
  if (*pbVar2 < 0x41) goto LAB_2000_0793;
  pbVar3 = pbVar9;
  pbVar9 = pbVar9 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_2000_077f;
}



// Function: FUN_2000_0702 @ 2000:0702

void __cdecl16far FUN_2000_0702(void)

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
  *(undefined2 *)0x924c = in_BX;
  *(undefined2 *)0x924e = unaff_ES;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  if (*(int *)0x984c != 0) {
    bVar9 = false;
    (*(code *)*(undefined2 *)0x984a)();
    if (bVar9) {
      FUN_2000_08a0();
      return;
    }
    (*(code *)*(undefined2 *)0x984a)();
  }
  iVar6 = *(int *)0x2c;
  if (iVar6 != 0) {
    pbVar8 = (byte *)0x0;
    do {
      if (*pbVar8 == 0) break;
      iVar5 = 0xd;
      pbVar7 = (byte *)0x923e;
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
        pbVar7 = (byte *)0x926c;
        goto LAB_2000_077f;
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
LAB_2000_0793:
  iVar6 = 4;
  do {
    bVar9 = false;
    *(byte *)(iVar6 + -0x6d94) = *(byte *)(iVar6 + -0x6d94) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar9) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar6 + -0x6d94) = *(byte *)(iVar6 + -0x6d94) | 0x40;
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  FUN_2000_086b();
  FUN_2000_086b();
  FUN_2000_086b();
  return;
LAB_2000_077f:
  pbVar1 = pbVar8;
  pbVar2 = pbVar8 + 1;
  if (*pbVar1 < 0x41) goto LAB_2000_0793;
  pbVar8 = pbVar8 + 2;
  if (*pbVar2 < 0x41) goto LAB_2000_0793;
  pbVar3 = pbVar7;
  pbVar7 = pbVar7 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_2000_077f;
}



// Function: FUN_2000_07cb @ 2000:07cb

void __cdecl16far FUN_2000_07cb(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x9297 = 0;
  FUN_2000_086b();
  FUN_2000_086b();
  if (*(int *)0x983c == -0x292a) {
    (*(code *)*(undefined2 *)0x9842)();
  }
  FUN_2000_086b();
  FUN_2000_086b();
  FUN_2000_08ca();
  FUN_2000_0852();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// Function: FUN_2000_0852 @ 2000:0852

void __cdecl16near FUN_2000_0852(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x984c != 0) {
    (*(code *)*(undefined2 *)0x984a)(0x1000);
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// Function: FUN_2000_086b @ 2000:086b

void __cdecl16near FUN_2000_086b(void)

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
      (*(code *)*piVar2)(0x1000);
    }
  }
  return;
}



// Function: FUN_2000_087e @ 2000:087e

void __cdecl16far FUN_2000_087e(void)

{
  undefined2 unaff_DS;
  
  FUN_2000_0b61(0xfc);
  if (*(int *)0x929a != 0) {
    (*(code *)*(undefined2 *)0x9298)(0x1000);
  }
  FUN_2000_0b61(0xff);
  return;
}



// Function: FUN_2000_08a0 @ 2000:08a0

void FUN_2000_08a0(void)

{
  FUN_2000_06d4();
  return;
}



// Function: FUN_2000_08a6 @ 2000:08a6

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16far FUN_2000_08a6(void)

{
  int iVar1;
  undefined1 *in_AX;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  undefined2 in_stack_00000002;
  
  iVar1 = -(int)in_AX;
  if ((in_AX <= &stack0x0004) && ((undefined1 *)*(uint *)0x92a0 <= &stack0x0004 + iVar1)) {
    *(undefined2 *)(&stack0x0002 + iVar1) = in_stack_00000002;
    *(undefined2 *)(&stack0x0000 + iVar1) = in_stack_00000000;
    return;
  }
  if (*(int *)0x929c == -1) {
    FUN_2000_06d4();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000208c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)0x929c)();
  return;
}



// Function: FUN_2000_08ca @ 2000:08ca

uint __cdecl16far FUN_2000_08ca(void)

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
    FUN_2000_087e();
    FUN_2000_0b61(1);
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_2000_08ee @ 2000:08ee

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_2000_08ee(undefined2 param_1)

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
  
  *(undefined2 *)0x92a2 = in_stack_00000000;
  *(undefined2 *)0x92a4 = param_1;
  uVar7 = 1;
  if ((char)*(undefined2 *)0x9264 != '\x02') {
    uVar13 = *(undefined2 *)0x2c;
    *(undefined2 *)0x928c = uVar13;
    iVar5 = -0x8000;
    pcVar10 = (char *)0x0;
LAB_2000_0915:
    do {
      pcVar11 = pcVar10;
      if (iVar5 != 0) {
        iVar5 = iVar5 + -1;
        pcVar3 = pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar10;
        if (*pcVar3 != '\0') goto LAB_2000_0915;
      }
      pcVar10 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    pcVar11 = pcVar11 + 3;
    *(undefined2 *)0x928a = pcVar11;
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
  uVar13 = *(undefined2 *)0x9260;
LAB_2000_0933:
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
LAB_2000_0946:
      pcVar3 = pcVar10;
      pcVar10 = pcVar10 + 1;
      cVar2 = *pcVar3;
      if ((cVar2 == ' ') || (cVar2 == '\t')) goto LAB_2000_0933;
      if ((cVar2 == '\r') || (cVar2 == '\0')) break;
      if (cVar2 == '\"') {
LAB_2000_097f:
        do {
          while( true ) {
            while( true ) {
              pcVar3 = pcVar10;
              pcVar10 = pcVar10 + 1;
              cVar2 = *pcVar3;
              if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_2000_09af;
              if (cVar2 == '\"') goto LAB_2000_0946;
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
        goto LAB_2000_0946;
      }
      if (cVar2 != '\\') {
        uVar7 = uVar7 + 1;
        goto LAB_2000_0946;
      }
      uVar6 = 0;
      do {
        uVar6 = uVar6 + 1;
        pcVar3 = pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (*pcVar3 == '\\');
      if (*pcVar3 == '\"') {
        uVar7 = uVar7 + (uVar6 >> 1) + (uint)((uVar6 & 1) != 0);
        if ((uVar6 & 1) == 0) goto LAB_2000_097f;
        goto LAB_2000_0946;
      }
      uVar7 = uVar7 + uVar6;
    } while( true );
  }
LAB_2000_09af:
  *(int *)0x9280 = iVar5;
  iVar12 = (iVar5 + 1) * 4;
  iVar5 = -(uVar7 + iVar5 + iVar12 + 1 & 0xfffe);
  *(undefined1 **)0x9282 = &stack0x0004 + iVar5;
  *(undefined2 *)0x9284 = unaff_SS;
  pcVar11 = &stack0x0004 + iVar12 + iVar5;
  *(undefined2 *)((int)&stack0x0002 + iVar5) = unaff_SS;
  uVar13 = *(undefined2 *)((int)&stack0x0002 + iVar5);
  *(char **)(&stack0x0004 + iVar5) = pcVar11;
  *(undefined2 *)(&stack0x0006 + iVar5) = unaff_SS;
  puVar8 = (undefined2 *)(&stack0x0008 + iVar5);
  pcVar3 = (char *)*(undefined4 *)0x928a;
  pcVar10 = (char *)pcVar3;
  do {
    pcVar1 = pcVar10;
    pcVar10 = pcVar10 + 1;
    cVar2 = *pcVar1;
    pcVar1 = pcVar11;
    pcVar11 = pcVar11 + 1;
    *pcVar1 = cVar2;
  } while (cVar2 != '\0');
  uVar4 = *(undefined2 *)0x9260;
  pcVar10 = (char *)0x81;
LAB_2000_09f4:
  do {
    do {
      pcVar3 = pcVar10;
      pcVar10 = pcVar10 + 1;
      cVar2 = *pcVar3;
    } while (cVar2 == ' ');
  } while (cVar2 == '\t');
  if ((cVar2 == '\r') || (cVar2 == '\0')) {
LAB_2000_0a87:
    *(undefined2 *)((int)&stack0x0002 + iVar5) = unaff_SS;
    uVar13 = *(undefined2 *)((int)&stack0x0002 + iVar5);
    *puVar8 = 0;
    puVar8[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x00020a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)*(uint *)0x92a2)();
    return;
  }
  *puVar8 = pcVar11;
  puVar8[1] = unaff_SS;
  puVar8 = puVar8 + 2;
  do {
    pcVar10 = pcVar10 + -1;
LAB_2000_0a15:
    pcVar3 = pcVar10;
    pcVar10 = pcVar10 + 1;
    cVar2 = *pcVar3;
    if ((cVar2 == ' ') || (cVar2 == '\t')) {
      pcVar3 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar3 = '\0';
      goto LAB_2000_09f4;
    }
    if ((cVar2 == '\r') || (cVar2 == '\0')) {
LAB_2000_0a84:
      *pcVar11 = '\0';
      goto LAB_2000_0a87;
    }
    pcVar9 = pcVar10;
    if (cVar2 == '\"') {
LAB_2000_0a51:
      while( true ) {
        pcVar10 = pcVar9 + 1;
        cVar2 = *pcVar9;
        if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_2000_0a84;
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
      goto LAB_2000_0a15;
    }
    if (cVar2 != '\\') {
      pcVar3 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar3 = cVar2;
      goto LAB_2000_0a15;
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
      if ((uVar7 & 1) == 0) goto LAB_2000_0a51;
      pcVar3 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar3 = '\"';
      goto LAB_2000_0a15;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar3 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar3 = '\\';
    }
  } while( true );
}



// Function: FUN_2000_0b36 @ 2000:0b36

int * __stdcall16far FUN_2000_0b36(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar3 = (int *)0x9cb4;
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



// Function: FUN_2000_0b61 @ 2000:0b61

void __stdcall16far FUN_2000_0b61(undefined2 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  pcVar3 = (char *)FUN_2000_0b36(param_1);
  if (pcVar3 != (char *)0x0) {
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
    if (*(int *)0x983c == -0x292a) {
      (*(code *)*(undefined2 *)0x983e)();
    }
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}



// Function: FUN_2000_0bbe @ 2000:0bbe

undefined2 __cdecl16far FUN_2000_0bbe(void)

{
  bool in_CF;
  
  if (!in_CF) {
    return 0;
  }
  FUN_2000_0be6();
  return 0xffff;
}



// Function: FUN_2000_0bc6 @ 2000:0bc6

undefined1 __cdecl16far FUN_2000_0bc6(void)

{
  undefined1 in_AL;
  bool in_CF;
  
  if (in_CF) {
    FUN_2000_0be6();
    return in_AL;
  }
  return 0;
}



// Function: FUN_2000_0bd3 @ 2000:0bd3

void __cdecl16far FUN_2000_0bd3(void)

{
  bool in_CF;
  
  if (in_CF) {
    FUN_2000_0be6();
  }
  return;
}



// Function: FUN_2000_0be0 @ 2000:0be0

void __cdecl16far FUN_2000_0be0(void)

{
  FUN_2000_0be6();
  return;
}



// Function: FUN_2000_0be6 @ 2000:0be6

void __cdecl16near FUN_2000_0be6(void)

{
  byte bVar1;
  char cVar2;
  uint in_AX;
  undefined2 unaff_DS;
  
  bVar1 = (byte)in_AX;
  *(byte *)0x9268 = bVar1;
  cVar2 = (char)(in_AX >> 8);
  if (cVar2 != '\0') goto LAB_2000_0c0a;
  if (*(byte *)0x9263 < 3) {
LAB_2000_0c00:
    if (0x13 < bVar1) {
LAB_2000_0c04:
      in_AX = 0x13;
    }
  }
  else {
    if (0x21 < bVar1) goto LAB_2000_0c04;
    if (bVar1 < 0x20) goto LAB_2000_0c00;
    in_AX = 5;
  }
  cVar2 = *(char *)(ulong)((in_AX & 0xff) + 0x92a6);
LAB_2000_0c0a:
  *(int *)0x925a = (int)cVar2;
  return;
}



// Function: FUN_2000_0c14 @ 2000:0c14

void __cdecl16far FUN_2000_0c14(void)

{
  return;
}



// Function: FUN_2000_0c16 @ 2000:0c16

undefined2 __cdecl16far FUN_2000_0c16(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 *local_12;
  char local_e;
  undefined1 uStack_d;
  undefined1 local_c [8];
  int local_4;
  
  uVar2 = 0xffff;
  if ((*(byte *)(param_1 + 10) & 0x40) != 0) {
    *(undefined1 *)(param_1 + 10) = 0;
    return 0xffff;
  }
  if ((*(byte *)(param_1 + 10) & 0x83) == 0) goto LAB_2000_0cd8;
  uVar2 = FUN_2000_1562(param_1);
  local_4 = *(int *)(param_1 + 0xf4);
  FUN_2000_1282(param_1);
  iVar1 = FUN_2000_25d8(0x1000,*(undefined1 *)(param_1 + 0xb));
  if (-1 < iVar1) {
    if (local_4 == 0) goto LAB_2000_0cd8;
    FUN_2000_2a98(&local_e);
    local_12 = local_c;
    if (local_e == '\\') {
      local_12 = &uStack_d;
    }
    else {
      FUN_2000_2a44(&local_e);
    }
    FUN_2000_2c68(0x1000,local_4,local_12,unaff_SS,10);
    iVar1 = FUN_2000_5826(0x1000,&local_e);
    if (iVar1 == 0) goto LAB_2000_0cd8;
  }
  uVar2 = 0xffff;
LAB_2000_0cd8:
  *(undefined1 *)(param_1 + 10) = 0;
  return uVar2;
}



// Function: FUN_2000_0ce4 @ 2000:0ce4

undefined2 __cdecl16far
FUN_2000_0ce4(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  int iVar1;
  undefined2 uVar2;
  int in_DX;
  
  iVar1 = FUN_2000_24c0();
  if (in_DX == 0 && iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_2000_1306(param_1,param_2,param_3,param_4,param_5,iVar1,in_DX);
  }
  return uVar2;
}



// Function: FUN_2000_0d18 @ 2000:0d18

void __cdecl16far
FUN_2000_0d18(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  FUN_2000_0ce4(param_1,param_2,param_3,param_4,0);
  return;
}



// Function: FUN_2000_0d34 @ 2000:0d34

undefined2 __cdecl16far FUN_2000_0d34(undefined2 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar1 = FUN_2000_1442(param_1);
  uVar2 = FUN_2000_1fd6(0x1000,param_1);
  FUN_2000_14c3(uVar1,param_1);
  return uVar2;
}



// Function: FUN_2000_0d74 @ 2000:0d74

uint __cdecl16far FUN_2000_0d74(uint param_1,undefined2 param_2,uint param_3,uint param_4)

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
      uVar6 = FUN_2000_0e17();
      iVar5 = uVar3 - uVar6;
      iVar7 = iVar7 - (uint)(uVar3 < uVar6);
      if ((uVar6 < uVar4) ||
         (param_1 = param_1 + uVar6, lVar2 = CONCAT22(iVar7,iVar5), iVar5 == 0 && iVar7 == 0))
      goto LAB_2000_0df5;
    }
    uVar4 = FUN_2000_0e17(0,param_1);
    iVar5 = uVar3 - uVar4;
    iVar7 = iVar7 - (uint)(uVar3 < uVar4);
LAB_2000_0df5:
    if (iVar5 != 0 || iVar7 != 0) {
      param_4 = (uint)((ulong)(lVar1 - CONCAT22(iVar7,iVar5)) / (ulong)param_3);
    }
  }
  return param_4;
}



// Function: FUN_2000_0e17 @ 2000:0e17

int __cdecl16near FUN_2000_0e17(void)

{
  uint uVar1;
  int iVar2;
  uint in_CX;
  uint uVar3;
  uint uVar4;
  undefined1 *in_BX;
  int *unaff_SI;
  uint unaff_ES;
  undefined2 unaff_DS;
  uint local_6;
  
  uVar4 = in_CX;
  if (((*(byte *)(unaff_SI + 5) & 0xc) == 0) && ((*(byte *)(unaff_SI + 0x78) & 1) == 0)) {
    local_6 = 0x200;
  }
  else {
    local_6 = unaff_SI[0x79];
  }
  do {
    if ((((*(byte *)(unaff_SI + 5) & 0xc) == 0) && ((*(byte *)(unaff_SI + 0x78) & 1) == 0)) ||
       (uVar1 = unaff_SI[2], uVar1 == 0)) {
      if (uVar4 < local_6) {
        iVar2 = FUN_2000_10fa();
        if (iVar2 == -1) break;
        *in_BX = (char)iVar2;
        in_BX = in_BX + 1;
        uVar3 = uVar4 - 1;
        local_6 = unaff_SI[0x79];
      }
      else {
        iVar2 = FUN_2000_2846(0x1000,*(undefined1 *)((int)unaff_SI + 0xb),in_BX,unaff_ES);
        if (iVar2 == 0) {
          *(byte *)(unaff_SI + 5) = *(byte *)(unaff_SI + 5) | 0x10;
          uVar4 = unaff_ES;
          break;
        }
        if (iVar2 == -1) {
          *(byte *)(unaff_SI + 5) = *(byte *)(unaff_SI + 5) | 0x20;
          uVar4 = unaff_ES;
          break;
        }
        uVar3 = unaff_ES - iVar2;
        in_BX = (undefined1 *)(uVar4 + iVar2);
        unaff_ES = uVar4 - uVar4 % local_6;
      }
    }
    else {
      if (uVar4 < uVar1) {
        uVar1 = uVar4;
      }
      FUN_2000_4238(in_BX,unaff_ES,*unaff_SI,unaff_SI[1],uVar1);
      uVar3 = uVar4 - uVar1;
      unaff_SI[2] = unaff_SI[2] - uVar1;
      in_BX = in_BX + uVar1;
      *unaff_SI = *unaff_SI + uVar1;
    }
    uVar4 = uVar3;
  } while (uVar3 != 0);
  return in_CX - uVar4;
}



// Function: FUN_2000_0f08 @ 2000:0f08

uint __cdecl16far FUN_2000_0f08(uint param_1,undefined2 param_2,uint param_3,uint param_4)

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
      uVar6 = FUN_2000_0fab();
      iVar5 = uVar3 - uVar6;
      iVar7 = iVar7 - (uint)(uVar3 < uVar6);
      if ((uVar6 < uVar4) ||
         (param_1 = param_1 + uVar6, lVar2 = CONCAT22(iVar7,iVar5), iVar5 == 0 && iVar7 == 0))
      goto LAB_2000_0f89;
    }
    uVar4 = FUN_2000_0fab(0,param_1);
    iVar5 = uVar3 - uVar4;
    iVar7 = iVar7 - (uint)(uVar3 < uVar4);
LAB_2000_0f89:
    if (iVar5 != 0 || iVar7 != 0) {
      param_4 = (uint)((ulong)(lVar1 - CONCAT22(iVar7,iVar5)) / (ulong)param_3);
    }
  }
  return param_4;
}



// Function: FUN_2000_0fab @ 2000:0fab

int __cdecl16near FUN_2000_0fab(void)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint in_CX;
  uint uVar4;
  undefined1 *in_BX;
  int *unaff_SI;
  byte *pbVar5;
  uint unaff_ES;
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
       (uVar2 = unaff_SI[2], uVar2 == 0)) {
      if (uVar4 < local_6) {
        iVar1 = FUN_2000_1196(*in_BX);
        if (iVar1 == -1) goto LAB_2000_1097;
        in_BX = in_BX + 1;
        uVar4 = uVar4 - 1;
        local_6 = unaff_SI[0x79];
        if (local_6 == 0) {
          local_6 = 1;
        }
      }
      else {
        if ((((*(byte *)(unaff_SI + 5) & 8) != 0) || ((*pbVar5 & 1) != 0)) &&
           (iVar1 = FUN_2000_1562(), iVar1 != 0)) goto LAB_2000_1097;
        uVar2 = uVar4 - uVar4 % local_6;
        puVar3 = (undefined1 *)
                 FUN_2000_6f76(0x1000,*(undefined1 *)((int)unaff_SI + 0xb),in_BX,unaff_ES);
        if ((puVar3 == (undefined1 *)0xffff) || (unaff_ES = unaff_ES - (int)puVar3, puVar3 != in_BX)
           ) {
          *(byte *)(unaff_SI + 5) = *(byte *)(unaff_SI + 5) | 0x20;
          uVar4 = unaff_ES;
          goto LAB_2000_1097;
        }
        in_BX = puVar3 + uVar4;
        uVar4 = unaff_ES;
        unaff_ES = uVar2;
      }
    }
    else {
      if (uVar4 < uVar2) {
        uVar2 = uVar4;
      }
      FUN_2000_4238(*unaff_SI,unaff_SI[1],in_BX,unaff_ES,uVar2);
      unaff_SI[2] = unaff_SI[2] - uVar2;
      in_BX = in_BX + uVar2;
      *unaff_SI = *unaff_SI + uVar2;
      uVar4 = uVar4 - uVar2;
    }
    if (uVar4 == 0) {
LAB_2000_1097:
      return in_CX - uVar4;
    }
  } while( true );
}



// Function: FUN_2000_10a0 @ 2000:10a0

undefined2 __cdecl16far FUN_2000_10a0(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar1 = FUN_2000_1442(0x92cc);
  uVar2 = FUN_2000_1fd6(0x1000,0x92cc);
  FUN_2000_14c3(uVar1,0x92cc);
  return uVar2;
}



// Function: FUN_2000_10e4 @ 2000:10e4

void __cdecl16far FUN_2000_10e4(void)

{
  undefined2 unaff_DS;
  
  FUN_2000_15e2();
  if (*(char *)0x9297 != '\0') {
    FUN_2000_2f3e();
  }
  return;
}



// Function: FUN_2000_10fa @ 2000:10fa

uint __cdecl16far FUN_2000_10fa(undefined4 *param_1)

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
        FUN_2000_12ba(param_1);
      }
      uVar3 = *(undefined2 *)((int)param_1 + 6);
      *(undefined2 *)param_1 = uVar3;
      uVar5 = (uint)*(byte *)((int)param_1 + 0xb);
      iVar4 = FUN_2000_2846(0x1000,uVar5,uVar3,*(undefined2 *)(param_1 + 2),
                            *(undefined2 *)((int)param_1 + 0xf2));
      if (iVar4 == 0) {
        *(byte *)((int)param_1 + 10) = *(byte *)((int)param_1 + 10) | 0x10;
      }
      else {
        if (iVar4 != -1) {
          if (((*(byte *)(uVar5 + 0x926c) & 0x82) == 0x82) &&
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



// Function: FUN_2000_1196 @ 2000:1196

uint __cdecl16far FUN_2000_1196(uint param_1,int *param_2)

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
      if ((bVar2 & 0x10) == 0) goto LAB_2000_120f;
      *param_2 = param_2[3];
      bVar2 = bVar2 & 0xfe;
    }
    *(byte *)(param_2 + 5) = bVar2 & 0xef | 2;
    uVar5 = (uint)*(byte *)((int)param_2 + 0xb);
    if (((bVar2 & 8) == 0) &&
       (((bVar2 & 4) != 0 ||
        (((*(byte *)(param_2 + 0x78) & 1) == 0 &&
         (((((param_2 == (int *)0x92cc || (param_2 == (int *)0x92d8)) || (param_2 == (int *)0x92f0))
           && ((*(byte *)(uVar5 + 0x926c) & 0x40) != 0)) ||
          (FUN_2000_12ba(param_2), (*(byte *)(piVar1 + 5) & 8) == 0)))))))) {
      iVar3 = FUN_2000_6f76(0x1000,uVar5,&param_1);
      iVar4 = 1;
    }
    else {
      iVar4 = *piVar1 - piVar1[3];
      *piVar1 = piVar1[3] + 1;
      piVar1[2] = piVar1[0x79] + -1;
      if (iVar4 == 0) {
        iVar3 = 0;
        if ((*(byte *)(uVar5 + 0x926c) & 0x20) != 0) {
          FUN_2000_25f8(0x1000,uVar5,0,0,2);
          iVar3 = 0;
          iVar4 = 0;
        }
      }
      else {
        iVar3 = FUN_2000_6f76(0x1000,uVar5,piVar1[3],piVar1[4],iVar4,iVar4);
      }
      **(undefined1 **)(piVar1 + 3) = (char)param_1;
    }
    if (iVar3 == iVar4) {
      return param_1 & 0xff;
    }
  }
LAB_2000_120f:
  *(byte *)(piVar1 + 5) = *(byte *)(piVar1 + 5) | 0x20;
  return 0xffff;
}



// Function: FUN_2000_1282 @ 2000:1282

void __cdecl16near FUN_2000_1282(undefined2 *param_1)

{
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_1 + 5) & 0x83) != 0) && ((*(byte *)(param_1 + 5) & 8) != 0)) {
    FUN_2000_70ea(param_1[3],param_1[4]);
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xf7;
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// Function: FUN_2000_12ba @ 2000:12ba

void __cdecl16near FUN_2000_12ba(int *param_1)

{
  int iVar1;
  int in_DX;
  int unaff_DS;
  
  iVar1 = FUN_2000_70fd(0x200);
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



// Function: FUN_2000_1306 @ 2000:1306

undefined2 * __cdecl16far
FUN_2000_1306(undefined2 param_1,undefined2 param_2,byte *param_3,undefined2 param_4,
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
  
  local_6 = *(byte *)0x951c;
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
      goto LAB_2000_133c;
    }
    uVar5 = 0x109;
  }
  local_4 = 2;
LAB_2000_133c:
  bVar2 = true;
LAB_2000_1341:
  param_3 = (byte *)CONCAT22(param_3._2_2_,(byte *)param_3 + 1);
  if ((*param_3 == 0) || (!bVar2)) {
    iVar4 = FUN_2000_267a(param_1,param_2,uVar5,param_4,0x1a4);
    if (iVar4 < 0) {
      return (undefined2 *)0x0;
    }
    *(int *)0x92be = *(int *)0x92be + 1;
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
      goto LAB_2000_1341;
    }
  }
  else {
    if (0x74 < bVar1) goto LAB_2000_1374;
    if (bVar1 == 0x2b) {
      if ((uVar5 & 2) != 0) goto LAB_2000_1374;
      uVar5 = uVar5 & 0xfffe | 2;
      local_4 = 0x80;
      goto LAB_2000_1341;
    }
    if (bVar1 == 0x62) {
      if ((uVar5 & 0xc000) == 0) {
        uVar5 = uVar5 | 0x8000;
        goto LAB_2000_1341;
      }
    }
    else {
      if (bVar1 != 99) {
        if ((bVar1 != 0x6e) || (bVar3)) goto LAB_2000_1374;
        bVar3 = true;
        local_6 = local_6 & 0xbf;
        goto LAB_2000_1341;
      }
      if (!bVar3) {
        bVar3 = true;
        local_6 = local_6 | 0x40;
        goto LAB_2000_1341;
      }
    }
  }
LAB_2000_1374:
  bVar2 = false;
  goto LAB_2000_1341;
}



// Function: FUN_2000_1442 @ 2000:1442

undefined2 __cdecl16near FUN_2000_1442(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar4 = (int *)0x94a4;
  if ((((param_1 == (int *)0x92cc) || (piVar4 = (int *)0x94a8, param_1 == (int *)0x92d8)) ||
      (piVar4 = (int *)0x94ac, param_1 == (int *)0x92f0)) &&
     (((*(byte *)(param_1 + 5) & 0xc) == 0 && ((*(byte *)(param_1 + 0x78) & 1) == 0)))) {
    iVar2 = *piVar4;
    iVar3 = piVar4[1];
    if (iVar2 == 0 && iVar3 == 0) {
      iVar2 = FUN_2000_70fd(0x200);
      if (iVar3 == 0) goto LAB_2000_14bd;
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
LAB_2000_14bd:
    uVar1 = 0;
  }
  return uVar1;
}



// Function: FUN_2000_14c3 @ 2000:14c3

void __cdecl16near FUN_2000_14c3(int param_1,undefined2 *param_2)

{
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_2 + 0x78) & 0x10) != 0) &&
     ((*(byte *)(*(byte *)((int)param_2 + 0xb) + 0x926c) & 0x40) != 0)) {
    FUN_2000_1562(param_2);
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



// Function: FUN_2000_150a @ 2000:150a

int __cdecl16far FUN_2000_150a(undefined4 param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (param_1._2_2_ == 0 && (int)param_1 == 0) {
    iVar1 = FUN_2000_15ea(0);
  }
  else {
    iVar1 = FUN_2000_1562((int)param_1,param_1._2_2_);
    if (iVar1 == 0) {
      iVar1 = 0;
      if ((*(byte *)((int)param_1 + 0xf0) & 0x40) != 0) {
        iVar1 = FUN_2000_3420(*(undefined1 *)((int)param_1 + 0xb));
        iVar1 = -(uint)(iVar1 != 0);
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



// Function: FUN_2000_1562 @ 2000:1562

undefined2 __cdecl16near FUN_2000_1562(int *param_1)

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
      iVar2 = FUN_2000_6f76(0x1000,*(undefined1 *)((int)param_1 + 0xb),param_1[3],param_1[4],iVar1);
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



// Function: FUN_2000_15e2 @ 2000:15e2

void __cdecl16far FUN_2000_15e2(void)

{
  FUN_2000_15ea(1);
  return;
}



// Function: FUN_2000_15ea @ 2000:15ea

int FUN_2000_15ea(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_4;
  
  iVar3 = 0;
  local_4 = 0;
  for (uVar2 = 0x92c0; uVar2 <= *(uint *)0x94a0; uVar2 = uVar2 + 0xc) {
    if ((param_1 == 1) && ((*(byte *)(uVar2 + 10) & 0x83) != 0)) {
      iVar1 = FUN_2000_150a(uVar2);
      if (iVar1 != -1) {
        iVar3 = iVar3 + 1;
      }
    }
    else if ((param_1 == 0) &&
            (((*(byte *)(uVar2 + 10) & 2) != 0 && (iVar1 = FUN_2000_150a(uVar2), iVar1 == -1)))) {
      local_4 = -1;
    }
  }
  if (param_1 == 1) {
    local_4 = iVar3;
  }
  return local_4;
}



// Function: FUN_2000_1656 @ 2000:1656

void FUN_2000_1656(undefined2 param_1,int *param_2,int *param_3,byte *param_4,undefined2 *param_5)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  char local_1ae;
  int local_19c;
  int local_19a;
  int local_192 [5];
  undefined2 local_188;
  undefined2 local_186;
  undefined2 local_184;
  undefined2 local_182;
  undefined2 uStack_10;
  int *piStack_e;
  int *piStack_c;
  int *piStack_a;
  
  FUN_2000_08a6();
  local_192[0] = 0;
  if (*param_4 == 0) {
    FUN_2000_1f0c();
    return;
  }
  uVar4 = (int)((ulong)param_4 >> 0x10);
  if ((*(byte *)(*param_4 + 0x9545) & 8) != 0) {
    local_192[0] = -1;
    piStack_a = local_192;
    piStack_c = param_3;
    piStack_e = param_2;
    uStack_10 = 0x169c;
    FUN_2000_1fa2();
    piStack_a = param_3;
    piStack_c = param_2;
    piStack_e = (int *)0x16a6;
    FUN_2000_1f84();
    do {
      param_4 = (byte *)CONCAT22(param_4._2_2_,(byte *)param_4 + 1);
      uVar4 = param_4._2_2_;
    } while ((*(byte *)(*param_4 + 0x9545) & 8) != 0);
  }
  if (*(byte *)param_4 != 0x25) {
    FUN_2000_1ed0();
    return;
  }
  local_1ae = '\0';
  bVar1 = false;
  local_19c = 0;
  local_19a = 0;
  local_182 = 0;
  local_184 = 0;
LAB_2000_16f8:
  do {
    while( true ) {
      if (bVar1) {
        if (local_1ae == '\0') {
          local_188 = *param_5;
          local_186 = ((undefined2 *)param_5)[1];
        }
        bVar2 = *param_4 | 0x20;
        if (bVar2 != 0x6e) {
          if ((bVar2 == 99) || (bVar2 == 0x7b)) {
            local_192[0] = local_192[0] + 1;
            piStack_a = param_2;
            piStack_c = (int *)0x17c9;
            FUN_2000_1f4c();
          }
          else {
            piStack_a = local_192;
            piStack_c = param_3;
            piStack_e = param_2;
            uStack_10 = 0x17ba;
            FUN_2000_1fa2();
          }
        }
        if ((local_19c != 0) && (local_19a == 0)) {
          local_192[0] = local_192[0] + -1;
          piStack_a = param_3;
          piStack_c = param_2;
          piStack_e = (int *)0x1e6e;
          FUN_2000_1f84();
          FUN_2000_1f0c();
          return;
        }
        FUN_2000_1e84();
        return;
      }
      param_4 = (byte *)CONCAT22(param_4._2_2_,(byte *)param_4 + 1);
      bVar2 = *param_4;
      uVar3 = (uint)bVar2;
      if ((*(byte *)(uVar3 + 0x9545) & 4) == 0) break;
      local_19c = local_19c + 1;
      local_19a = uVar3 + local_19a * 10 + -0x30;
    }
  } while (uVar3 == 0x6c);
  if (uVar3 < 0x6d) goto code_r0x00021739;
  goto LAB_2000_1768;
code_r0x00021739:
  if (bVar2 != 0x4c) {
    if ((char)bVar2 < 'M') {
      if (bVar2 == 0x2a) {
        local_1ae = local_1ae + '\x01';
        goto LAB_2000_16f8;
      }
      if (bVar2 == 0x46) goto LAB_2000_16f8;
    }
    else if ((bVar2 == 0x4e) || (bVar2 == 0x68)) goto LAB_2000_16f8;
LAB_2000_1768:
    bVar1 = true;
  }
  goto LAB_2000_16f8;
}



// Function: FUN_2000_195f @ 2000:195f

void FUN_2000_195f(void)

{
  undefined1 *puVar1;
  byte *pbVar2;
  int iVar3;
  int unaff_BP;
  int unaff_DI;
  undefined2 unaff_SS;
  
  if ((*(int *)(unaff_BP + -0x19a) == 0) ||
     (iVar3 = *(int *)(unaff_BP + -0x198),
     *(int *)(unaff_BP + -0x198) = *(int *)(unaff_BP + -0x198) + -1, iVar3 != 0)) {
    *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + 1;
    iVar3 = FUN_2000_1f4c(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8));
    if ((iVar3 != -1) &&
       ((1 << ((byte)iVar3 & 7) &
        (int)(char)(*(byte *)((iVar3 >> 3) + unaff_BP + -0x20) ^ *(byte *)(unaff_BP + -0x1aa))) != 0
       )) {
      if (*(char *)(unaff_BP + -0x1ac) == '\0') {
        pbVar2 = (byte *)*(undefined4 *)(unaff_BP + -0x186);
        *(int *)(unaff_BP + -0x186) = *(int *)(unaff_BP + -0x186) + 1;
        *pbVar2 = (byte)iVar3;
        FUN_2000_195f();
        return;
      }
      *(int *)(unaff_BP + -0x18a) = *(int *)(unaff_BP + -0x18a) + 1;
      FUN_2000_195f();
      return;
    }
    *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + -1;
    FUN_2000_1f84(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),iVar3);
  }
  puVar1 = (undefined1 *)*(undefined2 *)(unaff_BP + -0x186);
  iVar3 = *(int *)(unaff_BP + -0x184);
  if (((undefined1 *)*(undefined2 *)(unaff_BP + -0x18a) == puVar1) &&
     (*(int *)(unaff_BP + -0x188) == iVar3)) {
    FUN_2000_1f0c();
    return;
  }
  if (*(char *)(unaff_BP + -0x1ac) != '\0') {
    FUN_2000_1ec6();
    return;
  }
  *(int *)(unaff_BP + -0x192) = *(int *)(unaff_BP + -0x192) + 1;
  if (unaff_DI == 99) {
    FUN_2000_1ec6();
    return;
  }
  *puVar1 = 0;
  FUN_2000_1ec6();
  return;
}



// Function: FUN_2000_197e @ 2000:197e

void FUN_2000_197e(void)

{
  undefined1 *puVar1;
  int iVar2;
  byte *pbVar3;
  int in_AX;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  
  if ((unaff_SI != -1) &&
     ((1 << ((byte)unaff_SI & 7) &
      (int)(char)(*(byte *)((in_AX + -0xf75 >> 3) + unaff_BP + -0x20) ^ *(byte *)(unaff_BP + -0x1aa)
                 )) != 0)) {
    if (*(char *)(unaff_BP + -0x1ac) == '\0') {
      pbVar3 = (byte *)*(undefined4 *)(unaff_BP + -0x186);
      *(int *)(unaff_BP + -0x186) = *(int *)(unaff_BP + -0x186) + 1;
      *pbVar3 = (byte)unaff_SI;
      FUN_2000_195f();
      return;
    }
    *(int *)(unaff_BP + -0x18a) = *(int *)(unaff_BP + -0x18a) + 1;
    FUN_2000_195f();
    return;
  }
  *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + -1;
  FUN_2000_1f84(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),unaff_SI);
  puVar1 = (undefined1 *)*(undefined2 *)(unaff_BP + -0x186);
  iVar2 = *(int *)(unaff_BP + -0x184);
  if (((undefined1 *)*(undefined2 *)(unaff_BP + -0x18a) == puVar1) &&
     (*(int *)(unaff_BP + -0x188) == iVar2)) {
    FUN_2000_1f0c();
    return;
  }
  if (*(char *)(unaff_BP + -0x1ac) != '\0') {
    FUN_2000_1ec6();
    return;
  }
  *(int *)(unaff_BP + -0x192) = *(int *)(unaff_BP + -0x192) + 1;
  if (unaff_DI == 99) {
    FUN_2000_1ec6();
    return;
  }
  *puVar1 = 0;
  FUN_2000_1ec6();
  return;
}



// FAILED to decompile: FUN_2000_1e84 @ 2000:1e84

// Function: FUN_2000_1ec6 @ 2000:1ec6

void FUN_2000_1ec6(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  
  *(char *)(unaff_BP + -0x1ae) = *(char *)(unaff_BP + -0x1ae) + '\x01';
  *(int *)(unaff_BP + 10) = *(int *)(unaff_BP + 10) + 1;
  FUN_2000_1ef1();
  return;
}



// Function: FUN_2000_1ed0 @ 2000:1ed0

undefined2 FUN_2000_1ed0(void)

{
  undefined2 *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  undefined2 uVar6;
  uint uVar7;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + 1;
  uVar7 = FUN_2000_1f4c(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8));
  pbVar2 = (byte *)*(undefined4 *)(unaff_BP + 10);
  *(int *)(unaff_BP + 10) = *(int *)(unaff_BP + 10) + 1;
  if (uVar7 == *pbVar2) {
    if (uVar7 == 0xffff) {
      pcVar3 = (char *)*(undefined4 *)(unaff_BP + 10);
      if ((*pcVar3 != '%') || (((char *)pcVar3)[1] != 'n')) {
        if ((*(int *)(unaff_BP + -0x192) == 0) && (*(char *)(unaff_BP + -0x1ae) == '\0')) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = *(undefined2 *)(unaff_BP + -0x192);
        }
        return uVar6;
      }
    }
    pbVar2 = (byte *)*(undefined4 *)(unaff_BP + 10);
    uVar6 = (undefined2)((ulong)pbVar2 >> 0x10);
    if (*pbVar2 == 0) {
      uVar6 = FUN_2000_1f0c();
      return uVar6;
    }
    if ((*(byte *)(*pbVar2 + 0x9545) & 8) != 0) {
      *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + -1;
      uVar6 = FUN_2000_1fa2(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),
                            unaff_BP + -400,unaff_SS);
      FUN_2000_1f84(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),uVar6);
      do {
        *(int *)(unaff_BP + 10) = *(int *)(unaff_BP + 10) + 1;
        uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 10) >> 0x10);
      } while ((*(byte *)(*(byte *)*(undefined4 *)(unaff_BP + 10) + 0x9545) & 8) != 0);
    }
    if (*(char *)*(undefined2 *)(unaff_BP + 10) != '%') {
      uVar6 = FUN_2000_1ed0();
      return uVar6;
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
LAB_2000_16f8:
    do {
      if (*(char *)(unaff_BP + -0x1a0) != '\0') goto LAB_2000_176e;
      *(int *)(unaff_BP + 10) = *(int *)(unaff_BP + 10) + 1;
      bVar4 = *(byte *)*(undefined4 *)(unaff_BP + 10);
      uVar5 = (uint)bVar4;
      if ((*(byte *)(uVar5 + 0x9545) & 4) != 0) {
        *(int *)(unaff_BP + -0x19a) = *(int *)(unaff_BP + -0x19a) + 1;
        *(int *)(unaff_BP + -0x198) = uVar5 + *(int *)(unaff_BP + -0x198) * 10 + -0x30;
        goto LAB_2000_16f8;
      }
      if (uVar5 != 0x6c) {
        if (uVar5 < 0x6d) {
          if (bVar4 == 0x4c) {
            *(char *)(unaff_BP + -0x1a4) = *(char *)(unaff_BP + -0x1a4) + '\x01';
            goto LAB_2000_1754;
          }
          if ((char)bVar4 < 'M') {
            if (bVar4 == 0x2a) {
              *(char *)(unaff_BP + -0x1ac) = *(char *)(unaff_BP + -0x1ac) + '\x01';
              goto LAB_2000_16f8;
            }
            if (bVar4 == 0x46) goto LAB_2000_16f8;
          }
          else {
            if (bVar4 == 0x4e) goto LAB_2000_16f8;
            if (bVar4 == 0x68) {
              *(char *)(unaff_BP + -0x19c) = *(char *)(unaff_BP + -0x19c) + '\x01';
              goto LAB_2000_16f8;
            }
          }
        }
        *(char *)(unaff_BP + -0x1a0) = *(char *)(unaff_BP + -0x1a0) + '\x01';
        goto LAB_2000_16f8;
      }
LAB_2000_1754:
      *(char *)(unaff_BP + -0x1a4) = *(char *)(unaff_BP + -0x1a4) + '\x01';
    } while( true );
  }
LAB_2000_1e60:
  *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + -1;
  FUN_2000_1f84(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),uVar7);
  uVar6 = FUN_2000_1f0c();
  return uVar6;
LAB_2000_176e:
  if (*(char *)(unaff_BP + -0x1ac) == '\0') {
    puVar1 = (undefined2 *)*(undefined4 *)(unaff_BP + 0xe);
    *(int *)(unaff_BP + 0xe) = *(int *)(unaff_BP + 0xe) + 4;
    uVar6 = ((undefined2 *)puVar1)[1];
    *(undefined2 *)(unaff_BP + -0x186) = *puVar1;
    *(undefined2 *)(unaff_BP + -0x184) = uVar6;
  }
  *(undefined1 *)(unaff_BP + -0x1a0) = 0;
  bVar4 = *(byte *)*(undefined4 *)(unaff_BP + 10) | 0x20;
  if (bVar4 != 0x6e) {
    if ((bVar4 == 99) || (bVar4 == 0x7b)) {
      *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + 1;
      uVar7 = FUN_2000_1f4c(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8));
    }
    else {
      uVar7 = FUN_2000_1fa2(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),
                            unaff_BP + -400,unaff_SS);
    }
  }
  if ((*(int *)(unaff_BP + -0x19a) == 0) || (*(int *)(unaff_BP + -0x198) != 0)) {
    uVar6 = FUN_2000_1e84();
    return uVar6;
  }
  goto LAB_2000_1e60;
}



// Function: FUN_2000_1ef1 @ 2000:1ef1

void FUN_2000_1ef1(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  int unaff_BP;
  int unaff_SI;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  if (unaff_SI == -1) {
    pcVar3 = (char *)*(undefined4 *)(unaff_BP + 10);
    if ((*pcVar3 != '%') || (((char *)pcVar3)[1] != 'n')) {
      return;
    }
  }
  pbVar1 = (byte *)*(undefined4 *)(unaff_BP + 10);
  uVar6 = (undefined2)((ulong)pbVar1 >> 0x10);
  if (*pbVar1 == 0) {
    FUN_2000_1f0c();
    return;
  }
  if ((*(byte *)(*pbVar1 + 0x9545) & 8) != 0) {
    *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + -1;
    uVar6 = FUN_2000_1fa2(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),
                          unaff_BP + -400,unaff_SS);
    FUN_2000_1f84(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),uVar6);
    do {
      *(int *)(unaff_BP + 10) = *(int *)(unaff_BP + 10) + 1;
      uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 10) >> 0x10);
    } while ((*(byte *)(*(byte *)*(undefined4 *)(unaff_BP + 10) + 0x9545) & 8) != 0);
  }
  if (*(char *)*(undefined2 *)(unaff_BP + 10) != '%') {
    FUN_2000_1ed0();
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
LAB_2000_16f8:
  do {
    while( true ) {
      while( true ) {
        if (*(char *)(unaff_BP + -0x1a0) != '\0') {
          if (*(char *)(unaff_BP + -0x1ac) == '\0') {
            puVar2 = (undefined2 *)*(undefined4 *)(unaff_BP + 0xe);
            *(int *)(unaff_BP + 0xe) = *(int *)(unaff_BP + 0xe) + 4;
            uVar6 = ((undefined2 *)puVar2)[1];
            *(undefined2 *)(unaff_BP + -0x186) = *puVar2;
            *(undefined2 *)(unaff_BP + -0x184) = uVar6;
          }
          *(undefined1 *)(unaff_BP + -0x1a0) = 0;
          bVar4 = *(byte *)*(undefined4 *)(unaff_BP + 10) | 0x20;
          if (bVar4 != 0x6e) {
            if ((bVar4 == 99) || (bVar4 == 0x7b)) {
              *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + 1;
              unaff_SI = FUN_2000_1f4c(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8));
            }
            else {
              unaff_SI = FUN_2000_1fa2(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),
                                       unaff_BP + -400,unaff_SS);
            }
          }
          if ((*(int *)(unaff_BP + -0x19a) != 0) && (*(int *)(unaff_BP + -0x198) == 0)) {
            *(int *)(unaff_BP + -400) = *(int *)(unaff_BP + -400) + -1;
            FUN_2000_1f84(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),unaff_SI);
            FUN_2000_1f0c();
            return;
          }
          FUN_2000_1e84();
          return;
        }
        *(int *)(unaff_BP + 10) = *(int *)(unaff_BP + 10) + 1;
        bVar4 = *(byte *)*(undefined4 *)(unaff_BP + 10);
        uVar5 = (uint)bVar4;
        if ((*(byte *)(uVar5 + 0x9545) & 4) == 0) break;
        *(int *)(unaff_BP + -0x19a) = *(int *)(unaff_BP + -0x19a) + 1;
        *(int *)(unaff_BP + -0x198) = uVar5 + *(int *)(unaff_BP + -0x198) * 10 + -0x30;
      }
      if (uVar5 != 0x6c) break;
LAB_2000_1754:
      *(char *)(unaff_BP + -0x1a4) = *(char *)(unaff_BP + -0x1a4) + '\x01';
    }
    if (0x6c < uVar5) goto LAB_2000_1768;
    if (bVar4 == 0x4c) {
      *(char *)(unaff_BP + -0x1a4) = *(char *)(unaff_BP + -0x1a4) + '\x01';
      goto LAB_2000_1754;
    }
    if ('L' < (char)bVar4) break;
    if (bVar4 == 0x2a) {
      *(char *)(unaff_BP + -0x1ac) = *(char *)(unaff_BP + -0x1ac) + '\x01';
    }
    else if (bVar4 != 0x46) goto LAB_2000_1768;
  } while( true );
  if (bVar4 != 0x4e) {
    if (bVar4 == 0x68) {
      *(char *)(unaff_BP + -0x19c) = *(char *)(unaff_BP + -0x19c) + '\x01';
    }
    else {
LAB_2000_1768:
      *(char *)(unaff_BP + -0x1a0) = *(char *)(unaff_BP + -0x1a0) + '\x01';
    }
  }
  goto LAB_2000_16f8;
}



// Function: FUN_2000_1f0c @ 2000:1f0c

void __cdecl16far FUN_2000_1f0c(void)

{
  return;
}



// Function: FUN_2000_1f2e @ 2000:1f2e

uint FUN_2000_1f2e(uint param_1)

{
  undefined2 unaff_DS;
  
  if ((*(byte *)(param_1 + 0x9545) & 4) == 0) {
    param_1 = (param_1 & 0xffdf) - 7;
  }
  return param_1;
}



// Function: FUN_2000_1f4c @ 2000:1f4c

uint FUN_2000_1f4c(int *param_1)

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
    uVar4 = FUN_2000_10fa(piVar5,uVar6);
  }
  else {
    pbVar2 = (byte *)*param_1;
    iVar3 = piVar5[1];
    *param_1 = *param_1 + 1;
    uVar4 = (uint)*pbVar2;
  }
  return uVar4;
}



// Function: FUN_2000_1f84 @ 2000:1f84

void FUN_2000_1f84(undefined2 param_1,undefined2 param_2,int param_3)

{
  if (param_3 != -1) {
    FUN_2000_2568(param_3,param_1,param_2);
  }
  return;
}



// Function: FUN_2000_1fa2 @ 2000:1fa2

void FUN_2000_1fa2(undefined2 param_1,undefined2 param_2,int *param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  
  do {
    *param_3 = *param_3 + 1;
    iVar1 = FUN_2000_1f4c(param_1,param_2);
  } while ((*(byte *)(iVar1 + -0x6abb) & 8) != 0);
  return;
}



// Function: FUN_2000_1fd6 @ 2000:1fd6

void FUN_2000_1fd6(void)

{
  char cVar1;
  byte bVar2;
  char *in_stack_00000008;
  
  FUN_2000_08a6();
  cVar1 = *in_stack_00000008;
  if (cVar1 == '\0') {
    FUN_2000_24ba();
    return;
  }
  if ((byte)(cVar1 - 0x20U) < 0x59) {
    bVar2 = *(byte *)(ulong)((byte)(cVar1 - 0x20U) + 0x94b8) & 0xf;
  }
  else {
    bVar2 = 0;
  }
                    /* WARNING: Could not emulate address calculation at 0x0002201c */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)
             ((char)(*(byte *)(ulong)((byte)(bVar2 * '\b') + 0x94b8) >> 4) * 2 + 0x19e6))(cVar1);
  return;
}



// Function: FUN_2000_2219 @ 2000:2219

void FUN_2000_2219(void)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int unaff_BP;
  char *pcVar6;
  char *pcVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  bVar3 = *(byte *)(unaff_BP + -2) | 0x20;
  if (*(int *)(unaff_BP + -0xc) < 1) {
    if (*(int *)(unaff_BP + -0xc) == 0) {
      if (bVar3 == 0x67) {
        *(undefined2 *)(unaff_BP + -0xc) = 1;
      }
    }
    else {
      *(undefined2 *)(unaff_BP + -0xc) = 6;
    }
  }
  pcVar6 = (char *)(unaff_BP + -0x214);
  if ((*(byte *)(unaff_BP + -3) & 4) == 0) {
    (*(code *)*(undefined2 *)0x9522)
              (0x1000,*(undefined2 *)(unaff_BP + 0xe),*(undefined2 *)(unaff_BP + 0x10),pcVar6);
    *(int *)(unaff_BP + 0xe) = *(int *)(unaff_BP + 0xe) + 8;
  }
  else {
    (*(code *)*(undefined2 *)0x9536)(0x1000);
    *(int *)(unaff_BP + 0xe) = *(int *)(unaff_BP + 0xe) + 10;
  }
  if (((*(byte *)(unaff_BP + -4) & 0x80) != 0) && (*(int *)(unaff_BP + -0xc) == 0)) {
    (*(code *)*(undefined2 *)0x952e)(0x1000,pcVar6);
  }
  if ((bVar3 == 0x67) && ((*(uint *)(unaff_BP + -4) & 0x80) == 0)) {
    (*(code *)*(undefined2 *)0x952a)(0x1000,pcVar6);
  }
  if (*pcVar6 == '-') {
    pcVar6 = (char *)(unaff_BP + -0x213);
    *(byte *)(unaff_BP + -3) = *(byte *)(unaff_BP + -3) | 1;
  }
  iVar5 = -1;
  pcVar7 = pcVar6;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar2 != '\0');
  pcVar7 = pcVar7 + (-1 - (int)pcVar6);
  if ((*(byte *)(unaff_BP + -4) & 0x40) != 0) {
    if ((*(byte *)(unaff_BP + -3) & 1) == 0) {
      if ((*(byte *)(unaff_BP + -4) & 1) == 0) {
        if ((*(byte *)(unaff_BP + -4) & 2) != 0) {
          *(undefined1 *)(unaff_BP + -0xe) = 0x20;
          *(undefined2 *)(unaff_BP + -0x10) = 1;
        }
      }
      else {
        *(undefined1 *)(unaff_BP + -0xe) = 0x2b;
        *(undefined2 *)(unaff_BP + -0x10) = 1;
      }
    }
    else {
      *(undefined1 *)(unaff_BP + -0xe) = 0x2d;
      *(undefined2 *)(unaff_BP + -0x10) = 1;
    }
  }
  iVar5 = *(int *)(unaff_BP + -10) - (int)pcVar7;
  iVar4 = iVar5 - *(int *)(unaff_BP + -0x10);
  if (iVar5 < *(int *)(unaff_BP + -0x10)) {
    iVar4 = 0;
  }
  if ((*(byte *)(unaff_BP + -4) & 0xc) == 0) {
    iVar4 = FUN_2000_246d(pcVar7,pcVar6);
  }
  FUN_2000_244f(iVar4);
  if (((*(byte *)(unaff_BP + -4) & 8) != 0) && ((*(byte *)(unaff_BP + -4) & 4) == 0)) {
    iVar4 = FUN_2000_246d(pcVar7,pcVar6);
  }
  FUN_2000_244f(iVar4);
  if ((*(byte *)(unaff_BP + -4) & 4) != 0) {
    FUN_2000_246d();
  }
  cVar1 = *(char *)*(undefined4 *)(unaff_BP + 10);
  *(int *)(unaff_BP + 10) = (int)((char *)(char *)*(undefined4 *)(unaff_BP + 10) + 1);
  *(char *)(unaff_BP + -2) = cVar1;
  if ((cVar1 != '\0') && (-1 < *(int *)(unaff_BP + -8))) {
    if ((byte)(cVar1 - 0x20U) < 0x59) {
      bVar3 = *(byte *)(ulong)((byte)(cVar1 - 0x20U) + 0x94b8) & 0xf;
    }
    else {
      bVar3 = 0;
    }
    bVar3 = *(byte *)(ulong)((byte)(bVar3 * '\b' + *(char *)(unaff_BP + -5)) + 0x94b8) >> 4;
    *(byte *)(unaff_BP + -5) = bVar3;
                    /* WARNING: Could not recover jumptable at 0x00022029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*(undefined2 *)((char)bVar3 * 2 + 0x19e6))();
    return;
  }
  FUN_2000_24ba();
  return;
}



// Function: FUN_2000_241e @ 2000:241e

undefined2 __cdecl16near FUN_2000_241e(void)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char in_AL;
  int iVar4;
  int *piVar5;
  int unaff_BP;
  undefined2 uVar6;
  undefined2 unaff_SS;
  
  piVar3 = (int *)*(undefined4 *)(unaff_BP + 6);
  uVar6 = (undefined2)((ulong)piVar3 >> 0x10);
  piVar5 = (int *)piVar3;
  piVar1 = piVar5 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    iVar4 = FUN_2000_1196((int)in_AL,piVar5,uVar6);
    if (iVar4 == -1) {
      return 0xffff;
    }
  }
  else {
    pcVar2 = (char *)*piVar3;
    *piVar3 = *piVar3 + 1;
    *pcVar2 = in_AL;
  }
  return 0;
}



// Function: FUN_2000_244f @ 2000:244f

void __cdecl16near FUN_2000_244f(void)

{
  uint uVar1;
  int in_CX;
  int unaff_BP;
  uint uVar2;
  undefined2 unaff_SS;
  
  if (in_CX != 0) {
    *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + in_CX;
    uVar2 = 0;
    do {
      uVar1 = FUN_2000_241e();
      uVar2 = uVar2 | uVar1;
      in_CX = in_CX + -1;
    } while (in_CX != 0);
    if (uVar2 != 0) {
      *(undefined2 *)(unaff_BP + -8) = 0xffff;
    }
  }
  return;
}



// Function: FUN_2000_246d @ 2000:246d

void __cdecl16near FUN_2000_246d(void)

{
  uint uVar1;
  int in_CX;
  int unaff_BP;
  uint uVar2;
  undefined2 unaff_SS;
  
  if (in_CX != 0) {
    *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + in_CX;
    uVar2 = 0;
    do {
      uVar1 = FUN_2000_241e();
      uVar2 = uVar2 | uVar1;
      in_CX = in_CX + -1;
    } while (in_CX != 0);
    if (uVar2 != 0) {
      *(undefined2 *)(unaff_BP + -8) = 0xffff;
    }
  }
  return;
}



// Function: FUN_2000_248f @ 2000:248f

/* WARNING: Control flow encountered bad instruction data */

void FUN_2000_248f(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_2000_24ba @ 2000:24ba

void __cdecl16far FUN_2000_24ba(void)

{
  return;
}



// Function: FUN_2000_24c0 @ 2000:24c0

undefined2 * __cdecl16far FUN_2000_24c0(void)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)0x92c0;
  while( true ) {
    if ((undefined2 *)*(undefined2 *)0x94a0 < puVar1) {
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



// Function: FUN_2000_250e @ 2000:250e

void __cdecl16far FUN_2000_250e(undefined2 param_1)

{
  int *piVar1;
  undefined2 unaff_DS;
  
  piVar1 = (int *)0x92d0;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    FUN_2000_1196(param_1,0x92cc);
  }
  else {
    *(int *)0x92cc = *(int *)0x92cc + 1;
    *(undefined1 *)((int)*(undefined4 *)0x92cc + -1) = (undefined1)param_1;
  }
  return;
}



// Function: FUN_2000_253e @ 2000:253e

undefined2 __cdecl16far FUN_2000_253e(void)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 extraout_AH;
  undefined2 unaff_DS;
  
  piVar1 = (int *)0x92c4;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_2000_10fa(0x92c0);
    uVar3 = extraout_AH;
  }
  else {
    *(int *)0x92c0 = *(int *)0x92c0 + 1;
    uVar2 = *(undefined1 *)((int)*(undefined4 *)0x92c0 + -1);
    uVar3 = 0;
  }
  return CONCAT11(uVar3,uVar2);
}



// Function: FUN_2000_2568 @ 2000:2568

uint __cdecl16far FUN_2000_2568(uint param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined2 unaff_DS;
  
  if ((param_1 == 0xffff) ||
     (((*(byte *)(param_2 + 5) & 1) == 0 &&
      (((*(byte *)(param_2 + 5) & 0x80) == 0 || ((*(byte *)(param_2 + 5) & 2) != 0)))))) {
LAB_2000_258e:
    param_1 = 0xffff;
  }
  else {
    if (param_2[4] == 0 && param_2[3] == 0) {
      FUN_2000_12ba(param_2);
    }
    if ((param_2[3] == *param_2) && (param_2[4] == param_2[1])) {
      if (param_2[2] != 0) goto LAB_2000_258e;
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



// Function: FUN_2000_25d8 @ 2000:25d8

void FUN_2000_25d8(undefined2 param_1,uint param_2)

{
  code *pcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  bVar2 = param_2 < *(uint *)0x926a;
  if (bVar2) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!bVar2) {
      *(undefined1 *)(param_2 + 0x926c) = 0;
    }
  }
  FUN_2000_0bbe();
  return;
}



// Function: FUN_2000_25f8 @ 2000:25f8

void FUN_2000_25f8(undefined2 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(uint *)0x926a <= param_2) goto LAB_2000_2676;
  bVar5 = false;
  if ((*(int *)0x951e != 0) && (bVar5 = false, (param_4 & 0x8000) != 0)) {
    if (param_5 == 0) goto LAB_2000_2676;
    bVar5 = false;
    pcVar2 = (code *)swi(0x21);
    uVar6 = (*pcVar2)();
    uVar3 = (uint)((ulong)uVar6 >> 0x10);
    if (bVar5) goto LAB_2000_2676;
    if ((param_5 & 2) == 0) {
      uVar1 = (uint)CARRY2((uint)uVar6,param_3);
      bVar5 = CARRY2(uVar3,param_4) || CARRY2(uVar3 + param_4,uVar1);
      if ((int)(uVar3 + param_4 + uVar1) < 0) goto LAB_2000_2676;
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
        goto LAB_2000_2676;
      }
    }
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (!bVar5) {
    *(byte *)(param_2 + 0x926c) = *(byte *)(param_2 + 0x926c) & 0xfd;
  }
LAB_2000_2676:
  FUN_2000_0bd3();
  return;
}



// Function: FUN_2000_267a @ 2000:267a

/* WARNING: Removing unreachable block (ram,0x00022792) */

uint __cdecl16far
FUN_2000_267a(undefined2 param_1,undefined2 param_2,uint param_3,char param_4,uint param_5)

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
  byte bStack_6;
  undefined2 uStack_4;
  
  cVar2 = '\0';
  if (2 < *(byte *)0x9263) {
    cVar2 = param_4;
  }
  _param_4 = param_5;
  uStack_4 = CONCAT11(uStack_4._1_1_,cVar2);
  bStack_6 = 0;
  if (((param_3 & 0x8000) == 0) && (((param_3 & 0x4000) != 0 || ((*(byte *)0x951b & 0x80) == 0)))) {
    bStack_6 = 0x80;
  }
  bVar7 = false;
  pcVar1 = (code *)swi(0x21);
  uVar5 = param_3;
  uVar3 = (*pcVar1)();
  if (bVar7) {
    if ((uVar3 != 2) || ((uVar5 & 0x100) == 0)) goto LAB_2000_26da;
    bVar7 = false;
    FUN_2000_2835();
    uVar8 = 0;
    uVar5 = 0;
    _param_4 = param_5;
LAB_2000_279c:
    pcVar1 = (code *)swi(0x21);
    uVar3 = (*pcVar1)();
    if ((bool)uVar8) {
LAB_2000_27a7:
      uVar5 = FUN_2000_0bd3();
      return uVar5;
    }
    uStack_4 = in_stack_00000000;
    if ((cVar2 != '\0') || ((param_3 & 2) == 0)) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      bVar9 = false;
      pcVar1 = (code *)swi(0x21);
      uVar3 = (*pcVar1)();
      if (bVar9) goto LAB_2000_27a7;
      if ((!bVar7) && ((_param_4 & 1) != 0)) {
        bVar7 = false;
        uVar5 = (uint)(byte)((byte)uVar5 | 1);
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
        if (bVar7) goto LAB_2000_27a7;
      }
    }
  }
  else {
    if ((uVar5 & 0x500) == 0x500) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      goto LAB_2000_26da;
    }
    bVar7 = true;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if ((extraout_DX & 0x80) != 0) {
      bStack_6 = bStack_6 | 0x40;
    }
    if ((bStack_6 & 0x40) == 0) {
      if ((param_3 & 0x200) == 0) {
        if (((bStack_6 & 0x80) != 0) && ((param_3 & 2) != 0)) {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          pcVar1 = (code *)swi(0x21);
          iVar4 = (*pcVar1)();
          if ((iVar4 != 0) && (uStack_4._1_1_ == '\x1a')) {
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
          }
          uVar5 = 0;
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          uStack_4 = param_3;
        }
      }
      else {
        uVar8 = 0;
        if ((param_3 & 3) == 0) {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          goto LAB_2000_279c;
        }
        uVar5 = 0;
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
      }
    }
  }
  if ((bStack_6 & 0x40) == 0) {
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
  if (uVar3 < *(uint *)0x926a) {
    *(byte *)(uVar3 + 0x926c) = bVar6 | bStack_6 | 1;
    return uVar3;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
LAB_2000_26da:
  uVar5 = FUN_2000_0bd3();
  return uVar5;
}



// Function: FUN_2000_2694 @ 2000:2694

/* WARNING: Removing unreachable block (ram,0x00022792) */

uint __cdecl16far FUN_2000_2694(undefined2 param_1,undefined2 param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint extraout_DX;
  undefined2 unaff_DS;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  uint in_stack_00000000;
  byte local_6;
  undefined2 local_4;
  
  uVar4 = local_4;
  local_4 = local_4 & 0xff00;
  local_6 = 0;
  if (((param_3 & 0x8000) == 0) && (((param_3 & 0x4000) != 0 || ((*(byte *)0x951b & 0x80) == 0)))) {
    local_6 = 0x80;
  }
  bVar7 = false;
  pcVar1 = (code *)swi(0x21);
  uVar6 = param_3;
  uVar2 = (*pcVar1)();
  if (bVar7) {
    if ((uVar2 != 2) || ((uVar6 & 0x100) == 0)) goto LAB_2000_26da;
    bVar7 = false;
    FUN_2000_2835();
    uVar8 = 0;
    uVar6 = 0;
LAB_2000_279c:
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if ((bool)uVar8) {
LAB_2000_27a7:
      uVar4 = FUN_2000_0bd3();
      return uVar4;
    }
    local_4 = in_stack_00000000;
    if ((param_3 & 2) == 0) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      bVar9 = false;
      pcVar1 = (code *)swi(0x21);
      uVar2 = (*pcVar1)();
      if (bVar9) goto LAB_2000_27a7;
      if ((!bVar7) && ((param_4 & 1) != 0)) {
        bVar7 = false;
        uVar6 = (uint)(byte)((byte)uVar6 | 1);
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
        if (bVar7) goto LAB_2000_27a7;
      }
    }
  }
  else {
    if ((uVar6 & 0x500) == 0x500) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      goto LAB_2000_26da;
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
          iVar3 = (*pcVar1)();
          if ((iVar3 != 0) && (local_4._1_1_ = SUB21(uVar4,1), local_4._1_1_ == '\x1a')) {
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
          }
          uVar6 = 0;
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
          goto LAB_2000_279c;
        }
        uVar6 = 0;
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
      }
    }
  }
  if ((local_6 & 0x40) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    bVar5 = 0;
    if ((uVar6 & 1) != 0) {
      bVar5 = 0x10;
    }
    if ((param_3 & 8) != 0) {
      bVar5 = bVar5 | 0x20;
    }
  }
  else {
    bVar5 = 0;
  }
  if (uVar2 < *(uint *)0x926a) {
    *(byte *)(uVar2 + 0x926c) = bVar5 | local_6 | 1;
    return uVar2;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
LAB_2000_26da:
  uVar4 = FUN_2000_0bd3();
  return uVar4;
}



// Function: FUN_2000_2835 @ 2000:2835

void __cdecl16near FUN_2000_2835(void)

{
  return;
}



// Function: FUN_2000_2846 @ 2000:2846

/* WARNING: Removing unreachable block (ram,0x00022942) */
/* WARNING: Removing unreachable block (ram,0x00022937) */

void FUN_2000_2846(undefined2 param_1,uint param_2,undefined4 param_3,int param_4)

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
  
  if (((*(uint *)0x926a <= param_2) || (param_4 == 0)) || ((*(byte *)(param_2 + 0x926c) & 2) != 0))
  {
LAB_2000_28ce:
    FUN_2000_0bd3();
    return;
  }
  uVar10 = *(uint *)0x983c < 0xd6d6;
  if (*(uint *)0x983c == 0xd6d6) {
    (*(code *)*(undefined2 *)0x983e)();
  }
  pcVar3 = (code *)swi(0x21);
  uVar12 = (*pcVar3)();
  pcVar9 = (char *)((ulong)uVar12 >> 0x10);
  if (((bool)uVar10) || ((*(byte *)(param_2 + 0x926c) & 0x80) == 0)) goto LAB_2000_28ce;
  *(byte *)(param_2 + 0x926c) = *(byte *)(param_2 + 0x926c) & 0xfb;
  if ((int)uVar12 == 0) goto LAB_2000_28ce;
  uVar4 = 0xd00;
  if (*pcVar9 == '\n') {
    *(byte *)(param_2 + 0x926c) = *(byte *)(param_2 + 0x926c) | 4;
  }
LAB_2000_28b0:
  pcVar8 = (char *)((ulong)uVar12 >> 0x10);
  iVar7 = (int)uVar12;
  pcVar1 = pcVar8 + 1;
  cVar2 = *pcVar8;
  cVar6 = (char)((uint)uVar4 >> 8);
  uVar4 = CONCAT11(cVar6,cVar2);
  if (cVar2 == cVar6) {
    if (iVar7 != 1) {
      if (*pcVar1 != '\n') goto LAB_2000_28c1;
      goto LAB_2000_28c4;
    }
    bVar11 = false;
    if ((*(byte *)(param_2 + 0x926c) & 0x40) == 0) {
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
        goto LAB_2000_28c1;
      }
      goto LAB_2000_28ce;
    }
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    bVar11 = false;
    uVar10 = extraout_AH;
    if ((extraout_DX & 0x20) == 0) {
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      uVar10 = extraout_AH_00;
      if (bVar11) goto LAB_2000_28ce;
    }
    uVar4 = CONCAT11(uVar10,10);
  }
  else if (cVar2 == '\x1a') {
    *(byte *)(param_2 + 0x926c) = *(byte *)(param_2 + 0x926c) | 2;
    goto LAB_2000_28ce;
  }
LAB_2000_28c1:
  *pcVar9 = (char)uVar4;
  pcVar9 = pcVar9 + 1;
LAB_2000_28c4:
  uVar12 = CONCAT22(pcVar1,iVar7 + -1);
  if (iVar7 + -1 == 0) goto LAB_2000_28ce;
  goto LAB_2000_28b0;
}



// Function: FUN_2000_2a44 @ 2000:2a44

char * __cdecl16far FUN_2000_2a44(char *param_1,char *param_2)

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



// Function: FUN_2000_2a98 @ 2000:2a98

void __cdecl16far FUN_2000_2a98(char *param_1,char *param_2)

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



// Function: FUN_2000_2ad4 @ 2000:2ad4

int __cdecl16far FUN_2000_2ad4(byte *param_1,char *param_2)

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



// Function: FUN_2000_2afe @ 2000:2afe

uint __cdecl16far FUN_2000_2afe(char *param_1)

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



// Function: FUN_2000_2b50 @ 2000:2b50

char * __cdecl16far FUN_2000_2b50(char *param_1,char *param_2,int param_3)

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



// Function: FUN_2000_2b7a @ 2000:2b7a

uint __cdecl16far FUN_2000_2b7a(char *param_1,char *param_2,int param_3)

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



// Function: thunk_FUN_2000_2c12 @ 2000:2bb6

int __cdecl16far thunk_FUN_2000_2c12(byte *param_1)

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
  if ((bVar2 != 0x2d) && (bVar3 = bVar2, bVar2 != 0x2b)) goto LAB_2000_2c33;
  while( true ) {
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = *pbVar1;
LAB_2000_2c33:
    if ((0x39 < bVar3) || (bVar3 < 0x30)) break;
    iVar4 = iVar4 * 10 + (uint)(byte)(bVar3 - 0x30);
  }
  if (bVar2 == 0x2d) {
    iVar4 = -iVar4;
  }
  return iVar4;
}



// Function: FUN_2000_2bba @ 2000:2bba

undefined2 __cdecl16far FUN_2000_2bba(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 in_DX;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  while (uVar3 = (undefined2)((ulong)param_1 >> 0x10), (*(byte *)(*param_1 + -0x6abb) & 8) != 0) {
    param_1 = (char *)CONCAT22(uVar3,(char *)param_1 + 1);
  }
  uVar1 = FUN_2000_2afe((char *)param_1,uVar3,0,0);
  iVar2 = FUN_2000_6e50((char *)param_1,uVar3,uVar1);
  *(undefined2 *)0xb354 = *(undefined2 *)(iVar2 + 8);
  *(undefined2 *)0xb356 = *(undefined2 *)(iVar2 + 10);
  *(undefined2 *)0xb358 = *(undefined2 *)(iVar2 + 0xc);
  *(undefined2 *)0xb35a = *(undefined2 *)(iVar2 + 0xe);
  return 0xb354;
}



// Function: FUN_2000_2c12 @ 2000:2c12

int __cdecl16far FUN_2000_2c12(byte *param_1)

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
  if ((bVar2 != 0x2d) && (bVar3 = bVar2, bVar2 != 0x2b)) goto LAB_2000_2c33;
  while( true ) {
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = *pbVar1;
LAB_2000_2c33:
    if ((0x39 < bVar3) || (bVar3 < 0x30)) break;
    iVar4 = iVar4 * 10 + (uint)(byte)(bVar3 - 0x30);
  }
  if (bVar2 == 0x2d) {
    iVar4 = -iVar4;
  }
  return iVar4;
}



// Function: FUN_2000_2c68 @ 2000:2c68

void FUN_2000_2c68(void)

{
  FUN_2000_42eb();
  return;
}



// Function: FUN_2000_2c8e @ 2000:2c8e

void __cdecl16far FUN_2000_2c8e(char *param_1,int param_2,undefined4 param_3)

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
    FUN_2000_2a98(pcVar4,uVar6,pcVar4 + 1,uVar6);
  }
  return;
}



// Function: FUN_2000_2d36 @ 2000:2d36

int __cdecl16far FUN_2000_2d36(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined4 local_6;
  
  local_6 = (int *)CONCAT22(*(int *)0x9288,(int *)*(int *)0x9286);
  if ((*(int *)0x9288 != 0 || (int *)*(int *)0x9286 != (int *)0x0) && (param_2 != 0 || param_1 != 0)
     ) {
    uVar1 = FUN_2000_2afe(param_1,param_2);
    while( true ) {
      uVar5 = (undefined2)((ulong)local_6 >> 0x10);
      piVar4 = (int *)local_6;
      if (piVar4[1] == 0 && *local_6 == 0) break;
      uVar2 = FUN_2000_2afe(*local_6,piVar4[1]);
      if (((uVar1 < uVar2) && (*(char *)((int)*(undefined4 *)local_6 + uVar1) == '=')) &&
         (iVar3 = FUN_2000_2b7a(*local_6,piVar4[1],param_1,param_2,uVar1), iVar3 == 0)) {
        return *local_6 + uVar1 + 1;
      }
      local_6 = (int *)CONCAT22(uVar5,piVar4 + 2);
    }
  }
  return 0;
}



// Function: FUN_2000_2dcc @ 2000:2dcc

undefined2 __stdcall16far FUN_2000_2dcc(undefined2 param_1,undefined2 param_2,undefined2 *param_3)

{
  *param_3 = 1;
  return 0;
}



// Function: FUN_2000_2de3 @ 2000:2de3

void __stdcall16far FUN_2000_2de3(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}



// Function: FUN_2000_2df8 @ 2000:2df8

void __stdcall16far FUN_2000_2df8(void)

{
  return;
}



// Function: FUN_2000_2e01 @ 2000:2e01

void __stdcall16far FUN_2000_2e01(undefined2 *param_1,undefined2 param_2)

{
  *param_1 = param_2;
  return;
}



// Function: FUN_2000_2e17 @ 2000:2e17

void __stdcall16far FUN_2000_2e17(void)

{
  return;
}



// Function: FUN_2000_2e20 @ 2000:2e20

undefined2 __stdcall16far FUN_2000_2e20(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return 0;
}



// Function: FUN_2000_2f12 @ 2000:2f12

undefined4 __stdcall16far FUN_2000_2f12(uint param_1,uint param_2,uint param_3,uint param_4)

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



// Function: FUN_2000_2f3e @ 2000:2f3e

int __cdecl16far FUN_2000_2f3e(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar3 = 0;
  for (uVar2 = 0x92fc; uVar2 <= *(uint *)0x94a0; uVar2 = uVar2 + 0xc) {
    iVar1 = FUN_2000_0c16(uVar2);
    if (iVar1 != -1) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}



// Function: FUN_2000_2f64 @ 2000:2f64

undefined2 __cdecl16far FUN_2000_2f64(undefined2 param_1,undefined2 param_2,int *param_3)

{
  int iVar1;
  undefined2 uVar2;
  int in_DX;
  
  iVar1 = FUN_2000_310e(param_1,param_2);
  *param_3 = iVar1;
  ((int *)param_3)[1] = in_DX;
  if ((iVar1 == -1) && (in_DX == -1)) {
    uVar2 = 0xffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_2000_2f92 @ 2000:2f92

char * __cdecl16far FUN_2000_2f92(char *param_1,int param_2,int *param_3)

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
LAB_2000_2ff4:
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
        iVar4 = FUN_2000_10fa(param_3,unaff_DS);
        if (iVar4 == -1) {
          if ((pcVar10 == pcVar9) || ((*(byte *)(param_3 + 5) & 0x20) != 0)) goto LAB_2000_2ff4;
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



// Function: FUN_2000_306e @ 2000:306e

undefined2 __cdecl16far
FUN_2000_306e(int param_1,undefined2 param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  int in_DX;
  undefined2 unaff_DS;
  bool bVar2;
  long lVar3;
  
  if ((((*(byte *)(param_1 + 10) & 0x83) == 0) || (2 < param_5)) || (param_5 < 0)) {
    *(undefined2 *)0x925a = 0x16;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    if (param_5 == 1) {
      uVar1 = FUN_2000_310e(param_1);
      bVar2 = CARRY2(param_3,uVar1);
      param_3 = param_3 + uVar1;
      param_4 = param_4 + in_DX + (uint)bVar2;
      param_5 = 0;
    }
    FUN_2000_1562(param_1);
    if ((*(byte *)(param_1 + 10) & 0x80) != 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    }
    lVar3 = FUN_2000_25f8(0x1000,*(undefined1 *)(param_1 + 0xb),param_3,param_4,param_5);
    if (lVar3 != -1) {
      return 0;
    }
  }
  return 0xffff;
}



// Function: FUN_2000_30ee @ 2000:30ee

void __cdecl16far FUN_2000_30ee(undefined2 param_1,undefined2 param_2,undefined2 *param_3)

{
  FUN_2000_306e(param_1,param_2,*param_3,((undefined2 *)param_3)[1],0);
  return;
}



// Function: FUN_2000_310e @ 2000:310e

int __cdecl16far FUN_2000_310e(int *param_1)

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
  lVar3 = FUN_2000_25f8(0x1000,uVar1,0,0,1);
  local_a = (int)lVar3;
  if (lVar3 < 0) {
LAB_2000_3158:
    local_6 = -1;
  }
  else {
    if (((*(byte *)(param_1 + 5) & 8) == 0) && ((*(byte *)(param_1 + 0x78) & 1) == 0)) {
      return local_a - param_1[2];
    }
    local_6 = *param_1 - param_1[3];
    if ((*(byte *)(param_1 + 5) & 3) == 0) {
      if ((*(byte *)(param_1 + 5) & 0x80) == 0) {
        *(undefined2 *)0x925a = 0x16;
        goto LAB_2000_3158;
      }
    }
    else if ((*(byte *)(uVar1 + 0x926c) & 0x80) != 0) {
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
          if ((*(byte *)(uVar1 + 0x926c) & 0x80) != 0) {
            lVar4 = FUN_2000_25f8(0x1000,uVar1,0,0,2);
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
              FUN_2000_25f8(0x1000,uVar1,lVar3,0);
              local_12 = param_1[0x79];
              if ((*(byte *)(uVar1 + 0x926c) & 4) != 0) {
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



// Function: FUN_2000_32ae @ 2000:32ae

void __cdecl16far FUN_2000_32ae(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 unaff_DS;
  
  bVar2 = *(byte *)(param_1 + 0xb);
  FUN_2000_1562(param_1);
  pbVar1 = (byte *)(bVar2 + 0x926c);
  *pbVar1 = *pbVar1 & 0xfd;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xcf;
  if ((*(byte *)(param_1 + 10) & 0x80) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  }
  FUN_2000_25f8(0x1000,(uint)bVar2,0,0,0);
  return;
}



// Function: FUN_2000_32f2 @ 2000:32f2

undefined2 __cdecl16far FUN_2000_32f2(undefined2 param_1,undefined2 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  *(undefined1 *)0xa642 = 0x42;
  *(undefined2 *)0xa63e = param_1;
  *(undefined2 *)0xa640 = param_2;
  *(undefined2 *)0xa638 = param_1;
  *(undefined2 *)0xa63a = param_2;
  *(undefined2 *)0xa63c = 0x7fff;
  uVar3 = FUN_2000_1fd6(0x1000,0xa638);
  piVar1 = (int *)0xa63c;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    FUN_2000_1196(0,0xa638);
  }
  else {
    puVar2 = (undefined1 *)*(undefined4 *)0xa638;
    *(int *)0xa638 = *(int *)0xa638 + 1;
    *puVar2 = 0;
  }
  return uVar3;
}



// Function: FUN_2000_335c @ 2000:335c

void __cdecl16far FUN_2000_335c(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  *(undefined1 *)0xa64e = 0x49;
  *(undefined2 *)0xa64a = param_1;
  *(undefined2 *)0xa64c = param_2;
  *(undefined2 *)0xa644 = param_1;
  *(undefined2 *)0xa646 = param_2;
  uVar1 = FUN_2000_2afe(param_1,param_2);
  *(undefined2 *)0xa648 = uVar1;
  FUN_2000_1656(0x1000,0xa644);
  return;
}



// Function: FUN_2000_33a8 @ 2000:33a8

undefined1 __cdecl16far FUN_2000_33a8(undefined4 param_1)

{
  return *(undefined1 *)((int)param_1 + 0xb);
}



// Function: FUN_2000_33b6 @ 2000:33b6

undefined2 __cdecl16far FUN_2000_33b6(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  *(undefined1 *)0xa65a = 0x42;
  *(undefined2 *)0xa656 = param_1;
  *(undefined2 *)0xa658 = param_2;
  *(undefined2 *)0xa650 = param_1;
  *(undefined2 *)0xa652 = param_2;
  *(undefined2 *)0xa654 = param_3;
  uVar3 = FUN_2000_1fd6(0x1000,0xa650);
  piVar1 = (int *)0xa654;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    FUN_2000_1196(0,0xa650);
  }
  else {
    puVar2 = (undefined1 *)*(undefined4 *)0xa650;
    *(int *)0xa650 = *(int *)0xa650 + 1;
    *puVar2 = 0;
  }
  return uVar3;
}



// Function: FUN_2000_3420 @ 2000:3420

undefined2 __cdecl16far FUN_2000_3420(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if ((param_1 < 0) || (*(int *)0x926a <= param_1)) {
    *(undefined2 *)0x925a = 9;
    uVar1 = 0xffff;
  }
  else if (CONCAT11(*(undefined1 *)0x9263,*(undefined1 *)0x9262) < 0x31e) {
    uVar1 = 0;
  }
  else {
    if ((*(byte *)(param_1 + -0x6d94) & 1) != 0) {
      iVar2 = FUN_2000_5872(0x1000,param_1);
      if (iVar2 == 0) {
        return 0;
      }
      *(int *)0x9268 = iVar2;
    }
    *(undefined2 *)0x925a = 9;
    uVar1 = 0xffff;
  }
  return uVar1;
}



// Function: FUN_2000_347a @ 2000:347a

undefined2 __cdecl16far FUN_2000_347a(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  long lVar2;
  long lVar3;
  
  if ((param_1 < 0) || (*(int *)0x926a <= param_1)) {
    *(undefined2 *)0x925a = 9;
    uVar1 = 0xffff;
  }
  else {
    lVar2 = FUN_2000_25f8(0x1000,param_1,0,0,1);
    if (lVar2 == -1) {
      uVar1 = 0xffff;
    }
    else {
      lVar3 = FUN_2000_25f8(0x1000,param_1,0,0,2);
      uVar1 = (undefined2)lVar3;
      if (lVar3 != lVar2) {
        FUN_2000_25f8(0x1000,param_1,lVar2,0);
      }
    }
  }
  return uVar1;
}



// Function: FUN_2000_3500 @ 2000:3500

undefined2 * __cdecl16far FUN_2000_3500(uint param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  
  iVar4 = (int)((ulong)param_1 * (ulong)param_2 >> 0x10);
  if (iVar4 == 0) {
    puVar2 = (undefined2 *)FUN_2000_70fd();
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



// Function: FUN_2000_352e @ 2000:352e

void __cdecl16far FUN_2000_352e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// Function: FUN_2000_3540 @ 2000:3540

undefined2 __cdecl16far FUN_2000_3540(undefined4 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined1 in_CF;
  undefined4 uVar10;
  
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  iVar6 = (int)param_1;
  uVar5 = *(undefined2 *)(iVar6 + 2);
  uVar4 = *(undefined2 *)(iVar6 + 4);
  uVar1 = *(undefined2 *)(iVar6 + 8);
  uVar8 = *(undefined2 *)(iVar6 + 10);
  pcVar2 = (code *)swi(0x21);
  uVar10 = (*pcVar2)();
  uVar3 = (undefined2)uVar10;
  uVar9 = (undefined2)((ulong)param_2 >> 0x10);
  puVar7 = (undefined2 *)param_2;
  *param_2 = uVar3;
  puVar7[1] = uVar5;
  puVar7[2] = uVar4;
  puVar7[3] = (int)((ulong)uVar10 >> 0x10);
  puVar7[4] = uVar1;
  puVar7[5] = uVar8;
  if ((bool)in_CF) {
    FUN_2000_0be0();
    uVar3 = *param_2;
  }
  puVar7[6] = (uint)(byte)in_CF;
  return uVar3;
}



// Function: FUN_2000_3592 @ 2000:3592

undefined2 __cdecl16far FUN_2000_3592(undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

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
    FUN_2000_0be0(unaff_SI);
    uVar4 = *param_2;
  }
  puVar8[6] = (uint)(byte)in_CF;
  return uVar4;
}



// Function: FUN_2000_3612 @ 2000:3612

void __cdecl16far FUN_2000_3612(undefined2 *param_1)

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



// Function: FUN_2000_3632 @ 2000:3632

undefined1 __cdecl16far FUN_2000_3632(undefined2 param_1)

{
  undefined1 uVar1;
  
  uVar1 = in(param_1);
  return uVar1;
}



// Function: FUN_2000_364e @ 2000:364e

char * FUN_2000_364e(int param_1,char *param_2)

{
  undefined2 unaff_DS;
  
  *param_2 = (char)(param_1 / 10) + '0';
  param_2[1] = (char)(param_1 % 10) + '0';
  return param_2 + 2;
}



// Function: FUN_2000_367c @ 2000:367c

undefined2 __cdecl16far FUN_2000_367c(undefined2 *param_1)

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
  puVar3 = (undefined1 *)0xa65c;
  do {
    puVar5 = puVar3;
    *puVar5 = *(undefined1 *)(iVar1 * 3 + local_8 + -0x69b8);
    puVar5[4] = *(undefined1 *)(iVar2 * 3 + local_8 + -0x69a2);
    local_8 = local_8 + 1;
    puVar3 = puVar5 + 1;
  } while (local_8 < 3);
  puVar5[1] = 0x20;
  puVar5[5] = 0x20;
  puVar3 = (undefined1 *)FUN_2000_364e(puVar4[3],puVar5 + 6);
  *puVar3 = 0x20;
  puVar3 = (undefined1 *)FUN_2000_364e(puVar4[2],puVar3 + 1);
  *puVar3 = 0x3a;
  puVar3 = (undefined1 *)FUN_2000_364e(puVar4[1],puVar3 + 1);
  *puVar3 = 0x3a;
  puVar3 = (undefined1 *)FUN_2000_364e(*param_1,puVar3 + 1);
  *puVar3 = 0x20;
  iVar1 = puVar4[5];
  uVar6 = FUN_2000_364e((iVar1 + 0x76c) / 100,puVar3 + 1);
  puVar3 = (undefined1 *)FUN_2000_364e((iVar1 + 0x76c) % 100,uVar6);
  *puVar3 = 10;
  puVar3[1] = 0;
  return 0xa65c;
}



// Function: FUN_2000_3750 @ 2000:3750

void __cdecl16far FUN_2000_3750(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
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
  
  FUN_2000_3b7e();
  uVar1 = FUN_2000_5a00(*(undefined2 *)0x96ce,*(undefined2 *)0x96d0,0x3c,0);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined2 *)param_1;
  puVar3[3] = uVar1;
  FUN_2000_597a(&local_e);
  FUN_2000_59aa(&local_12);
  if ((local_12 == 0) && (local_11 == '\0')) {
    FUN_2000_597a(&local_e);
  }
  local_4 = local_c - 0x7bc;
  local_1a = local_c + -0x76c;
  local_1e = (uint)local_e;
  local_6 = (uint)local_d;
  local_1c = local_6 - 1;
  local_16 = local_1e + *(int *)(local_1c * 2 + -0x6962);
  if (((local_4 & 3) == 0) && (2 < local_d)) {
    local_16 = local_16 + 1;
  }
  local_20 = (uint)local_12;
  puVar3[2] = (uint)local_f * 10;
  local_8 = local_1e;
  uVar5 = FUN_2000_3e9c(0x1000,local_4,local_6,local_1e,local_12,local_11,local_10);
  *param_1 = (int)uVar5;
  puVar3[1] = (int)((ulong)uVar5 >> 0x10);
  if ((*(int *)0x96d2 != 0) && (iVar2 = FUN_2000_3cda(local_24), iVar2 != 0)) {
    puVar3[4] = 1;
    return;
  }
  puVar3[4] = 0;
  return;
}



// Function: FUN_2000_3862 @ 2000:3862

/* WARNING: Removing unreachable block (ram,0x000238cb) */

undefined2 __cdecl16far FUN_2000_3862(undefined2 *param_1)

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
    iVar5 = FUN_2000_5a00(uVar4,iVar6,0x1f80,0x786);
    lVar10 = FUN_2000_5a9a(iVar5,iVar5 >> 0xf,uVar12,uVar13);
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
    *(int *)0x96c2 = iVar6;
    iVar6 = FUN_2000_5a00(lVar10,0x5180,1);
    *(int *)0x96c6 = iVar6;
    lVar11 = FUN_2000_5a9a(iVar6,iVar6 >> 0xf,0xae80,0xfffe);
    if (bVar3) {
      local_c = -0x697c;
    }
    else {
      local_c = -0x6962;
    }
    iVar6 = 1;
    while (iVar5 = *(int *)0x96c6, *(int *)(iVar6 * 2 + local_c) < iVar5) {
      iVar6 = iVar6 + 1;
    }
    *(int *)0x96c0 = iVar6 + -1;
    *(int *)0x96be = iVar5 - *(int *)((iVar6 + -1) * 2 + local_c);
    iVar6 = FUN_2000_5a00(*param_1,((undefined2 *)param_1)[1],0x5180,1);
    *(int *)0x96c4 = (iVar6 + 4) % 7;
    iVar6 = FUN_2000_5a00(lVar11 + lVar10,0xe10,0);
    *(int *)0x96bc = iVar6;
    lVar10 = (long)iVar6 * -0xe10 + lVar11 + lVar10;
    iVar6 = FUN_2000_5a00(lVar10,0x3c,0);
    *(int *)0x96ba = iVar6;
    *(int *)0x96b8 = iVar6 * -0x3c + (int)lVar10;
    *(undefined2 *)0x96c8 = 0;
    uVar4 = 0x96b8;
  }
  return uVar4;
}



// Function: FUN_2000_3a02 @ 2000:3a02

int __cdecl16far FUN_2000_3a02(uint *param_1)

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
    FUN_2000_3b7e();
    uVar1 = *param_1 - *(uint *)0x96ce;
    iVar4 = (((uint *)param_1)[1] - *(int *)0x96d0) - (uint)(*param_1 < *(uint *)0x96ce);
    if (iVar4 < 0) {
      local_6 = uVar1 + 0x5180;
      iVar2 = iVar4 + 1 + (uint)(0xae7f < uVar1);
      if (-1 < iVar2) {
        local_4 = iVar2;
        iVar4 = FUN_2000_3862(&local_6);
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
      iVar2 = FUN_2000_3862(&local_6);
      *(int *)(iVar2 + 6) = *(int *)(iVar2 + 6) + 1;
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      *(int *)(iVar2 + 0xe) = *(int *)(iVar2 + 0xe) + 1;
      return iVar2;
    }
    local_6 = uVar1;
    local_4 = iVar4;
    iVar2 = FUN_2000_3862(&local_6);
    if (*(int *)0x96d2 == 0) {
      return iVar2;
    }
    iVar3 = FUN_2000_3cda(iVar2,iVar4,iVar2,iVar4);
    if (iVar3 == 0) {
      return iVar2;
    }
    bVar6 = 0xf1ef < local_6;
    local_6 = local_6 + 0xe10;
    local_4 = local_4 + (uint)bVar6;
    if (-1 < local_4) {
      iVar2 = FUN_2000_3862(&local_6);
      *(undefined2 *)(iVar2 + 0x10) = 1;
      return iVar2;
    }
  }
  return 0;
}



// Function: FUN_2000_3b28 @ 2000:3b28

void __cdecl16far FUN_2000_3b28(undefined2 *param_1)

{
  code *pcVar1;
  uint in_CX;
  uint uVar2;
  uint uVar3;
  uint extraout_DX;
  uint extraout_DX_00;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  uVar2 = in_CX;
  uVar5 = extraout_DX;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  uVar3 = uVar2;
  (*pcVar1)(uVar2 >> 8);
  uVar4 = extraout_DX_00;
  if ((uVar5 != extraout_DX_00) && (uVar4 = extraout_DX_00, (char)uVar2 == '\x17')) {
    uVar3 = in_CX;
    uVar4 = uVar5;
  }
  uVar6 = FUN_2000_3e9c(0x1000,uVar3 - 0x7bc,uVar4 >> 8);
  if (param_1._2_2_ != 0) {
    ((undefined2 *)param_1)[1] = (int)((ulong)uVar6 >> 0x10);
    *param_1 = (int)uVar6;
  }
  return;
}



// Function: FUN_2000_3b7e @ 2000:3b7e

void __cdecl16far FUN_2000_3b7e(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)0xa676 == 0) {
    FUN_2000_3b90();
    *(int *)0xa676 = *(int *)0xa676 + 1;
  }
  return;
}



// Function: FUN_2000_3b90 @ 2000:3b90

void __cdecl16far FUN_2000_3b90(void)

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
  
  pcVar5 = (char *)FUN_2000_2d36(0x96ca);
  local_6 = (char *)CONCAT22(in_DX,pcVar5);
  if ((in_DX != 0 || pcVar5 != (char *)0x0) && (*local_6 != '\0')) {
    FUN_2000_2b50(*(undefined2 *)0x96dc,*(undefined2 *)0x96de,pcVar5,in_DX,3);
    local_6 = (char *)CONCAT22(in_DX,pcVar5 + 3);
    cVar4 = *local_6;
    if (cVar4 == '-') {
      local_6 = (char *)CONCAT22(in_DX,pcVar5 + 4);
    }
    uVar8 = 0;
    uVar12 = 0;
    uVar11 = 0xe10;
    uVar6 = thunk_FUN_2000_2c12((char *)local_6,in_DX,0xe10,0);
    uVar10 = FUN_2000_5a9a(uVar6,uVar8,uVar11,uVar12);
    *(undefined2 *)0x96ce = (int)uVar10;
    *(undefined2 *)0x96d0 = (int)((ulong)uVar10 >> 0x10);
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
      uVar6 = thunk_FUN_2000_2c12((char *)local_6,uVar6,0x3c,0);
      uVar10 = FUN_2000_5a9a(uVar6,uVar8,uVar11,uVar12);
      iVar9 = (int)((ulong)uVar10 >> 0x10);
      puVar1 = (uint *)0x96ce;
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + (uint)uVar10;
      *(int *)0x96d0 = *(int *)0x96d0 + iVar9 + (uint)CARRY2(uVar3,(uint)uVar10);
      while( true ) {
        uVar6 = (undefined2)((ulong)local_6 >> 0x10);
        if ((*local_6 < '0') || ('9' < *local_6)) break;
        local_6 = (char *)CONCAT22(uVar6,(char *)local_6 + 1);
      }
      if (*local_6 == ':') {
        local_6._0_2_ = (char *)local_6 + 1;
        local_6 = (char *)CONCAT22(uVar6,(char *)local_6);
        uVar7 = thunk_FUN_2000_2c12((char *)local_6,uVar6);
        puVar1 = (uint *)0x96ce;
        uVar3 = *puVar1;
        *puVar1 = *puVar1 + uVar7;
        *(int *)0x96d0 = *(int *)0x96d0 + iVar9 + (uint)CARRY2(uVar3,uVar7);
        while (('/' < *local_6 && (*local_6 < ':'))) {
          local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + 1);
        }
      }
    }
    if (cVar4 == '-') {
      piVar2 = (int *)0x96ce;
      iVar9 = *piVar2;
      *piVar2 = -*piVar2;
      *(int *)0x96d0 = *(int *)0x96d0 + (uint)(iVar9 != 0);
      *(int *)0x96d0 = -*(int *)0x96d0;
    }
    cVar4 = *local_6;
    *(int *)0x96d2 = (int)cVar4;
    if (cVar4 == 0) {
      *(undefined1 *)*(undefined4 *)0x96e0 = 0;
    }
    else {
      FUN_2000_2b50(*(undefined2 *)0x96e0,*(undefined2 *)0x96e2,(char *)local_6,
                    (int)((ulong)local_6 >> 0x10),3);
    }
  }
  return;
}



// Function: FUN_2000_3cda @ 2000:3cda

undefined2 __cdecl16far FUN_2000_3cda(undefined4 param_1)

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
  goto LAB_2000_3da1;
  if ((*(int *)(iVar4 + 8) < 4) || (8 < *(int *)(iVar4 + 8))) {
    uVar1 = *(uint *)(iVar4 + 10);
    if (((int)uVar1 < 0x57) || (*(int *)(iVar4 + 8) != 3)) {
      local_4 = *(int *)(*(int *)(iVar4 + 8) * 2 + -0x6960);
    }
    else {
      local_4 = *(int *)(*(int *)(iVar4 + 8) * 2 + -0x6962) + 7;
    }
    if ((uVar1 & 3) == 0) {
      local_4 = local_4 + 1;
    }
    uVar1 = (uVar1 - 0x46) * 0x16d + ((int)(uVar1 - 1) >> 2) + local_4;
    iVar2 = FUN_2000_5acc(uVar1 - 0xd,((int)uVar1 >> 0xf) - (uint)(uVar1 < 0xd),7,0);
    iVar3 = -(iVar2 - local_4);
    if (*(int *)(iVar4 + 8) == 3) {
      if ((iVar3 < *(int *)(iVar4 + 0xe)) ||
         ((-*(int *)(iVar4 + 0xe) == iVar2 - local_4 && (1 < *(int *)(iVar4 + 4)))))
      goto LAB_2000_3d8c;
    }
    else if ((*(int *)(iVar4 + 0xe) < iVar3) ||
            ((*(int *)(iVar4 + 0xe) == iVar3 && (*(int *)(iVar4 + 4) < 1)))) goto LAB_2000_3d8c;
LAB_2000_3da1:
    uVar5 = 0;
  }
  else {
LAB_2000_3d8c:
    uVar5 = 1;
  }
  return uVar5;
}



// Function: FUN_2000_3da8 @ 2000:3da8

undefined2 __cdecl16far FUN_2000_3da8(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  int *piVar1;
  int in_DX;
  undefined2 unaff_DS;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  int local_16;
  uint local_14;
  uint local_12;
  undefined2 local_a;
  int local_8;
  int local_6;
  uint local_4;
  
  local_4 = 0;
  if (param_3._2_2_ == 0 && (int)param_3 == 0) {
    FUN_2000_3b28(&local_a);
  }
  else {
    local_a = *(undefined2 *)((int)param_3 + 4);
    in_DX = *(int *)((int)param_3 + 6);
    local_8 = in_DX;
  }
  piVar1 = (int *)FUN_2000_3a02(&local_a);
  local_1c = (int *)CONCAT22(in_DX,piVar1);
  if (in_DX == 0 && piVar1 == (int *)0x0) {
    *(undefined2 *)0x925a = 0x16;
  }
  else {
    local_16 = FUN_2000_2694(param_1,param_2,0x8001);
    if (-1 < local_16) {
      local_12 = ((byte)((char)piVar1[4] + 1) & 0xf) << 5 | (piVar1[5] + 0x30) * 0x200 |
                 *(byte *)(piVar1 + 3) & 0x1f;
      local_14 = local_4 | (*(byte *)(piVar1 + 1) & 0x3f) << 5 | piVar1[2] << 0xb |
                           *local_1c / 2 & 0x1fU;
      local_18 = 1;
      local_17 = 0x57;
      local_6 = local_16;
      local_4 = local_14;
      FUN_2000_3540(&local_18);
      FUN_2000_25d8(0x1000,local_6);
      return 0;
    }
  }
  return 0xffff;
}



// Function: FUN_2000_3e9c @ 2000:3e9c

undefined4
FUN_2000_3e9c(undefined2 param_1,uint param_2,int param_3,uint param_4,uint param_5,uint param_6,
             uint param_7)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_DS;
  bool bVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint uStack_18;
  int iStack_16;
  undefined1 auStack_14 [4];
  uint uStack_10;
  int iStack_c;
  int iStack_a;
  int iStack_6;
  
  iVar2 = *(int *)(param_3 * 2 + -0x6964);
  if (((param_2 & 3) == 0) && (2 < param_3)) {
    iVar2 = iVar2 + 1;
  }
  FUN_2000_3b7e();
  uVar8 = 0;
  uVar7 = 0x3c;
  uVar6 = 0;
  uVar5 = 0x3c;
  uVar1 = (int)(param_2 + 3) >> 2;
  uVar4 = FUN_2000_5a9a((long)(int)param_2 * 0x16d +
                        CONCAT22(((int)(param_2 + 3) >> 0xf) + ((int)param_4 >> 0xf) +
                                 (uint)CARRY2(uVar1,param_4),uVar1 + param_4) + (long)iVar2 + 0xe44,
                        0x18,0);
  uVar4 = FUN_2000_5a9a((uint)uVar4 + param_5,
                        (int)((ulong)uVar4 >> 0x10) + ((int)param_5 >> 0xf) +
                        (uint)CARRY2((uint)uVar4,param_5),uVar5,uVar6);
  uVar4 = FUN_2000_5a9a((uint)uVar4 + param_6,
                        (int)((ulong)uVar4 >> 0x10) + ((int)param_6 >> 0xf) +
                        (uint)CARRY2((uint)uVar4,param_6),uVar7,uVar8);
  uVar1 = (uint)uVar4 + param_7;
  uStack_18 = uVar1 + *(uint *)0x96ce;
  iStack_16 = (int)((ulong)uVar4 >> 0x10) + ((int)param_7 >> 0xf) +
              (uint)CARRY2((uint)uVar4,param_7) + *(int *)0x96d0 +
              (uint)CARRY2(uVar1,*(uint *)0x96ce);
  iStack_6 = param_4 + iVar2;
  iStack_a = param_2 + 0x50;
  iStack_c = param_3 + -1;
  uStack_10 = param_5;
  if (*(int *)0x96d2 != 0) {
    iVar2 = FUN_2000_3cda(auStack_14);
    if (iVar2 != 0) {
      bVar3 = uStack_18 < 0xe10;
      uStack_18 = uStack_18 - 0xe10;
      iStack_16 = iStack_16 - (uint)bVar3;
    }
  }
  return CONCAT22(iStack_16,uStack_18);
}



// Function: FUN_2000_3ee8 @ 2000:3ee8

undefined4 FUN_2000_3ee8(void)

{
  uint *puVar1;
  int in_AX;
  uint uVar2;
  int iVar3;
  uint in_CX;
  uint uVar4;
  uint uVar5;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  uint unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  long lVar6;
  
  uVar2 = (in_AX >> 2) + *(uint *)(unaff_BP + -0x1a);
  uVar4 = in_CX + uVar2;
  uVar5 = uVar4 + unaff_DI;
  FUN_2000_5a9a(uVar5 + 0xe44,
                in_BX + (in_AX >> 0xf) + *(int *)(unaff_BP + -0x18) +
                        (uint)CARRY2(in_AX >> 2,*(uint *)(unaff_BP + -0x1a)) +
                (uint)CARRY2(in_CX,uVar2) + ((int)unaff_DI >> 0xf) + (uint)CARRY2(uVar4,unaff_DI) +
                (uint)(0xf1bb < uVar5));
  FUN_2000_5a9a();
  lVar6 = FUN_2000_5a9a();
  lVar6 = lVar6 + *(int *)(unaff_BP + 0x10);
  uVar4 = (uint)lVar6;
  uVar2 = *(uint *)0x96ce;
  iVar3 = *(int *)0x96d0;
  *(int *)(unaff_BP + -0x16) = uVar4 + *(uint *)0x96ce;
  *(int *)(unaff_BP + -0x14) = (int)((ulong)lVar6 >> 0x10) + iVar3 + (uint)CARRY2(uVar4,uVar2);
  *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + 10) + unaff_DI;
  *(int *)(unaff_BP + -8) = unaff_SI + 0x50;
  *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + 8) + -1;
  *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)(unaff_BP + 0xc);
  if (*(int *)0x96d2 != 0) {
    iVar3 = FUN_2000_3cda();
    if (iVar3 != 0) {
      puVar1 = (uint *)(unaff_BP + -0x16);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 0xe10;
      *(int *)(unaff_BP + -0x14) = *(int *)(unaff_BP + -0x14) - (uint)(uVar2 < 0xe10);
    }
  }
  return CONCAT22(*(undefined2 *)(unaff_BP + -0x14),*(undefined2 *)(unaff_BP + -0x16));
}



// Function: FUN_2000_3f37 @ 2000:3f37

undefined2 __cdecl16far FUN_2000_3f37(void)

{
  uint *puVar1;
  uint uVar2;
  uint in_AX;
  int iVar3;
  uint in_CX;
  int in_DX;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  uVar2 = *(uint *)0x96ce;
  iVar3 = *(int *)0x96d0;
  *(int *)(unaff_BP + -0x16) = in_CX + in_AX + *(uint *)0x96ce;
  *(int *)(unaff_BP + -0x14) =
       in_DX + ((int)in_AX >> 0xf) + (uint)CARRY2(in_CX,in_AX) + iVar3 +
       (uint)CARRY2(in_CX + in_AX,uVar2);
  *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + 10) + unaff_DI;
  *(int *)(unaff_BP + -8) = unaff_SI + 0x50;
  *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + 8) + -1;
  *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)(unaff_BP + 0xc);
  if (*(int *)0x96d2 != 0) {
    iVar3 = FUN_2000_3cda(unaff_BP + -0x12);
    if (iVar3 != 0) {
      puVar1 = (uint *)(unaff_BP + -0x16);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 0xe10;
      *(int *)(unaff_BP + -0x14) = *(int *)(unaff_BP + -0x14) - (uint)(uVar2 < 0xe10);
    }
  }
  return *(undefined2 *)(unaff_BP + -0x16);
}



// Function: FUN_2000_3f94 @ 2000:3f94

int * __cdecl16far FUN_2000_3f94(int *param_1)

{
  code *pcVar1;
  char in_CL;
  char in_CH;
  char extraout_DH;
  int *piVar2;
  undefined2 uVar3;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  piVar2 = (int *)param_1;
  *(undefined1 *)(piVar2 + 4) = 0;
  *(undefined1 *)(piVar2 + 1) = 0x3a;
  *(undefined1 *)((int)piVar2 + 5) = 0x3a;
  *param_1 = CONCAT11((char)((uint)(int)in_CH % 10),(char)((uint)(int)in_CH / 10)) + 0x3030;
  *(int *)((int)piVar2 + 3) =
       CONCAT11((char)((uint)(int)in_CL % 10),(char)((uint)(int)in_CL / 10)) + 0x3030;
  piVar2[3] = CONCAT11((char)((uint)(int)extraout_DH % 10),(char)((uint)(int)extraout_DH / 10)) +
              0x3030;
  return piVar2;
}



// Function: FUN_2000_3fd4 @ 2000:3fd4

char * __cdecl16far FUN_2000_3fd4(char *param_1,char param_2)

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



// Function: FUN_2000_4006 @ 2000:4006

int FUN_2000_4006(undefined2 param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar6 = (byte *)param_3;
  pbVar5 = (byte *)param_2;
  bVar3 = 0xff;
  do {
    do {
      cVar4 = '\0';
      if (bVar3 == 0) goto LAB_2000_4045;
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
LAB_2000_4045:
  return (int)cVar4;
}



// Function: FUN_2000_400c @ 2000:400c

int __cdecl16far FUN_2000_400c(void)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  int unaff_BP;
  byte *pbVar6;
  undefined2 unaff_SS;
  
  pbVar6 = (byte *)(byte *)*(undefined4 *)(unaff_BP + 10);
  pbVar5 = (byte *)(byte *)*(undefined4 *)(unaff_BP + 6);
  bVar3 = 0xff;
  do {
    do {
      cVar4 = '\0';
      if (bVar3 == 0) goto LAB_2000_4045;
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
LAB_2000_4045:
  return (int)cVar4;
}



// Function: FUN_2000_404c @ 2000:404c

char * FUN_2000_404c(undefined2 param_1,char *param_2,char param_3)

{
  char *pcVar1;
  uint uVar2;
  undefined2 in_DX;
  char *pcVar3;
  undefined2 uVar4;
  bool bVar5;
  
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar3 = (char *)param_2;
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar3 = pcVar3 + -1;
  bVar5 = param_3 == '\0';
  if (bVar5) {
    if (*pcVar3 == '\0') {
      pcVar3 = (char *)FUN_2000_4075();
      return (char *)CONCAT22(in_DX,pcVar3);
    }
  }
  else {
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + -1;
      bVar5 = param_3 == *pcVar1;
    } while (!bVar5);
    if (!bVar5) {
      pcVar3 = (char *)0x0;
      uVar4 = 0;
      goto LAB_2000_407a;
    }
  }
  pcVar3 = pcVar3 + 1;
LAB_2000_407a:
  return (char *)CONCAT22(uVar4,pcVar3);
}



// Function: FUN_2000_406f @ 2000:406f

undefined2 __cdecl16far FUN_2000_406f(void)

{
  return 0;
}



// Function: FUN_2000_4075 @ 2000:4075

int __cdecl16far FUN_2000_4075(void)

{
  int unaff_DI;
  
  return unaff_DI + 1;
}



// Function: FUN_2000_4080 @ 2000:4080

char * __cdecl16far FUN_2000_4080(char *param_1)

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



// Function: FUN_2000_40a4 @ 2000:40a4

byte * __cdecl16far FUN_2000_40a4(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined2 unaff_SS;
  byte local_22 [32];
  
  pbVar4 = (byte *)param_2;
  pbVar5 = local_22;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar2 = pbVar5;
    pbVar5 = pbVar5 + 2;
    pbVar2[0] = 0;
    pbVar2[1] = 0;
  }
  while( true ) {
    pbVar2 = pbVar4;
    pbVar4 = pbVar4 + 1;
    bVar1 = *pbVar2;
    if (bVar1 == 0) break;
    local_22[bVar1 >> 3] = local_22[bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  pbVar5 = (byte *)param_1;
  do {
    pbVar4 = pbVar5;
    bVar1 = *pbVar4;
    if (bVar1 == 0) {
      return (byte *)0x0;
    }
    pbVar5 = pbVar4 + 1;
  } while (('\x01' << (bVar1 & 7) & local_22[bVar1 >> 3]) == 0);
  return pbVar4;
}



// Function: FUN_2000_4102 @ 2000:4102

char * __cdecl16far FUN_2000_4102(char *param_1,char *param_2)

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
LAB_2000_4163:
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
        if (!bVar10) goto LAB_2000_4163;
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



// Function: FUN_2000_416e @ 2000:416e

undefined2 * __cdecl16far FUN_2000_416e(undefined2 *param_1,undefined2 *param_2,uint param_3)

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
    lVar15 = FUN_2000_2f12(puVar10,iVar13,puVar8,iVar14);
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



// Function: FUN_2000_4238 @ 2000:4238

undefined2 * __cdecl16far FUN_2000_4238(undefined2 *param_1,undefined2 *param_2,int param_3)

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



// Function: FUN_2000_4296 @ 2000:4296

undefined2 * __cdecl16far FUN_2000_4296(undefined2 *param_1,undefined1 param_2,uint param_3)

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



// Function: FUN_2000_42eb @ 2000:42eb

byte * __cdecl16far FUN_2000_42eb(void)

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



// Function: FUN_2000_4350 @ 2000:4350

void __cdecl16near FUN_2000_4350(char *param_1,char *param_2,int param_3)

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
    if ((*param_1 == '\0') || (*param_1 == ';')) goto LAB_2000_43a3;
    cVar1 = *param_1;
    param_1 = (char *)CONCAT22(uVar3,(char *)param_1 + 1);
    *param_2 = cVar1;
    uVar2 = (ulong)param_2 >> 0x10;
    param_2 = (char *)CONCAT22((int)uVar2,(char *)param_2 + 1);
  }
LAB_2000_43ac:
  *param_2 = '\0';
  return;
LAB_2000_43a3:
  while (*(char *)param_1 == ';') {
    param_1 = (char *)ZEXT24((char *)param_1 + 1);
  }
  goto LAB_2000_43ac;
}



// Function: FUN_2000_43ca @ 2000:43ca

undefined2 __cdecl16far FUN_2000_43ca(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  uVar2 = 0xffff;
  puVar1 = (undefined2 *)*(int *)0x96e4;
  if (puVar1 != (undefined2 *)0xa70c) {
    *(int *)0x96e4 = *(int *)0x96e4 + 4;
    puVar1[1] = param_2;
    *puVar1 = param_1;
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_2000_43fc @ 2000:43fc

void __cdecl16far
FUN_2000_43fc(char *param_1,char *param_2,undefined1 *param_3,undefined4 param_4,undefined1 *param_5
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
      FUN_2000_2b50((undefined1 *)param_3,param_3._2_2_,(char *)param_1,param_1._2_2_,iVar3);
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
      FUN_2000_2b50((int)param_4,param_4._2_2_,(char *)param_1,param_1._2_2_,iVar3);
      *(undefined1 *)((int)param_4 + iVar3) = 0;
    }
    if (param_5._2_2_ == 0 && (undefined1 *)param_5 == (undefined1 *)0x0) {
      return;
    }
    iVar3 = (int)pcVar1 - (int)local_a;
    if (0xff < iVar3) {
      iVar3 = 0xff;
    }
    FUN_2000_2b50((undefined1 *)param_5,param_5._2_2_,local_a,local_8,iVar3);
    ((undefined1 *)param_5)[iVar3] = 0;
    return;
  }
  if (param_4._2_2_ != 0 || (int)param_4 != 0) {
    iVar3 = (int)pcVar1 - (int)(char *)param_1;
    if (0xff < iVar3) {
      iVar3 = 0xff;
    }
    FUN_2000_2b50((int)param_4,param_4._2_2_,(char *)param_1,param_1._2_2_,iVar3);
    *(undefined1 *)((int)param_4 + iVar3) = 0;
  }
  if (param_5._2_2_ != 0 || (undefined1 *)param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  return;
}



// Function: FUN_2000_45b8 @ 2000:45b8

void __cdecl16far
FUN_2000_45b8(char *param_1,char *param_2,char *param_3,char *param_4,int param_5,char *param_6)

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



// Function: FUN_2000_46aa @ 2000:46aa

uint __cdecl16far
FUN_2000_46aa(int *param_1,int *param_2,uint param_3,int *param_4,uint *param_5,undefined1 *param_6,
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
    param_2 = (int *)*(undefined2 *)0x9286;
    in_DX = *(uint *)0x9288;
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
      iVar5 = FUN_2000_2afe(*piVar4,piVar9[1]);
      uVar10 = uVar10 + iVar5 + 1;
    }
  }
  if (*(int *)0x96ea == 0) {
    local_10 = 0;
  }
  else {
    for (local_10 = *(int *)0x926a; (local_10 != 0 && (*(char *)(local_10 + -0x6d95) == '\0'));
        local_10 = local_10 + -1) {
    }
  }
  if (local_10 != 0) {
    uVar10 = uVar10 + (local_10 + 7) * 2;
  }
  if (param_8 != 0 || param_7 != 0) {
    iVar5 = FUN_2000_2afe(param_7,param_8);
    uVar10 = uVar10 + iVar5 + 3;
  }
  if (uVar10 + 1 < 0x8000) {
    uVar12 = *(undefined2 *)0x9520;
    *(undefined2 *)0x9520 = 0x10;
    iVar5 = FUN_2000_70fd(uVar10 + 0x10);
    if (in_DX != 0 || iVar5 != 0) {
      *(undefined2 *)0x9520 = uVar12;
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
          uVar6 = FUN_2000_2a98((char *)local_14,local_14._2_2_,*local_a,piVar9[1],0);
          iVar5 = FUN_2000_3fd4(uVar6,param_3);
          local_14 = (char *)CONCAT22(param_3,(char *)(iVar5 + 1));
          local_a = (int *)CONCAT22(uVar13,piVar9 + 2);
        }
      }
      if (local_10 != 0) {
        uVar6 = 0;
        uVar13 = FUN_2000_2a98((char *)local_14,local_14._2_2_,0x923e);
        pcVar7 = (char *)FUN_2000_3fd4(uVar13,in_DX,uVar6);
        local_14 = (char *)CONCAT22(in_DX,pcVar7);
        iVar5 = 0;
        while( true ) {
          pcVar2 = local_14;
          if (local_10 == 0) break;
          bVar1 = *(byte *)(iVar5 + -0x6d94);
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
        FUN_2000_2a98((char *)local_14 + 3,uVar13,param_7,param_8);
      }
      puVar11 = (undefined1 *)0x0;
      local_14 = (char *)CONCAT22(param_6._2_2_,(undefined1 *)param_6 + 1);
      if (param_10 != 0 || param_9 != 0) {
        uVar15 = 0;
        uVar14 = 0;
        uVar13 = param_6._2_2_;
        uVar6 = FUN_2000_2a98((undefined1 *)param_6 + 1,param_6._2_2_,0x96e6);
        uVar6 = FUN_2000_3fd4(uVar6,uVar13,uVar14,param_9,param_10,uVar15);
        uVar6 = FUN_2000_2a98(uVar6,uVar13);
        puVar11 = (undefined1 *)FUN_2000_3fd4(uVar6,uVar13);
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
          iVar5 = FUN_2000_2afe(*local_a,piVar9[1]);
          if ((undefined1 *)0x7d < puVar11 + iVar5) {
            *(undefined2 *)0x925a = 7;
            *(undefined2 *)0x9268 = 10;
            FUN_2000_70ea(*param_4,((int *)param_4)[1]);
            return 0xffff;
          }
          puVar11 = puVar11 + iVar5;
          local_a = (int *)CONCAT22(uVar6,piVar9 + 2);
          uVar14 = FUN_2000_2a98((char *)local_14,local_14._2_2_,*piVar4,piVar9[1],0);
          puVar8 = (undefined1 *)FUN_2000_3fd4(uVar14,uVar13);
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
    *(undefined2 *)0x925a = 0xc;
    *(undefined2 *)0x9268 = 8;
    *(undefined2 *)0x9520 = uVar12;
  }
  else {
    *(undefined2 *)0x925a = 7;
    *(undefined2 *)0x9268 = 10;
  }
  return 0xffff;
}



// Function: FUN_2000_4a12 @ 2000:4a12

/* WARNING: Unable to track spacebase fully for stack */

void FUN_2000_4a12(undefined2 param_1,int param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5,undefined2 param_6,uint param_7,int param_8)

{
  code *pcVar1;
  uint *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  uint uVar8;
  byte bVar9;
  char cVar10;
  char in_AF;
  char cVar11;
  char cVar12;
  undefined2 in_stack_00000000;
  
  if ((param_2 != 1) && (param_2 != 0)) {
    *(undefined2 *)0x925a = 0x16;
    FUN_2000_0bd3();
    return;
  }
  *(int *)0x96ec = param_8 + (param_7 >> 4);
  *(undefined2 *)0x96ee = param_5;
  *(undefined2 *)0x96f0 = param_6;
  *(undefined2 *)0x96f4 = unaff_DS;
  *(undefined2 *)0x96f8 = unaff_DS;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(char *)0x9291 == '\x02') {
    FUN_2000_0c14();
  }
  if (*(int *)0x983c == -0x292a) {
    (*(code *)*(undefined2 *)0x983e)();
  }
  puRam00024428 = (uint *)&stack0xfffc;
  uRam0002442c = *(undefined2 *)0x2e;
  uRam0002442e = *(undefined2 *)0x30;
  uVar7 = 0xec;
  cVar12 = '\0';
  cVar11 = '\x01';
  cVar10 = '\x01';
  bVar9 = 0;
  pcVar1 = (code *)swi(0x21);
  uRam0002442a = unaff_SS;
  uRam00024430 = in_stack_00000000;
  (*pcVar1)();
  *(undefined2 *)0x928f = 1;
  pcVar1 = (code *)swi(0x21);
  uVar5 = (*pcVar1)();
  uVar4 = uRam00024430;
  uVar3 = uRam0002442a;
  puVar2 = puRam00024428;
  uVar6 = CONCAT11(cVar12 << 7 | cVar11 << 6 | in_AF << 4 | cVar10 << 2 | 2U | bVar9,uVar7);
  *(undefined2 *)0x30 = uRam0002442e;
  *(undefined2 *)0x2e = uRam0002442c;
  uVar8 = *puVar2;
  if (*(char *)0x9291 == '\x02') {
    *puVar2 = uVar6;
    puVar2[-1] = uVar5;
    puVar2[-2] = 0x2000;
    puVar2[-3] = 0x4b06;
    FUN_2000_0c14();
    uVar6 = *puVar2;
  }
  *(undefined2 *)0x928f = 0;
  if ((uVar6 & 0x100) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  FUN_2000_0bd3();
  return;
}



// Function: FUN_2000_4b1e @ 2000:4b1e

undefined2 __cdecl16far
FUN_2000_4b1e(undefined2 param_1,undefined2 param_2,int param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,int param_8)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 local_8a [104];
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined1 *puStack_16;
  
  FUN_2000_08a6();
  if ((param_8 == 0) && (iVar1 = FUN_2000_2d36(), param_3 == 0 && iVar1 == 0)) {
    *(undefined2 *)0x925a = 8;
  }
  else {
    puStack_16 = local_8a;
    uStack_18 = param_7;
    uStack_1a = param_6;
    uStack_1c = param_5;
    uStack_1e = param_4;
    uStack_20 = 0x1000;
    uStack_22 = 0x4b98;
    iVar1 = FUN_2000_46aa();
    if (iVar1 != -1) {
      uVar2 = FUN_2000_4a12();
      FUN_2000_70ea();
      return uVar2;
    }
  }
  return 0xffff;
}



// Function: FUN_2000_4bd4 @ 2000:4bd4

undefined2 __cdecl16far
FUN_2000_4bd4(uint param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  
  FUN_2000_08a6();
  if (param_1 == 2) {
    uVar1 = FUN_2000_502e(0x1000,param_2,param_3,param_4,param_5,param_6,param_7);
    return uVar1;
  }
  lVar5 = FUN_2000_404c(0x1000,param_2,param_3,0x5c);
  lVar6 = FUN_2000_404c(0x1000,param_2,param_3,0x2f);
  uVar4 = (uint)((ulong)lVar6 >> 0x10) | (uint)lVar6;
  if (uVar4 == 0) {
    lVar6 = CONCAT22(param_3,param_2);
    if (lVar5 != 0) goto LAB_2000_4c62;
  }
  else if ((lVar5 != 0) && ((uint)lVar6 <= (uint)lVar5)) goto LAB_2000_4c62;
  lVar5 = lVar6;
  uVar4 = (uint)((ulong)lVar5 >> 0x10);
LAB_2000_4c62:
  uVar2 = FUN_2000_3fd4(lVar5,0x2e);
  uVar4 = uVar4 | uVar2;
  if (uVar4 == 0) {
    uVar1 = *(undefined2 *)0x9520;
    *(undefined2 *)0x9520 = 0x10;
    iVar3 = FUN_2000_2afe(param_2,param_3);
    uVar2 = FUN_2000_70fd(iVar3 + 5);
    *(undefined2 *)0x9520 = uVar1;
    if (uVar4 == 0 && uVar2 == 0) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = 0x1000;
      FUN_2000_2a98(uVar2,uVar4,param_2,param_3);
      FUN_2000_2afe(param_2,param_3);
      iVar3 = 2;
      while (uVar7 = uVar2, -1 < iVar3) {
        iVar8 = 0x4d64;
        FUN_2000_2a98(*(undefined2 *)(iVar3 * 2 + -0x68ce));
        uVar1 = 0x4d75;
        iVar3 = FUN_2000_5044(0x1000,uVar2,uVar4,0);
        if (iVar3 != -1) {
          uVar1 = FUN_2000_4b1e(param_1,uVar2,uVar4,param_4,param_5,param_6,param_7,iVar8);
          uVar7 = param_1;
          uVar4 = uVar2;
          break;
        }
        iVar3 = iVar8 + -1;
      }
      FUN_2000_70ea(uVar7,uVar4);
    }
  }
  else {
    uVar1 = 0x4c91;
    iVar3 = FUN_2000_5044(0x1000,param_2,param_3,0);
    if (iVar3 != -1) {
      uVar1 = FUN_2000_4006(0x1000);
      uVar1 = FUN_2000_4b1e(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar1);
    }
  }
  return uVar1;
}



// Function: FUN_2000_4db0 @ 2000:4db0

int __cdecl16far
FUN_2000_4db0(undefined2 param_1,char *param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  undefined2 uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint in_DX;
  undefined2 unaff_DS;
  long lVar6;
  undefined4 local_12;
  int local_4;
  
  local_12 = (char *)0x0;
  uVar1 = *(undefined2 *)0x9520;
  *(undefined2 *)0x9520 = 0x10;
  local_4 = FUN_2000_4bd4(param_1,(char *)param_2,param_2._2_2_,param_3,param_4,param_5,param_6);
  if ((local_4 == -1) && (*(int *)0x925a == 2)) {
    uVar2 = FUN_2000_3fd4((char *)param_2,param_2._2_2_,0x2f);
    in_DX = in_DX | uVar2;
    if (in_DX == 0) {
      uVar2 = FUN_2000_3fd4((char *)param_2,param_2._2_2_,0x5c);
      in_DX = in_DX | uVar2;
      if ((in_DX == 0) && ((*param_2 == '\0' || (((char *)param_2)[1] != ':')))) {
        uVar2 = FUN_2000_2d36(0x9738);
        lVar6 = CONCAT22(in_DX,uVar2);
        in_DX = in_DX | uVar2;
        if (in_DX != 0) {
          pcVar3 = (char *)FUN_2000_70fd(0x104);
          local_12 = (char *)CONCAT22(in_DX,pcVar3);
          if (in_DX != 0 || pcVar3 != (char *)0x0) {
            *(undefined2 *)0x9520 = uVar1;
            while( true ) {
              lVar6 = FUN_2000_4350(lVar6,pcVar3,in_DX,0x103);
              if ((lVar6 == 0) || (*local_12 == '\0')) break;
              iVar4 = FUN_2000_2afe(pcVar3,in_DX);
              if ((pcVar3[iVar4 + -1] != '\\') && (pcVar3[iVar4 + -1] != '/')) {
                FUN_2000_2a44(pcVar3,in_DX,0x973d);
              }
              iVar4 = FUN_2000_2afe(pcVar3,in_DX);
              iVar5 = FUN_2000_2afe((char *)param_2,param_2._2_2_);
              if (0x103 < (uint)(iVar4 + iVar5)) break;
              FUN_2000_2a44(pcVar3,in_DX,(char *)param_2,param_2._2_2_);
              local_4 = FUN_2000_4bd4(param_1,pcVar3,in_DX,param_3,param_4,param_5,param_6);
              if ((local_4 != -1) ||
                 ((*(int *)0x925a != 2 &&
                  (((*local_12 != '\\' && (*local_12 != '/')) ||
                   ((pcVar3[1] != '\\' && (pcVar3[1] != '/')))))))) break;
            }
            goto LAB_2000_4f54;
          }
        }
      }
    }
  }
  *(undefined2 *)0x9520 = uVar1;
LAB_2000_4f54:
  if (local_12._2_2_ != 0 || (char *)local_12 != (char *)0x0) {
    FUN_2000_70ea((char *)local_12,local_12._2_2_);
  }
  return local_4;
}



// Function: FUN_2000_4f72 @ 2000:4f72

uint __cdecl16far FUN_2000_4f72(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int in_DX;
  undefined2 unaff_DS;
  int local_14;
  
  local_14 = FUN_2000_2d36(0x9740);
  if (param_2 == 0 && param_1 == 0) {
    iVar1 = FUN_2000_5044(0x1000,local_14,in_DX,0);
    uVar2 = (uint)(iVar1 == 0);
  }
  else if ((in_DX == 0 && local_14 == 0) ||
          ((uVar2 = FUN_2000_4bd4(0,local_14,in_DX,&local_14), uVar2 == 0xffff &&
           ((*(int *)0x925a == 2 || (*(int *)0x925a == 0xd)))))) {
    local_14 = -0x68b5;
    uVar2 = FUN_2000_4db0(0,0x974b);
  }
  return uVar2;
}



// Function: FUN_2000_502e @ 2000:502e

void FUN_2000_502e(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x9860 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00025034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)*(uint *)0x985e)();
    return;
  }
  *(undefined2 *)0x925a = 0x16;
  FUN_2000_0bd3();
  return;
}



// Function: FUN_2000_5044 @ 2000:5044

void FUN_2000_5044(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_2000_0bbe();
  return;
}



// Function: FUN_2000_50a6 @ 2000:50a6

int __cdecl16far FUN_2000_50a6(void)

{
  code *pcVar1;
  byte bVar2;
  
  pcVar1 = (code *)swi(0x21);
  bVar2 = (*pcVar1)();
  return bVar2 + 1;
}



// Function: FUN_2000_50ca @ 2000:50ca

void __cdecl16far FUN_2000_50ca(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_2000_50e2(0,param_1,param_2,param_3);
  return;
}



// Function: FUN_2000_50e2 @ 2000:50e2

uint __cdecl16far FUN_2000_50e2(int param_1,uint param_2,uint param_3,int param_4)

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
    param_1 = FUN_2000_50a6();
  }
  *_local_12e = (char)param_1 + '@';
  local_106[1] = 0x3a;
  local_10c = local_106 + 3;
  local_106[2] = 0x5c;
  local_113 = 0x47;
  local_10e = (char)param_1;
  FUN_2000_3592(&local_114);
  if (local_116 == 0) {
    iVar1 = FUN_2000_2afe(local_106);
    iVar1 = iVar1 + 1;
    local_12e = (char *)param_2;
    param_2 = param_3 | param_2;
    uVar2 = param_3;
    if (param_2 == 0) {
      if (param_4 < iVar1) {
        param_4 = iVar1;
      }
      local_12e = (char *)FUN_2000_70fd(param_4);
      uVar2 = param_2;
      if (param_2 == 0 && local_12e == (char *)0x0) {
        *(undefined2 *)0x925a = 0xc;
        return (uint)local_12e;
      }
    }
    if (iVar1 <= param_4) {
      uVar2 = FUN_2000_2a98(local_12e,uVar2,local_106);
      return uVar2;
    }
    *(undefined2 *)0x925a = 0x22;
  }
  else {
    *(undefined2 *)0x925a = 0xd;
    *(undefined2 *)0x9268 = local_122;
  }
  return 0;
}



// Function: FUN_2000_5206 @ 2000:5206

void FUN_2000_5206(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_2000_0bbe();
  return;
}



// Function: FUN_2000_521a @ 2000:521a

uint __cdecl16near FUN_2000_521a(byte param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined2 uVar5;
  long lVar6;
  undefined4 local_8;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar3 = (char *)param_2;
  pcVar1 = pcVar3;
  if (pcVar3[1] == ':') {
    pcVar1 = pcVar3 + 2;
  }
  local_8 = (char *)CONCAT22(uVar5,pcVar1);
  if ((((*local_8 == '\\') || (*local_8 == '/')) && (pcVar1[1] == '\0')) ||
     (((param_1 & 0x10) != 0 || (*local_8 == '\0')))) {
    uVar4 = 0x4040;
  }
  else {
    uVar4 = 0x8000;
  }
  uVar4 = uVar4 | CONCAT11(1,-((param_1 & 1) == 0)) & 0xff80;
  lVar6 = FUN_2000_404c(0x1000,pcVar3,uVar5,0x2e);
  if (lVar6 != 0) {
    iVar2 = FUN_2000_4006(0x1000,lVar6,0x9758);
    if (iVar2 != 0) {
      iVar2 = FUN_2000_4006(0x1000,lVar6,0x975d);
      if (iVar2 != 0) {
        iVar2 = FUN_2000_4006(0x1000,lVar6,0x9762);
        if (iVar2 != 0) goto LAB_2000_52e0;
      }
    }
    uVar4 = uVar4 | 0x40;
  }
LAB_2000_52e0:
  return uVar4 | (uVar4 & 0x1c0) >> 3 | (uVar4 & 0x1c0) >> 6;
}



// Function: FUN_2000_52fe @ 2000:52fe

undefined2 __cdecl16far FUN_2000_52fe(char *param_1,int *param_2)

{
  int iVar1;
  int in_DX;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  undefined1 local_138 [260];
  int local_34;
  uint local_32;
  int local_30;
  undefined1 local_2e [21];
  char local_19;
  uint local_18;
  uint local_16;
  int local_14;
  int local_12;
  
  iVar1 = FUN_2000_40a4((char *)param_1,param_1._2_2_,0x9767);
  if (in_DX != 0 || iVar1 != 0) {
    *(undefined2 *)0x925a = 2;
    return 0xffff;
  }
  if (((char *)param_1)[1] == ':') {
    if ((*param_1 != '\0') && (((char *)param_1)[2] == '\0')) {
      *(undefined2 *)0x925a = 2;
      return 0xffff;
    }
    if ((*(byte *)(*param_1 + -0x6abb) & 1) == 0) {
      local_30 = (int)*param_1;
    }
    else {
      local_30 = *param_1 + 0x20;
    }
    local_30 = local_30 + -0x60;
  }
  else {
    local_30 = FUN_2000_50a6();
  }
  uVar6 = FUN_2000_589d(0x1000,(char *)param_1,param_1._2_2_,0x16,local_2e);
  uVar2 = (uint)((ulong)uVar6 >> 0x10);
  if ((int)uVar6 != 0) {
    local_32 = FUN_2000_40a4((char *)param_1,param_1._2_2_,0x976a);
    local_32 = uVar2 | local_32;
    if ((((local_32 == 0) || (local_34 = FUN_2000_54e8(local_138), local_32 == 0 && local_34 == 0))
        || (iVar1 = FUN_2000_2afe(local_34,local_32), iVar1 != 3)) ||
       (iVar1 = FUN_2000_54a6(local_30), iVar1 == 0)) {
      *(undefined2 *)0x925a = 2;
      return 0xffff;
    }
    local_19 = '\x10';
    local_12 = 0;
    local_14 = 0;
    local_16 = 0x21;
    local_18 = 0;
  }
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  piVar4 = (int *)param_2;
  piVar4[1] = 0;
  piVar4[5] = 0;
  piVar4[4] = 0;
  *param_2 = local_30 + -1;
  piVar4[6] = local_30 + -1;
  iVar1 = FUN_2000_521a((int)local_19,(char *)param_1,param_1._2_2_);
  piVar4[2] = iVar1;
  piVar4[3] = 1;
  piVar4[7] = local_14;
  piVar4[8] = local_12;
  uVar6 = FUN_2000_3e9c(0x1000,local_16 >> 9,(local_16 & 0x1e0) >> 5,local_16 & 0x1f,local_18 >> 0xb
                        ,(local_18 & 0x7e0) >> 5,(local_18 & 0x1f) * 2);
  iVar3 = (int)((ulong)uVar6 >> 0x10);
  iVar1 = (int)uVar6;
  piVar4[0xd] = iVar1;
  piVar4[0xe] = iVar3;
  piVar4[0xb] = iVar1;
  piVar4[0xc] = iVar3;
  piVar4[9] = iVar1;
  piVar4[10] = iVar3;
  return 0;
}



// Function: FUN_2000_54a6 @ 2000:54a6

bool __cdecl16near FUN_2000_54a6(undefined1 param_1)

{
  char cVar1;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_a;
  
  local_f = 0x1c;
  local_a = param_1;
  cVar1 = FUN_2000_3592(&local_10);
  return cVar1 != -1;
}



// Function: FUN_2000_54e8 @ 2000:54e8

byte * __cdecl16far FUN_2000_54e8(byte *param_1,int param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int in_DX;
  byte *pbVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_DS;
  int local_16;
  byte local_14;
  byte *local_e;
  undefined4 local_a;
  undefined4 local_6;
  
  if ((param_3._2_2_ == 0 && (byte *)param_3 == (byte *)0x0) || (*param_3 == 0)) {
    pbVar5 = (byte *)FUN_2000_50ca(param_1,param_2,param_4);
    return pbVar5;
  }
  if (param_2 == 0 && param_1 == (byte *)0x0) {
    pbVar5 = (byte *)FUN_2000_70fd(0x104);
    local_a = (byte *)CONCAT22(in_DX,pbVar5);
    if (in_DX == 0 && pbVar5 == (byte *)0x0) {
      *(undefined2 *)0x925a = 0xc;
      return (byte *)0x0;
    }
    param_4 = 0x104;
  }
  else {
    if (param_4 < 4) {
      *(undefined2 *)0x925a = 0x22;
      return (byte *)0x0;
    }
    local_a = (byte *)CONCAT22(param_2,param_1);
    pbVar5 = param_1;
  }
  iVar2 = local_a._2_2_;
  local_6 = (byte *)CONCAT22(local_a._2_2_,pbVar5);
  pbVar6 = pbVar5 + (param_4 - 1);
  if (((((byte *)param_3)[1] == 0x5c) || (((byte *)param_3)[1] == 0x2f)) &&
     ((*param_3 == 0x5c || (*param_3 == 0x2f)))) {
    local_16 = 0;
    while( true ) {
      bVar3 = *param_3;
      local_e = (byte *)local_a;
      if (bVar3 == 0) break;
      param_3 = (byte *)CONCAT22(param_3._2_2_,(byte *)param_3 + 1);
      *local_a = bVar3;
      if (pbVar6 <= local_e) goto LAB_2000_55b3;
      if ((bVar3 == 0x5c) || (bVar3 == 0x2f)) {
        local_16 = local_16 + 1;
        *local_a = 0x5c;
        if ((local_16 == 2) && (*param_3 == 0)) {
          *(undefined2 *)0x925a = 0x16;
          goto LAB_2000_55b9;
        }
        if ((2 < local_16) && (local_e[-1] == 0x5c)) {
          *(undefined2 *)0x925a = 0x16;
          goto LAB_2000_55b9;
        }
        if (local_16 == 4) break;
      }
      local_a = (byte *)CONCAT22(local_a._2_2_,local_e + 1);
    }
    *local_a = 0x5c;
  }
  else {
    if (((byte *)param_3)[1] == 0x3a) {
      bVar3 = *param_3;
      *local_a = bVar3;
      bVar3 = bVar3 & 0x1f;
      ((byte *)local_a)[1] = 0x3a;
      local_a = (byte *)CONCAT22(local_a._2_2_,(byte *)local_a + 2);
      param_3 = (byte *)CONCAT22(param_3._2_2_,(byte *)param_3 + 2);
    }
    else {
      bVar3 = 0;
    }
    uVar10 = (undefined2)((ulong)param_3 >> 0x10);
    if ((*param_3 == 0x5c) || (*param_3 == 0x2f)) {
      if (bVar3 == 0) {
        cVar4 = FUN_2000_50a6();
        uVar11 = (undefined2)((ulong)local_a >> 0x10);
        pbVar9 = (byte *)local_a + 1;
        *local_a = cVar4 + 0x40;
        local_a = (byte *)CONCAT22(uVar11,(byte *)local_a + 2);
        *pbVar9 = 0x3a;
      }
      param_3 = (byte *)CONCAT22(uVar10,(byte *)param_3 + 1);
    }
    else {
      if (bVar3 != 0) {
        local_14 = ((byte *)param_3)[-2];
      }
      iVar8 = iVar2;
      iVar7 = FUN_2000_50e2(bVar3,pbVar5,iVar2,param_4);
      if (iVar8 == 0 && iVar7 == 0) goto LAB_2000_55b9;
      iVar8 = FUN_2000_2afe(pbVar5,iVar2);
      pbVar9 = pbVar5 + iVar8;
      local_a = (byte *)CONCAT22(iVar2,pbVar9);
      if (bVar3 != 0) {
        *local_6 = local_14;
      }
      if ((pbVar9[-1] == 0x5c) || (pbVar9[-1] == 0x2f)) {
        local_a = (byte *)CONCAT22(iVar2,pbVar9 + -1);
      }
    }
    *local_a = 0x5c;
    local_e = pbVar5 + 2;
  }
LAB_2000_57fc:
  do {
    uVar10 = (undefined2)((ulong)param_3 >> 0x10);
    pbVar9 = (byte *)param_3;
    if (*param_3 == 0) {
      uVar10 = (undefined2)((ulong)local_a >> 0x10);
      if (((byte *)local_a)[-1] == 0x3a) {
        local_a = (byte *)ZEXT24((byte *)local_a + 1);
      }
      *(byte *)local_a = 0;
      return pbVar5;
    }
    if (((*param_3 == 0x2e) && (pbVar9[1] == 0x2e)) &&
       ((pbVar9[2] == 0x5c || ((pbVar9[2] == 0x2f || (pbVar9[2] == 0)))))) {
      while( true ) {
        pbVar1 = (byte *)local_a + -1;
        local_a = (byte *)CONCAT22(local_a._2_2_,pbVar1);
        if (*local_a == 0x5c) break;
        if ((*local_a == 0x2f) || (pbVar1 <= local_e)) break;
      }
      if (pbVar1 < local_e) {
        *(undefined2 *)0x925a = 0xd;
        goto LAB_2000_55b9;
      }
      pbVar9 = pbVar9 + 2;
    }
    else {
      if ((*param_3 != 0x2e) || (((pbVar9[1] != 0x5c && (pbVar9[1] != 0x2f)) && (pbVar9[1] != 0))))
      {
        while( true ) {
          if (((*param_3 == 0x5c) || (*param_3 == 0x2f)) ||
             ((*param_3 == 0 || (pbVar6 <= (byte *)local_a)))) break;
          bVar3 = *param_3;
          local_a = (byte *)CONCAT22(local_a._2_2_,(byte *)local_a + 1);
          param_3 = (byte *)CONCAT22(param_3._2_2_,(byte *)param_3 + 1);
          *local_a = bVar3;
        }
        if (pbVar6 <= (byte *)local_a) break;
        if (*local_a == 0x5c) {
          *(undefined2 *)0x925a = 0x16;
          goto LAB_2000_55b9;
        }
        local_a._0_2_ = (byte *)local_a + 1;
        *(byte *)local_a = 0x5c;
        if ((*param_3 == 0x5c) || (*param_3 == 0x2f)) {
          param_3 = (byte *)CONCAT22(param_3._2_2_,(byte *)param_3 + 1);
        }
        goto LAB_2000_57fc;
      }
      pbVar9 = pbVar9 + 1;
    }
    param_3 = (byte *)CONCAT22(uVar10,pbVar9);
    if (*pbVar9 != 0) {
      param_3 = (byte *)CONCAT22(uVar10,pbVar9 + 1);
    }
  } while( true );
LAB_2000_55b3:
  *(undefined2 *)0x925a = 0x22;
LAB_2000_55b9:
  if (param_2 == 0 && param_1 == (byte *)0x0) {
    FUN_2000_70ea(pbVar5,iVar2);
  }
  return (byte *)0x0;
}



// Function: FUN_2000_5826 @ 2000:5826

void FUN_2000_5826(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_2000_0bbe();
  return;
}



// Function: FUN_2000_5864 @ 2000:5864

void FUN_2000_5864(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_2000_0bc6();
  return;
}



// Function: FUN_2000_5872 @ 2000:5872

void FUN_2000_5872(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_2000_0bc6();
  return;
}



// Function: FUN_2000_5892 @ 2000:5892

void FUN_2000_5892(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_2000_0bc6();
  return;
}



// Function: FUN_2000_589d @ 2000:589d

void FUN_2000_589d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_2000_0bc6();
  return;
}



// Function: FUN_2000_597a @ 2000:597a

undefined2 __cdecl16far FUN_2000_597a(undefined1 *param_1)

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



// Function: FUN_2000_59aa @ 2000:59aa

undefined2 __cdecl16far FUN_2000_59aa(undefined1 *param_1)

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



// Function: FUN_2000_5a00 @ 2000:5a00

undefined4 __stdcall16far FUN_2000_5a00(uint param_1,uint param_2,uint param_3,uint param_4)

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



// Function: FUN_2000_5a9a @ 2000:5a9a

long __stdcall16far FUN_2000_5a9a(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulong)param_1 * (ulong)param_3;
  }
  return CONCAT22((int)((ulong)param_1 * (ulong)param_3 >> 0x10) +
                  param_2 * param_3 + param_1 * param_4,(int)((ulong)param_1 * (ulong)param_3));
}



// Function: FUN_2000_5acc @ 2000:5acc

undefined4 __stdcall16far FUN_2000_5acc(uint param_1,uint param_2,uint param_3,uint param_4)

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
    if ((int)(uVar11 - 1) < 0) goto LAB_2000_5b66;
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
    if (-1 < (int)(uVar11 - 1)) goto LAB_2000_5b66;
  }
  bVar13 = iVar5 != 0;
  iVar5 = -iVar5;
  iVar6 = -(uint)bVar13 - iVar6;
LAB_2000_5b66:
  return CONCAT22(iVar6,iVar5);
}



// Function: FUN_2000_5c3c @ 2000:5c3c

undefined4 __cdecl16near FUN_2000_5c3c(void)

{
  undefined2 *puVar1;
  char *pcVar2;
  undefined2 *puVar3;
  code *pcVar4;
  char cVar5;
  char *pcVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined2 *unaff_SI;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  undefined2 *puVar24;
  char *pcVar25;
  undefined2 unaff_DS;
  bool bVar26;
  bool bVar27;
  undefined2 in_stack_0000001e;
  
  puVar24 = (undefined2 *)0x976e;
  for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar3 = puVar24;
    puVar24 = puVar24 + 1;
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar3 = *puVar1;
  }
  uVar19 = *(uint *)0x9774;
  *(byte *)0x9775 = *(byte *)0x9775 & 0x7f;
  if (((*(int *)0x976e == 0 && *(int *)0x9770 == 0) && *(int *)0x9772 == 0) && *(int *)0x9774 == 0)
  {
    *(undefined2 *)0x977a = 0x3001;
    return 1;
  }
  if ((~uVar19 & 0x7ff0) == 0) {
    return 0x10000;
  }
  pcVar4 = (code *)swi(0x35);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  *(undefined1 *)0x97a9 = *(undefined1 *)0x97a7;
  pcVar4 = (code *)swi(0x35);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x35);
  (*pcVar4)();
  FUN_2000_5efd();
  pcVar4 = (code *)swi(0x3c);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x34);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  if ((*(byte *)0x97a6 & 0x41) != 0) {
    pcVar4 = (code *)swi(0x3c);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x3a);
    (*pcVar4)();
  }
  pcVar4 = (code *)swi(0x37);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  uVar19 = *(uint *)0x976e;
  uVar15 = *(uint *)0x9770;
  uVar10 = *(uint *)0x9772;
  uVar12 = *(uint *)0x9774;
  bVar26 = false;
  bVar7 = 0;
  for (iVar8 = -(*(int *)0x9776 + -0x3ffe); iVar8 != 0; iVar8 = iVar8 + -1) {
    uVar20 = uVar12 & 1;
    uVar12 = uVar12 >> 1;
    uVar16 = uVar10 & 1;
    uVar10 = uVar10 >> 1 | (uint)(uVar20 != 0) << 0xf;
    uVar20 = uVar15 & 1;
    uVar15 = uVar15 >> 1 | (uint)(uVar16 != 0) << 0xf;
    uVar16 = uVar19 & 1;
    uVar19 = uVar19 >> 1 | (uint)(uVar20 != 0) << 0xf;
    bVar26 = (bVar7 & 1) != 0;
    bVar7 = bVar7 >> 1 | (uVar16 != 0) << 7;
  }
  uVar20 = uVar19 + 0x39a + (uint)bVar26;
  uVar19 = (uint)(0xfc65 < uVar19 || CARRY2(uVar19 + 0x39a,(uint)bVar26));
  uVar16 = uVar15 + uVar19;
  uVar19 = (uint)CARRY2(uVar15,uVar19);
  uVar15 = uVar10 + uVar19;
  uVar12 = uVar12 + CARRY2(uVar10,uVar19);
  iVar8 = 0x10;
  pcVar6 = (char *)0x977b;
  do {
    pcVar25 = pcVar6;
    iVar9 = iVar8;
    uVar21 = uVar20 << 1 | (uint)((int)((uint)bVar7 << 8) < 0);
    uVar10 = uVar16 << 1 | (uint)((int)uVar20 < 0);
    uVar19 = uVar15 << 1 | (uint)((int)uVar16 < 0);
    bVar26 = (int)uVar12 < 0;
    uVar13 = uVar12 << 1 | (uint)((int)uVar15 < 0);
    uVar22 = uVar21 << 1 | (uint)((char)(bVar7 << 1) < '\0');
    uVar17 = uVar10 << 1 | (uint)((int)uVar21 < 0);
    uVar11 = uVar19 << 1 | (uint)((int)uVar10 < 0);
    uVar21 = uVar13 << 1 | (uint)((int)uVar19 < 0);
    cVar5 = bVar7 * '\x05';
    uVar19 = (uint)CARRY1(bVar7 * '\x04',bVar7);
    uVar10 = uVar22 + uVar20;
    iVar23 = uVar10 + uVar19;
    uVar19 = (uint)(CARRY2(uVar22,uVar20) || CARRY2(uVar10,uVar19));
    uVar10 = uVar17 + uVar16;
    iVar18 = uVar10 + uVar19;
    uVar19 = (uint)(CARRY2(uVar17,uVar16) || CARRY2(uVar10,uVar19));
    uVar10 = uVar11 + uVar15;
    iVar8 = uVar10 + uVar19;
    uVar19 = (uint)(CARRY2(uVar11,uVar15) || CARRY2(uVar10,uVar19));
    bVar27 = CARRY2(uVar21,uVar12);
    uVar21 = uVar21 + uVar12;
    iVar14 = uVar21 + uVar19;
    bVar7 = bVar7 * '\n';
    uVar20 = iVar23 * 2 | (uint)(cVar5 < '\0');
    uVar16 = iVar18 * 2 | (uint)(iVar23 < 0);
    uVar15 = iVar8 * 2 | (uint)(iVar18 < 0);
    uVar12 = iVar14 * 2 | (uint)(iVar8 < 0);
    *pcVar25 = (((bVar26 << 1 | (int)uVar13 < 0) + (bVar27 || CARRY2(uVar21,uVar19))) * '\x02' |
               iVar14 < 0) + 0x30;
    iVar8 = iVar9 + -1;
    pcVar6 = pcVar25 + 1;
  } while (iVar8 != 0);
  iVar9 = iVar9 + -2;
  do {
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar2 = pcVar25;
    pcVar25 = pcVar25 + -1;
  } while (*pcVar2 == '0');
  *(char *)0x977a = (char)iVar9 + '\x12';
  return CONCAT22(in_stack_0000001e,1);
}



// Function: FUN_2000_5efd @ 2000:5efd

/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16near FUN_2000_5efd(void)

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



// Function: FUN_2000_5fea @ 2000:5fea

/* WARNING: Control flow encountered bad instruction data */

void FUN_2000_5fea(void)

{
  uint *puVar1;
  byte in_CL;
  int in_BX;
  int unaff_SI;
  undefined2 unaff_DS;
  bool in_SF;
  
  if (!in_SF) {
    puVar1 = (uint *)(in_BX + unaff_SI + 0x6f);
    *puVar1 = *puVar1 << (in_CL & 0xf) | *puVar1 >> 0x10 - (in_CL & 0xf);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_2000_60b3 @ 2000:60b3

void __cdecl16near FUN_2000_60b3(void)

{
  return;
}



// Function: FUN_2000_6150 @ 2000:6150

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00026239) overlaps instruction at (ram,0x00026238)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_2000_6150(void)

{
  byte *pbVar1;
  uint *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  byte bVar6;
  undefined2 uVar7;
  uint uVar8;
  uint in_CX;
  int iVar9;
  undefined2 uVar10;
  undefined2 in_DX;
  undefined2 extraout_DX;
  int in_BX;
  int *piVar11;
  int unaff_BP;
  undefined1 *unaff_SI;
  uint unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar12;
  char in_SF;
  char cVar13;
  char in_OF;
  char cVar14;
  unkbyte10 in_ST0;
  
  if (in_OF == in_SF) {
    puVar2 = (uint *)(unaff_BP + unaff_DI + 6);
    *puVar2 = *puVar2 + (uint)((in_CX & 0x100) != 0) * ((unaff_DI & 3) - (*puVar2 & 3));
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar6 = *(byte *)(in_BX + -0x26);
  *(byte *)(in_BX + -0x26) =
       bVar6 << 5 |
       (byte)(CONCAT11((undefined1 *)*(uint *)(unaff_BP + -0x4179) < &stack0x0002,bVar6) >> 4);
  pbVar1 = (byte *)(unaff_BP + -0x4a5e);
  cVar14 = '\0';
  *pbVar1 = *pbVar1 & 0x32;
  cVar13 = (char)*pbVar1 < '\0';
  bVar12 = *pbVar1 == 0;
  iVar9 = CONCAT11((byte)(in_CX >> 8) ^ (byte)((uint)in_DX >> 8),(char)in_CX) + -2;
  if (iVar9 != 0) {
    if (bVar12) {
      *(undefined2 *)(unaff_BP + -6) = 0x5ca6;
      pcVar3 = (code *)swi(0x35);
      (*pcVar3)();
      do {
      } while (bVar12 || cVar14 != cVar13);
      pcVar3 = (code *)swi(0x3d);
      (*pcVar3)();
      *(uint *)(unaff_BP + -4) = *(uint *)(unaff_BP + -2) | 0x38;
      pcVar3 = (code *)swi(0x35);
      (*pcVar3)();
      out(*unaff_SI,extraout_DX);
      uVar4 = *(undefined4 *)(unaff_BP + 8);
      pcVar3 = (code *)swi(0x3c);
      (*pcVar3)();
      in_ST0 = *(unkbyte10 *)((int)uVar4 + 2);
    }
    do {
      if (unaff_DI == 0) {
        if (*(int *)(unaff_BP + 4) == 0) {
          pcVar3 = (code *)swi(0x37);
          (*pcVar3)();
          if (iVar9 != 1) {
            return;
          }
          puVar5 = (undefined2 *)*(undefined4 *)(unaff_BP + 8);
          pcVar3 = (code *)swi(0x3c);
          (*pcVar3)();
          *(unkbyte10 *)((undefined2 *)puVar5 + 1) = in_ST0;
          *puVar5 = 0;
          pcVar3 = (code *)swi(0x3d);
          (*pcVar3)();
        }
        return;
      }
      uVar8 = unaff_DI & 7;
      unaff_DI = unaff_DI >> 3;
    } while (uVar8 == 0);
                    /* WARNING: Could not recover jumptable at 0x0002625c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*(undefined2 *)(unaff_BP + -6))();
    return;
  }
  bVar6 = in(0x2d);
  bVar6 = bVar6 ^ 0x4f;
  pcVar3 = (code *)swi(4);
  if (SBORROW1(bVar6,*(char *)(unaff_DI + 2))) {
    bVar6 = (*pcVar3)();
  }
  piVar11 = (int *)(*(int *)(unaff_DI + 3) * -0x71);
  uVar10 = *piVar11;
  do {
  } while ('[' < (char)bVar6);
  *piVar11 = 0x61ce;
  uVar7 = FUN_2000_8094();
  out(0x88,uVar7);
  *piVar11 = (int)(unaff_DI + 3);
  piVar11[-1] = uVar10;
  *(uint *)(unaff_SI + unaff_BP + 2) = *(uint *)(unaff_SI + unaff_BP + 2) & 0x18;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_2000_61f2 @ 2000:61f2

/* WARNING: Instruction at (ram,0x00026239) overlaps instruction at (ram,0x00026238)
    */

void FUN_2000_61f2(int param_1,uint param_2,undefined2 *param_3)

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
    local_8 = (code *)0x5cb0;
    cVar5 = '\0';
    cVar4 = param_1 < 0;
    bVar3 = param_1 == 0;
    uStack_e = param_2;
    if (bVar3) {
      local_8 = (code *)0x5ca6;
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
                    /* WARNING: Could not recover jumptable at 0x0002625c. Too many branches */
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



// Function: FUN_2000_644c @ 2000:644c

uint * FUN_2000_644c(uint *param_1,int param_2,byte *param_3)

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
    FUN_2000_64fa();
    uVar17 = FUN_2000_64fa();
    uVar7 = (uint)CARRY2((uint)((ulong)uVar17 >> 0x10),uVar7);
    uVar3 = uVar12 + uVar4 + uVar7;
    uVar12 = (uint)(CARRY2(uVar12,uVar4) || CARRY2(uVar12 + uVar4,uVar7));
    bVar15 = CARRY2(uVar5,uVar9);
    uVar5 = uVar5 + uVar9;
    uVar10 = uVar5 + uVar12;
    bVar16 = CARRY2((uint)uVar17,uVar2);
    uVar1 = (uint)uVar17 + uVar2;
    uVar17 = FUN_2000_64fa();
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



// Function: FUN_2000_64fa @ 2000:64fa

undefined4 __cdecl16near FUN_2000_64fa(void)

{
  int in_AX;
  int in_DX;
  int in_BX;
  
  return CONCAT22(in_DX << 1,in_AX << 1 | (uint)(in_BX < 0));
}



// Function: FUN_2000_6506 @ 2000:6506

/* WARNING: Instruction at (ram,0x00026519) overlaps instruction at (ram,0x00026517)
    */

void __cdecl16far
FUN_2000_6506(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

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
    FUN_2000_656e(in_stack_00000002,param_1,param_2,param_3,param_4,puVar5,unaff_SS);
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



// Function: FUN_2000_656e @ 2000:656e

uint FUN_2000_656e(undefined2 param_1,byte *param_2,int *param_3,uint *param_4)

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
LAB_2000_65bd:
      pbVar1 = pbVar11;
      pbVar11 = pbVar9 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_16 = 0x8000;
      goto LAB_2000_65bd;
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
            if (local_1c == 0) goto LAB_2000_660b;
            pbVar1 = pbVar11;
            pbVar11 = pbVar11 + 1;
            bVar6 = *pbVar1;
          }
          if (bVar6 == 0x2e) {
            do {
              pbVar1 = pbVar11;
              pbVar11 = pbVar11 + 1;
              bVar6 = *pbVar1;
LAB_2000_6625:
              if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_2000_6641;
              pcVar2 = pcVar10;
              pcVar10 = pcVar10 + 1;
              *pcVar2 = bVar6 - 0x30;
              local_18 = local_18 + -1;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
            goto LAB_2000_6638;
          }
          goto LAB_2000_6641;
        }
        do {
          local_18 = iVar5;
          bVar6 = *pbVar11;
LAB_2000_65ea:
          pbVar11 = pbVar11 + 1;
          iVar5 = local_18 + -1;
        } while (bVar6 == 0x30);
        if (bVar6 != 0) goto LAB_2000_6625;
      }
      local_14 = pbVar11 + -1;
      goto LAB_2000_67a3;
    }
    if ((bVar6 == 0x2e) && ((bVar6 = *pbVar11, 0x2f < bVar6 && (bVar6 < 0x3a)))) goto LAB_2000_65ea;
  }
  local_10 = 4;
  goto LAB_2000_67a3;
  while (iVar5 = local_18 + 1, bVar6 < 0x3a) {
LAB_2000_660b:
    local_18 = iVar5;
    pbVar1 = pbVar11;
    pbVar11 = pbVar11 + 1;
    bVar6 = *pbVar1;
    if (bVar6 < 0x30) break;
  }
  if (bVar6 == 0x2e) {
LAB_2000_6638:
    do {
      pbVar1 = pbVar11;
      pbVar11 = pbVar11 + 1;
      bVar6 = *pbVar1;
      if (bVar6 < 0x30) break;
    } while (bVar6 < 0x3a);
  }
LAB_2000_6641:
  local_1c = 0x19 - local_1c;
  local_14 = pbVar11 + -1;
  if ((((bVar6 == 0x45) || (bVar6 == 0x65)) || (bVar6 == 0x44)) || (bVar6 == 100)) {
    pbVar9 = pbVar11 + 1;
    bVar6 = *pbVar11;
    if (bVar6 == 0x2b) {
LAB_2000_6670:
      pbVar1 = pbVar9;
      pbVar9 = pbVar11 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_1a = 0xffff;
      goto LAB_2000_6670;
    }
    if ((0x2f < bVar6) && (bVar6 < 0x3a)) {
      uVar7 = bVar6 - 0x30;
      uVar8 = uVar7;
      do {
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar6 = *pbVar1;
        if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_2000_66a7;
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
LAB_2000_66a7:
      local_18 = local_18 + ((uVar8 ^ local_1a) - local_1a);
      local_14 = pbVar9 + -1;
    }
  }
  if (local_1c != 0) {
    *pcVar10 = '\0';
    pbVar11 = (byte *)(pcVar10 + -1);
    if (local_1c < 0x19) {
      if (local_18 != 0) goto LAB_2000_66ee;
    }
    else {
      bVar6 = *pbVar11;
      *pbVar11 = 0;
      local_1c = local_1c - 1;
      local_18 = local_18 + 1;
      pbVar11 = (byte *)(pcVar10 + -2);
      if (bVar6 < 5) {
LAB_2000_66ee:
        for (; *pbVar11 == 0; pbVar11 = pbVar11 + -1) {
          local_1c = local_1c - 1;
          local_18 = local_18 + 1;
        }
      }
      else {
        *pbVar11 = *pbVar11 + 1;
      }
    }
    FUN_2000_644c(&local_e,local_1c,local_36,unaff_SS);
    if (local_18 == 0) {
LAB_2000_6728:
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
          goto LAB_2000_6785;
        }
LAB_2000_67af:
        local_10 = local_10 | 1;
        goto LAB_2000_67a3;
      }
    }
    else if (local_18 < 0x1450) {
      if (-0x1450 < local_18) {
        FUN_2000_61f2(param_1,local_18,&local_e,unaff_SS);
        goto LAB_2000_6728;
      }
      goto LAB_2000_67af;
    }
    local_10 = local_10 | 2;
    puVar12[4] = local_16 | 0x7fff;
    puVar12[3] = 0x8000;
    puVar12[2] = 0;
    puVar12[1] = 0;
    *param_4 = 0;
    goto LAB_2000_6785;
  }
LAB_2000_67a3:
  for (iVar14 = 5; iVar14 != 0; iVar14 = iVar14 + -1) {
    puVar3 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar3 = 0;
  }
LAB_2000_6785:
  *param_3 = (int)local_14;
  ((int *)param_3)[1] = local_12;
  return local_10;
}



// Function: FUN_2000_6844 @ 2000:6844

void __cdecl16far FUN_2000_6844(char *param_1)

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



// Function: FUN_2000_68be @ 2000:68be

undefined2 __cdecl16far FUN_2000_68be(undefined4 param_1)

{
  code *pcVar1;
  undefined1 *unaff_SI;
  undefined1 *unaff_DI;
  undefined2 unaff_DS;
  undefined1 uStack_3;
  
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x38);
  (*pcVar1)();
  *unaff_DI = *unaff_SI;
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  if ((uStack_3 & 1) == 0) {
    return 1;
  }
  return 0;
}



// Function: FUN_2000_68ec @ 2000:68ec

void __cdecl16far FUN_2000_68ec(int param_1,float *param_2,undefined2 param_3,undefined2 param_4)

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
    puVar2 = (undefined2 *)FUN_2000_2bba(param_3,param_4);
    uVar5 = (undefined2)((ulong)param_2 >> 0x10);
    *(undefined2 *)param_2 = *puVar2;
    *(undefined2 *)((int)pfVar4 + 2) = puVar2[1];
    *(undefined2 *)(pfVar4 + 1) = puVar2[2];
    *(undefined2 *)((int)pfVar4 + 6) = puVar2[3];
    return;
  }
  pdVar3 = (double *)FUN_2000_2bba(param_3,param_4);
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



// Function: FUN_2000_693e @ 2000:693e

undefined1 * __cdecl16far
FUN_2000_693e(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4,int param_5)

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
  
  if (*(char *)0x97c2 == '\0') {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar3 = (undefined2 *)param_1;
    piVar1 = (int *)FUN_2000_6eaa(*param_1,puVar3[1],puVar3[2],puVar3[3]);
    local_6 = (int *)CONCAT22(in_DX,piVar1);
    FUN_2000_2c8e(param_2 + (uint)(0 < param_4) + (uint)(*local_6 == 0x2d),param_3,param_4 + 1,
                  piVar1,in_DX);
  }
  else {
    local_6 = (int *)CONCAT22(*(undefined2 *)0xa67a,(int *)*(undefined2 *)0xa678);
    FUN_2000_6dae(0 < param_4,param_2 + (*(int *)*(undefined2 *)0xa678 == 0x2d),param_3);
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
           FUN_2000_2a98((undefined1 *)local_a + param_4 + (uint)(*(char *)0x97c2 == '\0'),
                         local_a._2_2_,0x97c7);
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



// Function: FUN_2000_6acc @ 2000:6acc

void __cdecl16far
FUN_2000_6acc(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  undefined2 unaff_DS;
  
  *(undefined1 *)0x97c2 = 1;
  FUN_2000_693e(param_1,param_2,param_3,param_4,param_5,param_6);
  *(undefined1 *)0x97c2 = 0;
  return;
}



// Function: FUN_2000_6af6 @ 2000:6af6

undefined1 * __cdecl16far
FUN_2000_6af6(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4)

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
  
  if (*(char *)0x97c2 == '\0') {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar3 = (undefined2 *)param_1;
    piVar4 = (int *)FUN_2000_6eaa(*param_1,puVar3[1],puVar3[2],puVar3[3]);
    local_6 = (int *)CONCAT22(in_DX,piVar4);
    FUN_2000_2c8e(param_2 + (*local_6 == 0x2d),param_3,piVar4[1] + param_4,piVar4,in_DX);
  }
  else {
    local_6 = (int *)CONCAT22(*(undefined2 *)0xa67a,(int *)*(undefined2 *)0xa678);
    bVar6 = *(int *)*(undefined2 *)0xa678 == 0x2d;
    iVar2 = *(int *)0x97c4;
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
    FUN_2000_6dae(1,puVar1,param_3);
    puVar1 = puVar1 + 1;
    *local_10 = 0x30;
  }
  else {
    puVar1 = puVar1 + piVar4[1];
  }
  local_10 = (undefined1 *)CONCAT22(param_3,puVar1);
  if (0 < param_4) {
    FUN_2000_6dae(1,puVar1,param_3);
    *local_10 = 0x2e;
    if (piVar4[1] < 0) {
      if (*(char *)0x97c2 == '\0') {
        iVar2 = -piVar4[1];
        if (-param_4 != piVar4[1] && param_4 <= iVar2) {
          iVar2 = param_4;
        }
      }
      else {
        iVar2 = -piVar4[1];
      }
      FUN_2000_6dae(iVar2,puVar1 + 1,param_3);
      FUN_2000_4296(puVar1 + 1,param_3,0x30,iVar2);
    }
  }
  return param_2;
}



// Function: FUN_2000_6c52 @ 2000:6c52

void __cdecl16far
FUN_2000_6c52(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 unaff_DS;
  
  *(undefined1 *)0x97c2 = 1;
  FUN_2000_6af6(param_1,param_2,param_3,param_4,param_5);
  *(undefined1 *)0x97c2 = 0;
  return;
}



// Function: FUN_2000_6c7a @ 2000:6c7a

void __cdecl16far
FUN_2000_6c7a(undefined2 *param_1,int param_2,undefined2 param_3,int param_4,undefined2 param_5)

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
  uVar3 = FUN_2000_6eaa(*param_1,puVar6[1],puVar6[2],puVar6[3]);
  *(undefined2 *)0xa678 = uVar3;
  *(undefined2 *)0xa67a = in_DX;
  piVar1 = (int *)*(undefined4 *)0xa678;
  uVar3 = (undefined2)((ulong)piVar1 >> 0x10);
  *(int *)0x97c4 = ((int *)piVar1)[1] + -1;
  pcVar4 = (char *)((uint)(*piVar1 == 0x2d) + param_2);
  local_6 = (char *)CONCAT22(param_3,pcVar4);
  FUN_2000_2c8e(pcVar4,param_3,param_4,(int *)piVar1,uVar3);
  iVar5 = *(int *)((int)*(undefined4 *)0xa678 + 2) + -1;
  *(bool *)0x97c6 = *(int *)0x97c4 < iVar5;
  *(int *)0x97c4 = iVar5;
  if ((-5 < iVar5) && (iVar5 < param_4)) {
    if (*(char *)0x97c6 != '\0') {
      do {
        pcVar2 = local_6;
        uVar3 = (undefined2)((ulong)local_6 >> 0x10);
        pcVar4 = (char *)local_6;
        local_6 = (char *)CONCAT22(uVar3,(char *)local_6 + 1);
      } while (*pcVar2 != '\0');
      pcVar4[-1] = '\0';
    }
    FUN_2000_6c52(puVar6,uVar7,param_2,param_3,param_4);
    return;
  }
  FUN_2000_6acc(puVar6,uVar7,param_2,param_3,param_4,param_5);
  return;
}



// Function: FUN_2000_6d4e @ 2000:6d4e

void __cdecl16far
FUN_2000_6d4e(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5,undefined2 param_6,undefined2 param_7)

{
  if ((param_5 == 0x65) || (param_5 == 0x45)) {
    FUN_2000_693e(param_1,param_2,param_3,param_4,param_6,param_7);
  }
  else {
    if (param_5 != 0x66) {
      FUN_2000_6c7a(param_1,param_2,param_3,param_4,param_6,param_7);
      return;
    }
    FUN_2000_6af6(param_1,param_2,param_3,param_4,param_6);
  }
  return;
}



// Function: FUN_2000_6dae @ 2000:6dae

void FUN_2000_6dae(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_2000_2afe(param_2,param_3);
    FUN_2000_416e(param_2 + param_1,param_3,param_2,param_3,iVar1 + 1);
  }
  return;
}



// Function: FUN_2000_6de0 @ 2000:6de0

undefined2 __cdecl16far FUN_2000_6de0(void)

{
  code *pcVar1;
  byte bVar2;
  int unaff_BP;
  undefined2 unaff_SS;
  
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3a);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  bVar2 = (byte)(((uint)(*(byte *)(unaff_BP + -1) & 0x41) << 8) >> 1);
  return CONCAT11(*(byte *)(unaff_BP + -1) & 0x40 | bVar2,bVar2);
}



// Function: FUN_2000_6e03 @ 2000:6e03

undefined2 __cdecl16far FUN_2000_6e03(void)

{
  code *pcVar1;
  undefined2 in_stack_00000002;
  
  pcVar1 = (code *)swi(0x3a);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return in_stack_00000002;
}



// Function: FUN_2000_6e1c @ 2000:6e1c

/* WARNING: Instruction at (ram,0x00026e31) overlaps instruction at (ram,0x00026e2f)
    */

void __cdecl16far FUN_2000_6e1c(void)

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



// Function: FUN_2000_6e50 @ 2000:6e50

undefined2 __cdecl16far FUN_2000_6e50(int param_1,undefined2 param_2)

{
  uint uVar1;
  undefined2 unaff_DS;
  int local_6 [2];
  
  uVar1 = FUN_2000_6506(param_1,param_2,local_6);
  *(int *)0xa67e = local_6[0] - param_1;
  *(undefined2 *)0xa67c = 0;
  if ((uVar1 & 4) != 0) {
    *(undefined2 *)0xa67c = 0x200;
  }
  if ((uVar1 & 2) != 0) {
    *(byte *)0xa67c = *(byte *)0xa67c | 1;
  }
  if ((uVar1 & 1) != 0) {
    *(byte *)0xa67d = *(byte *)0xa67d | 1;
  }
  return 0xa67c;
}



// Function: FUN_2000_6eaa @ 2000:6eaa

undefined2 __cdecl16far
FUN_2000_6eaa(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint in_BX;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  
  *(undefined2 *)0x97d8 = param_1;
  *(undefined2 *)0x97da = param_2;
  *(undefined2 *)0x97dc = param_3;
  *(undefined2 *)0x97de = param_4;
  uVar6 = FUN_2000_5c3c(&stack0xfffe);
  puVar5 = (undefined1 *)0x97e0;
  puVar4 = (undefined1 *)0x97d9;
  for (iVar3 = (int)*(char *)0x97d8; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *puVar5 = 0;
  *(uint *)0x97ce = in_BX & 0xff;
  *(undefined2 *)0x97d0 = (int)((ulong)uVar6 >> 0x10);
  *(undefined2 *)0x97d2 = (int)uVar6;
  *(undefined2 *)0x97d4 = 0x97e0;
  *(undefined2 *)0x97d6 = unaff_DS;
  return 0x97ce;
}



// Function: FUN_2000_6f76 @ 2000:6f76

/* WARNING: Unable to track spacebase fully for stack */

undefined2 FUN_2000_6f76(undefined2 param_1,uint param_2,char *param_3,int param_4)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar10;
  
  if (*(uint *)0x926a <= param_2) {
LAB_2000_6f89:
    uVar4 = FUN_2000_0bd3();
    return uVar4;
  }
  if (*(int *)0x983c == -0x292a) {
    (*(code *)*(undefined2 *)0x983e)();
  }
  if ((*(byte *)(param_2 + 0x926c) & 0x20) != 0) {
    bVar10 = false;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (bVar10) goto LAB_2000_6f89;
  }
  if ((*(byte *)(param_2 + 0x926c) & 0x80) != 0) {
    pcVar7 = (char *)param_3;
    bVar10 = true;
    iVar6 = param_4;
    pcVar9 = pcVar7;
    if (param_4 != 0) {
      do {
        if (iVar6 == 0) break;
        pcVar1 = pcVar9;
        pcVar9 = pcVar9 + 1;
        bVar10 = *pcVar1 == '\n';
        iVar6 = iVar6 + -1;
      } while (!bVar10);
      if (!bVar10) goto LAB_2000_702d;
      pcVar8 = pcVar7;
      uVar5 = FUN_2000_70d6();
      if (uVar5 < 0xa9) {
        uVar4 = FUN_2000_08a6();
        bVar10 = pcVar9 < pcVar8;
        if (pcVar9 != pcVar8) {
          pcVar2 = (code *)swi(0x21);
          uVar5 = (*pcVar2)();
          if ((bVar10) || (uVar5 < (uint)((int)pcVar9 - (int)pcVar8))) {
            uVar4 = FUN_2000_0bd3();
            return uVar4;
          }
        }
        return uVar4;
      }
      pcVar8 = &stack0xfff0;
      pcVar9 = &stack0xfff2;
      do {
        pcVar1 = pcVar7;
        pcVar7 = pcVar7 + 1;
        cVar3 = *pcVar1;
        if (cVar3 == '\n') {
          cVar3 = '\r';
          if (pcVar9 == pcVar8) {
            cVar3 = FUN_2000_7036();
          }
          pcVar1 = pcVar9;
          pcVar9 = pcVar9 + 1;
          *pcVar1 = cVar3;
          cVar3 = '\n';
        }
        if (pcVar9 == pcVar8) {
          cVar3 = FUN_2000_7036();
        }
        pcVar1 = pcVar9;
        pcVar9 = pcVar9 + 1;
        *pcVar1 = cVar3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      FUN_2000_7036();
    }
    uVar4 = FUN_2000_708b();
    return uVar4;
  }
LAB_2000_702d:
  uVar4 = FUN_2000_709c();
  return uVar4;
}



// Function: FUN_2000_6fa8 @ 2000:6fa8

/* WARNING: Unable to track spacebase fully for stack */

undefined2 FUN_2000_6fa8(void)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  undefined2 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  int in_BX;
  char *pcVar11;
  int unaff_BP;
  undefined2 uVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool in_CF;
  bool bVar13;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  if (in_CF) {
    uVar12 = FUN_2000_0bd3();
    return uVar12;
  }
  if ((*(byte *)(in_BX + -0x6d94) & 0x80) != 0) {
    *(undefined2 *)(unaff_BP + -6) = unaff_DS;
    uVar12 = *(undefined2 *)(unaff_BP + 10);
    pcVar3 = (char *)*(undefined4 *)(unaff_BP + 8);
    pcVar9 = (char *)pcVar3;
    bVar13 = true;
    *(undefined2 *)(unaff_BP + -2) = 0;
    *(undefined2 *)(unaff_BP + -4) = 0;
    *(undefined1 **)(unaff_BP + -8) = &stack0xfffc;
    iVar7 = *(int *)(unaff_BP + 0xc);
    pcVar11 = pcVar9;
    if (iVar7 != 0) {
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar1 = pcVar11;
        pcVar11 = pcVar11 + 1;
        bVar13 = *pcVar1 == '\n';
      } while (!bVar13);
      if (!bVar13) goto LAB_2000_702d;
      uVar12 = *(undefined2 *)(unaff_BP + -6);
      uStack_8 = 0x1000;
      pcVar10 = pcVar9;
      uStack_6 = (int)((ulong)pcVar3 >> 0x10);
      uVar6 = FUN_2000_70d6();
      uVar4 = uStack_6;
      if (uVar6 < 0xa9) {
        uStack_8 = 0x1000;
        uStack_8 = FUN_2000_08a6();
        bVar13 = pcVar11 < pcVar10;
        if (pcVar11 != pcVar10) {
          pcVar2 = (code *)swi(0x21);
          uVar6 = (*pcVar2)(uVar12,iVar7,in_BX);
          if ((bVar13) ||
             (*(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + uVar6,
             uVar6 < (uint)((int)pcVar11 - (int)pcVar10))) {
            uVar12 = FUN_2000_0bd3();
            return uVar12;
          }
        }
        return uStack_8;
      }
      pcVar11 = (char *)&uStack_6;
      iVar7 = 0x200;
      if (uVar6 < 0x228) {
        iVar7 = 0x80;
      }
      iVar7 = -iVar7;
      pcVar10 = &stack0xfffc;
      *(undefined2 *)((int)&uStack_8 + iVar7) = unaff_SS;
      uVar12 = *(undefined2 *)((int)&uStack_8 + iVar7);
      iVar8 = *(int *)(unaff_BP + 0xc);
      do {
        pcVar3 = pcVar9;
        pcVar9 = pcVar9 + 1;
        cVar5 = *pcVar3;
        if (cVar5 == '\n') {
          cVar5 = '\r';
          if (pcVar10 == pcVar11) {
            *(undefined2 *)((int)&uStack_8 + iVar7) = 0x701b;
            cVar5 = FUN_2000_7036();
          }
          pcVar3 = pcVar10;
          pcVar10 = pcVar10 + 1;
          *pcVar3 = cVar5;
          cVar5 = '\n';
          *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
        }
        if (pcVar10 == pcVar11) {
          *(undefined2 *)((int)&uStack_8 + iVar7) = 0x7026;
          cVar5 = FUN_2000_7036();
        }
        pcVar3 = pcVar10;
        pcVar10 = pcVar10 + 1;
        *pcVar3 = cVar5;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      *(undefined2 *)((int)&uStack_8 + iVar7) = 0x7010;
      FUN_2000_7036();
    }
    uVar12 = FUN_2000_708b();
    return uVar12;
  }
LAB_2000_702d:
  uVar12 = FUN_2000_709c();
  return uVar12;
}



// Function: FUN_2000_7036 @ 2000:7036

/* WARNING: Unable to track spacebase fully for stack */

undefined2 __cdecl16near FUN_2000_7036(void)

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
      uVar3 = FUN_2000_0bd3();
      return uVar3;
    }
  }
  return in_AX;
}



// Function: FUN_2000_708b @ 2000:708b

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_2000_708b(void)

{
  FUN_2000_0bd3();
  return;
}



// Function: FUN_2000_709c @ 2000:709c

void FUN_2000_709c(void)

{
  code *pcVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if (*(int *)(unaff_BP + 0xc) != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    FUN_2000_0bd3();
    return;
  }
  FUN_2000_0bd3();
  return;
}



// Function: FUN_2000_70d6 @ 2000:70d6

int __cdecl16far FUN_2000_70d6(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if ((undefined1 *)*(uint *)0x92a0 < &stack0x0004) {
    iVar1 = -((int)*(uint *)0x92a0 - (int)&stack0x0004);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



// Function: FUN_2000_70ea @ 2000:70ea

void __cdecl16far FUN_2000_70ea(undefined4 param_1)

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



// Function: FUN_2000_70fd @ 2000:70fd

undefined2 __cdecl16far FUN_2000_70fd(uint param_1)

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
  
  uVar5 = 0x1000;
  do {
    if (param_1 < 0xffe9) {
      bVar7 = false;
      if (*(int *)0x982e != 0) {
        pcVar4 = (code *)0x6c20;
        while( true ) {
          uVar3 = *(uint *)0x9836;
          uVar6 = (uint)((ulong)*(undefined4 *)0x9830 >> 0x10);
          in_BX = (int)*(undefined4 *)0x9830;
          uVar10 = uVar6;
          do {
            do {
              uVar5 = 0x2000;
              uVar9 = (*pcVar4)();
              if (!bVar7) {
                if (pcVar4 == (code *)0x6c20) goto LAB_2000_7167;
                goto LAB_2000_7164;
              }
              puVar1 = (undefined4 *)(in_BX + 0xc);
              in_BX = (int)*puVar1;
              bVar7 = uVar6 < uVar3;
              bVar8 = uVar6 != uVar3;
              uVar6 = (uint)((ulong)*puVar1 >> 0x10);
            } while (bVar8);
            uVar3 = *(uint *)((int)*(undefined4 *)0x9830 + 0x12);
            uVar6 = (uint)((ulong)*(undefined4 *)0x982c >> 0x10);
            in_BX = (int)*(undefined4 *)0x982c;
            bVar7 = uVar6 < uVar10;
            bVar8 = uVar6 != uVar10;
            uVar10 = uVar6;
          } while (bVar8);
          bVar7 = pcVar4 < (code *)0x2364;
          if (pcVar4 == (code *)0x2364) break;
          pcVar4 = (code *)0x2364;
        }
      }
      FUN_2000_727c();
      if (!bVar7) {
LAB_2000_7164:
        uVar9 = FUN_2000_7200();
LAB_2000_7167:
        *(undefined2 *)0x9832 = (int)((ulong)uVar9 >> 0x10);
        *(int *)0x9830 = in_BX;
        return (int)uVar9;
      }
    }
    if (*(int *)0x982a == 0 && *(int *)0x9828 == 0) {
      return 0;
    }
    iVar2 = (*(code *)*(undefined2 *)0x9828)(uVar5,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}



// Function: FUN_2000_7196 @ 2000:7196

void __cdecl16near FUN_2000_7196(void)

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



// Function: FUN_2000_71ca @ 2000:71ca

void __cdecl16near FUN_2000_71ca(void)

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



// Function: FUN_2000_7200 @ 2000:7200

uint * __cdecl16near FUN_2000_7200(void)

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
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_2000_7259;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_2000_7259;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 6);
      if ((uint *)*(undefined2 *)(in_BX + 8) == puVar7) goto LAB_2000_7259;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 8) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_2000_7259:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 6);
  *(undefined2 *)(in_BX + 8) = puVar7;
  return puVar7;
}



// Function: FUN_2000_727c @ 2000:727c

void __cdecl16near FUN_2000_727c(void)

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
    bVar3 = uVar2 < *(uint *)0x923a;
  } while (uVar2 <= *(uint *)0x923a);
  if (*(uint *)0x9238 < uVar2) {
    *(uint *)0x9238 = uVar2;
  }
  *(undefined2 *)0x2 = *(undefined2 *)(unaff_DI + 0xc);
  FUN_2000_7196();
  FUN_2000_71ca();
  return;
}



// Function: FUN_2000_740a @ 2000:740a

/* WARNING: Instruction at (ram,0x00027425) overlaps instruction at (ram,0x00027424)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000273af) */
/* WARNING: Removing unreachable block (ram,0x00027491) */
/* WARNING: Removing unreachable block (ram,0x00027399) */
/* WARNING: Removing unreachable block (ram,0x0002739e) */
/* WARNING: Removing unreachable block (ram,0x000273e1) */
/* WARNING: Removing unreachable block (ram,0x000273f3) */
/* WARNING: Removing unreachable block (ram,0x000273e4) */
/* WARNING: Removing unreachable block (ram,0x000273e6) */
/* WARNING: Removing unreachable block (ram,0x000273e8) */
/* WARNING: Removing unreachable block (ram,0x000273e7) */
/* WARNING: Removing unreachable block (ram,0x000273ea) */
/* WARNING: Removing unreachable block (ram,0x0002740f) */
/* WARNING: Removing unreachable block (ram,0x00027481) */
/* WARNING: Removing unreachable block (ram,0x00027411) */
/* WARNING: Removing unreachable block (ram,0x00027413) */
/* WARNING: Removing unreachable block (ram,0x00027483) */
/* WARNING: Removing unreachable block (ram,0x00027485) */
/* WARNING: Removing unreachable block (ram,0x00027487) */
/* WARNING: Removing unreachable block (ram,0x0002748b) */
/* WARNING: Removing unreachable block (ram,0x000273ec) */
/* WARNING: Removing unreachable block (ram,0x000273ee) */
/* WARNING: Removing unreachable block (ram,0x000273f0) */
/* WARNING: Removing unreachable block (ram,0x000273f2) */
/* WARNING: Removing unreachable block (ram,0x000273f4) */
/* WARNING: Removing unreachable block (ram,0x00027436) */
/* WARNING: Removing unreachable block (ram,0x000273f6) */
/* WARNING: Removing unreachable block (ram,0x0002743c) */
/* WARNING: Removing unreachable block (ram,0x000273f8) */
/* WARNING: Removing unreachable block (ram,0x00027442) */
/* WARNING: Removing unreachable block (ram,0x000273fa) */
/* WARNING: Removing unreachable block (ram,0x00027448) */
/* WARNING: Removing unreachable block (ram,0x000273fc) */
/* WARNING: Removing unreachable block (ram,0x00027450) */
/* WARNING: Removing unreachable block (ram,0x000273fe) */
/* WARNING: Removing unreachable block (ram,0x0002745e) */
/* WARNING: Removing unreachable block (ram,0x00027400) */
/* WARNING: Removing unreachable block (ram,0x00027465) */
/* WARNING: Removing unreachable block (ram,0x0002746a) */
/* WARNING: Removing unreachable block (ram,0x00027402) */
/* WARNING: Removing unreachable block (ram,0x00027404) */
/* WARNING: Removing unreachable block (ram,0x00027406) */
/* WARNING: Removing unreachable block (ram,0x00027472) */
/* WARNING: Removing unreachable block (ram,0x00027476) */
/* WARNING: Removing unreachable block (ram,0x00027408) */
/* WARNING: Removing unreachable block (ram,0x00027425) */
/* WARNING: Removing unreachable block (ram,0x0002746d) */
/* WARNING: Removing unreachable block (ram,0x00027484) */
/* WARNING: Removing unreachable block (ram,0x00027488) */
/* WARNING: Removing unreachable block (ram,0x00027766) */
/* WARNING: Removing unreachable block (ram,0x000273b5) */
/* WARNING: Removing unreachable block (ram,0x000273c6) */
/* WARNING: Removing unreachable block (ram,0x000273b9) */
/* WARNING: Removing unreachable block (ram,0x000273da) */
/* WARNING: Removing unreachable block (ram,0x000273a4) */
/* WARNING: Removing unreachable block (ram,0x000273bc) */
/* WARNING: Removing unreachable block (ram,0x000273c9) */

void FUN_2000_740a(void)

{
  undefined2 in_AX;
  int in_BX;
  int unaff_SI;
  undefined2 unaff_DS;
  bool in_OF;
  
  if (!in_OF) {
    *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + (char)in_AX;
    FUN_2000_7766();
    return;
  }
  out(2,in_AX);
  FUN_2000_7766();
  return;
}



// Function: FUN_2000_7676 @ 2000:7676

void FUN_2000_7676(void)

{
  char cVar1;
  byte bVar2;
  int in_AX;
  undefined2 in_BX;
  int iVar3;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_DS;
  
  *(int *)0x201 = *(int *)0x201 + 1;
  iVar3 = CONCAT11((char)((uint)in_BX >> 8) * '\x02',(char)in_BX);
  *(int *)0x202 = *(int *)0x202 + in_AX;
  *(int *)(iVar3 + unaff_SI) = *(int *)(iVar3 + unaff_SI) + 1;
  cVar1 = (char)in_AX;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + cVar1;
  *(char *)(iVar3 + unaff_DI) = *(char *)(iVar3 + unaff_DI) + cVar1;
  *(int *)(iVar3 + unaff_SI) = *(int *)(iVar3 + unaff_SI) + 1;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + cVar1;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + cVar1;
  *(int *)(iVar3 + unaff_SI) = *(int *)(iVar3 + unaff_SI) + 1;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + cVar1;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + cVar1;
  bVar2 = cVar1 + *(char *)(iVar3 + unaff_DI * 2);
  *(int *)(iVar3 + unaff_SI) = *(int *)(iVar3 + unaff_SI) + 1;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(byte *)(iVar3 + unaff_SI) = *(byte *)(iVar3 + unaff_SI) & bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  *(char *)(iVar3 + unaff_SI) = *(char *)(iVar3 + unaff_SI) + bVar2;
  FUN_2000_776f();
  FUN_2000_77ce();
  FUN_2000_7987();
  return;
}



// Function: FUN_2000_76b0 @ 2000:76b0

void FUN_2000_76b0(void)

{
  byte in_AL;
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
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  FUN_2000_776f();
  FUN_2000_77ce();
  FUN_2000_7987();
  return;
}



// Function: FUN_2000_7766 @ 2000:7766

void FUN_2000_7766(void)

{
  FUN_2000_776f();
  FUN_2000_77ce();
  FUN_2000_7987();
  return;
}



// Function: FUN_2000_776f @ 2000:776f

void __cdecl16near FUN_2000_776f(void)

{
  int iVar1;
  undefined2 in_BX;
  undefined2 *puVar2;
  undefined2 unaff_BP;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  
  DAT_1000_70da = 0x1000;
  DAT_1000_70c2 = &stack0x0002;
  DAT_1000_70be = 0;
  puVar2 = (undefined2 *)0x715e;
  DAT_1000_70bc = 0x715e;
  iVar1 = 0x14;
  DAT_1000_70ba = in_BX;
  DAT_1000_70c0 = unaff_DS;
  DAT_1000_70c4 = unaff_BP;
  DAT_1000_70c6 = unaff_ES;
  DAT_1000_70c8 = unaff_SS;
  DAT_1000_70ca = unaff_SI;
  DAT_1000_70cc = unaff_DI;
  DAT_1000_715c = in_stack_00000000;
  do {
    *puVar2 = 0xffff;
    puVar2 = (undefined2 *)((int)puVar2 + 1);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  DAT_4000_4195 = 0;
  return;
}



// Function: FUN_2000_77ce @ 2000:77ce

void __cdecl16near FUN_2000_77ce(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x70be == 0) {
    FUN_2000_7915();
    if (*(char *)0x70d6 != '\0') {
      *(int *)0x70ce = *(int *)0x70c2 + 4;
      FUN_2000_77fc();
      if (*(int *)0x70be != 0) {
        return;
      }
    }
    FUN_2000_7964();
  }
  return;
}



// Function: FUN_2000_77fc @ 2000:77fc

void __cdecl16near FUN_2000_77fc(void)

{
  char cVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  
  pcVar2 = (char *)*(undefined2 *)(*(int *)0x70ba * 2 + 0x6ddb);
  while( true ) {
    cVar1 = *pcVar2;
    if (cVar1 == -1) {
      return;
    }
    if ((cVar1 == '\x03') || (cVar1 == '\x04')) {
      FUN_2000_78a2();
    }
    else if (cVar1 == '\x01') {
      FUN_2000_7888();
    }
    else if (cVar1 == '\x05') {
      FUN_2000_7906();
      FUN_2000_7906();
    }
    else if (cVar1 == '\x02') {
      FUN_2000_786a();
    }
    else if (cVar1 == '\x06') {
      FUN_2000_7888();
    }
    else {
      FUN_2000_7855();
    }
    if (*(int *)0x70be != 0) break;
    pcVar2 = pcVar2 + 1;
  }
  return;
}



// Function: FUN_2000_7855 @ 2000:7855

void __cdecl16near FUN_2000_7855(void)

{
  undefined2 unaff_DS;
  
  *(int *)0x70ce = *(int *)0x70ce + 2;
  FUN_2000_7906();
  return;
}



// Function: FUN_2000_786a @ 2000:786a

void __cdecl16near FUN_2000_786a(void)

{
  undefined2 unaff_DS;
  
  *(int *)0x70ce = *(int *)0x70ce + 4;
  FUN_2000_7906();
  FUN_2000_7906();
  return;
}



// Function: FUN_2000_7888 @ 2000:7888

void __cdecl16near FUN_2000_7888(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  
  uVar2 = FUN_2000_78f0();
  iVar1 = (int)((ulong)uVar2 >> 0x10);
  if (((int)uVar2 == 0) && (iVar1 == *(int *)0x70c0)) {
    iVar1 = 0;
  }
  FUN_2000_7906(iVar1);
  FUN_2000_7906();
  return;
}



// Function: FUN_2000_78a2 @ 2000:78a2

void __cdecl16near FUN_2000_78a2(void)

{
  char in_AL;
  char *pcVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  
  *(undefined2 *)0x70d2 = *(undefined2 *)0x70c0;
  uVar2 = FUN_2000_78f0();
  *(undefined2 *)0x70d4 = 0xffff;
  *(undefined2 *)0x70d2 = (int)((ulong)uVar2 >> 0x10);
  *(undefined2 *)0x70d0 = (int)uVar2;
  FUN_2000_7906();
  FUN_2000_7906();
  if (in_AL == '\x04') {
    FUN_2000_7855();
  }
  else {
    for (pcVar1 = (char *)*(undefined2 *)0x70d0; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    }
    FUN_2000_7906();
  }
  return;
}



// Function: FUN_2000_78f0 @ 2000:78f0

undefined4 __cdecl16near FUN_2000_78f0(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)*(int *)0x70ce;
  uVar2 = ((undefined2 *)*(int *)0x70ce)[1];
  *(int *)0x70ce = *(int *)0x70ce + 4;
  return CONCAT22(uVar2,uVar1);
}



// Function: FUN_2000_7906 @ 2000:7906

void __cdecl16near FUN_2000_7906(void)

{
  undefined2 *puVar1;
  undefined2 in_AX;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)*(int *)0x70bc;
  *puVar1 = in_AX;
  *(undefined2 *)0x70bc = puVar1 + 1;
  return;
}



// Function: FUN_2000_7915 @ 2000:7915

void __cdecl16near FUN_2000_7915(void)

{
  char cVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x70d6 = 0;
  pcVar2 = (char *)*(undefined2 *)(*(int *)0x70ba * 2 + 0x6ddb);
  do {
    cVar1 = *pcVar2;
    if (cVar1 == -1) {
      return;
    }
    if (cVar1 != '\x05') {
      *(char *)0x70d6 = *(char *)0x70d6 + '\x01';
      if ((cVar1 != '\x06') && (cVar1 != '\x03')) {
        if (cVar1 == '\x04') {
          *(char *)0x70d6 = *(char *)0x70d6 + '\x01';
        }
        else if ((cVar1 != '\x01') && (cVar1 != '\x05')) {
          if (cVar1 == '\x02') {
            *(char *)0x70d6 = *(char *)0x70d6 + '\x01';
          }
          goto LAB_2000_7960;
        }
      }
      *(char *)0x70d6 = *(char *)0x70d6 + '\x01';
    }
LAB_2000_7960:
    pcVar2 = pcVar2 + 1;
  } while( true );
}



// Function: FUN_2000_7964 @ 2000:7964

void __cdecl16near FUN_2000_7964(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x70ba;
  *(undefined2 *)0x70d8 = 0x43dc;
  puVar2 = (undefined2 *)(iVar1 * 4 + 0x6cfb);
  uVar3 = (*(code *)*puVar2)(0x1000);
  *(undefined2 *)0x70be = uVar3;
  return;
}



// Function: FUN_2000_7987 @ 2000:7987

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

undefined2 __cdecl16far FUN_2000_7987(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x70c2;
  uVar3 = *(undefined2 *)0x70c8;
  uVar2 = *(undefined2 *)0x70c6;
  *(undefined2 *)(iVar1 + -2) = *(undefined2 *)0x70be;
  *(undefined2 *)(iVar1 + -4) = uVar2;
  if (DAT_4000_4195 == 1) {
    *(undefined2 *)(iVar1 + -2) = 0x79c4;
    uVar3 = FUN_2000_79c9();
  }
  else {
    uVar3 = *(undefined2 *)(iVar1 + -2);
  }
  return uVar3;
}



// Function: FUN_2000_79c9 @ 2000:79c9

void __cdecl16near FUN_2000_79c9(void)

{
  FUN_2000_3f37();
  FUN_2000_07cb();
  return;
}



// Function: FUN_2000_8094 @ 2000:8094

undefined2 FUN_2000_8094(undefined2 param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  
  uVar2 = DAT_2000_0000;
  if (*(int *)0x0 == 0 && *(int *)0x2 == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  (*(code *)*(undefined2 *)0x0)();
  return param_2;
}



// Function: FUN_2000_828a @ 2000:828a

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16near FUN_2000_828a(void)

{
  undefined1 uVar1;
  uint uVar2;
  int in_CX;
  int iVar3;
  byte in_DL;
  int in_BX;
  int unaff_SI;
  byte *unaff_DI;
  undefined2 unaff_DS;
  bool bVar4;
  undefined2 in_stack_00000001;
  
  uVar1 = in(0xc);
  uVar2 = CONCAT11((char)((uint)in_stack_00000001 >> 8),uVar1) | 0xded;
  iVar3 = in_CX + -1;
  if (iVar3 == 0 || uVar2 == 0) {
    iVar3 = CONCAT11((char)((uint)iVar3 >> 8),(byte)iVar3 | *unaff_DI);
    bVar4 = in_DL < *(byte *)(in_BX + unaff_SI);
    in_DL = in_DL - *(byte *)(in_BX + unaff_SI);
    *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_DL + bVar4;
    out(0x1f,uVar2);
  }
  if (iVar3 == 1) {
    *(char *)(in_BX + unaff_SI) =
         (*(char *)(in_BX + unaff_SI) - (in_DL | *(byte *)(in_BX + unaff_SI))) -
         (0xef < (byte)uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}



// Function: FUN_2000_8a92 @ 2000:8a92

void __cdecl16near FUN_2000_8a92(void)

{
  undefined2 *unaff_SI;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  
  *unaff_DI = *unaff_SI;
  unaff_DI[1] = unaff_SI[1];
  unaff_DI[2] = unaff_SI[2];
  unaff_DI[3] = unaff_SI[3];
  unaff_DI[4] = unaff_SI[4];
  unaff_DI[5] = unaff_SI[5];
  return;
}



// Function: FUN_2000_8fae @ 2000:8fae

void __cdecl16near FUN_2000_8fae(void)

{
  undefined2 *puVar1;
  undefined1 extraout_AH;
  undefined2 in_CX;
  undefined2 in_DX;
  undefined2 in_BX;
  int unaff_SI;
  undefined2 unaff_DI;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  
  puVar1 = (undefined2 *)*(int *)0x96;
  *puVar1 = in_DX;
  puVar1[1] = in_CX;
  puVar1[2] = in_BX;
  puVar1[3] = unaff_DI;
  *(byte *)(puVar1 + 5) = (byte)((uint)in_stack_00000000 >> 8) & 0x80;
  if (0x3fff < unaff_SI) {
    FUN_2000_905b();
    return;
  }
  if (-0x3fff < unaff_SI) {
    puVar1[4] = unaff_SI;
    *(undefined1 *)((int)puVar1 + 0xb) = 0;
    return;
  }
  FUN_2000_8a92();
  *(undefined1 *)(puVar1 + 5) = extraout_AH;
  return;
}



// Function: FUN_2000_9042 @ 2000:9042

void FUN_2000_9042(void)

{
  undefined2 in_DX;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  byte in_CF;
  
  *(int *)(unaff_BP + unaff_DI) = *(int *)(unaff_BP + unaff_DI) + unaff_SI + (uint)in_CF;
  in(in_DX);
  FUN_2000_8fae();
  return;
}



// Function: FUN_2000_905b @ 2000:905b

void __cdecl16near FUN_2000_905b(void)

{
  byte bVar1;
  byte in_AH;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  int unaff_DI;
  undefined2 unaff_DS;
  
  *(uint *)0x16 = *(uint *)0x16 | 8;
  bVar1 = *(byte *)0xb >> 3;
  if ((bool)(*(byte *)0xb >> 2 & 1)) {
    if (((bool)(bVar1 & 1)) || (*(uint *)0x16 = *(uint *)0x16 | 0x20, (in_AH & 0x80) == 0))
    goto LAB_2000_9087;
  }
  else if (((bool)(bVar1 & 1)) && (*(uint *)0x16 = *(uint *)0x16 | 0x20, (in_AH & 0x80) != 0)) {
LAB_2000_9087:
    FUN_2000_8a92();
    *(undefined1 *)(unaff_DI + 10) = extraout_AH_00;
    return;
  }
  FUN_2000_8a92();
  *(undefined1 *)(unaff_DI + 10) = extraout_AH;
  return;
}



// Function: FUN_2000_913c @ 2000:913c

void __cdecl16near FUN_2000_913c(void)

{
  char cVar1;
  char in_AL;
  undefined2 in_BX;
  int unaff_SI;
  undefined2 *unaff_DI;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  
  cVar1 = *(char *)(unaff_SI + 10);
  *unaff_DI = in_BX;
  unaff_DI[1] = CONCAT11(0xff,(in_AL + -0x76) * '\x02') >> 1 | (uint)(cVar1 < '\0') << 0xf;
  return;
}



// Function: FUN_2000_c0e1 @ 2000:c0e1

undefined2 __cdecl16far FUN_2000_c0e1(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  undefined1 in_CF;
  
  FUN_2000_d9a6();
  FUN_2000_3f37();
  FUN_2000_3ee8();
  FUN_2000_d37a();
  if ((bool)in_CF) goto LAB_2000_c1bd;
  FUN_2000_406f();
  if (*(int *)0x11 != 0) {
    *(undefined2 *)0x11 = 0;
    uVar1 = *(uint *)0x13 & 0xff00;
    if ((uVar1 == 0x100) || (uVar1 == 0xe00)) {
      FUN_1000_bc13();
      goto LAB_2000_c1bd;
    }
    if (uVar1 == 0xc00) {
      FUN_1000_bca7();
      goto LAB_2000_c1bd;
    }
    if (uVar1 == 0x500) {
      func_0x0001bd47();
      goto LAB_2000_c1bd;
    }
    if (uVar1 == 0xa00) {
      func_0x0001bda3();
      goto LAB_2000_c1bd;
    }
    if (*(int *)0x13 == 0x4001) {
      FUN_1000_bdf3();
      goto LAB_2000_c1bd;
    }
    if ((*(int *)0x13 == 0x4006) || (*(int *)0x13 == 0x4007)) {
      func_0x0001be0e();
      goto LAB_2000_c1bd;
    }
    if (uVar1 == 0x6000) {
      FUN_1000_bce8();
      goto LAB_2000_c1bd;
    }
  }
  *(undefined2 *)0x11 = 0;
  func_0x00023e2b();
LAB_2000_c1bd:
  return *(undefined2 *)0x26a;
}



// Function: FUN_2000_c673 @ 2000:c673

void __cdecl16near FUN_2000_c673(void)

{
  int in_DX;
  
  if (in_DX == 0) {
    func_0x00023ce5();
  }
  return;
}



// Function: FUN_2000_c682 @ 2000:c682

void __cdecl16near FUN_2000_c682(void)

{
  return;
}



// Function: FUN_2000_c683 @ 2000:c683

void __cdecl16near FUN_2000_c683(void)

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
  
  FUN_2000_c6ae();
  do {
    FUN_2000_406f();
  } while (*(int *)0x11 != 0);
  uVar1 = *(uint *)0x7;
  bVar2 = 0;
  bVar6 = 0;
  bVar5 = (int)uVar1 < 0;
  bVar4 = uVar1 == 0;
  bVar3 = (POPCOUNT(uVar1 & 0xff) & 1U) == 0;
  if (!(bool)bVar4) {
    func_0x00023ce5();
  }
  FUN_2000_c6af((uint)(in_NT & 1) * 0x4000 | (uint)(bVar6 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
                (uint)(in_TF & 1) * 0x100 | (uint)(bVar5 & 1) * 0x80 | (uint)(bVar4 & 1) * 0x40 |
                (uint)(in_AF & 1) * 0x10 | (uint)(bVar3 & 1) * 4 | (uint)(bVar2 & 1));
  FUN_2000_c6b0();
  return;
}



// Function: FUN_2000_c6ae @ 2000:c6ae

void __cdecl16near FUN_2000_c6ae(void)

{
  return;
}



// Function: FUN_2000_c6af @ 2000:c6af

void __cdecl16near FUN_2000_c6af(void)

{
  return;
}



// Function: FUN_2000_c6b0 @ 2000:c6b0

undefined2 __cdecl16near FUN_2000_c6b0(void)

{
  int iVar1;
  undefined2 in_AX;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x26a;
  FUN_2000_c0e1();
  if (iVar1 != 0) {
    *(int *)0x26a = iVar1;
  }
  return in_AX;
}



// Function: FUN_2000_d37a @ 2000:d37a

void __cdecl16near FUN_2000_d37a(void)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar3;
  
  uVar2 = FUN_2000_d9a6();
  *(uint *)0x267 = uVar2;
  *(undefined2 *)0x26a = 0;
  *(undefined2 *)0x2d = 0;
  bVar3 = false;
  if (*(char *)0x668 == '\0') {
    *(undefined2 *)0x9 = 0;
    *(undefined2 *)0xb = 0;
    *(undefined2 *)0xd = 0;
    *(undefined2 *)0xf = 0;
    func_0x0002462c();
    if (bVar3) {
      return;
    }
    FUN_2000_d731();
    uVar2 = FUN_2000_d7ff();
  }
  bVar3 = uVar2 < 10;
  if (bVar3) {
    FUN_2000_d41c();
    if (bVar3) {
      return;
    }
    iVar1 = *(int *)(*(int *)0x25f + 2);
    if (iVar1 != 0) {
      if (*(int *)(*(int *)0x25f + 8) == 1) {
        return;
      }
      if ((iVar1 != 0x4007) && (iVar1 != 0x4006)) {
        if (iVar1 != 0x4003) {
          return;
        }
        *(undefined2 *)0x3e1 = 0xffff;
        FUN_2000_60b3();
        *(undefined2 *)(*(int *)0x25f + 8) = 1;
        return;
      }
      FUN_2000_5fea(unaff_ES);
      return;
    }
  }
  func_0x00023ce5();
  return;
}



// Function: FUN_2000_d41c @ 2000:d41c

undefined4 __cdecl16near FUN_2000_d41c(void)

{
  int iVar1;
  uint in_AX;
  uint uVar2;
  undefined2 in_DX;
  char cVar3;
  undefined2 unaff_DS;
  
  if (in_AX < *(uint *)0x68e) {
    *(undefined2 *)0x25f = 0x6cc;
    for (uVar2 = in_AX; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(int *)0x25f = *(int *)0x25f + 100;
    }
    iVar1 = *(int *)(*(int *)0x25f + 2);
    *(int *)0x13 = iVar1;
    *(undefined2 *)0x3d3 = 0;
    if ((iVar1 == 0x4006) || (iVar1 == 0x4007)) {
      *(undefined2 *)0x3d3 = 1;
    }
    cVar3 = (char)*(undefined2 *)(*(int *)0x25f + 6);
    *(char *)0x71 = cVar3;
    if (cVar3 == '\x03') {
      *(undefined2 *)0x69 = 6;
      *(undefined2 *)0x6d = 7;
      *(undefined2 *)0x6b = 0x82;
      *(undefined1 *)0x269 = 8;
    }
    else if (cVar3 == '\x02') {
      *(undefined2 *)0x69 = 4;
      *(undefined2 *)0x6d = 5;
      *(undefined2 *)0x6b = 0x81;
      *(undefined1 *)0x269 = 4;
    }
    else {
      *(undefined2 *)0x69 = 2;
      *(undefined2 *)0x6d = 3;
      *(undefined2 *)0x6b = 0x83;
      *(undefined1 *)0x269 = 2;
    }
  }
  else {
    func_0x00023ce5();
  }
  return CONCAT22(in_DX,in_AX);
}



// Function: FUN_2000_d516 @ 2000:d516

int __cdecl16near FUN_2000_d516(void)

{
  int in_AX;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar2 = *(int *)(*(int *)0x25f + 0x12);
  iVar1 = *(int *)(*(int *)0x25f + 0x14);
  if (iVar2 == 0) {
LAB_2000_d565:
    func_0x00023ce5();
  }
  else {
    iVar3 = 0xe9c;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      iVar3 = iVar3 + 0x10;
    }
    *(int *)0x261 = iVar3;
    if (in_AX != 0x32) {
      while (in_AX != *(int *)(*(int *)0x261 + 4)) {
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) goto LAB_2000_d565;
        *(int *)0x261 = *(int *)0x261 + 0x10;
      }
    }
    if ((*(int *)0x13 == 0x4002) && (*(int *)(*(int *)0x261 + 2) != 1)) {
      out(*(int *)0x26e + 8,
          (byte)*(undefined2 *)(*(int *)0x25f + 0x46) | (byte)*(undefined2 *)(*(int *)0x25f + 0x48)
          | (byte)*(undefined2 *)(*(int *)0x25f + 0x4a) |
          (byte)*(undefined2 *)(*(int *)0x25f + 0x4c) | (byte)*(undefined2 *)(*(int *)0x25f + 0x4e))
      ;
      *(undefined2 *)(*(int *)0x261 + 2) = 1;
    }
  }
  return in_AX;
}



// Function: FUN_2000_d6e6 @ 2000:d6e6

undefined4 __cdecl16near FUN_2000_d6e6(void)

{
  uint in_AX;
  uint in_DX;
  
  return CONCAT22((in_DX >> 0xc) + (uint)CARRY2(in_AX,in_DX * 0x10),in_AX + in_DX * 0x10);
}



// Function: FUN_2000_d6fb @ 2000:d6fb

ulong __cdecl16near FUN_2000_d6fb(void)

{
  uint in_AX;
  int in_DX;
  
  return CONCAT22(in_DX + (in_AX >> 4),in_AX) & 0xffff000f;
}



// Function: FUN_2000_d70d @ 2000:d70d

void __cdecl16near FUN_2000_d70d(void)

{
  return;
}



// Function: FUN_2000_d731 @ 2000:d731

/* WARNING: Removing unreachable block (ram,0x0002d751) */
/* WARNING: Removing unreachable block (ram,0x0002d75c) */
/* WARNING: Removing unreachable block (ram,0x0002d761) */
/* WARNING: Removing unreachable block (ram,0x0002d781) */
/* WARNING: Removing unreachable block (ram,0x0002d770) */
/* WARNING: Removing unreachable block (ram,0x0002d776) */
/* WARNING: Removing unreachable block (ram,0x0002d77b) */
/* WARNING: Removing unreachable block (ram,0x0002d77c) */
/* WARNING: Removing unreachable block (ram,0x0002d794) */
/* WARNING: Removing unreachable block (ram,0x0002d7a1) */
/* WARNING: Removing unreachable block (ram,0x0002d7a5) */
/* WARNING: Removing unreachable block (ram,0x0002d7b0) */
/* WARNING: Removing unreachable block (ram,0x0002d7b5) */
/* WARNING: Removing unreachable block (ram,0x0002d7d5) */
/* WARNING: Removing unreachable block (ram,0x0002d7c4) */
/* WARNING: Removing unreachable block (ram,0x0002d7ca) */
/* WARNING: Removing unreachable block (ram,0x0002d7db) */
/* WARNING: Removing unreachable block (ram,0x0002d7cf) */
/* WARNING: Removing unreachable block (ram,0x0002d7d0) */
/* WARNING: Removing unreachable block (ram,0x0002d787) */
/* WARNING: Removing unreachable block (ram,0x0002d78d) */

void __cdecl16near FUN_2000_d731(void)

{
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}



// Function: FUN_2000_d7e4 @ 2000:d7e4

undefined4 __cdecl16near FUN_2000_d7e4(void)

{
  long lVar1;
  undefined2 in_AX;
  uint in_CX;
  int iVar2;
  undefined2 in_DX;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  
  lVar1 = (ulong)*(uint *)0x26e0 * (ulong)in_CX;
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



// Function: FUN_2000_d7ff @ 2000:d7ff

undefined2 __cdecl16near FUN_2000_d7ff(undefined2 param_1)

{
  code *pcVar1;
  undefined2 in_BX;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  *(undefined2 *)0x3bc = in_BX;
  *(undefined2 *)0x3be = unaff_ES;
  return param_1;
}



// Function: FUN_2000_d9a6 @ 2000:d9a6

undefined2 __cdecl16near FUN_2000_d9a6(void)

{
  undefined2 in_AX;
  
  return in_AX;
}



// Function: FUN_2000_d9ae @ 2000:d9ae

undefined2 __cdecl16near FUN_2000_d9ae(void)

{
  undefined2 in_AX;
  undefined2 unaff_DS;
  
  DAT_1000_a0f0 = unaff_DS;
  return in_AX;
}



// Function: FUN_2000_d9f1 @ 2000:d9f1

undefined2 __cdecl16near FUN_2000_d9f1(void)

{
  int in_AX;
  
  return *(undefined2 *)((in_AX + -1) * 2 + 8);
}



// Function: FUN_2000_da06 @ 2000:da06

undefined4 __cdecl16near FUN_2000_da06(void)

{
  undefined2 in_AX;
  undefined2 in_DX;
  undefined2 unaff_DS;
  
  out(*(undefined2 *)0x26e,in_DX);
  out(*(int *)0x26e + 2,0xc);
  out(*(int *)0x26e + 2,4);
  out(*(undefined2 *)0x26e,in_AX);
  out(*(int *)0x26e + 2,5);
  out(*(int *)0x26e + 2,4);
  return CONCAT22(in_DX,in_AX);
}



// Function: FUN_2000_ea26 @ 2000:ea26

void __cdecl16near FUN_2000_ea26(void)

{
  undefined2 in_AX;
  uint uVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  uVar1 = *(uint *)(*(int *)0x25f + 2);
  *(uint *)0x13 = uVar1;
  if ((uVar1 & 0xff00) == 0xb00) {
    in_AX = FUN_2000_d9f1();
  }
  *(undefined2 *)0x26e = in_AX;
  *(undefined2 *)0x17 = *(undefined2 *)(*(int *)0x25f + 4);
  if (*(int *)(*(int *)0x25f + 0xe) == 0) {
    func_0x00023ce5();
    return;
  }
  if (*(int *)(*(int *)0x25f + 8) == 1) {
    return;
  }
  uVar1 = *(uint *)0x13 & 0xff00;
  bVar2 = uVar1 < 0xc00;
  if (((uVar1 == 0xc00) || (bVar2 = uVar1 < 0x6000, uVar1 == 0x6000)) ||
     (bVar2 = uVar1 < 0xb00, uVar1 == 0xb00)) {
    FUN_2000_248f();
    if (bVar2) {
      return;
    }
  }
  else {
    bVar2 = uVar1 < 0x100;
    if ((uVar1 == 0x100) || (bVar2 = uVar1 < 0xe00, uVar1 == 0xe00)) {
      func_0x00020829();
      if (bVar2) {
        return;
      }
    }
    else {
      bVar2 = uVar1 < 0xd00;
      if (uVar1 == 0xd00) {
        FUN_2000_2219();
        if (bVar2) {
          return;
        }
      }
      else {
        if (uVar1 != 0x4000) {
LAB_2000_eadb:
          func_0x00023ce5();
          return;
        }
        uVar1 = *(uint *)0x13;
        bVar2 = uVar1 < 0x4001;
        if (uVar1 == 0x4001) {
          func_0x0002544e();
          if (bVar2) {
            return;
          }
        }
        else {
          bVar2 = uVar1 < 0x4006;
          if ((uVar1 != 0x4006) && (bVar2 = uVar1 < 0x4007, uVar1 != 0x4007)) goto LAB_2000_eadb;
          FUN_2000_597a();
          if (bVar2) {
            return;
          }
        }
      }
    }
  }
  *(undefined2 *)(*(int *)0x25f + 8) = 1;
  return;
}



// Function: FUN_2000_eaf5 @ 2000:eaf5

void __cdecl16near FUN_2000_eaf5(void)

{
  uint in_AX;
  undefined2 uVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  *(uint *)0x27c = (uint)((in_AX & 1) != 0);
  *(uint *)0x21 = (uint)((in_AX & 2) != 0);
  uVar1 = 0;
  if ((in_AX & 4) != 0) {
    uVar1 = 4;
  }
  *(undefined2 *)0x27 = uVar1;
  *(uint *)0x23 = (uint)((in_AX & 8) != 0);
  *(uint *)0x27a = (uint)((in_AX & 0x10) != 0);
  *(uint *)0x290 = (uint)((in_AX & 0x100) != 0);
  *(uint *)0x2a8 = (uint)((in_AX & 0x200) != 0);
  bVar2 = (in_AX & 0x800) != 0;
  if (bVar2) {
    *(undefined2 *)0x27a = 1;
  }
  *(uint *)0x65 = (uint)bVar2;
  *(uint *)0x2d = (uint)((in_AX & 0x1000) != 0);
  *(uint *)0x3c1 = (uint)((in_AX & 0x2000) != 0);
  *(uint *)0x3c7 = (uint)((in_AX & 0x4000) != 0);
  *(uint *)0x25 = in_AX & 0xe0;
  return;
}



// Function: FUN_2000_edc6 @ 2000:edc6

undefined2 __cdecl16far FUN_2000_edc6(void)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  byte in_AL;
  int iVar5;
  int iVar6;
  uint in_DX;
  undefined2 uVar7;
  uint uVar8;
  int unaff_BP;
  undefined2 *unaff_SI;
  uint *puVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  undefined4 uVar13;
  int in_stack_00000000;
  
  *(uint *)(unaff_BP + -0x75) = *(uint *)(unaff_BP + -0x75) & in_DX;
  bVar10 = CARRY1(in_AL,*(byte *)(unaff_BP + in_stack_00000000 + 0x4c6));
  *(undefined2 *)0x17 = *unaff_SI;
  iVar5 = FUN_2000_f3d9();
  if (bVar10) goto LAB_2000_ef3b;
  if (iVar5 != 10) {
    func_0x00023ce5();
    goto LAB_2000_ef3b;
  }
  *(undefined2 *)0x1d = *(undefined2 *)(unaff_BP + 4);
  iVar5 = *(int *)(unaff_BP + 6);
  *(int *)0x1f = iVar5;
  if (iVar5 == -1) {
    func_0x00023ce5();
    goto LAB_2000_ef3b;
  }
  piVar3 = (int *)*(int *)(unaff_BP + 8);
  iVar5 = *(int *)(unaff_BP + 10);
  if (iVar5 == 0) {
    func_0x00023ce5();
    goto LAB_2000_ef3b;
  }
  iVar6 = *piVar3;
  *(int *)0x276 = iVar6;
  iVar5 = piVar3[1];
  *(int *)0x278 = iVar5;
  if ((iVar6 == 0) && (iVar5 == 0)) {
    func_0x00023ce5();
    goto LAB_2000_ef3b;
  }
  if ((*(uint *)(unaff_BP + 0x10) & 0xfef8) != 0) {
    func_0x00023ce5();
    goto LAB_2000_ef3b;
  }
  uVar8 = *(uint *)(unaff_BP + 0x10) & 3;
  bVar10 = uVar8 < 2;
  if (uVar8 == 2) {
    func_0x00023ce5();
    goto LAB_2000_ef3b;
  }
  FUN_2000_eaf5();
  uVar11 = true;
  if (bVar10) {
LAB_2000_eed3:
    if (!(bool)uVar11) {
      bVar10 = *(int *)0x27c == 0;
      if (*(int *)0x27c != 1) {
        FUN_2000_c683();
        if (bVar10) goto LAB_2000_ef35;
        if (*(int *)0x290 != 1) {
          puVar9 = (uint *)*(int *)0x3ba;
          iVar5 = *(int *)0x3b8;
          while( true ) {
            iVar6 = *(int *)0x1d;
            if (*(int *)0x1f != 0) {
              iVar6 = 0;
            }
            do {
              puVar1 = puVar9;
              puVar2 = puVar9;
              puVar9 = puVar9 + 1;
              *puVar2 = *puVar1 & 0xff;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            if (puVar9 == (uint *)0x0) {
              iVar5 = iVar5 + 0x1000;
            }
            if (*(int *)0x1f == 0) break;
            *(int *)0x1f = *(int *)0x1f + -1;
          }
        }
      }
      puVar4 = (undefined2 *)*(undefined4 *)(unaff_BP + 8);
      *puVar4 = *(undefined2 *)0x276;
      ((undefined2 *)puVar4)[1] = *(undefined2 *)0x278;
    }
  }
  else {
    bVar10 = *(int *)0x290 == 0;
    bVar12 = *(int *)0x290 == 1;
    FUN_2000_d70d();
    if (!bVar10 && !bVar12) {
      func_0x00023ce5();
      goto LAB_2000_ef3b;
    }
    bVar10 = *(uint *)0x13 < 0x501;
    uVar11 = bVar10;
    if (*(uint *)0x13 != 0x501) {
      func_0x00023ce5();
      uVar11 = false;
      if (bVar10) goto LAB_2000_ef3b;
    }
    *(undefined2 *)0x6f = 0;
    *(undefined2 *)0x19 = 0;
    *(undefined2 *)0x1b = 0;
    uVar13 = FUN_2000_c673();
    uVar7 = (undefined2)((ulong)uVar13 >> 0x10);
    if (!(bool)uVar11) {
      *(undefined2 *)0x77 = (int)uVar13;
      *(undefined2 *)0x3ba = (int)uVar13;
      *(undefined2 *)0x79 = uVar7;
      *(undefined2 *)0x3b8 = uVar7;
      FUN_2000_f98a();
      goto LAB_2000_eed3;
    }
  }
LAB_2000_ef35:
  FUN_2000_c682();
LAB_2000_ef3b:
  return *(undefined2 *)0x26a;
}



// Function: FUN_2000_f3d9 @ 2000:f3d9

undefined2 __cdecl16near FUN_2000_f3d9(void)

{
  uint uVar1;
  int in_AX;
  undefined2 uVar2;
  undefined2 in_CX;
  int iVar3;
  undefined2 unaff_DS;
  bool bVar4;
  
  *(undefined2 *)0x26e = *(undefined2 *)*(undefined2 *)0x25f;
  uVar1 = *(uint *)(*(int *)0x25f + 2);
  *(uint *)0x13 = uVar1;
  if ((in_AX == 1) || ((uVar1 != 0x101 && (uVar1 != 0x102)))) {
    if ((uVar1 & 0xff00) == 0xb00) {
      uVar2 = FUN_2000_d9f1();
      *(undefined2 *)0x26e = uVar2;
    }
  }
  else if (*(int *)(*(int *)0x25f + 0x44) != 1) {
    func_0x00023ce5();
    return in_CX;
  }
  iVar3 = *(int *)(*(int *)0x25f + 0x12);
  bVar4 = false;
  if ((iVar3 == 0) && (func_0x00023ce5(), bVar4)) {
    return 0xf456;
  }
  bVar4 = false;
  uVar2 = FUN_2000_d516();
  if (!bVar4) {
    if (*(int *)(*(int *)0x261 + 2) != 1) {
      if (*(int *)0x13 == 0x3001) {
        FUN_2000_0690();
      }
      else {
        do {
          uVar1 = *(uint *)(*(int *)0x261 + 4);
          *(undefined2 *)(*(int *)0x261 + 2) = 1;
          if ((9 < uVar1) && ((uVar1 - 10 & 3) == 0)) {
            FUN_2000_f4bc();
          }
          *(int *)0x261 = *(int *)0x261 + 0x10;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    uVar2 = FUN_2000_d516();
  }
  return uVar2;
}



// Function: FUN_2000_f4bc @ 2000:f4bc

void __cdecl16near FUN_2000_f4bc(void)

{
  int in_AX;
  int in_BX;
  undefined2 unaff_DS;
  
  if (in_BX != 1) {
    if (*(int *)0x13 == 0x1001) {
      return;
    }
    if (*(int *)0x13 == 0x2001) {
      return;
    }
    if (9 < *(uint *)(*(int *)0x261 + 4)) {
      if (in_AX != 2) {
        if (in_AX != 1) {
          func_0x00023ce5();
          return;
        }
        *(undefined2 *)(*(int *)0x261 + 0xe) = 0;
      }
      *(int *)(*(int *)0x261 + 10) = in_AX;
      if (*(int *)0x13 == 0x501) {
        FUN_2000_f60f();
        return;
      }
      if (*(int *)0x13 == 0x3001) {
        FUN_2000_f64a();
        return;
      }
      if (*(int *)0x13 == 0x4003) {
        FUN_2000_f6b7();
        return;
      }
      if ((*(int *)0x13 != 0x4006) && (*(int *)0x13 != 0x4007)) {
        FUN_2000_f562();
        return;
      }
      FUN_2000_f6f6();
      return;
    }
  }
  func_0x00023ce5();
  return;
}



// Function: FUN_2000_f562 @ 2000:f562

void __cdecl16near FUN_2000_f562(void)

{
  undefined2 uVar1;
  byte bVar2;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)0x261;
  while( true ) {
    if (((char)*(undefined2 *)(*(int *)0x261 + 4) - 10U & 3) == 0) break;
    *(int *)0x261 = *(int *)0x261 + -0x10;
  }
  bVar2 = 0x80;
  if (*(int *)(*(int *)0x261 + 10) == 2) {
    bVar2 = 0x90;
  }
  *(int *)0x261 = *(int *)0x261 + 0x10;
  if (*(int *)(*(int *)0x261 + 10) == 2) {
    bVar2 = bVar2 | 2;
  }
  *(int *)0x261 = *(int *)0x261 + 0x10;
  if (*(int *)(*(int *)0x261 + 10) == 2) {
    bVar2 = bVar2 | 1;
  }
  *(int *)0x261 = *(int *)0x261 + 0x10;
  if (*(int *)(*(int *)0x261 + 10) == 2) {
    bVar2 = bVar2 | 8;
  }
  if ((*(uint *)0x13 & 0xff00) == 0xb00) {
    FUN_2000_da06();
  }
  else {
    out(*(int *)*(undefined2 *)0x261 + 1,bVar2);
  }
  *(undefined2 *)0x261 = uVar1;
  return;
}



// Function: FUN_2000_f60f @ 2000:f60f

byte __cdecl16near FUN_2000_f60f(void)

{
  byte bVar1;
  int in_AX;
  int iVar2;
  byte bVar3;
  undefined2 unaff_DS;
  
  iVar2 = (*(uint *)*(undefined2 *)0x261 & 0xfffe) + 2;
  bVar3 = 1;
  if (*(int *)(*(int *)0x261 + 4) != 10) {
    bVar3 = 2;
  }
  bVar1 = in(iVar2);
  bVar1 = bVar1 & ~bVar3;
  if (in_AX != 2) {
    bVar1 = bVar1 | bVar3;
  }
  out(iVar2,bVar1);
  return bVar1;
}



// Function: FUN_2000_f64a @ 2000:f64a

ulong __cdecl16near FUN_2000_f64a(void)

{
  undefined1 uVar1;
  undefined2 in_AX;
  int iVar2;
  uint uVar4;
  uint uVar5;
  undefined2 unaff_DS;
  byte bVar3;
  
  uVar4 = *(uint *)*(undefined2 *)0x261 | 3;
  bVar3 = (byte)((uint)in_AX >> 8);
  iVar2 = CONCAT11(bVar3,0xff);
  if ((*(uint *)(*(int *)0x261 + 10) & 2) == 0) {
    iVar2 = (uint)bVar3 << 8;
  }
  uVar5 = *(int *)(*(int *)0x261 + 4) - 10U & 3;
  uVar1 = (undefined1)iVar2;
  if (uVar5 == 0) {
    out(uVar4,0x23);
    out(uVar4,uVar1);
  }
  else if (uVar5 == 1) {
    out(uVar4,0x2b);
    out(uVar4,uVar1);
  }
  else {
    out(uVar4,6);
    out(uVar4,uVar1);
  }
  return CONCAT22(*(uint *)*(undefined2 *)0x261,iVar2) | 0x30000;
}



// Function: FUN_2000_f6b7 @ 2000:f6b7

byte __cdecl16near FUN_2000_f6b7(void)

{
  byte bVar1;
  byte bVar2;
  undefined2 unaff_DS;
  
  bVar1 = in(*(int *)*(undefined2 *)0x25f + 6);
  if (*(int *)(*(int *)0x261 + 4) == 10) {
    bVar2 = 0x10;
  }
  else {
    bVar2 = 0x20;
  }
  if (*(int *)(*(int *)0x261 + 10) == 1) {
    bVar1 = bVar1 | bVar2;
  }
  else {
    bVar1 = bVar1 & ~bVar2;
  }
  out(*(int *)*(undefined2 *)0x25f + 6,bVar1);
  return bVar1;
}



// Function: FUN_2000_f6f6 @ 2000:f6f6

uint __cdecl16near FUN_2000_f6f6(void)

{
  uint uVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar1 = in(*(int *)*(undefined2 *)0x25f + 6);
  if (*(int *)(*(int *)0x261 + 4) == 10) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x80;
  }
  if (*(int *)(*(int *)0x261 + 10) == 1) {
    uVar1 = uVar1 | uVar2;
  }
  else {
    uVar1 = uVar1 & ~uVar2;
  }
  out(*(int *)*(undefined2 *)0x25f + 6,uVar1);
  return uVar1;
}



// Function: FUN_2000_f98a @ 2000:f98a

void __cdecl16near FUN_2000_f98a(void)

{
  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined1 uVar4;
  undefined4 uVar5;
  
  uVar3 = 0x1000;
  if (*(int *)0x11 == 1) {
    func_0x00023ce5();
  }
  else {
    FUN_2000_400c();
    uVar3 = 0x1a0f;
    func_0x0001bd84(0x1000);
    FUN_2000_d9ae();
    *(undefined2 *)0x25 = 0x40;
    uVar1 = FUN_2000_fa4e();
    uVar4 = 0xfffd < *(uint *)0x26e;
    out(*(uint *)0x26e + 2,uVar1);
    *(undefined2 *)0x9 = 0;
    *(undefined2 *)0xb = 0;
    *(undefined2 *)0xd = 0;
    *(undefined2 *)0xf = 0;
    uVar5 = FUN_2000_d6fb();
    *(undefined2 *)0x77 = (int)uVar5;
    *(undefined2 *)0x79 = (int)((ulong)uVar5 >> 0x10);
    *(undefined2 *)0x15 = *(undefined2 *)0x26e;
    FUN_2000_faa8();
    if ((!(bool)uVar4) && (func_0x00023d23(), !(bool)uVar4)) {
      bVar2 = in(*(int *)0x26e + 3);
      out(*(int *)0x26e + 3,bVar2 & 8 | (char)*(undefined2 *)0x17 << 4 | 0x86);
      if ((*(int *)0x21 == 0) || (uVar1 = 0, *(int *)0x4b != 0)) {
        uVar1 = 0;
        func_0x00023e77();
      }
      *(undefined2 *)0x11 = 1;
      out(10,*(undefined1 *)0x71);
      FUN_2000_400c();
      FUN_2000_197e();
      if (!(bool)uVar1) {
        return;
      }
    }
  }
  func_0x0001bd47(uVar3);
  return;
}



// Function: FUN_2000_fa4e @ 2000:fa4e

byte __cdecl16near FUN_2000_fa4e(void)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  bVar1 = in(*(int *)0x26e + 2);
  if (*(int *)0x6f == 1) {
    if (*(int *)0x290 == 1) {
      bVar1 = bVar1 & 0x33 | 7;
    }
    else {
      bVar1 = bVar1 & 0x33 | 1;
    }
  }
  else if (*(int *)0x290 == 1) {
    bVar1 = bVar1 & 0x30 | 4;
  }
  else {
    bVar1 = bVar1 & 0x32;
  }
  if (*(int *)(*(int *)0x25f + 6) == 3) {
    bVar1 = bVar1 | 0x40;
  }
  if (*(int *)0x27 != 4) {
    bVar1 = bVar1 | 8;
  }
  return bVar1;
}



// Function: FUN_2000_faa8 @ 2000:faa8

void __cdecl16near FUN_2000_faa8(void)

{
  byte bVar1;
  uint uVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  
  func_0x00023ea9();
  bVar1 = in(*(int *)0x26e + 3);
  out(*(int *)0x26e + 3,bVar1 & 0x7f);
  bVar1 = in(*(int *)0x26e + 2);
  out(*(int *)0x26e + 2,bVar1 | 0x80);
  uVar3 = FUN_2000_d6e6();
  *(undefined2 *)0x2a6 = (int)((ulong)uVar3 >> 0x10);
  *(undefined2 *)0x2a4 = (int)uVar3;
  uVar2 = *(int *)0x1d << 1;
  if ((CARRY2(uVar2,*(uint *)0x2a4)) || ((*(uint *)0x1f & 0x7fff) != 0 || *(int *)0x1d < 0)) {
    *(undefined2 *)0x4b = 1;
    uVar2 = -*(int *)0x2a4;
  }
  *(uint *)0x41 = uVar2;
  out(10,*(byte *)0x71 | 4);
  out(*(undefined2 *)0x6b,(char)*(undefined2 *)0x2a6);
  out(0xc,(char)*(undefined2 *)0x2a6);
  out(*(undefined2 *)0x69,(char)*(undefined2 *)0x2a4);
  out(*(undefined2 *)0x69,(char)((uint)*(undefined2 *)0x2a4 >> 8));
  out(*(undefined2 *)0x6d,(char)(*(int *)0x41 + -1));
  out(*(undefined2 *)0x6d,(char)((uint)(*(int *)0x41 + -1) >> 8));
  if (*(int *)0x6f == 0) {
    bVar1 = *(byte *)0x71 | 0x44;
  }
  else {
    bVar1 = *(byte *)0x71 | 0x48;
  }
  out(0xb,bVar1);
  out(10,*(undefined1 *)0x71);
  FUN_2000_400c();
  return;
}



// Function: FUN_3000_00d4 @ 3000:00d4

undefined2 __cdecl16far FUN_3000_00d4(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)(*(int *)0x263 + 4) == 1) {
    FUN_3000_0349();
  }
  else if (*(int *)(*(int *)0x263 + 4) == 3) {
    FUN_3000_0755();
  }
  else {
    FUN_3000_044b();
  }
  return *(undefined2 *)0x26a;
}



// Function: FUN_3000_02cf @ 3000:02cf

void __cdecl16near FUN_3000_02cf(void)

{
  int in_AX;
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  uVar1 = in_AX << 1 | *(int *)(*(int *)0x263 + 6) << 6 | 0x30;
  if (*(int *)0x3d3 == 1) {
    iVar3 = (*(uint *)*(undefined2 *)0x263 & 0xfff8) + 6;
  }
  else {
    iVar3 = (*(uint *)*(undefined2 *)0x263 & 0xfffc) + 3;
  }
  if (*(int *)0x13 == 0xb03) {
    uVar2 = FUN_3000_d9f1();
    *(undefined2 *)0x26e = uVar2;
    uVar1 = FUN_3000_da06();
  }
  else if (*(int *)0x3d3 == 1) {
    out(iVar3,uVar1);
  }
  else {
    out(iVar3,(char)uVar1);
  }
  *(uint *)(*(int *)0x263 + 8) = uVar1;
  *(undefined2 *)(*(int *)0x263 + 2) = 1;
  return;
}



// Function: FUN_3000_0349 @ 3000:0349

uint __cdecl16near FUN_3000_0349(void)

{
  uint uVar1;
  uint in_AX;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  uVar1 = *(uint *)*(undefined2 *)0x263;
  if (*(int *)0x3d3 == 1) {
    iVar4 = (uVar1 & 0xfff8) + 6;
  }
  else {
    iVar4 = (uVar1 & 0xfffc) + 3;
  }
  if (*(int *)0x13 == 0xb03) {
    FUN_3000_da06();
    FUN_3000_da06();
    uVar2 = FUN_3000_da06();
  }
  else if (*(int *)0x3d3 == 1) {
    out(iVar4,*(undefined2 *)(*(int *)0x263 + 8));
    out(uVar1,in_AX & 0xff);
    uVar2 = in_AX >> 8;
    out(uVar1,uVar2);
  }
  else {
    out(iVar4,(char)*(undefined2 *)(*(int *)0x263 + 8));
    out(uVar1,(char)in_AX);
    uVar3 = (undefined1)(in_AX >> 8);
    uVar2 = CONCAT11(uVar3,uVar3);
    out(uVar1,uVar3);
  }
  return uVar2;
}



// Function: FUN_3000_044b @ 3000:044b

undefined4 __cdecl16near FUN_3000_044b(void)

{
  char cVar1;
  char cVar2;
  undefined2 in_AX;
  char cVar3;
  int iVar4;
  int iVar5;
  int in_BX;
  undefined2 unaff_DS;
  
  cVar1 = (char)((in_BX - 1U) / 100);
  iVar5 = *(int *)*(undefined2 *)0x263;
  iVar4 = iVar5 + 1;
  cVar2 = (char)*(undefined2 *)(*(int *)0x263 + 6);
  if (cVar1 == '\0') {
    cVar2 = cVar2 + '\t';
  }
  else if (cVar1 == '\x01') {
    cVar2 = cVar2 + '\x11';
  }
  else {
    cVar2 = '\a';
    if ((char)((in_BX - 1U) % 100) != '\0') {
      cVar2 = '\x0f';
    }
  }
  out(iVar4,cVar2);
  out(iVar5,(char)in_AX);
  cVar3 = (char)((uint)in_AX >> 8);
  out(iVar5,cVar3);
  cVar2 = cVar3;
  if (cVar1 == '\0') {
    cVar2 = ('\x01' << ((byte)*(undefined2 *)(*(int *)0x263 + 6) & 0x1f)) + '`';
    out(iVar4,cVar2);
    iVar5 = iVar4;
  }
  return CONCAT22(iVar5,CONCAT11(cVar2,cVar3));
}



// Function: FUN_3000_04fc @ 3000:04fc

undefined2 __cdecl16near FUN_3000_04fc(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int in_DX;
  int iVar5;
  int in_BX;
  undefined2 uVar6;
  int unaff_SI;
  undefined2 unaff_DS;
  
  *(undefined1 *)(in_BX + unaff_SI) = 0x8b;
  iVar5 = in_DX + 1;
  out(iVar5,0xd8);
  out(iVar5,4);
  out(in_DX,0x62);
  out(in_DX,0xe);
  out(iVar5,0xc);
  out(in_DX,5);
  out(in_DX,0);
  out(iVar5,0x14);
  out(in_DX,(char)*(undefined2 *)0x271a);
  out(in_DX,(char)((uint)*(undefined2 *)0x271a >> 8));
  out(iVar5,5);
  iVar4 = *(int *)0x271e * 0x100 + -0x7ff6;
  out(in_DX,(char)iVar4);
  out(in_DX,(char)((uint)iVar4 >> 8));
  out(iVar5,0xd);
  out(in_DX,0);
  out(in_DX,0);
  out(iVar5,0x58);
  out(iVar5,0x58);
  out(iVar5,0xe4);
  out(iVar5,0x38);
  do {
    bVar1 = in(iVar5);
    if (*(int *)0x11 == 0) goto LAB_3000_0597;
  } while ((bVar1 & 0x10) == 0);
  do {
    bVar1 = in(iVar5);
    if (*(int *)0x11 == 0) goto LAB_3000_0597;
  } while ((bVar1 & 0x10) != 0);
  out(iVar5,0x90);
  out(iVar5,0x15);
  uVar2 = in(in_DX);
  uVar3 = in(in_DX);
  uVar6 = CONCAT11(uVar3,uVar2);
  bVar1 = in(iVar5);
  if ((bVar1 & 0x20) != 0) {
    FUN_3000_3ce5();
    uVar6 = 0xffff;
  }
LAB_3000_05da:
  *(undefined2 *)0x11 = 0;
  FUN_3000_3f37();
  return uVar6;
LAB_3000_0597:
  FUN_3000_3ce5();
  uVar6 = 0;
  goto LAB_3000_05da;
}



// Function: FUN_3000_06c8 @ 3000:06c8

undefined1 __cdecl16near FUN_3000_06c8(void)

{
  undefined2 in_DX;
  
  in(in_DX);
  out(in_DX,0);
  in(in_DX);
  out(in_DX,0);
  out(in_DX,1);
  out(in_DX,0);
  out(in_DX,0x20);
  out(in_DX,0);
  out(in_DX,0x28);
  out(in_DX,0);
  out(in_DX,0x22);
  out(in_DX,0);
  out(in_DX,0x2a);
  out(in_DX,0);
  out(in_DX,5);
  out(in_DX,0);
  out(in_DX,0x23);
  out(in_DX,0xff);
  out(in_DX,0x2b);
  out(in_DX,0xff);
  out(in_DX,6);
  out(in_DX,0xff);
  out(in_DX,1);
  out(in_DX,0x94);
  return 0x94;
}



// Function: FUN_3000_0755 @ 3000:0755

undefined4 __cdecl16near FUN_3000_0755(void)

{
  undefined2 uVar1;
  byte bVar2;
  char cVar3;
  undefined2 in_AX;
  byte bVar4;
  byte bVar5;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)*(undefined2 *)0x263;
  bVar4 = (byte)*(undefined2 *)(*(int *)0x263 + 6);
  out(uVar1,1);
  bVar2 = in(uVar1);
  bVar5 = (byte)(0x40 >> (bVar4 & 0x1f));
  out(uVar1,1);
  out(uVar1,bVar2 & ~bVar5);
  cVar3 = bVar4 * '\x02';
  out(uVar1,cVar3 + '\x17');
  out(uVar1,(char)in_AX);
  out(uVar1,cVar3 + '\x16');
  out(uVar1,(char)((uint)in_AX >> 8));
  out(uVar1,1);
  bVar2 = in(uVar1);
  bVar2 = bVar2 | bVar5;
  out(uVar1,1);
  out(uVar1,bVar2);
  out(uVar1,10);
  out(uVar1,2);
  return CONCAT22(uVar1,CONCAT11(bVar2,2));
}



// Function: FUN_3000_0856 @ 3000:0856

void __cdecl16near FUN_3000_0856(void)

{
  undefined1 in_AL;
  byte bVar1;
  int iVar2;
  undefined2 unaff_DS;
  bool bVar3;
  
  out(*(int *)0x26e + 0xb,in_AL);
  bVar1 = in(*(int *)0x26e + 0xb);
  if ((bVar1 & 0x10) == 0) {
    FUN_3000_3ce5();
  }
  else {
    out(*(int *)0x26e + 0xb,bVar1 & 0xef);
    out(*(int *)0x26e + 2,0x55);
    bVar1 = in(*(int *)0x26e + 2);
    bVar3 = bVar1 < 0x55;
    if ((bVar1 == 0x55) || (FUN_3000_3ce5(), !bVar3)) {
      out(*(int *)0x26e + 2,2);
      bVar1 = in(*(int *)0x26e + 2);
      bVar3 = bVar1 < 2;
      if ((bVar1 == 2) || (FUN_3000_3ce5(), !bVar3)) {
        iVar2 = 0x100;
        do {
          bVar1 = in(*(int *)0x26e + 8);
          bVar3 = false;
          if ((bVar1 & 0x80) == 0) goto LAB_3000_08d7;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        FUN_3000_3ce5();
        if (!bVar3) {
LAB_3000_08d7:
          *(undefined2 *)(*(int *)0x25f + 8) = 1;
        }
      }
    }
  }
  return;
}



// Function: FUN_3000_0d62 @ 3000:0d62

undefined2 __cdecl16near FUN_3000_0d62(void)

{
  int *piVar1;
  undefined2 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  uint in_AX;
  int iVar5;
  int iVar6;
  int in_DX;
  int iVar7;
  uint uVar8;
  undefined2 unaff_DS;
  undefined1 uVar9;
  
  if ((in_DX == 0) && (in_AX < 30000)) {
    iVar5 = (in_AX & ~(*(int *)0x45 - 1U)) + *(int *)0x45 + *(int *)0x45;
    *(int *)0x47 = iVar5;
    *(int *)0x4f = iVar5;
    *(undefined2 *)0x49 = 0;
    *(int *)0x4f = iVar5;
    *(undefined2 *)0x3d = 1;
    uVar9 = *(int *)0x45 + *(int *)0x31 < 0;
    FUN_3000_d1e8();
    *(undefined2 *)0x4d = 1;
    FUN_3000_1653();
    if (!(bool)uVar9) {
      *(undefined2 *)0x3cf = 0;
      *(undefined2 *)0x3d1 = 5;
      do {
        do {
          do {
            if (*(int *)0x7f != 0) goto LAB_3000_0e8e;
            uVar8 = *(uint *)0x85;
            iVar5 = *(int *)0x89;
          } while (uVar8 < *(uint *)0x47);
          piVar1 = (int *)0x3cf;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            piVar1 = (int *)0x3d1;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              *(undefined2 *)0x3cf = 0;
              uVar9 = in(*(int *)0x26e + *(int *)0x39);
              uVar4 = in(*(int *)0x26e + *(int *)0x39);
              if (CONCAT11(uVar4,uVar9) == 0) {
                FUN_3000_3ce5();
                goto LAB_3000_0e8e;
              }
            }
          }
        } while (uVar8 == *(uint *)0xc7);
        if (uVar8 < *(uint *)0xc7) {
          iVar7 = 0x7c00 - *(int *)0xc7;
          *(undefined2 *)0x27a8 = 1;
        }
        else {
          iVar7 = uVar8 - *(int *)0xc7;
        }
        pcVar3 = (code *)swi(0x21);
        iVar6 = iVar7 * 2;
        (*pcVar3)();
        if (iVar7 * 2 != iVar6) {
          FUN_3000_3ce5();
          break;
        }
        if (*(int *)0x27a8 == 1) {
          uVar8 = *(uint *)0x47;
        }
        *(uint *)0xc7 = uVar8;
        *(undefined2 *)0xc5 = 1;
        *(undefined2 *)0x27a8 = 0;
        *(undefined2 *)0x3cf = 0;
        *(undefined2 *)0x3d1 = 5;
      } while (iVar5 != 0);
    }
LAB_3000_0e8e:
    uVar2 = *(undefined2 *)0x7f;
    FUN_3000_c6b0();
    *(undefined2 *)0x26a = uVar2;
    *(undefined2 *)0x7f = 0xdaa;
    FUN_3000_3ce5();
  }
  else {
    FUN_3000_3ce5();
  }
  return *(undefined2 *)0x26a;
}



// Function: FUN_3000_1332 @ 3000:1332

void __cdecl16near FUN_3000_1332(void)

{
  char cVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x27a4 = 0;
  if (*(int *)0x13 == 0x106) {
    uVar2 = *(uint *)0x17;
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
    out(*(int *)0x26e + 5,cVar1);
  }
  else {
    uVar2 = *(uint *)0x17;
    if (9 < uVar2) {
      uVar2 = uVar2 - 10;
    }
    out(*(int *)0x26e + 9,(char)(uVar2 << 4));
  }
  if ((((*(int *)0x28e != 1) && (*(int *)0x67 != 1)) &&
      ((*(int *)0x25 != 0x40 && ((*(int *)0x25 != 0x20 && (*(int *)0x65 == 1)))))) &&
     ((*(uint *)0x13 & 0xff00) == 0xe00)) {
    FUN_3000_d41c();
    *(undefined2 *)0x17 = *(undefined2 *)(*(int *)0x25f + 4);
    FUN_3000_d41c();
    *(undefined2 *)0x27a4 = 1;
  }
  FUN_3000_3d23();
  return;
}



// Function: FUN_3000_13b6 @ 3000:13b6

void __cdecl16near FUN_3000_13b6(void)

{
  FUN_3000_3d23();
  return;
}



// Function: FUN_3000_1427 @ 3000:1427

void __cdecl16near FUN_3000_1427(void)

{
  undefined2 uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  uint in_BX;
  uint uVar5;
  undefined2 unaff_DS;
  bool bVar6;
  
  if (*(int *)0x27a == 0) {
    return;
  }
  uVar5 = *(uint *)0x13;
  if ((uVar5 == 0x105) || (uVar5 == 0x104)) {
    out(*(int *)0x26e + 0xb,*(byte *)0x73 | 0x80);
    *(byte *)0x73 = *(byte *)0x73 | 0x80;
  }
  else {
    if (uVar5 != 0x106) {
      if (((uVar5 == 0xe04) || (uVar5 == 0xe05)) || (uVar5 = uVar5 & 0xff00, uVar5 != 0xe00)) {
        *(undefined2 *)0x27a = 0;
        return;
      }
      goto code_r0x0003149e;
    }
    bVar4 = in(*(int *)0x26e + 2);
    bVar3 = bVar4 | 4;
    if (*(int *)0x65 == 1) {
      *(int *)0x45 = *(int *)0x45 + 1;
      bVar3 = bVar4 | 0x14;
    }
    out(*(int *)0x26e + 2,bVar3);
  }
  *(undefined2 *)0x29 = 1;
code_r0x0003149e:
  bVar6 = *(int *)0x65 == 0;
  if (*(int *)0x65 == 1) {
    *(undefined2 *)0x27a2 = *(undefined2 *)0x26e;
    FUN_3000_d41c(uVar5);
    if (!bVar6) {
      uVar1 = *(undefined2 *)*(undefined2 *)0x25f;
      *(undefined2 *)0x3f = uVar1;
      *(undefined2 *)0x26e = uVar1;
      if (*(int *)0x28e == 1) {
        FUN_3000_3ac4();
      }
      FUN_3000_3bd6();
      lVar2 = (ulong)(uint)(*(int *)(*(int *)0x25f + 0x26) * 0x100) *
              (ulong)*(uint *)(*(int *)0x25f + 0x24);
      uVar5 = (uint)((ulong)lVar2 >> 0x10);
      if ((*(uint *)0x1f < uVar5) || ((*(uint *)0x1f <= uVar5 && (*(uint *)0x1d <= (uint)lVar2)))) {
        if ((in_BX & 0xff00) == 0xe00) {
          bVar4 = in(*(int *)0x27a2 + 9);
          out(*(int *)0x27a2 + 9,bVar4 & 0x7f);
          FUN_3000_3b47();
          bVar4 = (byte)*(undefined2 *)0x17;
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
          out(*(int *)0x26e + 2,bVar4 << 4 | 0x80);
        }
        FUN_3000_d41c();
        *(undefined2 *)0x26e = *(undefined2 *)0x27a2;
      }
      else {
        FUN_3000_3ce5();
      }
    }
  }
  return;
}



// Function: FUN_3000_145a @ 3000:145a

void __cdecl16near FUN_3000_145a(void)

{
  char in_CL;
  undefined2 unaff_DS;
  
  *(char *)0x4074 = *(char *)0x4074 + in_CL;
  *(undefined2 *)0x27a = 0;
  return;
}



// Function: FUN_3000_1586 @ 3000:1586

void __cdecl16near FUN_3000_1586(void)

{
  byte in_AL;
  byte bVar1;
  uint uVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  
  bVar1 = in_AL | 4;
  out(*(int *)0x26e + 9,bVar1);
  if ((*(int *)0x21 == 0) || (*(int *)0x4b == 1)) {
    bVar1 = in_AL | 0x84;
  }
  out(*(int *)0x26e + 9,bVar1);
  uVar3 = FUN_3000_d6e6();
  *(undefined2 *)0x7d = (int)((ulong)uVar3 >> 0x10);
  *(undefined2 *)0x7b = (int)uVar3;
  uVar2 = *(int *)0x1d << 1;
  if ((CARRY2(uVar2,*(uint *)0x7b)) || ((*(uint *)0x1f & 0x7fff) != 0 || *(int *)0x1d < 0)) {
    *(undefined2 *)0x4b = 1;
    if ((*(int *)0x13 == 0x101) || (*(int *)0x13 == 0x103)) {
      FUN_3000_3ce5();
    }
    uVar2 = -*(int *)0x7b;
  }
  *(uint *)0x41 = uVar2;
  out(10,*(byte *)0x71 | 4);
  out(*(undefined2 *)0x6b,(char)*(undefined2 *)0x7d);
  out(0xc,(char)*(undefined2 *)0x7d);
  out(*(undefined2 *)0x69,(char)*(undefined2 *)0x7b);
  out(*(undefined2 *)0x69,(char)((uint)*(undefined2 *)0x7b >> 8));
  out(*(undefined2 *)0x6d,(char)(*(int *)0x41 + -1));
  out(*(undefined2 *)0x6d,(char)((uint)(*(int *)0x41 + -1) >> 8));
  bVar1 = *(byte *)0x71;
  if ((*(int *)0x21 == 1) && (*(int *)0x4b != 1)) {
    bVar1 = bVar1 | 0x10;
  }
  out(0xb,bVar1 | 0x44);
  out(10,*(undefined1 *)0x71);
  FUN_3000_400c();
  return;
}



// Function: FUN_3000_1653 @ 3000:1653

byte __cdecl16near FUN_3000_1653(void)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined1 uVar6;
  
  bVar5 = *(int *)0x11 == 0;
  if ((*(int *)0x11 != 1) || (bVar2 = FUN_3000_3ce5(), !bVar5)) {
    *(undefined2 *)0x39 = 0x10;
    if (*(int *)0x13 == 0x106) {
      *(undefined2 *)0x39 = 8;
    }
    uVar3 = 0;
    uVar6 = *(uint *)(*(int *)0x25f + 0x5c) < 2;
    if (*(uint *)(*(int *)0x25f + 0x5c) != 2) {
      uVar3 = 2;
    }
    *(undefined1 *)0x3c0 = uVar3;
    *(undefined2 *)0x7 = 0;
    bVar2 = FUN_3000_1b8e();
    if (!(bool)uVar6) {
      FUN_3000_400c();
      bVar2 = FUN_3000_197e();
      if ((!(bool)uVar6) && (bVar2 = FUN_3000_1bb5(), !(bool)uVar6)) {
        FUN_3000_d9ae();
        bVar5 = false;
        if (-1 < *(int *)0x31) goto LAB_3000_16c4;
        do {
          bVar2 = FUN_3000_3ce5();
          if (bVar5) goto LAB_3000_1976;
LAB_3000_16c4:
        } while ((*(int *)0x1f == 0) &&
                (bVar5 = (uint)(*(int *)0x31 + *(int *)0x45) < *(uint *)0x1d,
                *(uint *)0x1d < (uint)(*(int *)0x31 + *(int *)0x45)));
        bVar2 = in(*(int *)0x26e + 3);
        if ((bVar2 & 1) == 0) {
          *(int *)0x7d = (*(uint *)0x77 >> 4) + *(int *)0x79;
          uVar1 = *(uint *)0x77;
          *(uint *)0x7b = uVar1 & 0xf;
          *(uint *)0x77 = uVar1 & 0xf;
          *(undefined2 *)0x79 = *(undefined2 *)0x7d;
          *(undefined2 *)0x9 = 0;
          *(undefined2 *)0xb = 0;
          *(undefined2 *)0xd = 0;
          *(undefined2 *)0xf = 0;
          if (*(int *)0x13 == 0x106) {
            bVar5 = 0xfffd < *(uint *)0x26e;
            out(*(uint *)0x26e + 2,*(undefined1 *)0x3c0);
          }
          else {
            out(*(int *)0x26e + 10,*(byte *)0x27a1 | 1 | *(byte *)0x3c0);
            bVar2 = (byte)*(undefined2 *)0x274 | 0x10;
            out(*(int *)0x26e + 0xb,bVar2);
            *(byte *)0x73 = bVar2;
            bVar5 = 0xfff7 < *(uint *)0x26e;
            out(*(uint *)0x26e + 8,bVar2);
          }
          bVar2 = FUN_3000_1332();
          if (!bVar5) {
            FUN_3000_3e77();
            if (*(int *)0x13 != 0x106) {
              uVar3 = in(*(int *)0x26e + 2);
              out(*(int *)0x26e + 2,uVar3);
            }
            *(undefined2 *)0x7b = *(undefined2 *)0x77;
            *(undefined2 *)0x9 = 0;
            *(undefined2 *)0xb = 0;
            *(undefined2 *)0xd = 0;
            *(undefined2 *)0xf = 0;
            FUN_3000_400c();
            if (*(int *)0x13 == 0x106) {
              bVar2 = in(*(int *)0x26e + 2);
              out(*(int *)0x26e + 2,bVar2 & 0xf7);
              out(*(int *)0x26e + 2,bVar2 & 0xf7 | 8);
              out(*(int *)0x26e + 0xb,0x7a);
              out(*(int *)0x26e + 0xb,0xb0);
              out(*(int *)0x26e + 10,(char)*(undefined2 *)0x45);
              out(*(int *)0x26e + 10,(char)((uint)*(undefined2 *)0x45 >> 8));
              out(*(int *)0x26e + 0xb,0x30);
              out(*(int *)0x26e + 8,(char)(*(int *)0x1f + 1));
              out(*(int *)0x26e + 8,(char)((uint)(*(int *)0x1f + 1) >> 8));
              out(*(int *)0x26e + 0xb,0x70);
              out(*(int *)0x26e + 0xb,0x7a);
              iVar4 = (*(int *)0x1d - *(int *)0x31) + -1;
              out(*(int *)0x26e + 9,(char)iVar4);
              out(*(int *)0x26e + 9,(char)((uint)iVar4 >> 8));
            }
            else {
              out(*(int *)0x26e + 0xb,*(byte *)0x73 & 0xbf);
              bVar2 = *(byte *)0x73 & 0xbf | 0x40;
              out(*(int *)0x26e + 0xb,bVar2);
              *(byte *)0x73 = bVar2;
              out(*(int *)0x26e + 0x13,0x7a);
              out(*(int *)0x26e + 0x13,0xb0);
              out(*(int *)0x26e + 0x12,(char)*(undefined2 *)0x45);
              out(*(int *)0x26e + 0x12,(char)((uint)*(undefined2 *)0x45 >> 8));
              out(*(int *)0x26e + 0x13,0x30);
              out(*(int *)0x26e + 0x10,(char)(*(int *)0x1f + 1));
              out(*(int *)0x26e + 0x10,(char)((uint)(*(int *)0x1f + 1) >> 8));
              out(*(int *)0x26e + 0x13,0x70);
              out(*(int *)0x26e + 0x13,0x7a);
              iVar4 = (*(int *)0x1d - *(int *)0x31) + -1;
              out(*(int *)0x26e + 0x11,(char)iVar4);
              out(*(int *)0x26e + 0x11,(char)((uint)iVar4 >> 8));
            }
            uVar3 = FUN_3000_1427();
            if (*(int *)0x65 == 1) {
              FUN_3000_400c();
              *(undefined2 *)0x26e = *(undefined2 *)0x3f;
              uVar3 = FUN_3000_3bbe();
              *(undefined2 *)0x26e = *(undefined2 *)0x27a2;
            }
            if (*(int *)0x13 == 0x106) {
              out(*(int *)0x26e + 4,uVar3);
              bVar2 = in(*(int *)0x26e + 5);
              out(*(int *)0x26e + 5,bVar2 | 0x80);
              bVar2 = bVar2 | 0x83;
              out(*(int *)0x26e + 5,bVar2);
            }
            else {
              out(*(int *)0x26e + 8,uVar3);
              bVar2 = in(*(int *)0x26e + 9);
              out(*(int *)0x26e + 9,bVar2 | 3);
              out(*(int *)0x26e + 9,bVar2 | 0x83);
              bVar2 = *(byte *)0x27a1 | *(byte *)0x3c0;
              out(*(int *)0x26e + 10,bVar2);
            }
            *(undefined2 *)0x11 = 1;
            return bVar2;
          }
        }
        else {
          *(undefined2 *)0x31 = 0;
          bVar2 = FUN_3000_3ce5();
        }
      }
    }
  }
LAB_3000_1976:
  *(undefined2 *)0x11 = 0;
  return bVar2;
}



// Function: FUN_3000_197e @ 3000:197e

undefined2 __cdecl16near FUN_3000_197e(void)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  undefined2 in_stack_00000000;
  
  if (*(int *)0x27 == 4) {
    return in_stack_00000000;
  }
  uVar1 = *(undefined2 *)0x278;
  *(undefined2 *)0x2795 = *(undefined2 *)0x276;
  *(undefined2 *)0x2797 = uVar1;
  if (*(int *)0x2d != 1) {
    uVar3 = FUN_3000_45cd();
    *(undefined2 *)0x2795 = (int)uVar3;
    *(undefined2 *)0x2797 = (int)((ulong)uVar3 >> 0x10);
  }
  if (*(int *)(*(int *)0x25f + 10) == 10) {
    *(undefined2 *)0x278d = 0x9680;
    *(undefined2 *)0x278f = 0x98;
    *(undefined2 *)0x2791 = 0;
    *(undefined2 *)0x2793 = 0;
  }
  else {
    *(undefined2 *)0x278d = 0x4240;
    *(undefined2 *)0x278f = 0xf;
    *(undefined2 *)0x2791 = 0;
    *(undefined2 *)0x2793 = 0;
  }
  FUN_3000_44e9();
  *(undefined2 *)0x2799 = *(undefined2 *)0x278d;
  *(undefined2 *)0x279b = *(undefined2 *)0x278f;
  *(undefined2 *)0x279d = 1;
  do {
    do {
      *(int *)0x279d = *(int *)0x279d + 1;
      *(undefined2 *)0x278d = *(undefined2 *)0x2799;
      *(undefined2 *)0x278f = *(undefined2 *)0x279b;
      FUN_3000_44e9();
    } while (*(int *)0x278f != 0);
  } while (*(int *)0x278d < 0);
  *(undefined2 *)0x279f = *(undefined2 *)0x278d;
  if (*(int *)0x279d != 1) {
    if (*(int *)0x279f != 1) {
      uVar2 = *(uint *)0x13 & 0xff00;
      if ((uVar2 == 0x100) || (uVar2 == 0xe00)) {
        FUN_3000_1b4f();
      }
      else if (uVar2 == 0xc00) {
        FUN_3000_2f3a();
      }
      else if (uVar2 == 0x500) {
        FUN_3000_f1c7();
      }
      else if (uVar2 == 0xa00) {
        FUN_3000_368a();
      }
      else if (uVar2 == 0x6000) {
        FUN_3000_3295();
      }
      else {
        FUN_3000_5dc6();
      }
      if (*(int *)(*(int *)0x25f + 10) == 10) {
        *(undefined2 *)0x278d = 0x9680;
        *(undefined2 *)0x278f = 0x98;
        *(undefined2 *)0x2791 = 0;
        *(undefined2 *)0x2793 = 0;
      }
      else {
        *(undefined2 *)0x278d = 0x4240;
        *(undefined2 *)0x278f = 0xf;
        *(undefined2 *)0x2791 = 0;
        *(undefined2 *)0x2793 = 0;
      }
      FUN_3000_44e9();
      uVar3 = CONCAT22(*(undefined2 *)0x278f,*(undefined2 *)0x278d);
      if (*(int *)0x2d != 1) {
        uVar3 = FUN_3000_447d();
      }
      *(undefined2 *)0x276 = (int)uVar3;
      *(undefined2 *)0x278 = (int)((ulong)uVar3 >> 0x10);
      return in_stack_00000000;
    }
    if (*(int *)(*(int *)0x25f + 10) != 10) {
      FUN_3000_3ce5();
      return in_stack_00000000;
    }
  }
  FUN_3000_3ce5();
  return in_stack_00000000;
}



// Function: FUN_3000_1b4f @ 3000:1b4f

undefined4 __cdecl16near FUN_3000_1b4f(void)

{
  undefined2 in_AX;
  undefined1 uVar1;
  undefined2 in_DX;
  undefined2 in_BX;
  undefined2 unaff_DS;
  
  uVar1 = (undefined1)((uint)in_AX >> 8);
  out(*(int *)0x26e + 0xf,0xb4);
  out(*(int *)0x26e + 0xf,0x74);
  out(*(int *)0x26e + 0xe,(char)in_BX);
  out(*(int *)0x26e + 0xe,(char)((uint)in_BX >> 8));
  out(*(int *)0x26e + 0xd,(char)in_AX);
  out(*(int *)0x26e + 0xd,uVar1);
  return CONCAT22(in_DX,CONCAT11(uVar1,0x74));
}



// Function: FUN_3000_1b8e @ 3000:1b8e

void __cdecl16near FUN_3000_1b8e(void)

{
  undefined2 unaff_DS;
  
  if ((*(int *)0x2f == 0) && (*(int *)0x13 != 0x106)) {
    out(*(int *)0x26e + 2,(char)*(undefined2 *)0x19 + (char)(*(int *)0x1b << 4));
  }
  return;
}



// Function: FUN_3000_1bb5 @ 3000:1bb5

void __cdecl16near FUN_3000_1bb5(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined1 uVar6;
  
  bVar5 = false;
  if (*(int *)0x2f == 0) {
    uVar2 = FUN_3000_20af();
    uVar6 = true;
    if (bVar5) goto LAB_3000_1c0a;
    if ((*(uint *)0x13 & 0xff00) == 0xe00) goto LAB_3000_1c0c;
    if ((((*(int *)0x13 == 0x103) || (*(int *)0x13 == 0x104)) || (*(int *)0x13 == 0x105)) ||
       (*(int *)0x13 == 0x106)) {
      uVar6 = false;
      if (((int)uVar2 < 0) || (uVar6 = uVar2 < 8, 8 < (int)uVar2)) {
        do {
          uVar2 = FUN_3000_3ce5();
LAB_3000_1c0a:
          if ((bool)uVar6) {
            return;
          }
LAB_3000_1c0c:
          uVar6 = false;
        } while (((int)uVar2 < 0) || (uVar6 = uVar2 < 3, 3 < (int)uVar2));
      }
      if (*(int *)0x13 == 0x106) {
        uVar3 = *(uint *)0x19;
        cVar4 = '\0';
        do {
          out(*(int *)0x26e + 6,cVar4);
          out(*(int *)0x26e + 7,(byte)uVar2 * '\x10' + (char)uVar3);
          cVar4 = cVar4 + '\x01';
          uVar3 = uVar3 + 1;
        } while (uVar3 <= *(uint *)0x1b);
      }
      else {
        bVar1 = *(byte *)0x73 & 0xf0 | (byte)uVar2;
        out(*(int *)0x26e + 0xb,bVar1);
        *(byte *)0x73 = bVar1;
        if (*(int *)0x274 != *(int *)0x3b0) {
          *(int *)0x3b0 = *(int *)0x274;
          FUN_3000_d7e4();
        }
      }
    }
  }
  return;
}



// Function: FUN_3000_20af @ 3000:20af

void __cdecl16near FUN_3000_20af(void)

{
  uint in_AX;
  uint *puVar1;
  undefined2 unaff_DS;
  
  if ((*(uint *)0x13 & 0xff00) == 0xe00) {
    if (in_AX < 100) {
      if (*(int *)(*(int *)0x25f + 0xc) != 0x12d) goto LAB_3000_2131;
    }
    else if (*(int *)(*(int *)0x25f + 0xc) != 300) goto LAB_3000_2131;
    if ((*(int *)0x13 == 0xe01) || (*(int *)0x13 == 0xe04)) {
      puVar1 = (uint *)0x276b;
    }
    else {
      puVar1 = (uint *)0x2749;
    }
  }
  else {
    if ((((*(int *)0x13 != 0x103) && (*(int *)0x13 != 0x104)) && (*(int *)0x13 != 0x105)) &&
       (*(int *)0x13 != 0x106)) {
LAB_3000_213c:
      *(uint *)0x274 = in_AX;
      return;
    }
    puVar1 = (uint *)0x2723;
  }
  for (; *puVar1 != 0xffff; puVar1 = puVar1 + 2) {
    if (*puVar1 == in_AX) {
      in_AX = puVar1[1];
      goto LAB_3000_213c;
    }
  }
LAB_3000_2131:
  FUN_3000_3ce5();
  return;
}



// Function: FUN_3000_23d6 @ 3000:23d6

void __cdecl16near FUN_3000_23d6(void)

{
  int *piVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  byte in_BL;
  uint *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar6;
  undefined1 in_ZF;
  
  do {
    if ((bool)in_ZF) {
      *(int *)0xb = *(int *)0xb + 1;
    }
    uVar4 = *(uint *)0x9;
    if ((uVar4 == *(uint *)0x1d) && (uVar4 = *(uint *)0xb, *(uint *)0x1f <= uVar4)) {
      return;
    }
    out(*(int *)0x26e + 1,(char)uVar4);
    *(int *)0x3c5 = *(int *)0x3c5 + 1;
    if (*(uint *)0x1b < *(uint *)0x3c5) {
      *(undefined2 *)0x3c5 = *(undefined2 *)0x19;
    }
    iVar5 = *(int *)0x3df;
    do {
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    out(*(int *)0x26e + 2,(char)*(undefined2 *)0x3c5);
    iVar5 = *(int *)0x3df;
    do {
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = 0;
    do {
      bVar2 = in(*(int *)0x26e + 2);
      bVar6 = false;
      if ((bVar2 & 0x80) == 0) goto LAB_3000_23ad;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    FUN_3000_3ce5();
    if (bVar6) {
      return;
    }
LAB_3000_23ad:
    bVar2 = in(*(int *)0x26e);
    uVar3 = in(*(int *)0x26e + 1);
    if (*(int *)0x23 == 1) {
      uVar4 = CONCAT11(uVar3,bVar2) >> 4;
    }
    else {
      uVar4 = CONCAT11(uVar3,bVar2 | in_BL);
    }
    *unaff_DI = uVar4;
    unaff_DI = unaff_DI + 1;
    piVar1 = (int *)0x9;
    *piVar1 = *piVar1 + 1;
    in_ZF = *piVar1 == 0;
  } while( true );
}



// Function: FUN_3000_2422 @ 3000:2422

uint __cdecl16near FUN_3000_2422(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint in_AX;
  uint uVar4;
  int iVar5;
  undefined2 in_DX;
  uint uVar6;
  undefined2 unaff_DS;
  bool bVar7;
  
  out(in_DX,(char)in_AX);
  uVar6 = *(int *)0x288 << 4;
  *(undefined2 *)0x11 = 1;
LAB_3000_2431:
  do {
    iVar5 = 0;
    out(*(int *)0x26e + 1,(char)in_AX);
    do {
      bVar1 = in(*(int *)0x26e + 2);
      bVar7 = false;
      if ((bVar1 & 0x80) == 0) goto LAB_3000_2452;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar4 = FUN_3000_3ce5();
    if (bVar7) goto LAB_3000_2488;
LAB_3000_2452:
    uVar2 = in(*(int *)0x26e);
    uVar3 = in(*(int *)0x26e + 1);
    in_AX = CONCAT11(uVar3,uVar2);
    if (*(int *)0x11 == 0) {
      uVar4 = FUN_3000_3ce5();
      goto LAB_3000_2488;
    }
    if (*(int *)0x28a != 1) {
      if (uVar6 < in_AX) goto LAB_3000_247a;
      goto LAB_3000_2431;
    }
    if (in_AX < uVar6) {
LAB_3000_247a:
      uVar4 = in_AX >> 4;
LAB_3000_2488:
      *(undefined2 *)0x11 = 0;
      return uVar4;
    }
  } while( true );
}



// Function: FUN_3000_2f3a @ 3000:2f3a

undefined4 __cdecl16near FUN_3000_2f3a(void)

{
  undefined2 in_AX;
  undefined1 uVar1;
  undefined2 in_DX;
  undefined2 unaff_DS;
  
  uVar1 = (undefined1)((uint)in_AX >> 8);
  out(*(int *)0x26e + 7,0xb4);
  out(*(int *)0x26e + 6,(char)in_AX);
  out(*(int *)0x26e + 6,uVar1);
  return CONCAT22(in_DX,CONCAT11(uVar1,0xb4));
}



// Function: FUN_3000_3295 @ 3000:3295

undefined4 __cdecl16near FUN_3000_3295(void)

{
  undefined2 in_AX;
  undefined1 uVar1;
  undefined2 in_DX;
  undefined2 in_BX;
  undefined2 unaff_DS;
  
  uVar1 = (undefined1)((uint)in_AX >> 8);
  out(*(int *)0x26e + 7,0xb4);
  out(*(int *)0x26e + 7,0x74);
  out(*(int *)0x26e + 6,(char)in_BX);
  out(*(int *)0x26e + 6,(char)((uint)in_BX >> 8));
  out(*(int *)0x26e + 5,(char)in_AX);
  out(*(int *)0x26e + 5,uVar1);
  return CONCAT22(in_DX,CONCAT11(uVar1,0x74));
}



// Function: FUN_3000_368a @ 3000:368a

void __cdecl16near FUN_3000_368a(void)

{
  undefined2 in_AX;
  undefined2 in_BX;
  undefined2 unaff_DS;
  
  if (*(int *)0x27 != 4) {
    out(*(int *)0x26e + 0xe,0xb4);
    out(*(int *)0x26e + 0xe,0x74);
    out(*(int *)0x26e + 0xc,(char)in_BX);
    out(*(int *)0x26e + 0xc,(char)((uint)in_BX >> 8));
    out(*(int *)0x26e + 10,(char)in_AX);
    out(*(int *)0x26e + 10,(char)((uint)in_AX >> 8));
  }
  return;
}



// Function: FUN_3000_3ac4 @ 3000:3ac4

undefined4 __cdecl16near FUN_3000_3ac4(void)

{
  undefined2 unaff_DS;
  
  out(*(int *)0x26e + 2,3);
  out(*(int *)0x26e + 0xe,0xb4);
  in(*(undefined2 *)0x26e);
  out(*(int *)0x26e + 0xe,0xb0);
  return CONCAT22(*(int *)0x26e + 0xe,0xb0);
}



// Function: FUN_3000_3b47 @ 3000:3b47

undefined4 __cdecl16near FUN_3000_3b47(void)

{
  int in_AX;
  int in_DX;
  int iVar1;
  undefined2 unaff_DS;
  
  if (in_DX != 0) {
    if (in_AX == 0) goto LAB_3000_3b55;
    in_AX = 0;
  }
  in_DX = in_DX + 1;
LAB_3000_3b55:
  out(*(int *)0x26e + 0xe,0xb0);
  out(*(int *)0x26e + 0xc,(char)in_DX);
  out(*(int *)0x26e + 0xc,(char)((uint)in_DX >> 8));
  out(*(int *)0x26e + 0xe,0x70);
  out(*(int *)0x26e + 0xe,0x74);
  out(*(int *)0x26e + 0xe,0x70);
  out(*(int *)0x26e + 0xe,0x74);
  iVar1 = *(int *)0x26e + 10;
  out(iVar1,(char)in_AX);
  out(iVar1,(char)((uint)in_AX >> 8));
  return CONCAT22(iVar1,in_AX);
}



// Function: FUN_3000_3bbe @ 3000:3bbe

undefined1 __cdecl16near FUN_3000_3bbe(void)

{
  undefined2 unaff_DS;
  
  out(*(int *)0x26e + 0xe,0x70);
  out(*(int *)0x26e + 0xe,0x74);
  return 0x74;
}



// Function: FUN_3000_3bd6 @ 3000:3bd6

void __cdecl16near FUN_3000_3bd6(void)

{
  char cVar1;
  int in_AX;
  undefined2 unaff_DS;
  
  cVar1 = (char)in_AX;
  if ((in_AX == 0) || (cVar1 == '\x02')) {
    out(*(int *)0x26e + 2,cVar1);
    *(char *)0x28fe = cVar1;
  }
  else {
    FUN_3000_3ce5();
  }
  return;
}



// Function: FUN_3000_3c4c @ 3000:3c4c

undefined4 __cdecl16near FUN_3000_3c4c(void)

{
  code *pcVar1;
  undefined2 in_AX;
  undefined2 in_DX;
  int in_BX;
  undefined2 unaff_DS;
  undefined2 uStack_8;
  
  uStack_8 = in_DX;
  if (*(int *)0x3d69 == 0) goto LAB_3000_3c9f;
  if (*(int *)0x3d69 != 3) {
    if (*(int *)0x3d69 == 1) {
      if (*(int *)(in_BX + 2) != 1) goto LAB_3000_3c9f;
    }
    else if (*(int *)(in_BX + 2) != 0) goto LAB_3000_3c9f;
  }
  FUN_3000_dafa();
  func_0x0003db0c();
  uStack_8 = 0x3c8c;
  FUN_3000_dafa();
  FUN_3000_dafa();
  FUN_3000_dafa();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
LAB_3000_3c9f:
  return CONCAT22(uStack_8,in_AX);
}



// Function: FUN_3000_3ca5 @ 3000:3ca5

int __cdecl16near FUN_3000_3ca5(void)

{
  int *piVar1;
  int in_AX;
  int iVar2;
  int *piVar3;
  undefined2 unaff_DS;
  
  piVar3 = (int *)0x28ff;
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



// Function: FUN_3000_3ce5 @ 3000:3ce5

void __cdecl16near FUN_3000_3ce5(void)

{
  int iVar1;
  int in_BX;
  undefined2 unaff_DS;
  
  iVar1 = FUN_3000_d9a6();
  *(int *)0x26a = iVar1;
  if (iVar1 != 0) {
    FUN_3000_3ca5();
    FUN_3000_3c4c();
    if ((*(int *)0x3d6b != 0) && ((*(int *)0x3d6b == 2 || (*(int *)(in_BX + 2) == 0)))) {
      *(undefined2 *)0x3d5 = 1;
    }
  }
  return;
}



// Function: FUN_3000_3d23 @ 3000:3d23

undefined2 __cdecl16near FUN_3000_3d23(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  code *pcVar1;
  char cVar2;
  uint in_AX;
  int in_DX;
  undefined2 uVar3;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  if (in_AX == 0) {
    param_3 = FUN_3000_3ce5();
  }
  else {
    if (in_AX < 10) {
      cVar2 = (char)in_AX + '\b';
    }
    else {
      cVar2 = (char)in_AX + 'h';
    }
    uVar3 = 2;
    if (((((((in_DX != 1) && (uVar3 = 0x16e, in_DX != 2)) && (uVar3 = 0x2b0, in_DX != 3)) &&
          ((uVar3 = 0x45d, in_DX != 4 && (uVar3 = 0x691, in_DX != 5)))) &&
         ((uVar3 = 0x890, in_DX != 6 && ((uVar3 = 0x9c8, in_DX != 7 && (uVar3 = 0xd2b, in_DX != 8)))
          ))) && (uVar3 = 0xbff, in_DX != 9)) &&
       (((((uVar3 = 0xd7d, in_DX != 10 && (uVar3 = 0xf0d, in_DX != 0xb)) &&
          (uVar3 = 0x1064, in_DX != 0xc)) &&
         (((uVar3 = 0x1169, in_DX != 0xd && (uVar3 = 0x12d1, in_DX != 0xe)) &&
          ((uVar3 = 0x136f, in_DX != 0xf &&
           ((uVar3 = 0x14a5, in_DX != 0x10 && (uVar3 = 0x1601, in_DX != 0x11)))))))) &&
        ((uVar3 = 0x1709, in_DX != 0x12 && (uVar3 = 0x183d, in_DX != 0x13)))))) {
      uVar3 = 0x199c;
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)(cVar2);
    *(undefined2 *)0x3db2 = uVar3;
    *(undefined2 *)0x3db4 = unaff_ES;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    FUN_3000_3ef9();
  }
  return param_3;
}



// Function: FUN_3000_3e77 @ 3000:3e77

uint __cdecl16near FUN_3000_3e77(void)

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
  *(undefined2 *)0x3dbe = CONCAT11((char)(in_AX >> 8),uVar1);
  bVar2 = ~(byte)(1 << ((byte)uVar3 & 0x1f)) & (byte)*(undefined2 *)0x3dbe;
  if (in_AX < 10) {
    out(0x21,bVar2);
  }
  else {
    out(0xa1,bVar2);
  }
  return in_AX;
}



// Function: FUN_3000_3ef9 @ 3000:3ef9

undefined4 __cdecl16near FUN_3000_3ef9(void)

{
  code *pcVar1;
  undefined2 in_CX;
  undefined2 in_BX;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  
  FUN_3000_d9a6();
  if (*(int *)0x3db8 == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    *(undefined2 *)0x3db6 = in_BX;
    *(undefined2 *)0x3db8 = unaff_ES;
    pcVar1 = (code *)swi(0x21);
    DAT_3000_7cff = in_BX;
    DAT_3000_7d01 = unaff_ES;
    (*pcVar1)();
  }
  return CONCAT22(in_CX,in_stack_00000000);
}



// Function: FUN_3000_3f37 @ 3000:3f37

undefined2 __cdecl16far FUN_3000_3f37(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  uVar2 = FUN_3000_d9a6();
  if (*(int *)0x3db8 != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    *(undefined2 *)0x3db6 = 0;
    *(undefined2 *)0x3db8 = 0;
  }
  return uVar2;
}



// Function: FUN_3000_400c @ 3000:400c

int __cdecl16near FUN_3000_400c(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int in_AX;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *unaff_DI;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x7 = 0;
  *(undefined2 *)0x15 = *(undefined2 *)0x26e;
  *(undefined2 *)0x3b = 1;
  *(undefined2 *)0x11 = 1;
  if (in_AX == 0) {
    unaff_DI = (undefined1 *)0x7f;
  }
  else if (in_AX == 1) {
    unaff_DI = (undefined1 *)0xf7;
  }
  else if (in_AX == 2) {
    unaff_DI = (undefined1 *)0x16f;
  }
  else if (in_AX == 3) {
    unaff_DI = (undefined1 *)0x1e7;
  }
  puVar4 = (undefined1 *)0x7;
  for (iVar3 = 0x78; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return in_AX;
}



// Function: FUN_3000_4469 @ 3000:4469

void __cdecl16near FUN_3000_4469(void)

{
  return;
}



// Function: FUN_3000_447d @ 3000:447d

int __cdecl16near FUN_3000_447d(void)

{
  int iVar1;
  int in_CX;
  uint in_BX;
  
  iVar1 = FUN_3000_4469();
  if ((in_CX < 0) || (in_BX <= (uint)(in_CX << 1))) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// Function: FUN_3000_44e9 @ 3000:44e9

void __cdecl16near FUN_3000_44e9(void)

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
    if ((char)(uVar7 >> 8) != '\0') goto LAB_3000_4538;
    uVar3 = CONCAT11((char)uVar7,(char)(uVar6 >> 8));
    uVar4 = CONCAT11((char)uVar6,*(undefined1 *)((int)unaff_DI + 7));
    if ((in_CX <= uVar3) && ((in_CX < uVar3 || (in_BX <= uVar4)))) {
      uVar7 = uVar7 & 0xff;
      goto LAB_3000_4538;
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
LAB_3000_4559:
  *unaff_DI = iVar9;
  return;
LAB_3000_4538:
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
  goto LAB_3000_4559;
}



// Function: FUN_3000_45cd @ 3000:45cd

undefined4 __cdecl16near FUN_3000_45cd(void)

{
  uint in_AX;
  int in_DX;
  uint in_BX;
  
  return CONCAT22((int)((ulong)in_AX * (ulong)in_BX >> 0x10) + in_DX * in_BX,
                  (int)((ulong)in_AX * (ulong)in_BX));
}



// Function: FUN_3000_52bc @ 3000:52bc

void FUN_3000_52bc(void)

{
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1000_32f2();
}



// Function: FUN_3000_59a2 @ 3000:59a2

void __cdecl16near FUN_3000_59a2(void)

{
  uint in_AX;
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined1 in_CF;
  bool bVar4;
  
  while( true ) {
    if ((bool)in_CF) {
      return;
    }
    out(*(int *)0x26e + 2,in_AX & 0xff00);
    uVar1 = in(*(int *)0x26e + 2);
    in_CF = 0;
    if ((char)uVar1 == '\0') break;
    in_AX = FUN_3000_3ce5();
  }
  iVar3 = -0x1000;
  out(*(undefined2 *)0x26e,uVar1);
  do {
    uVar2 = in(*(int *)0x26e + 4);
    bVar4 = false;
    if ((uVar2 & 0x80) != 0) goto LAB_3000_59dc;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_3000_3ce5();
  if (!bVar4) {
LAB_3000_59dc:
    *(undefined2 *)(*(int *)0x25f + 8) = 1;
  }
  return;
}



// Function: FUN_3000_5dc6 @ 3000:5dc6

undefined4 __cdecl16near FUN_3000_5dc6(void)

{
  uint in_AX;
  undefined2 in_DX;
  byte in_BL;
  byte in_BH;
  undefined2 unaff_DS;
  
  out(*(int *)0x26e + 0xe,0xb4);
  out(*(int *)0x26e + 0xe,0x74);
  out(*(int *)0x26e + 0xc,(uint)in_BL);
  out(*(int *)0x26e + 0xc,(uint)in_BH);
  out(*(int *)0x26e + 10,in_AX & 0xff);
  out(*(int *)0x26e + 10,in_AX >> 8);
  return CONCAT22(in_DX,in_AX >> 8);
}



// Function: FUN_3000_6472 @ 3000:6472

void FUN_3000_6472(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_64fc @ 3000:64fc

undefined2 __cdecl16far FUN_3000_64fc(void)

{
  undefined2 uVar1;
  int iVar2;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  if ((*(byte *)(unaff_BP + -3) & 0x80) == 0) {
    *(undefined2 *)(unaff_BP + -10) = 2;
  }
  if (*(int *)(unaff_BP + -10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1000_32f2(unaff_BP + -0x4a);
  }
  iVar2 = func_0x00012ad4(0x1000,*(undefined4 *)(unaff_BP + 6),0x335);
  if ((iVar2 == 0) && ((*(byte *)(unaff_BP + -1) & 1) == 0)) {
    func_0x0000d87e(0x105e,*(undefined2 *)0x4426,1,1,0x339);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_3000_68d0 @ 3000:68d0

void __cdecl16far FUN_3000_68d0(void)

{
  int iVar1;
  char in_CL;
  int unaff_BP;
  int unaff_DI;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar4;
  
  uVar2 = 0x1000;
  *(char *)(unaff_DI + -0x5fba) = *(char *)(unaff_DI + -0x5fba) + in_CL;
  iVar1 = FUN_3000_a838(0x1000,0xd08);
  if (iVar1 != 0) {
    uVar2 = 0x105e;
    iVar1 = FUN_1000_335c(unaff_BP + -0x60);
    if (((iVar1 == 1) && (-2 < *(int *)(unaff_BP + -8))) && (*(int *)(unaff_BP + -8) < 0x20)) {
      *(undefined2 *)(*(int *)(unaff_BP + -6) * 6 + 0xfa4) = *(undefined2 *)(unaff_BP + -8);
                    /* WARNING: Subroutine does not return */
      FUN_1000_32f2(unaff_BP + -0xb2);
    }
  }
  uVar3 = *(undefined2 *)0x987a;
  iVar1 = *(int *)(unaff_BP + -6) * 6;
  *(undefined2 *)(iVar1 + 0xfa2) = 0xa4;
  *(undefined2 *)(iVar1 + 0xfa4) = *(undefined2 *)(unaff_BP + -6);
  FUN_3000_7676(uVar2,*(undefined2 *)(unaff_BP + -6));
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  if (*(int *)(unaff_BP + -6) < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_1000_32f2(unaff_BP + -0xb2);
  }
  FUN_3000_76b0(uVar2,0xffff);
  FUN_3000_740a(uVar2);
  uVar3 = 0xc32;
  uVar4 = func_0x0000c4be(uVar2,0xc37c,0x2615);
  uVar2 = *(undefined2 *)0x987c;
  *(undefined2 *)0x1080 = (int)uVar4;
  *(undefined2 *)0x1082 = (int)((ulong)uVar4 >> 0x10);
LAB_3000_69cb:
  if ((*(int *)0x88ba != 0) && (*(int *)0x5e != 0)) {
    uVar4 = *(undefined4 *)((int)*(undefined4 *)(unaff_BP + -0x10) + 0x18);
                    /* WARNING: Subroutine does not return */
    FUN_1000_32f2((int)uVar4,(int)((ulong)uVar4 >> 0x10),0x3bb);
  }
  *(undefined2 *)0x5e = 0;
  *(undefined2 *)0x3e50 = 0;
  uVar2 = func_0x00008d86(uVar3);
  *(undefined2 *)(unaff_BP + -0x11a) = uVar2;
  uVar3 = 0x8c9;
  func_0x00008d0e(0x8d8,*(undefined2 *)0x4426,*(undefined2 *)0x8fe8);
  iVar1 = *(int *)(unaff_BP + -0x11a);
  if (iVar1 == 0xd) {
    *(undefined2 *)0x42 = 0;
    if (*(int *)0x88ba == 0) {
      *(undefined2 *)0x88ba = 8;
      *(undefined2 *)0x5e = 0xffff;
    }
    else {
      uVar4 = *(undefined4 *)((int)*(undefined4 *)(unaff_BP + -0x10) + 0x18);
      uVar3 = 0x105e;
      func_0x00012a98(0x8c9,(int)uVar4,(int)((ulong)uVar4 >> 0x10),0x3e5);
      *(undefined2 *)0x88ba = 0;
      FUN_3000_76b0(0x105e,0xffff);
    }
    goto LAB_3000_6af4;
  }
  if (iVar1 == 0x1b) {
    *(undefined2 *)(unaff_BP + -6) = 0;
    FUN_3000_828a(0x8c9,0);
    FUN_3000_9d82(0x8c9,0x40e);
    if (*(int *)(unaff_BP + -6) == 0) {
      return;
    }
    goto LAB_3000_6af4;
  }
  if (iVar1 == 0x30) {
    FUN_3000_828a(0x8c9,7);
    uVar3 = 0x3612;
    FUN_3000_7052();
    goto LAB_3000_6af4;
  }
  if (iVar1 == 0x31) goto LAB_3000_6b39;
  if (iVar1 == 0x32) {
    if ((*(int *)0x7904 == 0) || (iVar1 = FUN_3000_6472(0x8c9,0x43d), iVar1 == 0))
    goto LAB_3000_69cb;
    FUN_3000_828a(0x8c9,7);
    FUN_3000_04fc(0x8c9,1,0x44a);
    FUN_3000_9f40(0x8c9);
    uVar2 = 0x45b;
  }
  else {
    if (iVar1 == 0x33) {
      if ((*(int *)0x7904 != 0) && (iVar1 = FUN_3000_6472(0x8c9,0x45d), iVar1 != 0)) {
        iVar1 = func_0x00003dc6(0x8c9);
        if (iVar1 == 0) {
          uVar3 = 0xd83;
          func_0x0000d87e(0x216,*(undefined2 *)0x4426,0,1,0x46b);
        }
        else {
          uVar3 = 0x216;
          func_0x0000335e(0x216,5);
        }
      }
      goto LAB_3000_69cb;
    }
    if (iVar1 == 0x34) {
      if ((*(int *)0x7904 == 0) || (iVar1 = FUN_3000_6472(0x8c9,0x480), iVar1 == 0))
      goto LAB_3000_69cb;
      FUN_3000_828a(0x8c9,7);
      FUN_3000_04fc(0x8c9,1,0x489);
      FUN_3000_a0d4(0x8c9);
      uVar2 = 0x496;
    }
    else if (iVar1 == 0x35) {
      if ((*(int *)0x7904 == 0) || (iVar1 = FUN_3000_6472(0x8c9,0x498), iVar1 == 0))
      goto LAB_3000_69cb;
      FUN_3000_828a(0x8c9,7);
      FUN_3000_04fc(0x8c9,1,0x4a6);
      FUN_3000_990a(0x8c9);
      uVar2 = 0x4b8;
    }
    else {
      if (iVar1 != 0x36) {
        if (iVar1 == 0x37) {
          FUN_3000_9898(0x8c9);
        }
        else if (iVar1 == 0x38) {
          if ((*(int *)0x7904 != 0) && (iVar1 = FUN_3000_6472(0x8c9,0x4d0), iVar1 != 0)) {
            uVar3 = 0x3612;
            FUN_3000_64fc();
          }
        }
        else {
          if (iVar1 == 0x39) {
            FUN_3000_828a(0x8c9,7);
            FUN_3000_04fc(0x8c9,1,0x4da);
            uVar2 = 0x3612;
            iVar1 = FUN_3000_776c(1);
            *(int *)(unaff_BP + -6) = iVar1;
            if (iVar1 != 0) {
              func_0x0000e2be(0x3612,*(undefined2 *)0x442e);
              if (*(int *)0x88ba == 0) {
                uVar4 = *(undefined4 *)((int)*(undefined4 *)(unaff_BP + -0x10) + 0x18);
                    /* WARNING: Subroutine does not return */
                FUN_1000_32f2((int)uVar4,(int)((ulong)uVar4 >> 0x10),0x4ee);
              }
              FUN_3000_ced8(0xe2b,*(undefined2 *)(unaff_BP + -6));
              func_0x0000fb40(0xe2b,*(undefined2 *)0x4426);
              func_0x0000fb40(0xfb4,*(undefined2 *)0x7906);
              func_0x0000fb40(0xfb4,*(undefined2 *)0x640a);
              func_0x0000fb40(0xfb4,*(undefined2 *)0x6408);
              func_0x0000fb40(0xfb4,*(undefined2 *)0x107e);
              uVar2 = 0xfb4;
              func_0x0000fb40(0xfb4,*(undefined2 *)0x442e);
              iVar1 = FUN_3000_b428(0xfb4);
              if (iVar1 == -1) {
                *(undefined2 *)0x88ba = 1;
                *(undefined2 *)0x6ea2 = 0x62;
                *(byte *)0xff0 = *(byte *)0xff0 & 0xf9;
                FUN_3000_6fa8(0xfb4,0xffff);
                FUN_3000_52bc(0xfb4);
                uVar2 = 0x8d8;
                func_0x00008d86(0xfb4);
              }
              func_0x0000f8ae(uVar2,*(undefined2 *)0x442e);
              uVar2 = 0xf8a;
              func_0x0000f8ae(0xf8a,*(undefined2 *)0x7906);
            }
            uVar3 = 0xc32;
            uVar4 = func_0x0000c4be(uVar2,0xc37c,0x2615);
            uVar2 = *(undefined2 *)0x987c;
            *(undefined2 *)0x1080 = (int)uVar4;
            *(undefined2 *)0x1082 = (int)((ulong)uVar4 >> 0x10);
            uVar2 = 0x516;
            goto LAB_3000_6e69;
          }
          if ((iVar1 == 0x47) || (iVar1 == 0x67)) {
            FUN_3000_828a(0x8c9,7);
            *(long *)(unaff_BP + -4) = (long)*(int *)0x6ea2;
            func_0x00008d0e(0x8c9,*(undefined2 *)0x4426,*(undefined2 *)0x8fe8);
            func_0x0000d836(0x8c9,*(undefined2 *)0xfee,0,1,0x3cd);
                    /* WARNING: Subroutine does not return */
            FUN_3000_ddee(0xd83,unaff_BP + -4);
          }
          if (iVar1 != 0x147) {
            if (iVar1 == 0x148) {
              uVar2 = *(undefined2 *)0x9862;
              if ((*(int *)0x88ba == 3) || ((4 < *(int *)0x88ba && (*(int *)0x88ba < 8)))) {
                *(int *)0x88ba = *(int *)0x88ba + -1;
                *(int *)0x42 = *(int *)0x42 + -1;
                *(undefined2 *)0x5e = 2;
                goto LAB_3000_69cb;
              }
              iVar1 = *(int *)0x6ea2 + -1;
            }
            else if (iVar1 == 0x149) {
              iVar1 = *(int *)0x6ea2 + -3;
            }
            else if (iVar1 == 0x14f) {
              iVar1 = *(int *)0x4428;
            }
            else if (iVar1 == 0x150) {
              uVar2 = *(undefined2 *)0x9862;
              if ((*(int *)0x88ba == 2) || ((3 < *(int *)0x88ba && (*(int *)0x88ba < 7)))) {
                *(int *)0x88ba = *(int *)0x88ba + 1;
                *(int *)0x42 = *(int *)0x42 + 1;
                *(undefined2 *)0x5e = 0xfffe;
                goto LAB_3000_69cb;
              }
              iVar1 = *(int *)0x6ea2 + 1;
            }
            else {
              if (iVar1 != 0x151) goto LAB_3000_69cb;
              iVar1 = *(int *)0x6ea2 + 3;
            }
            FUN_3000_9dd2(0x8c9,iVar1);
            goto LAB_3000_69cb;
          }
          FUN_3000_9dd2(0x8c9,1);
          *(undefined2 *)0x5e = 1;
        }
        goto LAB_3000_69cb;
      }
      if ((*(int *)0x7904 == 0) || (iVar1 = FUN_3000_6472(0x8c9,0x4ba), iVar1 == 0))
      goto LAB_3000_69cb;
      FUN_3000_828a(0x8c9,7);
      FUN_3000_04fc(0x8c9);
      FUN_3000_59a2();
      uVar2 = 0x4ce;
    }
  }
  goto LAB_3000_6e69;
LAB_3000_6b39:
  if ((*(int *)0x7904 == 0) || (iVar1 = FUN_3000_6472(0x8c9,0x41b), iVar1 == 0)) goto LAB_3000_69cb;
  FUN_3000_828a(0x8c9,7);
  FUN_3000_04fc(0x8c9,1,0x41f);
  FUN_3000_a290(0x8c9);
  uVar2 = 0x43b;
LAB_3000_6e69:
  FUN_3000_04fc(uVar3,1,uVar2);
LAB_3000_6af4:
  FUN_3000_828a(uVar3,1);
  goto LAB_3000_69cb;
}



// Function: FUN_3000_6fa8 @ 3000:6fa8

void FUN_3000_6fa8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_7052 @ 3000:7052

void __cdecl16far FUN_3000_7052(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  if (*(int *)(unaff_BP + -6) == 5) {
    if (0 < *(int *)(unaff_BP + 6)) {
      *(undefined2 *)0x88ba = 3;
      *(undefined2 *)0x42 = 1;
      goto LAB_3000_709c;
    }
    *(undefined2 *)0x88ba = 2;
  }
  else {
    *(undefined2 *)0x88ba = 1;
  }
  *(undefined2 *)0x42 = 0;
LAB_3000_709c:
  FUN_3000_7738(0x1000,*(int *)0x42 << 3,*(undefined2 *)(unaff_BP + -0xc));
  return;
}



// Function: FUN_3000_70b2 @ 3000:70b2

void FUN_3000_70b2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_7202 @ 3000:7202

void FUN_3000_7202(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_727e @ 3000:727e

void FUN_3000_727e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_7332 @ 3000:7332

void FUN_3000_7332(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_740a @ 3000:740a

void FUN_3000_740a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_7676 @ 3000:7676

void FUN_3000_7676(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_76b0 @ 3000:76b0

void FUN_3000_76b0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_7738 @ 3000:7738

void FUN_3000_7738(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_776c @ 3000:776c

void __cdecl16far FUN_3000_776c(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int unaff_BP;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  uVar5 = 0x1000;
  iVar4 = FUN_3000_9006(0x1000,*(undefined2 *)0x6ea2,0x586);
  if ((iVar4 == 0) || (*(char *)(unaff_BP + -0x100) == '\0')) {
    func_0x0000d836(0x1000,*(undefined2 *)0x107e,0,1,0x588);
  }
  else {
    *(undefined2 *)(unaff_BP + -0x130) = 0;
    do {
      uVar2 = *(undefined2 *)(unaff_BP + -0x130);
      *(int *)(unaff_BP + -0x130) = *(int *)(unaff_BP + -0x130) + 1;
      *(undefined2 *)(unaff_BP + -0x12e) = uVar2;
      iVar4 = *(int *)(unaff_BP + -0x130);
      cVar1 = *(char *)(unaff_BP + iVar4 + -0x100);
      while (((cVar1 != '\n' && (*(char *)(unaff_BP + iVar4 + -0x100) != '\0')) &&
             (iVar4 - *(int *)(unaff_BP + -0x12e) < 0x26))) {
        *(int *)(unaff_BP + -0x130) = *(int *)(unaff_BP + -0x130) + 1;
        iVar4 = *(int *)(unaff_BP + -0x130);
        cVar1 = *(char *)(unaff_BP + iVar4 + -0x100);
      }
      if (0x25 < iVar4 - *(int *)(unaff_BP + -0x12e)) {
        iVar4 = *(int *)(unaff_BP + -0x12e);
        *(int *)(unaff_BP + -0x130) = *(int *)(unaff_BP + -0x130) + -1;
        iVar3 = *(int *)(unaff_BP + -0x130);
        while (((iVar4 < iVar3 &&
                (*(char *)(unaff_BP + *(int *)(unaff_BP + -0x130) + -0x100) != ' ')) &&
               (*(char *)(unaff_BP + *(int *)(unaff_BP + -0x130) + -0x100) != '-'))) {
          *(int *)(unaff_BP + -0x130) = *(int *)(unaff_BP + -0x130) + -1;
          iVar3 = *(int *)(unaff_BP + -0x130);
        }
        if (*(int *)(unaff_BP + -0x130) == *(int *)(unaff_BP + -0x12e)) {
          *(int *)(unaff_BP + -0x130) = *(int *)(unaff_BP + -0x12e) + 0x25;
        }
      }
      iVar4 = *(int *)(unaff_BP + -0x130) - *(int *)(unaff_BP + -0x12e);
      if (0x25 < iVar4) {
        iVar4 = 0x25;
      }
      FUN_1000_2b50(uVar5,unaff_BP + -300);
      *(undefined1 *)(unaff_BP + iVar4 + -300) = 0;
      uVar5 = *(undefined2 *)(unaff_BP + -0x134);
      *(int *)(unaff_BP + -0x134) = *(int *)(unaff_BP + -0x134) + 1;
      func_0x0000d836(0x105e,*(undefined2 *)0x107e,uVar5,1,unaff_BP + -300);
      uVar5 = 0x8b8;
      func_0x00008bf6(0xd83,*(undefined2 *)0x107e,*(undefined2 *)0x8fe8);
      if (*(char *)(unaff_BP + *(int *)(unaff_BP + -0x130) + -0x100) != '\0') {
        *(int *)(unaff_BP + -0x130) = *(int *)(unaff_BP + -0x130) + 1;
      }
    } while ((*(int *)(unaff_BP + -0x134) < 8) &&
            (*(char *)(unaff_BP + *(int *)(unaff_BP + -0x130) + -0x100) != '\0'));
  }
  return;
}



// Function: FUN_3000_7fa2 @ 3000:7fa2

void FUN_3000_7fa2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_80f6 @ 3000:80f6

void FUN_3000_80f6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_819a @ 3000:819a

void FUN_3000_819a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_828a @ 3000:828a

void FUN_3000_828a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_83d2 @ 3000:83d2

void __cdecl16far FUN_3000_83d2(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  func_0x0000d87e();
  func_0x0000d87e(0xd83,*(undefined2 *)0x640a,0,2,0x9c6);
  func_0x0000d87e(0xd83,*(undefined2 *)0x640a,2,2,0x9ca);
  func_0x0000d87e(0xd83,*(undefined2 *)0x640a,3,2,0x9cc);
  func_0x0000d87e(0xd83,*(undefined2 *)0x640a,4,2,0x9ce);
  func_0x0000d87e(0xd83,*(undefined2 *)0x640a,5,2,0x9d0);
  func_0x0000d87e(0xd83,*(undefined2 *)0x640a,6,2,0x9d2);
  func_0x0000d87e(0xd83,*(undefined2 *)0x640a,1,0x16,0x9d4);
  func_0x0000d87e(0xd83,*(undefined2 *)0x640a,1,2,0x9d6);
  func_0x0000d87e(0xd83,*(undefined2 *)0x640a,2,0x16,0x9d9);
  func_0x0000d87e(0xd83,*(undefined2 *)0x640a,3,0x16,0x9db);
  func_0x0000d87e(0xd83,*(undefined2 *)0x640a,4,0x16,0x9dd);
  func_0x0000d87e(0xd83,*(undefined2 *)0x640a,5,0x16,0x9df);
  func_0x0000d87e(0xd83,*(undefined2 *)0x640a,6,0x16,0x9e1);
  if ((((*(int *)(unaff_BP + 6) != 2) && (*(int *)(unaff_BP + 6) != 3)) &&
      (*(int *)(unaff_BP + 6) != 0xb)) && (*(int *)(unaff_BP + 6) != 0xd)) {
    *(undefined2 *)0x44 = *(undefined2 *)(unaff_BP + 6);
  }
  return;
}



// Function: FUN_3000_9006 @ 3000:9006

void FUN_3000_9006(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_9042 @ 3000:9042

void FUN_3000_9042(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_9068 @ 3000:9068

void FUN_3000_9068(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_90ec @ 3000:90ec

void FUN_3000_90ec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_9320 @ 3000:9320

void FUN_3000_9320(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_93be @ 3000:93be

void FUN_3000_93be(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_94ee @ 3000:94ee

void FUN_3000_94ee(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_9898 @ 3000:9898

void FUN_3000_9898(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_98dc @ 3000:98dc

void FUN_3000_98dc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_990a @ 3000:990a

void FUN_3000_990a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_9d82 @ 3000:9d82

void FUN_3000_9d82(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_9dd2 @ 3000:9dd2

void FUN_3000_9dd2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_9f40 @ 3000:9f40

void FUN_3000_9f40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_a0d4 @ 3000:a0d4

void FUN_3000_a0d4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_a290 @ 3000:a290

void FUN_3000_a290(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_a3ac @ 3000:a3ac

void FUN_3000_a3ac(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_a416 @ 3000:a416

void FUN_3000_a416(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_a55e @ 3000:a55e

void FUN_3000_a55e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_a838 @ 3000:a838

void FUN_3000_a838(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_aa04 @ 3000:aa04

void FUN_3000_aa04(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_aa6e @ 3000:aa6e

void FUN_3000_aa6e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_ab1c @ 3000:ab1c

void FUN_3000_ab1c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_ac48 @ 3000:ac48

void FUN_3000_ac48(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_aec2 @ 3000:aec2

void FUN_3000_aec2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_b428 @ 3000:b428

void FUN_3000_b428(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_b504 @ 3000:b504

undefined2 __cdecl16far FUN_3000_b504(void)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 extraout_DX;
  int unaff_BP;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  uVar6 = 0x8310;
  iVar3 = func_0x00088f25(0x1000);
  if (iVar3 == 0) {
    *(undefined2 *)0x1052 = 4;
  }
  else {
    uVar6 = 0x105e;
    iVar3 = FUN_1000_2b7a(0x1cdb);
    if (iVar3 == 0) {
      *(undefined2 *)0x1052 = 8;
    }
    else {
      uVar6 = 0x105e;
      iVar3 = FUN_1000_2b7a(0x1cdf);
      if (iVar3 == 0) {
        *(undefined2 *)0x1052 = 6;
      }
      else {
        uVar6 = 0x105e;
        iVar3 = FUN_1000_2b7a(0x1ce3);
        if (iVar3 == 0) {
          *(undefined2 *)0x1052 = 7;
        }
      }
    }
  }
  if (*(int *)0x1052 == -1) {
    uVar4 = *(uint *)(unaff_BP + -2) >> 0xc;
    if (uVar4 == 0) {
      *(undefined2 *)0x1052 = 1;
    }
    else {
      if (uVar4 == 1) {
        if ((*(byte *)(unaff_BP + -2) & 0xf) == 2) {
          uVar5 = 3;
        }
        else {
          uVar5 = 2;
        }
      }
      else if (uVar4 == 2) {
        if ((*(byte *)(unaff_BP + -2) & 0xf) == 2) {
          uVar5 = 5;
        }
        else {
          uVar5 = 4;
        }
      }
      else {
        if (uVar4 != 3) goto LAB_3000_b5f8;
        if ((((*(byte *)(unaff_BP + -2) & 0xf) == 2) || ((*(byte *)(unaff_BP + -2) & 0xf) == 0xf))
           || ((*(byte *)(unaff_BP + -1) & 0xf) == 6)) {
          *(undefined2 *)0x1052 = 8;
          goto LAB_3000_b5f8;
        }
        if ((*(byte *)(unaff_BP + -2) & 0xf) == 1) {
          uVar5 = 7;
        }
        else {
          uVar5 = 6;
        }
      }
      *(undefined2 *)0x1052 = uVar5;
    }
  }
LAB_3000_b5f8:
  if (((*(int *)0x1052 == 2) || (*(int *)0x1052 == 3)) || (*(int *)0x1052 == 4)) {
    *(undefined4 *)(unaff_BP + -0x11a) = DAT_4000_fa52;
    *(undefined4 *)(unaff_BP + -0x116) = DAT_4000_fa56;
    pcVar1 = (code *)swi(0x35);
    uVar2 = (*pcVar1)();
    out(extraout_DX,uVar2);
    pcVar1 = (code *)swi(0x38);
    (*pcVar1)();
    out(0xfe,0x5a);
    pcVar1 = (code *)swi(0x39);
    uVar4 = (*pcVar1)();
    if ((uVar4 & 0x4000) != 0) {
      *(undefined2 *)0x1054 = 0;
    }
  }
  if (*(int *)0x1052 != -1) {
    return *(undefined2 *)0x1052;
  }
  func_0x00008d0e(uVar6,*(undefined2 *)0x4426,*(undefined2 *)0x8fe8);
  func_0x0000d87e(0x8c9,*(undefined2 *)0x4426,0,1,0x1ce7,unaff_DS,
                  *(int *)0x8fda + *(int *)0x8fe2 + 0x80);
                    /* WARNING: Subroutine does not return */
  FUN_1000_32f2(unaff_BP + -0x15e);
}



// Function: FUN_3000_b6e4 @ 3000:b6e4

void FUN_3000_b6e4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_bd92 @ 3000:bd92

undefined2 __cdecl16far FUN_3000_bd92(void)

{
  return 0xd;
}



// Function: FUN_3000_bdc0 @ 3000:bdc0

void FUN_3000_bdc0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_bf24 @ 3000:bf24

void FUN_3000_bf24(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_bf84 @ 3000:bf84

void FUN_3000_bf84(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_c09e @ 3000:c09e

void FUN_3000_c09e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_c336 @ 3000:c336

void FUN_3000_c336(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_c5e6 @ 3000:c5e6

void FUN_3000_c5e6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_c6b0 @ 3000:c6b0

void __cdecl16far FUN_3000_c6b0(void)

{
  func_0x0000d836(0x1000);
  return;
}



// Function: FUN_3000_c6bc @ 3000:c6bc

void FUN_3000_c6bc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_c730 @ 3000:c730

void FUN_3000_c730(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_c92c @ 3000:c92c

void FUN_3000_c92c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_cc86 @ 3000:cc86

void FUN_3000_cc86(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_cea0 @ 3000:cea0

void FUN_3000_cea0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_ced8 @ 3000:ced8

void FUN_3000_ced8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_d1e8 @ 3000:d1e8

void __cdecl16far FUN_3000_d1e8(void)

{
  undefined2 uVar1;
  int in_AX;
  int in_CX;
  int unaff_BP;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(undefined4 *)(in_AX + 1) = *(undefined4 *)(unaff_BP + -0x920);
  *(undefined4 *)(in_AX + 5) = *(undefined4 *)(unaff_BP + -0x91c);
  if (*(int *)(unaff_BP + -6) != 0) {
    FUN_3000_c5e6();
  }
  *(undefined2 *)(unaff_BP + -8) = 0x1b;
  if (*(int *)(unaff_BP + -8) == 0x1b) {
    if (*(int *)(unaff_BP + -10) == 1) {
      *(undefined2 *)(unaff_BP + -8) = 0;
      if (-1 < *(int *)0x442c) {
        *(undefined2 *)(unaff_BP + -0x922) = *(undefined2 *)0x442c;
        uVar1 = *(undefined2 *)0x9926;
        do {
          iVar2 = *(int *)(unaff_BP + -8) * 8;
          *(undefined4 *)(iVar2 + 0x645a) = *(undefined4 *)(unaff_BP + iVar2 + -0x918);
          *(undefined4 *)(iVar2 + 0x645e) = *(undefined4 *)(unaff_BP + iVar2 + -0x914);
          *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
        } while (*(int *)(unaff_BP + -8) <= *(int *)(unaff_BP + -0x922));
      }
    }
    func_0x0000dec0();
    return;
  }
  FUN_3000_bdc0();
  FUN_3000_828a();
                    /* WARNING: Subroutine does not return */
  FUN_1000_32f2(*(undefined4 *)((int)*(undefined4 *)(unaff_BP + -0x10) + 0x18),0x223d);
}



// Function: FUN_3000_d41c @ 3000:d41c

void FUN_3000_d41c(void)

{
  int in_BX;
  undefined2 unaff_DS;
  
                    /* WARNING: Could not recover jumptable at 0x0003d41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)(in_BX + 0x72d0))();
  return;
}



// Function: FUN_3000_d5b8 @ 3000:d5b8

void FUN_3000_d5b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_d6e6 @ 3000:d6e6

void FUN_3000_d6e6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_3000_ddee(0x1000);
}



// Function: FUN_3000_d7e4 @ 3000:d7e4

void FUN_3000_d7e4(void)

{
  int unaff_BP;
  
                    /* WARNING: Subroutine does not return */
  FUN_1000_32f2(unaff_BP + -0x54);
}



// Function: FUN_3000_d94e @ 3000:d94e

void FUN_3000_d94e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_d9a6 @ 3000:d9a6

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Instruction at (ram,0x0003c486) overlaps instruction at (ram,0x0003c485)
    */

uint FUN_3000_d9a6(undefined2 param_1,uint *param_2)

{
  char *pcVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  undefined2 *puVar5;
  code *pcVar6;
  byte bVar7;
  char cVar8;
  undefined2 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined2 in_CX;
  char cVar14;
  char extraout_DH;
  uint in_BX;
  int unaff_BP;
  undefined2 *puVar15;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar16;
  undefined1 in_ZF;
  char in_SF;
  char in_OF;
  undefined4 uVar17;
  long lVar18;
  
  while( true ) {
    pcVar6 = (code *)swi(0x38);
    iVar10 = (*pcVar6)();
    if (!(bool)in_ZF && in_OF == in_SF) break;
    iVar12 = *(int *)0x9944;
    in_OF = SBORROW2(iVar12,iVar10);
    in_SF = iVar12 - iVar10 < 0;
    in_ZF = iVar12 == iVar10;
  }
  pcVar6 = (code *)swi(0x39);
  (*pcVar6)();
  pcVar6 = (code *)swi(0x3d);
  (*pcVar6)();
  uVar11 = *(uint *)(unaff_BP + 10);
  if (10 < uVar11) {
    iVar10 = *(int *)(unaff_BP + 8);
    if (iVar10 == 1) {
      pcVar6 = (code *)swi(0x39);
      (*pcVar6)();
    }
    else if (iVar10 == 2) {
      pcVar6 = (code *)swi(0x39);
      (*pcVar6)();
    }
    else {
      uVar11 = iVar10 - 3;
      if (uVar11 != 0) goto LAB_3000_dc5d;
      pcVar6 = (code *)swi(0x39);
      (*pcVar6)();
    }
    pcVar6 = (code *)swi(0x38);
    (*pcVar6)();
    pcVar6 = (code *)swi(0x39);
    (*pcVar6)();
    pcVar6 = (code *)swi(0x3d);
    uVar11 = (*pcVar6)();
LAB_3000_dc5d:
    *(undefined4 *)(unaff_BP + -0x7a) = *(undefined4 *)(unaff_BP + -8);
    *(undefined4 *)(unaff_BP + -0x76) = *(undefined4 *)(unaff_BP + -4);
    iVar10 = *(int *)(unaff_BP + 6) * 8;
    uVar9 = *(undefined2 *)0x9926;
    *(undefined4 *)(iVar10 + 0x645a) = *(undefined4 *)(unaff_BP + -0x7a);
    *(undefined4 *)(iVar10 + 0x645e) = *(undefined4 *)(unaff_BP + -0x76);
    return uVar11;
  }
  iVar10 = uVar11 * 2;
  cVar8 = (char)in_BX;
  cVar14 = (char)((uint)in_CX >> 8);
  switch(uVar11) {
  case 0:
    break;
  case 1:
    if (*(int *)(*(int *)0x25f + 8) != 1) {
      FUN_3000_06c8();
      FUN_3000_06c8();
      *(undefined2 *)(*(int *)0x25f + 8) = 1;
    }
    return 1;
  case 2:
    *(char *)0x6650 = *(char *)0x6650 + '\x01';
    FUN_1000_2b18();
    *(undefined1 *)((int)*(undefined4 *)(unaff_BP + 6) + 0x23) = 0;
    if (*(int *)(unaff_BP + -0x11a) == 0xb) {
      *(undefined2 *)(unaff_BP + -0xc) = 0;
    }
    return *(uint *)(unaff_BP + -0xc);
  case 3:
    pcVar6 = (code *)swi(0x51);
    (*pcVar6)();
    bVar7 = FUN_3000_00d4();
    *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) ^ (bVar7 ^ *(byte *)(unaff_BP + -2)) & 0xf;
    func_0x00008d0e();
    func_0x0000d836();
    iVar12 = FUN_3000_00d4();
    *(uint *)(unaff_BP + -4) = iVar12 << 0xc | *(uint *)(unaff_BP + -4) & 0xfff;
    func_0x00008d0e();
    func_0x0000d836();
    bVar7 = FUN_4000_00d4();
    *(uint *)(unaff_BP + -4) =
         *(uint *)(unaff_BP + -4) ^ ((bVar7 ^ *(byte *)(unaff_BP + -3)) & 0xf) << 8;
    func_0x00008d0e();
    func_0x0000d836();
    cVar8 = FUN_4000_00d4();
    *(uint *)(unaff_BP + -4) =
         *(uint *)(unaff_BP + -4) ^ (byte)(cVar8 << 4 ^ *(byte *)(unaff_BP + -4)) & 0xf0;
    func_0x00008d0e();
    func_0x0000d836();
    bVar7 = FUN_4000_00d4();
    *(uint *)(unaff_BP + -4) = *(uint *)(unaff_BP + -4) ^ (bVar7 ^ *(byte *)(unaff_BP + -4)) & 0xf;
    pcVar6 = (code *)swi(0x37);
    (*pcVar6)();
    pcVar6 = (code *)swi(0x39);
    uVar11 = (*pcVar6)();
    uVar9 = *(undefined2 *)0x9926;
    *(undefined4 *)(iVar10 * 8 + 0x645a) = *(undefined4 *)(unaff_BP + -0x24);
    *(undefined4 *)(iVar10 * 8 + 0x645e) = *(undefined4 *)(unaff_BP + -0x20);
    return uVar11;
  case 4:
    puVar3 = param_2 + uVar11;
    uVar11 = *puVar3;
    *(char *)puVar3 = (char)*puVar3 + cVar8;
    if (SCARRY1((char)uVar11,cVar8) == (char)*puVar3 < '\0') {
      iVar10 = *(int *)0x4428;
      if ((long)iVar10 < *(long *)(unaff_BP + -0x6c)) {
        *(int *)(unaff_BP + -0x6c) = iVar10;
        *(int *)(unaff_BP + -0x6a) = iVar10 >> 0xf;
      }
    }
    else {
      *(undefined4 *)(unaff_BP + -0x6c) = 0x96;
    }
    if ((*(int *)(unaff_BP + -0x6c) != *(int *)(unaff_BP + -0xe)) ||
       (1 < *(int *)(unaff_BP + *(int *)(unaff_BP + -0x6c) * 2 + -0x2ae))) {
      *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)(unaff_BP + -0x6c);
      *(undefined2 *)(unaff_BP + -0x68) = 0;
      *(undefined2 *)(unaff_BP + -0x10) = 0xffff;
      FUN_3000_7fa2();
    }
    func_0x00008d0e();
LAB_3000_7c9b:
    FUN_3000_828a();
LAB_3000_7eeb:
    uVar9 = func_0x00008d86();
    *(undefined2 *)(unaff_BP + -6) = uVar9;
    func_0x00008d0e();
    iVar10 = *(int *)(unaff_BP + -6);
    if (iVar10 == 0xd) {
LAB_3000_7f17:
      iVar10 = FUN_3000_94ee();
      if ((iVar10 != 0) &&
         ((*(int *)(unaff_BP + -0x10) == -1 ||
          (iVar10 = FUN_3000_aec2(0x8c9,*(undefined2 *)(unaff_BP + -0xe),
                                  *(undefined2 *)(unaff_BP + -0x10),unaff_BP + -4), iVar10 != 0))))
      {
        FUN_3000_80f6();
        FUN_3000_828a();
        return 0xd;
      }
      func_0x0000d836();
LAB_3000_7f94:
      FUN_3000_828a();
      return 0x1b;
    }
    if (iVar10 == 0x1b) goto LAB_3000_7f94;
    if (iVar10 == 0x31) {
LAB_3000_7a70:
      uVar17 = FUN_3000_23d6();
      if (*(int *)((int)uVar17 + 4) == 0xd) {
        *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)0x4428;
        *(undefined2 *)(unaff_BP + -0x10) = 9;
      }
      else {
        *(int *)(unaff_BP + -0xe) = *(int *)0x4428 + -0x16;
        *(undefined2 *)(unaff_BP + -0x10) = 0xffff;
      }
      func_0x0000d87e();
      goto LAB_3000_7bea;
    }
    if (iVar10 == 0x32) {
LAB_3000_7acb:
      if (*(int *)(unaff_BP + -0x68) < 0x16) {
        func_0x0000d7f2();
        func_0x0000e998();
        *(int *)(unaff_BP + -0x68) = *(int *)(unaff_BP + -0x68) + 1;
        goto LAB_3000_7b06;
      }
LAB_3000_7e8e:
      func_0x0000d7f2();
      func_0x0000e998();
      FUN_3000_93be(0xe99);
LAB_3000_7ece:
      uVar9 = 0;
      goto LAB_3000_7ed3;
    }
    if (iVar10 == 0x33) goto LAB_3000_7e8e;
    if (iVar10 == 0x37) {
LAB_3000_7b2f:
      func_0x0000d87e(0x8c9,*(undefined2 *)0x6406);
      *(undefined2 *)(unaff_BP + -0x68) = 0;
      *(undefined2 *)(unaff_BP + -0x10) = 0xffff;
      *(undefined2 *)(unaff_BP + -0xe) = 0x96;
      goto LAB_3000_7edd;
    }
    if (iVar10 == 0x38) {
LAB_3000_7b62:
      if (0 < *(int *)(unaff_BP + -0x68)) {
        func_0x0000d7f2();
        func_0x0000e998();
        *(int *)(unaff_BP + -0x68) = *(int *)(unaff_BP + -0x68) + -1;
        goto LAB_3000_7b06;
      }
      if ((*(int *)(unaff_BP + -0xe) != 0x96) || (*(int *)(unaff_BP + -0x10) != -1)) {
        func_0x0000d7f2();
        func_0x0000e998();
        FUN_3000_9320(0xe99);
LAB_3000_7bea:
        uVar9 = 0x16;
LAB_3000_7ed3:
        *(undefined2 *)(unaff_BP + -0x68) = uVar9;
LAB_3000_7edd:
        FUN_3000_7fa2();
      }
      goto LAB_3000_7eeb;
    }
    if (iVar10 != 0x39) {
      if (iVar10 == 0x42) goto LAB_3000_7c80;
      if (iVar10 == 0x47) {
LAB_3000_7dfc:
        FUN_3000_828a();
        *(long *)(unaff_BP + -0x6c) = (long)*(int *)(unaff_BP + -0xe);
        func_0x0000d836();
                    /* WARNING: Subroutine does not return */
        FUN_3000_ddee();
      }
      if (iVar10 == 0x62) goto LAB_3000_7c80;
      if (iVar10 == 0x67) goto LAB_3000_7dfc;
      if (iVar10 == 0x147) goto LAB_3000_7b2f;
      if (iVar10 == 0x148) goto LAB_3000_7b62;
      if (iVar10 != 0x149) {
        if (iVar10 == 0x14b) goto LAB_3000_7f17;
        if (iVar10 == 0x14f) goto LAB_3000_7a70;
        if (iVar10 == 0x150) goto LAB_3000_7acb;
        if (iVar10 == 0x151) goto LAB_3000_7e8e;
        goto LAB_3000_7eeb;
      }
    }
    if ((*(int *)(unaff_BP + -0xe) != 0x96) || (*(int *)(unaff_BP + -0x10) != -1)) {
      func_0x0000d7f2();
      func_0x0000e998();
      FUN_3000_9320(0xe99);
      goto LAB_3000_7ece;
    }
    if (*(int *)(unaff_BP + -0x68) != 0) {
      func_0x0000d7f2();
      func_0x0000e998();
      *(undefined2 *)(unaff_BP + -0x68) = 0;
LAB_3000_7b06:
      func_0x0000d7f2();
      func_0x0000e998();
    }
    goto LAB_3000_7eeb;
  case 5:
    *(char *)(unaff_BP + (int)param_2) =
         *(char *)(unaff_BP + (int)param_2) + cVar14 + CARRY2(uVar11,uVar11);
    uVar9 = func_0x0000e550(0x3000,10,0xd,0x11,0x30,0xdf4);
    *(undefined2 *)(unaff_BP + -2) = uVar9;
    func_0x0000c1b4();
    func_0x0000c1b4();
    func_0x0000c1fa();
    func_0x0000c1b4();
    func_0x0000c1fa();
    func_0x0000c1b4();
    func_0x0000c1fa();
    func_0x0000c1b4();
    func_0x0000c1fa();
    func_0x0000c1b4();
    func_0x0000c1fa();
    func_0x0000b116(0xc1b,0,0x1f,unaff_BP + -0x40);
    func_0x0000b116(0x937,1,4,unaff_BP + -0x58);
    func_0x0000b116(0x937,2,4,unaff_BP + -0x70);
    func_0x0000b116(0x937,3,4,unaff_BP + -0x88);
    if (*(char *)0x1084 == 'I') {
      func_0x0000b116(0x937,4,6,unaff_BP + -0xa0);
      uVar9 = 4;
    }
    else {
      func_0x0000b116(0x937,4,7,unaff_BP + -0xa0);
      uVar9 = 5;
    }
    func_0x0000b116(0x937,5,uVar9,unaff_BP + -0xb8);
    iVar10 = func_0x0000a9d4();
    if (iVar10 == 0xd) {
      FUN_1000_335c();
      iVar10 = FUN_1000_335c();
      if (iVar10 == 1) {
        iVar10 = unaff_BP + -10;
        uVar9 = unaff_SS;
      }
      else {
        iVar10 = 0;
        uVar9 = 0;
      }
      *(int *)(unaff_BP + -0x2e) = iVar10;
      *(undefined2 *)(unaff_BP + -0x2c) = uVar9;
      iVar10 = FUN_1000_335c();
      if (iVar10 == 1) {
        iVar10 = unaff_BP + -0x12;
        uVar9 = unaff_SS;
      }
      else {
        iVar10 = 0;
        uVar9 = 0;
      }
      *(int *)(unaff_BP + -0x32) = iVar10;
      *(undefined2 *)(unaff_BP + -0x30) = uVar9;
      iVar10 = FUN_1000_335c();
      if (iVar10 == 1) {
        iVar10 = unaff_BP + -0x1a;
        uVar9 = unaff_SS;
      }
      else {
        iVar10 = 0;
        uVar9 = 0;
      }
      *(int *)(unaff_BP + -0x36) = iVar10;
      *(undefined2 *)(unaff_BP + -0x34) = uVar9;
      iVar10 = FUN_1000_335c();
      if (iVar10 == 1) {
        iVar10 = unaff_BP + -0x22;
        uVar9 = unaff_SS;
      }
      else {
        iVar10 = 0;
        uVar9 = 0;
      }
      *(int *)(unaff_BP + -0x3a) = iVar10;
      *(undefined2 *)(unaff_BP + -0x38) = uVar9;
      iVar10 = FUN_1000_335c();
      if (iVar10 == 1) {
        iVar10 = unaff_BP + -0x2a;
        uVar9 = unaff_SS;
      }
      else {
        iVar10 = 0;
        uVar9 = 0;
      }
      *(int *)(unaff_BP + -0x3e) = iVar10;
      *(undefined2 *)(unaff_BP + -0x3c) = uVar9;
      func_0x000033ca(0x105e,*(undefined2 *)0xdca,*(undefined4 *)(unaff_BP + -0x2e),
                      *(undefined4 *)(unaff_BP + -0x32));
      if (*(int *)0x84e4 == 0) {
        FUN_4000_13aa();
      }
      else {
        FUN_4000_2d20();
      }
    }
    uVar11 = func_0x0000dec0();
    return uVar11;
  case 6:
    FUN_3000_3ce5();
    return *(uint *)0x26a;
  case 7:
    uVar11 = (uint)(byte)(cVar8 + cVar14);
    puVar3 = param_2;
    puVar4 = (uint *)*puVar3;
    *puVar3 = *puVar3 - (int)param_2;
    if (param_2 <= puVar4) {
      iVar10 = 0x100;
      do {
        bVar7 = in(*(int *)0x26e + 8);
        uVar11 = (uint)bVar7;
        bVar16 = false;
        if ((bVar7 & 0x80) == 0) goto LAB_3000_08d7;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      uVar11 = FUN_3000_3ce5();
      if (!bVar16) {
LAB_3000_08d7:
        *(undefined2 *)(*(int *)0x25f + 8) = 1;
      }
    }
    return uVar11;
  case 8:
    param_2[uVar11] = param_2[uVar11] + 1;
    pcVar1 = (char *)(unaff_BP + unaff_DI + 0x6eb6);
    *pcVar1 = *pcVar1 + (char)in_CX;
    param_2[uVar11 + 0xe13d] = param_2[uVar11 + 0xe13d] + 1;
    *(char *)((int)param_2 + 0x11) = *(char *)((int)param_2 + 0x11) + extraout_DH;
    do {
      if ((*(char *)((int)param_2 + unaff_BP + -0x3e) != ' ') &&
         (*(int *)(unaff_BP + -0x92) = *(int *)(unaff_BP + -0x92) + 1,
         *(int *)(unaff_BP + -0x92) < 0x3b)) goto LAB_3000_c485_1;
      do {
        iVar10 = *(int *)(unaff_BP + -0x92);
        while (((-1 < iVar10 && (*(char *)(unaff_BP + *(int *)(unaff_BP + -0x92) + -0x3e) != '\\'))
               && (*(char *)(unaff_BP + *(int *)(unaff_BP + -0x92) + -0x3e) != ':'))) {
          piVar2 = (int *)(unaff_BP + -0x92);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
        }
        *(undefined2 *)(unaff_BP + -0x90) = 0;
        *(int *)(unaff_BP + -0x92) = *(int *)(unaff_BP + -0x92) + 1;
        if (0 < *(int *)(unaff_BP + -0x92)) {
          *(undefined2 *)(unaff_BP + -0x9a) = *(undefined2 *)(unaff_BP + -0x92);
          do {
            func_0x00008eee();
            piVar2 = (int *)(unaff_BP + -0x9a);
            *piVar2 = *piVar2 + -1;
          } while (*piVar2 != 0);
        }
        iVar10 = func_0x0000a9d4();
        if (iVar10 != 0xd) {
          func_0x0000dec0();
          return 0;
        }
        func_0x0000d7f2();
        func_0x00008bf6();
        func_0x0000cb62();
        if (((*(char *)(unaff_BP + -0x3d) != ':') ||
            ((*(char *)(unaff_BP + -0x3e) != 'a' && (*(char *)(unaff_BP + -0x3e) != 'A')))) ||
           (iVar10 = FUN_3000_83d2(), iVar10 != 0)) {
          lVar18 = FUN_1000_0d18();
          *(undefined2 *)(unaff_BP + -0x96) = (int)lVar18;
          *(undefined2 *)(unaff_BP + -0x94) = (int)((ulong)lVar18 >> 0x10);
          if (lVar18 != 0) {
            FUN_1000_0c16();
            func_0x0000dec0();
            func_0x00012a98();
            return 1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_1000_32f2();
        }
        func_0x0000d87e(0x3612,*(undefined2 *)(unaff_BP + -2));
        uVar11 = FUN_1000_2afe();
        *(uint *)(unaff_BP + -0x92) = uVar11;
        if (uVar11 < 0x3c) {
          puVar15 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0x92) + -0x3e);
          uVar11 = 0x3c - *(int *)(unaff_BP + -0x92);
          for (uVar13 = uVar11 >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
            puVar5 = puVar15;
            puVar15 = puVar15 + 1;
            *puVar5 = 0x2020;
          }
          if ((uVar11 & 1) != 0) {
            *(undefined1 *)puVar15 = 0x20;
          }
        }
        *(undefined1 *)(unaff_BP + -3) = 0;
        func_0x0000b116(0x105e,1,1,unaff_BP + -0x3e);
        *(undefined2 *)(unaff_BP + -0x92) = 0;
LAB_3000_c485_1:
        param_2 = (uint *)*(undefined2 *)(unaff_BP + -0x92);
      } while (*(char *)((int)param_2 + unaff_BP + -0x3e) == '\0');
    } while( true );
  case 9:
    func_0x0000d87e(0x3000,*(undefined2 *)0x640a);
    func_0x0000d87e(0xd83,*(undefined2 *)0x640a);
    func_0x0000d87e(0xd83,*(undefined2 *)0x640a);
    func_0x0000d87e(0xd83,*(undefined2 *)0x640a);
    func_0x0000d87e(0xd83,*(undefined2 *)0x640a);
    func_0x0000d87e(0xd83,*(undefined2 *)0x640a);
    in_BX = func_0x0000d87e(0xd83,*(undefined2 *)0x640a);
    if (*(int *)(unaff_BP + 6) == 2) {
      return in_BX;
    }
    break;
  case 10:
    if (in_BX == 0xd5) {
      FUN_3000_c730();
      func_0x0000fb40();
      func_0x0000fb40();
      goto LAB_3000_d38d;
    }
    if (in_BX == 0xd6) {
      iVar10 = FUN_3000_c92c();
      if (iVar10 != 0) {
        FUN_3000_0856();
      }
      goto LAB_3000_d38d;
    }
    if (in_BX == 0xd7) {
      FUN_3000_cc86();
      goto LAB_3000_d38d;
    }
    if (in_BX == 0xd8) {
      FUN_3000_cea0();
      goto LAB_3000_d38d;
    }
    if (in_BX == 0xe0) {
      uVar9 = *(undefined2 *)0x9928;
LAB_3000_d292:
      *(undefined2 *)0x6ea2 = 1;
    }
    else if (in_BX == 0xe1) {
      if (*(int *)0x6ea2 < 2) goto LAB_3000_d38d;
      *(int *)0x6ea2 = *(int *)0x6ea2 + -1;
    }
    else if (in_BX == 0xe2) {
      uVar9 = *(undefined2 *)0x9928;
      *(int *)0x6ea2 = *(int *)0x6ea2 + -3;
      if (*(int *)0x6ea2 < 1) goto LAB_3000_d292;
    }
    else if (in_BX == 0xe8) {
LAB_3000_d372:
      *(int *)0x6ea2 = *(int *)0x442c + -1;
    }
    else if (in_BX == 0xe9) {
      if (*(int *)0x442c + -1 <= *(int *)0x6ea2) goto LAB_3000_d38d;
      *(int *)0x6ea2 = *(int *)0x6ea2 + 1;
    }
    else {
      if (in_BX != 0xea) goto LAB_3000_d38d;
      *(int *)0x6ea2 = *(int *)0x6ea2 + 3;
      if ((*(int *)(unaff_BP + -10) == 1) && (*(int *)0x442c + -1 < *(int *)0x6ea2))
      goto LAB_3000_d372;
    }
    FUN_3000_740a();
    FUN_3000_f02a();
LAB_3000_d38d:
    if (*(int *)(unaff_BP + -8) == 0x1b) {
      if (*(int *)(unaff_BP + -10) == 1) {
        *(undefined2 *)(unaff_BP + -8) = 0;
        if (-1 < *(int *)0x442c) {
          *(undefined2 *)(unaff_BP + -0x922) = *(undefined2 *)0x442c;
          uVar9 = *(undefined2 *)0x9926;
          do {
            iVar10 = *(int *)(unaff_BP + -8) * 8;
            *(undefined4 *)(iVar10 + 0x645a) = *(undefined4 *)(unaff_BP + iVar10 + -0x918);
            *(undefined4 *)(iVar10 + 0x645e) = *(undefined4 *)(unaff_BP + iVar10 + -0x914);
            *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
          } while (*(int *)(unaff_BP + -8) <= *(int *)(unaff_BP + -0x922));
        }
      }
      uVar11 = func_0x0000dec0();
      return uVar11;
    }
    FUN_3000_bdc0();
    FUN_3000_828a();
                    /* WARNING: Subroutine does not return */
    FUN_1000_32f2();
  }
  if (((*(int *)(unaff_BP + 6) != 3) && (*(int *)(unaff_BP + 6) != 0xb)) &&
     (*(int *)(unaff_BP + 6) != 0xd)) {
    in_BX = *(uint *)(unaff_BP + 6);
    *(uint *)0x44 = in_BX;
  }
  return in_BX;
LAB_3000_7c80:
  FUN_3000_828a();
  *(undefined4 *)(unaff_BP + -0x6c) = 0;
  iVar10 = FUN_3000_819a();
  *(int *)(unaff_BP + -4) = iVar10;
  if (iVar10 != -1) {
    func_0x0000d836();
    func_0x0000f61c();
                    /* WARNING: Subroutine does not return */
    FUN_3000_ddee();
  }
  goto LAB_3000_7c9b;
}



// Function: FUN_3000_d9ae @ 3000:d9ae

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Instruction at (ram,0x0003c486) overlaps instruction at (ram,0x0003c485)
    */

uint __cdecl16far FUN_3000_d9ae(void)

{
  char *pcVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  undefined2 *puVar5;
  code *pcVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined2 in_CX;
  char cVar12;
  char extraout_DH;
  uint in_BX;
  int iVar13;
  int unaff_BP;
  uint *unaff_SI;
  undefined2 *puVar14;
  int unaff_DI;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar17;
  undefined4 uVar18;
  long lVar19;
  
  pcVar6 = (code *)swi(0x3d);
  (*pcVar6)();
  uVar9 = *(uint *)(unaff_BP + 10);
  if (10 < uVar9) {
    iVar13 = *(int *)(unaff_BP + 8);
    if (iVar13 == 1) {
      pcVar6 = (code *)swi(0x39);
      (*pcVar6)();
    }
    else if (iVar13 == 2) {
      pcVar6 = (code *)swi(0x39);
      (*pcVar6)();
    }
    else {
      uVar9 = iVar13 - 3;
      if (uVar9 != 0) goto LAB_3000_dc5d;
      pcVar6 = (code *)swi(0x39);
      (*pcVar6)();
    }
    pcVar6 = (code *)swi(0x38);
    (*pcVar6)();
    pcVar6 = (code *)swi(0x39);
    (*pcVar6)();
    pcVar6 = (code *)swi(0x3d);
    uVar9 = (*pcVar6)();
LAB_3000_dc5d:
    *(undefined4 *)(unaff_BP + -0x7a) = *(undefined4 *)(unaff_BP + -8);
    *(undefined4 *)(unaff_BP + -0x76) = *(undefined4 *)(unaff_BP + -4);
    iVar13 = *(int *)(unaff_BP + 6) * 8;
    uVar15 = *(undefined2 *)0x9926;
    *(undefined4 *)(iVar13 + 0x645a) = *(undefined4 *)(unaff_BP + -0x7a);
    *(undefined4 *)(iVar13 + 0x645e) = *(undefined4 *)(unaff_BP + -0x76);
    return uVar9;
  }
  iVar13 = uVar9 * 2;
  uVar15 = 0x3000;
  uVar16 = 0x3000;
  cVar8 = (char)in_BX;
  cVar12 = (char)((uint)in_CX >> 8);
  switch(uVar9) {
  case 0:
    break;
  case 1:
    if (*(int *)(*(int *)0x25f + 8) != 1) {
      FUN_3000_06c8();
      FUN_3000_06c8();
      *(undefined2 *)(*(int *)0x25f + 8) = 1;
    }
    return 1;
  case 2:
    *(char *)0x6650 = *(char *)0x6650 + '\x01';
    FUN_1000_2b18();
    *(undefined1 *)((int)*(undefined4 *)(unaff_BP + 6) + 0x23) = 0;
    if (*(int *)(unaff_BP + -0x11a) == 0xb) {
      *(undefined2 *)(unaff_BP + -0xc) = 0;
    }
    return *(uint *)(unaff_BP + -0xc);
  case 3:
    pcVar6 = (code *)swi(0x51);
    (*pcVar6)();
    bVar7 = FUN_3000_00d4();
    *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) ^ (bVar7 ^ *(byte *)(unaff_BP + -2)) & 0xf;
    func_0x00008d0e();
    func_0x0000d836();
    iVar10 = FUN_3000_00d4();
    *(uint *)(unaff_BP + -4) = iVar10 << 0xc | *(uint *)(unaff_BP + -4) & 0xfff;
    func_0x00008d0e();
    func_0x0000d836();
    bVar7 = FUN_4000_00d4();
    *(uint *)(unaff_BP + -4) =
         *(uint *)(unaff_BP + -4) ^ ((bVar7 ^ *(byte *)(unaff_BP + -3)) & 0xf) << 8;
    func_0x00008d0e();
    func_0x0000d836();
    cVar8 = FUN_4000_00d4();
    *(uint *)(unaff_BP + -4) =
         *(uint *)(unaff_BP + -4) ^ (byte)(cVar8 << 4 ^ *(byte *)(unaff_BP + -4)) & 0xf0;
    func_0x00008d0e();
    func_0x0000d836();
    bVar7 = FUN_4000_00d4();
    *(uint *)(unaff_BP + -4) = *(uint *)(unaff_BP + -4) ^ (bVar7 ^ *(byte *)(unaff_BP + -4)) & 0xf;
    pcVar6 = (code *)swi(0x37);
    (*pcVar6)();
    pcVar6 = (code *)swi(0x39);
    uVar9 = (*pcVar6)();
    uVar15 = *(undefined2 *)0x9926;
    *(undefined4 *)(iVar13 * 8 + 0x645a) = *(undefined4 *)(unaff_BP + -0x24);
    *(undefined4 *)(iVar13 * 8 + 0x645e) = *(undefined4 *)(unaff_BP + -0x20);
    return uVar9;
  case 4:
    puVar3 = unaff_SI + uVar9;
    uVar9 = *puVar3;
    *(char *)puVar3 = (char)*puVar3 + cVar8;
    if (SCARRY1((char)uVar9,cVar8) == (char)*puVar3 < '\0') {
      iVar13 = *(int *)0x4428;
      if ((long)iVar13 < *(long *)(unaff_BP + -0x6c)) {
        *(int *)(unaff_BP + -0x6c) = iVar13;
        *(int *)(unaff_BP + -0x6a) = iVar13 >> 0xf;
      }
    }
    else {
      *(undefined4 *)(unaff_BP + -0x6c) = 0x96;
    }
    if ((*(int *)(unaff_BP + -0x6c) != *(int *)(unaff_BP + -0xe)) ||
       (1 < *(int *)(unaff_BP + *(int *)(unaff_BP + -0x6c) * 2 + -0x2ae))) {
      *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)(unaff_BP + -0x6c);
      *(undefined2 *)(unaff_BP + -0x68) = 0;
      *(undefined2 *)(unaff_BP + -0x10) = 0xffff;
      FUN_3000_7fa2();
    }
    func_0x00008d0e(0x3000);
LAB_3000_7c9b:
    FUN_3000_828a();
LAB_3000_7eeb:
    uVar15 = func_0x00008d86();
    *(undefined2 *)(unaff_BP + -6) = uVar15;
    func_0x00008d0e(0x8d8);
    iVar13 = *(int *)(unaff_BP + -6);
    if (iVar13 == 0xd) {
LAB_3000_7f17:
      iVar13 = FUN_3000_94ee();
      if ((iVar13 != 0) &&
         ((*(int *)(unaff_BP + -0x10) == -1 ||
          (iVar13 = FUN_3000_aec2(0x8c9,*(undefined2 *)(unaff_BP + -0xe),
                                  *(undefined2 *)(unaff_BP + -0x10),unaff_BP + -4), iVar13 != 0))))
      {
        FUN_3000_80f6(0x8c9,*(undefined2 *)(unaff_BP + 6));
        FUN_3000_828a();
        return 0xd;
      }
      func_0x0000d836();
LAB_3000_7f94:
      FUN_3000_828a();
      return 0x1b;
    }
    if (iVar13 == 0x1b) goto LAB_3000_7f94;
    if (iVar13 == 0x31) {
LAB_3000_7a70:
      uVar18 = FUN_3000_23d6();
      if (*(int *)((int)uVar18 + 4) == 0xd) {
        *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)0x4428;
        *(undefined2 *)(unaff_BP + -0x10) = 9;
      }
      else {
        *(int *)(unaff_BP + -0xe) = *(int *)0x4428 + -0x16;
        *(undefined2 *)(unaff_BP + -0x10) = 0xffff;
      }
      func_0x0000d87e();
      goto LAB_3000_7bea;
    }
    if (iVar13 == 0x32) {
LAB_3000_7acb:
      if (*(int *)(unaff_BP + -0x68) < 0x16) {
        func_0x0000d7f2(0x8c9,*(undefined2 *)0x6406);
        func_0x0000e998(0xd7f,*(undefined2 *)0x6406);
        *(int *)(unaff_BP + -0x68) = *(int *)(unaff_BP + -0x68) + 1;
        goto LAB_3000_7b06;
      }
LAB_3000_7e8e:
      func_0x0000d7f2(0x8c9,*(undefined2 *)0x6406);
      func_0x0000e998(0xd7f,*(undefined2 *)0x6406);
      FUN_3000_93be(0xe99);
LAB_3000_7ece:
      uVar15 = 0;
      goto LAB_3000_7ed3;
    }
    if (iVar13 == 0x33) goto LAB_3000_7e8e;
    if (iVar13 == 0x37) {
LAB_3000_7b2f:
      func_0x0000d87e(0x8c9,*(undefined2 *)0x6406,*(undefined2 *)(unaff_BP + -0x68),0,0x5f3);
      *(undefined2 *)(unaff_BP + -0x68) = 0;
      *(undefined2 *)(unaff_BP + -0x10) = 0xffff;
      *(undefined2 *)(unaff_BP + -0xe) = 0x96;
      goto LAB_3000_7edd;
    }
    if (iVar13 == 0x38) {
LAB_3000_7b62:
      if (0 < *(int *)(unaff_BP + -0x68)) {
        func_0x0000d7f2(0x8c9,*(undefined2 *)0x6406);
        func_0x0000e998(0xd7f,*(undefined2 *)0x6406);
        *(int *)(unaff_BP + -0x68) = *(int *)(unaff_BP + -0x68) + -1;
        goto LAB_3000_7b06;
      }
      if ((*(int *)(unaff_BP + -0xe) != 0x96) || (*(int *)(unaff_BP + -0x10) != -1)) {
        func_0x0000d7f2(0x8c9,*(undefined2 *)0x6406);
        func_0x0000e998(0xd7f,*(undefined2 *)0x6406);
        FUN_3000_9320(0xe99);
LAB_3000_7bea:
        uVar15 = 0x16;
LAB_3000_7ed3:
        *(undefined2 *)(unaff_BP + -0x68) = uVar15;
LAB_3000_7edd:
        FUN_3000_7fa2();
      }
      goto LAB_3000_7eeb;
    }
    if (iVar13 != 0x39) {
      if (iVar13 == 0x42) goto LAB_3000_7c80;
      if (iVar13 == 0x47) {
LAB_3000_7dfc:
        FUN_3000_828a();
        *(long *)(unaff_BP + -0x6c) = (long)*(int *)(unaff_BP + -0xe);
        func_0x0000d836();
                    /* WARNING: Subroutine does not return */
        FUN_3000_ddee(0xd83,unaff_BP + -0x6c);
      }
      if (iVar13 == 0x62) goto LAB_3000_7c80;
      if (iVar13 == 0x67) goto LAB_3000_7dfc;
      if (iVar13 == 0x147) goto LAB_3000_7b2f;
      if (iVar13 == 0x148) goto LAB_3000_7b62;
      if (iVar13 != 0x149) {
        if (iVar13 == 0x14b) goto LAB_3000_7f17;
        if (iVar13 == 0x14f) goto LAB_3000_7a70;
        if (iVar13 == 0x150) goto LAB_3000_7acb;
        if (iVar13 == 0x151) goto LAB_3000_7e8e;
        goto LAB_3000_7eeb;
      }
    }
    if ((*(int *)(unaff_BP + -0xe) != 0x96) || (*(int *)(unaff_BP + -0x10) != -1)) {
      func_0x0000d7f2(0x8c9,*(undefined2 *)0x6406);
      func_0x0000e998(0xd7f,*(undefined2 *)0x6406);
      FUN_3000_9320(0xe99);
      goto LAB_3000_7ece;
    }
    if (*(int *)(unaff_BP + -0x68) != 0) {
      func_0x0000d7f2(0x8c9,*(undefined2 *)0x6406);
      func_0x0000e998(0xd7f,*(undefined2 *)0x6406);
      *(undefined2 *)(unaff_BP + -0x68) = 0;
LAB_3000_7b06:
      func_0x0000d7f2(0xe99,*(undefined2 *)0x6406);
      func_0x0000e998(0xd7f,*(undefined2 *)0x6406);
    }
    goto LAB_3000_7eeb;
  case 5:
    *(char *)(unaff_BP + (int)unaff_SI) =
         *(char *)(unaff_BP + (int)unaff_SI) + cVar12 + CARRY2(uVar9,uVar9);
    uVar15 = func_0x0000e550(0x3000,10,0xd,0x11,0x30,0xdf4);
    *(undefined2 *)(unaff_BP + -2) = uVar15;
    func_0x0000c1b4(0xe4c,0);
    func_0x0000c1b4(0xc1b,1);
    func_0x0000c1fa();
    func_0x0000c1b4(0xc1b,2);
    func_0x0000c1fa();
    func_0x0000c1b4(0xc1b,3);
    func_0x0000c1fa();
    func_0x0000c1b4(0xc1b,4);
    func_0x0000c1fa();
    func_0x0000c1b4(0xc1b,5);
    func_0x0000c1fa();
    func_0x0000b116(0xc1b,0,0x1f,unaff_BP + -0x40);
    func_0x0000b116(0x937,1,4,unaff_BP + -0x58);
    func_0x0000b116(0x937,2,4,unaff_BP + -0x70);
    func_0x0000b116(0x937,3,4,unaff_BP + -0x88);
    if (*(char *)0x1084 == 'I') {
      func_0x0000b116(0x937,4,6,unaff_BP + -0xa0);
      uVar15 = 4;
    }
    else {
      func_0x0000b116(0x937,4,7,unaff_BP + -0xa0);
      uVar15 = 5;
    }
    func_0x0000b116(0x937,5,uVar15,unaff_BP + -0xb8);
    iVar13 = func_0x0000a9d4();
    if (iVar13 == 0xd) {
      FUN_1000_335c(unaff_BP + -0x40);
      iVar13 = FUN_1000_335c(unaff_BP + -0x58);
      if (iVar13 == 1) {
        iVar13 = unaff_BP + -10;
        uVar15 = unaff_SS;
      }
      else {
        iVar13 = 0;
        uVar15 = 0;
      }
      *(int *)(unaff_BP + -0x2e) = iVar13;
      *(undefined2 *)(unaff_BP + -0x2c) = uVar15;
      iVar13 = FUN_1000_335c(unaff_BP + -0x70);
      if (iVar13 == 1) {
        iVar13 = unaff_BP + -0x12;
        uVar15 = unaff_SS;
      }
      else {
        iVar13 = 0;
        uVar15 = 0;
      }
      *(int *)(unaff_BP + -0x32) = iVar13;
      *(undefined2 *)(unaff_BP + -0x30) = uVar15;
      iVar13 = FUN_1000_335c(unaff_BP + -0x88);
      if (iVar13 == 1) {
        iVar13 = unaff_BP + -0x1a;
        uVar15 = unaff_SS;
      }
      else {
        iVar13 = 0;
        uVar15 = 0;
      }
      *(int *)(unaff_BP + -0x36) = iVar13;
      *(undefined2 *)(unaff_BP + -0x34) = uVar15;
      iVar13 = FUN_1000_335c(unaff_BP + -0xa0);
      if (iVar13 == 1) {
        iVar13 = unaff_BP + -0x22;
        uVar15 = unaff_SS;
      }
      else {
        iVar13 = 0;
        uVar15 = 0;
      }
      *(int *)(unaff_BP + -0x3a) = iVar13;
      *(undefined2 *)(unaff_BP + -0x38) = uVar15;
      iVar13 = FUN_1000_335c(unaff_BP + -0xb8);
      if (iVar13 == 1) {
        iVar13 = unaff_BP + -0x2a;
        uVar15 = unaff_SS;
      }
      else {
        iVar13 = 0;
        uVar15 = 0;
      }
      *(int *)(unaff_BP + -0x3e) = iVar13;
      *(undefined2 *)(unaff_BP + -0x3c) = uVar15;
      func_0x000033ca(0x105e,*(undefined2 *)0xdca,*(undefined4 *)(unaff_BP + -0x2e),
                      *(undefined4 *)(unaff_BP + -0x32),(int)*(undefined4 *)(unaff_BP + -0x36),
                      (int)((ulong)*(undefined4 *)(unaff_BP + -0x36) >> 0x10),
                      (int)*(undefined4 *)(unaff_BP + -0x3a));
      if (*(int *)0x84e4 == 0) {
        FUN_4000_13aa();
      }
      else {
        FUN_4000_2d20();
      }
    }
    uVar9 = func_0x0000dec0();
    return uVar9;
  case 6:
    FUN_3000_3ce5();
    return *(uint *)0x26a;
  case 7:
    uVar9 = (uint)(byte)(cVar8 + cVar12);
    puVar3 = unaff_SI;
    puVar4 = (uint *)*puVar3;
    *puVar3 = *puVar3 - (int)unaff_SI;
    if (unaff_SI <= puVar4) {
      iVar13 = 0x100;
      do {
        bVar7 = in(*(int *)0x26e + 8);
        uVar9 = (uint)bVar7;
        bVar17 = false;
        if ((bVar7 & 0x80) == 0) goto LAB_3000_08d7;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      uVar9 = FUN_3000_3ce5();
      if (!bVar17) {
LAB_3000_08d7:
        *(undefined2 *)(*(int *)0x25f + 8) = 1;
      }
    }
    return uVar9;
  case 8:
    unaff_SI[uVar9] = unaff_SI[uVar9] + 1;
    pcVar1 = (char *)(unaff_BP + unaff_DI + 0x6eb6);
    *pcVar1 = *pcVar1 + (char)in_CX;
    unaff_SI[uVar9 + 0xe13d] = unaff_SI[uVar9 + 0xe13d] + 1;
    *(char *)((int)unaff_SI + 0x11) = *(char *)((int)unaff_SI + 0x11) + extraout_DH;
    do {
      if ((*(char *)((int)unaff_SI + unaff_BP + -0x3e) != ' ') &&
         (*(int *)(unaff_BP + -0x92) = *(int *)(unaff_BP + -0x92) + 1,
         *(int *)(unaff_BP + -0x92) < 0x3b)) goto LAB_3000_c485_1;
      do {
        iVar13 = *(int *)(unaff_BP + -0x92);
        while (((-1 < iVar13 && (*(char *)(unaff_BP + *(int *)(unaff_BP + -0x92) + -0x3e) != '\\'))
               && (*(char *)(unaff_BP + *(int *)(unaff_BP + -0x92) + -0x3e) != ':'))) {
          piVar2 = (int *)(unaff_BP + -0x92);
          *piVar2 = *piVar2 + -1;
          iVar13 = *piVar2;
        }
        *(undefined2 *)(unaff_BP + -0x90) = 0;
        *(int *)(unaff_BP + -0x92) = *(int *)(unaff_BP + -0x92) + 1;
        if (0 < *(int *)(unaff_BP + -0x92)) {
          *(undefined2 *)(unaff_BP + -0x9a) = *(undefined2 *)(unaff_BP + -0x92);
          do {
            func_0x00008eee();
            piVar2 = (int *)(unaff_BP + -0x9a);
            *piVar2 = *piVar2 + -1;
          } while (*piVar2 != 0);
        }
        iVar13 = func_0x0000a9d4();
        if (iVar13 != 0xd) {
          func_0x0000dec0();
          return 0;
        }
        func_0x0000d7f2(0x937,*(undefined2 *)(unaff_BP + -2));
        func_0x00008bf6(0xd7f);
        uVar15 = 0xcb6;
        func_0x0000cb62(0x8b8);
        if ((*(char *)(unaff_BP + -0x3d) != ':') ||
           ((*(char *)(unaff_BP + -0x3e) != 'a' && (*(char *)(unaff_BP + -0x3e) != 'A')))) {
LAB_3000_c558:
          lVar19 = FUN_1000_0d18(uVar15,unaff_BP + -0x3e);
          *(undefined2 *)(unaff_BP + -0x96) = (int)lVar19;
          *(undefined2 *)(unaff_BP + -0x94) = (int)((ulong)lVar19 >> 0x10);
          if (lVar19 != 0) {
            FUN_1000_0c16();
            func_0x0000dec0();
            func_0x00012a98(0xdec,(int)*(undefined4 *)(unaff_BP + 6),
                            (int)((ulong)*(undefined4 *)(unaff_BP + 6) >> 0x10));
            return 1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_1000_32f2();
        }
        uVar15 = 0x3612;
        iVar13 = FUN_3000_83d2();
        if (iVar13 != 0) goto LAB_3000_c558;
        func_0x0000d87e(0x3612,*(undefined2 *)(unaff_BP + -2),2,1,0x1e2b);
        uVar9 = FUN_1000_2afe(0xd83);
        *(uint *)(unaff_BP + -0x92) = uVar9;
        if (uVar9 < 0x3c) {
          puVar14 = (undefined2 *)(unaff_BP + *(int *)(unaff_BP + -0x92) + -0x3e);
          uVar9 = 0x3c - *(int *)(unaff_BP + -0x92);
          for (uVar11 = uVar9 >> 1; uVar11 != 0; uVar11 = uVar11 - 1) {
            puVar5 = puVar14;
            puVar14 = puVar14 + 1;
            *puVar5 = 0x2020;
          }
          if ((uVar9 & 1) != 0) {
            *(undefined1 *)puVar14 = 0x20;
          }
        }
        *(undefined1 *)(unaff_BP + -3) = 0;
        func_0x0000b116(0x105e,1,1,unaff_BP + -0x3e);
        *(undefined2 *)(unaff_BP + -0x92) = 0;
LAB_3000_c485_1:
        unaff_SI = (uint *)*(undefined2 *)(unaff_BP + -0x92);
      } while (*(char *)((int)unaff_SI + unaff_BP + -0x3e) == '\0');
    } while( true );
  case 9:
    func_0x0000d87e(0x3000,*(undefined2 *)0x640a,3,1,0xb9d);
    func_0x0000d87e(0xd83,*(undefined2 *)0x640a,4,1,0xba0);
    func_0x0000d87e(0xd83,*(undefined2 *)0x640a,5,1,0xba3);
    func_0x0000d87e(0xd83,*(undefined2 *)0x640a,6,1,0xba6);
    func_0x0000d87e(0xd83,*(undefined2 *)0x640a,0,0x14,0xba9);
    func_0x0000d87e(0xd83,*(undefined2 *)0x640a,1,0x14,0xbac);
    in_BX = func_0x0000d87e(0xd83,*(undefined2 *)0x640a,2,0x14,0xbb0);
    if (*(int *)(unaff_BP + 6) == 2) {
      return in_BX;
    }
    break;
  case 10:
    if (in_BX == 0xd5) {
      FUN_3000_c730();
      func_0x0000fb40();
      uVar15 = 0xfb4;
      func_0x0000fb40();
      goto LAB_3000_d38d;
    }
    if (in_BX == 0xd6) {
      iVar13 = FUN_3000_c92c();
      uVar15 = uVar16;
      if (iVar13 != 0) {
        FUN_3000_0856();
      }
      goto LAB_3000_d38d;
    }
    if (in_BX == 0xd7) {
      FUN_3000_cc86();
      uVar15 = uVar16;
      goto LAB_3000_d38d;
    }
    if (in_BX == 0xd8) {
      FUN_3000_cea0();
      uVar15 = uVar16;
      goto LAB_3000_d38d;
    }
    if (in_BX == 0xe0) {
      uVar16 = *(undefined2 *)0x9928;
LAB_3000_d292:
      *(undefined2 *)0x6ea2 = 1;
    }
    else if (in_BX == 0xe1) {
      if (*(int *)0x6ea2 < 2) goto LAB_3000_d38d;
      *(int *)0x6ea2 = *(int *)0x6ea2 + -1;
    }
    else if (in_BX == 0xe2) {
      uVar16 = *(undefined2 *)0x9928;
      *(int *)0x6ea2 = *(int *)0x6ea2 + -3;
      if (*(int *)0x6ea2 < 1) goto LAB_3000_d292;
    }
    else if (in_BX == 0xe8) {
LAB_3000_d372:
      *(int *)0x6ea2 = *(int *)0x442c + -1;
    }
    else if (in_BX == 0xe9) {
      if (*(int *)0x442c + -1 <= *(int *)0x6ea2) goto LAB_3000_d38d;
      *(int *)0x6ea2 = *(int *)0x6ea2 + 1;
    }
    else {
      if (in_BX != 0xea) goto LAB_3000_d38d;
      *(int *)0x6ea2 = *(int *)0x6ea2 + 3;
      if ((*(int *)(unaff_BP + -10) == 1) && (*(int *)0x442c + -1 < *(int *)0x6ea2))
      goto LAB_3000_d372;
    }
    FUN_3000_740a();
    FUN_3000_f02a();
LAB_3000_d38d:
    if (*(int *)(unaff_BP + -8) == 0x1b) {
      if (*(int *)(unaff_BP + -10) == 1) {
        *(undefined2 *)(unaff_BP + -8) = 0;
        if (-1 < *(int *)0x442c) {
          *(undefined2 *)(unaff_BP + -0x922) = *(undefined2 *)0x442c;
          uVar15 = *(undefined2 *)0x9926;
          do {
            iVar13 = *(int *)(unaff_BP + -8) * 8;
            *(undefined4 *)(iVar13 + 0x645a) = *(undefined4 *)(unaff_BP + iVar13 + -0x918);
            *(undefined4 *)(iVar13 + 0x645e) = *(undefined4 *)(unaff_BP + iVar13 + -0x914);
            *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
          } while (*(int *)(unaff_BP + -8) <= *(int *)(unaff_BP + -0x922));
        }
      }
      uVar9 = func_0x0000dec0();
      return uVar9;
    }
    FUN_3000_bdc0(uVar15);
    FUN_3000_828a();
    uVar18 = *(undefined4 *)((int)*(undefined4 *)(unaff_BP + -0x10) + 0x18);
                    /* WARNING: Subroutine does not return */
    FUN_1000_32f2((int)uVar18,(int)((ulong)uVar18 >> 0x10),0x223d);
  }
  if (((*(int *)(unaff_BP + 6) != 3) && (*(int *)(unaff_BP + 6) != 0xb)) &&
     (*(int *)(unaff_BP + 6) != 0xd)) {
    in_BX = *(uint *)(unaff_BP + 6);
    *(uint *)0x44 = in_BX;
  }
  return in_BX;
LAB_3000_7c80:
  FUN_3000_828a();
  *(undefined4 *)(unaff_BP + -0x6c) = 0;
  iVar13 = FUN_3000_819a();
  *(int *)(unaff_BP + -4) = iVar13;
  if (iVar13 != -1) {
    func_0x0000d836();
    func_0x0000f61c();
                    /* WARNING: Subroutine does not return */
    FUN_3000_ddee(0xf61,unaff_BP + -0x6c);
  }
  goto LAB_3000_7c9b;
}



// Function: FUN_3000_d9f1 @ 3000:d9f1

void __cdecl16far FUN_3000_d9f1(void)

{
  undefined2 uVar1;
  code *pcVar2;
  int iVar3;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  FUN_3000_dfba(0x1000,unaff_BP + -8);
  iVar3 = *(int *)(unaff_BP + 8);
  if (iVar3 == 1) {
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
  }
  else if (iVar3 == 2) {
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
  }
  else {
    if (iVar3 != 3) goto LAB_3000_dc5d;
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
  }
  pcVar2 = (code *)swi(0x38);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x3d);
  (*pcVar2)();
LAB_3000_dc5d:
  *(undefined4 *)(unaff_BP + -0x7a) = *(undefined4 *)(unaff_BP + -8);
  *(undefined4 *)(unaff_BP + -0x76) = *(undefined4 *)(unaff_BP + -4);
  iVar3 = *(int *)(unaff_BP + 6) * 8;
  uVar1 = *(undefined2 *)0x9926;
  *(undefined4 *)(iVar3 + 0x645a) = *(undefined4 *)(unaff_BP + -0x7a);
  *(undefined4 *)(iVar3 + 0x645e) = *(undefined4 *)(unaff_BP + -0x76);
  return;
}



// Function: FUN_3000_da06 @ 3000:da06

/* WARNING: Instruction at (ram,0x0003da3b) overlaps instruction at (ram,0x0003da3a)
    */

void __cdecl16far FUN_3000_da06(void)

{
  char *pcVar1;
  undefined2 uVar2;
  char cVar3;
  code *pcVar4;
  int in_BX;
  int iVar5;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char cVar6;
  char cVar7;
  int in_stack_0000000e;
  undefined2 uStack_2;
  
  while( true ) {
    *(int *)(unaff_BP + unaff_SI) = *(int *)(unaff_BP + unaff_SI) + unaff_BP;
    uStack_2 = *(undefined2 *)0xfec;
    func_0x0000d836(unaff_CS);
    cVar6 = (undefined1 *)0xfff5 < &uStack_2;
    pcVar4 = (code *)swi(0x39);
    (*pcVar4)();
    pcVar1 = (char *)(in_BX + unaff_DI + 0x38cd);
    *pcVar1 = (*pcVar1 - (char)in_BX) - cVar6;
    pcVar4 = (code *)swi(0x39);
    (*pcVar4)();
    unaff_SI = in_stack_0000000e;
    pcVar4 = (code *)swi(0x3d);
    (*pcVar4)();
    in_stack_0000000e = unaff_BP + -8;
    FUN_3000_dfba();
    cVar7 = (undefined1 *)0xfff9 < &stack0x000e;
    pcVar4 = (code *)swi(0x39);
    (*pcVar4)();
    pcVar1 = (char *)(in_BX + unaff_DI + 0x38cd);
    cVar6 = *pcVar1;
    cVar3 = *pcVar1 - (char)in_BX;
    *pcVar1 = cVar3 - cVar7;
    if (*pcVar1 != '\0' && (SBORROW1(cVar6,(char)in_BX) != SBORROW1(cVar3,cVar7)) == *pcVar1 < '\0')
    break;
    pcVar4 = (code *)swi(0x38);
    (*pcVar4)();
    unaff_CS = 0xd83;
  }
  pcVar4 = (code *)swi(0x39);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  iVar5 = *(int *)(unaff_BP + 8);
  if (iVar5 == 1) {
    pcVar4 = (code *)swi(0x39);
    (*pcVar4)();
  }
  else if (iVar5 == 2) {
    pcVar4 = (code *)swi(0x39);
    (*pcVar4)();
  }
  else {
    if (iVar5 != 3) goto LAB_3000_dc5d;
    pcVar4 = (code *)swi(0x39);
    (*pcVar4)();
  }
  pcVar4 = (code *)swi(0x38);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x39);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
LAB_3000_dc5d:
  *(undefined4 *)(unaff_BP + -0x7a) = *(undefined4 *)(unaff_BP + -8);
  *(undefined4 *)(unaff_BP + -0x76) = *(undefined4 *)(unaff_BP + -4);
  iVar5 = *(int *)(unaff_BP + 6) * 8;
  uVar2 = *(undefined2 *)0x9926;
  *(undefined4 *)(iVar5 + 0x645a) = *(undefined4 *)(unaff_BP + -0x7a);
  *(undefined4 *)(iVar5 + 0x645e) = *(undefined4 *)(unaff_BP + -0x76);
  return;
}



// Function: FUN_3000_dafa @ 3000:dafa

void FUN_3000_dafa(void)

{
  code *pcVar1;
  undefined1 in_BH;
  int unaff_BP;
  undefined2 unaff_SS;
  
  FUN_3000_dfba(0x1000);
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  LOCK();
  *(undefined1 *)(unaff_BP + -1) = in_BH;
  UNLOCK();
  FUN_3000_dc28();
  return;
}



// Function: thunk_FUN_1000_32f2 @ 3000:db36

void __cdecl16far thunk_FUN_1000_32f2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_32f2();
}



// Function: FUN_3000_dc28 @ 3000:dc28

void __cdecl16far FUN_3000_dc28(void)

{
  undefined2 uVar1;
  code *pcVar2;
  int iVar3;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  pcVar2 = (code *)swi(0x38);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x3d);
  (*pcVar2)();
  iVar3 = *(int *)(unaff_BP + 8);
  if (iVar3 == 1) {
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
  }
  else if (iVar3 == 2) {
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
  }
  else {
    if (iVar3 != 3) goto LAB_3000_dc5d;
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
  }
  pcVar2 = (code *)swi(0x38);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x3d);
  (*pcVar2)();
LAB_3000_dc5d:
  *(undefined4 *)(unaff_BP + -0x7a) = *(undefined4 *)(unaff_BP + -8);
  *(undefined4 *)(unaff_BP + -0x76) = *(undefined4 *)(unaff_BP + -4);
  iVar3 = *(int *)(unaff_BP + 6) * 8;
  uVar1 = *(undefined2 *)0x9926;
  *(undefined4 *)(iVar3 + 0x645a) = *(undefined4 *)(unaff_BP + -0x7a);
  *(undefined4 *)(iVar3 + 0x645e) = *(undefined4 *)(unaff_BP + -0x76);
  return;
}



// Function: FUN_3000_dc82 @ 3000:dc82

void FUN_3000_dc82(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_ddee @ 3000:ddee

void FUN_3000_ddee(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_dfba @ 3000:dfba

void FUN_3000_dfba(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_e10a @ 3000:e10a

/* WARNING: Instruction at (ram,0x0003e10b) overlaps instruction at (ram,0x0003e10a)
    */

undefined2 __cdecl16far FUN_3000_e10a(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int in_AX;
  char in_CL;
  int unaff_BP;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 uVar4;
  
  do {
    pcVar1 = (char *)(unaff_BP + unaff_DI + -0x3ba);
    *pcVar1 = *pcVar1 + in_CL;
    *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
    if (in_AX < *(int *)(unaff_BP + -2)) {
      return 0;
    }
    iVar3 = *(int *)(unaff_BP + -2);
    if (*(char *)(unaff_BP + iVar3 + -0x1e) == '.') {
      if (*(int *)(unaff_BP + -10) != 0) {
        uVar4 = 0x2761;
        goto LAB_3000_e135;
      }
      *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + 1;
    }
    else {
      cVar2 = *(char *)(unaff_BP + iVar3 + -0x1e);
      if ((*(byte *)(cVar2 + -0x6abb) & 4) == 0) {
        if (cVar2 != '-') {
          if ((*(byte *)(*(char *)(unaff_BP + iVar3 + -0x1e) + -0x6abb) & 8) == 0) {
            uVar4 = 0x2767;
            goto LAB_3000_e135;
          }
          if (*(int *)(unaff_BP + -6) == 0) {
            uVar4 = 0x2769;
            goto LAB_3000_e135;
          }
          goto FUN_3000_e10a_1;
        }
        iVar3 = *(int *)(unaff_BP + -8);
        *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
        if (iVar3 != 0) {
          uVar4 = 0x2763;
LAB_3000_e135:
          FUN_1000_10a0(uVar4);
          return 1;
        }
        if (*(int *)(unaff_BP + -6) == 0) {
          uVar4 = 0x2765;
          goto LAB_3000_e135;
        }
      }
      *(undefined2 *)(unaff_BP + -6) = 0;
    }
FUN_3000_e10a_1:
    in_AX = *(int *)(unaff_BP + -4);
  } while( true );
}



// Function: FUN_3000_e98a @ 3000:e98a

void FUN_3000_e98a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_edc6 @ 3000:edc6

void FUN_3000_edc6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_f02a @ 3000:f02a

void FUN_3000_f02a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_f1c7 @ 3000:f1c7

void __cdecl16far FUN_3000_f1c7(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  func_0x00012a98();
  *(undefined2 *)(unaff_BP + -0x46) = 0;
  func_0x0000d87e(0x105e,*(undefined2 *)0x6408,2,0x4d - *(int *)(unaff_BP + -0x46),unaff_BP + -0x22)
  ;
  return;
}



// Function: FUN_3000_f57a @ 3000:f57a

void FUN_3000_f57a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_f7a4 @ 3000:f7a4

void FUN_3000_f7a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_3000_fdc8 @ 3000:fdc8

void FUN_3000_fdc8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_00d4 @ 4000:00d4

void FUN_4000_00d4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_0158 @ 4000:0158

void FUN_4000_0158(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_04fc @ 4000:04fc

void FUN_4000_04fc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_0552 @ 4000:0552

void FUN_4000_0552(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: thunk_FUN_4000_0699 @ 4000:0610

undefined2 __cdecl16far thunk_FUN_4000_0699(void)

{
  return 1;
}



// Function: FUN_4000_066e @ 4000:066e

undefined2 FUN_4000_066e(void)

{
  undefined2 uVar1;
  int iVar2;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uStack0004;
  
  uVar1 = 0x1000;
  do {
    uStack0004 = CONCAT22(*(int *)(unaff_BP + -2) * 0x2c + 0x1096,uVar1);
    iVar2 = FUN_4000_0158();
    *(int *)(unaff_BP + -4) = iVar2;
    if (iVar2 == 0xd) {
LAB_4000_0633:
      if (*(int *)(unaff_BP + -6) == 0) {
        uVar1 = FUN_4000_0699();
        return uVar1;
      }
      uStack0004 = CONCAT22(unaff_BP + -2,uVar1);
      iVar2 = FUN_4000_0d9c();
      while( true ) {
        if (iVar2 == 0) {
          return 1;
        }
        if (*(int *)(unaff_BP + -2) != 0) break;
        uStack0004 = CONCAT22(uVar1,0x5fe);
        FUN_4000_0fb6();
        uStack0004 = CONCAT22(unaff_BP + -2,uVar1);
        iVar2 = FUN_4000_0d9c();
      }
    }
    else if ((*(int *)(unaff_BP + -4) == 0x149) || (*(int *)(unaff_BP + -4) == 0x39)) {
      if (1 < *(int *)(unaff_BP + -2)) {
        *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + -1;
      }
    }
    else if ((*(int *)(unaff_BP + -4) == 0x151) || (*(int *)(unaff_BP + -4) == 0x33)) {
      if ((long)*(int *)(unaff_BP + -2) < *(long *)0x10be) {
        *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
      }
    }
    else if (*(int *)(unaff_BP + -4) == 0x1b) goto LAB_4000_0633;
    uStack0004 = *(undefined4 *)(*(int *)(unaff_BP + -2) * 0x2c + 0x10be);
    func_0x0001306e(uVar1);
    uVar1 = 0x105e;
  } while( true );
}



// Function: FUN_4000_0699 @ 4000:0699

undefined2 __cdecl16far FUN_4000_0699(void)

{
  return 1;
}



// Function: FUN_4000_069e @ 4000:069e

void FUN_4000_069e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_0856 @ 4000:0856

void FUN_4000_0856(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_0d62 @ 4000:0d62

void FUN_4000_0d62(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_0d9c @ 4000:0d9c

void FUN_4000_0d9c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_0fb6 @ 4000:0fb6

void FUN_4000_0fb6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_10fc @ 4000:10fc

void FUN_4000_10fc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_1176 @ 4000:1176

void FUN_4000_1176(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_13aa @ 4000:13aa

undefined2 __cdecl16far FUN_4000_13aa(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int unaff_BP;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  uVar2 = *(undefined4 *)0xcde9;
  pcVar1 = (char *)(unaff_BP + unaff_DI + -0x1ba);
  *pcVar1 = *pcVar1 + -1;
  return (int)uVar2;
}



// Function: FUN_4000_145a @ 4000:145a

void FUN_4000_145a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_14ee @ 4000:14ee

void FUN_4000_14ee(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_1586 @ 4000:1586

void FUN_4000_1586(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_15bc @ 4000:15bc

void FUN_4000_15bc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_1754 @ 4000:1754

void FUN_4000_1754(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_19ce @ 4000:19ce

void FUN_4000_19ce(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_1a26 @ 4000:1a26

void FUN_4000_1a26(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_2246 @ 4000:2246

void FUN_4000_2246(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_23d6 @ 4000:23d6

void FUN_4000_23d6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_2422 @ 4000:2422

void FUN_4000_2422(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_247c @ 4000:247c

void FUN_4000_247c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_24cc @ 4000:24cc

void FUN_4000_24cc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_2d20 @ 4000:2d20

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00042d21) overlaps instruction at (ram,0x00042d20)
    */

void FUN_4000_2d20(void)

{
  char *pcVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  int in_CX;
  undefined1 extraout_DL;
  int in_BX;
  int unaff_BP;
  undefined4 *unaff_SI;
  undefined4 *unaff_DI;
  undefined2 unaff_ES;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  undefined2 in_stack_00000000;
  
  uVar5 = 0x1000;
  do {
    *unaff_DI = *unaff_SI;
    *(undefined4 *)(unaff_BP + -0x1c2) = *(undefined4 *)(unaff_BP + -0x404);
    *(undefined4 *)(unaff_BP + -0x1be) = *(undefined4 *)(unaff_BP + -0x400);
    cVar7 = '\0';
    if (*(int *)0x3e42 != 0) {
LAB_4000_2d4c:
      *(undefined4 *)0xa3ce = *(undefined4 *)(unaff_BP + -0x1c2);
      *(undefined4 *)0xa3d2 = *(undefined4 *)(unaff_BP + -0x1be);
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x38);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
                    /* WARNING: Subroutine does not return */
      FUN_1000_32f2();
    }
    pcVar2 = (code *)swi(0x39);
    uVar4 = (*pcVar2)();
    pcVar2 = (code *)swi(4);
    if (cVar7 == '\x01') {
      uVar4 = (*pcVar2)();
    }
    *(undefined2 *)0x38cd = uVar4;
    in_CX = CONCAT11((char)((uint)in_CX >> 8) + -1,(char)in_CX);
    bVar6 = unaff_BP + -0x3fc == in_BX;
    pcVar2 = (code *)swi(0x3b);
    (*pcVar2)();
    in_CX = in_CX + -1;
    if (in_CX == 0 || bVar6 != false) {
      if (bVar6) break;
      goto LAB_4000_2d4c;
    }
    *(undefined1 *)(unaff_BP + -0x77) = 0;
    func_0x0000d87e(uVar5,*(undefined2 *)0x7906,1,0xf,unaff_BP + -0x80);
    uVar5 = 0x3612;
    FUN_3000_bd92();
    in_BX = 6;
    unaff_DS = 0x4940;
    unaff_DI = (undefined4 *)(unaff_BP + -0x400);
    unaff_SI = (undefined4 *)0x6b7e;
    *(undefined4 *)(unaff_BP + -0x404) = uRam0004ff7a;
    unaff_ES = unaff_SS;
  } while( true );
LAB_4000_2dad:
  *(undefined4 *)(unaff_BP + -0x410) = DAT_4000_ff82;
  *(undefined4 *)(unaff_BP + -0x40c) = DAT_4000_ff86;
  *(undefined4 *)(unaff_BP + -0x1ca) = *(undefined4 *)(unaff_BP + -0x410);
  *(undefined4 *)(unaff_BP + -0x1c6) = *(undefined4 *)(unaff_BP + -0x40c);
  cVar7 = '\0';
  if (*(int *)0x3e42 != 0) {
LAB_4000_2de7:
    *(undefined4 *)0xa3d6 = *(undefined4 *)(unaff_BP + -0x1ca);
    *(undefined4 *)0xa3da = *(undefined4 *)(unaff_BP + -0x1c6);
    pcVar2 = (code *)swi(0x3c);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x38);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
                    /* WARNING: Subroutine does not return */
    FUN_1000_32f2();
  }
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)();
  *(undefined2 *)0x38cd = CONCAT11(extraout_AH,-cVar7);
  in_CX = CONCAT11((char)((uint)in_CX >> 8) + -1,(char)in_CX);
  bVar6 = unaff_BP + -0x408 == in_BX;
  pcVar2 = (code *)swi(0x3b);
  (*pcVar2)();
  in_CX = in_CX + -1;
  if (in_CX == 0 || bVar6 != false) {
    if (bVar6) goto LAB_4000_2e48;
    goto LAB_4000_2de7;
  }
  *(undefined1 *)(unaff_BP + -0x77) = 0;
  func_0x0000d87e(uVar5,*(undefined2 *)0x7906,2,0xf,unaff_BP + -0x80);
  uVar5 = 0x3612;
  FUN_3000_bd92();
  in_BX = 7;
  goto LAB_4000_2dad;
LAB_4000_2e48:
  *(undefined4 *)(unaff_BP + -0x41c) = DAT_4000_ff8a;
  *(undefined4 *)(unaff_BP + -0x418) = DAT_4000_ff8e;
  *(undefined4 *)(unaff_BP + -0x1d2) = *(undefined4 *)(unaff_BP + -0x41c);
  *(undefined4 *)(unaff_BP + -0x1ce) = *(undefined4 *)(unaff_BP + -0x418);
  if (*(int *)0x3e42 != 0) {
LAB_4000_2e82:
    uVar3 = (undefined1)((uint)in_CX >> 8);
    *(undefined4 *)0xa3de = *(undefined4 *)(unaff_BP + -0x1d2);
    *(undefined4 *)0xa3e2 = *(undefined4 *)(unaff_BP + -0x1ce);
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
    LOCK();
    *(undefined1 *)0xcdfe = uVar3;
    UNLOCK();
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
                    /* WARNING: Subroutine does not return */
    FUN_1000_32f2();
  }
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)();
  in_CX = CONCAT11((char)((uint)in_CX >> 8) + -1,(char)in_CX);
  bVar6 = unaff_BP + -0x414 == in_BX;
  pcVar2 = (code *)swi(0x3b);
  (*pcVar2)();
  in_CX = in_CX + -1;
  if (in_CX == 0 || bVar6 != false) {
    if (bVar6) goto LAB_4000_2ede;
    goto LAB_4000_2e82;
  }
  *(undefined1 *)(unaff_BP + -0x77) = 0;
  func_0x0000d87e(uVar5,*(undefined2 *)0x7906,3,0xf,unaff_BP + -0x80);
  uVar5 = 0x3612;
  FUN_3000_bd92();
  in_BX = 8;
  goto LAB_4000_2e48;
LAB_4000_2ede:
  *(undefined4 *)(unaff_BP + -0x428) = DAT_4000_ff92;
  *(undefined4 *)(unaff_BP + -0x424) = DAT_4000_ff96;
  *(undefined4 *)(unaff_BP + -0x1da) = *(undefined4 *)(unaff_BP + -0x428);
  *(undefined4 *)(unaff_BP + -0x1d6) = *(undefined4 *)(unaff_BP + -0x424);
  if (*(int *)0x3e42 != 0) {
LAB_4000_2f18:
    *(undefined4 *)0xa3e6 = *(undefined4 *)(unaff_BP + -0x1da);
    *(undefined4 *)0xa3ea = *(undefined4 *)(unaff_BP + -0x1d6);
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
    LOCK();
    *(undefined1 *)0xcdfe = extraout_AH_00;
    UNLOCK();
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
                    /* WARNING: Subroutine does not return */
    FUN_1000_32f2();
  }
  pcVar2 = (code *)swi(0x39);
  uVar3 = (*pcVar2)();
  out(0xa3,uVar3);
  pcVar2 = (code *)swi(0x38);
  (*pcVar2)();
  in_CX = CONCAT11((char)((uint)in_CX >> 8) + -1,(char)in_CX);
  bVar6 = unaff_BP + -0x420 == in_BX;
  pcVar2 = (code *)swi(0x3b);
  (*pcVar2)();
  in_CX = in_CX + -1;
  if (in_CX == 0 || bVar6 != false) {
    if (bVar6) goto LAB_4000_2f74;
    goto LAB_4000_2f18;
  }
  *(undefined1 *)(unaff_BP + -0x77) = 0;
  func_0x0000d87e(uVar5,*(undefined2 *)0x7906,4,0xf,unaff_BP + -0x80);
  uVar5 = 0x3612;
  FUN_3000_bd92();
  in_BX = 9;
  goto LAB_4000_2ede;
LAB_4000_2f74:
  *(undefined4 *)(unaff_BP + -0x434) = DAT_4000_ff9a;
  *(undefined4 *)(unaff_BP + -0x430) = DAT_4000_ff9e;
  *(undefined4 *)(unaff_BP + -0x1e2) = *(undefined4 *)(unaff_BP + -0x434);
  *(undefined4 *)(unaff_BP + -0x1de) = *(undefined4 *)(unaff_BP + -0x430);
  if (*(int *)0x3e42 != 0) {
LAB_4000_2fae:
    uVar3 = (undefined1)in_BX;
    *(undefined4 *)0xa3ee = *(undefined4 *)(unaff_BP + -0x1e2);
    *(undefined4 *)0xa3f2 = *(undefined4 *)(unaff_BP + -0x1de);
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
    LOCK();
    *(undefined1 *)0xcdfe = uVar3;
    UNLOCK();
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
                    /* WARNING: Subroutine does not return */
    FUN_1000_32f2();
  }
  pcVar2 = (code *)swi(0x39);
  uVar8 = (*pcVar2)();
  out((int)((ulong)uVar8 >> 0x10),(char)uVar8);
  *(undefined2 *)0x38cd = (int)uVar8;
  in_CX = CONCAT11((char)((uint)in_CX >> 8) + -1,(char)in_CX);
  bVar6 = unaff_BP + -0x42c == in_BX;
  pcVar2 = (code *)swi(0x3b);
  (*pcVar2)();
  in_CX = in_CX + -1;
  if (in_CX == 0 || bVar6 != false) {
    if (bVar6) goto LAB_4000_300a;
    goto LAB_4000_2fae;
  }
  *(undefined1 *)(unaff_BP + -0x77) = 0;
  func_0x0000d87e(uVar5,*(undefined2 *)0x7906,5,0xf,unaff_BP + -0x80);
  uVar5 = 0x3612;
  FUN_3000_bd92();
  in_BX = 10;
  goto LAB_4000_2f74;
LAB_4000_300a:
  *(undefined4 *)(unaff_BP + -0x440) = DAT_4000_ffa2;
  *(undefined4 *)(unaff_BP + -0x43c) = DAT_4000_ffa6;
  *(undefined4 *)(unaff_BP + -0x1ea) = *(undefined4 *)(unaff_BP + -0x440);
  *(undefined4 *)(unaff_BP + -0x1e6) = *(undefined4 *)(unaff_BP + -0x43c);
  if (*(int *)0x3e42 != 0) {
LAB_4000_3044:
    *(undefined4 *)0xa3f6 = *(undefined4 *)(unaff_BP + -0x1ea);
    *(undefined4 *)0xa3fa = *(undefined4 *)(unaff_BP + -0x1e6);
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
    LOCK();
    *(undefined1 *)0xcdfe = extraout_DL;
    UNLOCK();
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
                    /* WARNING: Subroutine does not return */
    FUN_1000_32f2();
  }
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)();
  in_CX = CONCAT11((char)((uint)in_CX >> 8) + -1,(char)in_CX);
  bVar6 = unaff_BP + -0x438 == in_BX;
  pcVar2 = (code *)swi(0x3b);
  (*pcVar2)();
  in_CX = in_CX + -1;
  if (in_CX == 0 || bVar6 != false) {
    if (bVar6) goto LAB_4000_30a0;
    goto LAB_4000_3044;
  }
  *(undefined1 *)(unaff_BP + -0x77) = 0;
  func_0x0000d87e(uVar5,*(undefined2 *)0x7906,1,0x1a,unaff_BP + -0x80);
  uVar5 = 0x3612;
  FUN_3000_bd92();
  in_BX = 0xb;
  goto LAB_4000_300a;
LAB_4000_30a0:
  *(undefined4 *)(unaff_BP + -0x44c) = DAT_4000_ffaa;
  *(undefined4 *)(unaff_BP + -0x448) = DAT_4000_ffae;
  *(undefined4 *)(unaff_BP + -0x1f2) = *(undefined4 *)(unaff_BP + -0x44c);
  *(undefined4 *)(unaff_BP + -0x1ee) = *(undefined4 *)(unaff_BP + -0x448);
  if (*(int *)0x3e42 != 0) {
LAB_4000_30da:
    uVar3 = (undefined1)in_CX;
    *(undefined4 *)0xa3fe = *(undefined4 *)(unaff_BP + -0x1f2);
    *(undefined4 *)0xa402 = *(undefined4 *)(unaff_BP + -0x1ee);
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
    LOCK();
    *(undefined1 *)0xcdfe = uVar3;
    UNLOCK();
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
                    /* WARNING: Subroutine does not return */
    FUN_1000_32f2();
  }
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)();
  pcVar1 = (char *)(unaff_BP + -0x1ee + unaff_BP + 0x38d1);
  *pcVar1 = *pcVar1 + '\x01';
  in_CX = CONCAT11((char)((uint)in_CX >> 8) + -1,(char)in_CX);
  bVar6 = unaff_BP + -0x444 == in_BX;
  pcVar2 = (code *)swi(0x3b);
  (*pcVar2)();
  in_CX = in_CX + -1;
  if (in_CX == 0 || bVar6 != false) {
    if (bVar6) goto LAB_4000_3136;
    goto LAB_4000_30da;
  }
  *(undefined1 *)(unaff_BP + -0x77) = 0;
  func_0x0000d87e(uVar5,*(undefined2 *)0x7906,2,0x1a,unaff_BP + -0x80);
  uVar5 = 0x3612;
  FUN_3000_bd92();
  in_BX = 0xc;
  goto LAB_4000_30a0;
LAB_4000_3136:
  *(undefined4 *)(unaff_BP + -0x458) = DAT_4000_ffb2;
  *(undefined4 *)(unaff_BP + -0x454) = DAT_4000_ffb6;
  *(undefined4 *)(unaff_BP + -0x1fa) = *(undefined4 *)(unaff_BP + -0x458);
  *(undefined4 *)(unaff_BP + -0x1f6) = *(undefined4 *)(unaff_BP + -0x454);
  if (*(int *)0x3e42 != 0) {
LAB_4000_3170:
    *(undefined4 *)0xa406 = *(undefined4 *)(unaff_BP + -0x1fa);
    *(undefined4 *)0xa40a = *(undefined4 *)(unaff_BP + -0x1f6);
    pcVar2 = (code *)swi(0x39);
    uVar3 = (*pcVar2)();
    LOCK();
    *(undefined1 *)0xcdfe = uVar3;
    UNLOCK();
    pcVar2 = (code *)swi(0x39);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
                    /* WARNING: Subroutine does not return */
    FUN_1000_32f2();
  }
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)();
  *(undefined1 *)(unaff_BP + -0x1f2) = *(undefined1 *)(unaff_BP + -0x450);
  pcVar2 = (code *)swi(0x38);
  (*pcVar2)();
  in_CX = CONCAT11((char)((uint)in_CX >> 8) + -1,(char)in_CX);
  bVar6 = unaff_BP + -0x44f == in_BX;
  pcVar2 = (code *)swi(0x3b);
  (*pcVar2)();
  in_CX = in_CX + -1;
  if (in_CX == 0 || bVar6 != false) {
    if (bVar6) {
      *(undefined4 *)(unaff_BP + -0x464) = DAT_4000_ffba;
      *(undefined4 *)(unaff_BP + -0x460) = DAT_4000_ffbe;
      *(undefined4 *)(unaff_BP + -0x202) = *(undefined4 *)(unaff_BP + -0x464);
      *(undefined4 *)(unaff_BP + -0x1fe) = *(undefined4 *)(unaff_BP + -0x460);
      if (*(int *)0x3e42 == 0) {
        pcVar2 = (code *)swi(0x39);
        (*pcVar2)();
        *(undefined1 *)(unaff_BP + -0x1fa) = *(undefined1 *)(unaff_BP + -0x45c);
        pcVar2 = (code *)swi(0x38);
        (*pcVar2)();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined4 *)0xa40e = *(undefined4 *)(unaff_BP + -0x202);
      *(undefined4 *)0xa412 = *(undefined4 *)(unaff_BP + -0x1fe);
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x38);
      (*pcVar2)();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto LAB_4000_3170;
  }
  *(undefined1 *)(unaff_BP + -0x77) = 0;
  func_0x0000d87e(uVar5,*(undefined2 *)0x7906,3,0x1a,unaff_BP + -0x80);
  uVar5 = 0x3612;
  FUN_3000_bd92();
  in_BX = 0xd;
  goto LAB_4000_3136;
}



// Function: FUN_4000_4eba @ 4000:4eba

void FUN_4000_4eba(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_4fd0 @ 4000:4fd0

void FUN_4000_4fd0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_57d6 @ 4000:57d6

void FUN_4000_57d6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_5c22 @ 4000:5c22

void FUN_4000_5c22(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_5d96 @ 4000:5d96

void FUN_4000_5d96(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_5fd8 @ 4000:5fd8

void FUN_4000_5fd8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_6628 @ 4000:6628

void FUN_4000_6628(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_6852 @ 4000:6852

void FUN_4000_6852(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_6964 @ 4000:6964

void FUN_4000_6964(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_6de0 @ 4000:6de0

void FUN_4000_6de0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_6eb0 @ 4000:6eb0

void FUN_4000_6eb0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_7052 @ 4000:7052

void FUN_4000_7052(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_70b2 @ 4000:70b2

void __cdecl16far FUN_4000_70b2(void)

{
  int iVar1;
  undefined2 uVar2;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  func_0x0000d87e(0x1000);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  func_0x0000d87e(0xd83,*(undefined2 *)0x6302);
  FUN_3000_04fc();
  iVar1 = func_0x00008d86();
  *(int *)(unaff_BP + -0x32) = iVar1;
  if (iVar1 != 0x31) {
    uVar2 = func_0x0000dec0();
    *(undefined2 *)0x6302 = uVar2;
  }
  iVar1 = *(int *)(unaff_BP + -0x32);
  if (iVar1 == 0x31) {
    FUN_3000_04fc();
    FUN_4000_b924();
    FUN_3000_04fc(0x2615);
    uVar2 = func_0x0000dec0();
    *(undefined2 *)0x6302 = uVar2;
  }
  else {
    if (iVar1 == 0x32) {
      FUN_2000_828a();
      iVar1 = FUN_4000_776c();
      if (iVar1 == 0) goto LAB_4000_775f;
      FUN_3000_04fc();
      FUN_4000_791c();
    }
    else {
      if (iVar1 == 0x33) {
        FUN_2000_828a();
        iVar1 = FUN_4000_776c();
        if (iVar1 != 0) {
          FUN_2000_828a();
          func_0x0000c4be();
          FUN_3000_04fc(0xc32);
          func_0x0000e2be();
          func_0x0000e2be();
          func_0x0000e2be();
          func_0x00008d0e(0xe2b);
          FUN_2000_edc6();
          func_0x00008d0e(0x2615);
          func_0x0000f8ae();
          func_0x0000f8ae();
          func_0x0000f8ae();
          FUN_2000_740a();
          FUN_3000_04fc(0x2615,1);
          FUN_2000_828a(0x2615);
          func_0x0000c4be(0x2615,0xc37c,0x2615);
        }
        goto LAB_4000_775f;
      }
      if (iVar1 == 0x34) {
        if ((*(int *)0x7904 == 0) || (iVar1 = func_0x00026472(), iVar1 == 0)) goto LAB_4000_775f;
        FUN_3000_04fc();
        FUN_4000_7d76();
      }
      else {
        if (iVar1 == 0x35) {
          if (*(int *)0x7904 != 0) {
            func_0x000053be();
          }
          goto LAB_4000_775f;
        }
        if (iVar1 == 0x36) {
          FUN_3000_04fc();
          FUN_4000_9476();
        }
        else if (iVar1 == 0x37) {
          FUN_3000_04fc();
          iVar1 = FUN_4000_81c2();
          while (iVar1 != 0) {
            iVar1 = FUN_4000_94be();
          }
        }
        else if (iVar1 == 0x38) {
          iVar1 = FUN_4000_b4f8();
          if (iVar1 != 0) goto LAB_4000_775f;
          FUN_3000_04fc();
          iVar1 = FUN_4000_871e();
          if ((iVar1 != 0) && (*(char *)(unaff_BP + -0x30) != '\0')) {
            FUN_4000_86a6();
          }
        }
        else if (iVar1 == 0x39) {
          iVar1 = FUN_4000_b4f8();
          if (iVar1 != 0) goto LAB_4000_775f;
          FUN_3000_04fc();
          FUN_4000_8842();
        }
        else {
          if (iVar1 == 0x13b) {
            FUN_3000_0d62();
            goto LAB_4000_775f;
          }
          if (iVar1 == 0x13c) {
            FUN_3000_04fc();
            FUN_4000_8a62();
          }
          else {
            if (iVar1 == 0x13d) {
              *(undefined2 *)*(undefined4 *)(unaff_BP + -4) = 0x27;
              func_0x0000d7f2();
              func_0x0000e998();
              if (*(int *)0x88ba != 0) {
                func_0x00012a98(0xe99);
                *(undefined2 *)0x88ba = 0;
                FUN_2000_76b0();
              }
              *(undefined2 *)*(undefined4 *)(unaff_BP + -8) = 7;
              func_0x0000f61c();
              func_0x0000fb40();
              FUN_2000_828a();
              FUN_3000_04fc(0x2615);
              FUN_4000_9940();
              FUN_3000_04fc(0x2615,1);
              func_0x0000d7f2(0x2615,*(undefined2 *)0x6408,1);
              func_0x0000e998(0xd7f,*(undefined2 *)0x6408,0x74);
              *(undefined2 *)*(undefined4 *)(unaff_BP + -8) = 0x27;
              *(undefined2 *)*(undefined4 *)(unaff_BP + -4) = 7;
              func_0x0000f61c(0xe99);
              func_0x0000fb40(0xf61);
              FUN_2000_828a();
              goto LAB_4000_775f;
            }
            if (iVar1 == 0x13e) {
              iVar1 = func_0x00026472();
              if (iVar1 == 0) goto LAB_4000_775f;
              FUN_3000_04fc();
              FUN_4000_8504();
            }
            else {
              if (iVar1 != 0x13f) {
                if ((iVar1 == 0x140) && (*(int *)0x7904 != 0)) {
                  FUN_4000_066e();
                }
                goto LAB_4000_775f;
              }
              FUN_3000_04fc();
              *(undefined2 *)*(undefined4 *)(unaff_BP + -4) = 0x27;
              func_0x0000f61c();
              func_0x0000fb40();
              FUN_4000_9ca8();
              *(undefined2 *)*(undefined4 *)(unaff_BP + -4) = 7;
              func_0x0000f61c();
              func_0x0000fb40();
            }
          }
        }
      }
    }
    FUN_3000_04fc();
  }
LAB_4000_775f:
  FUN_3000_04fc();
  return;
}



// Function: FUN_4000_776c @ 4000:776c

void FUN_4000_776c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_791c @ 4000:791c

void FUN_4000_791c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_7d76 @ 4000:7d76

void FUN_4000_7d76(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_81c2 @ 4000:81c2

void FUN_4000_81c2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_8504 @ 4000:8504

void FUN_4000_8504(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_86a6 @ 4000:86a6

void FUN_4000_86a6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_871e @ 4000:871e

void FUN_4000_871e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_8842 @ 4000:8842

void FUN_4000_8842(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_8a62 @ 4000:8a62

void FUN_4000_8a62(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_9476 @ 4000:9476

void FUN_4000_9476(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_94be @ 4000:94be

void FUN_4000_94be(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_9940 @ 4000:9940

void FUN_4000_9940(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_9ca8 @ 4000:9ca8

void FUN_4000_9ca8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_a456 @ 4000:a456

void FUN_4000_a456(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_aa7e @ 4000:aa7e

void FUN_4000_aa7e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_ab10 @ 4000:ab10

void FUN_4000_ab10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_ad1a @ 4000:ad1a

void FUN_4000_ad1a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_b254 @ 4000:b254

void FUN_4000_b254(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_b2ae @ 4000:b2ae

void FUN_4000_b2ae(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_b3be @ 4000:b3be

void FUN_4000_b3be(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_b4f8 @ 4000:b4f8

void FUN_4000_b4f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_b546 @ 4000:b546

void FUN_4000_b546(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_b56c @ 4000:b56c

void FUN_4000_b56c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_b5f6 @ 4000:b5f6

void FUN_4000_b5f6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_b924 @ 4000:b924

void FUN_4000_b924(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_bd92 @ 4000:bd92

void FUN_4000_bd92(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_bfe6 @ 4000:bfe6

void FUN_4000_bfe6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_c0b2 @ 4000:c0b2

void FUN_4000_c0b2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_c200 @ 4000:c200

void FUN_4000_c200(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_c270 @ 4000:c270

void FUN_4000_c270(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_c3c0 @ 4000:c3c0

void FUN_4000_c3c0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_c4be @ 4000:c4be

void FUN_4000_c4be(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_c5bc @ 4000:c5bc

void FUN_4000_c5bc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_c77a @ 4000:c77a

void FUN_4000_c77a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_c7ca @ 4000:c7ca

void FUN_4000_c7ca(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_c822 @ 4000:c822

void FUN_4000_c822(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_cb2a @ 4000:cb2a

void FUN_4000_cb2a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_ce6e @ 4000:ce6e

void FUN_4000_ce6e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_cecc @ 4000:cecc

void FUN_4000_cecc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_d134 @ 4000:d134

void FUN_4000_d134(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_d30c @ 4000:d30c

void FUN_4000_d30c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_d54a @ 4000:d54a

void FUN_4000_d54a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_d720 @ 4000:d720

void FUN_4000_d720(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_d792 @ 4000:d792

void FUN_4000_d792(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_e1a8 @ 4000:e1a8

void FUN_4000_e1a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_e486 @ 4000:e486

void FUN_4000_e486(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_e7b6 @ 4000:e7b6

void FUN_4000_e7b6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_ee72 @ 4000:ee72

void FUN_4000_ee72(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_eed6 @ 4000:eed6

void FUN_4000_eed6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_f166 @ 4000:f166

void FUN_4000_f166(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_f2ba @ 4000:f2ba

void FUN_4000_f2ba(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_f384 @ 4000:f384

void FUN_4000_f384(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_f3b2 @ 4000:f3b2

void FUN_4000_f3b2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_f3dc @ 4000:f3dc

void FUN_4000_f3dc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_f58e @ 4000:f58e

void FUN_4000_f58e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_f642 @ 4000:f642

void FUN_4000_f642(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_f6fa @ 4000:f6fa

void FUN_4000_f6fa(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_f87a @ 4000:f87a

void FUN_4000_f87a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_4000_f8c6 @ 4000:f8c6

void FUN_4000_f8c6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_0252 @ 5000:0252

void __cdecl16far FUN_5000_0252(void)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  int *local_8;
  int local_4;
  
  uVar1 = *(undefined4 *)((int)*(undefined4 *)0x79e6 + 0x14);
  if (*(int *)((int)uVar1 + 4) == 0) {
    local_8 = (int *)*(undefined4 *)((int)*(undefined4 *)0x79e6 + 0xc);
    local_4 = 0x4b0;
  }
  else {
    local_8 = (int *)*(undefined4 *)((int)*(undefined4 *)0x79e6 + 0x14);
    local_4 = 0x32;
  }
  uVar4 = (undefined2)((ulong)local_8 >> 0x10);
  piVar3 = (int *)local_8;
  if (piVar3[2] != 0) {
    uVar2 = FUN_1000_3632(0x1000,*(int *)((int)*(undefined4 *)0x79e6 + 4) + 5);
    if ((uVar2 & 0x20) != 0) {
      func_0x00013640(0x105e,*(undefined2 *)((int)*(undefined4 *)0x79e6 + 4),
                      *(undefined1 *)((int)*(undefined4 *)(piVar3 + 3) + *local_8));
      *local_8 = *local_8 + 1;
      if (local_4 <= *local_8) {
        *local_8 = 0;
      }
      piVar3[2] = piVar3[2] + -1;
    }
  }
  return;
}



// Function: FUN_5000_02e6 @ 5000:02e6

void __cdecl16far FUN_5000_02e6(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int *local_a;
  int local_6;
  int local_4;
  
  local_6 = 0;
  uVar2 = *(undefined4 *)((int)*(undefined4 *)0x79e6 + 0x14);
  if (*(int *)((int)uVar2 + 4) == 0) {
    local_a = (int *)*(undefined4 *)((int)*(undefined4 *)0x79e6 + 0xc);
    local_4 = 0x4b0;
  }
  else {
    local_a = (int *)*(undefined4 *)((int)*(undefined4 *)0x79e6 + 0x14);
    local_4 = 0x32;
  }
  uVar5 = (undefined2)((ulong)local_a >> 0x10);
  piVar4 = (int *)local_a;
  iVar1 = piVar4[2];
  uVar3 = 0x1000;
  while ((iVar1 != 0 && (local_6 < *(int *)0x7bc2))) {
    func_0x00013640(uVar3,*(undefined2 *)((int)*(undefined4 *)0x79e6 + 4),
                    *(undefined1 *)((int)*(undefined4 *)(piVar4 + 3) + *local_a));
    *local_a = *local_a + 1;
    if (local_4 <= *local_a) {
      *local_a = 0;
    }
    piVar4[2] = piVar4[2] + -1;
    iVar1 = piVar4[2];
    uVar3 = 0x105e;
    local_6 = local_6 + 1;
  }
  return;
}



// Function: FUN_5000_0464 @ 5000:0464

void __cdecl16far FUN_5000_0464(void)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int unaff_BP;
  undefined2 uVar4;
  undefined2 unaff_SS;
  
  uVar2 = (uint)*(byte *)((int)*(undefined4 *)(unaff_BP + 10) + 1);
  func_0x0001591e(0x1000,uVar2 + 8);
  func_0x00015948();
  uVar4 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 6) >> 0x10);
  iVar3 = (int)*(undefined4 *)(unaff_BP + 6);
  uVar1 = *(undefined2 *)(iVar3 + 4);
  *(undefined2 *)(uVar2 + 8) = *(undefined2 *)(iVar3 + 2);
  *(undefined2 *)(uVar2 + 10) = uVar1;
  func_0x00013640(0x105e);
  func_0x00015978();
  return;
}



// Function: FUN_5000_04c6 @ 5000:04c6

void FUN_5000_04c6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_050e @ 5000:050e

void FUN_5000_050e(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_0610 @ 5000:0610

void FUN_5000_0610(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_0b72 @ 5000:0b72

void FUN_5000_0b72(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_0c98 @ 5000:0c98

void FUN_5000_0c98(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_0cce @ 5000:0cce

void FUN_5000_0cce(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_16d4 @ 5000:16d4

void FUN_5000_16d4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_1a6c @ 5000:1a6c

void FUN_5000_1a6c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_1c84 @ 5000:1c84

void FUN_5000_1c84(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_1e62 @ 5000:1e62

void FUN_5000_1e62(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_1fc6 @ 5000:1fc6

void FUN_5000_1fc6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_25c2 @ 5000:25c2

void FUN_5000_25c2(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_26d6 @ 5000:26d6

void FUN_5000_26d6(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_2790 @ 5000:2790

void FUN_5000_2790(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_28c4 @ 5000:28c4

void FUN_5000_28c4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_2a36 @ 5000:2a36

void FUN_5000_2a36(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_2b2c @ 5000:2b2c

void FUN_5000_2b2c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_2c10 @ 5000:2c10

void FUN_5000_2c10(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_2cf4 @ 5000:2cf4

void FUN_5000_2cf4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_2f82 @ 5000:2f82

void FUN_5000_2f82(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_3012 @ 5000:3012

void FUN_5000_3012(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_3176 @ 5000:3176

void FUN_5000_3176(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_32aa @ 5000:32aa

void FUN_5000_32aa(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_3318 @ 5000:3318

void FUN_5000_3318(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_3a3c @ 5000:3a3c

void FUN_5000_3a3c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_3d3a @ 5000:3d3a

void FUN_5000_3d3a(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// Function: FUN_5000_3d68 @ 5000:3d68

void FUN_5000_3d68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1000_08a6();
}



// FAILED to decompile: FUN_5000_6f55 @ 5000:6f55

// Function: entry @ 5ea5:0010

void __cdecl16far entry(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int unaff_ES;
  
  DAT_5ea5_0004 = unaff_ES + 0x10;
  DAT_5ea5_f6ce = DAT_5ea5_0004 + DAT_5ea5_000c;
  puVar4 = (undefined1 *)(DAT_5ea5_0006 + -1);
  puVar5 = puVar4;
  for (iVar3 = DAT_5ea5_0006; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + -1;
    puVar1 = puVar4;
    puVar4 = puVar4 + -1;
    *puVar2 = *puVar1;
  }
  DAT_5ea5_f6cc = 0x34;
  return;
}



