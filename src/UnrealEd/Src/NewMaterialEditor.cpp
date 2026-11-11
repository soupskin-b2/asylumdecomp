// NewMaterialEditor.cpp (part 1 of 8): 301 functions
// Placed here by: neighbours 274, callers 25, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00c3e190(void);
int sub_00c41c50(...);
extern undefined4 g_026c0aa8;
// @baa 0x006ae520
undefined4 sub_006ae520(int param_1)
{
  int iVar1;
  
  if (g_026c0aa8 == 0) {
    g_026c0aa8 = sub_00c41c50(L"Engine");
    sub_00c3e190();
    if (g_026c0aa8 == 0) {
      return 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x28);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == g_026c0aa8) break;
    iVar1 = *(int *)(iVar1 + 0x30);
  }
  return 1;
}

// @baa 0x00c1e2c0
void __stdcall sub_00c1e2c0(int a0) {  }

int sub_00c33000(...);
int sub_00c394b0(void);
extern undefined4 g_026c0988;
// @baa 0x00c9a720
int sub_00c9a720(void)
{
  if (g_026c0988 == 0) {
    g_026c0988 = sub_00c33000(L"Engine");
    sub_00c394b0();
  }
  return g_026c0988;
}

int sub_00c36540(...);
int sub_00c3e2e0(void);
extern undefined4 g_026c0aac;
// @baa 0x00c9a750
int sub_00c9a750(void)
{
  if (g_026c0aac == 0) {
    g_026c0aac = sub_00c36540(L"Engine");
    sub_00c3e2e0();
  }
  return g_026c0aac;
}

int sub_00c33fc0(...);
int sub_00c3aef0(void);
extern undefined4 g_026c09dc;
// @baa 0x00c9a780
int sub_00c9a780(void)
{
  if (g_026c09dc == 0) {
    g_026c09dc = sub_00c33fc0(L"Engine");
    sub_00c3aef0();
  }
  return g_026c09dc;
}

int sub_00c33f00(...);
int sub_00c3ada0(void);
extern undefined4 g_026c09d8;
// @baa 0x00c9a7b0
int sub_00c9a7b0(void)
{
  if (g_026c09d8 == 0) {
    g_026c09d8 = sub_00c33f00(L"Engine");
    sub_00c3ada0();
  }
  return g_026c09d8;
}

int sub_00c339c0(...);
int sub_00c3a470(void);
extern undefined4 g_026c09bc;
// @baa 0x00c9a7e0
int sub_00c9a7e0(void)
{
  if (g_026c09bc == 0) {
    g_026c09bc = sub_00c339c0(L"Engine");
    sub_00c3a470();
  }
  return g_026c09bc;
}

int sub_00c33a80(...);
int sub_00c3a5c0(void);
extern undefined4 g_026c09c0;
// @baa 0x00c9a810
int sub_00c9a810(void)
{
  if (g_026c09c0 == 0) {
    g_026c09c0 = sub_00c33a80(L"Engine");
    sub_00c3a5c0();
  }
  return g_026c09c0;
}

int sub_00c34140(...);
int sub_00c3b190(void);
extern undefined4 g_026c09e4;
// @baa 0x00c9a840
int sub_00c9a840(void)
{
  if (g_026c09e4 == 0) {
    g_026c09e4 = sub_00c34140(L"Engine");
    sub_00c3b190();
  }
  return g_026c09e4;
}

int sub_00c33540(...);
int sub_00c39c90(void);
extern undefined4 g_026c09a4;
// @baa 0x00c9a870
int sub_00c9a870(void)
{
  if (g_026c09a4 == 0) {
    g_026c09a4 = sub_00c33540(L"Engine");
    sub_00c39c90();
  }
  return g_026c09a4;
}

int sub_00c35e80(...);
int sub_00c3d500(void);
extern undefined4 g_026c0a80;
// @baa 0x00c9a8a0
int sub_00c9a8a0(void)
{
  if (g_026c0a80 == 0) {
    g_026c0a80 = sub_00c35e80(L"Engine");
    sub_00c3d500();
  }
  return g_026c0a80;
}

int sub_00c33240(...);
int sub_00c39750(void);
extern undefined4 g_026c0994;
// @baa 0x00c9a8d0
int sub_00c9a8d0(void)
{
  if (g_026c0994 == 0) {
    g_026c0994 = sub_00c33240(L"Engine");
    sub_00c39750();
  }
  return g_026c0994;
}

int sub_00c3d650(...);
int sub_00c3d710(void);
extern undefined4 g_026c0a84;
// @baa 0x00c9a900
int sub_00c9a900(void)
{
  if (g_026c0a84 == 0) {
    g_026c0a84 = sub_00c3d650(L"Engine");
    sub_00c3d710();
  }
  return g_026c0a84;
}

int sub_00c33600(...);
int sub_00c39de0(void);
extern undefined4 g_026c09a8;
// @baa 0x00c9a930
int sub_00c9a930(void)
{
  if (g_026c09a8 == 0) {
    g_026c09a8 = sub_00c33600(L"Engine");
    sub_00c39de0();
  }
  return g_026c09a8;
}

int sub_00c336c0(...);
int sub_00c39f30(void);
extern undefined4 g_026c09ac;
// @baa 0x00c9a960
int sub_00c9a960(void)
{
  if (g_026c09ac == 0) {
    g_026c09ac = sub_00c336c0(L"Engine");
    sub_00c39f30();
  }
  return g_026c09ac;
}

int sub_00c33780(...);
int sub_00c3a080(void);
extern undefined4 g_026c09b0;
// @baa 0x00c9a990
int sub_00c9a990(void)
{
  if (g_026c09b0 == 0) {
    g_026c09b0 = sub_00c33780(L"Engine");
    sub_00c3a080();
  }
  return g_026c09b0;
}

int sub_00c33840(...);
int sub_00c3a1d0(void);
extern undefined4 g_026c09b4;
// @baa 0x00c9a9c0
int sub_00c9a9c0(void)
{
  if (g_026c09b4 == 0) {
    g_026c09b4 = sub_00c33840(L"Engine");
    sub_00c3a1d0();
  }
  return g_026c09b4;
}

int sub_00c36480(...);
int sub_00c3e040(void);
extern undefined4 g_026c0aa4;
// @baa 0x00c9a9f0
int sub_00c9a9f0(void)
{
  if (g_026c0aa4 == 0) {
    g_026c0aa4 = sub_00c36480(L"Engine");
    sub_00c3e040();
  }
  return g_026c0aa4;
}

int sub_00c33480(...);
int sub_00c39b40(void);
extern undefined4 g_026c09a0;
// @baa 0x00c9aa20
int sub_00c9aa20(void)
{
  if (g_026c09a0 == 0) {
    g_026c09a0 = sub_00c33480(L"Engine");
    sub_00c39b40();
  }
  return g_026c09a0;
}

int sub_00c33e40(...);
int sub_00c3ac50(void);
extern undefined4 g_026c09d4;
// @baa 0x00c9aa50
int sub_00c9aa50(void)
{
  if (g_026c09d4 == 0) {
    g_026c09d4 = sub_00c33e40(L"Engine");
    sub_00c3ac50();
  }
  return g_026c09d4;
}

int sub_00c333c0(...);
int sub_00c399f0(void);
extern undefined4 g_026c099c;
// @baa 0x00c9aa80
int sub_00c9aa80(void)
{
  if (g_026c099c == 0) {
    g_026c099c = sub_00c333c0(L"Engine");
    sub_00c399f0();
  }
  return g_026c099c;
}

int sub_00c34440(...);
int sub_00c3b580(void);
extern undefined4 g_026c09f4;
// @baa 0x00c9aab0
int sub_00c9aab0(void)
{
  if (g_026c09f4 == 0) {
    g_026c09f4 = sub_00c34440(L"Engine");
    sub_00c3b580();
  }
  return g_026c09f4;
}

int sub_00c363c0(...);
int sub_00c3def0(void);
extern undefined4 g_026c0aa0;
// @baa 0x00c9aae0
int sub_00c9aae0(void)
{
  if (g_026c0aa0 == 0) {
    g_026c0aa0 = sub_00c363c0(L"Engine");
    sub_00c3def0();
  }
  return g_026c0aa0;
}

int sub_00c345c0(...);
int sub_00c3b820(void);
extern undefined4 g_026c09fc;
// @baa 0x00c9ab10
int sub_00c9ab10(void)
{
  if (g_026c09fc == 0) {
    g_026c09fc = sub_00c345c0(L"Engine");
    sub_00c3b820();
  }
  return g_026c09fc;
}

int sub_00c357c0(...);
int sub_00c3c930(void);
extern undefined4 g_026c0a5c;
// @baa 0x00c9ab40
int sub_00c9ab40(void)
{
  if (g_026c0a5c == 0) {
    g_026c0a5c = sub_00c357c0(L"Engine");
    sub_00c3c930();
  }
  return g_026c0a5c;
}

int sub_00c32dc0(...);
int sub_00c390c0(void);
extern undefined4 g_026c097c;
// @baa 0x00c9ab70
int sub_00c9ab70(void)
{
  if (g_026c097c == 0) {
    g_026c097c = sub_00c32dc0(L"Engine");
    sub_00c390c0();
  }
  return g_026c097c;
}

int sub_00c33300(...);
int sub_00c398a0(void);
extern undefined4 g_026c0998;
// @baa 0x00c9aba0
int sub_00c9aba0(void)
{
  if (g_026c0998 == 0) {
    g_026c0998 = sub_00c33300(L"Engine");
    sub_00c398a0();
  }
  return g_026c0998;
}

int sub_00c34080(...);
int sub_00c3b040(void);
extern undefined4 g_026c09e0;
// @baa 0x00c9abd0
int sub_00c9abd0(void)
{
  if (g_026c09e0 == 0) {
    g_026c09e0 = sub_00c34080(L"Engine");
    sub_00c3b040();
  }
  return g_026c09e0;
}

int sub_00c36300(...);
int sub_00c3dda0(void);
extern undefined4 g_026c0a9c;
// @baa 0x00c9ac00
int sub_00c9ac00(void)
{
  if (g_026c0a9c == 0) {
    g_026c0a9c = sub_00c36300(L"Engine");
    sub_00c3dda0();
  }
  return g_026c0a9c;
}

int sub_00c34200(...);
int sub_00c3b2e0(void);
extern undefined4 g_026c09e8;
// @baa 0x00c9ac30
int sub_00c9ac30(void)
{
  if (g_026c09e8 == 0) {
    g_026c09e8 = sub_00c34200(L"Engine");
    sub_00c3b2e0();
  }
  return g_026c09e8;
}

int sub_00c35f40(...);
int sub_00c3d860(void);
extern undefined4 g_026c0a88;
// @baa 0x00c9ac60
int sub_00c9ac60(void)
{
  if (g_026c0a88 == 0) {
    g_026c0a88 = sub_00c35f40(L"Engine");
    sub_00c3d860();
  }
  return g_026c0a88;
}

int sub_00c35a00(...);
int sub_00c3cd20(void);
extern undefined4 g_026c0a68;
// @baa 0x00c9ac90
int sub_00c9ac90(void)
{
  if (g_026c0a68 == 0) {
    g_026c0a68 = sub_00c35a00(L"Engine");
    sub_00c3cd20();
  }
  return g_026c0a68;
}

int sub_00c35100(...);
int sub_00c3bd60(void);
extern undefined4 g_026c0a38;
// @baa 0x00c9acc0
int sub_00c9acc0(void)
{
  if (g_026c0a38 == 0) {
    g_026c0a38 = sub_00c35100(L"Engine");
    sub_00c3bd60();
  }
  return g_026c0a38;
}

int sub_00c351c0(...);
int sub_00c3beb0(void);
extern undefined4 g_026c0a3c;
// @baa 0x00c9acf0
int sub_00c9acf0(void)
{
  if (g_026c0a3c == 0) {
    g_026c0a3c = sub_00c351c0(L"Engine");
    sub_00c3beb0();
  }
  return g_026c0a3c;
}

int sub_00c35280(...);
int sub_00c3c000(void);
extern undefined4 g_026c0a40;
// @baa 0x00c9ad20
int sub_00c9ad20(void)
{
  if (g_026c0a40 == 0) {
    g_026c0a40 = sub_00c35280(L"Engine");
    sub_00c3c000();
  }
  return g_026c0a40;
}

int sub_00c35340(...);
int sub_00c3c150(void);
extern undefined4 g_026c0a44;
// @baa 0x00c9ad50
int sub_00c9ad50(void)
{
  if (g_026c0a44 == 0) {
    g_026c0a44 = sub_00c35340(L"Engine");
    sub_00c3c150();
  }
  return g_026c0a44;
}

int sub_00c35400(...);
int sub_00c3c2a0(void);
extern undefined4 g_026c0a48;
// @baa 0x00c9ad80
int sub_00c9ad80(void)
{
  if (g_026c0a48 == 0) {
    g_026c0a48 = sub_00c35400(L"Engine");
    sub_00c3c2a0();
  }
  return g_026c0a48;
}

int sub_00c36600(...);
int sub_00c3e430(void);
extern undefined4 g_026c0ab0;
// @baa 0x00c9adb0
int sub_00c9adb0(void)
{
  if (g_026c0ab0 == 0) {
    g_026c0ab0 = sub_00c36600(L"Engine");
    sub_00c3e430();
  }
  return g_026c0ab0;
}

int sub_00c36780(...);
int sub_00c3e6d0(void);
extern undefined4 g_026c0ab8;
// @baa 0x00c9ade0
int sub_00c9ade0(void)
{
  if (g_026c0ab8 == 0) {
    g_026c0ab8 = sub_00c36780(L"Engine");
    sub_00c3e6d0();
  }
  return g_026c0ab8;
}

int sub_00c36840(...);
int sub_00c3e820(void);
extern undefined4 g_026c0abc;
// @baa 0x00c9ae10
int sub_00c9ae10(void)
{
  if (g_026c0abc == 0) {
    g_026c0abc = sub_00c36840(L"Engine");
    sub_00c3e820();
  }
  return g_026c0abc;
}

int sub_00c366c0(...);
int sub_00c3e580(void);
extern undefined4 g_026c0ab4;
// @baa 0x00c9ae40
int sub_00c9ae40(void)
{
  if (g_026c0ab4 == 0) {
    g_026c0ab4 = sub_00c366c0(L"Engine");
    sub_00c3e580();
  }
  return g_026c0ab4;
}

int sub_00c354c0(...);
int sub_00c3c3f0(void);
extern undefined4 g_026c0a4c;
// @baa 0x00c9ae70
int sub_00c9ae70(void)
{
  if (g_026c0a4c == 0) {
    g_026c0a4c = sub_00c354c0(L"Engine");
    sub_00c3c3f0();
  }
  return g_026c0a4c;
}

int sub_00c32f40(...);
int sub_00c39360(void);
extern undefined4 g_026c0984;
// @baa 0x00c9aea0
int sub_00c9aea0(void)
{
  if (g_026c0984 == 0) {
    g_026c0984 = sub_00c32f40(L"Engine");
    sub_00c39360();
  }
  return g_026c0984;
}

int sub_00c36900(...);
int sub_00c3e970(void);
extern undefined4 g_026c0ac0;
// @baa 0x00c9aed0
int sub_00c9aed0(void)
{
  if (g_026c0ac0 == 0) {
    g_026c0ac0 = sub_00c36900(L"Engine");
    sub_00c3e970();
  }
  return g_026c0ac0;
}

int sub_00c32c40(...);
int sub_00c38e20(void);
extern undefined4 g_026c0974;
// @baa 0x00c9af00
int sub_00c9af00(void)
{
  if (g_026c0974 == 0) {
    g_026c0974 = sub_00c32c40(L"Engine");
    sub_00c38e20();
  }
  return g_026c0974;
}

int sub_00c369c0(...);
int sub_00c3eac0(void);
extern undefined4 g_026c0ac4;
// @baa 0x00c9af30
int sub_00c9af30(void)
{
  if (g_026c0ac4 == 0) {
    g_026c0ac4 = sub_00c369c0(L"Engine");
    sub_00c3eac0();
  }
  return g_026c0ac4;
}

int sub_00c32d00(...);
int sub_00c38f70(void);
extern undefined4 g_026c0978;
// @baa 0x00c9af60
int sub_00c9af60(void)
{
  if (g_026c0978 == 0) {
    g_026c0978 = sub_00c32d00(L"Engine");
    sub_00c38f70();
  }
  return g_026c0978;
}

int sub_00c36240(...);
int sub_00c3dc50(void);
extern undefined4 g_026c0a98;
// @baa 0x00c9af90
int sub_00c9af90(void)
{
  if (g_026c0a98 == 0) {
    g_026c0a98 = sub_00c36240(L"Engine");
    sub_00c3dc50();
  }
  return g_026c0a98;
}

int sub_00c34980(...);
int sub_00c3bac0(void);
extern undefined4 g_026c0a10;
// @baa 0x00c9afc0
int sub_00c9afc0(void)
{
  if (g_026c0a10 == 0) {
    g_026c0a10 = sub_00c34980(L"Engine");
    sub_00c3bac0();
  }
  return g_026c0a10;
}

int sub_00c35ac0(...);
int sub_00c3ce70(void);
extern undefined4 g_026c0a6c;
// @baa 0x00c9aff0
int sub_00c9aff0(void)
{
  if (g_026c0a6c == 0) {
    g_026c0a6c = sub_00c35ac0(L"Engine");
    sub_00c3ce70();
  }
  return g_026c0a6c;
}

int sub_00c33c00(...);
int sub_00c3a860(void);
extern undefined4 g_026c09c8;
// @baa 0x00c9b020
int sub_00c9b020(void)
{
  if (g_026c09c8 == 0) {
    g_026c09c8 = sub_00c33c00(L"Engine");
    sub_00c3a860();
  }
  return g_026c09c8;
}

int sub_00c35640(...);
int sub_00c3c690(void);
extern undefined4 g_026c0a54;
// @baa 0x00c9b050
int sub_00c9b050(void)
{
  if (g_026c0a54 == 0) {
    g_026c0a54 = sub_00c35640(L"Engine");
    sub_00c3c690();
  }
  return g_026c0a54;
}

int sub_00c35880(...);
int sub_00c3ca80(void);
extern undefined4 g_026c0a60;
// @baa 0x00c9b080
int sub_00c9b080(void)
{
  if (g_026c0a60 == 0) {
    g_026c0a60 = sub_00c35880(L"Engine");
    sub_00c3ca80();
  }
  return g_026c0a60;
}

int sub_00c33b40(...);
int sub_00c3a710(void);
extern undefined4 g_026c09c4;
// @baa 0x00c9b0b0
int sub_00c9b0b0(void)
{
  if (g_026c09c4 == 0) {
    g_026c09c4 = sub_00c33b40(L"Engine");
    sub_00c3a710();
  }
  return g_026c09c4;
}

int sub_00c33cc0(...);
int sub_00c3a9b0(void);
extern undefined4 g_026c09cc;
// @baa 0x00c9b0e0
int sub_00c9b0e0(void)
{
  if (g_026c09cc == 0) {
    g_026c09cc = sub_00c33cc0(L"Engine");
    sub_00c3a9b0();
  }
  return g_026c09cc;
}

int sub_00c35c40(...);
int sub_00c3d110(void);
extern undefined4 g_026c0a74;
// @baa 0x00c9b110
int sub_00c9b110(void)
{
  if (g_026c0a74 == 0) {
    g_026c0a74 = sub_00c35c40(L"Engine");
    sub_00c3d110();
  }
  return g_026c0a74;
}

int sub_00c35580(...);
int sub_00c3c540(void);
extern undefined4 g_026c0a50;
// @baa 0x00c9b140
int sub_00c9b140(void)
{
  if (g_026c0a50 == 0) {
    g_026c0a50 = sub_00c35580(L"Engine");
    sub_00c3c540();
  }
  return g_026c0a50;
}

int sub_00c33d80(...);
int sub_00c3ab00(void);
extern undefined4 g_026c09d0;
// @baa 0x00c9b170
int sub_00c9b170(void)
{
  if (g_026c09d0 == 0) {
    g_026c09d0 = sub_00c33d80(L"Engine");
    sub_00c3ab00();
  }
  return g_026c09d0;
}

int sub_00c35940(...);
int sub_00c3cbd0(void);
extern undefined4 g_026c0a64;
// @baa 0x00c9b1a0
int sub_00c9b1a0(void)
{
  if (g_026c0a64 == 0) {
    g_026c0a64 = sub_00c35940(L"Engine");
    sub_00c3cbd0();
  }
  return g_026c0a64;
}

int sub_00c32e80(...);
int sub_00c39210(void);
extern undefined4 g_026c0980;
// @baa 0x00c9b1d0
int sub_00c9b1d0(void)
{
  if (g_026c0980 == 0) {
    g_026c0980 = sub_00c32e80(L"Engine");
    sub_00c39210();
  }
  return g_026c0980;
}

struct C{
int sub_0105de40(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x0105de40
int C::sub_0105de40(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026db57c;
extern undefined4 g_026db580;
extern undefined4 g_026db584;
// @baa 0x014279e0
undefined * sub_014279e0(void)
{
  if ((g_026db584 & 1) == 0) {
    g_026db584 = g_026db584 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026db57c = (undefined4)(&g_026af518);
    g_026db580 = (undefined4)(L"HRealtimePreviewProxy");
  }
  return (undefined *)(&g_026db57c);
}

// @baa 0x01428da0
void sub_01428da0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x01428dc0
void sub_01428dc0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct E { BYTE Bytes[20]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_01428de0(INT Index) const;
};

// @baa 0x01428de0
const E* S::sub_01428de0(INT Index) const
{
    return &Items(Index);
}

struct E_01428e30 { BYTE Bytes[40]; };

struct S_01428e30 {
    TArray<E_01428e30> Items; // 0x00
    const E_01428e30* sub_01428e30(INT Index) const;
};

// @baa 0x01428e30
const E_01428e30* S_01428e30::sub_01428e30(INT Index) const
{
    return &Items(Index);
}

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_0142a2d0(INT Index);
};

// @baa 0x0142a2d0
FFaceFXElement* UFxRenderWidget::sub_0142a2d0(INT Index)
{
	return &BoneArray(Index);
}

struct S_0142a3a0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_0142a3a0(INT Index) const;
};

// @baa 0x0142a3a0
const DWORD* S_0142a3a0::sub_0142a3a0(INT Index) const
{
    return &Items(Index);
}

struct S_0142a3f0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0142a3f0(INT Index);
};

// @baa 0x0142a3f0
QWORD* S_0142a3f0::sub_0142a3f0(INT Index)
{
    return &Items(Index);
}

struct S_0142a4a0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_0142a4a0(INT Index);
};

// @baa 0x0142a4a0
QWORD* S_0142a4a0::sub_0142a4a0(INT Index)
{
    return &Items(Index);
}

struct E_0142a4f0 { BYTE Bytes[36]; };

struct S_0142a4f0 {
    TArray<E_0142a4f0> Items; // 0x00
    E_0142a4f0* sub_0142a4f0(INT Index);
};

// @baa 0x0142a4f0
E_0142a4f0* S_0142a4f0::sub_0142a4f0(INT Index)
{
    return &Items(Index);
}

struct S_0142a540 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0142a540(INT Index);
};

// @baa 0x0142a540
DWORD* S_0142a540::sub_0142a540(INT Index)
{
    return &Items(Index);
}

struct E_0142a5f0 { BYTE Bytes[16]; };

struct S_0142a5f0 {
    TArray<E_0142a5f0> Items; // 0x00
    E_0142a5f0* sub_0142a5f0(INT Index);
};

// @baa 0x0142a5f0
E_0142a5f0* S_0142a5f0::sub_0142a5f0(INT Index)
{
    return &Items(Index);
}

struct C_0142a6b0 {
    int sub_0142a6b0(int);
};

// @baa 0x0142a6b0
int C_0142a6b0::sub_0142a6b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x0142a6c0
void __stdcall sub_0142a6c0(int a0, int a1) {  }

struct C_0142a6d0 {
    int sub_0142a6d0(int);
};

// @baa 0x0142a6d0
int C_0142a6d0::sub_0142a6d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0142a6e0 {
    int sub_0142a6e0(int);
};

// @baa 0x0142a6e0
int C_0142a6e0::sub_0142a6e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x0142a6f0
void __stdcall sub_0142a6f0(int a0, int a1) {  }

struct C_0142a700 {
    int sub_0142a700(int);
};

// @baa 0x0142a700
int C_0142a700::sub_0142a700(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x0142a710
void __stdcall sub_0142a710(int a0, int a1) {  }

struct C_0142a720 {
    int sub_0142a720(int);
};

// @baa 0x0142a720
int C_0142a720::sub_0142a720(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_0142a730 {
    int sub_0142a730(int);
};

// @baa 0x0142a730
int C_0142a730::sub_0142a730(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0142a740
void __stdcall sub_0142a740(int a0, int a1) {  }

struct C_0142a750 {
    int sub_0142a750(int);
};

// @baa 0x0142a750
int C_0142a750::sub_0142a750(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0142a760
void __stdcall sub_0142a760(int a0, int a1) {  }

struct C_0142a770 { int sub_0142a770(void); };

// @baa 0x0142a770
int C_0142a770::sub_0142a770(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0142a780 {
    int sub_0142a780(int);
};

// @baa 0x0142a780
int C_0142a780::sub_0142a780(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_0142a7a0 {
    int sub_0142a7a0(int);
};

// @baa 0x0142a7a0
int C_0142a7a0::sub_0142a7a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0142a7b0 {
    int sub_0142a7b0(int);
};

// @baa 0x0142a7b0
int C_0142a7b0::sub_0142a7b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

int sub_005413d0(...);
// @baa 0x0142a7f0
void sub_0142a7f0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0142a800 {
    int sub_0142a800(int);
};

// @baa 0x0142a800
int C_0142a800::sub_0142a800(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_0142a810 {
    int sub_0142a810(int);
};

// @baa 0x0142a810
int C_0142a810::sub_0142a810(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0142a820 {
    int sub_0142a820();
};

// @baa 0x0142a820
int C_0142a820::sub_0142a820(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0142a840 {
    int sub_0142a840();
};

// @baa 0x0142a840
int C_0142a840::sub_0142a840(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0142a880 {
    int sub_0142a880(int);
};

// @baa 0x0142a880
int C_0142a880::sub_0142a880(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x0142a8d0
void sub_0142a8d0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0142a8e0 {
    int sub_0142a8e0(int);
};

// @baa 0x0142a8e0
int C_0142a8e0::sub_0142a8e0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

// @baa 0x0142a920
void sub_0142a920(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0142a930 {
    int sub_0142a930(int);
};

// @baa 0x0142a930
int C_0142a930::sub_0142a930(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

// @baa 0x0142a970
void sub_0142a970(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0142a980 {
    int sub_0142a980(int);
};

// @baa 0x0142a980
int C_0142a980::sub_0142a980(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_0142a990 {
    int sub_0142a990();
};

// @baa 0x0142a990
int C_0142a990::sub_0142a990(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0142a9a0 {
    int sub_0142a9a0();
};

// @baa 0x0142a9a0
int C_0142a9a0::sub_0142a9a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0142a9c0 {
    int sub_0142a9c0();
};

// @baa 0x0142a9c0
int C_0142a9c0::sub_0142a9c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_0142a9e0 {
    int sub_0142a9e0();
};

// @baa 0x0142a9e0
int C_0142a9e0::sub_0142a9e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0142aa00 {
    int sub_0142aa00();
};

// @baa 0x0142aa00
int C_0142aa00::sub_0142aa00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_0142aa10 {
    int sub_0142aa10();
};

// @baa 0x0142aa10
int C_0142aa10::sub_0142aa10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0142aa30 {
    int sub_0142aa30();
};

// @baa 0x0142aa30
int C_0142aa30::sub_0142aa30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_0142aa40 {
    int sub_0142aa40();
};

// @baa 0x0142aa40
int C_0142aa40::sub_0142aa40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0142aa60 {
    int sub_0142aa60();
};

// @baa 0x0142aa60
int C_0142aa60::sub_0142aa60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0142aa70 {
    int sub_0142aa70(int);
};

// @baa 0x0142aa70
int C_0142aa70::sub_0142aa70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0142aa80 {
    int sub_0142aa80();
};

// @baa 0x0142aa80
int C_0142aa80::sub_0142aa80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0142aaa0 {
    int sub_0142aaa0();
};

// @baa 0x0142aaa0
int C_0142aaa0::sub_0142aaa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_0142aac0 {
    int sub_0142aac0();
};

// @baa 0x0142aac0
int C_0142aac0::sub_0142aac0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0142aae0 {
    int sub_0142aae0();
};

// @baa 0x0142aae0
int C_0142aae0::sub_0142aae0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_0142aaf0 {
    int sub_0142aaf0();
};

// @baa 0x0142aaf0
int C_0142aaf0::sub_0142aaf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0142ab10 {
    int sub_0142ab10();
};

// @baa 0x0142ab10
int C_0142ab10::sub_0142ab10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0142ab30 {
    int sub_0142ab30();
};

// @baa 0x0142ab30
int C_0142ab30::sub_0142ab30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0142ab40 {
    int sub_0142ab40();
};

// @baa 0x0142ab40
int C_0142ab40::sub_0142ab40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0142ab60 {
    int sub_0142ab60();
};

// @baa 0x0142ab60
int C_0142ab60::sub_0142ab60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_01432130 { void* Data; int Num; int Max; void sub_01432130(); };

// @baa 0x01432130
void C_01432130::sub_01432130() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01432190 { void* Data; int Num; int Max; void sub_01432190(); };

// @baa 0x01432190
void C_01432190::sub_01432190() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01432230 { void* Data; int Num; int Max; void sub_01432230(); };

// @baa 0x01432230
void C_01432230::sub_01432230() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_014322d0 { void* Data; int Num; int Max; void sub_014322d0(); };

// @baa 0x014322d0
void C_014322d0::sub_014322d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01432330 {
    int sub_01432330();
};

// @baa 0x01432330
int C_01432330::sub_01432330(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c);
}

struct C_01432400 {
    int sub_01432400(int);
};

// @baa 0x01432400
int C_01432400::sub_01432400(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_01432420 {
    int sub_01432420(int);
};

// @baa 0x01432420
int C_01432420::sub_01432420(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01432430 {
    int sub_01432430(int);
};

// @baa 0x01432430
int C_01432430::sub_01432430(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_01432440 {
    int sub_01432440(int);
};

// @baa 0x01432440
int C_01432440::sub_01432440(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01432450 {
    int sub_01432450(int);
};

// @baa 0x01432450
int C_01432450::sub_01432450(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01432460 {
    int sub_01432460();
};

// @baa 0x01432460
int C_01432460::sub_01432460(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01432480 {
    int sub_01432480();
};

// @baa 0x01432480
int C_01432480::sub_01432480(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01432490 {
    int sub_01432490();
};

// @baa 0x01432490
int C_01432490::sub_01432490(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct M_014324b0 { void sub_0105ff80(); };

struct C_014324b0 { char pad[4]; M_014324b0 m; void sub_014324b0(); };

// @baa 0x014324b0
void C_014324b0::sub_014324b0() { m.sub_0105ff80(); }

struct M_014324c0 { void sub_0142b610(); };

struct C_014324c0 { char pad[4]; M_014324c0 m; void sub_014324c0(); };

// @baa 0x014324c0
void C_014324c0::sub_014324c0() { m.sub_0142b610(); }

struct M_014324d0 { void sub_0040fcc0(); };

struct C_014324d0 { char pad[4]; M_014324d0 m; void sub_014324d0(); };

// @baa 0x014324d0
void C_014324d0::sub_014324d0() { m.sub_0040fcc0(); }

struct C_01432570 {
    int sub_01432570(int);
};

// @baa 0x01432570
int C_01432570::sub_01432570(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_01432670 {
    int sub_01432670(int);
};

// @baa 0x01432670
int C_01432670::sub_01432670(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_014326f0 {
    int sub_014326f0(int);
};

// @baa 0x014326f0
int C_014326f0::sub_014326f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_014327f0 {
    int sub_014327f0(int);
};

// @baa 0x014327f0
int C_014327f0::sub_014327f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_014328f0 {
    int sub_014328f0(int);
};

// @baa 0x014328f0
int C_014328f0::sub_014328f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01432970 {
    int sub_01432970();
};

// @baa 0x01432970
int C_01432970::sub_01432970(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct M_01432980 { void sub_0105ff80(); };

struct C_01432980 { char pad[4]; M_01432980 m; void sub_01432980(); };

// @baa 0x01432980
void C_01432980::sub_01432980() { m.sub_0105ff80(); }

struct M_01432990 { void sub_0142b610(); };

struct C_01432990 { char pad[4]; M_01432990 m; void sub_01432990(); };

// @baa 0x01432990
void C_01432990::sub_01432990() { m.sub_0142b610(); }

struct C_014329a0 {
    int sub_014329a0(int);
};

// @baa 0x014329a0
int C_014329a0::sub_014329a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_014329b0 {
    int sub_014329b0();
};

// @baa 0x014329b0
int C_014329b0::sub_014329b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_014332e0 {
    void sub_014332e0();
};

int sub_014331a0(void);
// @baa 0x014332e0
void C_014332e0::sub_014332e0(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x3d4) = 1;
  sub_014331a0();
  *(undefined4 *)(param_1 + 0x3d4) = uVar1;
  return;
}

struct C_014343a0 { void sub_01434120(); void sub_014343a0(int); };

// @baa 0x014343a0
void C_014343a0::sub_014343a0(int) { sub_01434120(); }

class wxCloseEvent;
class wxWindowBase;
class wxCloseEvent {
    public:
    public: __declspec(dllimport) void Veto(bool);
    friend struct C_01434a30;
};

class wxWindowBase {
    public:
    public: __declspec(dllimport) bool Hide();
    friend struct C_01434a30;
};

struct C_01434a30 {
    void sub_01434a30(wxCloseEvent *);
};

int sub_01434510(void);
// @baa 0x01434a30
void C_01434a30::sub_01434a30(wxCloseEvent * param_2)
{
    wxWindowBase * param_1 = (wxWindowBase *)this;

  sub_01434510();
  ((wxWindowBase *)(param_1))->wxWindowBase::Hide();
  ((wxCloseEvent *)(param_2))->wxCloseEvent::Veto(true);
  return;
}

struct C_01434df0 {
    undefined4 sub_01434df0(byte);
};

int sub_0053dfa0(...);
int sub_0142dce0(void);
// @baa 0x01434df0
undefined4 C_01434df0::sub_01434df0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0142dce0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01434e10 {
    undefined4 sub_01434e10(byte);
};

int sub_0142e200(void);
// @baa 0x01434e10
undefined4 C_01434e10::sub_01434e10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0142e200();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01434e30 {
    undefined4 sub_01434e30(byte);
};

int sub_0142e600(void);
// @baa 0x01434e30
undefined4 C_01434e30::sub_01434e30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0142e600();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01434e50 {
    undefined4 sub_01434e50(byte);
};

int sub_0142e8d0(void);
// @baa 0x01434e50
undefined4 C_01434e50::sub_01434e50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0142e8d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01434e70 {
    undefined4 sub_01434e70(byte);
};

int sub_0142e990(void);
// @baa 0x01434e70
undefined4 C_01434e70::sub_01434e70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0142e990();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014350f0 {
    undefined4 sub_014350f0(byte);
};

int sub_0142fc90(void);
// @baa 0x014350f0
undefined4 C_014350f0::sub_014350f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0142fc90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

class wxColourData;
class wxColourDialog;
class wxWindow;
class wxColourData {
    public:
};

class wxColourDialog {
    public:
    public: __declspec(dllimport) bool Create(wxWindow *,wxColourData *);
    friend struct C_014351c0;
};

class wxWindow {
    public:
};

struct C_014351c0 {
    void sub_014351c0(wxWindow *, wxColourData *);
};

int __stdcall sub_0142fd50(int);
// @baa 0x014351c0
void C_014351c0::sub_014351c0(wxWindow * param_2, wxColourData * param_3)
{
    wxColourDialog * param_1 = (wxColourDialog *)this;
  sub_0142fd50((int)(param_3));
  ((wxColourDialog *)(param_1))->wxColourDialog::Create(param_2, param_3);
  return;
}

struct C_014351f0 {
    undefined4 sub_014351f0(byte);
};

int sub_014309a0(void);
// @baa 0x014351f0
undefined4 C_014351f0::sub_014351f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014309a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01435210 {
    undefined4 sub_01435210(byte);
};

int sub_01430bc0(void);
// @baa 0x01435210
undefined4 C_01435210::sub_01435210(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01430bc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014352b0 {
    void sub_014352b0(undefined4);
};

int sub_007e3de0(...);
// @baa 0x014352b0
void C_014352b0::sub_014352b0(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_007e3de0(param_2,param_1 + 0x1c);
  return;
}

struct C_014352d0 {
    undefined4 sub_014352d0(byte);
};

int sub_014319a0(void);
// @baa 0x014352d0
undefined4 C_014352d0::sub_014352d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014319a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014356f0 { int a, b, c; C_014356f0(); };

// @baa 0x014356f0
C_014356f0::C_014356f0() : a(0), b(0), c(0) {}

struct C_01435760 {
    int sub_01435760();
};

// @baa 0x01435760
int C_01435760::sub_01435760(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01435780 {
    int sub_01435780();
};

// @baa 0x01435780
int C_01435780::sub_01435780(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

extern TArray<int> g_026a1ca4;
struct C_01435790 {
    int sub_01435790();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x01435790
int C_01435790::sub_01435790()
{
    return g_026a1ca4(Index);
}

struct C_014357f0 {
    int sub_014357f0(int);
    int sub_007038b0(int, int);
};

// @baa 0x014357f0
int C_014357f0::sub_014357f0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_014357f0 *)(this))->sub_007038b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_01435820 { void sub_006bda00(int); C_01435820 *sub_01435820(int); };

// @baa 0x01435820
C_01435820 *C_01435820::sub_01435820(int a) { sub_006bda00(a); return this; }

struct C_01435840 {
    int sub_01435840(int);
    int sub_014324e0(int, int);
};

// @baa 0x01435840
int C_01435840::sub_01435840(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01435840 *)(this))->sub_014324e0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x1c;
  }
  return 0;
}

struct C_01435880 {
    int sub_01435880(int);
    int sub_01432600(int, int);
};

// @baa 0x01435880
int C_01435880::sub_01435880(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01435880 *)(this))->sub_01432600((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_014358b0 {
    int sub_014358b0(int);
    int sub_01432770(int, int);
};

// @baa 0x014358b0
int C_014358b0::sub_014358b0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_014358b0 *)(this))->sub_01432770((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_014358e0 {
    int sub_014358e0(int);
    int sub_01432870(int, int);
};

// @baa 0x014358e0
int C_014358e0::sub_014358e0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_014358e0 *)(this))->sub_01432870((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_01435970 {
    int sub_01435970();
};

// @baa 0x01435970
int C_01435970::sub_01435970(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_01435a80 {
    undefined4 sub_01435a80(byte);
    int sub_0040fcc0();
};

// @baa 0x01435a80
undefined4 C_01435a80::sub_01435a80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01435a80 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_01435b80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01435b80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01435b80& operator++();
};

TConstSetBitIterator_01435b80::TConstSetBitIterator_01435b80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01435b80
TConstSetBitIterator_01435b80& TConstSetBitIterator_01435b80::operator++()
{
    It.Advance();
    return *this;
}

struct C_01435ba0 {
    undefined4 sub_01435ba0(byte);
    int sub_0105ff80();
};

// @baa 0x01435ba0
undefined4 C_01435ba0::sub_01435ba0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01435ba0 *)(((char *)this + 4)))->sub_0105ff80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01435c40 {
    undefined4 sub_01435c40(byte);
    int sub_0142b610();
};

// @baa 0x01435c40
undefined4 C_01435c40::sub_01435c40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01435c40 *)(((char *)this + 4)))->sub_0142b610();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_014361e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014361e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014361e0& operator++();
};

TConstSetBitIterator_014361e0::TConstSetBitIterator_014361e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014361e0
TConstSetBitIterator_014361e0& TConstSetBitIterator_014361e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01436200 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01436200(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01436200& operator++();
};

TConstSetBitIterator_01436200::TConstSetBitIterator_01436200(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01436200
TConstSetBitIterator_01436200& TConstSetBitIterator_01436200::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01436220 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01436220(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01436220& operator++();
};

TConstSetBitIterator_01436220::TConstSetBitIterator_01436220(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01436220
TConstSetBitIterator_01436220& TConstSetBitIterator_01436220::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01436240 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01436240(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01436240& operator++();
};

TConstSetBitIterator_01436240::TConstSetBitIterator_01436240(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01436240
TConstSetBitIterator_01436240& TConstSetBitIterator_01436240::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01436260 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01436260(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01436260& operator++();
};

TConstSetBitIterator_01436260::TConstSetBitIterator_01436260(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01436260
TConstSetBitIterator_01436260& TConstSetBitIterator_01436260::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014362b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014362b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014362b0& operator++();
};

TConstSetBitIterator_014362b0::TConstSetBitIterator_014362b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014362b0
TConstSetBitIterator_014362b0& TConstSetBitIterator_014362b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01436300 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01436300(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01436300& operator++();
};

TConstSetBitIterator_01436300::TConstSetBitIterator_01436300(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01436300
TConstSetBitIterator_01436300& TConstSetBitIterator_01436300::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01436350 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01436350(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01436350& operator++();
};

TConstSetBitIterator_01436350::TConstSetBitIterator_01436350(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01436350
TConstSetBitIterator_01436350& TConstSetBitIterator_01436350::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014363a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014363a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014363a0& operator++();
};

TConstSetBitIterator_014363a0::TConstSetBitIterator_014363a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014363a0
TConstSetBitIterator_014363a0& TConstSetBitIterator_014363a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014363f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014363f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014363f0& operator++();
};

TConstSetBitIterator_014363f0::TConstSetBitIterator_014363f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014363f0
TConstSetBitIterator_014363f0& TConstSetBitIterator_014363f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01436410 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01436410(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01436410& operator++();
};

TConstSetBitIterator_01436410::TConstSetBitIterator_01436410(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01436410
TConstSetBitIterator_01436410& TConstSetBitIterator_01436410::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01436430 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01436430(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01436430& operator++();
};

TConstSetBitIterator_01436430::TConstSetBitIterator_01436430(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01436430
TConstSetBitIterator_01436430& TConstSetBitIterator_01436430::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01436450 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01436450(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01436450& operator++();
};

TConstSetBitIterator_01436450::TConstSetBitIterator_01436450(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01436450
TConstSetBitIterator_01436450& TConstSetBitIterator_01436450::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01436470 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01436470(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01436470& operator++();
};

TConstSetBitIterator_01436470::TConstSetBitIterator_01436470(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01436470
TConstSetBitIterator_01436470& TConstSetBitIterator_01436470::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01436490 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01436490(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01436490& operator++();
};

TConstSetBitIterator_01436490::TConstSetBitIterator_01436490(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01436490
TConstSetBitIterator_01436490& TConstSetBitIterator_01436490::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014364e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014364e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014364e0& operator++();
};

TConstSetBitIterator_014364e0::TConstSetBitIterator_014364e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014364e0
TConstSetBitIterator_014364e0& TConstSetBitIterator_014364e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01436530 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01436530(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01436530& operator++();
};

TConstSetBitIterator_01436530::TConstSetBitIterator_01436530(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01436530
TConstSetBitIterator_01436530& TConstSetBitIterator_01436530::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01436580 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01436580(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01436580& operator++();
};

TConstSetBitIterator_01436580::TConstSetBitIterator_01436580(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01436580
TConstSetBitIterator_01436580& TConstSetBitIterator_01436580::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014365d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014365d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014365d0& operator++();
};

TConstSetBitIterator_014365d0::TConstSetBitIterator_014365d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014365d0
TConstSetBitIterator_014365d0& TConstSetBitIterator_014365d0::operator++()
{
    It.Advance();
    return *this;
}

struct C_01436750 {
    undefined4 * sub_01436750(undefined4 *);
    int sub_01435c70(int);
};

// @baa 0x01436750
undefined4 * C_01436750::sub_01436750(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_01436750 *)(((char *)this + 4)))->sub_01435c70((int)(param_2 + 1));
  return param_1;
}

struct C_01436770 {
    undefined4 * sub_01436770(undefined4 *);
    int sub_01435bd0(int);
};

// @baa 0x01436770
undefined4 * C_01436770::sub_01436770(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_01436770 *)(((char *)this + 4)))->sub_01435bd0((int)(param_2 + 1));
  return param_1;
}

struct C_01439260 {
    int sub_01439260(int);
    int sub_01435b10(int, int);
};

// @baa 0x01439260
int C_01439260::sub_01439260(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01439260 *)(this))->sub_01435b10((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x28;
  }
  return 0;
}

struct TConstSetBitIterator_014392f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014392f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014392f0& operator++();
};

TConstSetBitIterator_014392f0::TConstSetBitIterator_014392f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014392f0
TConstSetBitIterator_014392f0& TConstSetBitIterator_014392f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01439310 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01439310(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01439310& operator++();
};

TConstSetBitIterator_01439310::TConstSetBitIterator_01439310(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01439310
TConstSetBitIterator_01439310& TConstSetBitIterator_01439310::operator++()
{
    It.Advance();
    return *this;
}

int sub_01435ab0(void);
// @baa 0x01439330
undefined4 UObject::sub_01439330(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01435ab0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014394d0 {
    undefined4 * sub_014394d0(undefined4 *);
    int sub_01435c70(int);
};

// @baa 0x014394d0
undefined4 * C_014394d0::sub_014394d0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_014394d0 *)(((char *)this + 4)))->sub_01435c70(param_2[1]);
  return param_1;
}

struct C_014395e0 {
    undefined4 * sub_014395e0(undefined4 *);
    int sub_01435c70(int);
};

// @baa 0x014395e0
undefined4 * C_014395e0::sub_014395e0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_014395e0 *)(((char *)this + 4)))->sub_01435c70(param_2[1]);
  param_1[4] = 0xffffffff;
  return param_1;
}

struct C_01439690 {
    undefined4 * sub_01439690(undefined4 *);
    int sub_01435bd0(int);
};

// @baa 0x01439690
undefined4 * C_01439690::sub_01439690(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_01439690 *)(((char *)this + 4)))->sub_01435bd0(param_2[1]);
  return param_1;
}

struct C_014397a0 {
    undefined4 * sub_014397a0(undefined4 *);
    int sub_01435bd0(int);
};

// @baa 0x014397a0
undefined4 * C_014397a0::sub_014397a0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_014397a0 *)(((char *)this + 4)))->sub_01435bd0(param_2[1]);
  param_1[8] = 0xffffffff;
  return param_1;
}

struct TConstSetBitIterator_01439a90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01439a90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01439a90& operator++();
};

TConstSetBitIterator_01439a90::TConstSetBitIterator_01439a90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01439a90
TConstSetBitIterator_01439a90& TConstSetBitIterator_01439a90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01439ae0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01439ae0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01439ae0& operator++();
};

TConstSetBitIterator_01439ae0::TConstSetBitIterator_01439ae0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01439ae0
TConstSetBitIterator_01439ae0& TConstSetBitIterator_01439ae0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01439b30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01439b30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01439b30& operator++();
};

TConstSetBitIterator_01439b30::TConstSetBitIterator_01439b30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01439b30
TConstSetBitIterator_01439b30& TConstSetBitIterator_01439b30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01439b80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01439b80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01439b80& operator++();
};

TConstSetBitIterator_01439b80::TConstSetBitIterator_01439b80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01439b80
TConstSetBitIterator_01439b80& TConstSetBitIterator_01439b80::operator++()
{
    It.Advance();
    return *this;
}

struct C_0143b480 { void sub_0143ac00(); void sub_0143b480(int); };

// @baa 0x0143b480
void C_0143b480::sub_0143b480(int) { sub_0143ac00(); }

struct C_0143b990 {
    int sub_0143b990(int);
    int sub_01435b10(int, int);
};

// @baa 0x0143b990
int C_0143b990::sub_0143b990(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_0143b990 *)(this))->sub_01435b10((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x28, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct TConstSetBitIterator_0143bb30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0143bb30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0143bb30& operator++();
};

TConstSetBitIterator_0143bb30::TConstSetBitIterator_0143bb30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0143bb30
TConstSetBitIterator_0143bb30& TConstSetBitIterator_0143bb30::operator++()
{
    It.Advance();
    return *this;
}

struct C_0143bc80 {
    void sub_0143bc80();
    int sub_01439450(int);
};

// @baa 0x0143bc80
void C_0143bc80::sub_0143bc80(void)
{
    int param_1 = (int)this;
  ((C_0143bc80 *)((*(char **)((char *)this + 0x10))))->sub_01439450(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0143bca0 {
    void sub_0143bca0();
    int sub_01439610(int);
};

// @baa 0x0143bca0
void C_0143bca0::sub_0143bca0(void)
{
    int param_1 = (int)this;
  ((C_0143bca0 *)((*(char **)((char *)this + 0x10))))->sub_01439610(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0143bcc0 {
    void sub_0143bcc0();
    int sub_014397d0(int);
};

// @baa 0x0143bcc0
void C_0143bcc0::sub_0143bcc0(void)
{
    int param_1 = (int)this;
  ((C_0143bcc0 *)((*(char **)((char *)this + 0x10))))->sub_014397d0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_0143bce0 {
    void sub_0143bce0();
    int sub_01439930(int);
};

// @baa 0x0143bce0
void C_0143bce0::sub_0143bce0(void)
{
    int param_1 = (int)this;
  ((C_0143bce0 *)((*(char **)((char *)this + 0x10))))->sub_01439930(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct M_0143bd00 { void sub_012901d0(); };

struct C_0143bd00 { char pad[8]; M_0143bd00 m; void sub_0143bd00(); };

// @baa 0x0143bd00
void C_0143bd00::sub_0143bd00() { m.sub_012901d0(); }

struct TConstSetBitIterator_0143bf80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0143bf80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0143bf80& operator++();
};

TConstSetBitIterator_0143bf80::TConstSetBitIterator_0143bf80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0143bf80
TConstSetBitIterator_0143bf80& TConstSetBitIterator_0143bf80::operator++()
{
    It.Advance();
    return *this;
}

struct M_0143bfd0 { void sub_012901d0(); };

struct C_0143bfd0 { char pad[8]; M_0143bfd0 m; void sub_0143bfd0(); };

// @baa 0x0143bfd0
void C_0143bfd0::sub_0143bfd0() { m.sub_012901d0(); }

struct TConstSetBitIterator_0143c7d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0143c7d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0143c7d0& operator++();
};

TConstSetBitIterator_0143c7d0::TConstSetBitIterator_0143c7d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0143c7d0
TConstSetBitIterator_0143c7d0& TConstSetBitIterator_0143c7d0::operator++()
{
    It.Advance();
    return *this;
}

struct C_0143c910 {
    undefined4 sub_0143c910(byte);
    int sub_012901d0();
};

// @baa 0x0143c910
undefined4 C_0143c910::sub_0143c910(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0143c910 *)(((char *)this + 8)))->sub_012901d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view {
    int sub_00547da0(int);
    int sub_010c7800(int);
};

// @baa 0x0143c9c0
undefined4 URFMODSound::sub_0143c9c0(int param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(this))->sub_00547da0(param_2);
  ((C_view *)(((char *)this + 0xc)))->sub_010c7800(param_2 + 0xc);
  return param_1;
}

struct M_0143c9f0 { void sub_00553180(); };

struct C_0143c9f0 { char pad[4]; M_0143c9f0 m; void sub_0143c9f0(); };

// @baa 0x0143c9f0
void C_0143c9f0::sub_0143c9f0() { m.sub_00553180(); }

// @baa 0x0143ca20
IMPLEMENT_CLASS_AT(UMaterialEditorOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\NewMaterialEditor.cpp", 19);

// @baa 0x0143ca40
struct C_0143dee0 { void sub_0143d4d0(); void sub_0143dee0(int); };

// @baa 0x0143dee0
void C_0143dee0::sub_0143dee0(int) { sub_0143d4d0(); }

struct C_0143def0 { void sub_0143d890(); void sub_0143def0(int); };

// @baa 0x0143def0
void C_0143def0::sub_0143def0(int) { sub_0143d890(); }

struct TConstSetBitIterator_0143e560 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0143e560(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0143e560& operator++();
};

TConstSetBitIterator_0143e560::TConstSetBitIterator_0143e560(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0143e560
TConstSetBitIterator_0143e560& TConstSetBitIterator_0143e560::operator++()
{
    It.Advance();
    return *this;
}

struct C_0143ec50 {
    undefined4 sub_0143ec50(byte);
    int sub_012901d0();
};

// @baa 0x0143ec50
undefined4 C_0143ec50::sub_0143ec50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0143ec50 *)(((char *)this + 8)))->sub_012901d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0143ee20 {
    int sub_0143ee20();
};

int sub_01439c80(void);
// @baa 0x0143ee20
int C_0143ee20::sub_0143ee20(void)
{
    int param_1 = (int)this;

  sub_01439c80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0143ee40 {
    int sub_0143ee40();
};

int sub_01439ce0(void);
// @baa 0x0143ee40
int C_0143ee40::sub_0143ee40(void)
{
    int param_1 = (int)this;

  sub_01439ce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0143ee60 {
    int sub_0143ee60();
};

int sub_01439d40(void);
// @baa 0x0143ee60
int C_0143ee60::sub_0143ee60(void)
{
    int param_1 = (int)this;

  sub_01439d40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0143ee80 {
    int sub_0143ee80();
};

int sub_01439da0(void);
// @baa 0x0143ee80
int C_0143ee80::sub_0143ee80(void)
{
    int param_1 = (int)this;

  sub_01439da0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0143eea0 {
    undefined4 * sub_0143eea0(undefined4 *);
    int sub_0143ec80(int);
};

// @baa 0x0143eea0
undefined4 * C_0143eea0::sub_0143eea0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C_0143eea0 *)(((char *)this + 8)))->sub_0143ec80((int)(param_2 + 2));
  return param_1;
}

struct C_0143ef60 {
    undefined4 sub_0143ef60(byte);
};

int sub_0143d160(void);
// @baa 0x0143ef60
undefined4 C_0143ef60::sub_0143ef60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0143d160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0143f3d0 { void sub_0143ef80(); void sub_0143f3d0(int); };

// @baa 0x0143f3d0
void C_0143f3d0::sub_0143f3d0(int) { sub_0143ef80(); }

struct C_0143f940 {
    void sub_0143f940();
    int sub_0143e7f0(int, int);
};

// @baa 0x0143f940
void C_0143f940::sub_0143f940(void)
{
    int param_1 = (int)this;
  ((C_0143f940 *)(this))->sub_0143e7f0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_0143fad0 {
    undefined4 sub_0143fad0(undefined4, undefined4);
    int sub_0143e970(int, int);
};

// @baa 0x0143fad0
undefined4 C_0143fad0::sub_0143fad0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0143fad0 *)(this))->sub_0143e970(param_2, param_3);
  return param_1;
}

struct C_0143faf0 {
    int sub_0143faf0(undefined4, undefined4);
    int sub_0143e9d0(int, int);
};

// @baa 0x0143faf0
int C_0143faf0::sub_0143faf0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0143faf0 *)(this))->sub_0143e9d0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0143fb10 {
    int sub_0143fb10(undefined4, undefined4);
    int sub_0143ea50(int, int);
};

// @baa 0x0143fb10
int C_0143fb10::sub_0143fb10(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0143fb10 *)(this))->sub_0143ea50(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0143fb30 {
    int sub_0143fb30(undefined4, undefined4);
    int sub_0143ead0(int, int);
};

// @baa 0x0143fb30
int C_0143fb30::sub_0143fb30(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0143fb30 *)(this))->sub_0143ead0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0143fb50 {
    int sub_0143fb50(undefined4, undefined4);
    int sub_0143eb50(int, int);
};

// @baa 0x0143fb50
int C_0143fb50::sub_0143fb50(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0143fb50 *)(this))->sub_0143eb50(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0143fb70 {
    int sub_0143fb70(undefined4, undefined4);
    int sub_0143ebd0(int, int);
};

// @baa 0x0143fb70
int C_0143fb70::sub_0143fb70(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0143fb70 *)(this))->sub_0143ebd0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0143fc20 {
    undefined4 * sub_0143fc20(int *);
    int sub_0143ec80(int);
};

// @baa 0x0143fc20
undefined4 * C_0143fc20::sub_0143fc20(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  ((C_0143fc20 *)(((char *)this + 8)))->sub_0143ec80(param_2[1]);
  return param_1;
}

struct C_0143fd10 {
    undefined4 * sub_0143fd10(int *);
    int sub_0143ec80(int);
};

// @baa 0x0143fd10
undefined4 * C_0143fd10::sub_0143fd10(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  ((C_0143fd10 *)(((char *)this + 8)))->sub_0143ec80(param_2[1]);
  param_1[5] = 0xffffffff;
  return param_1;
}

struct C_0143fd40 {
    int sub_0143fd40();
};

// @baa 0x0143fd40
int C_0143fd40::sub_0143fd40(void)
{
    int param_1 = (int)this;

  sub_01439c80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0143fd60 {
    int sub_0143fd60();
};

// @baa 0x0143fd60
int C_0143fd60::sub_0143fd60(void)
{
    int param_1 = (int)this;

  sub_01439ce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0143fd80 {
    int sub_0143fd80();
};

// @baa 0x0143fd80
int C_0143fd80::sub_0143fd80(void)
{
    int param_1 = (int)this;

  sub_01439d40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0143fda0 {
    int sub_0143fda0();
};

// @baa 0x0143fda0
int C_0143fda0::sub_0143fda0(void)
{
    int param_1 = (int)this;

  sub_01439da0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_0143eed0();
// @baa 0x0143fed0
void sub_0143fed0(void) { sub_0143eed0(); }

void sub_0143f5d0();
// @baa 0x0143fee0
void sub_0143fee0(void) { sub_0143f5d0(); }

void sub_0143f480();
// @baa 0x0143fef0
void sub_0143fef0(void) { sub_0143f480(); }

void sub_0143f4f0();
// @baa 0x0143ff00
void sub_0143ff00(void) { sub_0143f4f0(); }

void sub_0143f560();
// @baa 0x0143ff10
void sub_0143ff10(void) { sub_0143f560(); }

struct C_01440900 { void sub_01440110(); void sub_01440900(int); };

// @baa 0x01440900
void C_01440900::sub_01440900(int) { sub_01440110(); }

void sub_0143f640();
// @baa 0x01440910
void sub_01440910(void) { sub_0143f640(); }

void sub_0143f8e0();
// @baa 0x014409a0
void sub_014409a0(void) { sub_0143f8e0(); }

struct C_01440a30 {
    int sub_01440a30(undefined4, undefined4, undefined4);
    int sub_0143e970(int, int);
};

// @baa 0x01440a30
int C_01440a30::sub_01440a30(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_01440a30 *)(this))->sub_0143e970(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct C_01440c30 {
    int sub_01440c30();
};

// @baa 0x01440c30
int C_01440c30::sub_01440c30(void)
{
    int param_1 = (int)this;

  sub_01439c80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01440c50 {
    int sub_01440c50();
};

// @baa 0x01440c50
int C_01440c50::sub_01440c50(void)
{
    int param_1 = (int)this;

  sub_01439ce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01440c70 {
    int sub_01440c70();
};

// @baa 0x01440c70
int C_01440c70::sub_01440c70(void)
{
    int param_1 = (int)this;

  sub_01439d40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01440c90 {
    int sub_01440c90();
};

// @baa 0x01440c90
int C_01440c90::sub_01440c90(void)
{
    int param_1 = (int)this;

  sub_01439da0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01440cb0 {
    void sub_01440cb0();
    int sub_0143fb90(int);
};

// @baa 0x01440cb0
void C_01440cb0::sub_01440cb0(void)
{
    int param_1 = (int)this;
  ((C_01440cb0 *)((*(char **)((char *)this + 0x10))))->sub_0143fb90(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_01440cd0 {
    int sub_01440cd0();
};

int sub_01439c20(void);
// @baa 0x01440cd0
int C_01440cd0::sub_01440cd0(void)
{
    int param_1 = (int)this;

  sub_01439c20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01440ee0
void sub_01440ee0(void) { sub_0143f5d0(); }

// @baa 0x01440ef0
void sub_01440ef0(void) { sub_0143f480(); }

// @baa 0x01441340
void sub_01441340(void) { sub_0143f4f0(); }

// @baa 0x01441350
void sub_01441350(void) { sub_0143f560(); }

struct C_01442250 { void sub_014419a0(); void sub_01442250(int); };

// @baa 0x01442250
void C_01442250::sub_01442250(int) { sub_014419a0(); }

struct C_01442770 {
    int sub_01442770();
};

// @baa 0x01442770
int C_01442770::sub_01442770(void)
{
    int param_1 = (int)this;

  sub_01439c80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01442790 {
    int sub_01442790();
};

// @baa 0x01442790
int C_01442790::sub_01442790(void)
{
    int param_1 = (int)this;

  sub_01439ce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_014427b0 {
    int sub_014427b0();
};

// @baa 0x014427b0
int C_014427b0::sub_014427b0(void)
{
    int param_1 = (int)this;

  sub_01439d40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_014427d0 {
    int sub_014427d0();
};

// @baa 0x014427d0
int C_014427d0::sub_014427d0(void)
{
    int param_1 = (int)this;

  sub_01439da0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_014427f0 {
    int sub_014427f0();
};

// @baa 0x014427f0
int C_014427f0::sub_014427f0(void)
{
    int param_1 = (int)this;

  sub_01439c20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01442810
void sub_01442810(void) { sub_0143f5d0(); }

// @baa 0x01442820
void sub_01442820(void) { sub_0143f480(); }

// @baa 0x01442830
void sub_01442830(void) { sub_0143f4f0(); }

// @baa 0x01442840
void sub_01442840(void) { sub_0143f560(); }

struct C_014439d0 { void sub_01442ab0(); void sub_014439d0(int); };

// @baa 0x014439d0
void C_014439d0::sub_014439d0(int) { sub_01442ab0(); }

void sub_01442700();
// @baa 0x014439e0
void sub_014439e0(void) { sub_01442700(); }

struct C_01444100 {
    int sub_01444100();
};

// @baa 0x01444100
int C_01444100::sub_01444100(void)
{
    int param_1 = (int)this;

  sub_01439c20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01444190
int sub_01444190(void) { return 0; }

// @baa 0x014441a0
int sub_014441a0(void) { return 0; }

// @baa 0x014441b0
int sub_014441b0(void) { return 0; }

// @baa 0x014441c0
int sub_014441c0(void) { return 0; }

// @baa 0x014441d0
int sub_014441d0(void) { return 0; }

// @baa 0x014441e0
int sub_014441e0(void) { return 0; }

// @baa 0x014441f0
int sub_014441f0(void) { return 0; }

// @baa 0x01444200
int sub_01444200(void) { return 0; }

// @baa 0x01444210
int sub_01444210(void) { return 0; }

// @baa 0x01444220
int sub_01444220(void) { return 0; }

// @baa 0x01444230
int sub_01444230(void) { return 0; }

// @baa 0x01444240
int sub_01444240(void) { return 2; }

extern float g_01e3f070;
// @baa 0x01444250
float sub_01444250(void)
{
  return g_01e3f070;
}

// @baa 0x01444260
int sub_01444260(void) { return 0; }

struct A_01444270 { virtual void sub_014443b0(); char pad[172]; };

struct B_01444270 { virtual void sub_014443b0(); };

struct C_01444270 : A_01444270, B_01444270 { virtual void sub_014443b0(); C_01444270(); };

C_01444270::C_01444270() {}

// @baa 0x01444270
void C_01444270::sub_014443b0() {}

// @baa 0x014443f0
FString UMaterialEditorOptions::sub_014443f0()
{
    return TEXT("Expression preview");
}

struct A_01444c10 { virtual void sub_0144a340(); char pad[456]; };

struct B_01444c10 { virtual void sub_0144a340(); };

struct C_01444c10 : A_01444c10, B_01444c10 { virtual void sub_0144a340(); C_01444c10(); };

C_01444c10::C_01444c10() {}

// @baa 0x01444c10
void C_01444c10::sub_0144a340() {}

struct A_01444c20 { virtual void sub_0144a340(); char pad[460]; };

struct B_01444c20 { virtual void sub_0144a340(); };

struct C_01444c20 : A_01444c20, B_01444c20 { virtual void sub_0144a340(); C_01444c20(); };

C_01444c20::C_01444c20() {}

// @baa 0x01444c20
void C_01444c20::sub_0144a340() {}

struct A_01444c30 { virtual void sub_0144a340(); char pad[408]; };

struct B_01444c30 { virtual void sub_0144a340(); };

struct C_01444c30 : A_01444c30, B_01444c30 { virtual void sub_0144a340(); C_01444c30(); };

C_01444c30::C_01444c30() {}

// @baa 0x01444c30
void C_01444c30::sub_0144a340() {}

// @baa 0x0144a5b0
IMPLEMENT_CLASS_AT(UPreviewMaterial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\NewMaterialEditor.cpp", 341);

// @baa 0x0144a5d0
