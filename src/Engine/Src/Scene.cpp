// Scene.cpp (part 1 of 2): 40 functions
// Placed here by: neighbours 31, callers 5, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_00ab4400();
};

int sub_006311e0(...);
int sub_00715850(void);
extern undefined4 g_01fd4530;
// @baa 0x00ab4400
int C::sub_00ab4400(void)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = sub_00715850();
  if (iVar1 == 0) {
    sub_006311e0("IsInRenderingThread()",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\Scene.cpp"
                 ,0x3dd,&g_01fd4530);
  }
  return param_1 + 0x33e0;
}

// @baa 0x00abb500
IMPLEMENT_CLASS_AT(UScene, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\Scene.cpp", 26);

struct C_00abb520 {
    int sub_00abb520();
};

// @baa 0x00abb520
int C_00abb520::sub_00abb520(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xfc) * 4 + 0x100;
}

struct C_00abb530 {
    undefined4 sub_00abb530(undefined4);
    int sub_00ab2de0(int);
};

// @baa 0x00abb530
undefined4 C_00abb530::sub_00abb530(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00abb530 *)(this))->sub_00ab2de0(param_2);
  return param_1;
}

// @baa 0x00abc130
struct C_00abc440 {
    undefined4 * sub_00abc440(byte);
};

int sub_0053dfa0(...);
extern undefined4 g_01ebb554;
// @baa 0x00abc440
undefined4 * C_00abc440::sub_00abc440(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00abc490 {
    undefined4 * sub_00abc490(byte);
};

// @baa 0x00abc490
undefined4 * C_00abc490::sub_00abc490(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00abd1c0
int ULensFlare::sub_00abd1c0(undefined4*param_2)
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

// @baa 0x00abd240
int ULensFlare::sub_00abd240(void) { return *(int*)((char*)this + 4); }

// @baa 0x00abd270
int ULensFlare::sub_00abd270(void) { return *(int*)((char*)this + 4); }

// @baa 0x00abd280
int ULensFlare::sub_00abd280(undefined4*param_2)
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

// @baa 0x00abd2e0
void ULensFlare::sub_00abd2e0(undefined4 * param_2)
{
    undefined4 param_1 = (undefined4)this;
  *param_2 = param_1;
  param_2[1] = 0;
  return;
}

struct E { BYTE Bytes[80]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00abd2f0(INT Index);
};

// @baa 0x00abd2f0
E* S::sub_00abd2f0(INT Index)
{
    return &Items(Index);
}

struct C_00ac53a0 {
    undefined4 sub_00ac53a0();
    int sub_00ac52e0(int, int);
};

// @baa 0x00ac53a0
undefined4 C_00ac53a0::sub_00ac53a0(void)
{
    int param_1 = (int)this;
  ((C_00ac53a0 *)((*(char **)((char *)this + 4))))->sub_00ac52e0(*(undefined4 *)(param_1 + 8), *(undefined4 *)(param_1 + 0xc));
  return 0x10;
}

struct T_00ac6710;
// @baa 0x00ac6710
template INT TArray<T_00ac6710*>::RemoveItem(T_00ac6710* const&);

struct S_00ac6790 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00ac6790(INT Index) const;
};

// @baa 0x00ac6790
const DWORD* S_00ac6790::sub_00ac6790(INT Index) const
{
    return &Items(Index);
}

struct S_00ac67e0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ac67e0(INT Index);
};

// @baa 0x00ac67e0
DWORD* S_00ac67e0::sub_00ac67e0(INT Index)
{
    return &Items(Index);
}

struct S_00ac6830 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ac6830(INT Index);
};

// @baa 0x00ac6830
DWORD* S_00ac6830::sub_00ac6830(INT Index)
{
    return &Items(Index);
}

struct S_00ac6880 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00ac6880(INT Index) const;
};

// @baa 0x00ac6880
const DWORD* S_00ac6880::sub_00ac6880(INT Index) const
{
    return &Items(Index);
}

struct E_00ac68d0 { BYTE Bytes[12]; };

struct S_00ac68d0 {
    TArray<E_00ac68d0> Items; // 0x00
    const E_00ac68d0* sub_00ac68d0(INT Index) const;
};

// @baa 0x00ac68d0
const E_00ac68d0* S_00ac68d0::sub_00ac68d0(INT Index) const
{
    return &Items(Index);
}

struct S_00ac6920 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ac6920(INT Index);
};

// @baa 0x00ac6920
DWORD* S_00ac6920::sub_00ac6920(INT Index)
{
    return &Items(Index);
}

struct E_00ac6970 { BYTE Bytes[24]; };

struct S_00ac6970 {
    TArray<E_00ac6970> Items; // 0x00
    E_00ac6970* sub_00ac6970(INT Index);
};

// @baa 0x00ac6970
E_00ac6970* S_00ac6970::sub_00ac6970(INT Index)
{
    return &Items(Index);
}

struct E_00ac69c0 { BYTE Bytes[184]; };

struct S_00ac69c0 {
    TArray<E_00ac69c0> Items; // 0x00
    E_00ac69c0* sub_00ac69c0(INT Index);
};

// @baa 0x00ac69c0
E_00ac69c0* S_00ac69c0::sub_00ac69c0(INT Index)
{
    return &Items(Index);
}

struct E_00ac6a10 { BYTE Bytes[184]; };

struct S_00ac6a10 {
    TArray<E_00ac6a10> Items; // 0x00
    const E_00ac6a10* sub_00ac6a10(INT Index) const;
};

// @baa 0x00ac6a10
const E_00ac6a10* S_00ac6a10::sub_00ac6a10(INT Index) const
{
    return &Items(Index);
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00ac6a60 { void* Data; int Num; int Max; void sub_00ac6a60(); };

// @baa 0x00ac6a60
void C_00ac6a60::sub_00ac6a60() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct E_00ac6ac0 { BYTE Bytes[24]; };

struct S_00ac6ac0 {
    TArray<E_00ac6ac0> Items; // 0x00
    E_00ac6ac0* sub_00ac6ac0(INT Index);
};

// @baa 0x00ac6ac0
E_00ac6ac0* S_00ac6ac0::sub_00ac6ac0(INT Index)
{
    return &Items(Index);
}

struct S_00ac6b10 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ac6b10(INT Index);
};

// @baa 0x00ac6b10
DWORD* S_00ac6b10::sub_00ac6b10(INT Index)
{
    return &Items(Index);
}

struct C_00ac6ce0 {
    int sub_00ac6ce0(int);
};

// @baa 0x00ac6ce0
int C_00ac6ce0::sub_00ac6ce0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00ac6cf0 { void* Data; int Num; int Max; void sub_00ac6cf0(); };

// @baa 0x00ac6cf0
void C_00ac6cf0::sub_00ac6cf0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_00ac6d50;
// @baa 0x00ac6d50
template INT TArray<T_00ac6d50*>::RemoveItem(T_00ac6d50* const&);

struct C_00ac6dd0 {
    int sub_00ac6dd0(int);
};

// @baa 0x00ac6dd0
int C_00ac6dd0::sub_00ac6dd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_00ac6de0 { void* Data; int Num; int Max; void sub_00ac6de0(); };

// @baa 0x00ac6de0
void C_00ac6de0::sub_00ac6de0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_00ac6f30;
// @baa 0x00ac6f30
template INT TArray<T_00ac6f30*>::RemoveItem(T_00ac6f30* const&);

struct C_00aeda30 {
    undefined4 sub_00aeda30();
    int sub_00aed9a0(int);
};

// @baa 0x00aeda30
undefined4 C_00aeda30::sub_00aeda30(void)
{
    int param_1 = (int)this;
  ((C_00aeda30 *)((*(char **)((char *)this + 4))))->sub_00aed9a0(*(undefined4 *)(param_1 + 8));
  return 0xc;
}

struct C_00af2460 {
    undefined4 sub_00af2460();
    int sub_00af23f0(int);
};

// @baa 0x00af2460
undefined4 C_00af2460::sub_00af2460(void)
{
    int param_1 = (int)this;
  ((C_00af2460 *)((*(char **)((char *)this + 4))))->sub_00af23f0(*(undefined4 *)(param_1 + 8));
  return 0xc;
}

struct C_00af3410 {
    void sub_00af3410();
};

int sub_00ae8f80(void);
// @baa 0x00af3410
void C_00af3410::sub_00af3410(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x38) = 0;
  sub_00ae8f80();
  return;
}

struct C_00af3860 {
    int sub_00af3860();
};

int sub_00adc5e0(void);
// @baa 0x00af3860
int C_00af3860::sub_00af3860(void)
{
    int param_1 = (int)this;

  sub_00adc5e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00aec1b0();
// @baa 0x00af3f60
void sub_00af3f60(void) { sub_00aec1b0(); }

struct C_00ac6cd0
{
    char pad_0[0xc];
    INT Value_c;
    INT Value_10;
    INT Value_14;

    C_00ac6cd0* sub_00ac6cd0();
};

// @baa 0x00ac6cd0
C_00ac6cd0* C_00ac6cd0::sub_00ac6cd0()
{
    Value_c = 0;
    Value_10 = 0;
    Value_14 = 0;
    return this;
}

struct Sub
{
    void sub_00af21e0();
};

struct C_00af2260
{
    char pad_00[0x10];
    Sub Marker;

    INT sub_00af2260();
};

// @baa 0x00af2260
INT C_00af2260::sub_00af2260()
{
    ((Sub*)((char*)this + 0x10))->sub_00af21e0();
    return 0xc0;
}
