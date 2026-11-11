// UnTerrainRender.cpp (part 2 of 3): 29 functions
// Placed here by: neighbours 29.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct E { BYTE Bytes[40]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_009b2f70(INT Index) const;
};

// @baa 0x009b2f70
const E* S::sub_009b2f70(INT Index) const
{
    return &Items(Index);
}

struct S_009b3050 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_009b3050(INT Index) const;
};

// @baa 0x009b3050
const DWORD* S_009b3050::sub_009b3050(INT Index) const
{
    return &Items(Index);
}

struct C{
int sub_009b30a0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x009b30a0
int C::sub_009b30a0(undefined4*param_2)
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

struct S_009b3100 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_009b3100(INT Index);
};

// @baa 0x009b3100
DWORD* S_009b3100::sub_009b3100(INT Index)
{
    return &Items(Index);
}

struct E_009b3150 { BYTE Bytes[224]; };

struct S_009b3150 {
    TArray<E_009b3150> Items; // 0x00
    E_009b3150* sub_009b3150(INT Index);
};

// @baa 0x009b3150
E_009b3150* S_009b3150::sub_009b3150(INT Index)
{
    return &Items(Index);
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_009b6840 { void* Data; int Num; int Max; void sub_009b6840(); };

// @baa 0x009b6840
void C_009b6840::sub_009b6840() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009b91b0 {
    void sub_009b91b0(int);
};

// @baa 0x009b91b0
void C_009b91b0::sub_009b91b0(int param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (param_2 < 0) {
    iVar1 = 0;
  }
  else if (param_2 < iVar1) {
    *(int *)(param_1 + 0x2c) = param_2;
    return;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  return;
}

void sub_00656490();
// @baa 0x009b91d0
void sub_009b91d0(void) { sub_00656490(); }

struct C_009b91e0 {
    FString sub_009b91e0();
};

// @baa 0x009b91e0
FString C_009b91e0::sub_009b91e0()
{
    return TEXT("Terrain component vertices");
}

struct C_009bc030 {
    void sub_009bc030();
};

int sub_009b6fa0(void);
// @baa 0x009bc030
void C_009bc030::sub_009bc030(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = sub_009b6fa0();
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}

struct C_009bc860 {
    void sub_009bc860();
};

int sub_009b6a20(void);
// @baa 0x009bc860
void C_009bc860::sub_009bc860(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = sub_009b6a20();
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}

extern TArray<int> g_026a1ca4;
struct C_009bd010 {
    int sub_009bd010();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x009bd010
int C_009bd010::sub_009bd010()
{
    return g_026a1ca4(Index);
}

struct C_009bd120 {
    int sub_009bd120(int);
};

// @baa 0x009bd120
int C_009bd120::sub_009bd120(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_009bd130 {
    int sub_009bd130(int);
};

// @baa 0x009bd130
int C_009bd130::sub_009bd130(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_009bd140 {
    int sub_009bd140(int);
};

// @baa 0x009bd140
int C_009bd140::sub_009bd140(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_009bd150 {
    int sub_009bd150(int);
};

// @baa 0x009bd150
int C_009bd150::sub_009bd150(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_view {
    int sub_009b74e0(int, int);
};

// @baa 0x009bd160
int UState::sub_009bd160(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_009b74e0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_009bd190 {
    int sub_009bd190();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x009bd190
int C_009bd190::sub_009bd190()
{
    return g_026a1ca4(Index);
}

// @baa 0x009bd250
int UState::sub_009bd250(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x28;
}

struct C_view_009bd260 {
    int sub_009b75e0(int);
};

// @baa 0x009bd260
undefined4 * UState::sub_009bd260(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_009bd260 *)(((char *)this + 4)))->sub_009b75e0(param_2[1]);
  return param_1;
}

struct C_view_009bd280 {
    int sub_009b75e0(int);
};

// @baa 0x009bd280
undefined4 * UState::sub_009bd280(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_009bd280 *)(((char *)this + 4)))->sub_009b75e0(param_2[1]);
  param_1[8] = 0xffffffff;
  return param_1;
}

// @baa 0x009bd330
int UState::sub_009bd330(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x009bd340
int UState::sub_009bd340(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x009bd350
int UState::sub_009bd350(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x009bd360
int UState::sub_009bd360(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 4;
}

void sub_009bbcb0();
// @baa 0x009bd9a0
void sub_009bd9a0(void) { sub_009bbcb0(); }

int sub_0053dfa0(...);
int sub_009bebc0(void);
// @baa 0x009bec30
undefined4 UTexture2DComposite::sub_009bec30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009bebc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_009bed10(void);
// @baa 0x009bed80
undefined4 UTexture2DComposite::sub_009bed80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009bed10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009cef60 {
    undefined4 sub_009cef60(byte);
    int sub_007c92c0();
};

// @baa 0x009cef60
undefined4 C_009cef60::sub_009cef60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_009cef60 *)(((char *)this + 4)))->sub_007c92c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
