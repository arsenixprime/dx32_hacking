// Decompiled: B3T.EXE
// Processor: x86
// Language: x86:LE:16:Real Mode
//
// Memory Map:
//   CODE_0               1000:0000 - 1000:3161  [RWX] initialized
//   CODE_1               1316:0002 - 1316:0730  [RWX] initialized
//   CODE_2               1389:0001 - 1389:0274  [RWX] initialized
//   CODE_3               13b0:0005 - 13b0:0160  [RWX] initialized
//   CODE_4               13c6:0001 - 13c6:01b3  [RWX] initialized
//   CODE_5               13e1:0004 - 13e1:02cf  [RWX] initialized
//   CODE_6               140e:0000 - 140e:4228  [RWX] initialized
//   CODE_7               1830:0009 - 1830:0725  [RWX] initialized
//   CODE_8               18a2:0006 - 18a2:4b7f  [RWX] initialized
//   CODE_9               1d5a:0000 - 1d5a:26ef  [RWX] initialized
//   CODE_10              1fc9:0000 - 1fc9:016f  [RWX] initialized
//   CODE_11              1fe0:0000 - 1fe0:2afd  [RWX] initialized
//   DATA                 1fe0:2afe - 1fe0:4b2d  [RW-] uninitialized
//   HEADER               HEADER::00000000 - HEADER::000013ff  [---] initialized

// Function: main @ 1000:0000

void __cdecl16far switchD_1000:a40d::main(void)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined2 in_DX;
  undefined2 unaff_DS;
  int local_8;
  
  _aFchkstk();
  resetbrd();
  puVar2 = (undefined2 *)check_board_type();
  *(undefined2 *)0x2b30 = *puVar2;
  *(undefined2 *)0x2b32 = puVar2[1];
  *(undefined2 *)0x2b34 = puVar2[2];
  do {
    menudraw();
    local_8 = 0x1000;
    uVar1 = _getch();
    switch(uVar1) {
    case 0x1b:
    case 0x30:
      local_8 = 1;
      break;
    case 0x31:
      local_8 = 0x1000;
      fulltest();
      break;
    case 0x32:
      local_8 = 0x1000;
      registertest();
      break;
    case 0x33:
      local_8 = 0x1000;
      dpramtest();
      break;
    case 0x34:
      local_8 = 0x1000;
      mainmemtest();
      break;
    case 0x35:
      local_8 = 0x1000;
      uarttest();
      break;
    case 0x36:
      local_8 = 0x1000;
      analogtest();
      break;
    case 0x37:
      local_8 = 0x1000;
      load_test();
      break;
    case 0x38:
      local_8 = 0x1000;
      multitest();
      break;
    case 0x39:
      local_8 = 0x1000;
      viewer();
    }
  } while (local_8 == 0);
  return;
}



// Function: clear @ 1000:00f8

void __cdecl16far clear(void)

{
  _aFchkstk();
  system(0x1c6);
  return;
}



// Function: Wait @ 1000:0118

void __cdecl16far Wait(void)

{
  char cVar1;
  
  _aFchkstk();
  printf(0x1ca);
  do {
    cVar1 = _getch();
  } while (cVar1 == '\0');
  return;
}



// Function: getcntval @ 1000:014c

undefined2 __cdecl16far getcntval(void)

{
  undefined2 unaff_DI;
  
  _aFchkstk();
  printf(0x1eb);
  printf(0x220);
  scanf(0x223);
  return unaff_DI;
}



// Function: check_board_type @ 1000:01a2

/* WARNING: Removing unreachable block (ram,0x00010201) */

undefined2 __cdecl16far check_board_type(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined2 local_14;
  undefined2 local_10;
  uint uVar3;
  
  _aFchkstk();
  printf(0x226);
  loadadr(0x100,0);
  writelocation(0xdd,0);
  iVar2 = readlocation();
  if (iVar2 == 0xdd) {
    loadadr(0x100,8);
    iVar2 = readlocation();
    if (iVar2 == 0xdd) {
      write4dac(0x2000);
      wait(10);
      writesdac(0x8000);
      iVar2 = read4dac(0x11c);
      if (iVar2 == 0x2000) {
        *(undefined2 *)0x3712 = 0x24c;
        *(undefined2 *)0x3714 = unaff_DS;
        *(undefined2 *)0x3716 = 4;
      }
      else {
        writesdac(0x8000);
        for (uVar3 = 0; uVar3 < 2000; uVar3 = uVar3 + 1) {
        }
        iVar2 = readsdac();
        if (iVar2 == -0x8000) {
          *(undefined2 *)0x3712 = 0x2e1;
          *(undefined2 *)0x3714 = unaff_DS;
          *(undefined2 *)0x3716 = 3;
        }
        else {
          printf(0x252);
          printf(0x29f);
          printf(0x2ac);
          printf(0x2b9);
          printf(0x2c4);
          cVar1 = _getch();
          if (cVar1 == '1') {
            local_14 = 0x2cd;
            local_10 = 2;
          }
          else if (cVar1 == '2') {
            local_14 = 0x2c7;
            local_10 = 3;
          }
          else if (cVar1 == '3') {
            local_14 = 0x2d4;
            local_10 = 4;
          }
          else {
            local_14 = 0x2da;
            local_10 = 2;
          }
          *(undefined2 *)0x3712 = local_14;
          *(undefined2 *)0x3714 = unaff_DS;
          *(undefined2 *)0x3716 = local_10;
        }
      }
    }
    else {
      *(undefined2 *)0x3712 = 0x246;
      *(undefined2 *)0x3714 = unaff_DS;
      *(undefined2 *)0x3716 = 4;
    }
  }
  else {
    printf(0x2e7);
    printf(800);
    printf(0x32d);
    printf(0x338);
    printf(0x343);
    cVar1 = _getch();
    if (cVar1 == '1') {
      local_14 = 0x34c;
      local_10 = 2;
    }
    else if (cVar1 == '2') {
      local_14 = 0x346;
      local_10 = 3;
    }
    else if (cVar1 == '3') {
      local_14 = 0x353;
      local_10 = 4;
    }
    else {
      local_14 = 0x359;
      local_10 = 2;
    }
    *(undefined2 *)0x3712 = local_14;
    *(undefined2 *)0x3714 = unaff_DS;
    *(undefined2 *)0x3716 = local_10;
  }
  return 0x3712;
}



// Function: menudraw @ 1000:04c6

void __cdecl16far menudraw(void)

{
  _aFchkstk();
  clear();
  printf(0x360);
  printf(0x381);
  printf(0x3bb);
  printf(0x3d6);
  printf(0x3ed);
  printf(0x409);
  printf(0x423);
  printf(0x436);
  printf(0x459);
  printf(0x472);
  printf(0x493);
  printf(0x4b2);
  printf(0x4c0);
  printf(0x500);
  return;
}



// Function: fulltest @ 1000:05be

void __cdecl16far fulltest(void)

{
  undefined2 unaff_DS;
  undefined2 local_12;
  int iVar1;
  int iVar2;
  
  _aFchkstk();
  iVar2 = 0;
  clear(0);
  printf(0x503);
  printf(0x54e);
  local_12 = getcntval();
  for (iVar1 = 0; iVar1 < local_12; iVar1 = iVar1 + 1) {
    resetbrd();
    printf(0x583);
    tstloreg();
    tsthireg();
    tstadrgs();
    printf(0x599);
    tstdpram();
    if (*(int *)0x2b34 == 4) {
      tst040dp();
    }
    else {
      tst030dp();
    }
    if (*(int *)0x2b34 == 4) {
      tstbothdp4();
    }
    else {
      tstbothdp();
    }
    local_12 = 0x1000;
    printf(0x5b7);
    tst030ram();
    printf(0x5d3);
    iVar1 = uarttst();
    iVar2 = iVar2 + iVar1;
    printf(0x5e5);
    if (*(int *)0x2b34 == 4) {
      tstanalog4(iVar2);
    }
    else {
      tstanalog();
    }
    printf(0x5f9);
    iVar1 = 0x18a2;
    load_run_test();
  }
  Wait();
  clear();
  printf(0x611);
  printf(0x649);
  printf(0x678);
  printf(0x69a);
  printf(0x6bc);
  printf(0x6de);
  printf(0x717);
  printf(0x74e);
  printf(0x764);
  printf(0x77a);
  printf(0x798);
  printf(0x7d1);
  printf(0x806);
  printf(0x81e);
  printf(0x857);
  printf(0x882);
  printf(0x894);
  printf(0x8cd);
  printf(0x8fa);
  printf(0x91a);
  printf(0x953);
  printf(0x986);
  Wait();
  return;
}



// Function: registertest @ 1000:08f6

void __cdecl16far registertest(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  _aFchkstk();
  clear();
  resetbrd();
  printf(0x9a0);
  printf(0x9d0);
  printf(0x9fe);
  printf(0xa1a);
  uVar1 = getcntval();
  for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
    printf(0xa36);
    tstloreg();
    tsthireg();
    tstadrgs();
    uVar1 = 0x1000;
    iVar2 = _kbhit();
    if (iVar2 == 0x1b) break;
  }
  Wait();
  printf(0xa43);
  printf(0xa7b);
  printf(0xaaa);
  printf(0xaac);
  printf(0xace);
  printf(0xaf0);
  printf(0xb12);
  Wait();
  return;
}



// Function: dpramtest @ 1000:0a40

void __cdecl16far dpramtest(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_DS;
  uint uVar4;
  
  _aFchkstk();
  clear();
  resetbrd();
  printf(0xb14);
  printf(0xb49);
  printf(0xb77);
  printf(0xb93);
  uVar3 = 0x1000;
  uVar1 = getcntval();
  for (uVar4 = 0; uVar4 < uVar1; uVar4 = uVar4 + 1) {
    printf(0xbaf);
    tstdpram();
    if (*(int *)0x2b34 == 4) {
      tst040dp();
      uVar1 = uVar3;
    }
    else {
      tst030dp();
      uVar1 = uVar3;
    }
    if (*(int *)0x2b34 == 4) {
      tstbothdp4();
    }
    else {
      tstbothdp();
    }
    uVar3 = 0x18a2;
    iVar2 = _kbhit();
    if (iVar2 == 0x1b) break;
  }
  Wait();
  printf(0xbbc);
  printf(0xbf5);
  printf(0xc2c);
  printf(0xc42);
  printf(0xc58);
  printf(0xc76);
  Wait();
  return;
}



// Function: mainmemtest @ 1000:0bb4

void __cdecl16far mainmemtest(void)

{
  uint uVar1;
  uint uVar2;
  
  _aFchkstk();
  clear();
  resetbrd();
  printf(0xc78);
  printf(0xcab);
  printf(0xcd9);
  uVar1 = getcntval();
  for (uVar2 = 0; uVar2 < uVar1; uVar2 = uVar2 + 1) {
    printf(0xcf6);
    uVar1 = 0xc30;
    tst030ram();
  }
  Wait();
  printf(0xd03);
  printf(0xd3c);
  printf(0xd71);
  printf(0xd89);
  Wait();
  return;
}



// Function: uarttest @ 1000:0c9a

void __cdecl16far uarttest(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  _aFchkstk();
  iVar5 = 0;
  clear(0);
  resetbrd();
  printf(0xd8b);
  printf(0xdb7);
  printf(0xde5);
  printf(0xe01);
  uVar1 = getcntval();
  uVar3 = 0;
  while (uVar3 < uVar1) {
    printf(0xe1e);
    iVar2 = uarttst();
    iVar5 = iVar5 + iVar2;
    iVar4 = 0x1000;
    uVar1 = 0xd2d;
    iVar2 = _kbhit(iVar5);
    if (iVar2 == 0x1b) break;
    uVar3 = iVar4 + 1;
  }
  Wait();
  printf(0xe2b);
  printf(0xe64);
  printf(0xe8f);
  printf(0xea1);
  Wait();
  return;
}



// Function: analogtest @ 1000:0d98

void __cdecl16far analogtest(void)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_DS;
  uint uVar3;
  
  _aFchkstk();
  clear();
  resetbrd();
  printf(0xea3);
  printf(0xed1);
  printf(0xeff);
  printf(0xf1b);
  uVar1 = getcntval();
  for (uVar3 = 0; uVar3 < uVar1; uVar3 = uVar3 + 1) {
    printf(0xf37);
    if (*(int *)0x2b34 == 4) {
      tstanalog4();
    }
    else {
      tstanalog();
    }
    uVar1 = 0x1000;
    iVar2 = _kbhit();
    if (iVar2 == 0x1b) break;
  }
  Wait();
  printf(0xf44);
  printf(0xf7d);
  printf(0xfaa);
  printf(0xfca);
  Wait();
  return;
}



// Function: tstloreg @ 1000:0eaa

char __cdecl16far tstloreg(void)

{
  int iVar1;
  char cVar2;
  
  _aFchkstk();
  writeio(0x5a5a,0x1a4);
  iVar1 = readloadr();
  cVar2 = iVar1 != 0x5a;
  if ((bool)cVar2) {
    printf(0xfcc);
    printf(0xff6);
  }
  writeio(0xa5a5,0x1a4);
  iVar1 = readloadr();
  if (iVar1 != 0x1a5) {
    printf(0x1016);
    printf(0x1040);
    cVar2 = cVar2 + '\x01';
  }
  if (cVar2 == '\0') {
    printf(0x105f);
  }
  return cVar2;
}



// Function: tsthireg @ 1000:0f7a

char __cdecl16far tsthireg(void)

{
  int iVar1;
  char cVar2;
  
  _aFchkstk();
  writeio(0xa5a5,0x1a6);
  iVar1 = readhiadr();
  cVar2 = iVar1 != 0x1a5;
  if ((bool)cVar2) {
    printf(0x1086);
    printf(0x10b1);
  }
  writeio(0x5a5a,0x1a6);
  iVar1 = readhiadr();
  if (iVar1 != 0x5a) {
    printf(0x10d0);
    printf(0x10fb);
    cVar2 = cVar2 + '\x01';
  }
  if (cVar2 == '\0') {
    printf(0x111a);
  }
  return cVar2;
}



// Function: tstadrgs @ 1000:104a

char __cdecl16far tstadrgs(void)

{
  int iVar1;
  int in_DX;
  int unaff_DS;
  char cVar2;
  
  _aFchkstk();
  writeio(0x5a5a,0x1a4);
  writeio(0xa5a5,0x1a6);
  iVar1 = readhiadr();
  cVar2 = iVar1 != 0x1a5;
  if ((bool)cVar2) {
    printf(0x1142);
    in_DX = unaff_DS;
    printf(0x1170);
  }
  iVar1 = readloadr();
  if (iVar1 != 0x5a) {
    printf(0x118f);
    printf(0x11bc);
    cVar2 = cVar2 + '\x01';
    in_DX = unaff_DS;
  }
  loadadr(0xbcd4,10);
  iVar1 = readadr();
  if ((iVar1 != -0x432c) || (in_DX != 10)) {
    printf(0x11db);
    printf(0x1209);
    cVar2 = cVar2 + '\x01';
  }
  if (cVar2 == '\0') {
    printf(0x1229);
  }
  return cVar2;
}



// Function: tst030ram @ 1000:1172

undefined2 __cdecl16far tst030ram(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  _aFchkstk();
  printf(0x124c);
  uVar5 = 0;
  uVar2 = 0;
  uVar3 = 0;
  do {
    if ((6 < uVar3) && ((7 < uVar3 || (0xfffc < uVar2)))) {
      printf(0x1312);
      uVar3 = 0;
      for (uVar2 = 0; (uVar3 < 7 || ((uVar3 < 8 && (uVar2 < 0xfffd)))); uVar2 = uVar2 + 0x800) {
        uVar5 = _aFulshr(uVar5);
        uVar5 = uVar5 & 0x1ff;
        writeio(uVar5,0x1a6);
        iVar1 = 0x1316;
        uVar2 = 0x1317;
        WriteRamAddress();
        uVar3 = iVar1 + (uint)(0xf7ff < uVar2);
      }
      uVar3 = 0;
      for (uVar2 = 0; (uVar3 < 7 || ((uVar3 < 8 && (uVar2 < 0xfffd)))); uVar2 = uVar2 + 0x800) {
        uVar5 = _aFulshr(uVar5);
        uVar5 = uVar5 & 0x1ff;
        writeio(uVar5,0x1a6);
        iVar4 = 0x1316;
        uVar2 = 0x136e;
        iVar1 = ReadRamAddress();
        if (iVar1 != 0) {
          printf(0x1344);
          readadr();
          printf(0x135d);
          readlocation();
          printf(0x1370);
          return 1;
        }
        uVar3 = iVar4 + (uint)(0xf7ff < uVar2);
      }
      printf(0x1381);
      return 0;
    }
    uVar5 = _aFulshr(uVar5);
    uVar5 = uVar5 & 0x1ff;
    writeio(uVar5,0x1a6);
    iVar4 = 0x1316;
    uVar3 = 0x11e7;
    iVar1 = RamPatTest();
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        printf(0x1265);
        readadr();
        printf(0x1285);
        printf(0x1297);
        return 1;
      }
      if (iVar1 == 2) {
        printf(0x12bb);
        readadr();
        printf(0x12dc);
        printf(0x12ee);
        return 1;
      }
    }
    uVar2 = uVar3 + 0x800;
    uVar3 = iVar4 + (uint)(0xf7ff < uVar3);
  } while( true );
}



// Function: RamPatTest @ 1000:1400

undefined2 __cdecl16far RamPatTest(void)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  _aFchkstk();
  uVar2 = 0;
  while( true ) {
    out(0x1a4,uVar2);
    uVar3 = 0xa5a5;
    out(0x1a8,0xa5a5);
    iVar1 = in(0x1a8);
    if (iVar1 != -0x5a5b) break;
    uVar3 = 0x5a5a;
    out(0x1a8,0x5a5a);
    iVar1 = in(0x1a8);
    if (iVar1 != 0x5a5a) break;
    uVar3 = 0xa5a5;
    out(0x1aa,0xa5a5);
    iVar1 = in(0x1aa);
    if (iVar1 != -0x5a5b) {
LAB_1000_1467:
      *(int *)0x2b38 = iVar1;
      *(undefined2 *)0x3710 = uVar3;
      return 2;
    }
    uVar3 = 0x5a5a;
    out(0x1aa,0x5a5a);
    iVar1 = in(0x1aa);
    if (iVar1 != 0x5a5a) goto LAB_1000_1467;
    uVar2 = uVar2 + 4 & 0x1ff;
    if (uVar2 == 0) {
      return 0;
    }
  }
  *(int *)0x2b38 = iVar1;
  *(undefined2 *)0x3710 = uVar3;
  return 1;
}



// Function: WriteRamAddress @ 1000:1476

uint __cdecl16far WriteRamAddress(void)

{
  uint uVar1;
  uint uVar2;
  
  _aFchkstk();
  uVar2 = 0;
  uVar1 = in(0x1a6);
  do {
    out(0x1a4,uVar2);
    out(0x1a8,uVar2);
    out(0x1aa,uVar1 & 0x1ff);
    uVar2 = uVar2 + 4 & 0x1ff;
  } while (uVar2 != 0);
  return uVar1 & 0x1ff;
}



// Function: ReadRamAddress @ 1000:14ae

undefined2 __cdecl16far ReadRamAddress(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  _aFchkstk();
  uVar3 = 0;
  uVar1 = in(0x1a6);
  while( true ) {
    out(0x1a4,uVar3);
    uVar2 = in(0x1a8);
    if ((uVar2 != uVar3) || (uVar2 = in(0x1aa), uVar2 != (uVar1 & 0x1ff))) break;
    uVar3 = uVar3 + 4 & 0x1ff;
    if (uVar3 == 0) {
      return 0;
    }
  }
  return 1;
}



// Function: tst030dp @ 1000:14f2

/* WARNING: Removing unreachable block (ram,0x0001155d) */
/* WARNING: Removing unreachable block (ram,0x000115a2) */

undefined2 __cdecl16far tst030dp(void)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int in_DX;
  int iVar5;
  
  _aFchkstk();
  iVar5 = 0;
  loadadr(0,0,0);
  iVar1 = readadr();
  if ((iVar1 == 0) && (in_DX == 0)) {
    iVar1 = 0;
    while ((uVar3 = readadr(), iVar1 == 0 && (uVar3 < 0x400))) {
      writeio(iVar5,0x1b2);
      iVar5 = iVar5 + 1;
      incadr();
    }
    iVar5 = 0;
    loadadr(0,0);
    while ((uVar3 = readadr(), iVar1 == 0 && (uVar3 < 0x400))) {
      iVar4 = readio(0x1b2);
      if (iVar5 != iVar4) {
        printf(0x13eb);
        readadr();
        printf(0x140a);
        printf(0x141a);
        readio(0x1b2);
        printf(0x142e);
        return 1;
      }
      iVar5 = iVar5 + 1;
      incadr();
    }
    printf(0x143e);
    uVar2 = 0;
  }
  else {
    printf(0x13b6);
    uVar2 = 1;
  }
  return uVar2;
}



// Function: tst040dp @ 1000:1646

/* WARNING: Removing unreachable block (ram,0x000116b6) */
/* WARNING: Removing unreachable block (ram,0x00011704) */

undefined2 __cdecl16far tst040dp(void)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  int in_DX;
  uint uVar4;
  int iVar5;
  
  _aFchkstk();
  uVar4 = 0;
  loadadr(0,0,0);
  iVar1 = readadr();
  if ((iVar1 == 0) && (in_DX == 0)) {
    iVar1 = 0;
    while ((uVar3 = readadr(), iVar1 == 0 && (uVar3 < 0x800))) {
      uVar3 = uVar4;
      writewideDP(uVar4);
      uVar4 = uVar3 + (0xfffe < uVar4);
      incadr();
    }
    iVar5 = 0;
    loadadr(0,0);
    while ((uVar4 = readadr(), iVar1 == 0 && (uVar4 < 0x800))) {
      uVar3 = 0x1316;
      uVar4 = readwideDP();
      if ((uVar3 != uVar4) || (iVar5 != iVar1)) {
        printf(0x1494);
        readadr();
        printf(0x14b3);
        printf(0x14c3);
        readwideDP();
        printf(0x14d6);
        return 1;
      }
      iVar5 = iVar5 + (uint)(0xfffe < uVar3);
      incadr();
    }
    printf(0x14e5);
    uVar2 = 0;
  }
  else {
    printf(0x145f);
    uVar2 = 1;
  }
  return uVar2;
}



// Function: tstdpram @ 1000:17ac

undefined2 __cdecl16far tstdpram(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  _aFchkstk();
  *(undefined2 *)0x2b36 = 0;
  while (*(uint *)0x2b36 < 0xfff) {
    *(undefined2 *)*(undefined2 *)0x2b36 = 0xa5a5;
    iVar1 = *(int *)*(undefined2 *)0x2b36;
    *(int *)0x2b36 = *(int *)0x2b36 + 2;
    if (iVar1 != -0x5a5b) {
      *(int *)0x2b36 = *(int *)0x2b36 + -2;
      printf(0x1506);
      printf(0x1543);
      printf(0x1553);
      return 1;
    }
  }
  *(undefined2 *)0x2b36 = 0;
  while (*(uint *)0x2b36 < 0xfff) {
    *(undefined2 *)*(undefined2 *)0x2b36 = *(undefined2 *)0x2b36;
    *(int *)0x2b36 = *(int *)0x2b36 + 2;
  }
  *(undefined2 *)0x2b36 = 0;
  while( true ) {
    if (0xffe < *(uint *)0x2b36) {
      printf(0x15e3);
      return 0;
    }
    if (*(int *)*(undefined2 *)0x2b36 != *(int *)0x2b36) break;
    *(int *)0x2b36 = *(int *)0x2b36 + 2;
  }
  printf(0x1576);
  printf(0x15af);
  printf(0x15bf);
  return 1;
}



// Function: tstbothdp @ 1000:1928

/* WARNING: Removing unreachable block (ram,0x0001197f) */

undefined2 __cdecl16far tstbothdp(void)

{
  uint uVar1;
  int iVar2;
  int in_DX;
  undefined2 unaff_DS;
  
  _aFchkstk();
  *(undefined2 *)0x2b36 = 0;
  while (*(uint *)0x2b36 < 0xfff) {
    *(undefined2 *)*(undefined2 *)0x2b36 = 0xa5a5;
    *(int *)0x2b36 = *(int *)0x2b36 + 2;
  }
  loadadr(0,0);
  while ((uVar1 = readadr(), in_DX == 0 && (uVar1 < 0x400))) {
    iVar2 = readio(0x1b2);
    if (iVar2 != -0x5a5b) {
      printf(0x15ff);
      readadr();
      printf(0x1635);
      printf(0x1645);
      readio(0x1b2);
      printf(0x1659);
      return 1;
    }
    incadr();
  }
  printf(0x1669);
  return 0;
}



// Function: tstbothdp4 @ 1000:1a1e

/* WARNING: Removing unreachable block (ram,0x00011a75) */

undefined2 __cdecl16far tstbothdp4(void)

{
  uint uVar1;
  int iVar2;
  int in_DX;
  undefined2 unaff_DS;
  
  _aFchkstk();
  *(undefined2 *)0x2b36 = 0;
  while (*(uint *)0x2b36 < 0xfff) {
    *(undefined2 *)*(undefined2 *)0x2b36 = 0xa5a5;
    *(int *)0x2b36 = *(int *)0x2b36 + 2;
  }
  loadadr(0,0);
  while ((uVar1 = readadr(), in_DX == 0 && (uVar1 < 0x800))) {
    iVar2 = readwideDP();
    if (iVar2 != -0x5a5b) {
      printf(0x168c);
      readadr();
      printf(0x16c3);
      printf(0x16d3);
      readwideDP();
      printf(0x16e7);
      return 1;
    }
    incadr();
  }
  printf(0x16f6);
  return 0;
}



// Function: tstanalog @ 1000:1b0a

int __cdecl16far tstanalog(void)

{
  int iVar1;
  int iVar2;
  int unaff_DS;
  uint uVar3;
  uint uVar4;
  
  _aFchkstk();
  iVar2 = 0;
  loadadr(0,0);
  iVar1 = readadr();
  if ((iVar1 == 0) && (iVar2 == 0)) {
    if (*(int *)0x2b34 == 3) {
      writeqdac(0x800,0x800,0x800,0x800);
      readqdac(0x140,0);
      for (uVar3 = 0; uVar3 < 2000; uVar3 = uVar3 + 1) {
      }
      iVar2 = tstaxesval(0x80,0x80,0x80,0x80);
      if (iVar2 == 1) {
        printf(0x175c);
      }
      writeqdac(0,0x400,0xc00,0xfff);
      readqdac(0x140,0);
      for (uVar3 = 0; uVar3 < 2000; uVar3 = uVar3 + 1) {
      }
      iVar2 = tstaxesval(0,0x40,0xc0,0xff);
      if (iVar2 == 1) {
        printf(0x1793);
      }
      writesdac(0x800);
      for (uVar3 = 0; uVar3 < 2000; uVar3 = uVar3 + 1) {
      }
      iVar2 = 0x1316;
      iVar1 = readsdac();
      if (iVar1 != 0x800) {
        iVar2 = unaff_DS;
        printf(0x17af);
        iVar2 = iVar2 + 1;
      }
      if (iVar2 == 0) {
        iVar2 = *(int *)0x2b32;
        printf(0x17c6);
      }
    }
    else {
      writeqdac(0x800,0x800,0x800,0x800);
      readqdac(0x140,0);
      for (uVar3 = 0; uVar3 < 2000; uVar3 = uVar3 + 1) {
      }
      for (uVar3 = 0x100; uVar3 < 0x10d; uVar3 = uVar3 + 4) {
        iVar2 = readqdac(uVar3,0);
        if (iVar2 != 0x800) {
          printf(0x17de);
        }
      }
      writeqdac(0xfff,0xfff,0xfff,0xfff);
      iVar2 = 0;
      readqdac(0x140);
      for (uVar3 = 0; uVar3 < 2000; uVar3 = uVar3 + 1) {
      }
      for (uVar3 = 0x100; uVar3 < 0x10d; uVar3 = uVar3 + 4) {
        iVar2 = 0;
        iVar1 = readqdac(uVar3);
        if (iVar1 != 0xfff) {
          uVar4 = uVar3;
          printf(0x1817);
          iVar2 = uVar4 + 1;
        }
      }
      if (iVar2 == 0) {
        iVar2 = *(int *)0x2b32;
        printf(0x184f);
      }
    }
  }
  else {
    printf(0x1719);
    iVar2 = 1;
  }
  return iVar2;
}



// Function: tstanalog4 @ 1000:1de2

int __cdecl16far tstanalog4(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  _aFchkstk();
  iVar3 = 0;
  loadadr(0,0);
  iVar5 = 0x1316;
  iVar1 = readadr();
  if ((iVar1 == 0) && (iVar3 == 0)) {
    for (uVar6 = 8; uVar6 < 0xc; uVar6 = uVar6 + 1) {
      write4dac(0x2000);
      read4dac(0x140);
      for (uVar4 = 0; uVar4 < 10000; uVar4 = uVar4 + 1) {
      }
      uVar2 = read4adc(uVar6);
      iVar5 = tstadcval4(uVar2,0x80);
      if (iVar5 != 0) {
        printf(0x18aa);
      }
      write4dac(0x3fff);
      read4dac(0x140);
      for (uVar4 = 0; uVar4 < 10000; uVar4 = uVar4 + 1) {
      }
      uVar2 = read4adc(uVar6);
      iVar5 = tstadcval4(uVar2,0xff);
      if (iVar5 != 0) {
        printf(0x18ec);
      }
      write4dac(0);
      read4dac(0x140);
      for (uVar4 = 0; uVar4 < 10000; uVar4 = uVar4 + 1) {
      }
      uVar2 = read4adc(uVar6);
      iVar5 = 0;
      iVar3 = tstadcval4(uVar2);
      if (iVar3 != 0) {
        uVar4 = uVar6;
        printf(0x192d);
        iVar5 = uVar4 + 1;
      }
    }
    if (iVar5 == 0) {
      iVar5 = *(int *)0x2b32;
      printf(0x196e);
    }
  }
  else {
    printf(0x1867);
    Wait();
    iVar5 = 1;
  }
  return iVar5;
}



// Function: tstadcval @ 1000:1fb4

undefined2 __cdecl16far tstadcval(undefined2 param_1,undefined2 param_2,uint param_3)

{
  uint uVar1;
  undefined2 uVar2;
  
  _aFchkstk();
  loadadr(param_1,param_2);
  uVar1 = readio(0x1b4);
  uVar1 = (uVar1 & 0xff) + 0x10;
  if ((uVar1 < param_3 + 0x20) && (param_3 < uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// Function: tstadcval4 @ 1000:2028

undefined2 __cdecl16far tstadcval4(uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 uVar2;
  
  _aFchkstk();
  uVar1 = (param_1 & 0xff) + 0x10;
  if ((uVar1 < param_2 + 0x20) && (param_2 < uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// Function: tstaxesval @ 1000:2092

char __cdecl16far
tstaxesval(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  char cVar2;
  
  _aFchkstk();
  iVar1 = tstadcval(0xc0,0,param_1);
  cVar2 = iVar1 == 1;
  if ((bool)cVar2) {
    printf(0x1986);
    readadc(0xc0,0);
    printf(0x19a7);
  }
  iVar1 = tstadcval(0xc4,0,param_2);
  if (iVar1 == 1) {
    printf(0x19b9);
    readadc(0xc4,0);
    printf(0x19da);
    cVar2 = cVar2 + '\x01';
  }
  iVar1 = tstadcval(200,0,param_3);
  if (iVar1 == 1) {
    printf(0x19ec);
    readadc(200,0);
    printf(0x1a0d);
    cVar2 = cVar2 + '\x01';
  }
  iVar1 = tstadcval(0xcc,0,param_4);
  if (iVar1 == 1) {
    printf(0x1a1f);
    readadc(0xcc,0);
    printf(0x1a40);
    cVar2 = cVar2 + '\x01';
  }
  return cVar2;
}



// Function: initUART @ 1000:21da

void __cdecl16far initUART(void)

{
  _aFchkstk();
  writeuart(0x13,0x80,0);
  writeuart(0x87,0x80,0);
  writeuart(0x13,0xa0,0);
  writeuart(0x87,0xa0,0);
  writeuart(0xcc,0x84,0);
  writeuart(0xcc,0xa4,0);
  writeuart(0x30,0x88,0);
  writeuart(0x30,0xa8,0);
  writeuart(0x20,0x88,0);
  writeuart(0x20,0xa8,0);
  writeuart(0x40,0x88,0);
  writeuart(0x40,0xa8,0);
  writeuart(0x10,0x88,0);
  writeuart(0x10,0xa8,0);
  writeuart(0,0x94,0);
  writeuart(5,0x88,0);
  writeuart(5,0xa8,0);
  writeuart(0,0xb4,0);
  writeuart(0xef,0x90,0);
  writeuart(3,0x98,0);
  writeuart(0x99,0x9c,0);
  return;
}



// Function: errorcheck @ 1000:232c

char __cdecl16far errorcheck(void)

{
  uint uVar1;
  uint unaff_DS;
  char cVar2;
  
  _aFchkstk();
  uVar1 = readuart(0x84,0);
  cVar2 = (uVar1 & 0x10) != 0;
  if ((bool)cVar2) {
    uVar1 = unaff_DS;
    printf(0x1a52);
  }
  if ((uVar1 & 0x40) != 0) {
    uVar1 = unaff_DS;
    printf(0x1a72);
    cVar2 = cVar2 + '\x01';
  }
  if ((uVar1 & 0x20) != 0) {
    printf(0x1a92);
    cVar2 = cVar2 + '\x01';
  }
  uVar1 = readuart(0xa4,0);
  if ((uVar1 & 0x10) != 0) {
    uVar1 = unaff_DS;
    printf(0x1ab1);
    cVar2 = cVar2 + '\x01';
  }
  if ((uVar1 & 0x40) != 0) {
    printf(0x1ad1);
    cVar2 = cVar2 + '\x01';
    uVar1 = unaff_DS;
  }
  if ((uVar1 & 0x20) != 0) {
    printf(0x1af1);
    cVar2 = cVar2 + '\x01';
  }
  return cVar2;
}



// Function: uarttst @ 1000:2438

int __cdecl16far uarttst(void)

{
  uint uVar1;
  int unaff_DS;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  
  _aFchkstk();
  initUART();
  uVar5 = 0;
  iVar4 = 0x1000;
  while( true ) {
    iVar3 = 0x84;
    uVar1 = readuart(0x84,0,uVar5);
    if ((uVar1 & 4) != 0) break;
    bVar2 = iVar4 == 0;
    iVar4 = 0x1316;
    if ((bVar2) && (iVar3 == 0)) {
      printf(0x1b11);
      errorcheck();
      iVar4 = 0x1000;
    }
  }
  writeuart(0x5a5a,0x8c,0);
  iVar4 = 0x1316;
  while( true ) {
    iVar3 = 0x84;
    uVar1 = readuart(0x84,0,uVar5);
    if ((uVar1 & 1) != 0) break;
    bVar2 = iVar4 == 0;
    iVar4 = 0x1316;
    if ((bVar2) && (iVar3 == 0)) {
      printf(0x1b37);
      errorcheck();
      iVar4 = 0x1000;
    }
  }
  iVar4 = 0;
  iVar3 = 0x1316;
  uVar1 = readuart(0x8c);
  if ((uVar1 & 0x5aff | 0x5a00) != 0x5a5a) {
    printf(0x1b5c);
    iVar4 = 0x18a2;
    iVar3 = 0x1000;
    errorcheck();
    iVar4 = iVar4 + 1;
  }
  if (iVar4 == 0) {
    iVar3 = 0x18a2;
    printf(0x1b9b);
  }
  uVar5 = 0;
  while( true ) {
    iVar4 = 0xa4;
    uVar1 = readuart(0xa4,0,uVar5);
    if ((uVar1 & 4) != 0) break;
    bVar2 = iVar3 == 0;
    iVar3 = 0x1316;
    if ((bVar2) && (iVar4 == 0)) {
      printf(0x1bab);
      errorcheck();
      iVar3 = 0x1000;
    }
  }
  writeuart(0x5a5a,0xac,0);
  iVar4 = 0x1316;
  while( true ) {
    iVar3 = 0xa4;
    uVar1 = readuart(0xa4,0,uVar5);
    if ((uVar1 & 1) != 0) break;
    bVar2 = iVar4 == 0;
    iVar4 = 0x1316;
    if ((bVar2) && (iVar3 == 0)) {
      printf(0x1bd1);
      errorcheck();
      iVar4 = 0x1000;
    }
  }
  iVar4 = 0;
  uVar1 = readuart(0xac);
  if ((uVar1 & 0x5aff | 0x5a00) != 0x5a5a) {
    printf(0x1bf6);
    iVar4 = 0x18a2;
    errorcheck();
    iVar4 = iVar4 + 1;
  }
  if (iVar4 == 0) {
    printf(0x1c35);
    iVar4 = unaff_DS;
  }
  return iVar4;
}



// Function: multitest @ 1000:2690

void __cdecl16far multitest(void)

{
  char cVar1;
  int iVar2;
  
  _aFchkstk();
  do {
    clear();
    printf(0x1c46);
    printf(0x1c80);
    printf(0x1cae);
    printf(0x1cca);
    printf(0x1ce6);
    printf(0x1cfe);
    printf(0x1d15);
    printf(0x1d22);
    cVar1 = _getch();
    if ((cVar1 == '\x1b') || (cVar1 == '0')) {
      iVar2 = 1;
    }
    else if (cVar1 == '1') {
      iVar2 = 0x18a2;
      multiMEM();
    }
    else if (cVar1 == '2') {
      iVar2 = 0x18a2;
      multiIO();
    }
    else {
      printf(0x1d25);
      iVar2 = 0x18a2;
      Wait();
    }
  } while (iVar2 == 0);
  return;
}



// Function: getadd @ 1000:2796

undefined2 __cdecl16far getadd(void)

{
  undefined2 unaff_SS;
  
  _aFchkstk();
  printf(0x1d35);
  scanf(0x1d47);
  return unaff_SS;
}



// Function: getdat @ 1000:27d6

undefined2 __cdecl16far getdat(void)

{
  undefined2 unaff_SS;
  
  _aFchkstk();
  printf(0x1d4b);
  scanf(0x1d5a);
  return unaff_SS;
}



// Function: multiMEM @ 1000:2816

void __cdecl16far multiMEM(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int local_10;
  
  _aFchkstk();
  do {
    clear();
    printf(0x1d5e);
    printf(0x1d79);
    printf(0x1d92);
    printf(0x1dbe);
    printf(0x1de9);
    local_10 = 0x18a2;
    printf(0x1e15);
    printf(0x1e41);
    printf(0x1e4e);
    cVar1 = _getch();
    if ((cVar1 == '\x1b') || (cVar1 == '0')) {
      local_10 = 1;
    }
    else if (cVar1 == '1') {
      uVar5 = unaff_DS;
      printf(0x1e51);
      uVar2 = getadd();
      uVar4 = uVar5;
      uVar3 = getdat();
      local_10 = 0x1000;
      memwrite(uVar2,uVar5,uVar3,uVar4);
      printf(0x1e55);
      Wait();
    }
    else if (cVar1 == '2') {
      local_10 = 0x292a;
      uVar5 = unaff_DS;
      printf(0x1e57);
      uVar4 = getadd();
      memread(uVar4,uVar5);
      printf(0x1e5b);
      Wait();
    }
    else if (cVar1 == '3') {
      local_10 = 0x296e;
      printf(0x1e5d);
      getadd();
      uVar5 = getdat();
      DPwriteAT(uVar5);
      printf(0x1e61);
      Wait();
    }
    else if (cVar1 == '4') {
      local_10 = 0x29bd;
      printf(0x1e63);
      uVar5 = getadd();
      DPreadAT(uVar5);
      printf(0x1e67);
      Wait();
    }
    else if (cVar1 == '5') {
      uVar5 = unaff_DS;
      printf(0x1e69);
      uVar2 = getadd();
      uVar4 = uVar5;
      uVar3 = getdat();
      local_10 = 0x1000;
      DPwrite030(uVar2,uVar5,uVar3,uVar4);
      printf(0x1e6d);
      Wait();
    }
    else if (cVar1 == '6') {
      local_10 = 0x2a53;
      uVar5 = unaff_DS;
      printf(0x1e6f);
      uVar4 = getadd();
      DPread030(uVar4,uVar5);
      printf(0x1e73);
      Wait();
    }
    else {
      printf(0x1e75);
      Wait();
    }
  } while (local_10 == 0);
  return;
}



// Function: multiIO @ 1000:2af6

void __cdecl16far multiIO(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  _aFchkstk();
  do {
    clear();
    initUART();
    printf(0x1e85);
    printf(0x1ea0);
    printf(0x1eb9);
    printf(0x1ec6);
    cVar1 = _getch();
    if ((cVar1 == '\x1b') || (cVar1 == '0')) {
      iVar3 = 1;
    }
    else if (cVar1 == '1') {
      printf(0x1ec9);
      getadd();
      getdat();
      uVar2 = 0x18a2;
      printf(0x1ecd);
      while( true ) {
        uVar4 = 0x2ba1;
        uVar5 = uVar2;
        iVar3 = _kbhit();
        if (iVar3 != 0) break;
        uVar2 = 0x1316;
        writeio(uVar4,uVar5);
      }
      iVar3 = 0x18a2;
      printf(0x1eeb);
      Wait();
    }
    else if (cVar1 == '2') {
      printf(0x1eed);
      uVar2 = 0x1000;
      getadd();
      while (iVar3 = _kbhit(), iVar3 == 0) {
        readio(uVar2);
        uVar2 = 0x18a2;
        printf(0x1ef1);
      }
      iVar3 = 0x18a2;
      printf(0x1f0a);
      Wait();
    }
    else {
      iVar3 = 0x18a2;
      printf(0x1f0c);
      Wait();
    }
  } while (iVar3 == 0);
  return;
}



// Function: viewer @ 1000:2c84

void __cdecl16far viewer(void)

{
  char cVar1;
  int iVar2;
  
  _aFchkstk();
  do {
    clear();
    printf(0x1f1c);
    printf(0x1f4c);
    printf(0x1f67);
    printf(0x1f88);
    printf(0x1f95);
    cVar1 = _getch();
    if ((cVar1 == '\x1b') || (cVar1 == '0')) {
      iVar2 = 1;
    }
    else if (cVar1 == '1') {
      viewMM();
      printf(0x1f98);
      iVar2 = 0x18a2;
      Wait();
    }
    else if (cVar1 == '2') {
      viewDP();
      printf(0x1f9a);
      iVar2 = 0x18a2;
      Wait();
    }
    else {
      printf(0x1f9c);
      iVar2 = 0x18a2;
      Wait();
    }
  } while (iVar2 == 0);
  return;
}



// Function: load_test @ 1000:2d84

void __cdecl16far load_test(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  _aFchkstk();
  clear();
  printf(0x1fac);
  printf(0x1fde);
  printf(0x200c);
  iVar1 = getcntval();
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    printf(0x2029);
    resetbrd();
    load_run_test();
    iVar1 = 0x1000;
    iVar2 = _kbhit();
    if (iVar2 != 0) {
      iVar3 = 0x1000;
    }
  }
  Wait();
  printf(0x2036);
  printf(0x206e);
  printf(0x20a1);
  printf(0x20a3);
  printf(0x20b5);
  Wait();
  return;
}



// Function: load_run_test @ 1000:2e84

undefined2 __cdecl16far load_run_test(void)

{
  int iVar1;
  int unaff_SS;
  int local_5e;
  undefined1 local_5c [66];
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined1 *puStack_16;
  
  _aFchkstk();
  getenv();
  puStack_16 = local_5c;
  uStack_18 = 0x18a2;
  uStack_1a = 0x2eef;
  sprintf();
  iVar1 = BMDCisRunning();
  if (iVar1 == 0) {
    printf();
    iVar1 = fopen();
    if ((iVar1 == 0) && (unaff_SS == 0)) {
      printf();
      Wait();
      return 1;
    }
    printf();
    iVar1 = loadBMDC();
    fclose();
    if (iVar1 == -2) {
      printf();
      Wait();
      return 1;
    }
    if (iVar1 == -3) {
      printf();
      Wait();
      return 1;
    }
    runbrd();
  }
  local_5e = 200;
  printf();
  while( true ) {
    iVar1 = BMDCisRunning();
    if (iVar1 != 0) {
      printf();
      return 0;
    }
    if (local_5e == 0) break;
    printf();
    local_5e = local_5e + -1;
  }
  printf();
  report_error();
  return 1;
}



// Function: report_error @ 1000:3068

void __cdecl16far report_error(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  
  _aFchkstk();
  iVar4 = ((undefined2 *)*(int *)0x44)[1];
  iVar1 = long68(*(undefined2 *)*(int *)0x44,iVar4);
  if ((iVar1 == -0x2153) && (iVar4 == -0x2153)) {
    uVar5 = *(undefined2 *)(*(int *)0x44 + 6);
    long68(*(undefined2 *)(*(int *)0x44 + 4),uVar5);
    printf(0x21af);
    uVar3 = *(undefined2 *)(*(int *)0x44 + 0xe);
    uVar2 = long68(*(undefined2 *)(*(int *)0x44 + 0xc),uVar3,uVar5);
    uVar5 = *(undefined2 *)(*(int *)0x44 + 10);
    uVar3 = long68(*(undefined2 *)(*(int *)0x44 + 8),uVar5,uVar2,uVar3);
    _aFulshr(uVar3,uVar5);
    _aFlshl();
    printf(0x21b4);
  }
  return;
}



// Function: asciihex @ 1316:0002

int asciihex(undefined2 param_1,byte param_2)

{
  int iVar1;
  
  _aFchkstk();
  if ((char)param_2 < '0') {
    iVar1 = CONCAT11((char)param_2 >> 7,0xff);
  }
  else if ((char)param_2 < ':') {
    iVar1 = (char)param_2 + -0x30;
  }
  else {
    param_2 = param_2 & 0x5f;
    if ((param_2 < 0x41) || (0x46 < param_2)) {
      iVar1 = 0xff;
    }
    else {
      iVar1 = (char)param_2 + -0x37;
    }
  }
  return iVar1;
}



// Function: loadadr @ 1316:006c

void __cdecl16far loadadr(void)

{
  uint uVar1;
  
  _aFchkstk();
  _aFulshr();
  uVar1 = _aFulshr();
  writeio(uVar1 & 0x1ff,0x1a6);
  writeio(0x1a4);
  return;
}



// Function: readadr @ 1316:00ce

uint __cdecl16far readadr(void)

{
  undefined2 uVar1;
  uint uVar2;
  
  _aFchkstk();
  uVar1 = readio(0x1a6);
  readio(0x1a4,uVar1);
  _aFlshl();
  uVar2 = _aFlshl();
  return uVar2 | 0x32b5;
}



// Function: readlocation @ 1316:017a

uint __cdecl16far readlocation(void)

{
  uint uVar1;
  uint uVar2;
  
  _aFchkstk();
  readio(0x1aa);
  uVar1 = readio(0x1a8,0);
  uVar2 = _aFlshl();
  return uVar2 | uVar1;
}



// Function: writelocation @ 1316:01da

void __cdecl16far writelocation(undefined2 param_1)

{
  undefined2 uVar1;
  
  _aFchkstk();
  writeio(param_1,0x1a8);
  uVar1 = _aFulshr();
  writeio(uVar1,0x1aa);
  return;
}



// Function: readwideDP @ 1316:0222

uint __cdecl16far readwideDP(void)

{
  uint uVar1;
  uint uVar2;
  
  _aFchkstk();
  readio(0x1b2);
  uVar1 = readio(0x1b0,0);
  uVar2 = _aFlshl();
  return uVar2 | uVar1;
}



// Function: writewideDP @ 1316:0282

void __cdecl16far writewideDP(undefined2 param_1)

{
  undefined2 uVar1;
  
  _aFchkstk();
  writeio(param_1,0x1b0);
  uVar1 = _aFulshr();
  writeio(uVar1,0x1b2);
  return;
}



// Function: incadr @ 1316:02ca

void __cdecl16far incadr(void)

{
  uint uVar1;
  
  _aFchkstk();
  uVar1 = readio(0x1a4);
  uVar1 = (uVar1 & 0x1ff) + 1 & 0x1ff;
  writeio(uVar1,0x1a4);
  if (uVar1 == 0) {
    readio(0x1a6);
    writeio(0x1a6);
  }
  return;
}



// Function: readloadr @ 1316:0348

uint __cdecl16far readloadr(void)

{
  uint uVar1;
  
  _aFchkstk();
  uVar1 = readio(0x1a4);
  return uVar1 & 0x1ff;
}



// Function: readhiadr @ 1316:0376

uint __cdecl16far readhiadr(void)

{
  uint uVar1;
  
  _aFchkstk();
  uVar1 = readio(0x1a6);
  return uVar1 & 0x1ff;
}



// Function: resetbrd @ 1316:03a4

void __cdecl16far resetbrd(void)

{
  _aFchkstk();
  writeio(0,0x1a0);
  return;
}



// Function: runbrd @ 1316:03c2

void __cdecl16far runbrd(void)

{
  _aFchkstk();
  writeio(0,0x1a2);
  return;
}



// Function: readadc @ 1316:03e0

undefined1 __cdecl16far readadc(undefined2 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  
  _aFchkstk();
  loadadr(param_1,param_2);
  uVar1 = readio(0x1b4);
  return uVar1;
}



// Function: readqdac @ 1316:041c

uint __cdecl16far readqdac(undefined2 param_1,undefined2 param_2)

{
  uint uVar1;
  
  _aFchkstk();
  loadadr(param_1,param_2);
  uVar1 = readio(0x1b4);
  return uVar1 & 0xfff;
}



// Function: writedac @ 1316:0458

void __cdecl16far writedac(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  _aFchkstk();
  loadadr(param_2,param_3);
  writeio(param_1,0x1b4);
  return;
}



// Function: writeqdac @ 1316:0486

void __cdecl16far
writeqdac(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  _aFchkstk();
  writedac(param_1,0x100,0);
  writedac(param_2,0x104,0);
  writedac(param_3,0x108,0);
  writedac(param_4,0x10c,0);
  return;
}



// Function: write4dac @ 1316:04d8

void __cdecl16far write4dac(undefined2 param_1)

{
  _aFchkstk();
  writedac(param_1,0x100,0);
  writedac(param_1,0x104,0);
  writedac(param_1,0x108,0);
  writedac(param_1,0x10c,0);
  writedac(param_1,0x110,0);
  writedac(param_1,0x114,0);
  writedac(param_1,0x118,0);
  writedac(param_1,0x11c,0);
  return;
}



// Function: writesdac @ 1316:056a

void __cdecl16far writesdac(undefined2 param_1)

{
  _aFchkstk();
  loadadr(0x180,0);
  writeio(param_1,0x1b4);
  loadadr(0x1c0,0);
  readio(0x1b4);
  return;
}



// Function: readsdac @ 1316:05b4

undefined2 __cdecl16far readsdac(void)

{
  undefined2 uVar1;
  
  _aFchkstk();
  loadadr(0x180,0);
  uVar1 = readio(0x1b4);
  return uVar1;
}



// Function: read4dac @ 1316:05f0

uint __cdecl16far read4dac(undefined2 param_1)

{
  uint uVar1;
  
  _aFchkstk();
  loadadr(param_1,0);
  uVar1 = readio(0x1b4);
  return uVar1 & 0x3fff;
}



// Function: read4adc @ 1316:062e

undefined2 __cdecl16far read4adc(undefined2 param_1)

{
  undefined2 uVar1;
  uint uVar2;
  
  _aFchkstk();
  loadadr(0xc0,0);
  writeio(param_1,0x1b4);
  for (uVar2 = 0; uVar2 < 20000; uVar2 = uVar2 + 1) {
  }
  uVar1 = readio(0x1b4);
  return uVar1;
}



// Function: readuart @ 1316:068e

undefined1 __cdecl16far readuart(undefined2 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  
  _aFchkstk();
  loadadr(param_1,param_2);
  uVar1 = readio(0x1b4);
  return uVar1;
}



// Function: writeuart @ 1316:06ca

void __cdecl16far writeuart(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  _aFchkstk();
  loadadr(param_2,param_3);
  writeio(param_1,0x1b4);
  return;
}



// Function: readio @ 1316:06f8

undefined2 __cdecl16far readio(undefined2 param_1)

{
  undefined2 uVar1;
  
  _aFchkstk();
  uVar1 = in(param_1);
  return uVar1;
}



// Function: writeio @ 1316:0716

undefined2 __cdecl16far writeio(undefined2 param_1,undefined2 param_2)

{
  _aFchkstk();
  out(param_2,param_1);
  return param_1;
}



// Function: memwrite @ 1389:0002

void __cdecl16far
memwrite(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  
  _aFchkstk();
  printf(0x21dc);
  loadadr(param_1,param_2);
  while( true ) {
    iVar1 = _kbhit();
    if (iVar1 != 0) break;
    writelocation(param_3,param_4);
  }
  return;
}



// Function: memread @ 1389:005a

void __cdecl16far memread(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  
  _aFchkstk();
  loadadr(param_1,param_2);
  while( true ) {
    iVar1 = _kbhit();
    if (iVar1 != 0) break;
    readadr();
    printf(0x2200);
    readlocation();
    printf(0x2217);
    readlocation();
    readlocation();
    readlocation();
  }
  return;
}



// Function: DPreadAT @ 1389:00c4

void __cdecl16far DPreadAT(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  _aFchkstk();
  *(undefined2 *)0x2b36 = param_1;
  while( true ) {
    iVar1 = _kbhit();
    if (iVar1 != 0) break;
    printf(0x2223);
    printf(0x2239);
  }
  return;
}



// Function: DPwriteAT @ 1389:0118

void __cdecl16far DPwriteAT(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  _aFchkstk();
  *(undefined2 *)0x2b36 = param_1;
  printf(0x2244);
  while( true ) {
    iVar1 = _kbhit();
    if (iVar1 != 0) break;
    *(undefined2 *)*(undefined2 *)0x2b36 = param_2;
  }
  return;
}



// Function: DPwrite030 @ 1389:0164

void __cdecl16far
DPwrite030(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 unaff_DS;
  
  _aFchkstk();
  loadadr(param_1,param_2);
  printf(0x2264);
  if (*(int *)0x2b34 == 4) {
    while (iVar1 = _kbhit(), iVar1 == 0) {
      writewideDP(param_3,param_4);
    }
  }
  else {
    while (iVar1 = _kbhit(), iVar1 == 0) {
      writeio(param_3,0x1b2);
    }
  }
  return;
}



// Function: DPread030 @ 1389:01ec

void __cdecl16far DPread030(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  _aFchkstk();
  loadadr(param_1,param_2);
  if (*(int *)0x2b34 == 4) {
    while (iVar1 = _kbhit(), iVar1 == 0) {
      readwideDP();
      printf(0x2281);
    }
  }
  else {
    while (iVar1 = _kbhit(), iVar1 == 0) {
      readio(0x1b2);
      printf(0x2298);
    }
  }
  return;
}



// Function: viewMM @ 13b0:0006

/* WARNING: Removing unreachable block (ram,0x00013b3a) */
/* WARNING: Removing unreachable block (ram,0x00013b32) */

void __cdecl16far viewMM(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint unaff_DS;
  uint uVar4;
  
  _aFchkstk();
  resetbrd();
  printf(0x22b0);
  printf();
  scanf(0x22e1);
  printf();
  uVar3 = unaff_DS;
  scanf(0x22f4);
  loadadr();
  uVar4 = 0x18a2;
  while( true ) {
    uVar1 = readadr();
    if ((0x3bb6 < uVar3) ||
       (((0x3bb5 < uVar3 && (uVar4 < uVar1)) || (iVar2 = _kbhit(), iVar2 != 0)))) break;
    readadr();
    printf(0x22f8);
    readlocation();
    printf(0x230f);
    incadr();
    readlocation();
    printf(0x2316);
    incadr();
    readlocation();
    printf(0x231d);
    incadr();
    readlocation();
    uVar3 = unaff_DS;
    printf(0x2324);
    incadr();
    uVar4 = unaff_DS;
  }
  return;
}



// Function: viewDP @ 13c6:0002

void __cdecl16far viewDP(void)

{
  int iVar1;
  uint unaff_SS;
  undefined2 unaff_DS;
  
  _aFchkstk();
  printf(0x232e);
  scanf(0x2340);
  printf(0x2343);
  scanf(0x2352);
  *(undefined2 *)0x2b36 = 0;
  while ((*(uint *)0x2b36 <= unaff_SS && (iVar1 = _kbhit(), iVar1 == 0))) {
    printf(0x2355);
    printf(0x2365);
    *(int *)0x2b36 = *(int *)0x2b36 + 2;
    printf(0x2371);
    *(int *)0x2b36 = *(int *)0x2b36 + 2;
    printf(0x2377);
    *(int *)0x2b36 = *(int *)0x2b36 + 2;
    printf(0x237d);
    *(int *)0x2b36 = *(int *)0x2b36 + 2;
    printf(0x2383);
    *(int *)0x2b36 = *(int *)0x2b36 + 2;
    printf(0x2389);
    *(int *)0x2b36 = *(int *)0x2b36 + 2;
    printf(0x238f);
    *(int *)0x2b36 = *(int *)0x2b36 + 2;
    unaff_SS = *(uint *)*(undefined2 *)0x2b36;
    printf(0x2395);
    *(int *)0x2b36 = *(int *)0x2b36 + 2;
  }
  return;
}



// Function: setTimeout @ 13e1:0004

void __cdecl16far setTimeout(uint param_1,uint *param_2)

{
  uint uVar1;
  
  _aFchkstk();
  _bios_timeofday(0,(uint *)param_2,param_2._2_2_);
  param_1 = param_1 / 0x37;
  if (param_1 == 0) {
    param_1 = 1;
  }
  uVar1 = *param_2;
  *param_2 = *param_2 + param_1;
  ((uint *)param_2)[1] = ((uint *)param_2)[1] + (uint)CARRY2(uVar1,param_1);
  return;
}



// Function: timeout @ 13e1:0054

undefined2 __cdecl16far timeout(uint param_1,uint param_2)

{
  undefined2 uVar1;
  uint unaff_DI;
  uint unaff_SS;
  
  _aFchkstk();
  _bios_timeofday(0,&stack0xfff8);
  if ((unaff_DI < param_2) || ((unaff_DI <= param_2 && (unaff_SS <= param_1)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: wTick @ 13e1:00a2

void __cdecl16far wTick(void)

{
  undefined1 *unaff_DI;
  int unaff_SS;
  int local_c;
  int *local_a;
  
  _aFchkstk();
  local_a = &local_c;
  local_c = 0;
  _bios_timeofday();
  do {
    local_a = (int *)&stack0xfff8;
    local_c = 0;
    _bios_timeofday();
    if (unaff_SS != local_c) {
      return;
    }
  } while ((int *)unaff_DI == local_a);
  return;
}



// Function: wait @ 13e1:00f2

void __cdecl16far wait(int param_1)

{
  bool bVar1;
  int iVar2;
  
  _aFchkstk();
  iVar2 = param_1 / 0x37;
  if (param_1 / 0x37 == 0) {
    iVar2 = 1;
  }
  do {
    wTick();
    bVar1 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  return;
}



// Function: long68 @ 13e1:0132

undefined2 __cdecl16far long68(undefined2 param_1,undefined2 param_2)

{
  _aFchkstk();
  return param_2;
}



// Function: doWinCmd @ 13e1:015a

/* WARNING: Removing unreachable block (ram,0x00014028) */

undefined2 __cdecl16far doWinCmd(uint param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 local_c;
  undefined2 *local_a;
  
  _aFchkstk();
  *(uint *)0x24 = *(uint *)0x24 & 0x7fff;
  *(uint *)0x20 = param_1 & 0x7fff | 0x8000;
  local_a = &local_c;
  local_c = 0x6e;
  setTimeout();
  do {
    local_a = (undefined2 *)local_c;
    local_c = 0x13e1;
    iVar1 = timeout();
  } while (iVar1 == 0);
  return 0;
}



// Function: winMonIsUp @ 13e1:0224

undefined2 __cdecl16far winMonIsUp(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined2 local_12;
  undefined2 local_10;
  int local_e;
  int local_c;
  undefined2 *local_a;
  
  _aFchkstk();
  local_a = (undefined2 *)*(undefined2 *)0x28;
  local_c = 0x18a2;
  local_e = 0x4061;
  long68();
  local_a = &local_12;
  local_c = 0x6e;
  local_e = 0x13e1;
  local_10 = 0x407a;
  setTimeout();
  while( true ) {
    local_a = (undefined2 *)*(undefined2 *)0x28;
    iVar2 = *(int *)0x2a;
    local_c = 0x13e1;
    local_e = 0x4098;
    iVar1 = long68();
    if ((iVar1 != local_e) || (iVar2 != local_c)) break;
    local_a = (undefined2 *)local_12;
    local_c = 0x13e1;
    local_e = 0x40c8;
    iVar2 = timeout();
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 1;
}



// Function: BMDCisRunning @ 140e:0000

undefined2 __cdecl16far BMDCisRunning(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  _aFchkstk();
  iVar1 = winMonIsUp();
  if ((iVar1 == 1) && ((*(uint *)(*(int *)0x23a0 + 0x24) >> 10 & 1) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: moveDone @ 140e:0054

bool __cdecl16far moveDone(void)

{
  uint unaff_DI;
  
  _aFchkstk();
  getFlags(&stack0xfff8);
  return (unaff_DI >> 0xc & 1) == 1;
}



// Function: getROmode @ 140e:0098

undefined2 __cdecl16far getROmode(undefined2 *param_1)

{
  undefined2 unaff_DS;
  
  _aFchkstk();
  *param_1 = *(undefined2 *)(*(int *)0x23a0 + 0x486);
  return 1;
}



// Function: setROmode @ 140e:00c8

undefined2 __cdecl16far setROmode(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  _aFchkstk();
  *(undefined2 *)(*(int *)0x23a0 + 0x486) = param_1;
  return 1;
}



// Function: rdPosition @ 140e:00f6

undefined2 __cdecl16far
rdPosition(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
          double *param_6,double *param_7,double *param_8,double *param_9,double *param_10)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  longdouble in_ST0;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  longdouble in_ST7;
  longdouble lVar6;
  undefined1 *local_12 [4];
  undefined1 **ppuStack_a;
  int iVar7;
  
  uVar5 = 0x18a2;
  _aFchkstk();
  if (((double *)param_1 != (double *)0x0) || (param_1._2_2_ != 0)) {
    local_12[3] = (undefined1 *)uVar5;
    for (iVar7 = 0; iVar7 < 3; iVar7 = iVar7 + 1) {
      puVar4 = (undefined2 *)(*(int *)0x23a0 + 0x488 + iVar7 * 4);
      ppuStack_a = (undefined1 **)*puVar4;
      puVar3 = (undefined1 *)puVar4[1];
      local_12[2] = (undefined1 *)0x4222;
      puVar2 = (undefined1 *)long68();
      local_12[iVar7 * 2] = puVar2;
      local_12[iVar7 * 2 + 1] = puVar3;
      local_12[3] = (undefined1 *)0x13e1;
    }
    ppuStack_a = local_12;
    uVar5 = 0x1830;
    local_12[2] = (undefined1 *)0x424f;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_1 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    lVar6 = in_ST7;
    (*pcVar1)();
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = in_ST7;
    in_ST7 = lVar6;
  }
  if (((double *)param_2 != (double *)0x0) || (param_2._2_2_ != 0)) {
    local_12[3] = (undefined1 *)uVar5;
    for (iVar7 = 0; iVar7 < 3; iVar7 = iVar7 + 1) {
      puVar4 = (undefined2 *)(*(int *)0x23a0 + 0x494 + iVar7 * 4);
      ppuStack_a = (undefined1 **)*puVar4;
      puVar3 = (undefined1 *)puVar4[1];
      local_12[2] = (undefined1 *)0x42a1;
      puVar2 = (undefined1 *)long68();
      local_12[iVar7 * 2] = puVar2;
      local_12[iVar7 * 2 + 1] = puVar3;
      local_12[3] = (undefined1 *)0x13e1;
    }
    ppuStack_a = local_12;
    uVar5 = 0x1830;
    local_12[2] = (undefined1 *)0x42ce;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_2 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    lVar6 = in_ST7;
    (*pcVar1)();
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = in_ST7;
    in_ST7 = lVar6;
  }
  if (((double *)param_3 != (double *)0x0) || (param_3._2_2_ != 0)) {
    local_12[3] = (undefined1 *)uVar5;
    for (iVar7 = 0; iVar7 < 3; iVar7 = iVar7 + 1) {
      puVar4 = (undefined2 *)(*(int *)0x23a0 + 0x4a0 + iVar7 * 4);
      ppuStack_a = (undefined1 **)*puVar4;
      puVar3 = (undefined1 *)puVar4[1];
      local_12[2] = (undefined1 *)0x4320;
      puVar2 = (undefined1 *)long68();
      local_12[iVar7 * 2] = puVar2;
      local_12[iVar7 * 2 + 1] = puVar3;
      local_12[3] = (undefined1 *)0x13e1;
    }
    ppuStack_a = local_12;
    uVar5 = 0x1830;
    local_12[2] = (undefined1 *)0x434d;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_3 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = in_ST7;
  }
  if (((double *)param_4 != (double *)0x0) || (param_4._2_2_ != 0)) {
    local_12[3] = (undefined1 *)uVar5;
    for (iVar7 = 0; iVar7 < 3; iVar7 = iVar7 + 1) {
      puVar4 = (undefined2 *)(*(int *)0x23a0 + 0x4ac + iVar7 * 4);
      ppuStack_a = (undefined1 **)*puVar4;
      puVar3 = (undefined1 *)puVar4[1];
      local_12[2] = (undefined1 *)0x439f;
      puVar2 = (undefined1 *)long68();
      local_12[iVar7 * 2] = puVar2;
      local_12[iVar7 * 2 + 1] = puVar3;
      local_12[3] = (undefined1 *)0x13e1;
    }
    ppuStack_a = local_12;
    uVar5 = 0x1830;
    local_12[2] = (undefined1 *)0x43cc;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_4 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
  }
  if (((double *)param_5 != (double *)0x0) || (param_5._2_2_ != 0)) {
    local_12[3] = (undefined1 *)uVar5;
    for (iVar7 = 0; iVar7 < 3; iVar7 = iVar7 + 1) {
      puVar4 = (undefined2 *)(*(int *)0x23a0 + 0x4b8 + iVar7 * 4);
      ppuStack_a = (undefined1 **)*puVar4;
      puVar3 = (undefined1 *)puVar4[1];
      local_12[2] = (undefined1 *)0x441e;
      puVar2 = (undefined1 *)long68();
      local_12[iVar7 * 2] = puVar2;
      local_12[iVar7 * 2 + 1] = puVar3;
      local_12[3] = (undefined1 *)0x13e1;
    }
    ppuStack_a = local_12;
    uVar5 = 0x1830;
    local_12[2] = (undefined1 *)0x444b;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_5 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
  }
  if (((double *)param_6 != (double *)0x0) || (param_6._2_2_ != 0)) {
    local_12[3] = (undefined1 *)uVar5;
    for (iVar7 = 0; iVar7 < 3; iVar7 = iVar7 + 1) {
      puVar4 = (undefined2 *)(*(int *)0x23a0 + 0x4c4 + iVar7 * 4);
      ppuStack_a = (undefined1 **)*puVar4;
      puVar3 = (undefined1 *)puVar4[1];
      local_12[2] = (undefined1 *)0x449d;
      puVar2 = (undefined1 *)long68();
      local_12[iVar7 * 2] = puVar2;
      local_12[iVar7 * 2 + 1] = puVar3;
      local_12[3] = (undefined1 *)0x13e1;
    }
    ppuStack_a = local_12;
    uVar5 = 0x1830;
    local_12[2] = (undefined1 *)0x44ca;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_6 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
  }
  if (((double *)param_7 != (double *)0x0) || (param_7._2_2_ != 0)) {
    local_12[3] = (undefined1 *)uVar5;
    for (iVar7 = 0; iVar7 < 3; iVar7 = iVar7 + 1) {
      puVar4 = (undefined2 *)(*(int *)0x23a0 + 0x4d0 + iVar7 * 4);
      ppuStack_a = (undefined1 **)*puVar4;
      puVar3 = (undefined1 *)puVar4[1];
      local_12[2] = (undefined1 *)0x451c;
      puVar2 = (undefined1 *)long68();
      local_12[iVar7 * 2] = puVar2;
      local_12[iVar7 * 2 + 1] = puVar3;
      local_12[3] = (undefined1 *)0x13e1;
    }
    ppuStack_a = local_12;
    uVar5 = 0x1830;
    local_12[2] = (undefined1 *)0x4549;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_7 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
  }
  if (((double *)param_8 != (double *)0x0) || (param_8._2_2_ != 0)) {
    local_12[3] = (undefined1 *)uVar5;
    for (iVar7 = 0; iVar7 < 3; iVar7 = iVar7 + 1) {
      puVar4 = (undefined2 *)(*(int *)0x23a0 + 0x4dc + iVar7 * 4);
      ppuStack_a = (undefined1 **)*puVar4;
      puVar3 = (undefined1 *)puVar4[1];
      local_12[2] = (undefined1 *)0x459b;
      puVar2 = (undefined1 *)long68();
      local_12[iVar7 * 2] = puVar2;
      local_12[iVar7 * 2 + 1] = puVar3;
      local_12[3] = (undefined1 *)0x13e1;
    }
    ppuStack_a = local_12;
    uVar5 = 0x1830;
    local_12[2] = (undefined1 *)0x45c8;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_8 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
  }
  if (((double *)param_9 != (double *)0x0) || (param_9._2_2_ != 0)) {
    local_12[3] = (undefined1 *)uVar5;
    for (iVar7 = 0; iVar7 < 3; iVar7 = iVar7 + 1) {
      puVar4 = (undefined2 *)(*(int *)0x23a0 + 0x4e8 + iVar7 * 4);
      ppuStack_a = (undefined1 **)*puVar4;
      puVar3 = (undefined1 *)puVar4[1];
      local_12[2] = (undefined1 *)0x461a;
      puVar2 = (undefined1 *)long68();
      local_12[iVar7 * 2] = puVar2;
      local_12[iVar7 * 2 + 1] = puVar3;
      local_12[3] = (undefined1 *)0x13e1;
    }
    ppuStack_a = local_12;
    uVar5 = 0x1830;
    local_12[2] = (undefined1 *)0x4647;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_9 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    in_ST0 = in_ST1;
  }
  if (((double *)param_10 != (double *)0x0) || (param_10._2_2_ != 0)) {
    local_12[3] = (undefined1 *)uVar5;
    for (iVar7 = 0; iVar7 < 3; iVar7 = iVar7 + 1) {
      puVar4 = (undefined2 *)(*(int *)0x23a0 + 0x4f4 + iVar7 * 4);
      ppuStack_a = (undefined1 **)*puVar4;
      puVar3 = (undefined1 *)puVar4[1];
      local_12[2] = (undefined1 *)0x4699;
      puVar2 = (undefined1 *)long68();
      local_12[iVar7 * 2] = puVar2;
      local_12[iVar7 * 2 + 1] = puVar3;
      local_12[3] = (undefined1 *)0x13e1;
    }
    ppuStack_a = local_12;
    local_12[2] = (undefined1 *)0x46c6;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_10 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
  }
  return 1;
}



// Function: rdFeed @ 140e:0606

undefined2 __cdecl16far rdFeed(double *param_1,double *param_2,double *param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  longdouble in_ST0;
  longdouble in_ST1;
  longdouble in_ST2;
  undefined1 *local_12 [4];
  undefined1 **ppuStack_a;
  int iVar6;
  
  uVar5 = 0x18a2;
  _aFchkstk();
  if (((double *)param_1 != (double *)0x0) || (param_1._2_2_ != 0)) {
    local_12[3] = (undefined1 *)uVar5;
    for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
      puVar4 = (undefined2 *)(*(int *)0x23a0 + 0x500 + iVar6 * 4);
      ppuStack_a = (undefined1 **)*puVar4;
      puVar3 = (undefined1 *)puVar4[1];
      local_12[2] = (undefined1 *)0x4732;
      puVar2 = (undefined1 *)long68();
      local_12[iVar6 * 2] = puVar2;
      local_12[iVar6 * 2 + 1] = puVar3;
      local_12[3] = (undefined1 *)0x13e1;
    }
    ppuStack_a = local_12;
    uVar5 = 0x1830;
    local_12[2] = (undefined1 *)0x475f;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_1 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
  }
  if (((double *)param_2 != (double *)0x0) || (param_2._2_2_ != 0)) {
    local_12[3] = (undefined1 *)uVar5;
    for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
      puVar4 = (undefined2 *)(*(int *)0x23a0 + 0x50c + iVar6 * 4);
      ppuStack_a = (undefined1 **)*puVar4;
      puVar3 = (undefined1 *)puVar4[1];
      local_12[2] = (undefined1 *)0x47b1;
      puVar2 = (undefined1 *)long68();
      local_12[iVar6 * 2] = puVar2;
      local_12[iVar6 * 2 + 1] = puVar3;
      local_12[3] = (undefined1 *)0x13e1;
    }
    ppuStack_a = local_12;
    uVar5 = 0x1830;
    local_12[2] = (undefined1 *)0x47de;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_2 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    in_ST0 = in_ST1;
  }
  if (((double *)param_3 != (double *)0x0) || (param_3._2_2_ != 0)) {
    local_12[3] = (undefined1 *)uVar5;
    for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
      puVar4 = (undefined2 *)(*(int *)0x23a0 + 0x518 + iVar6 * 4);
      ppuStack_a = (undefined1 **)*puVar4;
      puVar3 = (undefined1 *)puVar4[1];
      local_12[2] = (undefined1 *)0x4830;
      puVar2 = (undefined1 *)long68();
      local_12[iVar6 * 2] = puVar2;
      local_12[iVar6 * 2 + 1] = puVar3;
      local_12[3] = (undefined1 *)0x13e1;
    }
    ppuStack_a = local_12;
    local_12[2] = (undefined1 *)0x485d;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_3 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
  }
  return 1;
}



// Function: rdSpindle @ 140e:079c

undefined2 __cdecl16far rdSpindle(double *param_1,double *param_2,double *param_3,double *param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  longdouble in_ST0;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  undefined1 *local_12 [4];
  undefined1 **ppuStack_a;
  int iVar6;
  
  uVar5 = 0x18a2;
  _aFchkstk();
  if (((double *)param_1 != (double *)0x0) || (param_1._2_2_ != 0)) {
    local_12[3] = (undefined1 *)uVar5;
    for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
      puVar4 = (undefined2 *)(*(int *)0x23a0 + 0x524 + iVar6 * 4);
      ppuStack_a = (undefined1 **)*puVar4;
      puVar3 = (undefined1 *)puVar4[1];
      local_12[2] = (undefined1 *)0x48c8;
      puVar2 = (undefined1 *)long68();
      local_12[iVar6 * 2] = puVar2;
      local_12[iVar6 * 2 + 1] = puVar3;
      local_12[3] = (undefined1 *)0x13e1;
    }
    ppuStack_a = local_12;
    uVar5 = 0x1830;
    local_12[2] = (undefined1 *)0x48f5;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_1 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
  }
  if (((double *)param_2 != (double *)0x0) || (param_2._2_2_ != 0)) {
    local_12[3] = (undefined1 *)uVar5;
    for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
      puVar4 = (undefined2 *)(*(int *)0x23a0 + 0x530 + iVar6 * 4);
      ppuStack_a = (undefined1 **)*puVar4;
      puVar3 = (undefined1 *)puVar4[1];
      local_12[2] = (undefined1 *)0x4947;
      puVar2 = (undefined1 *)long68();
      local_12[iVar6 * 2] = puVar2;
      local_12[iVar6 * 2 + 1] = puVar3;
      local_12[3] = (undefined1 *)0x13e1;
    }
    ppuStack_a = local_12;
    uVar5 = 0x1830;
    local_12[2] = (undefined1 *)0x4974;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_2 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
  }
  if (((double *)param_3 != (double *)0x0) || (param_3._2_2_ != 0)) {
    local_12[3] = (undefined1 *)uVar5;
    for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
      puVar4 = (undefined2 *)(*(int *)0x23a0 + 0x53c + iVar6 * 4);
      ppuStack_a = (undefined1 **)*puVar4;
      puVar3 = (undefined1 *)puVar4[1];
      local_12[2] = (undefined1 *)0x49c6;
      puVar2 = (undefined1 *)long68();
      local_12[iVar6 * 2] = puVar2;
      local_12[iVar6 * 2 + 1] = puVar3;
      local_12[3] = (undefined1 *)0x13e1;
    }
    ppuStack_a = local_12;
    uVar5 = 0x1830;
    local_12[2] = (undefined1 *)0x49f3;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_3 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    in_ST0 = in_ST1;
  }
  if (((double *)param_4 != (double *)0x0) || (param_4._2_2_ != 0)) {
    local_12[3] = (undefined1 *)uVar5;
    for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
      puVar4 = (undefined2 *)(*(int *)0x23a0 + 0x548 + iVar6 * 4);
      ppuStack_a = (undefined1 **)*puVar4;
      puVar3 = (undefined1 *)puVar4[1];
      local_12[2] = (undefined1 *)0x4a45;
      puVar2 = (undefined1 *)long68();
      local_12[iVar6 * 2] = puVar2;
      local_12[iVar6 * 2 + 1] = puVar3;
      local_12[3] = (undefined1 *)0x13e1;
    }
    ppuStack_a = local_12;
    local_12[2] = (undefined1 *)0x4a72;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_4 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
  }
  return 1;
}



// Function: doMove @ 140e:09b2

void __cdecl16far
doMove(undefined2 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
      int param_8,int param_9,int param_10,int param_11)

{
  code *pcVar1;
  undefined2 uVar2;
  int unaff_DS;
  undefined2 local_14 [4];
  undefined2 uStack_c;
  undefined2 *puStack_a;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = 0x18a2;
  _aFchkstk();
  iVar4 = 1;
  *(undefined2 *)(*(int *)0x23a0 + 0x404) = param_1;
  iVar5 = iVar4;
  if ((param_2 == 0) && (param_3 == 0)) {
    for (iVar3 = 0; iVar4 = unaff_DS, iVar3 < 6; iVar3 = iVar3 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar5 * 2) = 0xffff;
      iVar5 = iVar5 + 1;
    }
  }
  else {
    puStack_a = local_14;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      iVar6 = iVar5 + 1;
      *(undefined2 *)(iRam000023b0 + 0x404 + iVar5 * 2) = local_14[iVar3 * 2 + 1];
      iVar5 = iVar5 + 2;
      *(undefined2 *)(iRam000023b0 + 0x404 + iVar6 * 2) = local_14[iVar3 * 2];
    }
  }
  iVar3 = iVar5;
  if ((param_4 == 0) && (param_5 == 0)) {
    for (iVar6 = 0; iVar5 = iVar4, iVar6 < 6; iVar6 = iVar6 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar3 * 2) = 0xffff;
      iVar3 = iVar3 + 1;
    }
  }
  else {
    puStack_a = local_14;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      iVar6 = iVar3 + 1;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar3 * 2) = local_14[iVar4 * 2 + 1];
      iVar3 = iVar3 + 2;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2) = local_14[iVar4 * 2];
    }
  }
  iVar4 = iVar3;
  if ((param_6 == 0) && (param_7 == 0)) {
    for (iVar6 = 0; iVar3 = iVar5, iVar6 < 6; iVar6 = iVar6 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar4 * 2) = 0xffff;
      iVar4 = iVar4 + 1;
    }
  }
  else {
    puStack_a = local_14;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
      iVar6 = iVar4 + 1;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar4 * 2) = local_14[iVar5 * 2 + 1];
      iVar4 = iVar4 + 2;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2) = local_14[iVar5 * 2];
    }
  }
  iVar5 = iVar4;
  if ((param_8 == 0) && (param_9 == 0)) {
    for (iVar6 = 0; iVar4 = iVar3, iVar6 < 6; iVar6 = iVar6 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar5 * 2) = 0xffff;
      iVar5 = iVar5 + 1;
    }
  }
  else {
    puStack_a = local_14;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      iVar6 = iVar5 + 1;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar5 * 2) = local_14[iVar3 * 2 + 1];
      iVar5 = iVar5 + 2;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2) = local_14[iVar3 * 2];
    }
  }
  if ((param_10 == 0) && (param_11 == 0)) {
    for (iVar3 = 0; iVar3 < 6; iVar3 = iVar3 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar5 * 2) = 0xffff;
      iVar5 = iVar5 + 1;
    }
  }
  else {
    puStack_a = local_14;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    iVar4 = iVar5;
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      iVar6 = iVar4 + 1;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar4 * 2) = local_14[iVar3 * 2 + 1];
      iVar4 = iVar4 + 2;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2) = local_14[iVar3 * 2];
    }
  }
  uStack_c = 0x4f04;
  puStack_a = (undefined2 *)uVar2;
  doPcomCmd();
  return;
}



// Function: doDrives @ 140e:0e30

void __cdecl16far doDrives(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  _aFchkstk();
  *(undefined2 *)(*(int *)0x23a0 + 0x404) = param_1;
  doPcomCmd(2);
  return;
}



// Function: homeAxes @ 140e:0e66

void __cdecl16far homeAxes(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  _aFchkstk();
  *(undefined2 *)(*(int *)0x23a0 + 0x404) = param_1;
  doPcomCmd(3);
  return;
}



// Function: setIncMode @ 140e:0e9c

void __cdecl16far setIncMode(int param_1)

{
  _aFchkstk();
  if (param_1 == 1) {
    setFlags(0x4000);
  }
  else {
    clrFlags(0x4000);
  }
  return;
}



// Function: setMetricMode @ 140e:0ef4

void __cdecl16far setMetricMode(int param_1)

{
  _aFchkstk();
  if (param_1 == 1) {
    setFlags(0x8000);
  }
  else {
    clrFlags(0x8000);
  }
  return;
}



// Function: setJog @ 140e:0f4c

void setJog(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  
  _aFchkstk();
  *(undefined2 *)(*(int *)0x23a0 + 0x404) = param_2;
  *(undefined2 *)(*(int *)0x23a0 + 0x406) = param_3;
  doPcomCmd(5);
  return;
}



// Function: wrFeedOvr @ 140e:0f98

void __cdecl16far wrFeedOvr(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  _aFchkstk();
  *(undefined2 *)(*(int *)0x23a0 + 0x404) = param_1;
  doPcomCmd(4);
  return;
}



// Function: getMode @ 140e:0fd0

undefined2 __cdecl16far getMode(undefined2 *param_1)

{
  undefined2 unaff_DS;
  
  _aFchkstk();
  *param_1 = *(undefined2 *)(*(int *)0x23a0 + 0x484);
  return 1;
}



// Function: setMode @ 1000:50e0

void __cdecl16far setMode(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  _aFchkstk();
  *(undefined2 *)(*(int *)0x23a0 + 0x404) = param_1;
  doPcomCmd(6);
  return;
}



// Function: setFdOvr @ 1000:5116

void __cdecl16far setFdOvr(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  _aFchkstk();
  *(undefined2 *)(*(int *)0x23a0 + 0x404) = param_1;
  doPcomCmd(7);
  return;
}



// Function: setAxes @ 1000:514c

void __cdecl16far
setAxes(undefined2 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
       int param_8,int param_9,int param_10,int param_11)

{
  code *pcVar1;
  undefined2 uVar2;
  int unaff_DS;
  undefined2 local_18 [6];
  undefined2 local_c;
  undefined2 *local_a;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = 0x18a2;
  _aFchkstk();
  iVar4 = 1;
  *(undefined2 *)(*(int *)0x23a0 + 0x404) = param_1;
  iVar5 = iVar4;
  if ((param_2 == 0) && (param_3 == 0)) {
    for (iVar3 = 0; iVar4 = unaff_DS, iVar3 < 6; iVar3 = iVar3 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar5 * 2) = 0xffff;
      iVar5 = iVar5 + 1;
    }
  }
  else {
    local_a = local_18;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      local_c = local_18[iVar3 * 2];
      local_a = (undefined2 *)local_18[iVar3 * 2 + 1];
      iVar6 = iVar5 + 1;
      *(undefined2 *)(iRam000023b0 + 0x404 + iVar5 * 2) = local_18[iVar3 * 2 + 1];
      iVar5 = iVar5 + 2;
      *(undefined2 *)(iRam000023b0 + 0x404 + iVar6 * 2) = local_c;
    }
  }
  iVar3 = iVar5;
  if ((param_4 == 0) && (param_5 == 0)) {
    for (iVar6 = 0; iVar5 = iVar4, iVar6 < 6; iVar6 = iVar6 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar3 * 2) = 0xffff;
      iVar3 = iVar3 + 1;
    }
  }
  else {
    local_a = local_18;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      local_c = local_18[iVar4 * 2];
      local_a = (undefined2 *)local_18[iVar4 * 2 + 1];
      iVar6 = iVar3 + 1;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar3 * 2) = local_18[iVar4 * 2 + 1];
      iVar3 = iVar3 + 2;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2) = local_c;
    }
  }
  iVar4 = iVar3;
  if ((param_6 == 0) && (param_7 == 0)) {
    for (iVar6 = 0; iVar3 = iVar5, iVar6 < 6; iVar6 = iVar6 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar4 * 2) = 0xffff;
      iVar4 = iVar4 + 1;
    }
  }
  else {
    local_a = local_18;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
      local_c = local_18[iVar5 * 2];
      local_a = (undefined2 *)local_18[iVar5 * 2 + 1];
      iVar6 = iVar4 + 1;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar4 * 2) = local_18[iVar5 * 2 + 1];
      iVar4 = iVar4 + 2;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2) = local_c;
    }
  }
  iVar5 = iVar4;
  if ((param_8 == 0) && (param_9 == 0)) {
    for (iVar6 = 0; iVar4 = iVar3, iVar6 < 6; iVar6 = iVar6 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar5 * 2) = 0xffff;
      iVar5 = iVar5 + 1;
    }
  }
  else {
    local_a = local_18;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      local_c = local_18[iVar3 * 2];
      local_a = (undefined2 *)local_18[iVar3 * 2 + 1];
      iVar6 = iVar5 + 1;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar5 * 2) = local_18[iVar3 * 2 + 1];
      iVar5 = iVar5 + 2;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2) = local_c;
    }
  }
  if ((param_10 == 0) && (param_11 == 0)) {
    for (iVar3 = 0; iVar3 < 6; iVar3 = iVar3 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar5 * 2) = 0xffff;
      iVar5 = iVar5 + 1;
    }
  }
  else {
    local_a = local_18;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    iVar4 = iVar5;
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      local_c = local_18[iVar3 * 2];
      local_a = (undefined2 *)local_18[iVar3 * 2 + 1];
      iVar6 = iVar4 + 1;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar4 * 2) = local_18[iVar3 * 2 + 1];
      iVar4 = iVar4 + 2;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2) = local_c;
    }
  }
  local_c = 0x55aa;
  local_a = (undefined2 *)uVar2;
  doPcomCmd();
  return;
}



// Function: wrLeadTables @ 1000:55b6

void __cdecl16far wrLeadTables(undefined2 param_1,int param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  int iVar1;
  
  _aFchkstk();
  *(undefined2 *)(*(int *)0x23a0 + 0x404) = param_1;
  for (iVar1 = 0; iVar1 < 0x100; iVar1 = iVar1 + 1) {
    *(undefined2 *)(*(int *)0x23a0 + 0x200 + iVar1 * 2) = *(undefined2 *)(param_2 + iVar1 * 2);
  }
  doPcomCmd(9);
  return;
}



// Function: rdProbe @ 1000:562e

undefined2 __cdecl16far rdProbe(double *param_1,double *param_2,double *param_3,double *param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  uint unaff_DI;
  undefined2 unaff_DS;
  longdouble in_ST0;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  undefined2 local_1c [6];
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined2 *local_a;
  
  _aFchkstk();
  local_a = (undefined2 *)&stack0xfff8;
  local_c = 0x18a2;
  local_e = 0x5647;
  getFlags();
  if ((unaff_DI >> 0xb & 1) == 1) {
    local_a = (undefined2 *)0x140e;
    uVar5 = 0x140e;
    local_c = 0x5666;
    iVar3 = doPcomCmd();
    if (iVar3 == 1) {
      local_a = (undefined2 *)0x0;
      for (local_c = 0; iVar3 = local_c, local_c < 3; local_c = local_c + 1) {
        iVar1 = (int)local_a + 1;
        uVar4 = *(undefined2 *)(*(int *)0x23a0 + 0x404 + (int)local_a * 2);
        local_a = local_a + 1;
        local_10 = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar1 * 2);
        local_1c[local_c * 2] = local_10;
        local_1c[iVar3 * 2 + 1] = uVar4;
      }
      if (((double *)param_1 != (double *)0x0) || (param_1._2_2_ != 0)) {
        local_a = local_1c;
        local_c = 0x140e;
        uVar5 = 0x1830;
        local_e = 0x56fe;
        BCDtoDouble();
        pcVar2 = (code *)swi(0x39);
        (*pcVar2)();
        pcVar2 = (code *)swi(0x3d);
        (*pcVar2)();
        pcVar2 = (code *)swi(0x3c);
        (*pcVar2)();
        *(double *)param_1 = (double)in_ST0;
        pcVar2 = (code *)swi(0x3d);
        (*pcVar2)();
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
      }
      for (local_c = 0; iVar3 = local_c, local_c < 3; local_c = local_c + 1) {
        iVar1 = (int)local_a + 1;
        uVar4 = *(undefined2 *)(*(int *)0x23a0 + 0x404 + (int)local_a * 2);
        local_a = local_a + 1;
        local_10 = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar1 * 2);
        local_1c[local_c * 2] = local_10;
        local_1c[iVar3 * 2 + 1] = uVar4;
      }
      if (((double *)param_2 != (double *)0x0) || (param_2._2_2_ != 0)) {
        local_a = local_1c;
        local_e = 0x5799;
        local_c = uVar5;
        BCDtoDouble();
        pcVar2 = (code *)swi(0x39);
        (*pcVar2)();
        pcVar2 = (code *)swi(0x3d);
        (*pcVar2)();
        pcVar2 = (code *)swi(0x3c);
        (*pcVar2)();
        *(double *)param_2 = (double)in_ST0;
        pcVar2 = (code *)swi(0x3d);
        (*pcVar2)();
        uVar5 = 0x1830;
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
      }
      for (local_c = 0; iVar3 = local_c, local_c < 3; local_c = local_c + 1) {
        iVar1 = (int)local_a + 1;
        uVar4 = *(undefined2 *)(*(int *)0x23a0 + 0x404 + (int)local_a * 2);
        local_a = local_a + 1;
        local_10 = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar1 * 2);
        local_1c[local_c * 2] = local_10;
        local_1c[iVar3 * 2 + 1] = uVar4;
      }
      if (((double *)param_3 != (double *)0x0) || (param_3._2_2_ != 0)) {
        local_a = local_1c;
        local_e = 0x5834;
        local_c = uVar5;
        BCDtoDouble();
        pcVar2 = (code *)swi(0x39);
        (*pcVar2)();
        pcVar2 = (code *)swi(0x3d);
        (*pcVar2)();
        pcVar2 = (code *)swi(0x3c);
        (*pcVar2)();
        *(double *)param_3 = (double)in_ST0;
        pcVar2 = (code *)swi(0x3d);
        (*pcVar2)();
        uVar5 = 0x1830;
        in_ST0 = in_ST1;
      }
      for (local_c = 0; iVar3 = local_c, local_c < 3; local_c = local_c + 1) {
        iVar1 = (int)local_a + 1;
        uVar4 = *(undefined2 *)(*(int *)0x23a0 + 0x404 + (int)local_a * 2);
        local_a = local_a + 1;
        local_10 = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar1 * 2);
        local_1c[local_c * 2] = local_10;
        local_1c[iVar3 * 2 + 1] = uVar4;
      }
      if (((double *)param_4 != (double *)0x0) || (param_4._2_2_ != 0)) {
        local_a = local_1c;
        local_e = 0x58cf;
        local_c = uVar5;
        BCDtoDouble();
        pcVar2 = (code *)swi(0x39);
        (*pcVar2)();
        pcVar2 = (code *)swi(0x3d);
        (*pcVar2)();
        pcVar2 = (code *)swi(0x3c);
        (*pcVar2)();
        *(double *)param_4 = (double)in_ST0;
        pcVar2 = (code *)swi(0x3d);
        (*pcVar2)();
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 0xffff;
    }
  }
  else {
    iVar3 = 0x140e;
    for (local_c = 0; local_c < 3; local_c = local_c + 1) {
      puVar6 = (undefined2 *)(*(int *)0x23a0 + 0x488 + local_c * 4);
      local_a = (undefined2 *)*puVar6;
      uVar5 = puVar6[1];
      local_e = 0x5921;
      local_c = iVar3;
      uVar4 = long68();
      iVar3 = local_c;
      local_1c[local_c * 2] = uVar4;
      local_1c[iVar3 * 2 + 1] = uVar5;
      iVar3 = 0x13e1;
    }
    if (((double *)param_1 != (double *)0x0) || (param_1._2_2_ != 0)) {
      local_a = local_1c;
      local_e = 0x5960;
      local_c = iVar3;
      BCDtoDouble();
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      *(double *)param_1 = (double)in_ST0;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      iVar3 = 0x1830;
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
    }
    for (local_c = 0; local_c < 3; local_c = local_c + 1) {
      puVar6 = (undefined2 *)(*(int *)0x23a0 + 0x494 + local_c * 4);
      local_a = (undefined2 *)*puVar6;
      uVar5 = puVar6[1];
      local_e = 0x59a0;
      local_c = iVar3;
      uVar4 = long68();
      iVar3 = local_c;
      local_1c[local_c * 2] = uVar4;
      local_1c[iVar3 * 2 + 1] = uVar5;
      iVar3 = 0x13e1;
    }
    if (((double *)param_2 != (double *)0x0) || (param_2._2_2_ != 0)) {
      local_a = local_1c;
      local_e = 0x59df;
      local_c = iVar3;
      BCDtoDouble();
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      *(double *)param_2 = (double)in_ST0;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      iVar3 = 0x1830;
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
    }
    for (local_c = 0; local_c < 3; local_c = local_c + 1) {
      puVar6 = (undefined2 *)(*(int *)0x23a0 + 0x4a0 + local_c * 4);
      local_a = (undefined2 *)*puVar6;
      uVar5 = puVar6[1];
      local_e = 0x5a1f;
      local_c = iVar3;
      uVar4 = long68();
      iVar3 = local_c;
      local_1c[local_c * 2] = uVar4;
      local_1c[iVar3 * 2 + 1] = uVar5;
      iVar3 = 0x13e1;
    }
    if (((double *)param_3 != (double *)0x0) || (param_3._2_2_ != 0)) {
      local_a = local_1c;
      local_e = 0x5a5e;
      local_c = iVar3;
      BCDtoDouble();
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      *(double *)param_3 = (double)in_ST0;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      iVar3 = 0x1830;
      in_ST0 = in_ST1;
    }
    for (local_c = 0; local_c < 3; local_c = local_c + 1) {
      puVar6 = (undefined2 *)(*(int *)0x23a0 + 0x4ac + local_c * 4);
      local_a = (undefined2 *)*puVar6;
      uVar5 = puVar6[1];
      local_e = 0x5a9e;
      local_c = iVar3;
      uVar4 = long68();
      iVar3 = local_c;
      local_1c[local_c * 2] = uVar4;
      local_1c[iVar3 * 2 + 1] = uVar5;
      iVar3 = 0x13e1;
    }
    if (((double *)param_4 != (double *)0x0) || (param_4._2_2_ != 0)) {
      local_a = local_1c;
      local_e = 0x5add;
      local_c = iVar3;
      BCDtoDouble();
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      *(double *)param_4 = (double)in_ST0;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
    }
    uVar5 = 0;
  }
  return uVar5;
}



// Function: resetPgm @ 1000:5afc

void __cdecl16far resetPgm(void)

{
  _aFchkstk();
  doPcomCmd(0xe);
  return;
}



// Function: resetAlarm @ 1000:5b1e

void __cdecl16far resetAlarm(void)

{
  _aFchkstk();
  doPcomCmd(0xf);
  return;
}



// Function: wrTool @ 1000:5b40

void __cdecl16far
wrTool(undefined2 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  code *pcVar1;
  undefined2 uVar2;
  int unaff_DS;
  undefined2 local_18 [6];
  undefined2 local_c;
  undefined2 *local_a;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = 0x18a2;
  _aFchkstk();
  iVar4 = 1;
  *(undefined2 *)(*(int *)0x23a0 + 0x404) = param_1;
  iVar6 = iVar4;
  if ((param_2 == 0) && (param_3 == 0)) {
    for (iVar3 = 0; iVar4 = unaff_DS, iVar3 < 6; iVar3 = iVar3 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2) = 0xffff;
      iVar6 = iVar6 + 1;
    }
  }
  else {
    local_a = local_18;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      local_c = local_18[iVar3 * 2];
      local_a = (undefined2 *)local_18[iVar3 * 2 + 1];
      iVar5 = iVar6 + 1;
      *(undefined2 *)(iRam000023b0 + 0x404 + iVar6 * 2) = local_18[iVar3 * 2 + 1];
      iVar6 = iVar6 + 2;
      *(undefined2 *)(iRam000023b0 + 0x404 + iVar5 * 2) = local_c;
    }
  }
  iVar3 = iVar6;
  if ((param_4 == 0) && (param_5 == 0)) {
    for (iVar5 = 0; iVar6 = iVar4, iVar5 < 6; iVar5 = iVar5 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar3 * 2) = 0xffff;
      iVar3 = iVar3 + 1;
    }
  }
  else {
    local_a = local_18;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      local_c = local_18[iVar4 * 2];
      local_a = (undefined2 *)local_18[iVar4 * 2 + 1];
      iVar5 = iVar3 + 1;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar3 * 2) = local_18[iVar4 * 2 + 1];
      iVar3 = iVar3 + 2;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar5 * 2) = local_c;
    }
  }
  if ((param_6 == 0) && (param_7 == 0)) {
    for (iVar4 = 0; iVar4 < 6; iVar4 = iVar4 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar3 * 2) = 0xffff;
      iVar3 = iVar3 + 1;
    }
  }
  else {
    local_a = local_18;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    iVar4 = iVar3;
    for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
      local_c = local_18[iVar6 * 2];
      local_a = (undefined2 *)local_18[iVar6 * 2 + 1];
      iVar5 = iVar4 + 1;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar4 * 2) = local_18[iVar6 * 2 + 1];
      iVar4 = iVar4 + 2;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar5 * 2) = local_c;
    }
  }
  local_c = 0x5df6;
  local_a = (undefined2 *)uVar2;
  doPcomCmd();
  return;
}



// Function: rdTool @ 1000:5e02

undefined2 __cdecl16far rdTool(undefined2 *param_1,double *param_2,double *param_3,double *param_4)

{
  int iVar1;
  undefined2 uVar2;
  code *pcVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  longdouble in_ST0;
  longdouble in_ST1;
  longdouble in_ST2;
  undefined2 local_18 [5];
  undefined2 uStack_e;
  undefined2 local_c;
  undefined2 *local_a;
  int iVar6;
  
  _aFchkstk();
  *(undefined2 *)(*(int *)0x23a0 + 0x404) = *param_1;
  local_a = (undefined2 *)0x18a2;
  uVar5 = 0x140e;
  local_c = 0x5e30;
  iVar4 = doPcomCmd();
  if (iVar4 == 1) {
    if (((undefined2 *)param_1 != (undefined2 *)0x0) || (param_1._2_2_ != 0)) {
      *param_1 = *(undefined2 *)(*(int *)0x23a0 + 0x404);
    }
    iVar6 = 1;
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      iVar1 = iVar6 + 1;
      uVar2 = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2);
      iVar6 = iVar6 + 2;
      local_18[iVar4 * 2] = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar1 * 2);
      local_18[iVar4 * 2 + 1] = uVar2;
    }
    if (((double *)param_2 != (double *)0x0) || (param_2._2_2_ != 0)) {
      local_a = local_18;
      local_c = 0x140e;
      uVar5 = 0x1830;
      uStack_e = 0x5f03;
      BCDtoDouble();
      pcVar3 = (code *)swi(0x39);
      (*pcVar3)();
      pcVar3 = (code *)swi(0x3d);
      (*pcVar3)();
      pcVar3 = (code *)swi(0x3c);
      (*pcVar3)();
      *(double *)param_2 = (double)in_ST0;
      pcVar3 = (code *)swi(0x3d);
      (*pcVar3)();
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
    }
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      iVar1 = iVar6 + 1;
      uVar2 = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2);
      iVar6 = iVar6 + 2;
      local_18[iVar4 * 2] = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar1 * 2);
      local_18[iVar4 * 2 + 1] = uVar2;
    }
    if (((double *)param_3 != (double *)0x0) || (param_3._2_2_ != 0)) {
      local_a = local_18;
      uStack_e = 0x5f9e;
      local_c = uVar5;
      BCDtoDouble();
      pcVar3 = (code *)swi(0x39);
      (*pcVar3)();
      pcVar3 = (code *)swi(0x3d);
      (*pcVar3)();
      pcVar3 = (code *)swi(0x3c);
      (*pcVar3)();
      *(double *)param_3 = (double)in_ST0;
      pcVar3 = (code *)swi(0x3d);
      (*pcVar3)();
      uVar5 = 0x1830;
      in_ST0 = in_ST1;
    }
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      iVar1 = iVar6 + 1;
      uVar2 = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2);
      iVar6 = iVar6 + 2;
      local_18[iVar4 * 2] = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar1 * 2);
      local_18[iVar4 * 2 + 1] = uVar2;
    }
    if (((double *)param_4 != (double *)0x0) || (param_4._2_2_ != 0)) {
      local_a = local_18;
      uStack_e = 0x6039;
      local_c = uVar5;
      BCDtoDouble();
      pcVar3 = (code *)swi(0x39);
      (*pcVar3)();
      pcVar3 = (code *)swi(0x3d);
      (*pcVar3)();
      pcVar3 = (code *)swi(0x3c);
      (*pcVar3)();
      *(double *)param_4 = (double)in_ST0;
      pcVar3 = (code *)swi(0x3d);
      (*pcVar3)();
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// Function: rdActvTool @ 1000:6062

/* WARNING: Unable to track spacebase fully for stack */

undefined2 __cdecl16far
rdActvTool(undefined2 *param_1,double *param_2,double *param_3,double *param_4,undefined2 *param_5)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  longdouble in_ST0;
  longdouble in_ST1;
  longdouble in_ST2;
  int local_12 [4];
  int *piStack_a;
  int iVar9;
  
  uVar8 = 0x18a2;
  _aFchkstk();
  if (((undefined2 *)param_1 != (undefined2 *)0x0) || (param_1._2_2_ != 0)) {
    piStack_a = (int *)*(int *)(*(int *)0x23a0 + 0x554);
    local_12[3] = 0x18a2;
    uVar8 = 0x13e1;
    local_12[2] = 0x609d;
    uVar2 = long68();
    *param_1 = uVar2;
  }
  puVar7 = &stack0xfffa;
  for (iVar9 = 0; iVar9 < 3; iVar9 = iVar9 + 1) {
    piVar5 = (int *)(*(int *)0x23a0 + 0x55c + iVar9 * 4);
    piStack_a = (int *)*piVar5;
    iVar4 = piVar5[1];
    local_12[2] = 0x60d3;
    local_12[3] = uVar8;
    iVar3 = long68();
    local_12[iVar9 * 2] = iVar3;
    local_12[iVar9 * 2 + 1] = iVar4;
    uVar8 = 0x13e1;
  }
  if (((double *)param_2 != (double *)0x0) || (param_2._2_2_ != 0)) {
    piStack_a = local_12;
    local_12[2] = 0x6112;
    local_12[3] = uVar8;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    puVar7 = puVar7 + 2;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_2 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar8 = 0x1830;
    in_ST0 = in_ST1;
    in_ST1 = in_ST2;
  }
  for (iVar9 = 0; iVar9 < 3; iVar9 = iVar9 + 1) {
    puVar6 = (undefined2 *)(*(int *)0x23a0 + 0x568 + iVar9 * 4);
    uVar2 = *puVar6;
    iVar4 = puVar6[1];
    *(int *)(puVar7 + -2) = iVar4;
    *(undefined2 *)(puVar7 + -4) = uVar2;
    *(undefined2 *)(puVar7 + -6) = uVar8;
    uVar8 = 0x13e1;
    *(undefined2 *)(puVar7 + -8) = 0x6152;
    iVar3 = long68();
    local_12[iVar9 * 2] = iVar3;
    local_12[iVar9 * 2 + 1] = iVar4;
  }
  if (((double *)param_3 != (double *)0x0) || (param_3._2_2_ != 0)) {
    *(undefined2 *)(puVar7 + -2) = unaff_SS;
    *(int **)(puVar7 + -4) = local_12;
    *(undefined2 *)(puVar7 + -6) = uVar8;
    uVar8 = 0x1830;
    *(undefined2 *)(puVar7 + -8) = 0x6191;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    puVar7 = puVar7 + 2;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_3 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    in_ST0 = in_ST1;
  }
  for (iVar9 = 0; iVar9 < 3; iVar9 = iVar9 + 1) {
    puVar6 = (undefined2 *)(*(int *)0x23a0 + 0x574 + iVar9 * 4);
    uVar2 = *puVar6;
    iVar4 = puVar6[1];
    *(int *)(puVar7 + -2) = iVar4;
    *(undefined2 *)(puVar7 + -4) = uVar2;
    *(undefined2 *)(puVar7 + -6) = uVar8;
    uVar8 = 0x13e1;
    *(undefined2 *)(puVar7 + -8) = 0x61d1;
    iVar3 = long68();
    local_12[iVar9 * 2] = iVar3;
    local_12[iVar9 * 2 + 1] = iVar4;
  }
  if (((double *)param_4 != (double *)0x0) || (param_4._2_2_ != 0)) {
    *(undefined2 *)(puVar7 + -2) = unaff_SS;
    *(int **)(puVar7 + -4) = local_12;
    *(undefined2 *)(puVar7 + -6) = uVar8;
    uVar8 = 0x1830;
    *(undefined2 *)(puVar7 + -8) = 0x6210;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    puVar7 = puVar7 + 2;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)param_4 = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
  }
  if (((undefined2 *)param_5 != (undefined2 *)0x0) || (param_5._2_2_ != 0)) {
    uVar2 = *(undefined2 *)(*(int *)0x23a0 + 0x558);
    *(undefined2 *)(puVar7 + -2) = *(undefined2 *)(*(int *)0x23a0 + 0x55a);
    *(undefined2 *)(puVar7 + -4) = uVar2;
    *(undefined2 *)(puVar7 + -6) = uVar8;
    *(undefined2 *)(puVar7 + -8) = 0x6251;
    uVar8 = long68();
    *param_5 = uVar8;
  }
  return 1;
}



// Function: setActvTool @ 1000:6266

void __cdecl16far setActvTool(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  
  _aFchkstk();
  *(undefined2 *)(*(int *)0x23a0 + 0x404) = param_1;
  *(undefined2 *)(*(int *)0x23a0 + 0x406) = param_2;
  doPcomCmd(0x12,2);
  return;
}



// Function: getFlags @ 140e:21ec

undefined2 __cdecl16far getFlags(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  _aFchkstk();
  uVar2 = *(undefined2 *)(*(int *)0x23a0 + 0x482);
  uVar1 = long68(*(undefined2 *)(*(int *)0x23a0 + 0x480),uVar2);
  *param_1 = uVar1;
  ((undefined2 *)param_1)[1] = uVar2;
  return 1;
}



// Function: setFlags @ 140e:222e

void __cdecl16far setFlags(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  _aFchkstk();
  uVar3 = long68(param_1,param_2);
  iVar1 = *(int *)0x23a0;
  uVar2 = *(undefined2 *)0x239e;
  *(undefined2 *)(iVar1 + 0x404) = uVar3;
  *(undefined2 *)(iVar1 + 0x406) = param_2;
  doPcomCmd(0x1e);
  return;
}



// Function: clrFlags @ 140e:2276

void __cdecl16far clrFlags(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  _aFchkstk();
  uVar3 = long68(param_1,param_2);
  iVar1 = *(int *)0x23a0;
  uVar2 = *(undefined2 *)0x239e;
  *(undefined2 *)(iVar1 + 0x404) = uVar3;
  *(undefined2 *)(iVar1 + 0x406) = param_2;
  doPcomCmd(0x1f);
  return;
}



// Function: clrPartPgm @ 1000:639e

void __cdecl16far clrPartPgm(void)

{
  _aFchkstk();
  doPcomCmd(0x13);
  return;
}



// Function: wrPartPgm @ 1000:63c0

/* WARNING: Removing unreachable block (ram,0x00016423) */

undefined2 __cdecl16far wrPartPgm(undefined4 param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  byte local_212 [510];
  undefined2 uStack_14;
  int local_12;
  byte *local_8;
  
  _aFchkstk();
  _fileno();
  iVar3 = _filelength();
  if ((iVar3 >> 0xf < 3) || (iVar3 >> 0xf < 4)) {
    do {
      uVar4 = (undefined2)((ulong)param_1 >> 0x10);
      if ((*(byte *)((int)param_1 + 10) & 0x10) != 0) {
        return 0;
      }
      strlen();
      local_12 = 0x18a2;
      uStack_14 = 0x644d;
      memcpy();
      if ((local_12 != 0x200) && ((*(byte *)((int)param_1 + 10) & 0x20) != 0)) {
        return 0xfffd;
      }
      _local_8 = (byte *)CONCAT22(unaff_SS,local_212);
      iVar3 = 0;
      if (local_12 != 0) {
        for (; pbVar2 = _local_8, 1 < local_12; local_12 = local_12 + -2) {
          uVar4 = (undefined2)((ulong)_local_8 >> 0x10);
          pbVar1 = local_8 + 1;
          _local_8 = (byte *)CONCAT22(uVar4,local_8 + 2);
          *(undefined2 *)(*(int *)0x23a0 + 0x200 + iVar3 * 2) = CONCAT11(*pbVar2,*pbVar1);
          iVar3 = iVar3 + 1;
        }
      }
      if (local_12 != 0) {
        *(int *)(*(int *)0x23a0 + 0x200 + iVar3 * 2) = (uint)*_local_8 << 8;
        iVar3 = iVar3 + 1;
      }
      if (iVar3 < 0x200) {
        *(undefined2 *)(*(int *)0x23a0 + 0x200 + iVar3 * 2) = 0;
      }
      iVar3 = doPcomCmd();
    } while (iVar3 != 0);
    uVar4 = 0xffff;
  }
  else {
    uVar4 = 0xfffe;
  }
  return uVar4;
}



// Function: rdPartPgmInfo @ 1000:658c

undefined2 __cdecl16far rdPartPgmInfo(char *param_1,undefined2 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int local_a;
  char cVar4;
  
  _aFchkstk();
  iVar2 = doPcomCmd(0x15);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_a = 0;
    do {
      iVar2 = local_a + 1;
      uVar3 = *(undefined2 *)(*(int *)0x23a0 + 0x200 + local_a * 2);
      pcVar1 = param_1 + 1;
      cVar4 = (char)((uint)uVar3 >> 8);
      *param_1 = cVar4;
      if (cVar4 == '\0') {
        cVar4 = '\0';
        param_1 = pcVar1;
      }
      else {
        param_1 = param_1 + 2;
        cVar4 = (char)uVar3;
        *pcVar1 = cVar4;
      }
    } while ((cVar4 != '\0') && (local_a = iVar2, iVar2 < 0x100));
    uVar3 = 1;
  }
  return uVar3;
}



// Function: executeBlock @ 1000:6624

int __cdecl16far executeBlock(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined2 unaff_DS;
  int iVar4;
  
  _aFchkstk();
  iVar3 = strlen((byte *)param_1,param_1._2_2_);
  iVar4 = 0;
  for (; 1 < iVar3; iVar3 = iVar3 + -2) {
    pbVar1 = (byte *)param_1 + 1;
    bVar2 = *param_1;
    param_1 = (byte *)CONCAT22(param_1._2_2_,(byte *)param_1 + 2);
    *(undefined2 *)(*(int *)0x23a0 + 0x200 + iVar4 * 2) = CONCAT11(bVar2,*pbVar1);
    iVar4 = iVar4 + 1;
  }
  if (iVar3 != 0) {
    *(int *)(*(int *)0x23a0 + 0x200 + iVar4 * 2) = (uint)*param_1 << 8;
    iVar4 = iVar4 + 1;
  }
  *(undefined2 *)(*(int *)0x23a0 + 0x200 + iVar4 * 2) = 0;
  iVar3 = doPcomCmd(0x16);
  if (iVar3 == 0) {
    iVar3 = -1;
  }
  return iVar3;
}



// Function: cycleStart @ 1000:670a

void __cdecl16far cycleStart(void)

{
  _aFchkstk();
  doPcomCmd(0x17);
  return;
}



// Function: setHold @ 1000:672c

void __cdecl16far setHold(void)

{
  _aFchkstk();
  doPcomCmd(0xc);
  return;
}



// Function: rdMsgBuffer @ 1000:674e

undefined2 __cdecl16far rdMsgBuffer(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  uint unaff_DI;
  undefined2 unaff_DS;
  int local_12;
  undefined1 local_10;
  undefined1 uStackY_f;
  uint local_e;
  
  _aFchkstk();
  getFlags(&stack0xfff8);
  if ((unaff_DI >> 7 & 1) == 1) {
    local_12 = 0;
    local_e = 0;
    while (local_e < 0x100) {
      uVar2 = *(undefined2 *)(*(int *)0x23a0 + 0x580 + local_12 * 2);
      iVar1 = local_e + 1;
      uStackY_f = (undefined1)((uint)uVar2 >> 8);
      *(undefined1 *)((int)param_1 + local_e) = uStackY_f;
      local_e = local_e + 2;
      local_10 = (undefined1)uVar2;
      *(undefined1 *)((int)param_1 + iVar1) = local_10;
      *(undefined1 *)((int)param_1 + 0xff) = 0;
      local_12 = local_12 + 1;
    }
    uVar2 = clrFlags(0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: rdTextBuffer @ 1000:6822

undefined2 __cdecl16far rdTextBuffer(undefined4 param_1)

{
  int iVar1;
  undefined2 uVar2;
  uint unaff_DI;
  undefined2 unaff_DS;
  int local_12;
  undefined1 local_10;
  undefined1 uStackY_f;
  int local_e;
  
  _aFchkstk();
  getFlags(&stack0xfff8);
  if ((unaff_DI >> 5 & 1) == 1) {
    local_12 = 0;
    local_e = 0;
    while (local_e < 0x27) {
      uVar2 = *(undefined2 *)(*(int *)0x23a0 + 0x680 + local_12 * 2);
      iVar1 = local_e + 1;
      uStackY_f = (undefined1)((uint)uVar2 >> 8);
      *(undefined1 *)((int)param_1 + local_e) = uStackY_f;
      local_e = local_e + 2;
      local_10 = (undefined1)uVar2;
      *(undefined1 *)((int)param_1 + iVar1) = local_10;
      *(undefined1 *)((int)param_1 + 0x27) = 0;
      local_12 = local_12 + 1;
    }
    local_e = 0;
    while (local_e < 0x27) {
      uVar2 = *(undefined2 *)(*(int *)0x23a0 + 0x680 + local_12 * 2);
      iVar1 = local_e + 0x29;
      uStackY_f = (undefined1)((uint)uVar2 >> 8);
      *(undefined1 *)((int)param_1 + 0x28 + local_e) = uStackY_f;
      local_e = local_e + 2;
      local_10 = (undefined1)uVar2;
      *(undefined1 *)((int)param_1 + iVar1) = local_10;
      *(undefined1 *)((int)param_1 + 0x4f) = 0;
      local_12 = local_12 + 1;
    }
    local_e = 0;
    while (local_e < 0x27) {
      uVar2 = *(undefined2 *)(*(int *)0x23a0 + 0x680 + local_12 * 2);
      iVar1 = local_e + 0x51;
      uStackY_f = (undefined1)((uint)uVar2 >> 8);
      *(undefined1 *)((int)param_1 + 0x50 + local_e) = uStackY_f;
      local_e = local_e + 2;
      local_10 = (undefined1)uVar2;
      *(undefined1 *)((int)param_1 + iVar1) = local_10;
      *(undefined1 *)((int)param_1 + 0x77) = 0;
      local_12 = local_12 + 1;
    }
    uVar2 = clrFlags(0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: loadBMDC @ 140e:28f8

undefined2 __cdecl16far loadBMDC(undefined4 param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  
  _aFchkstk();
  uVar2 = _fileno((int)param_1,param_1._2_2_);
  iVar3 = _filelength(uVar2);
  if ((iVar3 >> 0xf < 3) || (iVar3 >> 0xf < 4)) {
    out(0x1a0,iVar3);
    out(0x1a6,0);
    out(0x1a4,0);
    while ((*(byte *)((int)param_1 + 10) & 0x10) == 0) {
      uVar2 = fgetc((int)param_1,param_1._2_2_);
      bVar1 = *(byte *)((int)param_1 + 10) & 0x10;
      if (bVar1 == 0) {
        bVar1 = fgetc((int)param_1,param_1._2_2_,uVar2);
      }
      out(0x1aa,CONCAT11((char)uVar2,bVar1));
      uVar2 = fgetc((int)param_1,param_1._2_2_);
      bVar1 = *(byte *)((int)param_1 + 10) & 0x10;
      if (bVar1 == 0) {
        bVar1 = fgetc((int)param_1,param_1._2_2_,uVar2);
      }
      out(0x1a8,CONCAT11((char)uVar2,bVar1));
      iVar3 = in(0x1a4);
      uVar4 = iVar3 + 1U & 0x1ff;
      out(0x1a4,uVar4);
      if (uVar4 == 0) {
        iVar3 = in(0x1a6);
        out(0x1a6,iVar3 + 1);
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffe;
  }
  return uVar2;
}



// Function: armProbe @ 140e:2a18

void __cdecl16far armProbe(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  _aFchkstk();
  *(undefined2 *)(*(int *)0x23a0 + 0x404) = param_1;
  doPcomCmd(0x18);
  return;
}



// Function: getOffsets @ 1000:6b2e

undefined2 __cdecl16far
getOffsets(undefined2 param_1,double *param_2,double *param_3,double *param_4,double *param_5,
          double *param_6)

{
  int iVar1;
  undefined2 uVar2;
  code *pcVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  longdouble in_ST0;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  undefined2 local_18 [5];
  undefined2 uStack_e;
  undefined2 local_c;
  undefined2 *local_a;
  int iVar6;
  
  _aFchkstk();
  iVar6 = 1;
  *(undefined2 *)(*(int *)0x23a0 + 0x404) = param_1;
  local_a = (undefined2 *)0x18a2;
  uVar5 = 0x140e;
  local_c = 0x6b68;
  iVar4 = doPcomCmd();
  if (iVar4 == 1) {
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      iVar1 = iVar6 + 1;
      uVar2 = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2);
      iVar6 = iVar6 + 2;
      local_18[iVar4 * 2] = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar1 * 2);
      local_18[iVar4 * 2 + 1] = uVar2;
    }
    if (((double *)param_2 != (double *)0x0) || (param_2._2_2_ != 0)) {
      local_a = local_18;
      local_c = 0x140e;
      uVar5 = 0x1830;
      uStack_e = 0x6bfb;
      BCDtoDouble();
      pcVar3 = (code *)swi(0x39);
      (*pcVar3)();
      pcVar3 = (code *)swi(0x3d);
      (*pcVar3)();
      pcVar3 = (code *)swi(0x3c);
      (*pcVar3)();
      *(double *)param_2 = (double)in_ST0;
      pcVar3 = (code *)swi(0x3d);
      (*pcVar3)();
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
      in_ST3 = in_ST4;
    }
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      iVar1 = iVar6 + 1;
      uVar2 = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2);
      iVar6 = iVar6 + 2;
      local_18[iVar4 * 2] = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar1 * 2);
      local_18[iVar4 * 2 + 1] = uVar2;
    }
    if (((double *)param_3 != (double *)0x0) || (param_3._2_2_ != 0)) {
      local_a = local_18;
      uStack_e = 0x6c96;
      local_c = uVar5;
      BCDtoDouble();
      pcVar3 = (code *)swi(0x39);
      (*pcVar3)();
      pcVar3 = (code *)swi(0x3d);
      (*pcVar3)();
      pcVar3 = (code *)swi(0x3c);
      (*pcVar3)();
      *(double *)param_3 = (double)in_ST0;
      pcVar3 = (code *)swi(0x3d);
      (*pcVar3)();
      uVar5 = 0x1830;
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
    }
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      iVar1 = iVar6 + 1;
      uVar2 = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2);
      iVar6 = iVar6 + 2;
      local_18[iVar4 * 2] = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar1 * 2);
      local_18[iVar4 * 2 + 1] = uVar2;
    }
    if (((double *)param_4 != (double *)0x0) || (param_4._2_2_ != 0)) {
      local_a = local_18;
      uStack_e = 0x6d31;
      local_c = uVar5;
      BCDtoDouble();
      pcVar3 = (code *)swi(0x39);
      (*pcVar3)();
      pcVar3 = (code *)swi(0x3d);
      (*pcVar3)();
      pcVar3 = (code *)swi(0x3c);
      (*pcVar3)();
      *(double *)param_4 = (double)in_ST0;
      pcVar3 = (code *)swi(0x3d);
      (*pcVar3)();
      uVar5 = 0x1830;
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
    }
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      iVar1 = iVar6 + 1;
      uVar2 = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2);
      iVar6 = iVar6 + 2;
      local_18[iVar4 * 2] = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar1 * 2);
      local_18[iVar4 * 2 + 1] = uVar2;
    }
    if (((double *)param_5 != (double *)0x0) || (param_5._2_2_ != 0)) {
      local_a = local_18;
      uStack_e = 0x6dcc;
      local_c = uVar5;
      BCDtoDouble();
      pcVar3 = (code *)swi(0x39);
      (*pcVar3)();
      pcVar3 = (code *)swi(0x3d);
      (*pcVar3)();
      pcVar3 = (code *)swi(0x3c);
      (*pcVar3)();
      *(double *)param_5 = (double)in_ST0;
      pcVar3 = (code *)swi(0x3d);
      (*pcVar3)();
      uVar5 = 0x1830;
      in_ST0 = in_ST1;
    }
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      iVar1 = iVar6 + 1;
      uVar2 = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2);
      iVar6 = iVar6 + 2;
      local_18[iVar4 * 2] = *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar1 * 2);
      local_18[iVar4 * 2 + 1] = uVar2;
    }
    if (((double *)param_6 != (double *)0x0) || (param_6._2_2_ != 0)) {
      local_a = local_18;
      uStack_e = 0x6e67;
      local_c = uVar5;
      BCDtoDouble();
      pcVar3 = (code *)swi(0x39);
      (*pcVar3)();
      pcVar3 = (code *)swi(0x3d);
      (*pcVar3)();
      pcVar3 = (code *)swi(0x3c);
      (*pcVar3)();
      *(double *)param_6 = (double)in_ST0;
      pcVar3 = (code *)swi(0x3d);
      (*pcVar3)();
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// Function: setOffsets @ 1000:6e90

void __cdecl16far
setOffsets(undefined2 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8,int param_9,int param_10,int param_11)

{
  code *pcVar1;
  undefined2 uVar2;
  int unaff_DS;
  undefined2 local_18 [6];
  undefined2 local_c;
  undefined2 *local_a;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = 0x18a2;
  _aFchkstk();
  iVar4 = 1;
  *(undefined2 *)(*(int *)0x23a0 + 0x404) = param_1;
  iVar5 = iVar4;
  if ((param_2 == 0) && (param_3 == 0)) {
    for (iVar3 = 0; iVar4 = unaff_DS, iVar3 < 6; iVar3 = iVar3 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar5 * 2) = 0xffff;
      iVar5 = iVar5 + 1;
    }
  }
  else {
    local_a = local_18;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      local_c = local_18[iVar3 * 2];
      local_a = (undefined2 *)local_18[iVar3 * 2 + 1];
      iVar6 = iVar5 + 1;
      *(undefined2 *)(iRam000023b0 + 0x404 + iVar5 * 2) = local_18[iVar3 * 2 + 1];
      iVar5 = iVar5 + 2;
      *(undefined2 *)(iRam000023b0 + 0x404 + iVar6 * 2) = local_c;
    }
  }
  iVar3 = iVar5;
  if ((param_4 == 0) && (param_5 == 0)) {
    for (iVar6 = 0; iVar5 = iVar4, iVar6 < 6; iVar6 = iVar6 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar3 * 2) = 0xffff;
      iVar3 = iVar3 + 1;
    }
  }
  else {
    local_a = local_18;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      local_c = local_18[iVar4 * 2];
      local_a = (undefined2 *)local_18[iVar4 * 2 + 1];
      iVar6 = iVar3 + 1;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar3 * 2) = local_18[iVar4 * 2 + 1];
      iVar3 = iVar3 + 2;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2) = local_c;
    }
  }
  iVar4 = iVar3;
  if ((param_6 == 0) && (param_7 == 0)) {
    for (iVar6 = 0; iVar3 = iVar5, iVar6 < 6; iVar6 = iVar6 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar4 * 2) = 0xffff;
      iVar4 = iVar4 + 1;
    }
  }
  else {
    local_a = local_18;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
      local_c = local_18[iVar5 * 2];
      local_a = (undefined2 *)local_18[iVar5 * 2 + 1];
      iVar6 = iVar4 + 1;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar4 * 2) = local_18[iVar5 * 2 + 1];
      iVar4 = iVar4 + 2;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2) = local_c;
    }
  }
  iVar5 = iVar4;
  if ((param_8 == 0) && (param_9 == 0)) {
    for (iVar6 = 0; iVar4 = iVar3, iVar6 < 6; iVar6 = iVar6 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar5 * 2) = 0xffff;
      iVar5 = iVar5 + 1;
    }
  }
  else {
    local_a = local_18;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      local_c = local_18[iVar3 * 2];
      local_a = (undefined2 *)local_18[iVar3 * 2 + 1];
      iVar6 = iVar5 + 1;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar5 * 2) = local_18[iVar3 * 2 + 1];
      iVar5 = iVar5 + 2;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2) = local_c;
    }
  }
  if ((param_10 == 0) && (param_11 == 0)) {
    for (iVar3 = 0; iVar3 < 6; iVar3 = iVar3 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar5 * 2) = 0xffff;
      iVar5 = iVar5 + 1;
    }
  }
  else {
    local_a = local_18;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    iVar4 = iVar5;
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      local_c = local_18[iVar3 * 2];
      local_a = (undefined2 *)local_18[iVar3 * 2 + 1];
      iVar6 = iVar4 + 1;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar4 * 2) = local_18[iVar3 * 2 + 1];
      iVar4 = iVar4 + 2;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2) = local_c;
    }
  }
  local_c = 0x72ee;
  local_a = (undefined2 *)uVar2;
  doPcomCmd();
  return;
}



// Function: getPreviewBlk @ 1000:72fa

undefined2 __cdecl16far getPreviewBlk(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int *piVar7;
  undefined2 unaff_DS;
  longdouble in_ST0;
  longdouble lVar8;
  longdouble lVar9;
  longdouble lVar10;
  longdouble lVar11;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  longdouble in_ST4;
  longdouble in_ST5;
  longdouble in_ST6;
  longdouble in_ST7;
  undefined2 local_ec [6];
  uint local_e0;
  int local_de [4];
  int local_d6;
  undefined2 local_d4;
  int local_d2;
  undefined2 local_d0 [7];
  undefined2 auStack_c2 [6];
  undefined2 auStack_b6 [6];
  undefined2 auStack_aa [6];
  undefined2 auStack_9e [6];
  undefined2 auStack_92 [6];
  undefined2 auStack_86 [6];
  undefined2 auStack_7a [6];
  undefined2 auStack_6e [6];
  undefined2 auStack_62 [6];
  undefined2 auStack_56 [6];
  undefined2 auStack_4a [6];
  undefined2 local_3e;
  undefined1 local_3c [46];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 *puStack_a;
  
  _aFchkstk();
  puStack_a = (undefined2 *)0x18a2;
  uStack_c = 0x7310;
  iVar3 = doPcomCmd();
  if ((iVar3 == 1) && (*param_1 = *(int *)(*(int *)0x23a0 + 0x200), *param_1 < 0)) {
    for (local_e0 = 0; (int)local_e0 < 0x6c; local_e0 = local_e0 + 1) {
      local_de[local_e0] = *(int *)(*(int *)0x23a0 + 0x200 + local_e0 * 2);
    }
    uVar6 = (undefined2)((ulong)param_1 >> 0x10);
    piVar7 = (int *)param_1;
    piVar7[1] = local_de[1];
    piVar7[2] = local_de[2];
    puStack_a = (undefined2 *)local_de[3];
    uStack_c = 0x140e;
    uStack_e = 0x73ac;
    iVar3 = long68();
    piVar7[3] = iVar3;
    piVar7[4] = local_d6;
    puStack_a = (undefined2 *)local_d4;
    uStack_c = 0x13e1;
    uStack_e = 0x73c9;
    iVar3 = long68();
    piVar7[5] = iVar3;
    piVar7[6] = local_d2;
    for (local_e0 = 0; (int)local_e0 < 3; local_e0 = local_e0 + 1) {
      puStack_a = (undefined2 *)local_d0[local_e0 * 2];
      uVar6 = local_d0[local_e0 * 2 + 1];
      uStack_c = 0x13e1;
      uStack_e = 0x73fa;
      uVar4 = long68();
      uVar2 = local_e0;
      local_ec[local_e0 * 2] = uVar4;
      local_ec[uVar2 * 2 + 1] = uVar6;
    }
    puStack_a = local_ec;
    uStack_c = 0x13e1;
    uVar6 = 0x1830;
    uStack_e = 0x742c;
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)(piVar7 + 7) = (double)in_ST0;
    pcVar1 = (code *)swi(0x3d);
    lVar8 = in_ST7;
    (*pcVar1)();
    for (local_e0 = 0; (int)local_e0 < 3; local_e0 = local_e0 + 1) {
      uVar4 = auStack_c2[local_e0 * 2];
      uVar6 = 0x13e1;
      uVar5 = long68();
      uVar2 = local_e0;
      local_ec[local_e0 * 2] = uVar5;
      local_ec[uVar2 * 2 + 1] = uVar4;
    }
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    iVar3 = 0x7495;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)(iVar3 + 0x16) = (double)in_ST1;
    pcVar1 = (code *)swi(0x3d);
    lVar9 = lVar8;
    (*pcVar1)();
    for (local_e0 = 0; (int)local_e0 < 3; local_e0 = local_e0 + 1) {
      uVar4 = auStack_b6[local_e0 * 2];
      uVar5 = long68();
      uVar2 = local_e0;
      local_ec[local_e0 * 2] = uVar5;
      local_ec[uVar2 * 2 + 1] = uVar4;
    }
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    iVar3 = 0x7495;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)(iVar3 + 0x1e) = (double)in_ST2;
    pcVar1 = (code *)swi(0x3d);
    lVar10 = lVar9;
    (*pcVar1)();
    for (local_e0 = 0; (int)local_e0 < 3; local_e0 = local_e0 + 1) {
      uVar4 = auStack_aa[local_e0 * 2];
      uVar5 = long68();
      uVar2 = local_e0;
      local_ec[local_e0 * 2] = uVar5;
      local_ec[uVar2 * 2 + 1] = uVar4;
    }
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    iVar3 = 0x7495;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)(iVar3 + 0x26) = (double)in_ST3;
    pcVar1 = (code *)swi(0x3d);
    lVar11 = lVar10;
    (*pcVar1)();
    for (local_e0 = 0; (int)local_e0 < 3; local_e0 = local_e0 + 1) {
      uVar4 = auStack_9e[local_e0 * 2];
      uVar5 = long68();
      uVar2 = local_e0;
      local_ec[local_e0 * 2] = uVar5;
      local_ec[uVar2 * 2 + 1] = uVar4;
    }
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    iVar3 = 0x7495;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)(iVar3 + 0x2e) = (double)in_ST4;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    for (local_e0 = 0; (int)local_e0 < 3; local_e0 = local_e0 + 1) {
      uVar4 = auStack_92[local_e0 * 2];
      uVar5 = long68();
      uVar2 = local_e0;
      local_ec[local_e0 * 2] = uVar5;
      local_ec[uVar2 * 2 + 1] = uVar4;
    }
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    iVar3 = 0x7495;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)(iVar3 + 0x36) = (double)in_ST5;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    for (local_e0 = 0; (int)local_e0 < 3; local_e0 = local_e0 + 1) {
      uVar4 = auStack_86[local_e0 * 2];
      uVar5 = long68();
      uVar2 = local_e0;
      local_ec[local_e0 * 2] = uVar5;
      local_ec[uVar2 * 2 + 1] = uVar4;
    }
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    iVar3 = 0x7495;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)(iVar3 + 0x3e) = (double)in_ST6;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    for (local_e0 = 0; (int)local_e0 < 3; local_e0 = local_e0 + 1) {
      uVar4 = auStack_7a[local_e0 * 2];
      uVar5 = long68();
      uVar2 = local_e0;
      local_ec[local_e0 * 2] = uVar5;
      local_ec[uVar2 * 2 + 1] = uVar4;
    }
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    iVar3 = 0x7495;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)(iVar3 + 0x46) = (double)in_ST7;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    for (local_e0 = 0; (int)local_e0 < 3; local_e0 = local_e0 + 1) {
      uVar4 = auStack_6e[local_e0 * 2];
      uVar5 = long68();
      uVar2 = local_e0;
      local_ec[local_e0 * 2] = uVar5;
      local_ec[uVar2 * 2 + 1] = uVar4;
    }
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    iVar3 = 0x7495;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)(iVar3 + 0x4e) = (double)lVar8;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    for (local_e0 = 0; (int)local_e0 < 3; local_e0 = local_e0 + 1) {
      uVar4 = auStack_62[local_e0 * 2];
      uVar5 = long68();
      uVar2 = local_e0;
      local_ec[local_e0 * 2] = uVar5;
      local_ec[uVar2 * 2 + 1] = uVar4;
    }
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    iVar3 = 0x7495;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)(iVar3 + 0x56) = (double)lVar9;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    for (local_e0 = 0; (int)local_e0 < 3; local_e0 = local_e0 + 1) {
      uVar4 = auStack_56[local_e0 * 2];
      uVar5 = long68();
      uVar2 = local_e0;
      local_ec[local_e0 * 2] = uVar5;
      local_ec[uVar2 * 2 + 1] = uVar4;
    }
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    iVar3 = 0x7495;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)(iVar3 + 0x5e) = (double)lVar10;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    for (local_e0 = 0; (int)local_e0 < 3; local_e0 = local_e0 + 1) {
      uVar4 = auStack_4a[local_e0 * 2];
      uVar5 = long68();
      uVar2 = local_e0;
      local_ec[local_e0 * 2] = uVar5;
      local_ec[uVar2 * 2 + 1] = uVar4;
    }
    BCDtoDouble();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    iVar3 = 0x7495;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    *(double *)(iVar3 + 0x66) = (double)lVar11;
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar4 = long68();
    *(undefined2 *)0x7503 = uVar4;
    *(undefined2 *)0x7505 = local_3e;
    for (local_e0 = 0; local_e0 < 0x38; local_e0 = local_e0 + 2) {
      *(undefined1 *)(local_e0 + 0x7508) = local_3c[local_e0];
      *(undefined1 *)(local_e0 + 0x7507) = local_3c[local_e0 + 1];
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// Function: doFind @ 1000:795e

void __cdecl16far doFind(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  _aFchkstk();
  *(undefined2 *)(*(int *)0x23a0 + 0x404) = param_1;
  uVar3 = long68(param_2,param_3);
  iVar1 = *(int *)0x23a0;
  uVar2 = *(undefined2 *)0x239e;
  *(undefined2 *)(iVar1 + 0x406) = uVar3;
  *(undefined2 *)(iVar1 + 0x408) = param_3;
  doPcomCmd(0x1d);
  return;
}



// Function: setCoolant @ 1000:79bc

void __cdecl16far setCoolant(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  _aFchkstk();
  *(undefined2 *)(*(int *)0x23a0 + 0x404) = param_1;
  doPcomCmd(0x20);
  return;
}



// Function: setBreakPoint @ 1000:79f2

void __cdecl16far setBreakPoint(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  _aFchkstk();
  uVar3 = long68(param_1,param_2);
  iVar1 = *(int *)0x23a0;
  uVar2 = *(undefined2 *)0x239e;
  *(undefined2 *)(iVar1 + 0x404) = uVar3;
  *(undefined2 *)(iVar1 + 0x406) = param_2;
  doPcomCmd(0x21);
  return;
}



// Function: setDryRunMaxF @ 1000:7a3a

void __cdecl16far setDryRunMaxF(int param_1)

{
  _aFchkstk();
  if (param_1 == 1) {
    setFlags(0);
  }
  else {
    clrFlags(0);
  }
  return;
}



// Function: setDryRunNoZ @ 1000:7a92

void __cdecl16far setDryRunNoZ(int param_1)

{
  _aFchkstk();
  if (param_1 == 1) {
    setFlags(0);
  }
  else {
    clrFlags(0);
  }
  return;
}



// Function: setSlashDel @ 1000:7aea

void __cdecl16far setSlashDel(int param_1)

{
  _aFchkstk();
  if (param_1 == 1) {
    setFlags(1);
  }
  else {
    clrFlags(1);
  }
  return;
}



// Function: setOptStop @ 1000:7b42

void __cdecl16far setOptStop(int param_1)

{
  _aFchkstk();
  if (param_1 == 1) {
    setFlags(2);
  }
  else {
    clrFlags(2);
  }
  return;
}



// Function: setBOSS4mode @ 1000:7b9a

void __cdecl16far setBOSS4mode(int param_1)

{
  _aFchkstk();
  if (param_1 == 1) {
    setFlags(4);
  }
  else {
    clrFlags(4);
  }
  return;
}



// Function: probePoint @ 1000:7bf2

void __cdecl16far
probePoint(undefined2 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8,int param_9)

{
  code *pcVar1;
  undefined2 uVar2;
  int unaff_DS;
  undefined2 local_14 [4];
  undefined2 uStack_c;
  undefined2 *puStack_a;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  _aFchkstk();
  puStack_a = (undefined2 *)0x18a2;
  uVar2 = 0x140e;
  uStack_c = 0x7c0d;
  armProbe();
  iVar4 = 1;
  *(undefined2 *)(*(int *)0x23a0 + 0x404) = param_1;
  iVar5 = iVar4;
  if ((param_2 == 0) && (param_3 == 0)) {
    for (iVar3 = 0; iVar4 = unaff_DS, iVar3 < 6; iVar3 = iVar3 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar5 * 2) = 0xffff;
      iVar5 = iVar5 + 1;
    }
  }
  else {
    puStack_a = local_14;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      iVar6 = iVar5 + 1;
      *(undefined2 *)(iRam000023b0 + 0x404 + iVar5 * 2) = local_14[iVar3 * 2 + 1];
      iVar5 = iVar5 + 2;
      *(undefined2 *)(iRam000023b0 + 0x404 + iVar6 * 2) = local_14[iVar3 * 2];
    }
  }
  iVar3 = iVar5;
  if ((param_4 == 0) && (param_5 == 0)) {
    for (iVar6 = 0; iVar5 = iVar4, iVar6 < 6; iVar6 = iVar6 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar3 * 2) = 0xffff;
      iVar3 = iVar3 + 1;
    }
  }
  else {
    puStack_a = local_14;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      iVar6 = iVar3 + 1;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar3 * 2) = local_14[iVar4 * 2 + 1];
      iVar3 = iVar3 + 2;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2) = local_14[iVar4 * 2];
    }
  }
  iVar4 = iVar3;
  if ((param_6 == 0) && (param_7 == 0)) {
    for (iVar6 = 0; iVar3 = iVar5, iVar6 < 6; iVar6 = iVar6 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar4 * 2) = 0xffff;
      iVar4 = iVar4 + 1;
    }
  }
  else {
    puStack_a = local_14;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
      iVar6 = iVar4 + 1;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar4 * 2) = local_14[iVar5 * 2 + 1];
      iVar4 = iVar4 + 2;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2) = local_14[iVar5 * 2];
    }
  }
  if ((param_8 == 0) && (param_9 == 0)) {
    for (iVar5 = 0; iVar5 < 6; iVar5 = iVar5 + 1) {
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar4 * 2) = 0xffff;
      iVar4 = iVar4 + 1;
    }
  }
  else {
    puStack_a = local_14;
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    uVar2 = 0x1830;
    doubleToBCD();
    iVar5 = iVar4;
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      iVar6 = iVar5 + 1;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar5 * 2) = local_14[iVar3 * 2 + 1];
      iVar5 = iVar5 + 2;
      *(undefined2 *)(*(int *)0x23a0 + 0x404 + iVar6 * 2) = local_14[iVar3 * 2];
    }
  }
  uStack_c = 0x7f98;
  puStack_a = (undefined2 *)uVar2;
  doPcomCmd();
  return;
}



// Function: wrDNCpgmBlk @ 1000:7fa4

undefined2 __cdecl16far wrDNCpgmBlk(undefined4 param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  byte local_20e [504];
  undefined2 uStack_16;
  undefined2 uStack_14;
  byte *pbStack_12;
  int local_e;
  int local_c;
  undefined2 local_a;
  byte *local_8;
  
  _aFchkstk();
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(byte *)((int)param_1 + 10) & 0x10) == 0) {
    pbStack_12 = local_20e;
    uStack_14 = 0x18a2;
    uStack_16 = 0x7fdf;
    local_e = fread();
    if ((local_e == 0x200) || ((*(byte *)((int)param_1 + 10) & 0x20) == 0)) {
      _local_8 = (byte *)CONCAT22(unaff_SS,local_20e);
      local_c = 0;
      if (local_e != 0) {
        for (; pbVar2 = _local_8, 1 < local_e; local_e = local_e + -2) {
          uVar4 = (undefined2)((ulong)_local_8 >> 0x10);
          pbVar1 = local_8 + 1;
          _local_8 = (byte *)CONCAT22(uVar4,local_8 + 2);
          local_a = CONCAT11(*pbVar2,*pbVar1);
          *(undefined2 *)(*(int *)0x23a0 + 0x200 + local_c * 2) = local_a;
          local_c = local_c + 1;
        }
      }
      if (local_e != 0) {
        local_a = (uint)*_local_8 << 8;
        *(int *)(*(int *)0x23a0 + 0x200 + local_c * 2) = local_a;
        local_c = local_c + 1;
      }
      if (local_c < 0x200) {
        *(undefined2 *)(*(int *)0x23a0 + 0x200 + local_c * 2) = 0x80;
      }
      iVar3 = doPcomCmd();
      if (iVar3 == 0) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0xfffe;
    }
  }
  else {
    *(undefined2 *)(*(int *)0x23a0 + 0x200) = 0xa0a;
    *(undefined2 *)(*(int *)0x23a0 + 0x202) = 0x8000;
    iVar3 = doPcomCmd();
    if (iVar3 == 0) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = 0xfffd;
    }
  }
  return uVar4;
}



// Function: setGuardsOff @ 1000:8142

void __cdecl16far setGuardsOff(int param_1)

{
  _aFchkstk();
  if (param_1 == 1) {
    setFlags(0);
  }
  else {
    clrFlags(0);
  }
  return;
}



// Function: installParams @ 1000:819a

void __cdecl16far installParams(void)

{
  _aFchkstk();
  doPcomCmd(0x24);
  return;
}



// Function: rdSpindleGear @ 1000:81bc

undefined2 __cdecl16far rdSpindleGear(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  _aFchkstk();
  uVar2 = *(undefined2 *)(*(int *)0x23a0 + 0x6fa);
  uVar1 = long68(*(undefined2 *)(*(int *)0x23a0 + 0x6f8),uVar2);
  *param_1 = uVar1;
  ((undefined2 *)param_1)[1] = uVar2;
  return 1;
}



// Function: doPcomCmd @ 140e:411e

bool __cdecl16far doPcomCmd(uint param_1)

{
  int iVar1;
  int iVar2;
  int unaff_DI;
  undefined2 unaff_DS;
  uint uVar3;
  
  _aFchkstk();
  *(uint *)(*(int *)0x23a0 + 0x400) = param_1 & 0x7fff | 0x8000;
  setTimeout(0x6e,&stack0xfff8);
  do {
    iVar2 = unaff_DI;
    iVar1 = timeout();
    if (iVar1 != 0) {
      return false;
    }
  } while (iVar2 < 0);
  setTimeout(0x157c,&stack0xfff8);
  do {
    uVar3 = 0x13e1;
    iVar2 = timeout(unaff_DI);
    if (iVar2 != 0) {
      return false;
    }
  } while ((uVar3 & 1) == 1);
  return (uVar3 >> 1 & 1) != 1;
}



// Function: doubleToBCD @ 1830:000a

uint doubleToBCD(void)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char *in_stack_00000008;
  undefined2 in_stack_0000000a;
  uint *puStack000c;
  undefined2 uStack000e;
  undefined1 auStack_28 [14];
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined1 *puStack_16;
  char *pcStack_a;
  undefined2 uVar4;
  int iVar5;
  
  _aFchkstk();
  iVar5 = 0;
  while( true ) {
    if (2 < iVar5) break;
    puStack000c[iVar5 * 2] = 0;
    (puStack000c + iVar5 * 2)[1] = 0;
    iVar5 = iVar5 + 1;
  }
  _pcStack_a = (char *)CONCAT22(in_stack_0000000a,in_stack_00000008);
  puStack_16 = auStack_28;
  uStack_18 = 0x18a2;
  uStack_1a = 0x8372;
  sprintf();
  if (*_pcStack_a == '-') {
    puStack000c[1] = puStack000c[1] & 0x7fff | 0x8000;
    _pcStack_a = (char *)CONCAT22(in_stack_0000000a,in_stack_00000008 + 1);
  }
  else if (*_pcStack_a == '+') {
    _pcStack_a = (char *)CONCAT22(in_stack_0000000a,in_stack_00000008 + 1);
  }
  pcVar2 = _pcStack_a;
  pcVar1 = pcStack_a;
  uVar4 = (undefined2)((ulong)_pcStack_a >> 0x10);
  *_puStack000c = *_puStack000c & 0xfff0 | (int)*pcVar2 - 0x30U & 0xf;
  puStack000c[3] = puStack000c[3] & 0xfff | (int)pcStack_a[2] << 0xc;
  puStack000c[3] = puStack000c[3] & 0xf0ff | ((int)pcStack_a[3] - 0x30U & 0xf) << 8;
  puStack000c[3] = puStack000c[3] & 0xff0f | ((int)pcStack_a[4] - 0x30U & 0xf) << 4;
  puStack000c[3] = puStack000c[3] & 0xfff0 | (int)pcStack_a[5] - 0x30U & 0xf;
  puStack000c[2] = puStack000c[2] & 0xfff | (int)pcStack_a[6] << 0xc;
  puStack000c[2] = puStack000c[2] & 0xf0ff | ((int)pcStack_a[7] - 0x30U & 0xf) << 8;
  puStack000c[2] = puStack000c[2] & 0xff0f | ((int)pcStack_a[8] - 0x30U & 0xf) << 4;
  puStack000c[2] = puStack000c[2] & 0xfff0 | (int)pcStack_a[9] - 0x30U & 0xf;
  puStack000c[5] = puStack000c[5] & 0xfff | (int)pcStack_a[10] << 0xc;
  puStack000c[5] = puStack000c[5] & 0xf0ff | ((int)pcStack_a[0xb] - 0x30U & 0xf) << 8;
  puStack000c[5] = puStack000c[5] & 0xff0f | ((int)pcStack_a[0xc] - 0x30U & 0xf) << 4;
  puStack000c[5] = puStack000c[5] & 0xfff0 | (int)pcStack_a[0xd] - 0x30U & 0xf;
  puStack000c[4] = puStack000c[4] & 0xfff | (int)pcStack_a[0xe] << 0xc;
  puStack000c[4] = puStack000c[4] & 0xf0ff | ((int)pcStack_a[0xf] - 0x30U & 0xf) << 8;
  puStack000c[4] = puStack000c[4] & 0xff0f | ((int)pcStack_a[0x10] - 0x30U & 0xf) << 4;
  puStack000c[4] = puStack000c[4] & 0xfff0 | (int)pcStack_a[0x11] - 0x30U & 0xf;
  _pcStack_a = (char *)CONCAT22(uVar4,pcStack_a + 0x13);
  if (*_pcStack_a == '-') {
    puStack000c[1] = puStack000c[1] & 0xbfff | 0x4000;
    _pcStack_a = (char *)CONCAT22(uVar4,pcVar1 + 0x14);
  }
  else if (*_pcStack_a == '+') {
    _pcStack_a = (char *)CONCAT22(uVar4,pcVar1 + 0x14);
  }
  pcVar2 = _pcStack_a;
  uVar4 = (undefined2)((ulong)_pcStack_a >> 0x10);
  puStack000c[1] = puStack000c[1] & 0xf0ff | ((int)*pcVar2 - 0x30U & 0xf) << 8;
  puStack000c[1] = puStack000c[1] & 0xff0f | ((int)pcStack_a[1] - 0x30U & 0xf) << 4;
  uVar3 = puStack000c[1] & 0xfff0 | (int)pcStack_a[2] - 0x30U & 0xf;
  puStack000c[1] = uVar3;
  return uVar3;
}



// Function: BCDtoDouble @ 1830:04fe

undefined2 __cdecl16far BCDtoDouble(undefined2 *param_1)

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined1 local_22;
  char local_21;
  undefined1 local_20;
  char local_1f;
  char local_1e;
  char local_1d;
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  char local_18;
  char local_17;
  undefined2 local_16;
  undefined2 local_14;
  undefined1 *local_12;
  
  _aFchkstk();
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (undefined2 *)param_1;
  if ((int)puVar2[1] < 0) {
    local_22 = 0x2d;
  }
  else {
    local_22 = 0x20;
  }
  local_21 = ((byte)*param_1 & 0xf) + 0x30;
  local_20 = 0x2e;
  local_1f = (byte)((uint)puVar2[3] >> 0xc) + 0x30;
  local_1e = ((byte)((uint)puVar2[3] >> 8) & 0xf) + 0x30;
  local_1d = ((byte)((uint)puVar2[3] >> 4) & 0xf) + 0x30;
  local_1c = ((byte)puVar2[3] & 0xf) + 0x30;
  local_1b = (byte)((uint)puVar2[2] >> 0xc) + 0x30;
  local_1a = ((byte)((uint)puVar2[2] >> 8) & 0xf) + 0x30;
  local_19 = ((byte)((uint)puVar2[2] >> 4) & 0xf) + 0x30;
  local_18 = ((byte)puVar2[2] & 0xf) + 0x30;
  local_17 = (byte)((uint)puVar2[5] >> 0xc) + 0x30;
  local_12 = &local_22;
  local_14 = 0x18a2;
  local_16 = 0x8a09;
  sscanf();
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  return 0x23e0;
}



// Function: _astart @ 18a2:0016

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: This function may have set the stack pointer */

void __cdecl16far _astart(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined2 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  undefined2 uVar14;
  
  uVar14 = 0x18a2;
  puVar6 = (undefined1 *)0x1400;
  pcVar3 = (code *)swi(0x21);
  uVar4 = (*pcVar3)();
  if ((byte)uVar4 < 2) {
    *(undefined2 *)(puVar6 + -2) = unaff_ES;
    *(undefined2 *)(puVar6 + -4) = 0;
    return;
  }
  uVar12 = *(int *)0x2 + 0xe020;
  if (0xfff < uVar12) {
    uVar12 = 0x1000;
  }
  puVar7 = puVar6 + 0x371e;
  puVar13 = puVar6 + 0x371e;
  if ((undefined1 *)0xc8e1 < puVar6) {
    *(undefined2 *)(puVar6 + 0x371c) = 0x1fe0;
    unaff_DS = *(undefined2 *)(puVar6 + 0x371c);
    *(undefined2 *)(puVar6 + 0x371c) = 0x18a2;
    *(undefined2 *)(puVar6 + 0x371a) = 0x8a65;
    _FF_MSGBANNER();
    *(undefined2 *)(puVar6 + 0x371c) = 0;
    *(undefined2 *)(puVar6 + 0x371a) = 0x18a2;
    *(undefined2 *)(puVar6 + 0x3718) = 0x8a6c;
    _NMSG_WRITE();
    pcVar3 = (code *)swi(0x21);
    uVar4 = (*pcVar3)();
    puVar13 = puVar7;
  }
  _osminor = CONCAT11((char)uVar4,(char)((uint)uVar4 >> 8));
  _asizds = uVar12 * 0x10 + -1;
  _nheap_desc = 0x1fe0;
  puVar8 = (undefined1 *)((uint)puVar13 & 0xfffe);
  DAT_1fe0_23be = puVar8 + -2;
  DAT_1fe0_23b8 = puVar8;
  _osversion = uVar4;
  *(undefined2 *)(puVar8 + -2) = 0xfffe;
  puVar9 = puVar8 + -4;
  DAT_1fe0_23ba = puVar8 + -4;
  DAT_1fe0_23bc = puVar8 + -4;
  _atopsp = puVar8 + -4;
  *(undefined2 *)(puVar8 + -4) = 1;
  *(int *)0x2 = uVar12 + 0x1fe0;
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  _psp = unaff_DS;
  *(undefined2 *)(puVar9 + -2) = 0x1fe0;
  uVar4 = *(undefined2 *)(puVar9 + -2);
  puVar13 = (undefined1 *)0x2afe;
  for (iVar5 = 0xc22; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar13;
    puVar13 = puVar13 + 1;
    *puVar1 = 0;
  }
  *(undefined2 *)(puVar9 + -2) = 0x1fe0;
  pcVar2 = (code *)*(int *)0x2916;
  if (pcVar2 != (code *)0x0) {
    uVar14 = 0x1000;
    puVar10 = (undefined2 *)(puVar9 + -2);
    puVar9 = puVar9 + -2;
    *puVar10 = 0x8ad9;
    (*pcVar2)();
  }
  *(undefined2 *)(puVar9 + -2) = uVar14;
  *(undefined2 *)(puVar9 + -4) = 0x8ade;
  _setenvp();
  *(undefined2 *)(puVar9 + -2) = 0x18a2;
  puVar11 = puVar9 + -4;
  *(undefined2 *)(puVar9 + -4) = 0x8ae3;
  _setargv();
  *(undefined2 *)(puVar11 + -2) = 0x18a2;
  *(undefined2 *)(puVar11 + -4) = 0x8aea;
  _cinit();
  *(undefined2 *)(puVar11 + -2) = 0x1fe0;
  uVar14 = *(undefined2 *)(puVar11 + -2);
  *(undefined2 *)(puVar11 + -2) = *(undefined2 *)0x2418;
  *(undefined2 *)(puVar11 + -4) = *(undefined2 *)0x2416;
  *(undefined2 *)(puVar11 + -6) = *(undefined2 *)0x2414;
  *(undefined2 *)(puVar11 + -8) = *(undefined2 *)0x2412;
  *(undefined2 *)(puVar11 + -10) = *(undefined2 *)0x2410;
  *(undefined2 *)(puVar11 + -0xc) = 0x18a2;
  *(undefined2 *)(puVar11 + -0xe) = 0x8b05;
  uVar14 = switchD_1000:a40d::main();
  *(undefined2 *)(puVar11 + -0xc) = uVar14;
  *(undefined2 *)(puVar11 + -0xe) = 0x1000;
  *(undefined2 *)(puVar11 + -0x10) = 0x8b0a;
  exit();
  return;
}



// Function: _amsg_exit @ 18a2:00fa

void __cdecl16far _amsg_exit(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined2 in_AX;
  int in_CX;
  int iVar5;
  uint extraout_DX;
  undefined2 uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined2 unaff_ES;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 uVar11;
  bool bVar12;
  char cVar13;
  
  uVar11 = uRam00010126;
  uVar10 = 0x18a2;
  uVar6 = uRam00010126;
  _farstub();
  _FF_MSGBANNER();
  _NMSG_WRITE(in_AX);
  cVar13 = *(int *)0x2918 == -0x292a;
  if ((bool)cVar13) {
    uVar10 = 0x1000;
    (*(code *)*(undefined2 *)0x291c)();
  }
  (*(code *)*(undefined2 *)0x23b0)(uVar10,0xff);
  if (in_CX == 1 || cVar13 != '\0') {
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    *(undefined2 *)0x23dc = uVar6;
    *(undefined2 *)0x23de = unaff_ES;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    uVar11 = unaff_SS;
    if (*(int *)0x2928 == 0) goto LAB_18a2_0170;
  }
  bVar12 = false;
  (*(code *)*(undefined2 *)0x2926)(0x1000);
  if (bVar12) {
    _fptrap();
    return;
  }
  (*(code *)*(undefined2 *)0x2926)(0x1000);
LAB_18a2_0170:
  iVar7 = *(int *)0x2c;
  uVar10 = uVar11;
  if (iVar7 != 0) {
    pbVar9 = (byte *)0x0;
    do {
      if (*pbVar9 == 0) break;
      iVar5 = 0xd;
      pbVar8 = (byte *)0x23ce;
      bVar12 = false;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar3 = pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar1 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar12 = *pbVar1 == *pbVar3;
      } while (bVar12);
      if (bVar12) {
        pbVar8 = (byte *)0x23fc;
        goto LAB_18a2_01a5;
      }
      iVar5 = 0x7fff;
      bVar12 = true;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar12 = *pbVar1 == 0;
      } while (!bVar12);
    } while (bVar12);
  }
LAB_18a2_01b9:
  iVar7 = 4;
  do {
    bVar12 = false;
    *(byte *)(iVar7 + 0x23fc) = *(byte *)(iVar7 + 0x23fc) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar12) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar7 + 0x23fc) = *(byte *)(iVar7 + 0x23fc) | 0x40;
    }
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  FUN_18a2_0291();
  FUN_18a2_0291();
  FUN_18a2_0291();
  return;
LAB_18a2_01a5:
  pbVar1 = pbVar9;
  pbVar2 = pbVar9 + 1;
  uVar10 = unaff_SS;
  if (*pbVar1 < 0x41) goto LAB_18a2_01b9;
  pbVar9 = pbVar9 + 2;
  if (*pbVar2 < 0x41) goto LAB_18a2_01b9;
  pbVar3 = pbVar8;
  pbVar8 = pbVar8 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_18a2_01a5;
}



// Function: _cinit @ 18a2:0128

void __cdecl16far _cinit(void)

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
  *(undefined2 *)0x23dc = in_BX;
  *(undefined2 *)0x23de = unaff_ES;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  if (*(int *)0x2928 != 0) {
    bVar9 = false;
    (*(code *)*(undefined2 *)0x2926)();
    if (bVar9) {
      _fptrap();
      return;
    }
    (*(code *)*(undefined2 *)0x2926)();
  }
  iVar6 = *(int *)0x2c;
  if (iVar6 != 0) {
    pbVar8 = (byte *)0x0;
    do {
      if (*pbVar8 == 0) break;
      iVar5 = 0xd;
      pbVar7 = (byte *)0x23ce;
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
        pbVar7 = (byte *)0x23fc;
        goto LAB_18a2_01a5;
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
LAB_18a2_01b9:
  iVar6 = 4;
  do {
    bVar9 = false;
    *(byte *)(iVar6 + 0x23fc) = *(byte *)(iVar6 + 0x23fc) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar9) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar6 + 0x23fc) = *(byte *)(iVar6 + 0x23fc) | 0x40;
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  FUN_18a2_0291();
  FUN_18a2_0291();
  FUN_18a2_0291();
  return;
LAB_18a2_01a5:
  pbVar1 = pbVar8;
  pbVar2 = pbVar8 + 1;
  if (*pbVar1 < 0x41) goto LAB_18a2_01b9;
  pbVar8 = pbVar8 + 2;
  if (*pbVar2 < 0x41) goto LAB_18a2_01b9;
  pbVar3 = pbVar7;
  pbVar7 = pbVar7 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_18a2_01a5;
}



// Function: exit @ 18a2:01f1

void __cdecl16far exit(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x2427 = 0;
  FUN_18a2_0291();
  FUN_18a2_0291();
  if (*(int *)0x2918 == -0x292a) {
    (*(code *)*(undefined2 *)0x291e)();
  }
  FUN_18a2_0291();
  FUN_18a2_0291();
  _nullcheck();
  _ctermsub();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// Function: _ctermsub @ 18a2:0278

void __cdecl16near _ctermsub(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x2928 != 0) {
    (*(code *)*(undefined2 *)0x2926)(0x18a2);
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// Function: FUN_18a2_0291 @ 18a2:0291

void __cdecl16near FUN_18a2_0291(void)

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
      (*(code *)*piVar2)(0x18a2);
    }
  }
  return;
}



// Function: _aFchkstk @ 18a2:02a4

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16far _aFchkstk(void)

{
  int iVar1;
  undefined1 *in_AX;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  undefined2 in_stack_00000002;
  
  iVar1 = -(int)in_AX;
  if ((in_AX <= &stack0x0004) && ((undefined1 *)*(uint *)0x242c <= &stack0x0004 + iVar1)) {
    *(undefined2 *)(&stack0x0002 + iVar1) = in_stack_00000002;
    *(undefined2 *)(&stack0x0000 + iVar1) = in_stack_00000000;
    return;
  }
  if (*(int *)0x2428 == -1) {
    _amsg_exit();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)0x2428)();
  return;
}



// Function: fclose @ 18a2:02c8

undefined2 __cdecl16far fclose(int param_1)

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
  if ((*(byte *)(param_1 + 10) & 0x83) == 0) goto LAB_18a2_038a;
  uVar2 = _flush(param_1);
  local_4 = *(int *)(param_1 + 0xf4);
  _freebuf(param_1);
  iVar1 = _close(0x18a2,*(undefined1 *)(param_1 + 0xb));
  if (-1 < iVar1) {
    if (local_4 == 0) goto LAB_18a2_038a;
    strcpy(&local_e);
    local_12 = local_c;
    if (local_e == '\\') {
      local_12 = &uStack_d;
    }
    else {
      strcat(&local_e);
    }
    _itoa(0x18a2,local_4,local_12,unaff_SS,10);
    iVar1 = _unlink(0x18a2,&local_e);
    if (iVar1 == 0) goto LAB_18a2_038a;
  }
  uVar2 = 0xffff;
LAB_18a2_038a:
  *(undefined1 *)(param_1 + 10) = 0;
  return uVar2;
}



// Function: _fsopen @ 18a2:0396

undefined2 __cdecl16far
_fsopen(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
       undefined2 param_5)

{
  int iVar1;
  undefined2 uVar2;
  int in_DX;
  
  iVar1 = _getstream();
  if (in_DX == 0 && iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _openfile(param_1,param_2,param_3,param_4,param_5,iVar1,in_DX);
  }
  return uVar2;
}



// Function: fopen @ 18a2:03ca

void __cdecl16far fopen(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  _fsopen(param_1,param_2,param_3,param_4,0);
  return;
}



// Function: fread @ 18a2:03e6

uint __cdecl16far fread(uint param_1,undefined2 param_2,uint param_3,uint param_4)

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
      uVar6 = FUN_18a2_0489();
      iVar5 = uVar3 - uVar6;
      iVar7 = iVar7 - (uint)(uVar3 < uVar6);
      if ((uVar6 < uVar4) ||
         (param_1 = param_1 + uVar6, lVar2 = CONCAT22(iVar7,iVar5), iVar5 == 0 && iVar7 == 0))
      goto LAB_18a2_0467;
    }
    uVar4 = FUN_18a2_0489(0,param_1);
    iVar5 = uVar3 - uVar4;
    iVar7 = iVar7 - (uint)(uVar3 < uVar4);
LAB_18a2_0467:
    if (iVar5 != 0 || iVar7 != 0) {
      param_4 = (uint)((ulong)(lVar1 - CONCAT22(iVar7,iVar5)) / (ulong)param_3);
    }
  }
  return param_4;
}



// Function: FUN_18a2_0489 @ 18a2:0489

int __cdecl16near FUN_18a2_0489(void)

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
        iVar2 = _filbuf();
        if (iVar2 == -1) break;
        *in_BX = (char)iVar2;
        in_BX = in_BX + 1;
        uVar3 = uVar3 - 1;
        local_6 = unaff_SI[0x79];
      }
      else {
        iVar2 = _read(0x18a2,*(undefined1 *)((int)unaff_SI + 0xb),in_BX,unaff_ES,
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
      memcpy(in_BX,unaff_ES,*unaff_SI,unaff_SI[1],uVar1);
      uVar3 = uVar3 - uVar1;
      unaff_SI[2] = unaff_SI[2] - uVar1;
      in_BX = in_BX + uVar1;
      *unaff_SI = *unaff_SI + uVar1;
    }
  } while (uVar3 != 0);
  return in_CX - uVar3;
}



// Function: printf @ 18a2:055a

undefined2 __cdecl16far printf(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar1 = _stbuf(0x2474);
  uVar2 = _output(0x2474);
  _ftbuf(uVar1,0x2474);
  return uVar2;
}



// Function: scanf @ 18a2:059e

void __cdecl16far scanf(void)

{
  _input(0x2468);
  return;
}



// Function: _fgetchar @ 18a2:05c2

undefined2 __cdecl16far _fgetchar(void)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 extraout_AH;
  undefined2 unaff_DS;
  
  piVar1 = (int *)0x246c;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = _filbuf(0x2468);
    uVar3 = extraout_AH;
  }
  else {
    *(int *)0x2468 = *(int *)0x2468 + 1;
    uVar2 = *(undefined1 *)((int)*(undefined4 *)0x2468 + -1);
    uVar3 = 0;
  }
  return CONCAT11(uVar3,uVar2);
}



// Function: fgetc @ 18a2:05ca

undefined2 __cdecl16far fgetc(int *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 extraout_AH;
  undefined2 unaff_DS;
  
  piVar1 = param_1 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = _filbuf(param_1);
    uVar3 = extraout_AH;
  }
  else {
    *param_1 = *param_1 + 1;
    uVar2 = *(undefined1 *)((int)*(undefined4 *)param_1 + -1);
    uVar3 = 0;
  }
  return CONCAT11(uVar3,uVar2);
}



// Function: strlen @ 18a2:05ec

uint __cdecl16far strlen(char *param_1)

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



// Function: getenv @ 18a2:0606

int __cdecl16far getenv(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined4 local_6;
  
  local_6 = (int *)CONCAT22(*(int *)0x2418,(int *)*(int *)0x2416);
  if ((*(int *)0x2418 != 0 || (int *)*(int *)0x2416 != (int *)0x0) && (param_2 != 0 || param_1 != 0)
     ) {
    uVar1 = strlen(param_1,param_2);
    while( true ) {
      uVar5 = (undefined2)((ulong)local_6 >> 0x10);
      piVar4 = (int *)local_6;
      if (piVar4[1] == 0 && *local_6 == 0) break;
      uVar2 = strlen(*local_6,piVar4[1]);
      if (((uVar1 < uVar2) && (*(char *)((int)*(undefined4 *)local_6 + uVar1) == '=')) &&
         (iVar3 = strncmp(*local_6,piVar4[1],param_1,param_2,uVar1), iVar3 == 0)) {
        return *local_6 + uVar1 + 1;
      }
      local_6 = (int *)CONCAT22(uVar5,piVar4 + 2);
    }
  }
  return 0;
}



// Function: _kbhit @ 18a2:069c

uint __cdecl16far _kbhit(void)

{
  code *pcVar1;
  byte bVar2;
  char cVar4;
  uint uVar3;
  undefined2 unaff_DS;
  
  cVar4 = (char)((uint)*(undefined2 *)0x2432 >> 8);
  uVar3 = CONCAT11(cVar4,0xff);
  if (cVar4 != '\0') {
    if (*(int *)0x2918 == -0x292a) {
      (*(code *)*(undefined2 *)0x291a)();
    }
    pcVar1 = (code *)swi(0x21);
    bVar2 = (*pcVar1)();
    uVar3 = (uint)bVar2;
  }
  return uVar3;
}



// Function: _getch @ 18a2:06c2

void __cdecl16far _getch(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if ((char)((uint)*(undefined2 *)0x2432 >> 8) == '\0') {
    *(undefined2 *)0x2432 = 0xffff;
  }
  else {
    if (*(int *)0x2918 == -0x292a) {
      (*(code *)*(undefined2 *)0x291a)();
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}



// Function: sprintf @ 18a2:06ea

undefined2 __cdecl16far sprintf(undefined2 param_1,undefined2 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x2b08 = 0x42;
  *(undefined2 *)0x2b04 = param_1;
  *(undefined2 *)0x2b06 = param_2;
  *(undefined2 *)0x2afe = param_1;
  *(undefined2 *)0x2b00 = param_2;
  *(undefined2 *)0x2b02 = 0x7fff;
  uVar3 = _output(0x2afe);
  piVar1 = (int *)0x2b02;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    _flsbuf(0,0x2afe);
  }
  else {
    puVar2 = (undefined1 *)*(undefined4 *)0x2afe;
    *(int *)0x2afe = *(int *)0x2afe + 1;
    *puVar2 = 0;
  }
  return uVar3;
}



// Function: sscanf @ 18a2:0754

void __cdecl16far sscanf(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x2b14 = 0x49;
  *(undefined2 *)0x2b10 = param_1;
  *(undefined2 *)0x2b12 = param_2;
  *(undefined2 *)0x2b0a = param_1;
  *(undefined2 *)0x2b0c = param_2;
  uVar1 = strlen(param_1,param_2);
  *(undefined2 *)0x2b0e = uVar1;
  _input(0x2b0a);
  return;
}



// Function: _fileno @ 18a2:07a0

undefined1 __cdecl16far _fileno(undefined4 param_1)

{
  return *(undefined1 *)((int)param_1 + 0xb);
}



// Function: _filelength @ 18a2:07ae

undefined2 __cdecl16far _filelength(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  long lVar2;
  long lVar3;
  
  if ((param_1 < 0) || (*(int *)0x23fa <= param_1)) {
    *(undefined2 *)0x23ea = 9;
    uVar1 = 0xffff;
  }
  else {
    lVar2 = _lseek(0x18a2,param_1,0,0,1);
    if (lVar2 == -1) {
      uVar1 = 0xffff;
    }
    else {
      lVar3 = _lseek(0x18a2,param_1,0,0,2);
      uVar1 = (undefined2)lVar3;
      if (lVar3 != lVar2) {
        _lseek(0x18a2,param_1,lVar2,0);
      }
    }
  }
  return uVar1;
}



// Function: memcpy @ 18a2:0834

undefined2 * __cdecl16far memcpy(undefined2 *param_1,undefined2 *param_2,int param_3)

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



// Function: system @ 18a2:0892

uint __cdecl16far system(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int in_DX;
  undefined2 unaff_DS;
  int local_14;
  
  local_14 = getenv(0x2434);
  if (param_2 == 0 && param_1 == 0) {
    iVar1 = _access(0x18a2,local_14,in_DX,0);
    uVar2 = (uint)(iVar1 == 0);
  }
  else if ((in_DX == 0 && local_14 == 0) ||
          ((uVar2 = _spawnve(0,local_14,in_DX,&local_14), uVar2 == 0xffff &&
           ((*(int *)0x23ea == 2 || (*(int *)0x23ea == 0xd)))))) {
    local_14 = 0x243f;
    uVar2 = _spawnvpe(0,0x243f);
  }
  return uVar2;
}



// Function: _bios_timeofday @ 18a2:094e

uint __cdecl16far _bios_timeofday(int param_1,undefined2 *param_2)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined2 in_CX;
  undefined2 extraout_DX;
  
  if (param_1 == 0) {
    pcVar1 = (code *)swi(0x1a);
    bVar2 = (*pcVar1)();
    *param_2 = extraout_DX;
    ((undefined2 *)param_2)[1] = in_CX;
    uVar3 = (uint)bVar2;
  }
  else {
    uVar3 = 0xffff;
    if (param_1 == 1) {
      pcVar1 = (code *)swi(0x1a);
      (*pcVar1)();
      uVar3 = 0;
    }
  }
  return uVar3;
}



// Function: _aFlshl @ 18a2:0980

void __cdecl16far _aFlshl(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}



// Function: _aFulshr @ 18a2:098c

void __cdecl16far _aFulshr(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}



// Function: _FF_MSGBANNER @ 18a2:09ac

void __cdecl16far _FF_MSGBANNER(void)

{
  undefined2 unaff_DS;
  
  _NMSG_WRITE(0xfc);
  if (*(int *)0x2462 != 0) {
    (*(code *)*(undefined2 *)0x2460)(0x18a2);
  }
  _NMSG_WRITE(0xff);
  return;
}



// Function: _fptrap @ 18a2:09ce

void _fptrap(void)

{
  _amsg_exit();
  return;
}



// Function: _nullcheck @ 18a2:09d4

uint __cdecl16far _nullcheck(void)

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
    _FF_MSGBANNER();
    _NMSG_WRITE(1);
    uVar2 = 1;
  }
  return uVar2;
}



// Function: _setargv @ 18a2:09f8

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void _setargv(undefined2 param_1)

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
  
  *(undefined2 *)0x2464 = in_stack_00000000;
  *(undefined2 *)0x2466 = param_1;
  uVar7 = 1;
  if ((char)*(undefined2 *)0x23f4 != '\x02') {
    uVar13 = *(undefined2 *)0x2c;
    *(undefined2 *)0x241c = uVar13;
    iVar5 = -0x8000;
    pcVar10 = (char *)0x0;
LAB_18a2_0a1f:
    do {
      pcVar11 = pcVar10;
      if (iVar5 != 0) {
        iVar5 = iVar5 + -1;
        pcVar3 = pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar10;
        if (*pcVar3 != '\0') goto LAB_18a2_0a1f;
      }
      pcVar10 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    pcVar11 = pcVar11 + 3;
    *(undefined2 *)0x241a = pcVar11;
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
  uVar13 = *(undefined2 *)0x23f0;
LAB_18a2_0a3d:
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
LAB_18a2_0a50:
      pcVar3 = pcVar10;
      pcVar10 = pcVar10 + 1;
      cVar2 = *pcVar3;
      if ((cVar2 == ' ') || (cVar2 == '\t')) goto LAB_18a2_0a3d;
      if ((cVar2 == '\r') || (cVar2 == '\0')) break;
      if (cVar2 == '\"') {
LAB_18a2_0a89:
        do {
          while( true ) {
            while( true ) {
              pcVar3 = pcVar10;
              pcVar10 = pcVar10 + 1;
              cVar2 = *pcVar3;
              if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_18a2_0ab9;
              if (cVar2 == '\"') goto LAB_18a2_0a50;
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
        goto LAB_18a2_0a50;
      }
      if (cVar2 != '\\') {
        uVar7 = uVar7 + 1;
        goto LAB_18a2_0a50;
      }
      uVar6 = 0;
      do {
        uVar6 = uVar6 + 1;
        pcVar3 = pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (*pcVar3 == '\\');
      if (*pcVar3 == '\"') {
        uVar7 = uVar7 + (uVar6 >> 1) + (uint)((uVar6 & 1) != 0);
        if ((uVar6 & 1) == 0) goto LAB_18a2_0a89;
        goto LAB_18a2_0a50;
      }
      uVar7 = uVar7 + uVar6;
    } while( true );
  }
LAB_18a2_0ab9:
  *(int *)0x2410 = iVar5;
  iVar12 = (iVar5 + 1) * 4;
  iVar5 = -(uVar7 + iVar5 + iVar12 + 1 & 0xfffe);
  *(undefined1 **)0x2412 = &stack0x0004 + iVar5;
  *(undefined2 *)0x2414 = unaff_SS;
  pcVar11 = &stack0x0004 + iVar12 + iVar5;
  *(undefined2 *)((int)&stack0x0002 + iVar5) = unaff_SS;
  uVar13 = *(undefined2 *)((int)&stack0x0002 + iVar5);
  *(char **)(&stack0x0004 + iVar5) = pcVar11;
  *(undefined2 *)(&stack0x0006 + iVar5) = unaff_SS;
  puVar8 = (undefined2 *)(&stack0x0008 + iVar5);
  pcVar3 = (char *)*(undefined4 *)0x241a;
  pcVar10 = (char *)pcVar3;
  do {
    pcVar1 = pcVar10;
    pcVar10 = pcVar10 + 1;
    cVar2 = *pcVar1;
    pcVar1 = pcVar11;
    pcVar11 = pcVar11 + 1;
    *pcVar1 = cVar2;
  } while (cVar2 != '\0');
  uVar4 = *(undefined2 *)0x23f0;
  pcVar10 = (char *)0x81;
LAB_18a2_0afe:
  do {
    do {
      pcVar3 = pcVar10;
      pcVar10 = pcVar10 + 1;
      cVar2 = *pcVar3;
    } while (cVar2 == ' ');
  } while (cVar2 == '\t');
  if ((cVar2 == '\r') || (cVar2 == '\0')) {
LAB_18a2_0b91:
    *(undefined2 *)((int)&stack0x0002 + iVar5) = unaff_SS;
    uVar13 = *(undefined2 *)((int)&stack0x0002 + iVar5);
    *puVar8 = 0;
    puVar8[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x000195bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)*(uint *)0x2464)();
    return;
  }
  *puVar8 = pcVar11;
  puVar8[1] = unaff_SS;
  puVar8 = puVar8 + 2;
  do {
    pcVar10 = pcVar10 + -1;
LAB_18a2_0b1f:
    pcVar3 = pcVar10;
    pcVar10 = pcVar10 + 1;
    cVar2 = *pcVar3;
    if ((cVar2 == ' ') || (cVar2 == '\t')) {
      pcVar3 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar3 = '\0';
      goto LAB_18a2_0afe;
    }
    if ((cVar2 == '\r') || (cVar2 == '\0')) {
LAB_18a2_0b8e:
      *pcVar11 = '\0';
      goto LAB_18a2_0b91;
    }
    pcVar9 = pcVar10;
    if (cVar2 == '\"') {
LAB_18a2_0b5b:
      while( true ) {
        pcVar10 = pcVar9 + 1;
        cVar2 = *pcVar9;
        if ((cVar2 == '\r') || (cVar2 == '\0')) goto LAB_18a2_0b8e;
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
      goto LAB_18a2_0b1f;
    }
    if (cVar2 != '\\') {
      pcVar3 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar3 = cVar2;
      goto LAB_18a2_0b1f;
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
      if ((uVar7 & 1) == 0) goto LAB_18a2_0b5b;
      pcVar3 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar3 = '\"';
      goto LAB_18a2_0b1f;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar3 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar3 = '\\';
    }
  } while( true );
}



// Function: _setenvp @ 18a2:0ba0

void __cdecl16far _setenvp(void)

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
  pcVar15 = (char *)_myalloc();
  uVar6 = (undefined2)((ulong)pcVar15 >> 0x10);
  pcVar12 = (char *)pcVar15;
  puVar16 = (undefined2 *)_myalloc();
  uVar7 = (undefined2)((ulong)puVar16 >> 0x10);
  puVar8 = (undefined2 *)puVar16;
  *(undefined2 *)0x2416 = puVar8;
  *(undefined2 *)0x2418 = uVar7;
  piVar10 = (int *)0x0;
  do {
    if (iVar9 == 0) {
      *puVar8 = 0;
      puVar8[1] = 0;
      return;
    }
    bVar14 = *piVar10 == *(int *)0x23ce;
    if (bVar14) {
      piVar13 = (int *)0x23ce;
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
      if (!bVar14) goto LAB_18a2_0c1d;
    }
    else {
LAB_18a2_0c1d:
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



// Function: _NMSG_TEXT @ 18a2:0c40

int * __stdcall16far _NMSG_TEXT(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar3 = (int *)0x294e;
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



// Function: _NMSG_WRITE @ 18a2:0c6b

void __stdcall16far _NMSG_WRITE(undefined2 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  pcVar3 = (char *)_NMSG_TEXT(param_1);
  if (pcVar3 != (char *)0x0) {
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
    if (*(int *)0x2918 == -0x292a) {
      (*(code *)*(undefined2 *)0x291a)();
    }
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}



// Function: _farstub @ 18a2:0ca2

void __cdecl16far _farstub(void)

{
  return;
}



// Function: _filbuf @ 18a2:0ca4

uint __cdecl16far _filbuf(undefined4 *param_1)

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
        _getbuf(param_1);
      }
      uVar3 = *(undefined2 *)((int)param_1 + 6);
      *(undefined2 *)param_1 = uVar3;
      uVar5 = (uint)*(byte *)((int)param_1 + 0xb);
      iVar4 = _read(0x18a2,uVar5,uVar3,*(undefined2 *)(param_1 + 2),
                    *(undefined2 *)((int)param_1 + 0xf2));
      if (iVar4 == 0) {
        *(byte *)((int)param_1 + 10) = *(byte *)((int)param_1 + 10) | 0x10;
      }
      else {
        if (iVar4 != -1) {
          if (((*(byte *)(uVar5 + 0x23fc) & 0x82) == 0x82) &&
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



// Function: _flsbuf @ 18a2:0d40

uint __cdecl16far _flsbuf(uint param_1,int *param_2)

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
      if ((bVar2 & 0x10) == 0) goto LAB_18a2_0db9;
      *param_2 = param_2[3];
      bVar2 = bVar2 & 0xfe;
    }
    *(byte *)(param_2 + 5) = bVar2 & 0xef | 2;
    uVar5 = (uint)*(byte *)((int)param_2 + 0xb);
    if (((bVar2 & 8) == 0) &&
       (((bVar2 & 4) != 0 ||
        (((*(byte *)(param_2 + 0x78) & 1) == 0 &&
         (((((param_2 == (int *)0x2474 || (param_2 == (int *)0x2480)) || (param_2 == (int *)0x2498))
           && ((*(byte *)(uVar5 + 0x23fc) & 0x40) != 0)) ||
          (_getbuf(param_2), (*(byte *)(piVar1 + 5) & 8) == 0)))))))) {
      iVar3 = _write(0x18a2,uVar5,&param_1);
      iVar4 = 1;
    }
    else {
      iVar4 = *piVar1 - piVar1[3];
      *piVar1 = piVar1[3] + 1;
      piVar1[2] = piVar1[0x79] + -1;
      if (iVar4 == 0) {
        iVar3 = 0;
        if ((*(byte *)(uVar5 + 0x23fc) & 0x20) != 0) {
          _lseek(0x18a2,uVar5,0,0,2);
          iVar3 = 0;
          iVar4 = 0;
        }
      }
      else {
        iVar3 = _write(0x18a2,uVar5,piVar1[3],piVar1[4],iVar4);
      }
      **(undefined1 **)(piVar1 + 3) = (char)param_1;
    }
    if (iVar3 == iVar4) {
      return param_1 & 0xff;
    }
  }
LAB_18a2_0db9:
  *(byte *)(piVar1 + 5) = *(byte *)(piVar1 + 5) | 0x20;
  return 0xffff;
}



// Function: _freebuf @ 18a2:0e2c

void __cdecl16near _freebuf(undefined2 *param_1)

{
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_1 + 5) & 0x83) != 0) && ((*(byte *)(param_1 + 5) & 8) != 0)) {
    _ffree(param_1[3],param_1[4]);
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xf7;
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// Function: _openfile @ 18a2:0e64

undefined2 * __cdecl16far
_openfile(undefined2 param_1,undefined2 param_2,byte *param_3,undefined2 param_4,undefined2 *param_5
         )

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
  
  local_6 = *(byte *)0x274c;
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
      goto LAB_18a2_0e9a;
    }
    uVar5 = 0x109;
  }
  local_4 = 2;
LAB_18a2_0e9a:
  bVar2 = true;
LAB_18a2_0e9f:
  param_3 = (byte *)CONCAT22(param_3._2_2_,(byte *)param_3 + 1);
  if ((*param_3 == 0) || (!bVar2)) {
    iVar4 = _sopen(param_1,param_2,uVar5,param_4,0x1a4);
    if (iVar4 < 0) {
      return (undefined2 *)0x0;
    }
    *(int *)0x274a = *(int *)0x274a + 1;
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
      goto LAB_18a2_0e9f;
    }
  }
  else {
    if (0x74 < bVar1) goto LAB_18a2_0ed2;
    if (bVar1 == 0x2b) {
      if ((uVar5 & 2) != 0) goto LAB_18a2_0ed2;
      uVar5 = uVar5 & 0xfffe | 2;
      local_4 = 0x80;
      goto LAB_18a2_0e9f;
    }
    if (bVar1 == 0x62) {
      if ((uVar5 & 0xc000) == 0) {
        uVar5 = uVar5 | 0x8000;
        goto LAB_18a2_0e9f;
      }
    }
    else {
      if (bVar1 != 99) {
        if ((bVar1 != 0x6e) || (bVar3)) goto LAB_18a2_0ed2;
        bVar3 = true;
        local_6 = local_6 & 0xbf;
        goto LAB_18a2_0e9f;
      }
      if (!bVar3) {
        bVar3 = true;
        local_6 = local_6 | 0x40;
        goto LAB_18a2_0e9f;
      }
    }
  }
LAB_18a2_0ed2:
  bVar2 = false;
  goto LAB_18a2_0e9f;
}



// Function: _stbuf @ 18a2:0fa0

undefined2 __cdecl16near _stbuf(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar4 = (int *)0x264c;
  if ((((param_1 == (int *)0x2474) || (piVar4 = (int *)0x2650, param_1 == (int *)0x2480)) ||
      (piVar4 = (int *)0x2654, param_1 == (int *)0x2498)) &&
     (((*(byte *)(param_1 + 5) & 0xc) == 0 && ((*(byte *)(param_1 + 0x78) & 1) == 0)))) {
    iVar2 = *piVar4;
    iVar3 = piVar4[1];
    if (iVar2 == 0 && iVar3 == 0) {
      iVar2 = _fmalloc(0x200);
      if (iVar3 == 0) goto LAB_18a2_101b;
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
LAB_18a2_101b:
    uVar1 = 0;
  }
  return uVar1;
}



// Function: _ftbuf @ 18a2:1021

void __cdecl16near _ftbuf(int param_1,undefined2 *param_2)

{
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_2 + 0x78) & 0x10) != 0) &&
     ((*(byte *)(*(byte *)((int)param_2 + 0xb) + 0x23fc) & 0x40) != 0)) {
    _flush(param_2);
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



// Function: fflush @ 18a2:1068

int __cdecl16far fflush(undefined4 param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (param_1._2_2_ == 0 && (int)param_1 == 0) {
    iVar1 = FUN_18a2_1148(0);
  }
  else {
    iVar1 = _flush((int)param_1,param_1._2_2_);
    if (iVar1 == 0) {
      iVar1 = 0;
      if ((*(byte *)((int)param_1 + 0xf0) & 0x40) != 0) {
        iVar1 = _commit(*(undefined1 *)((int)param_1 + 0xb));
        iVar1 = -(uint)(iVar1 != 0);
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



// Function: _flush @ 18a2:10c0

undefined2 __cdecl16near _flush(int *param_1)

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
      iVar2 = _write(0x18a2,*(undefined1 *)((int)param_1 + 0xb),param_1[3],param_1[4],iVar1);
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



// Function: FUN_18a2_1148 @ 18a2:1148

int FUN_18a2_1148(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_4;
  
  iVar3 = 0;
  local_4 = 0;
  for (uVar2 = 0x2468; uVar2 <= *(uint *)0x2648; uVar2 = uVar2 + 0xc) {
    if ((param_1 == 1) && ((*(byte *)(uVar2 + 10) & 0x83) != 0)) {
      iVar1 = fflush(uVar2);
      if (iVar1 != -1) {
        iVar3 = iVar3 + 1;
      }
    }
    else if ((param_1 == 0) &&
            (((*(byte *)(uVar2 + 10) & 2) != 0 && (iVar1 = fflush(uVar2), iVar1 == -1)))) {
      local_4 = -1;
    }
  }
  if (param_1 == 1) {
    local_4 = iVar3;
  }
  return local_4;
}



// Function: _input @ 18a2:11b4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015ab1) overlaps instruction at (ram,0x00015aaf)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x000116b6) */
/* WARNING: Removing unreachable block (ram,0x00011704) */

double * __cdecl16far
_input(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
      double *param_6,double *param_7,undefined1 *param_8,double *param_9,int param_10)

{
  byte *pbVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  undefined2 *puVar8;
  double *pdVar9;
  undefined2 uVar10;
  byte *pbVar11;
  double *pdVar12;
  undefined1 *puVar13;
  uint uVar14;
  byte bVar15;
  int iVar16;
  int in_CX;
  uint extraout_DX;
  double *in_DX;
  double *extraout_DX_00;
  undefined2 extraout_DX_01;
  undefined2 extraout_DX_02;
  undefined2 extraout_DX_03;
  uint uVar17;
  int iVar18;
  int *piVar19;
  undefined2 *puVar20;
  int unaff_BP;
  undefined1 *puVar21;
  byte *pbVar22;
  byte *unaff_SI;
  byte *pbVar23;
  uint unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar24;
  bool bVar25;
  byte in_AF;
  longdouble in_ST0;
  longdouble in_ST1;
  longdouble in_ST2;
  longdouble in_ST3;
  byte *pbVar26;
  int in_stack_00000000;
  uint in_stack_00000002;
  byte abStack_9bc [56];
  byte abStack_984 [2004];
  char local_1b0;
  char local_1ae;
  undefined1 local_1ac;
  undefined1 local_1aa;
  undefined1 local_1a8;
  char local_1a6;
  undefined1 local_1a2;
  char local_19e;
  int local_19c;
  double *local_19a;
  int local_198;
  double *local_194;
  int local_192;
  undefined1 *local_190;
  undefined2 uVar27;
  double *local_186;
  undefined8 local_180;
  undefined1 auStack_28 [12];
  int aiStack_1c [3];
  undefined1 *puStack_16;
  undefined1 *in_stack_0000ffec;
  double *in_stack_0000fff4;
  double *pdVar28;
  char *pcVar29;
  double *in_stack_0000fff6;
  
  puVar13 = &stack0xfffe;
  puVar21 = &stack0xfffe;
  _aFchkstk();
  local_1b0 = '\0';
  local_192 = 0;
  local_194 = (double *)0x0;
  pbVar23 = unaff_SI;
LAB_18a2_11cf:
  if (*(char *)CONCAT22(param_3,param_2) != '\0') {
    if ((*(byte *)(*(byte *)CONCAT22(param_3,param_2) + 0x2753) & 8) != 0) {
      local_192 = local_192 + -1;
      uVar10 = FUN_18a2_1b00();
      in_stack_0000fff6 = (double *)CONCAT22(uVar10,param_1._2_2_);
      FUN_18a2_1ae2();
      do {
        param_2 = (double *)((int)param_2 + 1);
        in_DX = extraout_DX_00;
        in_stack_0000fff4 = (double *)param_1;
      } while ((*(byte *)(*(byte *)CONCAT22(param_3,param_2) + 0x2753) & 8) != 0);
    }
    if (*(char *)param_2 == '%') {
      local_1aa = 0;
      local_19e = '\0';
      local_1ac = 0;
      local_1a8 = 0;
      local_1a6 = '\0';
      local_1ae = '\0';
      bVar24 = false;
      local_198 = 0;
      local_19c = 0;
      local_19a = (double *)0x0;
LAB_18a2_1256:
      do {
        pdVar12 = local_19a;
        if (bVar24) goto LAB_18a2_12cc;
        param_2 = (double *)((int)param_2 + 1);
        bVar7 = *(byte *)CONCAT22(param_3,param_2);
        uVar14 = (uint)bVar7;
        if ((*(byte *)(uVar14 + 0x2753) & 4) == 0) {
          if (uVar14 == 0x6c) {
LAB_18a2_12b2:
            local_1a6 = local_1a6 + '\x01';
            goto LAB_18a2_1256;
          }
          if (uVar14 < 0x6d) {
            if (bVar7 == 0x4c) {
              local_1a6 = local_1a6 + '\x01';
              goto LAB_18a2_12b2;
            }
            if ((char)bVar7 < 'M') {
              if (bVar7 == 0x2a) {
                local_1ae = local_1ae + '\x01';
                goto LAB_18a2_1256;
              }
              if (bVar7 == 0x46) goto LAB_18a2_1256;
            }
            else {
              if (bVar7 == 0x4e) goto LAB_18a2_1256;
              if (bVar7 == 0x68) {
                local_19e = local_19e + '\x01';
                goto LAB_18a2_1256;
              }
            }
          }
          bVar24 = true;
          goto LAB_18a2_1256;
        }
        local_19c = local_19c + 1;
        in_CX = (int)local_19a * 10;
        local_19a = (double *)(uVar14 + in_CX + -0x30);
        in_DX = pdVar12;
      } while( true );
    }
    local_192 = local_192 + 1;
    in_stack_0000fff4 = (double *)0xa45b;
    pbVar26 = (byte *)FUN_18a2_1aaa();
    pbVar23 = (byte *)pbVar26;
    in_stack_0000fff6 = param_1;
    pdVar12 = param_2;
    if (pbVar23 == (byte *)(uint)*(byte *)CONCAT22(param_3,param_2)) goto LAB_18a2_1a4f;
    goto LAB_18a2_19be;
  }
LAB_18a2_1a6a:
  if (((pbVar23 == (byte *)0xffff) && (local_194 == (double *)0x0)) && (local_1b0 == '\0')) {
    local_194 = (double *)0xffff;
  }
  return local_194;
LAB_18a2_01a5:
  pbVar26 = pbVar23;
  pbVar11 = pbVar23 + 1;
  if (*pbVar26 < 0x41) goto LAB_18a2_01b9;
  pbVar23 = pbVar23 + 2;
  if (*pbVar11 < 0x41) goto LAB_18a2_01b9;
  pbVar1 = pbVar22;
  pbVar22 = pbVar22 + 1;
  *pbVar1 = *pbVar11 + 0xbf | (*pbVar26 + 0xbf) * '\x10';
  goto LAB_18a2_01a5;
switchD_1000_a40d_caseD_b:
  while( true ) {
    uVar14 = (uint)piVar19 >> 1;
    if ((uVar14 & 3) != 0) break;
    piVar19 = (int *)((uVar14 | (uint)(((uint)piVar19 & 1) != 0) << 0xf) >> 1 |
                     (uint)((uVar14 & 1) != 0) << 0xf);
  }
  return pdVar12;
LAB_18a2_017f:
  do {
    if (*pbVar23 == 0) break;
    iVar16 = 0xd;
    pbVar22 = (byte *)0x23ce;
    bVar24 = false;
    do {
      if (iVar16 == 0) break;
      iVar16 = iVar16 + -1;
      pbVar1 = pbVar23;
      pbVar23 = pbVar23 + 1;
      pbVar26 = pbVar22;
      pbVar22 = pbVar22 + 1;
      bVar24 = *pbVar26 == *pbVar1;
    } while (bVar24);
    if (bVar24) {
      pbVar22 = (byte *)0x23fc;
      goto LAB_18a2_01a5;
    }
    iVar16 = 0x7fff;
    bVar24 = true;
    do {
      if (iVar16 == 0) break;
      iVar16 = iVar16 + -1;
      pbVar26 = pbVar23;
      pbVar23 = pbVar23 + 1;
      bVar24 = *pbVar26 == 0;
    } while (!bVar24);
  } while (bVar24);
LAB_18a2_01b9:
  iVar18 = 4;
  do {
    bVar24 = false;
    *(byte *)(iVar18 + 0x23fc) = *(byte *)(iVar18 + 0x23fc) & 0xbf;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if ((!bVar24) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar18 + 0x23fc) = *(byte *)(iVar18 + 0x23fc) | 0x40;
    }
    iVar18 = iVar18 + -1;
  } while (-1 < iVar18);
  FUN_18a2_0291();
  FUN_18a2_0291();
  pdVar12 = (double *)FUN_18a2_0291();
  return pdVar12;
LAB_18a2_12cc:
  if (local_1ae == '\0') {
    in_DX = (double *)*(undefined2 *)((int)param_4 + 2);
    param_4 = (double *)((int)param_4 + 4);
    local_186 = in_DX;
  }
  pbVar26 = (byte *)CONCAT22(in_DX,pbVar23);
  local_1a2 = 0;
  pbVar22 = (byte *)(uint)(*(byte *)CONCAT22(param_3,param_2) | 0x20);
  pdVar12 = param_2;
  if (pbVar22 != (byte *)0x6e) {
    if ((pbVar22 == (byte *)0x63) || (pbVar22 == (byte *)0x7b)) {
      local_192 = local_192 + 1;
      in_stack_0000fff4 = (double *)0x9d47;
      pbVar26 = (byte *)FUN_18a2_1aaa();
      in_stack_0000fff6 = param_1;
    }
    else {
      pbVar26 = (byte *)FUN_18a2_1b00();
      in_stack_0000fff4 = param_1._2_2_;
      in_stack_0000fff6 = (double *)CONCAT22(unaff_SS,&local_192);
    }
  }
  iVar18 = (int)((ulong)pbVar26 >> 0x10);
  pbVar23 = (byte *)pbVar26;
  if ((local_19c != 0) && (local_19a == (double *)0x0)) {
LAB_18a2_19be:
    local_192 = local_192 + -1;
    FUN_18a2_1ae2();
    goto LAB_18a2_1a6a;
  }
  pbVar11 = pbVar22 + -99;
  if ((byte *)0x18 < pbVar11) {
    if ((byte *)(uint)*(byte *)CONCAT22(param_3,param_2) != pbVar23) goto LAB_18a2_19be;
    local_1b0 = local_1b0 + -1;
    if (local_1ae == '\0') {
      param_4 = (double *)((int)param_4 + -4);
    }
    goto LAB_18a2_1a24;
  }
  piVar19 = (int *)((int)pbVar11 * 2);
  pdVar9 = (double *)0x1000;
  bVar7 = (byte)pdVar12;
  cVar6 = (char)((uint)pdVar12 >> 8);
  bVar15 = (byte)in_CX;
  switch(pbVar11) {
  case (byte *)0x0:
    iVar18 = *piVar19;
    while( true ) {
      if (iVar18 != *(int *)0x2b36) {
        printf();
        printf();
        printf();
        return (double *)0x1;
      }
      *(int *)0x2b36 = *(int *)0x2b36 + 2;
      if (0xffe < *(uint *)0x2b36) break;
      iVar18 = *(int *)*(undefined2 *)0x2b36;
    }
    printf();
    return (double *)0x0;
  case (byte *)0x1:
    *pbVar22 = *pbVar22 | bVar7;
    pdVar28 = (double *)CONCAT22(iVar18,pdVar12);
    while( true ) {
      pdVar12 = (double *)((ulong)pbVar26 >> 0x10);
      uVar10 = (undefined2)((ulong)pdVar28 >> 0x10);
      if (*(int *)((int)(double *)pdVar28 + 2) == 0 && *(int *)pdVar28 == 0) {
        *in_stack_0000ffec = 0xd;
        *(char *)CONCAT22(param_9,param_8) = (char)pbVar26;
        return in_stack_0000fff4;
      }
      iVar18 = strlen();
      if ((byte *)0x7d < (byte *)pbVar26 + iVar18) break;
      pbVar23 = (byte *)pbVar26 + iVar18;
      pdVar28 = (double *)CONCAT22(uVar10,(double *)0x4);
      puStack_16 = (undefined1 *)0xc4f7;
      strcpy();
      pdVar9 = pdVar12;
      puVar13 = (undefined1 *)strchr();
      pbVar26 = (byte *)CONCAT22(pdVar9,pbVar23);
      in_stack_0000ffec = (undefined1 *)CONCAT22(pdVar9,puVar13);
      in_stack_0000fff4 = pdVar12;
      if (*(int *)0x6 != 0 || *(int *)pdVar28 != 0) {
        *in_stack_0000ffec = 0x20;
        pbVar26 = (byte *)CONCAT22(pdVar9,pbVar23 + 1);
        in_stack_0000ffec = (undefined1 *)CONCAT22(pdVar9,puVar13 + 1);
      }
    }
    *(undefined2 *)0x23ea = 7;
    *(undefined2 *)0x23f8 = 10;
    _ffree();
    return (double *)0xffff;
  case (byte *)0x2:
    return pdVar12;
  case (byte *)0x4:
    *pbVar22 = *pbVar23;
    iVar18 = 0;
    loadadr();
    pdVar12 = (double *)0x0;
    iVar16 = readadr();
    if ((iVar16 == 0) && (iVar18 == 0)) {
      for (uVar14 = 8; uVar14 < 0xc; uVar14 = uVar14 + 1) {
        write4dac();
        read4dac();
        for (uVar17 = 0; uVar17 < 10000; uVar17 = uVar17 + 1) {
        }
        read4adc();
        iVar18 = tstadcval4();
        if (iVar18 != 0) {
          printf();
          pdVar12 = (double *)((int)pdVar12 + 1);
        }
        write4dac();
        read4dac();
        for (uVar17 = 0; uVar17 < 10000; uVar17 = uVar17 + 1) {
        }
        read4adc();
        iVar18 = tstadcval4();
        if (iVar18 != 0) {
          printf();
          pdVar12 = (double *)((int)pdVar12 + 1);
        }
        write4dac();
        read4dac();
        for (uVar17 = 0; uVar17 < 10000; uVar17 = uVar17 + 1) {
        }
        read4adc();
        iVar18 = tstadcval4();
        if (iVar18 != 0) {
          printf();
          pdVar12 = (double *)((int)pdVar12 + 1);
        }
      }
      if (pdVar12 == (double *)0x0) {
        printf();
      }
    }
    else {
      printf();
      Wait();
      pdVar12 = (double *)0x1;
    }
    return pdVar12;
  case (byte *)0x5:
    return pdVar12;
  case (byte *)0x6:
    *(byte *)((int)piVar19 + (int)pbVar23) = *(byte *)((int)piVar19 + (int)pbVar23) + bVar7;
    for (; unaff_SI < (byte *)0x7d0; unaff_SI = unaff_SI + 1) {
    }
    iVar18 = readsdac();
    if (iVar18 == -0x8000) {
      *(undefined2 *)0x3712 = 0x2e1;
      *(undefined2 *)0x3714 = unaff_DS;
      *(undefined2 *)0x3716 = 3;
    }
    else {
      printf();
      printf();
      printf();
      printf();
      printf();
      cVar6 = _getch();
      if (cVar6 == '1') {
        uVar27 = 0x2cd;
        uVar10 = 2;
      }
      else if (cVar6 == '2') {
        uVar27 = 0x2c7;
        uVar10 = 3;
      }
      else if (cVar6 == '3') {
        uVar27 = 0x2d4;
        uVar10 = 4;
      }
      else {
        uVar27 = 0x2da;
        uVar10 = 2;
      }
      *(undefined2 *)0x3712 = uVar27;
      *(undefined2 *)0x3714 = unaff_DS;
      *(undefined2 *)0x3716 = uVar10;
    }
    pdVar12 = (double *)0x3712;
switchD_1000_a40d_caseD_10:
    return pdVar12;
  case (byte *)0x7:
    ((byte *)((int)piVar19 + (int)pbVar22))[-0x7ba] =
         ((byte *)((int)piVar19 + (int)pbVar22))[-0x7ba] + bVar7 +
         CARRY2((uint)pbVar11,(uint)pbVar11);
    pbVar26 = (byte *)((int)piVar19 + (int)pbVar23);
    bVar24 = CARRY1(*pbVar26,bVar15);
    *pbVar26 = *pbVar26 + bVar15;
    while( true ) {
      uVar14 = (int)((ulong)in_stack_0000fff6 >> 0x10) + (uint)bVar24;
      if ((6 < uVar14) && ((7 < uVar14 || ((double *)0xfffc < (double *)in_stack_0000fff6)))) break;
      _aFulshr();
      writeio();
      WriteRamAddress();
      bVar24 = false;
      in_stack_0000fff6 = (double *)0x13161b17;
    }
    uVar17 = 0;
    uVar14 = 0;
    while ((uVar17 < 7 || ((uVar17 < 8 && (uVar14 < 0xfffd))))) {
      _aFulshr();
      writeio();
      iVar18 = ReadRamAddress();
      if (iVar18 != 0) {
        printf();
        readadr();
        printf();
        readlocation();
        printf();
        return (double *)0x1;
      }
      uVar17 = 0x1316;
      uVar14 = 0x1b6e;
    }
    printf();
    return (double *)0x0;
  case (byte *)0x8:
    pbVar22[3] = pbVar22[3] + (char)((ulong)pbVar26 >> 0x18);
    for (iVar18 = 0; iVar18 < 3; iVar18 = iVar18 + 1) {
      pbVar23 = unaff_SI + 1;
      iVar16 = *(int *)(*(int *)0x23a0 + 0x404 + (int)unaff_SI * 2);
      unaff_SI = unaff_SI + 2;
      aiStack_1c[iVar18 * 2 + 2] = *(int *)(*(int *)0x23a0 + 0x404 + (int)pbVar23 * 2);
      aiStack_1c[iVar18 * 2 + 3] = iVar16;
    }
    if ((param_3 != (double *)0x0) || (param_4 != (double *)0x0)) {
      BCDtoDouble();
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      *param_3 = (double)in_ST0;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
      in_ST2 = in_ST3;
    }
    for (iVar18 = 0; iVar18 < 3; iVar18 = iVar18 + 1) {
      pbVar23 = unaff_SI + 1;
      iVar16 = *(int *)(*(int *)0x23a0 + 0x404 + (int)unaff_SI * 2);
      unaff_SI = unaff_SI + 2;
      aiStack_1c[iVar18 * 2 + 2] = *(int *)(*(int *)0x23a0 + 0x404 + (int)pbVar23 * 2);
      aiStack_1c[iVar18 * 2 + 3] = iVar16;
    }
    if ((param_5 != (double *)0x0) || (param_6 != (double *)0x0)) {
      BCDtoDouble();
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      *param_5 = (double)in_ST0;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
    }
    for (iVar18 = 0; iVar18 < 3; iVar18 = iVar18 + 1) {
      pbVar23 = unaff_SI + 1;
      iVar16 = *(int *)(*(int *)0x23a0 + 0x404 + (int)unaff_SI * 2);
      unaff_SI = unaff_SI + 2;
      aiStack_1c[iVar18 * 2 + 2] = *(int *)(*(int *)0x23a0 + 0x404 + (int)pbVar23 * 2);
      aiStack_1c[iVar18 * 2 + 3] = iVar16;
    }
    if ((param_7 != (double *)0x0) || (param_8 != (undefined1 *)0x0)) {
      BCDtoDouble();
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      *param_7 = (double)in_ST0;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      in_ST0 = in_ST1;
    }
    for (iVar18 = 0; iVar18 < 3; iVar18 = iVar18 + 1) {
      pbVar23 = unaff_SI + 1;
      iVar16 = *(int *)(*(int *)0x23a0 + 0x404 + (int)unaff_SI * 2);
      unaff_SI = unaff_SI + 2;
      aiStack_1c[iVar18 * 2 + 2] = *(int *)(*(int *)0x23a0 + 0x404 + (int)pbVar23 * 2);
      aiStack_1c[iVar18 * 2 + 3] = iVar16;
    }
    if ((param_9 != (double *)0x0) || (param_10 != 0)) {
      BCDtoDouble();
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      *param_9 = (double)in_ST0;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
    }
    return (double *)0x1;
  case (byte *)0x9:
    if ((*(int *)(pbVar22 + 6) == *(int *)pbVar22) &&
       (*(int *)(pbVar22 + 8) == *(int *)(pbVar22 + 2))) {
      if (*(int *)(pbVar22 + 4) != 0) goto switchD_1000_a40d_caseD_17;
      *(int *)pbVar22 = *(int *)pbVar22 + 1;
    }
    *(int *)(pbVar22 + 4) = *(int *)(pbVar22 + 4) + 1;
    *(int *)pbVar22 = *(int *)pbVar22 + -1;
    puVar3 = *(undefined1 **)pbVar22;
    pbVar22[10] = pbVar22[10] & 0xef;
    *puVar3 = (char)pbVar26;
    pbVar22[10] = pbVar22[10] | 1;
    pdVar12 = (double *)((uint)pbVar23 & 0xff);
    break;
  case (byte *)0xa:
    loadadr();
    iVar16 = readadr();
    if ((iVar16 != 0) || (iVar18 != 0)) {
      printf();
      return (double *)0x1;
    }
    iVar18 = 0;
    while ((uVar14 = readadr(), iVar18 == 0 && (uVar14 < 0x800))) {
      writewideDP();
      incadr();
    }
    loadadr();
    while( true ) {
      uVar14 = readadr();
      if ((iVar18 != 0) || (0x7ff < uVar14)) {
        printf();
        return (double *)0x0;
      }
      iVar16 = readwideDP();
      if ((iVar16 != 0x1714) || (iVar18 != 0x1316)) break;
      incadr();
    }
    printf();
    readadr();
    printf();
    printf();
    readwideDP();
    printf();
    return (double *)0x1;
  case (byte *)0xb:
    goto switchD_1000_a40d_caseD_b;
  case (byte *)0xc:
    piVar19[1] = (int)param_1._2_2_;
    pdVar12 = (double *)doPcomCmd();
    return pdVar12;
  case (byte *)0xd:
    bVar7 = bVar7 ^ *(byte *)((int)piVar19 + (int)pbVar22);
    iVar16 = CONCAT11(cVar6,bVar7);
    pdVar12 = in_stack_0000fff4;
    if (in_CX == 1 || bVar7 != 0) goto code_r0x00015a9e;
    *(int *)(abStack_984 + (int)pbVar22) =
         *(int *)(abStack_984 + (int)pbVar22) + CONCAT11(cVar6,bVar7 + abStack_9bc[(int)pbVar22]);
    pdVar12 = pdVar9;
    do {
      iVar18 = *(int *)(*(int *)0x23a0 + (int)in_stack_0000fff4 * 4 + 0x4ae);
      pdVar9 = (double *)0x13e1;
      iVar16 = long68();
code_r0x00015a9e:
      aiStack_1c[(int)pdVar12 * 2] = iVar16;
      aiStack_1c[(int)pdVar12 * 2 + 1] = iVar18;
      in_stack_0000fff4 = (double *)((int)pdVar12 + 1);
      pdVar12 = pdVar9;
    } while ((int)in_stack_0000fff4 < 3);
    if ((param_6 != (double *)0x0) || (param_7 != (double *)0x0)) {
      BCDtoDouble();
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      *param_6 = (double)in_ST0;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
    }
    return (double *)0x0;
  case (byte *)0xe:
    _local_190 = (undefined1 *)CONCAT22(unaff_SS,(undefined1 *)((int)&local_180 + 1));
    local_19a = (double *)((int)local_19a + -1);
    local_192 = local_192 + 1;
    pbVar23 = (byte *)FUN_18a2_1aaa();
    if ((local_19c == 0) || (0x15d < (int)local_19a)) {
      local_19a = (double *)0x15d;
    }
    while( true ) {
      puVar3 = _local_190;
      uVar27 = (undefined2)((ulong)_local_190 >> 0x10);
      if (((pbVar23[0x2753] & 4) == 0) ||
         (pdVar12 = (double *)((int)local_19a + -1), bVar24 = local_19a == (double *)0x0,
         local_19a = pdVar12, bVar24)) break;
      local_198 = local_198 + 1;
      _local_190 = (undefined1 *)CONCAT22(uVar27,local_190 + 1);
      *puVar3 = (char)pbVar23;
      local_192 = local_192 + 1;
      pbVar23 = (byte *)FUN_18a2_1aaa();
    }
    if ((pbVar23 == (byte *)0x2e) &&
       (pdVar12 = (double *)((int)local_19a + -1), bVar24 = local_19a != (double *)0x0,
       local_19a = pdVar12, bVar24)) {
      _local_190 = (undefined1 *)CONCAT22(uVar27,local_190 + 1);
      *puVar3 = 0x2e;
      while( true ) {
        local_192 = local_192 + 1;
        pbVar23 = (byte *)FUN_18a2_1aaa();
        puVar3 = _local_190;
        if (((pbVar23[0x2753] & 4) == 0) ||
           (pdVar12 = (double *)((int)local_19a + -1), bVar24 = local_19a == (double *)0x0,
           local_19a = pdVar12, bVar24)) break;
        local_198 = local_198 + 1;
        uVar27 = (undefined2)((ulong)_local_190 >> 0x10);
        _local_190 = (undefined1 *)CONCAT22(uVar27,local_190 + 1);
        *puVar3 = (char)pbVar23;
      }
    }
    _local_190 = puVar3;
    puVar3 = _local_190;
    if ((local_198 != 0) &&
       ((((char)pbVar23 == 'e' || ((char)pbVar23 == 'E')) &&
        (pdVar12 = (double *)((int)local_19a + -1), bVar24 = local_19a != (double *)0x0,
        local_19a = pdVar12, bVar24)))) {
      uVar27 = (undefined2)((ulong)_local_190 >> 0x10);
      _local_190 = (undefined1 *)CONCAT22(uVar27,local_190 + 1);
      *puVar3 = 0x65;
      local_192 = local_192 + 1;
      pbVar23 = (byte *)FUN_18a2_1aaa();
      puVar3 = _local_190;
      if (pbVar23 == (byte *)0x2d) {
        uVar27 = (undefined2)((ulong)_local_190 >> 0x10);
        _local_190 = (undefined1 *)CONCAT22(uVar27,local_190 + 1);
        *puVar3 = 0x2d;
LAB_18a2_18ff:
        pdVar12 = (double *)((int)local_19a + -1);
        if (local_19a != (double *)0x0) goto LAB_18a2_192f;
      }
      else if (pbVar23 == (byte *)0x2b) goto LAB_18a2_18ff;
      while ((puVar3 = _local_190, (pbVar23[0x2753] & 4) != 0 &&
             (pdVar12 = (double *)((int)local_19a + -1), bVar24 = local_19a != (double *)0x0,
             local_19a = pdVar12, bVar24))) {
        local_198 = local_198 + 1;
        uVar27 = (undefined2)((ulong)_local_190 >> 0x10);
        _local_190 = (undefined1 *)CONCAT22(uVar27,local_190 + 1);
        *puVar3 = (char)pbVar23;
LAB_18a2_192f:
        local_19a = pdVar12;
        local_192 = local_192 + 1;
        pbVar23 = (byte *)FUN_18a2_1aaa();
      }
    }
    local_192 = local_192 + -1;
    in_stack_0000fff6 = (double *)CONCAT22(pbVar23,param_1._2_2_);
    FUN_18a2_1ae2();
    pbVar26 = (byte *)CONCAT22(extraout_DX_01,pbVar23);
    if (local_198 == 0) goto LAB_18a2_1a6a;
    in_stack_0000fff4 = (double *)param_1;
    if (local_1ae == '\0') {
      local_194 = (double *)((int)local_194 + 1);
      *_local_190 = 0;
      if (local_1a6 < '\x02') {
        in_stack_0000ffec = (undefined1 *)0x1000a3d0;
        (*(code *)*(undefined2 *)0x26c6)();
        uVar10 = extraout_DX_03;
      }
      else {
        in_stack_0000ffec = (undefined1 *)0x1000a3b2;
        (*(code *)*(undefined2 *)0x26da)();
        uVar10 = extraout_DX_02;
      }
      pbVar26 = (byte *)CONCAT22(uVar10,pbVar23);
      in_stack_0000fff6 = (double *)CONCAT22(unaff_SS,&local_180);
      in_stack_0000fff4 = local_186;
    }
LAB_18a2_1a24:
    local_1b0 = local_1b0 + '\x01';
    pdVar12 = param_2;
LAB_18a2_1a4f:
    in_DX = (double *)((ulong)pbVar26 >> 0x10);
    pbVar23 = (byte *)pbVar26;
    param_2 = (double *)((int)pdVar12 + 1);
    if ((pbVar23 == (byte *)0xffff) &&
       ((*(char *)CONCAT22(param_3,param_2) != '%' || (*(char *)((int)pdVar12 + 2) != 'n'))))
    goto LAB_18a2_1a6a;
    goto LAB_18a2_11cf;
  case (byte *)0xf:
    for (iVar18 = 0; iVar18 < 3; iVar18 = iVar18 + 1) {
      puVar8 = (undefined2 *)((int)param_4 + iVar18 * 4);
      *puVar8 = 0;
      puVar8[1] = 0;
    }
    pdVar28 = (double *)CONCAT22(param_3,param_2);
    puStack_16 = auStack_28;
    aiStack_1c[2] = 0x1000;
    aiStack_1c[1] = 0x8372;
    sprintf();
    if (*(char *)pdVar28 == '-') {
      *(uint *)((int)param_4 + 2) = *(uint *)((int)param_4 + 2) & 0x7fff | 0x8000;
      pdVar28 = (double *)CONCAT22(param_3,(double *)((int)param_2 + 1));
    }
    else if (*(char *)pdVar28 == '+') {
      pdVar28 = (double *)CONCAT22(param_3,(double *)((int)param_2 + 1));
    }
    pdVar12 = (double *)pdVar28;
    uVar27 = (undefined2)((ulong)pdVar28 >> 0x10);
    *(uint *)CONCAT22(param_5,param_4) =
         *(uint *)CONCAT22(param_5,param_4) & 0xfff0 | (int)*(char *)pdVar28 - 0x30U & 0xf;
    *(uint *)((int)param_4 + 6) =
         *(uint *)((int)param_4 + 6) & 0xfff | (int)*(char *)((int)pdVar12 + 2) << 0xc;
    *(uint *)((int)param_4 + 6) =
         *(uint *)((int)param_4 + 6) & 0xf0ff |
         ((int)*(char *)((int)pdVar12 + 3) - 0x30U & 0xf) << 8;
    *(uint *)((int)param_4 + 6) =
         *(uint *)((int)param_4 + 6) & 0xff0f |
         ((int)*(char *)((int)pdVar12 + 4) - 0x30U & 0xf) << 4;
    *(uint *)((int)param_4 + 6) =
         *(uint *)((int)param_4 + 6) & 0xfff0 | (int)*(char *)((int)pdVar12 + 5) - 0x30U & 0xf;
    *(uint *)((int)param_4 + 4) =
         *(uint *)((int)param_4 + 4) & 0xfff | (int)*(char *)((int)pdVar12 + 6) << 0xc;
    *(uint *)((int)param_4 + 4) =
         *(uint *)((int)param_4 + 4) & 0xf0ff |
         ((int)*(char *)((int)pdVar12 + 7) - 0x30U & 0xf) << 8;
    *(uint *)((int)param_4 + 4) =
         *(uint *)((int)param_4 + 4) & 0xff0f | ((int)*(char *)(pdVar12 + 1) - 0x30U & 0xf) << 4;
    *(uint *)((int)param_4 + 4) =
         *(uint *)((int)param_4 + 4) & 0xfff0 | (int)*(char *)((int)pdVar12 + 9) - 0x30U & 0xf;
    *(uint *)((int)param_4 + 10) =
         *(uint *)((int)param_4 + 10) & 0xfff | (int)*(char *)((int)pdVar12 + 10) << 0xc;
    *(uint *)((int)param_4 + 10) =
         *(uint *)((int)param_4 + 10) & 0xf0ff |
         ((int)*(char *)((int)pdVar12 + 0xb) - 0x30U & 0xf) << 8;
    *(uint *)((int)param_4 + 10) =
         *(uint *)((int)param_4 + 10) & 0xff0f |
         ((int)*(char *)((int)pdVar12 + 0xc) - 0x30U & 0xf) << 4;
    *(uint *)((int)param_4 + 10) =
         *(uint *)((int)param_4 + 10) & 0xfff0 | (int)*(char *)((int)pdVar12 + 0xd) - 0x30U & 0xf;
    *(uint *)(param_4 + 1) =
         *(uint *)(param_4 + 1) & 0xfff | (int)*(char *)((int)pdVar12 + 0xe) << 0xc;
    *(uint *)(param_4 + 1) =
         *(uint *)(param_4 + 1) & 0xf0ff | ((int)*(char *)((int)pdVar12 + 0xf) - 0x30U & 0xf) << 8;
    *(uint *)(param_4 + 1) =
         *(uint *)(param_4 + 1) & 0xff0f | ((int)*(char *)(pdVar12 + 2) - 0x30U & 0xf) << 4;
    *(uint *)(param_4 + 1) =
         *(uint *)(param_4 + 1) & 0xfff0 | (int)*(char *)((int)pdVar12 + 0x11) - 0x30U & 0xf;
    pcVar29 = (char *)CONCAT22(uVar27,(char *)((int)pdVar12 + 0x13));
    if (*pcVar29 == '-') {
      *(uint *)((int)param_4 + 2) = *(uint *)((int)param_4 + 2) & 0xbfff | 0x4000;
      pcVar29 = (char *)CONCAT22(uVar27,(char *)((int)pdVar12 + 0x14));
    }
    else if (*pcVar29 == '+') {
      pcVar29 = (char *)CONCAT22(uVar27,(char *)((int)pdVar12 + 0x14));
    }
    uVar27 = (undefined2)((ulong)pcVar29 >> 0x10);
    *(uint *)((int)param_4 + 2) =
         *(uint *)((int)param_4 + 2) & 0xf0ff | ((int)*pcVar29 - 0x30U & 0xf) << 8;
    *(uint *)((int)param_4 + 2) =
         *(uint *)((int)param_4 + 2) & 0xff0f | ((int)((char *)pcVar29)[1] - 0x30U & 0xf) << 4;
    pdVar12 = (double *)
              (*(uint *)((int)param_4 + 2) & 0xfff0 | (int)((char *)pcVar29)[2] - 0x30U & 0xf);
    *(uint *)((int)param_4 + 2) = (uint)pdVar12;
    return pdVar12;
  case (byte *)0x10:
    goto switchD_1000_a40d_caseD_10;
  case (byte *)0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (byte *)0x12:
    (&stack0x0642)[(int)pbVar22] = (&stack0x0642)[(int)pbVar22] + bVar15;
    if (*(uint *)(pbVar22 + 4) != 0) {
      lVar4 = ZEXT24(pdVar12) * (ulong)*(uint *)(pbVar22 + 4);
      uVar17 = (uint)((ulong)lVar4 >> 0x10);
      uVar14 = (uint)lVar4;
      bVar24 = CARRY2((uint)piVar19,uVar14);
      piVar19 = (int *)((int)piVar19 + uVar14);
      uVar14 = (uint)bVar24;
      puVar21 = &stack0xfffe + uVar17 + uVar14;
      in_CX = in_CX + (uint)(CARRY2((uint)&stack0xfffe,uVar17) ||
                            CARRY2((uint)(&stack0xfffe + uVar17),uVar14));
    }
    puVar3 = (undefined1 *)CONCAT22(in_CX,puVar21) +
             (ulong)*(uint *)(pbVar23 + 6) * (ulong)*(uint *)(pbVar22 + 6);
    if (unaff_BP != 0) {
      unaff_DI = unaff_DI | 1;
    }
    if (((ulong)puVar3 & 0x80000000) == 0) {
      in_stack_00000000 = in_stack_00000000 + -1;
      bVar24 = (int)unaff_DI < 0;
      unaff_DI = unaff_DI << 1;
      bVar25 = (int)unaff_SI < 0;
      unaff_SI = (byte *)((int)unaff_SI << 1 | (uint)bVar24);
      bVar24 = (int)piVar19 < 0;
      piVar19 = (int *)((int)piVar19 << 1 | (uint)bVar25);
      puVar3 = (undefined1 *)
               CONCAT22((int)((ulong)puVar3 >> 0x10) << 1 | (uint)((int)(undefined1 *)puVar3 < 0),
                        (undefined1 *)((int)(undefined1 *)puVar3 << 1 | (uint)bVar24));
    }
    uVar14 = (uint)((ulong)puVar3 >> 0x10);
    puVar13 = (undefined1 *)puVar3;
    bVar7 = *(byte *)0xb;
    if ((bool)(bVar7 & 1)) {
      pbVar23 = unaff_SI;
      if (unaff_DI != 0) {
        *(uint *)0x16 = *(uint *)0x16 | 0x20;
        if ((bool)(bVar7 >> 2 & 1)) {
          if ((!(bool)(bVar7 >> 3 & 1)) && ((int)in_stack_00000002 < 0)) goto LAB_1d5a_159d;
        }
        else if ((bool)(bVar7 >> 3 & 1)) {
          if (-1 < (int)in_stack_00000002) goto LAB_1d5a_159d;
        }
        else if ((0x8000 < unaff_DI) || ((0x7fff < unaff_DI && (((uint)unaff_SI & 1) != 0)))) {
LAB_1d5a_159d:
          bVar24 = CARRY2((uint)piVar19,(uint)((byte *)0xfffe < unaff_SI));
          piVar19 = (int *)((int)piVar19 + (uint)((byte *)0xfffe < unaff_SI));
          uVar17 = (uint)bVar24;
          puVar3 = puVar3 + uVar17;
          pbVar23 = unaff_SI + 1;
          if (CARRY2(uVar14,(uint)CARRY2((uint)puVar13,uVar17))) {
            puVar3 = (undefined1 *)CONCAT22(0x8000,puVar13 + uVar17);
            in_stack_00000000 = in_stack_00000000 + 1;
          }
        }
      }
    }
    else if ((bool)(bVar7 >> 1 & 1)) {
      uVar17 = CONCAT11((char)((uint)unaff_SI >> 8),
                        (byte)unaff_DI | (byte)(unaff_DI >> 8) | (byte)unaff_SI) & 0x7ff;
      pbVar23 = (byte *)((uint)unaff_SI & 0xf8ff);
      if (uVar17 == 0) goto LAB_1d5a_15ae;
      *(uint *)0x16 = *(uint *)0x16 | 0x20;
      bVar15 = (byte)((uint)pbVar23 >> 8);
      if ((bool)(bVar7 >> 2 & 1)) {
        if ((!(bool)(bVar7 >> 3 & 1)) && ((int)in_stack_00000002 < 0)) goto LAB_1d5a_1643;
      }
      else if ((bool)(bVar7 >> 3 & 1)) {
        if (-1 < (int)in_stack_00000002) goto LAB_1d5a_1643;
      }
      else if ((0x400 < uVar17) || ((0x3ff < uVar17 && (((uint)unaff_SI & 0x800) != 0)))) {
LAB_1d5a_1643:
        pbVar23 = (byte *)((uint)(byte)(bVar15 + 8) << 8);
        uVar17 = (uint)(0xf7 < bVar15);
        bVar24 = CARRY2((uint)piVar19,uVar17);
        piVar19 = (int *)((int)piVar19 + uVar17);
        uVar17 = (uint)bVar24;
        puVar3 = puVar3 + uVar17;
        if (CARRY2(uVar14,(uint)CARRY2((uint)puVar13,uVar17))) {
          puVar3 = (undefined1 *)CONCAT22(0x8000,puVar13 + uVar17);
          in_stack_00000000 = in_stack_00000000 + 1;
        }
      }
      pbVar23 = (byte *)((uint)pbVar23 & 0xff00);
    }
    else {
      pbVar23 = (byte *)((uint)unaff_SI | unaff_DI);
      uVar17 = CONCAT11((char)puVar3,
                        (byte)((uint)piVar19 | (uint)pbVar23) |
                        (byte)(((uint)piVar19 | (uint)pbVar23) >> 8));
      if (uVar17 != 0) {
        *(uint *)0x16 = *(uint *)0x16 | 0x20;
        bVar15 = (byte)((ulong)puVar3 >> 8);
        if ((bool)(bVar7 >> 2 & 1)) {
          if ((!(bool)(bVar7 >> 3 & 1)) && ((int)in_stack_00000002 < 0)) goto LAB_1d5a_154d;
        }
        else if ((bool)(bVar7 >> 3 & 1)) {
          if (-1 < (int)in_stack_00000002) goto LAB_1d5a_154d;
        }
        else if ((0x8000 < uVar17) || ((0x7fff < uVar17 && (((ulong)puVar3 & 0x100) != 0)))) {
LAB_1d5a_154d:
          bVar7 = bVar15 + 1;
          uVar17 = (uint)(0xfe < bVar15);
          puVar3 = (undefined1 *)((ulong)CONCAT21(uVar14 + uVar17,bVar7) << 8);
          if (CARRY2(uVar14,uVar17)) {
            puVar3 = (undefined1 *)CONCAT22(0x8000,(undefined1 *)((uint)bVar7 << 8));
            in_stack_00000000 = in_stack_00000000 + 1;
          }
        }
        pbVar23 = (byte *)0x0;
        puVar3 = (undefined1 *)((ulong)puVar3 & 0xffffff00);
      }
      piVar19 = (int *)0x0;
    }
LAB_1d5a_15ae:
    puVar8 = (undefined2 *)*(undefined2 *)0x96;
    *puVar8 = pbVar23;
    puVar8[1] = piVar19;
    puVar8[2] = (undefined1 *)puVar3;
    puVar8[3] = (int)((ulong)puVar3 >> 0x10);
    cVar6 = (char)((in_stack_00000002 & 0x80ff) >> 8);
    *(char *)(puVar8 + 5) = cVar6;
    if (in_stack_00000000 < 0x4000) {
      if (in_stack_00000000 < -0x3ffe) {
        pdVar12 = (double *)FUN_1d5a_1092();
        *(char *)(puVar8 + 5) = (char)((uint)pdVar12 >> 8);
        return pdVar12;
      }
      puVar8[4] = in_stack_00000000;
      *(undefined1 *)((int)puVar8 + 0xb) = 0;
      return (double *)(in_stack_00000002 & 0x80ff);
    }
    *(uint *)0x16 = *(uint *)0x16 | 8;
    bVar7 = *(byte *)0xb >> 3;
    if ((bool)(*(byte *)0xb >> 2 & 1)) {
      if (((bool)(bVar7 & 1)) || (*(uint *)0x16 = *(uint *)0x16 | 0x20, cVar6 == '\0'))
      goto LAB_1d5a_1687;
    }
    else if (((bool)(bVar7 & 1)) && (*(uint *)0x16 = *(uint *)0x16 | 0x20, cVar6 != '\0')) {
LAB_1d5a_1687:
      pdVar12 = (double *)FUN_1d5a_1092();
      *(char *)(puVar8 + 5) = (char)((uint)pdVar12 >> 8);
      return pdVar12;
    }
    pdVar12 = (double *)FUN_1d5a_1092();
    *(char *)(puVar8 + 5) = (char)((uint)pdVar12 >> 8);
    return pdVar12;
  case (byte *)0x13:
  case (byte *)0x3:
    puVar13 = &stack0xfffa;
code_r0x00010003:
    _aFchkstk();
    *(undefined2 *)(puVar13 + -6) = 0;
    resetbrd();
    puVar8 = (undefined2 *)check_board_type();
    *(undefined2 *)0x2b30 = *puVar8;
    *(undefined2 *)0x2b32 = puVar8[1];
    *(undefined2 *)0x2b34 = puVar8[2];
    do {
      menudraw();
      uVar5 = _getch();
      puVar13[-4] = uVar5;
      pdVar9 = (double *)((int)(char)puVar13[-4] - 0x1b);
      pdVar12 = pdVar9;
      if (pdVar9 < (double *)0x1f) {
        pdVar12 = (double *)((int)pdVar9 * 2);
        switch(pdVar9) {
        case (double *)0x0:
        case (double *)0x15:
          *(undefined2 *)(puVar13 + -6) = 1;
          break;
        case (double *)0x16:
          pdVar12 = (double *)fulltest();
          break;
        case (double *)0x17:
          pdVar12 = (double *)registertest();
          break;
        case (double *)0x18:
          pdVar12 = (double *)dpramtest();
          break;
        case (double *)0x19:
          pdVar12 = (double *)mainmemtest();
          break;
        case (double *)0x1a:
          pdVar12 = (double *)uarttest();
          break;
        case (double *)0x1b:
          pdVar12 = (double *)analogtest();
          break;
        case (double *)0x1c:
          pdVar12 = (double *)load_test();
          break;
        case (double *)0x1d:
          pdVar12 = (double *)multitest();
          break;
        case (double *)0x1e:
          pdVar12 = (double *)viewer();
        }
      }
    } while (*(int *)(puVar13 + -6) == 0);
    return pdVar12;
  case (byte *)0x14:
    pbVar23 = unaff_SI + 1;
    *(int *)param_1 = piVar19[iVar18];
    for (iVar18 = 0; iVar18 < 3; iVar18 = iVar18 + 1) {
      pbVar22 = pbVar23 + 1;
      iVar16 = *(int *)(*(int *)0x23a0 + 0x404 + (int)pbVar23 * 2);
      pbVar23 = pbVar23 + 2;
      aiStack_1c[iVar18 * 2 + 2] = *(int *)(*(int *)0x23a0 + 0x404 + (int)pbVar22 * 2);
      aiStack_1c[iVar18 * 2 + 3] = iVar16;
    }
    if ((param_2 != (double *)0x0) || (param_3 != (double *)0x0)) {
      BCDtoDouble();
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      *param_2 = (double)in_ST0;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      in_ST0 = in_ST1;
      in_ST1 = in_ST2;
    }
    for (iVar18 = 0; iVar18 < 3; iVar18 = iVar18 + 1) {
      pbVar22 = pbVar23 + 1;
      iVar16 = *(int *)(*(int *)0x23a0 + 0x404 + (int)pbVar23 * 2);
      pbVar23 = pbVar23 + 2;
      aiStack_1c[iVar18 * 2 + 2] = *(int *)(*(int *)0x23a0 + 0x404 + (int)pbVar22 * 2);
      aiStack_1c[iVar18 * 2 + 3] = iVar16;
    }
    if ((param_4 != (double *)0x0) || (param_5 != (double *)0x0)) {
      BCDtoDouble();
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      *param_4 = (double)in_ST0;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      in_ST0 = in_ST1;
    }
    for (iVar18 = 0; iVar18 < 3; iVar18 = iVar18 + 1) {
      pbVar22 = pbVar23 + 1;
      iVar16 = *(int *)(*(int *)0x23a0 + 0x404 + (int)pbVar23 * 2);
      pbVar23 = pbVar23 + 2;
      aiStack_1c[iVar18 * 2 + 2] = *(int *)(*(int *)0x23a0 + 0x404 + (int)pbVar22 * 2);
      aiStack_1c[iVar18 * 2 + 3] = iVar16;
    }
    if ((param_6 != (double *)0x0) || (param_7 != (double *)0x0)) {
      BCDtoDouble();
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      *param_6 = (double)in_ST0;
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
    }
    return (double *)0x1;
  case (byte *)0x15:
    in_AF = 9 < (bVar7 & 0xf) | in_AF;
    bVar15 = in(CONCAT11(0x69,(char)((ulong)pbVar26 >> 0x10)));
    *pbVar22 = bVar15;
    puVar8 = (undefined2 *)in(0xd5);
    pcVar2 = (code *)swi(4);
    if (SCARRY2(CONCAT11(cVar6 - in_AF,bVar7 + in_AF * -6) & 0xff0f,0x37bd)) {
      (*pcVar2)();
    }
    iVar18 = puVar8[6];
    if ((*(byte *)(puVar8[4] + (int)*puVar8) & (byte)puVar8[5]) != 0) {
      out(*(undefined1 *)puVar8[1],puVar8[5]);
      pcVar2 = (code *)swi(1);
      pdVar12 = (double *)(*pcVar2)();
      return pdVar12;
    }
    *(undefined2 *)*puVar8 = puVar8[7];
    uVar5 = in(0x3f);
    if (iVar18 != 1) {
      puVar8[8] = param_3;
      pcVar2 = (code *)swi(3);
      pdVar12 = (double *)(*pcVar2)();
      return pdVar12;
    }
    out(0xc9,uVar5);
    puVar20 = puVar8 + 8;
    puVar8[8] = puVar8[8];
    pcVar2 = (code *)swi(0x14);
    (*pcVar2)();
    *(undefined2 *)((int)puVar20 + -2) = unaff_DS;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (byte *)0x16:
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (*(int *)0x2928 != 0) {
      bVar24 = false;
      (*(code *)*(undefined2 *)0x2926)();
      if (bVar24) {
        pdVar12 = (double *)_fptrap();
        return pdVar12;
      }
      (*(code *)*(undefined2 *)0x2926)();
    }
    iVar18 = *(int *)0x2c;
    if (iVar18 == 0) goto LAB_18a2_01b9;
    pbVar23 = (byte *)0x0;
    goto LAB_18a2_017f;
  case (byte *)0x17:
switchD_1000_a40d_caseD_17:
    pdVar12 = (double *)0xffff;
    break;
  case (byte *)0x18:
    in(iVar18);
    goto code_r0x00010003;
  }
  return pdVar12;
}



// Function: FUN_1000_a4ac @ 1000:a4ac

uint FUN_1000_a4ac(uint param_1)

{
  undefined2 unaff_DS;
  
  if ((*(byte *)(param_1 + 0x2753) & 4) == 0) {
    param_1 = (param_1 & 0xffdf) - 7;
  }
  return param_1;
}



// Function: FUN_18a2_1aaa @ 18a2:1aaa

uint FUN_18a2_1aaa(int *param_1)

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
    uVar4 = _filbuf(piVar5,uVar6);
  }
  else {
    pbVar2 = (byte *)*param_1;
    iVar3 = piVar5[1];
    *param_1 = *param_1 + 1;
    uVar4 = (uint)*pbVar2;
  }
  return uVar4;
}



// Function: FUN_18a2_1ae2 @ 18a2:1ae2

void FUN_18a2_1ae2(undefined2 param_1,undefined2 param_2,int param_3)

{
  if (param_3 != -1) {
    ungetc(param_3,param_1,param_2);
  }
  return;
}



// Function: FUN_18a2_1b00 @ 18a2:1b00

void FUN_18a2_1b00(undefined2 param_1,undefined2 param_2,int *param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  
  do {
    *param_3 = *param_3 + 1;
    iVar1 = FUN_18a2_1aaa(param_1,param_2);
  } while ((*(byte *)(iVar1 + 0x2753) & 8) != 0);
  return;
}



// Function: _output @ 18a2:1b34

undefined2 __cdecl16far _output(undefined2 param_1,undefined2 param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  
  _aFchkstk();
  cVar1 = *param_3;
  if (cVar1 == '\0') {
    return 0;
  }
  if ((byte)(cVar1 - 0x20U) < 0x59) {
    bVar2 = *(byte *)(ulong)((byte)(cVar1 - 0x20U) + 0x2660) & 0xf;
  }
  else {
    bVar2 = 0;
  }
                    /* WARNING: Could not emulate address calculation at 0x0001a59a */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*(undefined2 *)
                     ((char)(*(byte *)(ulong)((byte)(bVar2 * '\b') + 0x2660) >> 4) * 2 + 0x1b24))
                    (cVar1);
  return uVar3;
}



// Function: _getstream @ 18a2:201e

undefined2 * __cdecl16far _getstream(void)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)0x2468;
  while( true ) {
    if ((undefined2 *)*(undefined2 *)0x2648 < puVar1) {
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



// Function: _close @ 18a2:206c

void _close(undefined2 param_1,uint param_2)

{
  code *pcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  bVar2 = param_2 < *(uint *)0x23fa;
  if (bVar2) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!bVar2) {
      *(undefined1 *)(param_2 + 0x23fc) = 0;
    }
  }
  _dosret0();
  return;
}



// Function: _lseek @ 18a2:208c

void _lseek(undefined2 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(uint *)0x23fa <= param_2) goto LAB_18a2_210a;
  bVar5 = false;
  if ((*(int *)0x274e != 0) && (bVar5 = false, (param_4 & 0x8000) != 0)) {
    if (param_5 == 0) goto LAB_18a2_210a;
    bVar5 = false;
    pcVar2 = (code *)swi(0x21);
    uVar6 = (*pcVar2)();
    uVar3 = (uint)((ulong)uVar6 >> 0x10);
    if (bVar5) goto LAB_18a2_210a;
    if ((param_5 & 2) == 0) {
      uVar1 = (uint)CARRY2((uint)uVar6,param_3);
      bVar5 = CARRY2(uVar3,param_4) || CARRY2(uVar3 + param_4,uVar1);
      if ((int)(uVar3 + param_4 + uVar1) < 0) goto LAB_18a2_210a;
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
        goto LAB_18a2_210a;
      }
    }
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (!bVar5) {
    *(byte *)(param_2 + 0x23fc) = *(byte *)(param_2 + 0x23fc) & 0xfd;
  }
LAB_18a2_210a:
  _dosretax();
  return;
}



// Function: _read @ 18a2:210e

/* WARNING: Removing unreachable block (ram,0x0001ac2a) */
/* WARNING: Removing unreachable block (ram,0x0001ac1f) */

void _read(undefined2 param_1,uint param_2,undefined4 param_3,int param_4)

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
  
  if (((*(uint *)0x23fa <= param_2) || (param_4 == 0)) || ((*(byte *)(param_2 + 0x23fc) & 2) != 0))
  {
LAB_18a2_2196:
    _dosretax();
    return;
  }
  uVar10 = *(uint *)0x2918 < 0xd6d6;
  if (*(uint *)0x2918 == 0xd6d6) {
    (*(code *)*(undefined2 *)0x291a)();
  }
  pcVar3 = (code *)swi(0x21);
  uVar12 = (*pcVar3)();
  pcVar9 = (char *)((ulong)uVar12 >> 0x10);
  if (((bool)uVar10) || ((*(byte *)(param_2 + 0x23fc) & 0x80) == 0)) goto LAB_18a2_2196;
  *(byte *)(param_2 + 0x23fc) = *(byte *)(param_2 + 0x23fc) & 0xfb;
  if ((int)uVar12 == 0) goto LAB_18a2_2196;
  uVar4 = 0xd00;
  if (*pcVar9 == '\n') {
    *(byte *)(param_2 + 0x23fc) = *(byte *)(param_2 + 0x23fc) | 4;
  }
LAB_18a2_2178:
  pcVar8 = (char *)((ulong)uVar12 >> 0x10);
  iVar7 = (int)uVar12;
  pcVar1 = pcVar8 + 1;
  cVar2 = *pcVar8;
  cVar6 = (char)((uint)uVar4 >> 8);
  uVar4 = CONCAT11(cVar6,cVar2);
  if (cVar2 == cVar6) {
    if (iVar7 != 1) {
      if (*pcVar1 != '\n') goto LAB_18a2_2189;
      goto LAB_18a2_218c;
    }
    bVar11 = false;
    if ((*(byte *)(param_2 + 0x23fc) & 0x40) == 0) {
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
        goto LAB_18a2_2189;
      }
      goto LAB_18a2_2196;
    }
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    bVar11 = false;
    uVar10 = extraout_AH;
    if ((extraout_DX & 0x20) == 0) {
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      uVar10 = extraout_AH_00;
      if (bVar11) goto LAB_18a2_2196;
    }
    uVar4 = CONCAT11(uVar10,10);
  }
  else if (cVar2 == '\x1a') {
    *(byte *)(param_2 + 0x23fc) = *(byte *)(param_2 + 0x23fc) | 2;
    goto LAB_18a2_2196;
  }
LAB_18a2_2189:
  *pcVar9 = (char)uVar4;
  pcVar9 = pcVar9 + 1;
LAB_18a2_218c:
  uVar12 = CONCAT22(pcVar1,iVar7 + -1);
  if (iVar7 + -1 == 0) goto LAB_18a2_2196;
  goto LAB_18a2_2178;
}



// Function: strcat @ 18a2:220c

char * __cdecl16far strcat(char *param_1,char *param_2)

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



// Function: strcpy @ 18a2:2260

void __cdecl16far strcpy(char *param_1,char *param_2)

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



// Function: strncmp @ 18a2:229c

uint __cdecl16far strncmp(char *param_1,char *param_2,int param_3)

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



// Function: _itoa @ 18a2:22d8

void _itoa(void)

{
  _cxtoa();
  return;
}



// Function: FUN_18a2_22f4 @ 18a2:22f4

undefined2 __cdecl16far
FUN_18a2_22f4(undefined2 param_1,undefined2 param_2,int param_3,undefined2 param_4,
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
  
  _aFchkstk();
  if ((param_8 == 0) && (iVar1 = getenv(), param_3 == 0 && iVar1 == 0)) {
    *(undefined2 *)0x23ea = 8;
  }
  else {
    puStack_16 = local_8a;
    uStack_18 = param_7;
    uStack_1a = param_6;
    uStack_1c = param_5;
    uStack_1e = param_4;
    uStack_20 = 0x18a2;
    uStack_22 = 0xad8e;
    iVar1 = _cenvarg();
    if (iVar1 != -1) {
      uVar2 = _dospawn();
      _ffree();
      return uVar2;
    }
  }
  return 0xffff;
}



// Function: _spawnve @ 18a2:23aa

undefined2 __cdecl16far
_spawnve(uint param_1,uint param_2,uint param_3,undefined2 param_4,undefined2 param_5,
        undefined2 param_6,undefined2 param_7)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint in_DX;
  uint uVar4;
  undefined2 unaff_DS;
  uint local_14;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  _aFchkstk();
  if (param_1 == 2) {
    uVar1 = _execload(0x18a2,param_2,param_3,param_4,param_5,param_6,param_7);
    return uVar1;
  }
  local_14 = strrchr(param_2,param_3,0x5c);
  uVar5 = in_DX;
  uVar2 = strrchr(param_2,param_3,0x2f);
  uVar4 = in_DX | uVar2;
  if (uVar4 == 0) {
    uVar2 = param_2;
    in_DX = param_3;
    if (uVar5 != 0 || local_14 != 0) goto LAB_18a2_2438;
  }
  else if ((uVar5 != 0 || local_14 != 0) && (uVar2 <= local_14)) goto LAB_18a2_2438;
  uVar4 = in_DX;
  local_14 = uVar2;
  uVar5 = in_DX;
LAB_18a2_2438:
  uVar2 = strchr(local_14,uVar5,0x2e);
  uVar4 = uVar4 | uVar2;
  if (uVar4 == 0) {
    uVar1 = *(undefined2 *)0x2750;
    *(undefined2 *)0x2750 = 0x10;
    iVar3 = strlen(param_2,param_3);
    iVar3 = _fmalloc(iVar3 + 5);
    *(undefined2 *)0x2750 = uVar1;
    if (uVar4 == 0 && iVar3 == 0) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = 0x18a2;
      strcpy(iVar3,uVar4,param_2,param_3);
      strlen(param_2,param_3);
      iVar6 = 2;
      while (local_14 = iVar3, -1 < iVar6) {
        iVar7 = -0x50a6;
        strcpy(*(undefined2 *)(iVar6 * 2 + 0x26fc));
        uVar1 = 0xaf6b;
        iVar6 = _access(0x18a2,iVar3,uVar4,0);
        if (iVar6 != -1) {
          local_14 = 0x18a2;
          uVar1 = FUN_18a2_22f4(param_1,iVar3,uVar4,param_4,param_5,param_6,param_7,iVar7);
          uVar4 = param_1;
          break;
        }
        iVar6 = iVar7 + -1;
      }
      _ffree(local_14,uVar4);
    }
  }
  else {
    uVar1 = 0xae87;
    iVar3 = _access(0x18a2,param_2,param_3,0);
    if (iVar3 != -1) {
      uVar1 = _strcmpi(*(undefined2 *)0x26fc);
      uVar1 = FUN_18a2_22f4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar1);
    }
  }
  return uVar1;
}



// Function: _spawnvpe @ 18a2:2586

int __cdecl16far
_spawnvpe(undefined2 param_1,char *param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,
         undefined2 param_6)

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
  uVar1 = *(undefined2 *)0x2750;
  *(undefined2 *)0x2750 = 0x10;
  local_4 = _spawnve(param_1,(char *)param_2,param_2._2_2_,param_3,param_4,param_5,param_6);
  if ((local_4 == -1) && (*(int *)0x23ea == 2)) {
    uVar2 = strchr((char *)param_2,param_2._2_2_,0x2f);
    in_DX = in_DX | uVar2;
    if (in_DX == 0) {
      uVar2 = strchr((char *)param_2,param_2._2_2_,0x5c);
      in_DX = in_DX | uVar2;
      if ((in_DX == 0) && ((*param_2 == '\0' || (((char *)param_2)[1] != ':')))) {
        uVar2 = getenv(0x2702);
        lVar6 = CONCAT22(in_DX,uVar2);
        in_DX = in_DX | uVar2;
        if (in_DX != 0) {
          pcVar3 = (char *)_fmalloc(0x104);
          local_12 = (char *)CONCAT22(in_DX,pcVar3);
          if (in_DX != 0 || pcVar3 != (char *)0x0) {
            *(undefined2 *)0x2750 = uVar1;
            while( true ) {
              lVar6 = _getpath(lVar6,pcVar3,in_DX,0x103);
              if ((lVar6 == 0) || (*local_12 == '\0')) break;
              iVar4 = strlen(pcVar3,in_DX);
              if ((pcVar3[iVar4 + -1] != '\\') && (pcVar3[iVar4 + -1] != '/')) {
                strcat(pcVar3,in_DX,0x2707);
              }
              iVar4 = strlen(pcVar3,in_DX);
              iVar5 = strlen((char *)param_2,param_2._2_2_);
              if (0x103 < (uint)(iVar4 + iVar5)) break;
              strcat(pcVar3,in_DX,(char *)param_2,param_2._2_2_);
              local_4 = _spawnve(param_1,pcVar3,in_DX,param_3,param_4,param_5,param_6);
              if ((local_4 != -1) ||
                 ((*(int *)0x23ea != 2 &&
                  (((*local_12 != '\\' && (*local_12 != '/')) ||
                   ((pcVar3[1] != '\\' && (pcVar3[1] != '/')))))))) break;
            }
            goto LAB_18a2_272a;
          }
        }
      }
    }
  }
  *(undefined2 *)0x2750 = uVar1;
LAB_18a2_272a:
  if (local_12._2_2_ != 0 || (char *)local_12 != (char *)0x0) {
    _ffree((char *)local_12,local_12._2_2_);
  }
  return local_4;
}



// Function: _access @ 18a2:2748

void _access(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  _dosret0();
  return;
}



// Function: _unlink @ 18a2:276a

void _unlink(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  _dosret0();
  return;
}



// Function: _cropzeros @ 1000:b208

void __cdecl16far _cropzeros(char *param_1)

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



// Function: _positive @ 1000:b282

undefined2 __cdecl16far _positive(int param_1)

{
  code *pcVar1;
  int iVar2;
  int in_CX;
  undefined2 unaff_SS;
  bool bVar3;
  char cVar4;
  char cVar5;
  byte bStack_3;
  
  pcVar1 = (code *)swi(0x3c);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x38);
  iVar2 = (*pcVar1)();
  cVar5 = SBORROW2(iVar2,param_1);
  cVar4 = iVar2 - param_1 < 0;
  bVar3 = iVar2 == param_1;
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  do {
  } while (bVar3 || cVar5 != cVar4);
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  if (((&bStack_3)[-in_CX] & 1) == 0) {
    return 1;
  }
  return 0;
}



// Function: _fassign @ 1000:b2b0

void __cdecl16far _fassign(int param_1,float *param_2,undefined2 param_3,undefined2 param_4)

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
    puVar2 = (undefined2 *)atof(param_3,param_4);
    uVar5 = (undefined2)((ulong)param_2 >> 0x10);
    *(undefined2 *)param_2 = *puVar2;
    *(undefined2 *)((int)pfVar4 + 2) = puVar2[1];
    *(undefined2 *)(pfVar4 + 1) = puVar2[2];
    *(undefined2 *)((int)pfVar4 + 6) = puVar2[3];
    return;
  }
  pdVar3 = (double *)atof(param_3,param_4);
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



// Function: _cftoe @ 18a2:28e2

undefined1 * __cdecl16far
_cftoe(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4,int param_5)

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
  
  if (*(char *)0x270a == '\0') {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar3 = (undefined2 *)param_1;
    piVar1 = (int *)_fltout(*param_1,puVar3[1],puVar3[2],puVar3[3]);
    local_6 = (int *)CONCAT22(in_DX,piVar1);
    _fptostr(param_2 + (uint)(0 < param_4) + (uint)(*local_6 == 0x2d),param_3,param_4 + 1,piVar1,
             in_DX);
  }
  else {
    local_6 = (int *)CONCAT22(*(undefined2 *)0x2b18,(int *)*(undefined2 *)0x2b16);
    FUN_18a2_2d52(0 < param_4,param_2 + (*(int *)*(undefined2 *)0x2b16 == 0x2d),param_3);
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
           strcpy((undefined1 *)local_a + param_4 + (uint)(*(char *)0x270a == '\0'),local_a._2_2_,
                  9999);
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



// Function: FUN_18a2_2a70 @ 18a2:2a70

void __cdecl16far
FUN_18a2_2a70(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  undefined2 unaff_DS;
  
  *(undefined1 *)0x270a = 1;
  _cftoe(param_1,param_2,param_3,param_4,param_5,param_6);
  *(undefined1 *)0x270a = 0;
  return;
}



// Function: _cftof @ 18a2:2a9a

undefined1 * __cdecl16far
_cftof(undefined2 *param_1,undefined1 *param_2,undefined2 param_3,int param_4)

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
  
  if (*(char *)0x270a == '\0') {
    uVar5 = (undefined2)((ulong)param_1 >> 0x10);
    puVar3 = (undefined2 *)param_1;
    piVar4 = (int *)_fltout(*param_1,puVar3[1],puVar3[2],puVar3[3]);
    local_6 = (int *)CONCAT22(in_DX,piVar4);
    _fptostr(param_2 + (*local_6 == 0x2d),param_3,piVar4[1] + param_4,piVar4,in_DX);
  }
  else {
    local_6 = (int *)CONCAT22(*(undefined2 *)0x2b18,(int *)*(undefined2 *)0x2b16);
    bVar6 = *(int *)*(undefined2 *)0x2b16 == 0x2d;
    iVar2 = *(int *)0x270c;
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
    FUN_18a2_2d52(1,puVar1,param_3);
    puVar1 = puVar1 + 1;
    *local_10 = 0x30;
  }
  else {
    puVar1 = puVar1 + piVar4[1];
  }
  local_10 = (undefined1 *)CONCAT22(param_3,puVar1);
  if (0 < param_4) {
    FUN_18a2_2d52(1,puVar1,param_3);
    *local_10 = 0x2e;
    if (piVar4[1] < 0) {
      if (*(char *)0x270a == '\0') {
        iVar2 = -piVar4[1];
        if (-param_4 != piVar4[1] && param_4 <= iVar2) {
          iVar2 = param_4;
        }
      }
      else {
        iVar2 = -piVar4[1];
      }
      FUN_18a2_2d52(iVar2,puVar1 + 1,param_3);
      memset(puVar1 + 1,param_3,0x30,iVar2);
    }
  }
  return param_2;
}



// Function: FUN_18a2_2bf6 @ 18a2:2bf6

void __cdecl16far
FUN_18a2_2bf6(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 unaff_DS;
  
  *(undefined1 *)0x270a = 1;
  _cftof(param_1,param_2,param_3,param_4,param_5);
  *(undefined1 *)0x270a = 0;
  return;
}



// Function: _cftog @ 18a2:2c1e

void __cdecl16far
_cftog(undefined2 *param_1,int param_2,undefined2 param_3,int param_4,undefined2 param_5)

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
  uVar3 = _fltout(*param_1,puVar6[1],puVar6[2],puVar6[3]);
  *(undefined2 *)0x2b16 = uVar3;
  *(undefined2 *)0x2b18 = in_DX;
  piVar1 = (int *)*(undefined4 *)0x2b16;
  uVar3 = (undefined2)((ulong)piVar1 >> 0x10);
  *(int *)0x270c = ((int *)piVar1)[1] + -1;
  pcVar4 = (char *)((uint)(*piVar1 == 0x2d) + param_2);
  local_6 = (char *)CONCAT22(param_3,pcVar4);
  _fptostr(pcVar4,param_3,param_4,(int *)piVar1,uVar3);
  iVar5 = *(int *)((int)*(undefined4 *)0x2b16 + 2) + -1;
  *(bool *)0x270e = *(int *)0x270c < iVar5;
  *(int *)0x270c = iVar5;
  if ((-5 < iVar5) && (iVar5 < param_4)) {
    if (*(char *)0x270e != '\0') {
      do {
        pcVar2 = local_6;
        uVar3 = (undefined2)((ulong)local_6 >> 0x10);
        pcVar4 = (char *)local_6;
        local_6 = (char *)CONCAT22(uVar3,(char *)local_6 + 1);
      } while (*pcVar2 != '\0');
      pcVar4[-1] = '\0';
    }
    FUN_18a2_2bf6(puVar6,uVar7,param_2,param_3,param_4);
    return;
  }
  FUN_18a2_2a70(puVar6,uVar7,param_2,param_3,param_4,param_5);
  return;
}



// Function: _cfltcvt @ 1000:b712

void __cdecl16far
_cfltcvt(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,int param_5,
        undefined2 param_6,undefined2 param_7)

{
  if ((param_5 == 0x65) || (param_5 == 0x45)) {
    _cftoe(param_1,param_2,param_3,param_4,param_6,param_7);
  }
  else {
    if (param_5 != 0x66) {
      _cftog(param_1,param_2,param_3,param_4,param_6,param_7);
      return;
    }
    _cftof(param_1,param_2,param_3,param_4,param_6);
  }
  return;
}



// Function: FUN_18a2_2d52 @ 18a2:2d52

void FUN_18a2_2d52(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = strlen(param_2,param_3);
    memmove(param_2 + param_1,param_3,param_2,param_3,iVar1 + 1);
  }
  return;
}



// Function: _myalloc @ 18a2:2dc8

void __cdecl16near _myalloc(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_DX;
  undefined2 unaff_DS;
  
  LOCK();
  uVar1 = *(undefined2 *)0x2750;
  *(undefined2 *)0x2750 = 0x400;
  UNLOCK();
  iVar2 = _fmalloc();
  *(undefined2 *)0x2750 = uVar1;
  if (in_DX != 0 || iVar2 != 0) {
    return;
  }
  _amsg_exit();
  return;
}



// Function: _dosret0 @ 18a2:2dee

undefined2 __cdecl16far _dosret0(void)

{
  bool in_CF;
  
  if (!in_CF) {
    return 0;
  }
  FUN_18a2_2e16();
  return 0xffff;
}



// Function: _dosreturn @ 18a2:2df6

undefined1 __cdecl16far _dosreturn(void)

{
  undefined1 in_AL;
  bool in_CF;
  
  if (in_CF) {
    FUN_18a2_2e16();
    return in_AL;
  }
  return 0;
}



// Function: _dosretax @ 18a2:2e03

void __cdecl16far _dosretax(void)

{
  bool in_CF;
  
  if (in_CF) {
    FUN_18a2_2e16();
  }
  return;
}



// Function: FUN_18a2_2e16 @ 18a2:2e16

void __cdecl16near FUN_18a2_2e16(void)

{
  byte bVar1;
  char cVar2;
  uint in_AX;
  undefined2 unaff_DS;
  
  bVar1 = (byte)in_AX;
  *(byte *)0x23f8 = bVar1;
  cVar2 = (char)(in_AX >> 8);
  if (cVar2 != '\0') goto LAB_18a2_2e3a;
  if (*(byte *)0x23f3 < 3) {
LAB_18a2_2e30:
    if (0x13 < bVar1) {
LAB_18a2_2e34:
      in_AX = 0x13;
    }
  }
  else {
    if (0x21 < bVar1) goto LAB_18a2_2e34;
    if (bVar1 < 0x20) goto LAB_18a2_2e30;
    in_AX = 5;
  }
  cVar2 = *(char *)(ulong)((in_AX & 0xff) + 0x2736);
LAB_18a2_2e3a:
  *(int *)0x23ea = (int)cVar2;
  return;
}



// Function: _getbuf @ 18a2:2e5a

void __cdecl16near _getbuf(int *param_1)

{
  int iVar1;
  int in_DX;
  int unaff_DS;
  
  iVar1 = _fmalloc(0x200);
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



// Function: ungetc @ 18a2:2ea6

uint __cdecl16far ungetc(uint param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined2 unaff_DS;
  
  if ((param_1 == 0xffff) ||
     (((*(byte *)(param_2 + 5) & 1) == 0 &&
      (((*(byte *)(param_2 + 5) & 0x80) == 0 || ((*(byte *)(param_2 + 5) & 2) != 0)))))) {
switchD_1000_a40d_caseD_17:
    param_1 = 0xffff;
  }
  else {
    if (param_2[4] == 0 && param_2[3] == 0) {
      _getbuf(param_2);
    }
    if ((param_2[3] == *param_2) && (param_2[4] == param_2[1])) {
      if (param_2[2] != 0) goto switchD_1000_a40d_caseD_17;
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



// Function: _sopen @ 18a2:2f16

/* WARNING: Removing unreachable block (ram,0x0001ba4e) */

uint __cdecl16far
_sopen(undefined2 param_1,undefined2 param_2,uint param_3,char param_4,uint param_5)

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
  if (2 < *(byte *)0x23f3) {
    cVar2 = param_4;
  }
  _param_4 = param_5;
  local_4 = CONCAT11(local_4._1_1_,cVar2);
  local_6 = 0;
  if (((param_3 & 0x8000) == 0) && (((param_3 & 0x4000) != 0 || ((*(byte *)0x28ad & 0x80) == 0)))) {
    local_6 = 0x80;
  }
  bVar7 = false;
  pcVar1 = (code *)swi(0x21);
  uVar5 = param_3;
  uVar3 = (*pcVar1)();
  if (bVar7) {
    if ((uVar3 != 2) || ((uVar5 & 0x100) == 0)) goto LAB_18a2_2f76;
    bVar7 = false;
    _cXENIXtoDOSmode();
    uVar8 = 0;
    uVar5 = 0;
    _param_4 = param_5;
LAB_18a2_3038:
    pcVar1 = (code *)swi(0x21);
    uVar3 = (*pcVar1)();
    if ((bool)uVar8) {
LAB_18a2_3043:
      uVar5 = _dosretax();
      return uVar5;
    }
    local_4 = in_stack_00000000;
    if ((cVar2 != '\0') || ((param_3 & 2) == 0)) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      bVar9 = false;
      pcVar1 = (code *)swi(0x21);
      uVar3 = (*pcVar1)();
      if (bVar9) goto LAB_18a2_3043;
      if ((!bVar7) && ((_param_4 & 1) != 0)) {
        bVar7 = false;
        uVar5 = (uint)(byte)((byte)uVar5 | 1);
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
        if (bVar7) goto LAB_18a2_3043;
      }
    }
  }
  else {
    if ((uVar5 & 0x500) == 0x500) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      goto LAB_18a2_2f76;
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
          goto LAB_18a2_3038;
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
  if (uVar3 < *(uint *)0x23fa) {
    *(byte *)(uVar3 + 0x23fc) = bVar6 | local_6 | 1;
    return uVar3;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
LAB_18a2_2f76:
  uVar5 = _dosretax();
  return uVar5;
}



// Function: _cXENIXtoDOSmode @ 18a2:30d1

void __cdecl16near _cXENIXtoDOSmode(void)

{
  return;
}



// Function: _write @ 18a2:30e2

/* WARNING: Unable to track spacebase fully for stack */

undefined2 _write(undefined2 param_1,uint param_2,char *param_3,int param_4)

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
  
  if (*(uint *)0x23fa <= param_2) {
LAB_18a2_30f5:
    uVar4 = _dosretax();
    return uVar4;
  }
  if (*(int *)0x2918 == -0x292a) {
    (*(code *)*(undefined2 *)0x291a)();
  }
  if ((*(byte *)(param_2 + 0x23fc) & 0x20) != 0) {
    bVar10 = false;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (bVar10) goto LAB_18a2_30f5;
  }
  if ((*(byte *)(param_2 + 0x23fc) & 0x80) != 0) {
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
      if (!bVar10) goto LAB_18a2_3199;
      pcVar8 = pcVar7;
      uVar5 = _stackavail();
      if (uVar5 < 0xa9) {
        uVar4 = _aFchkstk();
        bVar10 = pcVar9 < pcVar8;
        if (pcVar9 != pcVar8) {
          pcVar2 = (code *)swi(0x21);
          uVar5 = (*pcVar2)();
          if ((bVar10) || (uVar5 < (uint)((int)pcVar9 - (int)pcVar8))) {
            uVar4 = _dosretax();
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
            cVar3 = FUN_18a2_31a2();
          }
          pcVar1 = pcVar9;
          pcVar9 = pcVar9 + 1;
          *pcVar1 = cVar3;
          cVar3 = '\n';
        }
        if (pcVar9 == pcVar8) {
          cVar3 = FUN_18a2_31a2();
        }
        pcVar1 = pcVar9;
        pcVar9 = pcVar9 + 1;
        *pcVar1 = cVar3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      FUN_18a2_31a2();
    }
    uVar4 = FUN_18a2_31f7();
    return uVar4;
  }
LAB_18a2_3199:
  uVar4 = FUN_18a2_3208();
  return uVar4;
}



// Function: FUN_18a2_31a2 @ 18a2:31a2

/* WARNING: Unable to track spacebase fully for stack */

undefined2 __cdecl16near FUN_18a2_31a2(void)

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
      uVar3 = _dosretax();
      return uVar3;
    }
  }
  return in_AX;
}



// Function: FUN_18a2_31f7 @ 18a2:31f7

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_18a2_31f7(void)

{
  _dosretax();
  return;
}



// Function: FUN_18a2_3208 @ 18a2:3208

void FUN_18a2_3208(void)

{
  code *pcVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if (*(int *)(unaff_BP + 0xc) != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    _dosretax();
    return;
  }
  _dosretax();
  return;
}



// Function: atof @ 18a2:3342

undefined2 __cdecl16far atof(char *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 in_DX;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  while (uVar3 = (undefined2)((ulong)param_1 >> 0x10), (*(byte *)(*param_1 + 0x2753) & 8) != 0) {
    param_1 = (char *)CONCAT22(uVar3,(char *)param_1 + 1);
  }
  uVar1 = strlen((char *)param_1,uVar3,0,0);
  iVar2 = _fltin((char *)param_1,uVar3,uVar1);
  *(undefined2 *)0x3712 = *(undefined2 *)(iVar2 + 8);
  *(undefined2 *)0x3714 = *(undefined2 *)(iVar2 + 10);
  *(undefined2 *)0x3716 = *(undefined2 *)(iVar2 + 0xc);
  *(undefined2 *)0x3718 = *(undefined2 *)(iVar2 + 0xe);
  return 0x3712;
}



// Function: _fptostr @ 18a2:339a

void __cdecl16far _fptostr(char *param_1,int param_2,undefined4 param_3)

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
    strcpy(pcVar4,uVar6,pcVar4 + 1,uVar6);
  }
  return;
}



// Function: _DOSDEVCONFIG @ 1000:be62

undefined2 __stdcall16far _DOSDEVCONFIG(undefined2 param_1,undefined2 param_2,undefined2 *param_3)

{
  *param_3 = 1;
  return 0;
}



// Function: _DOSGETMACHINEMODE @ 1000:be79

void __stdcall16far _DOSGETMACHINEMODE(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}



// Function: _DOSSETVEC @ 1000:be8e

void __stdcall16far _DOSSETVEC(void)

{
  return;
}



// Function: _DOSCREATECSALIAS @ 1000:be97

void __stdcall16far _DOSCREATECSALIAS(undefined2 *param_1,undefined2 param_2)

{
  *param_1 = param_2;
  return;
}



// Function: _DOSFREESEG @ 1000:bead

void __stdcall16far _DOSFREESEG(void)

{
  return;
}



// Function: _DOSWRITE @ 1000:beb6

undefined2 __stdcall16far _DOSWRITE(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return 0;
}



// Function: _commit @ 18a2:34b0

undefined2 __cdecl16far _commit(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if ((param_1 < 0) || (*(int *)0x23fa <= param_1)) {
    *(undefined2 *)0x23ea = 9;
    uVar1 = 0xffff;
  }
  else if (CONCAT11(*(undefined1 *)0x23f3,*(undefined1 *)0x23f2) < 0x31e) {
    uVar1 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x23fc) & 1) != 0) {
      iVar2 = _dos_commit(0x18a2,param_1);
      if (iVar2 == 0) {
        return 0;
      }
      *(int *)0x23f8 = iVar2;
    }
    *(undefined2 *)0x23ea = 9;
    uVar1 = 0xffff;
  }
  return uVar1;
}



// Function: strchr @ 18a2:350a

char * __cdecl16far strchr(char *param_1,char param_2)

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



// Function: _strcmpi @ 18a2:353c

int __cdecl16far _strcmpi(byte *param_1,byte *param_2)

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
      if (bVar3 == 0) goto LAB_18a2_357b;
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
LAB_18a2_357b:
  return (int)cVar4;
}



// Function: strrchr @ 18a2:3582

char * __cdecl16far strrchr(char *param_1,char param_2)

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



// Function: memmove @ 18a2:35b6

undefined2 * __cdecl16far memmove(undefined2 *param_1,undefined2 *param_2,uint param_3)

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
    lVar15 = _aFahdiff(puVar10,iVar13,puVar8,iVar14);
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



// Function: memset @ 18a2:3680

undefined2 * __cdecl16far memset(undefined2 *param_1,undefined1 param_2,uint param_3)

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



// Function: _cxtoa @ 18a2:36d5

byte * __cdecl16far _cxtoa(void)

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



// Function: _getpath @ 18a2:372c

void __cdecl16near _getpath(char *param_1,char *param_2,int param_3)

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
    if ((*param_1 == '\0') || (*param_1 == ';')) goto LAB_18a2_377f;
    cVar1 = *param_1;
    param_1 = (char *)CONCAT22(uVar3,(char *)param_1 + 1);
    *param_2 = cVar1;
    uVar2 = (ulong)param_2 >> 0x10;
    param_2 = (char *)CONCAT22((int)uVar2,(char *)param_2 + 1);
  }
LAB_18a2_3788:
  *param_2 = '\0';
  return;
LAB_18a2_377f:
  while (*(char *)param_1 == ';') {
    param_1 = (char *)ZEXT24((char *)param_1 + 1);
  }
  goto LAB_18a2_3788;
}



// Function: _cenvarg @ 18a2:37c2

uint __cdecl16far
_cenvarg(int *param_1,int *param_2,uint param_3,int *param_4,uint *param_5,undefined1 *param_6,
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
    param_2 = (int *)*(undefined2 *)0x2416;
    in_DX = *(uint *)0x2418;
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
      iVar5 = strlen(*piVar4,piVar9[1]);
      uVar10 = uVar10 + iVar5 + 1;
    }
  }
  if (*(int *)0x28b2 == 0) {
    local_10 = 0;
  }
  else {
    for (local_10 = *(int *)0x23fa; (local_10 != 0 && (*(char *)(local_10 + 0x23fb) == '\0'));
        local_10 = local_10 + -1) {
    }
  }
  if (local_10 != 0) {
    uVar10 = uVar10 + (local_10 + 7) * 2;
  }
  if (param_8 != 0 || param_7 != 0) {
    iVar5 = strlen(param_7,param_8);
    uVar10 = uVar10 + iVar5 + 3;
  }
  if (uVar10 + 1 < 0x8000) {
    uVar12 = *(undefined2 *)0x2750;
    *(undefined2 *)0x2750 = 0x10;
    iVar5 = _fmalloc(uVar10 + 0x10);
    if (in_DX != 0 || iVar5 != 0) {
      *(undefined2 *)0x2750 = uVar12;
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
          uVar6 = strcpy((char *)local_14,local_14._2_2_,*local_a,piVar9[1],0);
          iVar5 = strchr(uVar6,param_3);
          local_14 = (char *)CONCAT22(param_3,(char *)(iVar5 + 1));
          local_a = (int *)CONCAT22(uVar13,piVar9 + 2);
        }
      }
      if (local_10 != 0) {
        uVar6 = 0;
        uVar13 = strcpy((char *)local_14,local_14._2_2_,0x23ce);
        pcVar7 = (char *)strchr(uVar13,in_DX,uVar6);
        local_14 = (char *)CONCAT22(in_DX,pcVar7);
        iVar5 = 0;
        while( true ) {
          pcVar2 = local_14;
          if (local_10 == 0) break;
          bVar1 = *(byte *)(iVar5 + 0x23fc);
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
        strcpy((char *)local_14 + 3,uVar13,param_7,param_8);
      }
      puVar11 = (undefined1 *)0x0;
      local_14 = (char *)CONCAT22(param_6._2_2_,(undefined1 *)param_6 + 1);
      if (param_10 != 0 || param_9 != 0) {
        uVar15 = 0;
        uVar14 = 0;
        uVar13 = param_6._2_2_;
        uVar6 = strcpy((undefined1 *)param_6 + 1,param_6._2_2_,0x2854);
        uVar6 = strchr(uVar6,uVar13,uVar14,param_9,param_10,uVar15);
        uVar6 = strcpy(uVar6,uVar13);
        puVar11 = (undefined1 *)strchr(uVar6,uVar13);
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
          iVar5 = strlen(*local_a,piVar9[1]);
          if ((undefined1 *)0x7d < puVar11 + iVar5) {
            *(undefined2 *)0x23ea = 7;
            *(undefined2 *)0x23f8 = 10;
            _ffree(*param_4,((int *)param_4)[1]);
            return 0xffff;
          }
          puVar11 = puVar11 + iVar5;
          local_a = (int *)CONCAT22(uVar6,piVar9 + 2);
          uVar14 = strcpy((char *)local_14,local_14._2_2_,*piVar4,piVar9[1],0);
          puVar8 = (undefined1 *)strchr(uVar14,uVar13);
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
    *(undefined2 *)0x23ea = 0xc;
    *(undefined2 *)0x23f8 = 8;
    *(undefined2 *)0x2750 = uVar12;
  }
  else {
    *(undefined2 *)0x23ea = 7;
    *(undefined2 *)0x23f8 = 10;
  }
  return 0xffff;
}



// Function: _dospawn @ 18a2:3b2a

/* WARNING: Unable to track spacebase fully for stack */

void _dospawn(undefined2 param_1,int param_2,undefined2 param_3,undefined2 param_4,
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
    *(undefined2 *)0x23ea = 0x16;
    _dosretax();
    return;
  }
  *(int *)0x2858 = param_8 + (param_7 >> 4);
  *(undefined2 *)0x285a = param_5;
  *(undefined2 *)0x285c = param_6;
  *(undefined2 *)0x2860 = unaff_DS;
  *(undefined2 *)0x2864 = unaff_DS;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(char *)0x2421 == '\x02') {
    _farstub();
  }
  if (*(int *)0x2918 == -0x292a) {
    (*(code *)*(undefined2 *)0x291a)();
  }
  puRam00013b20 = (uint *)&stack0xfffc;
  uRam00013b24 = *(undefined2 *)0x2e;
  uRam00013b26 = *(undefined2 *)0x30;
  uVar7 = 0x58;
  cVar12 = '\0';
  cVar11 = '\x01';
  cVar10 = '\x01';
  bVar9 = 0;
  pcVar1 = (code *)swi(0x21);
  uRam00013b22 = unaff_SS;
  uRam00013b28 = in_stack_00000000;
  (*pcVar1)();
  *(undefined2 *)0x241f = 1;
  pcVar1 = (code *)swi(0x21);
  uVar5 = (*pcVar1)();
  uVar4 = uRam00013b28;
  uVar3 = uRam00013b22;
  puVar2 = puRam00013b20;
  uVar6 = CONCAT11(cVar12 << 7 | cVar11 << 6 | in_AF << 4 | cVar10 << 2 | 2U | bVar9,uVar7);
  *(undefined2 *)0x30 = uRam00013b26;
  *(undefined2 *)0x2e = uRam00013b24;
  uVar8 = *puVar2;
  if (*(char *)0x2421 == '\x02') {
    *puVar2 = uVar6;
    puVar2[-1] = uVar5;
    puVar2[-2] = 0x1000;
    puVar2[-3] = 0xc63e;
    _farstub();
    uVar6 = *puVar2;
  }
  *(undefined2 *)0x241f = 0;
  if ((uVar6 & 0x100) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  _dosretax();
  return;
}



// Function: _execload @ 18a2:3c36

void _execload(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x293c != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001c65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)*(uint *)0x293a)();
    return;
  }
  *(undefined2 *)0x23ea = 0x16;
  _dosretax();
  return;
}



// Function: _fltout @ 18a2:3c6e

undefined2 __cdecl16far
_fltout(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint in_BX;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  
  *(undefined2 *)0x2890 = param_1;
  *(undefined2 *)0x2892 = param_2;
  *(undefined2 *)0x2894 = param_3;
  *(undefined2 *)0x2896 = param_4;
  uVar6 = _i8_output(&stack0xfffe);
  puVar5 = (undefined1 *)0x2898;
  puVar4 = (undefined1 *)0x2891;
  for (iVar3 = (int)*(char *)0x2890; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *puVar5 = 0;
  *(uint *)0x2886 = in_BX & 0xff;
  *(undefined2 *)0x2888 = (int)((ulong)uVar6 >> 0x10);
  *(undefined2 *)0x288a = (int)uVar6;
  *(undefined2 *)0x288c = 0x2898;
  *(undefined2 *)0x288e = unaff_DS;
  return 0x2886;
}



// Function: _stackavail @ 18a2:3cba

int __cdecl16far _stackavail(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if ((undefined1 *)*(uint *)0x242c < &stack0x0004) {
    iVar1 = -((int)*(uint *)0x242c - (int)&stack0x0004);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



// Function: _ffree @ 18a2:3cce

void __cdecl16far _ffree(undefined4 param_1)

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



// Function: _fmalloc @ 18a2:3ce1

undefined2 __cdecl16far _fmalloc(uint param_1)

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
  
  uVar5 = 0x18a2;
  do {
    if (param_1 < 0xffe9) {
      bVar7 = false;
      if (*(int *)0x2900 != 0) {
        pcVar4 = (code *)0x3ffa;
        while( true ) {
          uVar3 = *(uint *)0x2908;
          uVar6 = (uint)((ulong)*(undefined4 *)0x2902 >> 0x10);
          in_BX = (int)*(undefined4 *)0x2902;
          uVar10 = uVar6;
          do {
            do {
              uVar5 = 0x1000;
              uVar9 = (*pcVar4)();
              if (!bVar7) {
                if (pcVar4 == (code *)0x3ffa) goto LAB_18a2_3d4b;
                goto LAB_18a2_3d48;
              }
              puVar1 = (undefined4 *)(in_BX + 0xc);
              in_BX = (int)*puVar1;
              bVar7 = uVar6 < uVar3;
              bVar8 = uVar6 != uVar3;
              uVar6 = (uint)((ulong)*puVar1 >> 0x10);
            } while (bVar8);
            uVar3 = *(uint *)((int)*(undefined4 *)0x2902 + 0x12);
            uVar6 = (uint)((ulong)*(undefined4 *)0x28fe >> 0x10);
            in_BX = (int)*(undefined4 *)0x28fe;
            bVar7 = uVar6 < uVar10;
            bVar8 = uVar6 != uVar10;
            uVar10 = uVar6;
          } while (bVar8);
          bVar7 = pcVar4 < (code *)0x3242;
          if (pcVar4 == (code *)0x3242) break;
          pcVar4 = (code *)0x3242;
        }
      }
      _newseg();
      if (!bVar7) {
LAB_18a2_3d48:
        uVar9 = _searchseg();
LAB_18a2_3d4b:
        *(undefined2 *)0x2904 = (int)((ulong)uVar9 >> 0x10);
        *(int *)0x2902 = in_BX;
        return (int)uVar9;
      }
    }
    if (*(int *)0x28b0 == 0 && *(int *)0x28ae == 0) {
      return 0;
    }
    iVar2 = (*(code *)*(undefined2 *)0x28ae)(uVar5,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}



// Function: _aFahdiff @ 18a2:3d7a

undefined4 __stdcall16far _aFahdiff(uint param_1,uint param_2,uint param_3,uint param_4)

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



// Function: _dos_commit @ 18a2:3dcc

void _dos_commit(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  _dosreturn();
  return;
}



// Function: $i8_output @ 18a2:3e5a

undefined4 __cdecl16near _i8_output(void)

{
  undefined2 *puVar1;
  char *pcVar2;
  undefined2 *puVar3;
  code *pcVar4;
  long lVar5;
  char cVar6;
  char *pcVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined2 extraout_DX;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int unaff_BP;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined2 *unaff_SI;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  undefined2 *puVar26;
  char *pcVar27;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar28;
  bool bVar29;
  undefined4 uVar30;
  undefined2 in_stack_00000018;
  
  puVar26 = (undefined2 *)0x28b4;
  for (iVar12 = 4; iVar12 != 0; iVar12 = iVar12 + -1) {
    puVar3 = puVar26;
    puVar26 = puVar26 + 1;
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar3 = *puVar1;
  }
  uVar9 = *(uint *)0x28ba;
  *(byte *)0x28bb = *(byte *)0x28bb & 0x7f;
  if (((*(int *)0x28b4 == 0 && *(int *)0x28b6 == 0) && *(int *)0x28b8 == 0) && *(int *)0x28ba == 0)
  {
    *(undefined2 *)0x28c0 = 0x3001;
    return 1;
  }
  if ((~uVar9 & 0x7ff0) == 0) {
    return 0x10000;
  }
  pcVar4 = (code *)swi(0x35);
  (*pcVar4)();
  in(extraout_DX);
  uVar8 = in(extraout_DX);
  *(char *)(unaff_BP + 0x51a3) = *(char *)(unaff_BP + 0x51a3) - (char)((uint)uVar8 >> 8);
  pcVar4 = (code *)swi(0x35);
  uVar30 = (*pcVar4)();
  out((int)((ulong)uVar30 >> 0x10),(int)uVar30);
  pcVar4 = (code *)swi(0x35);
  (*pcVar4)();
  lVar5 = (ulong)*(uint *)0x28bc * 0x4d10;
  uVar9 = (uint)lVar5;
  uVar10 = (*(uint *)0x28bc >> 8) * 0x4d;
  uVar13 = uVar9 + uVar10;
  uVar9 = ((int)((ulong)lVar5 >> 0x10) + (int)puVar26 * 2 + (uint)CARRY2(uVar9,uVar10) +
           (uint)CARRY2(uVar13,(uint)*(byte *)0x28bb * 0x9a) + -0x1343) -
          (uint)(uVar13 + (uint)*(byte *)0x28bb * 0x9a < 0x12f4);
  _i8_tpwr10();
  pcVar4 = (code *)swi(0x3c);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x34);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x3d);
  (*pcVar4)();
  if ((*(byte *)0x28ec & 0x41) != 0) {
    uVar9 = uVar9 + 1;
    pcVar4 = (code *)swi(0x3c);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x3a);
    (*pcVar4)();
  }
  pcVar4 = (code *)swi(0x37);
  (*pcVar4)();
  uVar10 = *(uint *)0x28b4;
  uVar13 = *(uint *)0x28b6;
  uVar16 = *(uint *)0x28b8;
  bVar28 = false;
  bVar11 = 0;
  for (iVar12 = -(*(int *)0x28ba + -0x3ffe); iVar12 != 0; iVar12 = iVar12 + -1) {
    uVar22 = uVar16 & 1;
    uVar16 = uVar16 >> 1;
    uVar19 = uVar13 & 1;
    uVar13 = uVar13 >> 1 | (uint)(uVar22 != 0) << 0xf;
    uVar22 = uVar10 & 1;
    uVar10 = uVar10 >> 1 | (uint)(uVar19 != 0) << 0xf;
    uVar19 = uVar9 & 1;
    uVar9 = uVar9 >> 1 | (uint)(uVar22 != 0) << 0xf;
    bVar28 = (bVar11 & 1) != 0;
    bVar11 = bVar11 >> 1 | (uVar19 != 0) << 7;
  }
  uVar22 = uVar9 + 0x39a + (uint)bVar28;
  uVar9 = (uint)(0xfc65 < uVar9 || CARRY2(uVar9 + 0x39a,(uint)bVar28));
  uVar19 = uVar10 + uVar9;
  uVar9 = (uint)CARRY2(uVar10,uVar9);
  uVar10 = uVar13 + uVar9;
  uVar16 = uVar16 + CARRY2(uVar13,uVar9);
  iVar12 = 0x10;
  pcVar7 = (char *)0x28c1;
  do {
    pcVar27 = pcVar7;
    iVar14 = iVar12;
    uVar23 = uVar22 << 1 | (uint)((int)((uint)bVar11 << 8) < 0);
    uVar13 = uVar19 << 1 | (uint)((int)uVar22 < 0);
    uVar9 = uVar10 << 1 | (uint)((int)uVar19 < 0);
    bVar28 = (int)uVar16 < 0;
    uVar17 = uVar16 << 1 | (uint)((int)uVar10 < 0);
    uVar24 = uVar23 << 1 | (uint)((char)(bVar11 << 1) < '\0');
    uVar20 = uVar13 << 1 | (uint)((int)uVar23 < 0);
    uVar15 = uVar9 << 1 | (uint)((int)uVar13 < 0);
    uVar23 = uVar17 << 1 | (uint)((int)uVar9 < 0);
    cVar6 = bVar11 * '\x05';
    uVar9 = (uint)CARRY1(bVar11 * '\x04',bVar11);
    uVar13 = uVar24 + uVar22;
    iVar25 = uVar13 + uVar9;
    uVar9 = (uint)(CARRY2(uVar24,uVar22) || CARRY2(uVar13,uVar9));
    uVar13 = uVar20 + uVar19;
    iVar21 = uVar13 + uVar9;
    uVar9 = (uint)(CARRY2(uVar20,uVar19) || CARRY2(uVar13,uVar9));
    uVar13 = uVar15 + uVar10;
    iVar12 = uVar13 + uVar9;
    uVar9 = (uint)(CARRY2(uVar15,uVar10) || CARRY2(uVar13,uVar9));
    bVar29 = CARRY2(uVar23,uVar16);
    uVar23 = uVar23 + uVar16;
    iVar18 = uVar23 + uVar9;
    bVar11 = bVar11 * '\n';
    uVar22 = iVar25 * 2 | (uint)(cVar6 < '\0');
    uVar19 = iVar21 * 2 | (uint)(iVar25 < 0);
    uVar10 = iVar12 * 2 | (uint)(iVar21 < 0);
    uVar16 = iVar18 * 2 | (uint)(iVar12 < 0);
    *pcVar27 = (((bVar28 << 1 | (int)uVar17 < 0) + (bVar29 || CARRY2(uVar23,uVar9))) * '\x02' |
               iVar18 < 0) + 0x30;
    iVar12 = iVar14 + -1;
    pcVar7 = pcVar27 + 1;
  } while (iVar12 != 0);
  iVar14 = iVar14 + -2;
  do {
    if (iVar14 == 0) break;
    iVar14 = iVar14 + -1;
    pcVar2 = pcVar27;
    pcVar27 = pcVar27 + -1;
  } while (*pcVar2 == '0');
  *(char *)0x28c0 = (char)iVar14 + '\x12';
  return CONCAT22(in_stack_00000018,1);
}



// Function: _fltin @ 18a2:3fa0

undefined2 __cdecl16far _fltin(int param_1,undefined2 param_2)

{
  uint uVar1;
  undefined2 unaff_DS;
  int local_6 [2];
  
  uVar1 = _STRINGTOD(param_1,param_2,local_6);
  *(int *)0x2b1c = local_6[0] - param_1;
  *(undefined2 *)0x2b1a = 0;
  if ((uVar1 & 4) != 0) {
    *(undefined2 *)0x2b1a = 0x200;
  }
  if ((uVar1 & 2) != 0) {
    *(byte *)0x2b1a = *(byte *)0x2b1a | 1;
  }
  if ((uVar1 & 1) != 0) {
    *(byte *)0x2b1b = *(byte *)0x2b1b | 1;
  }
  return 0x2b1a;
}



// Function: _searchseg @ 18a2:3ffa

uint * __cdecl16near _searchseg(void)

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
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_18a2_4053;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_18a2_4053;
      puVar7 = (uint *)*(undefined2 *)(in_BX + 6);
      if ((uint *)*(undefined2 *)(in_BX + 8) == puVar7) goto LAB_18a2_4053;
      puVar5 = (uint *)((int)*(undefined2 *)(in_BX + 8) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_18a2_4053:
  puVar7 = (uint *)*(undefined2 *)(in_BX + 6);
  *(undefined2 *)(in_BX + 8) = puVar7;
  return puVar7;
}



// Function: _newseg @ 18a2:4076

void __cdecl16near _newseg(void)

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
    bVar3 = uVar2 < *(uint *)0x23ca;
  } while (uVar2 <= *(uint *)0x23ca);
  if (*(uint *)0x23c8 < uVar2) {
    *(uint *)0x23c8 = uVar2;
  }
  *(undefined2 *)0x2 = *(undefined2 *)(unaff_DI + 0xc);
  _initseg();
  _linkseg();
  return;
}



// Function: $i8_tpwr10 @ 18a2:4236

/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16near _i8_tpwr10(void)

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



// Function: _STRINGTOD @ 18a2:4274

/* WARNING: Instruction at (ram,0x0001cca7) overlaps instruction at (ram,0x0001cca5)
    */

void __cdecl16far
_STRINGTOD(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

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
    _STRINGTOLD(in_stack_00000002,param_1,param_2,param_3,param_4,puVar5,unaff_SS);
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



// Function: _initseg @ 18a2:42dc

void __cdecl16near _initseg(void)

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



// Function: _linkseg @ 18a2:4310

void __cdecl16near _linkseg(void)

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



// Function: _STRINGTOLD @ 18a2:4346

uint _STRINGTOLD(undefined2 param_1,byte *param_2,int *param_3,uint *param_4)

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
LAB_18a2_4395:
      pbVar1 = pbVar11;
      pbVar11 = pbVar9 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_16 = 0x8000;
      goto LAB_18a2_4395;
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
            if (local_1c == 0) goto LAB_18a2_43e3;
            pbVar1 = pbVar11;
            pbVar11 = pbVar11 + 1;
            bVar6 = *pbVar1;
          }
          if (bVar6 == 0x2e) {
            do {
              pbVar1 = pbVar11;
              pbVar11 = pbVar11 + 1;
              bVar6 = *pbVar1;
LAB_18a2_43fd:
              if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_18a2_4419;
              pcVar2 = pcVar10;
              pcVar10 = pcVar10 + 1;
              *pcVar2 = bVar6 - 0x30;
              local_18 = local_18 + -1;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
            goto LAB_18a2_4410;
          }
          goto LAB_18a2_4419;
        }
        do {
          local_18 = iVar5;
          bVar6 = *pbVar11;
LAB_18a2_43c2:
          pbVar11 = pbVar11 + 1;
          iVar5 = local_18 + -1;
        } while (bVar6 == 0x30);
        if (bVar6 != 0) goto LAB_18a2_43fd;
      }
      local_14 = pbVar11 + -1;
      goto LAB_18a2_457b;
    }
    if ((bVar6 == 0x2e) && ((bVar6 = *pbVar11, 0x2f < bVar6 && (bVar6 < 0x3a)))) goto LAB_18a2_43c2;
  }
  local_10 = 4;
  goto LAB_18a2_457b;
  while (iVar5 = local_18 + 1, bVar6 < 0x3a) {
LAB_18a2_43e3:
    local_18 = iVar5;
    pbVar1 = pbVar11;
    pbVar11 = pbVar11 + 1;
    bVar6 = *pbVar1;
    if (bVar6 < 0x30) break;
  }
  if (bVar6 == 0x2e) {
LAB_18a2_4410:
    do {
      pbVar1 = pbVar11;
      pbVar11 = pbVar11 + 1;
      bVar6 = *pbVar1;
      if (bVar6 < 0x30) break;
    } while (bVar6 < 0x3a);
  }
LAB_18a2_4419:
  local_1c = 0x19 - local_1c;
  local_14 = pbVar11 + -1;
  if ((((bVar6 == 0x45) || (bVar6 == 0x65)) || (bVar6 == 0x44)) || (bVar6 == 100)) {
    pbVar9 = pbVar11 + 1;
    bVar6 = *pbVar11;
    if (bVar6 == 0x2b) {
LAB_18a2_4448:
      pbVar1 = pbVar9;
      pbVar9 = pbVar11 + 2;
      bVar6 = *pbVar1;
    }
    else if (bVar6 == 0x2d) {
      local_1a = 0xffff;
      goto LAB_18a2_4448;
    }
    if ((0x2f < bVar6) && (bVar6 < 0x3a)) {
      uVar7 = bVar6 - 0x30;
      uVar8 = uVar7;
      do {
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar6 = *pbVar1;
        if ((bVar6 < 0x30) || (0x39 < bVar6)) goto LAB_18a2_447f;
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
LAB_18a2_447f:
      local_18 = local_18 + ((uVar8 ^ local_1a) - local_1a);
      local_14 = pbVar9 + -1;
    }
  }
  if (local_1c != 0) {
    *pcVar10 = '\0';
    pbVar11 = (byte *)(pcVar10 + -1);
    if (local_1c < 0x19) {
      if (local_18 != 0) goto LAB_18a2_44c6;
    }
    else {
      bVar6 = *pbVar11;
      *pbVar11 = 0;
      local_1c = local_1c - 1;
      local_18 = local_18 + 1;
      pbVar11 = (byte *)(pcVar10 + -2);
      if (bVar6 < 5) {
LAB_18a2_44c6:
        for (; *pbVar11 == 0; pbVar11 = pbVar11 + -1) {
          local_1c = local_1c - 1;
          local_18 = local_18 + 1;
        }
      }
      else {
        *pbVar11 = *pbVar11 + 1;
      }
    }
    _MANTOLD12(&local_e,local_1c,local_36,unaff_SS);
    if (local_18 == 0) {
LAB_18a2_4500:
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
          goto LAB_18a2_455d;
        }
LAB_18a2_4587:
        local_10 = local_10 | 1;
        goto LAB_18a2_457b;
      }
    }
    else if (local_18 < 0x1450) {
      if (-0x1450 < local_18) {
        _LD12MULTTENPOWER(param_1,local_18,&local_e,unaff_SS);
        goto LAB_18a2_4500;
      }
      goto LAB_18a2_4587;
    }
    local_10 = local_10 | 2;
    puVar12[4] = local_16 | 0x7fff;
    puVar12[3] = 0x8000;
    puVar12[2] = 0;
    puVar12[1] = 0;
    *param_4 = 0;
    goto LAB_18a2_455d;
  }
LAB_18a2_457b:
  for (iVar14 = 5; iVar14 != 0; iVar14 = iVar14 + -1) {
    puVar3 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar3 = 0;
  }
LAB_18a2_455d:
  *param_3 = (int)local_14;
  ((int *)param_3)[1] = local_12;
  return local_10;
}



// Function: _LD12MULTTENPOWER @ 18a2:4866

/* WARNING: Instruction at (ram,0x0001d2cd) overlaps instruction at (ram,0x0001d2cc)
    */

void _LD12MULTTENPOWER(int param_1,uint param_2,undefined2 *param_3)

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
    local_8 = (code *)0x4904;
    cVar5 = '\0';
    cVar4 = param_1 < 0;
    bVar3 = param_1 == 0;
    uStack_e = param_2;
    if (bVar3) {
      local_8 = (code *)0x48fa;
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
                    /* WARNING: Could not recover jumptable at 0x0001d2f0. Too many branches */
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



// Function: _MANTOLD12 @ 18a2:4ac0

uint * _MANTOLD12(uint *param_1,int param_2,byte *param_3)

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
    FUN_18a2_4b6e();
    uVar17 = FUN_18a2_4b6e();
    uVar7 = (uint)CARRY2((uint)((ulong)uVar17 >> 0x10),uVar7);
    uVar3 = uVar12 + uVar4 + uVar7;
    uVar12 = (uint)(CARRY2(uVar12,uVar4) || CARRY2(uVar12 + uVar4,uVar7));
    bVar15 = CARRY2(uVar5,uVar9);
    uVar5 = uVar5 + uVar9;
    uVar10 = uVar5 + uVar12;
    bVar16 = CARRY2((uint)uVar17,uVar2);
    uVar1 = (uint)uVar17 + uVar2;
    uVar17 = FUN_18a2_4b6e();
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



// Function: FUN_18a2_4b6e @ 18a2:4b6e

undefined4 __cdecl16near FUN_18a2_4b6e(void)

{
  int in_AX;
  int in_DX;
  int in_BX;
  
  return CONCAT22(in_DX << 1,in_AX << 1 | (uint)(in_BX < 0));
}



// Function: FUN_1d5a_1092 @ 1d5a:1092

void __cdecl16near FUN_1d5a_1092(void)

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



