// FCollada_1c20000.cpp (part 1 of 2): 118 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01c1da10(void);
int sub_01c1e790(...);
int sub_01c20070(...);
// @baa 0x01c20100
int sub_01c20100(int param_1)
{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = sub_01c1da10();
  if (iVar1 != 0) {
    iVar2 = sub_01c20070(iVar1,param_1);
    if (iVar2 != 0) {
      sub_01c1e790(iVar1);
      return 0;
    }
  }
  return iVar1;
}

int sub_01c2def0(void);
extern undefined4 g_027d4cd4;
// @baa 0x01c20b80
void sub_01c20b80(void)
{
  g_027d4cd4 = sub_01c2def0();
  return;
}

int sub_01c1c9d0(void);
int sub_01c2df20(...);
int sub_01c2df30(...);
extern undefined4 g_026143f4;
extern undefined4 g_027d4d38;
// @baa 0x01c20d40
void sub_01c20d40(undefined4 param_1, code * param_2)
{
  sub_01c2df20(g_027d4cd4);
  g_027d4d38 = param_1;
  g_026143f4 = (undefined4)(param_2);
  if (param_2 == (code *)0x0) {
    g_026143f4 = (undefined4)(sub_01c1c9d0);
  }
  sub_01c2df30(g_027d4cd4);
  return;
}

extern undefined4 g_027d4d30;
// @baa 0x01c20d80
void sub_01c20d80(undefined4 param_1, undefined4 param_2)
{
  sub_01c2df20(g_027d4cd4);
  g_027d4d38 = param_1;
  g_027d4d30 = param_2;
  sub_01c2df30(g_027d4cd4);
  return;
}

extern undefined4 g_027d4cbc;
extern undefined4 g_027d4d0c;
// @baa 0x01c20db0
undefined4 sub_01c20db0(undefined4 param_1)
{
  undefined4 uVar1;
  
  uVar1 = g_027d4d0c;
  g_027d4cbc = 1;
  g_027d4d0c = param_1;
  return uVar1;
}

extern undefined4 g_027d4d10;
// @baa 0x01c20dd0
undefined4 sub_01c20dd0(undefined4 param_1)
{
  undefined4 uVar1;
  
  sub_01c2df20(g_027d4cd4);
  uVar1 = g_027d4d10;
  g_027d4cbc = 1;
  g_027d4d10 = param_1;
  sub_01c2df30(g_027d4cd4);
  return uVar1;
}

extern undefined4 g_027d4d14;
// @baa 0x01c20e10
undefined4 sub_01c20e10(undefined4 param_1)
{
  undefined4 uVar1;
  
  uVar1 = g_027d4d14;
  g_027d4cbc = 1;
  g_027d4d14 = param_1;
  return uVar1;
}

extern undefined4 g_027d4d18;
// @baa 0x01c20e30
undefined4 sub_01c20e30(undefined4 param_1)
{
  undefined4 uVar1;
  
  sub_01c2df20(g_027d4cd4);
  uVar1 = g_027d4d18;
  g_027d4cbc = 1;
  g_027d4d18 = param_1;
  sub_01c2df30(g_027d4cd4);
  return uVar1;
}

int sub_01bfa0b0(void);
extern undefined4 g_027d4d20;
// @baa 0x01c20e70
code * sub_01c20e70(undefined4 param_1)
{
  code *pcVar1;
  
  sub_01c2df20(g_027d4cd4);
  pcVar1 = (code (__cdecl *))(g_027d4d20);
  if (g_027d4d20 == 0) {
    pcVar1 = (code (__cdecl *))(sub_01bfa0b0);
  }
  g_027d4d20 = (undefined4)((code *)param_1);
  sub_01c2df30(g_027d4cd4);
  return pcVar1;
}

int sub_01bfa170(void);
extern undefined4 g_027d4d28;
// @baa 0x01c20eb0
code * sub_01c20eb0(undefined4 param_1)
{
  code *pcVar1;
  
  sub_01c2df20(g_027d4cd4);
  pcVar1 = (code (__cdecl *))(g_027d4d28);
  if (g_027d4d28 == 0) {
    pcVar1 = (code (__cdecl *))(sub_01bfa170);
  }
  g_027d4d28 = (undefined4)((code *)param_1);
  sub_01c2df30(g_027d4cd4);
  return pcVar1;
}

extern char g_027d4e00[];
// @baa 0x01c20ef0
int sub_01c20ef0(void) { return (int)g_027d4e00; }

extern char g_027d4cd8[];
// @baa 0x01c20f00
int sub_01c20f00(void) { return (int)g_027d4cd8; }

extern char g_026143d0[];
// @baa 0x01c20f10
int sub_01c20f10(void) { return (int)g_026143d0; }

extern undefined4 g_026143d4;
// @baa 0x01c20f20
undefined4 sub_01c20f20(undefined4 param_1)
{
  undefined4 uVar1;
  
  sub_01c2df20(g_027d4cd4);
  uVar1 = g_026143d4;
  g_026143d4 = param_1;
  sub_01c2df30(g_027d4cd4);
  return uVar1;
}

extern char g_026143d8[];
// @baa 0x01c20f50
int sub_01c20f50(void) { return (int)g_026143d8; }

extern undefined4 g_026143dc;
// @baa 0x01c20f60
undefined4 sub_01c20f60(undefined4 param_1)
{
  undefined4 uVar1;
  
  sub_01c2df20(g_027d4cd4);
  uVar1 = g_026143dc;
  g_026143dc = param_1;
  sub_01c2df30(g_027d4cd4);
  return uVar1;
}

extern char g_02614410[];
// @baa 0x01c20f90
int sub_01c20f90(void) { return (int)g_02614410; }

extern char g_02614480[];
// @baa 0x01c20fa0
int sub_01c20fa0(void) { return (int)g_02614480; }

extern char g_027d4ce4[];
// @baa 0x01c20fb0
int sub_01c20fb0(void) { return (int)g_027d4ce4; }

extern undefined4 g_027d4ce8;
// @baa 0x01c20fc0
undefined4 sub_01c20fc0(undefined4 param_1)
{
  undefined4 uVar1;
  
  sub_01c2df20(g_027d4cd4);
  uVar1 = g_027d4ce8;
  g_027d4ce8 = param_1;
  sub_01c2df30(g_027d4cd4);
  return uVar1;
}

extern char g_026143f0[];
// @baa 0x01c20ff0
int sub_01c20ff0(void) { return (int)g_026143f0; }

extern char g_027d4d2c[];
// @baa 0x01c21000
int sub_01c21000(void) { return (int)g_027d4d2c; }

extern char g_027d4d34[];
// @baa 0x01c21010
int sub_01c21010(void) { return (int)g_027d4d34; }

extern char g_026143e0[];
// @baa 0x01c21020
int sub_01c21020(void) { return (int)g_026143e0; }

extern undefined4 g_026143e4;
// @baa 0x01c21030
undefined4 sub_01c21030(undefined4 param_1)
{
  undefined4 uVar1;
  
  sub_01c2df20(g_027d4cd4);
  uVar1 = g_026143e4;
  g_026143e4 = param_1;
  sub_01c2df30(g_027d4cd4);
  return uVar1;
}

extern char g_026143f8[];
// @baa 0x01c21060
int sub_01c21060(void) { return (int)g_026143f8; }

extern undefined4 g_026143fc;
// @baa 0x01c21070
undefined4 sub_01c21070(undefined4 param_1)
{
  undefined4 uVar1;
  
  sub_01c2df20(g_027d4cd4);
  uVar1 = g_026143fc;
  g_026143fc = param_1;
  sub_01c2df30(g_027d4cd4);
  return uVar1;
}

extern char g_02614404[];
// @baa 0x01c210a0
int sub_01c210a0(void) { return (int)g_02614404; }

extern undefined4 g_0261440c;
// @baa 0x01c210b0
undefined4 sub_01c210b0(undefined4 param_1)
{
  undefined4 uVar1;
  
  sub_01c2df20(g_027d4cd4);
  uVar1 = g_0261440c;
  g_0261440c = param_1;
  sub_01c2df30(g_027d4cd4);
  return uVar1;
}

extern char g_026143e8[];
// @baa 0x01c210e0
int sub_01c210e0(void) { return (int)g_026143e8; }

extern undefined4 g_026143ec;
// @baa 0x01c210f0
undefined4 sub_01c210f0(undefined4 param_1)
{
  undefined4 uVar1;
  
  sub_01c2df20(g_027d4cd4);
  uVar1 = g_026143ec;
  g_026143ec = param_1;
  sub_01c2df30(g_027d4cd4);
  return uVar1;
}

extern char g_027d4cfc[];
// @baa 0x01c21120
int sub_01c21120(void) { return (int)g_027d4cfc; }

extern undefined4 g_027d4d00;
// @baa 0x01c21130
undefined4 sub_01c21130(undefined4 param_1)
{
  undefined4 uVar1;
  
  sub_01c2df20(g_027d4cd4);
  uVar1 = g_027d4d00;
  g_027d4d00 = param_1;
  sub_01c2df30(g_027d4cd4);
  return uVar1;
}

extern char g_027d4cec[];
// @baa 0x01c21160
int sub_01c21160(void) { return (int)g_027d4cec; }

extern undefined4 g_027d4cf0;
// @baa 0x01c21170
undefined4 sub_01c21170(undefined4 param_1)
{
  undefined4 uVar1;
  
  sub_01c2df20(g_027d4cd4);
  uVar1 = g_027d4cf0;
  g_027d4cf0 = param_1;
  sub_01c2df30(g_027d4cd4);
  return uVar1;
}

extern char g_027d4cdc[];
// @baa 0x01c211a0
int sub_01c211a0(void) { return (int)g_027d4cdc; }

extern undefined4 g_027d4ce0;
// @baa 0x01c211b0
undefined4 sub_01c211b0(undefined4 param_1)
{
  undefined4 uVar1;
  
  sub_01c2df20(g_027d4cd4);
  uVar1 = g_027d4ce0;
  g_027d4ce0 = param_1;
  sub_01c2df30(g_027d4cd4);
  return uVar1;
}

extern char g_026143cc[];
// @baa 0x01c211e0
int sub_01c211e0(void) { return (int)g_026143cc; }

extern char g_027d4cf4[];
// @baa 0x01c211f0
int sub_01c211f0(void) { return (int)g_027d4cf4; }

extern undefined4 g_027d4cf8;
// @baa 0x01c21200
undefined4 sub_01c21200(undefined4 param_1)
{
  undefined4 uVar1;
  
  sub_01c2df20(g_027d4cd4);
  uVar1 = g_027d4cf8;
  g_027d4cf8 = param_1;
  sub_01c2df30(g_027d4cd4);
  return uVar1;
}

extern char g_027d4d3c[];
// @baa 0x01c21230
int sub_01c21230(void) { return (int)g_027d4d3c; }

extern undefined4 g_027d4d40;
// @baa 0x01c21240
undefined4 sub_01c21240(undefined4 param_1)
{
  undefined4 uVar1;
  
  sub_01c2df20(g_027d4cd4);
  uVar1 = g_027d4d40;
  g_027d4d40 = param_1;
  sub_01c2df30(g_027d4cd4);
  return uVar1;
}

extern char g_027d4d04[];
// @baa 0x01c21270
int sub_01c21270(void) { return (int)g_027d4d04; }

extern undefined4 g_027d4d08;
// @baa 0x01c21280
undefined4 sub_01c21280(undefined4 param_1)
{
  undefined4 uVar1;
  
  sub_01c2df20(g_027d4cd4);
  uVar1 = g_027d4d08;
  g_027d4d08 = param_1;
  sub_01c2df30(g_027d4cd4);
  return uVar1;
}

extern char g_027d4d1c[];
// @baa 0x01c212d0
int sub_01c212d0(void) { return (int)g_027d4d1c; }

extern char g_027d4d24[];
// @baa 0x01c212e0
int sub_01c212e0(void) { return (int)g_027d4d24; }

int sub_01c26360(void);
int sub_01c2a2e0(...);
// @baa 0x01c26770
void sub_01c26770(undefined4 param_1)
{
  sub_01c2a2e0(param_1,sub_01c26360);
  return;
}

int sub_01c2ac00(...);
extern undefined4 g_01c26790;
// @baa 0x01c26850
void sub_01c26850(undefined4 param_1)
{
  sub_01c2ac00(param_1,&g_01c26790);
  return;
}

int sub_01c26870(...);
// @baa 0x01c26a20
void sub_01c26a20(undefined4 param_1, undefined4 param_2)
{
  sub_01c26870(param_2,param_1);
  return;
}

int sub_01c26b80(void);
// @baa 0x01c26cb0
void sub_01c26cb0(undefined4 param_1)
{
  sub_01c2a2e0(param_1,sub_01c26b80);
  return;
}

extern undefined4 g_01c26cd0;
// @baa 0x01c26dc0
void sub_01c26dc0(undefined4 param_1)
{
  sub_01c2ac00(param_1,&g_01c26cd0);
  return;
}

int sub_01c26de0(...);
// @baa 0x01c27010
void sub_01c27010(undefined4 param_1, undefined4 param_2)
{
  sub_01c26de0(param_2,param_1);
  return;
}

int sub_01c27050(void);
// @baa 0x01c271a0
void sub_01c271a0(undefined4 param_1)
{
  sub_01c2a2e0(param_1,sub_01c27050);
  return;
}

extern undefined4 g_01c271c0;
// @baa 0x01c27260
void sub_01c27260(undefined4 param_1)
{
  sub_01c2ac00(param_1,&g_01c271c0);
  return;
}

int sub_01c27280(...);
// @baa 0x01c27310
void sub_01c27310(undefined4 param_1, undefined4 param_2)
{
  sub_01c27280(param_2,param_1);
  return;
}

int sub_01c27350(void);
// @baa 0x01c274e0
void sub_01c274e0(undefined4 param_1)
{
  sub_01c2a2e0(param_1,sub_01c27350);
  return;
}

int sub_01c2e340(...);
// @baa 0x01c27630
undefined4 sub_01c27630(int param_1, undefined4 * param_2)
{
  if (*(int *)(param_1 + 8) == param_2[1]) {
    sub_01c2e340(*param_2,param_1);
    return 0;
  }
  return 1;
}

// @baa 0x01c27660
int sub_01c27660(void) { return 0; }

int sub_01c27610(void);
// @baa 0x01c277f0
void sub_01c277f0(undefined4 param_1)
{
  sub_01c2a2e0(param_1,&sub_01c27610);
  return;
}

int sub_01c284a0(...);
int sub_01c2aec0(...);
// @baa 0x01c28730
void sub_01c28730(int param_1, undefined4 param_2)
{
  int iVar1;
  
  if (param_1 != 0) {
    if (((*(int *)(param_1 + 0x2c) != 0) &&
        (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x30), iVar1 != 0)) &&
       (iVar1 = sub_01c2aec0(iVar1,param_2), iVar1 != 0)) {
      return;
    }
    if (((*(int *)(param_1 + 0x28) != 1) && (*(int *)(param_1 + 0x30) != 0)) &&
       ((iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x30), iVar1 != 0 &&
        (iVar1 = sub_01c2aec0(iVar1,param_2), iVar1 != 0)))) {
      return;
    }
  }
  sub_01c284a0(param_2);
  return;
}

int sub_01c28c90(void);
// @baa 0x01c28ca0
void sub_01c28ca0(undefined4 param_1)
{
  sub_01c2a2e0(param_1,sub_01c28c90);
  return;
}

int sub_01c28cc0(void);
// @baa 0x01c28d80
void sub_01c28d80(undefined4 param_1)
{
  sub_01c2ac00(param_1,&sub_01c28cc0);
  return;
}

int sub_01c28e70(...);
// @baa 0x01c29140
void sub_01c29140(undefined4 param_1, undefined4 param_2)
{
  sub_01c28e70(param_2,param_1);
  return;
}

int sub_01c2df40(void);
extern undefined4 g_027d4d6c;
extern undefined4 g_027d4d70;
// @baa 0x01c29180
undefined4 sub_01c29180(void)
{
  if (g_027d4d70 != 0) {
    return 1;
  }
  g_027d4d6c = sub_01c2df40();
  if (g_027d4d6c == 0) {
    return 0;
  }
  g_027d4d70 = 1;
  return 1;
}

// @baa 0x01c29e40
int sub_01c29e40(int param_1)
{
  if (param_1 == 0) {
    return -1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    return *(int *)(*(int *)(param_1 + 0x18) + 0x10) + *(int *)(param_1 + 0x10);
  }
  return *(int *)(param_1 + 0x10);
}

int sub_01c29560(void);
int sub_01c29610(...);
// @baa 0x01c29e60
int sub_01c29e60(int param_1)
{
  int iVar1;
  
  iVar1 = sub_01c29560();
  if ((iVar1 != 0) && (param_1 != 0)) {
    *(int *)(iVar1 + 0x18) = param_1;
    sub_01c29610(param_1);
  }
  return iVar1;
}

int sub_01c2a0a0(...);
// @baa 0x01c2a110
int sub_01c2a110(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  iVar1 = sub_01c2a0a0(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = param_2;
    sub_01c29610(param_2);
  }
  return iVar1;
}

// @baa 0x01c2aaa0
void sub_01c2aaa0(int * param_1, code * param_2, undefined4 param_3)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if ((((param_1 != (int *)0x0) && (param_2 != (code *)0x0)) && (*param_1 != 0)) &&
     (iVar4 = 0, 0 < param_1[1])) {
    iVar3 = 0;
    do {
      puVar1 = (undefined4 *)(*param_1 + iVar3);
      if (((undefined4 *)(*param_1 + iVar3))[5] != 0) {
        while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
          puVar1 = (undefined4 *)*puVar2;
          if (puVar2[4] != 0) {
            (*param_2)(puVar2[4],param_3,puVar2[1],puVar2[2],puVar2[3]);
          }
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar4 < param_1[1]);
  }
  return;
}

// @baa 0x01c2acb0
undefined4 sub_01c2acb0(int param_1)
{
  if (param_1 == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 8);
}

int sub_01c2a400(...);
// @baa 0x01c2ae20
void sub_01c2ae20(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_01c2a400(param_1,param_2,0,0,param_3);
  return;
}

// @baa 0x01c2ae40
void sub_01c2ae40(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  sub_01c2a400(param_1,param_2,param_3,0,param_4);
  return;
}

int sub_01c2a660(...);
// @baa 0x01c2ae60
void sub_01c2ae60(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  sub_01c2a660(param_1,param_2,0,0,param_3,param_4);
  return;
}

// @baa 0x01c2ae90
void sub_01c2ae90(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  sub_01c2a660(param_1,param_2,param_3,0,param_4,param_5);
  return;
}

int sub_01c2a900(...);
// @baa 0x01c2aee0
void sub_01c2aee0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_01c2a900(param_1,param_2,param_3,0);
  return;
}

int sub_01c2a9d0(...);
// @baa 0x01c2af00
void sub_01c2af00(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_01c2a9d0(param_1,param_2,param_3,0,0,0,0);
  return;
}

// @baa 0x01c2af20
void sub_01c2af20(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  sub_01c2a9d0(param_1,param_2,param_3,param_4,param_5,0,0);
  return;
}

void sub_01c2ab10();
// @baa 0x01c2af80
void sub_01c2af80(void) { sub_01c2ab10(); }

int sub_01c2acc0(...);
// @baa 0x01c2af90
void sub_01c2af90(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_01c2acc0(param_1,param_2,0,0,param_3);
  return;
}

// @baa 0x01c2afb0
void sub_01c2afb0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  sub_01c2acc0(param_1,param_2,param_3,0,param_4);
  return;
}

int sub_01c2afd0(...);
extern undefined4 g_026163fc;
// @baa 0x01c2b140
undefined4 sub_01c2b140(uint param_1)
{
  undefined4 uVar1;
  
  if (param_1 < 0x100) {
    return 0;
  }
  uVar1 = sub_01c2afd0(param_1,&g_026163fc);
  return uVar1;
}

extern undefined4 g_0261647c;
// @baa 0x01c2b190
uint sub_01c2b190(uint param_1)
{
  uint uVar1;
  
  if (param_1 < 0x100) {
    return (uint)(param_1 == 0xb7);
  }
  uVar1 = sub_01c2afd0(param_1,&g_0261647c);
  return uVar1;
}

// @baa 0x01c2b2c0
int sub_01c2b2c0(void) { return 0; }

// @baa 0x01c2b2d0
undefined4 sub_01c2b2d0(int param_1)
{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    return *(undefined4 *)(*(int *)(param_1 + 0x24) + 4);
  }
  return 0;
}

// @baa 0x01c2b2f0
undefined4 sub_01c2b2f0(int param_1)
{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    return *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x1c);
  }
  return 0;
}

// @baa 0x01c2b310
undefined4 sub_01c2b310(int param_1)
{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    return *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x20);
  }
  return 0;
}

int sub_01c263b0(...);
// @baa 0x01c2ba20
void sub_01c2ba20(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  code *pcVar1;
  
  if (param_1 != (int *)0x0) {
    if (param_1[0x36] == 1) {
      sub_01c263b0(param_1 + 0x1b,*(undefined4 *)(param_1[2] + 0x2c),param_2,param_3,param_4);
      return;
    }
    if (param_1[0x36] == 2) {
      sub_01c263b0(param_1 + 0x1b,*(undefined4 *)(param_1[2] + 0x30),param_2,param_3,param_4);
      return;
    }
    if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x58), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1[1],"SAX.xmlSAX2ElementDecl(%s) called while not in subset\012",param_2);
    }
  }
  return;
}

int sub_01c270a0(...);
// @baa 0x01c2baa0
void sub_01c2baa0(int * param_1, undefined4 param_2, int param_3, int param_4)
{
  code *pcVar1;
  
  if (param_1 != (int *)0x0) {
    if ((param_3 == 0) && (param_4 == 0)) {
      if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x58), pcVar1 != (code *)0x0)) {
        (*pcVar1)(param_1[1],"SAX.xmlSAX2NotationDecl(%s) externalID or PublicID missing\012",param_2);
      }
      param_1[0x19] = 0;
      param_1[3] = 0;
      return;
    }
    if (param_1[0x36] == 1) {
      sub_01c270a0(param_1 + 0x1b,*(undefined4 *)(param_1[2] + 0x2c),param_2,param_3,param_4);
      return;
    }
    if (param_1[0x36] == 2) {
      sub_01c270a0(param_1 + 0x1b,*(undefined4 *)(param_1[2] + 0x30),param_2,param_3,param_4);
      return;
    }
    if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x58), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1[1],"SAX.xmlSAX2NotationDecl(%s) called while not in subset\012",param_2);
    }
  }
  return;
}

// @baa 0x01c2bc90
void sub_01c2bc90(void) {  }

// @baa 0x01c2d350
void sub_01c2d350(void) {  }

extern undefined4 g_02616b90;
// @baa 0x01c2d4d0
undefined4 sub_01c2d4d0(int param_1)
{
  undefined4 uVar1;
  
  uVar1 = g_02616b90;
  if ((param_1 != 1) && (param_1 != 2)) {
    return 0xffffffff;
  }
  g_02616b90 = param_1;
  return uVar1;
}

int sub_01c2d4f0(...);
// @baa 0x01c2d630
void sub_01c2d630(void)
{
  sub_01c2d4f0(&g_02614410,1);
  return;
}

extern undefined4 g_027d4d78;
// @baa 0x01c2d660
undefined4 sub_01c2d660(void)
{
  return g_027d4d78;
}

extern undefined4 g_027d4d7c;
// @baa 0x01c2d670
undefined4 sub_01c2d670(void)
{
  return g_027d4d7c;
}

#pragma pack(push, 1)
struct _iobuf { char * _ptr; int _cnt; char * _base; int _flag; int _file; int _charbuf; int _bufsiz; char * _tmpfname; };

#pragma pack(pop)
typedef _iobuf FILE;

extern "C" __declspec(dllimport) int fprintf(...);
// @baa 0x01c2d680
void sub_01c2d680(FILE * param_1)
{
  fprintf(param_1,"Memory list not compiled (MEM_LIST not defined !)\012");
  return;
}

#pragma pack(push, 1)
#pragma pack(pop)
extern undefined4 g_027d4d80;
// @baa 0x01c2d6c0
void sub_01c2d6c0(FILE * param_1)
{
  if (param_1 != (FILE *)0x0) {
    fprintf(param_1,"      MEMORY ALLOCATED : %lu, MAX was %lu\012",g_027d4d78,g_027d4d80);
  }
  return;
}

// @baa 0x01c2d6f0
void sub_01c2d6f0(void) {  }

// @baa 0x01c2e020
uint sub_01c2e020(uint param_1, uint param_2)
{
  if (param_1 < param_2) {
    return 0xffffffff;
  }
  return (uint)(param_1 != param_2);
}

// @baa 0x01c2e4d0
uint sub_01c2e4d0(int * param_1)
{
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  return (uint)(*(int **)*param_1 == (int *)*param_1);
}

// @baa 0x01c2e4f0
undefined4 sub_01c2e4f0(undefined4 * param_1)
{
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *(undefined4 *)*param_1;
}

// @baa 0x01c2e500
undefined4 sub_01c2e500(int * param_1)
{
  if (param_1 == (int *)0x0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 4);
}

// @baa 0x01c2e670
undefined4 sub_01c2e670(int param_1)
{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 8);
}

// @baa 0x01c2e6b0
void sub_01c2e6b0(int * param_1, code * param_2, undefined4 param_3)
{
  int iVar1;
  int *piVar2;
  
  if (((param_1 != (int *)0x0) && (param_2 != (code *)0x0)) &&
     (piVar2 = *(int **)*param_1, piVar2 != (int *)*param_1)) {
    do {
      iVar1 = (*param_2)(piVar2[2],param_3);
      if (iVar1 == 0) {
        return;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*param_1);
  }
  return;
}

// @baa 0x01c2e6f0
void sub_01c2e6f0(int * param_1, code * param_2, undefined4 param_3)
{
  int iVar1;
  int iVar2;
  
  if (((param_1 != (int *)0x0) && (param_2 != (code *)0x0)) &&
     (iVar2 = *(int *)(*param_1 + 4), iVar2 != *param_1)) {
    do {
      iVar1 = (*param_2)(*(undefined4 *)(iVar2 + 8),param_3);
      if (iVar1 == 0) {
        return;
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != *param_1);
  }
  return;
}

int sub_01c2e480(...);
int sub_01c2e760(...);
// @baa 0x01c2e7d0
void sub_01c2e7d0(undefined4 param_1, undefined4 param_2)
{
  sub_01c2e760(param_1,param_2);
  sub_01c2e480(param_2);
  return;
}

// @baa 0x01c2ebd0
void sub_01c2ebd0(void) {  }

struct C { int sub_01c2ee90(void); };

// @baa 0x01c2ee90
int C::sub_01c2ee90(void) { return *(int*)((char*)this + 8); }

struct C_01c2eea0 {
    int sub_01c2eea0(int);
};

// @baa 0x01c2eea0
int C_01c2eea0::sub_01c2eea0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_01c2eeb0 {
    int sub_01c2eeb0();
};

// @baa 0x01c2eeb0
int C_01c2eeb0::sub_01c2eeb0(void)
{
    int * param_1 = (int *)this;

  return *param_1 + -0x48 + param_1[2] * 0x48;
}

// @baa 0x01c2ef60
void sub_01c2ef60(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01c2f010 {
    undefined4 sub_01c2f010(byte);
};

int sub_00402660(...);
int sub_01c2eb60(void);
// @baa 0x01c2f010
undefined4 C_01c2f010::sub_01c2f010(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01c2eb60();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01c2f030 { int sub_01c2f030(void); };

// @baa 0x01c2f030
int C_01c2f030::sub_01c2f030(void) { return *(int*)((char*)this + 24828); }

struct C_01c2f040 {
    int sub_01c2f040(int);
};

// @baa 0x01c2f040
int C_01c2f040::sub_01c2f040(int param_2)
{
    int param_1 = (int)this;
  return param_2 * 0x20 + *(int *)(param_1 + 0x60f4);
}

struct C_01c2f0a0 {
    float10 sub_01c2f0a0(uint);
};

// @baa 0x01c2f0a0
float10 C_01c2f0a0::sub_01c2f0a0(uint param_2)
{
    int param_1 = (int)this;

  if (param_2 < *(int *)(param_1 + 0x50) - 1U) {
    return (float10)*(float *)(*(int *)(param_1 + 0x48) + 0x4c + param_2 * 0x48);
  }
  return (float10)*(float *)(param_1 + 0x54);
}

struct FFaceData {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01c2f0d0(volatile FFaceData *Other);
};

// @baa 0x01c2f0d0
void FFaceData::sub_01c2f0d0(volatile FFaceData *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_01c2f100 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01c2f100(volatile FFaceData_01c2f100 *Other);
};

// @baa 0x01c2f100
void FFaceData_01c2f100::sub_01c2f100(volatile FFaceData_01c2f100 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct S_01c2f180 { void sub_01c2eb60(); };

// @baa 0x01c2f180
void sub_01c2f180(S_01c2f180 *p) { if (p) p->sub_01c2eb60(); }

struct C_01c2f870 {
    void sub_01c2f870();
};

int sub_01ab3290(...);
int sub_01c2f320(...);
// @baa 0x01c2f870
void C_01c2f870::sub_01c2f870(void)
{
    int * param_1 = (int *)this;

  sub_01c2f320(*param_1,*param_1 + param_1[2] * 0x48);
  sub_01ab3290(*param_1,param_1[1] * 0x48);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01c2fb50 {
    void sub_01c2fb50();
};

// @baa 0x01c2fb50
void C_01c2fb50::sub_01c2fb50(void)
{
    int * param_1 = (int *)this;

  sub_01c2f320(*param_1,*param_1 + param_1[2] * 0x48);
  sub_01ab3290(*param_1,param_1[1] * 0x48);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}
