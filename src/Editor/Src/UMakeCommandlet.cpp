// UMakeCommandlet.cpp: 28 functions
// Placed here by: neighbours 18, class 7, callers 2, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0105ce90
IMPLEMENT_CLASS_AT(UMakeCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UMakeCommandlet.cpp", 3095);

// @baa 0x0105cfa0
int UMakeCommandlet::vf_000(void) { return 1; }

// @baa 0x0105cfb0
bool UMakeCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_00588dd0(...);
int sub_00589470(void);
int sub_00614d20(...);
extern undefined4 g_02688448;
// @baa 0x0105d7f0
void sub_0105d7f0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10)
{
  if (g_02688448 == 0) {
    g_02688448 = sub_00588dd0(L"Core");
    sub_00589470();
  }
  sub_00614d20(g_02688448,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               param_10);
  return;
}

struct C{
int sub_0105dd90(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x0105dd90
int C::sub_0105dd90(undefined4*param_2)
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

struct C_view {
    int sub_00417ef0(int);
};

// @baa 0x0105fa50
int UObject::sub_0105fa50(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00417ef0(param_2);
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return param_1;
}

extern TArray<int> g_026a1ca4;
struct C_010628e0 {
    int sub_010628e0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x010628e0
int C_010628e0::sub_010628e0()
{
    return g_026a1ca4(Index);
}

struct C_01062940 {
    int sub_01062940();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x01062940
int C_01062940::sub_01062940()
{
    return g_026a1ca4(Index);
}

struct C_010629a0 {
    int sub_010629a0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x010629a0
int C_010629a0::sub_010629a0()
{
    return g_026a1ca4(Index);
}

struct C_01062a00 {
    int sub_01062a00();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x01062a00
int C_01062a00::sub_01062a00()
{
    return g_026a1ca4(Index);
}

struct C_01062a60 {
    int sub_01062a60();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x01062a60
int C_01062a60::sub_01062a60()
{
    return g_026a1ca4(Index);
}

struct C_01062ac0 {
    int sub_01062ac0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x01062ac0
int C_01062ac0::sub_01062ac0()
{
    return g_026a1ca4(Index);
}

struct C_01062b20 {
    int sub_01062b20();
};

// @baa 0x01062b20
int C_01062b20::sub_01062b20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01062b40 {
    int sub_01062b40();
};

// @baa 0x01062b40
int C_01062b40::sub_01062b40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_01062b50 {
    int sub_01062b50();
};

// @baa 0x01062b50
int C_01062b50::sub_01062b50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[5] * 0x18;
}

struct C_01062b60 {
    int sub_01062b60();
};

// @baa 0x01062b60
int C_01062b60::sub_01062b60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01062b80 {
    int sub_01062b80();
};

// @baa 0x01062b80
int C_01062b80::sub_01062b80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01062ba0 {
    int sub_01062ba0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x01062ba0
int C_01062ba0::sub_01062ba0()
{
    return g_026a1ca4(Index);
}

struct C_01062c00 {
    int sub_01062c00();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x01062c00
int C_01062c00::sub_01062c00()
{
    return g_026a1ca4(Index);
}

struct C_01062c60 {
    int sub_01062c60();
};

// @baa 0x01062c60
int C_01062c60::sub_01062c60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01062c80 {
    int sub_01062c80();
};

// @baa 0x01062c80
int C_01062c80::sub_01062c80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01062ca0 {
    int sub_01062ca0();
};

// @baa 0x01062ca0
int C_01062ca0::sub_01062ca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

// @baa 0x01072970
UMakeCommandlet::UMakeCommandlet()
{
    if (!(*(QWORD*)&ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x010729d0
int sub_010729d0(void);
int sub_005c7a70(...);
// @baa 0x01072a30
undefined4 UMakeCommandlet::sub_01072a30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_010729d0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x70);
  }
  return param_1;
}

// @baa 0x01074760
// @baa 0x010766e0
void sub_01076880();
// @baa 0x0107da10
void sub_0107da10(void) { sub_01076880(); }
