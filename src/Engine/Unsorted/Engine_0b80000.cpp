// Engine_0b80000.cpp: 20 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00b79620(void);
// @baa 0x00b84e20
undefined4 ULensFlare::sub_00b84e20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b79620();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_026bf540[];
// @baa 0x00b84ed0
int sub_00b84ed0(void) { return (int)g_026bf540; }

void sub_00656790();
// @baa 0x00b84ee0
void sub_00b84ee0(void) { sub_00656790(); }

// @baa 0x00b84ef0
void sub_00b84ef0(void) { sub_00656790(); }

// @baa 0x00b84f00
void sub_00b84f00(void) { sub_00656790(); }

// @baa 0x00b84f50
undefined4 ULensFlare::sub_00b84f50(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(*(int *)(param_1 + 4) + 0xa4) = *(undefined4 *)(param_1 + 8);
  return 0xc;
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00b84f70(INT Index);
};

// @baa 0x00b84f70
DWORD* S::sub_00b84f70(INT Index)
{
    return &Items(Index);
}

struct S_00b84fc0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00b84fc0(INT Index) const;
};

// @baa 0x00b84fc0
const DWORD* S_00b84fc0::sub_00b84fc0(INT Index) const
{
    return &Items(Index);
}

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00b85010
int ULensFlare::sub_00b85010(undefined4*param_2)
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

struct E { BYTE Bytes[12]; };

struct S_00b85070 {
    TArray<E> Items; // 0x00
    E* sub_00b85070(INT Index);
};

// @baa 0x00b85070
E* S_00b85070::sub_00b85070(INT Index)
{
    return &Items(Index);
}

struct S_00b85110 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00b85110(INT Index) const;
};

// @baa 0x00b85110
const DWORD* S_00b85110::sub_00b85110(INT Index) const
{
    return &Items(Index);
}

// @baa 0x00b85160
void __stdcall sub_00b85160(int a0, int a1) {  }

// @baa 0x00b85170
int ULensFlare::sub_00b85170(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00b85180
int ULensFlare::sub_00b85180(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x38;
}

// @baa 0x00b85210
int ULensFlare::sub_00b85210(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00b85490
void sub_00b85490(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

extern undefined4*g_026b0d94;
// @baa 0x00b854c0
void ULensFlare::sub_00b854c0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x234))((int)(iVar1));
}
*(undefined4*)(param_1+0x18)=0;
return;
}

struct C {
    FString sub_00b854f0();
};

// @baa 0x00b854f0
FString C::sub_00b854f0()
{
    return TEXT("Instanced Particle Mesh Instances");
}

int sub_00656490(void);
// @baa 0x00b85520
undefined4 ULensFlare::sub_00b85520(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00b85540 {
    int sub_00b85540();
};

// @baa 0x00b85540
int C_00b85540::sub_00b85540(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x84) * 4;
  if (*(int *)(param_1 + 0xa8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xa8) + 0xc) * 4 + 0x18;
  }
  return iVar1 + 0x150;
}
