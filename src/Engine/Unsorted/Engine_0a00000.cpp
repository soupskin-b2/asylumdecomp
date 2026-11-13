// Engine_0a00000.cpp (part 1 of 2): 73 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00a01a60
void sub_00a01a60(void) {  }

// @baa 0x00a02510
void sub_00a02510(void) {  }

struct C { int sub_00a02560(void); };

// @baa 0x00a02560
int C::sub_00a02560(void) { return *(int*)((char*)this + 0); }

struct C_00a02570 { int sub_00a02570(void); };

// @baa 0x00a02570
int C_00a02570::sub_00a02570(void) { return *(int*)((char*)this + 4); }

struct C_00a02580 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00a02580(INT Index);
};

// @baa 0x00a02580
UBOOL C_00a02580::sub_00a02580(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00a025a0 { int sub_00a025a0(void); };

// @baa 0x00a025a0
int C_00a025a0::sub_00a025a0(void) { return *(int*)((char*)this + 4); }

struct C_00a025b0 { int sub_00a025b0(void); };

// @baa 0x00a025b0
int C_00a025b0::sub_00a025b0(void) { return *(int*)((char*)this + 4); }

struct C_00a025c0 {
    int sub_00a025c0(int);
};

// @baa 0x00a025c0
int C_00a025c0::sub_00a025c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00a025d0 { int a, b, c; C_00a025d0(); };

// @baa 0x00a025d0
C_00a025d0::C_00a025d0() : a(0), b(0), c(0) {}

struct C_00a025e0 { int a, b, c; C_00a025e0(); };

// @baa 0x00a025e0
C_00a025e0::C_00a025e0() : a(0), b(0), c(0) {}

struct C_00a025f0 { int a, b, c; C_00a025f0(); };

// @baa 0x00a025f0
C_00a025f0::C_00a025f0() : a(0), b(0), c(0) {}

struct C_00a02600 { int sub_00a02600(void); };

// @baa 0x00a02600
int C_00a02600::sub_00a02600(void) { return *(int*)((char*)this + 4); }

struct C_00a02610 { int a, b, c; C_00a02610(); };

// @baa 0x00a02610
C_00a02610::C_00a02610() : a(0), b(0), c(0) {}

struct C_00a02620 { int sub_00a02620(void); };

// @baa 0x00a02620
int C_00a02620::sub_00a02620(void) { return *(int*)((char*)this + 4); }

struct C_00a026b0 { int sub_00a026b0(void); };

// @baa 0x00a026b0
int C_00a026b0::sub_00a026b0(void) { return *(int*)((char*)this + 4); }

struct C_00a02730 { int a, b, c; C_00a02730(); };

// @baa 0x00a02730
C_00a02730::C_00a02730() : a(0), b(0), c(0) {}

struct C_00a02740 { int sub_00a02740(void); };

// @baa 0x00a02740
int C_00a02740::sub_00a02740(void) { return *(int*)((char*)this + 0); }

struct C_00a02750 { int sub_00a02750(void); };

// @baa 0x00a02750
int C_00a02750::sub_00a02750(void) { return *(int*)((char*)this + 4); }

typedef uint size_t;

struct C_00a027d0 {
    int sub_00a027d0(int);
    int sub_00a02760(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00a027d0
int C_00a027d0::sub_00a027d0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00a027d0 *)(this))->sub_00a02760(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct C_00a02810 { int a, b, c; C_00a02810(); };

// @baa 0x00a02810
C_00a02810::C_00a02810() : a(0), b(0), c(0) {}

struct C_00a02820 { int sub_00a02820(void); };

// @baa 0x00a02820
int C_00a02820::sub_00a02820(void) { return *(int*)((char*)this + 0); }

struct C_00a02830 { C_00a02830* sub_00a02830(int a0); };

// @baa 0x00a02830
C_00a02830* C_00a02830::sub_00a02830(int a0) { return this; }

struct C_00a02a00 { C_00a02a00* sub_00a02a00(int a0); };

// @baa 0x00a02a00
C_00a02a00* C_00a02a00::sub_00a02a00(int a0) { return this; }

struct C_00a02a10 { C_00a02a10* sub_00a02a10(int a0); };

// @baa 0x00a02a10
C_00a02a10* C_00a02a10::sub_00a02a10(int a0) { return this; }

struct C_00a02a20 { C_00a02a20* sub_00a02a20(int a0); };

// @baa 0x00a02a20
C_00a02a20* C_00a02a20::sub_00a02a20(int a0) { return this; }

struct C_00a02a30 { C_00a02a30* sub_00a02a30(int a0); };

// @baa 0x00a02a30
C_00a02a30* C_00a02a30::sub_00a02a30(int a0) { return this; }

struct C_00a02ab0 { C_00a02ab0* sub_00a02ab0(int a0); };

// @baa 0x00a02ab0
C_00a02ab0* C_00a02ab0::sub_00a02ab0(int a0) { return this; }

struct C_00a02b30 { int sub_00a02b30(void); };

// @baa 0x00a02b30
int C_00a02b30::sub_00a02b30(void) { return *(int*)((char*)this + 0); }

struct C_00a02b40 { int sub_00a02b40(void); };

// @baa 0x00a02b40
int C_00a02b40::sub_00a02b40(void) { return *(int*)((char*)this + 4); }

// @baa 0x00a02b70
void __stdcall sub_00a02b70(int a0, int a1) {  }

// @baa 0x00a02ba0
void __stdcall sub_00a02ba0(int a0, int a1) {  }

struct C_00a02de0 { int sub_00a02de0(void); };

// @baa 0x00a02de0
int C_00a02de0::sub_00a02de0(void) { return *(int*)((char*)this + 0); }

struct C_00a02e60 { int sub_00a02e60(void); };

// @baa 0x00a02e60
int C_00a02e60::sub_00a02e60(void) { return *(int*)((char*)this + 0); }

struct C_00a02e70 { int sub_00a02e70(void); };

// @baa 0x00a02e70
int C_00a02e70::sub_00a02e70(void) { return *(int*)((char*)this + 0); }

struct C_00a02e80 {
    int sub_00a02e80(int);
};

// @baa 0x00a02e80
int C_00a02e80::sub_00a02e80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00a02e90 { int sub_00a02e90(void); };

// @baa 0x00a02e90
int C_00a02e90::sub_00a02e90(void) { return *(int*)((char*)this + 0); }

struct C_00a02ea0 { int sub_00a02ea0(void); };

// @baa 0x00a02ea0
int C_00a02ea0::sub_00a02ea0(void) { return *(int*)((char*)this + 0); }

struct C_00a02eb0 { int sub_00a02eb0(void); };

// @baa 0x00a02eb0
int C_00a02eb0::sub_00a02eb0(void) { return *(int*)((char*)this + 0); }

struct C_00a02ec0 { int sub_00a02ec0(void); };

// @baa 0x00a02ec0
int C_00a02ec0::sub_00a02ec0(void) { return *(int*)((char*)this + 0); }

struct C_00a06d60{
int sub_00a06d60(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00a06d60
int C_00a06d60::sub_00a06d60(undefined4*param_2)
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

struct C_00a06dc0 {
    int sub_00a06dc0(int);
    int sub_007897e0(int);
};

// @baa 0x00a06dc0
int C_00a06dc0::sub_00a06dc0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00a06dc0 *)(this))->sub_007897e0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct E { BYTE Bytes[80]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_00a06e00(INT Index) const;
};

// @baa 0x00a06e00
const E* S::sub_00a06e00(INT Index) const
{
    return &Items(Index);
}

struct C_00a06eb0 {
    int sub_00a06eb0(int);
    int sub_00a02840(int);
};

// @baa 0x00a06eb0
int C_00a06eb0::sub_00a06eb0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00a06eb0 *)(this))->sub_00a02840(param_2);
  sub_01a37612((void *)(iVar1 * 0x50 + *param_1),0,param_2 * 0x50);
  return iVar1;
}

struct S_00a06ef0 {
    TArray<E> Items; // 0x00
    const E* sub_00a06ef0(INT Index) const;
};

// @baa 0x00a06ef0
const E* S_00a06ef0::sub_00a06ef0(INT Index) const
{
    return &Items(Index);
}

struct C_00a06fa0 {
    int sub_00a06fa0(int);
    int sub_00a028b0(int);
};

// @baa 0x00a06fa0
int C_00a06fa0::sub_00a06fa0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00a06fa0 *)(this))->sub_00a028b0(param_2);
  sub_01a37612((void *)(iVar1 * 0x50 + *param_1),0,param_2 * 0x50);
  return iVar1;
}

struct S_00a06fe0 {
    TArray<E> Items; // 0x00
    const E* sub_00a06fe0(INT Index) const;
};

// @baa 0x00a06fe0
const E* S_00a06fe0::sub_00a06fe0(INT Index) const
{
    return &Items(Index);
}

struct C_00a07090 {
    int sub_00a07090(int);
    int sub_00a02920(int);
};

// @baa 0x00a07090
int C_00a07090::sub_00a07090(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00a07090 *)(this))->sub_00a02920(param_2);
  sub_01a37612((void *)(iVar1 * 0x50 + *param_1),0,param_2 * 0x50);
  return iVar1;
}

struct C_00a070d0{
int sub_00a070d0(undefined4*);
};

// @baa 0x00a070d0
int C_00a070d0::sub_00a070d0(undefined4*param_2)
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

struct C_00a07170{
int sub_00a07170(undefined4*);
};

// @baa 0x00a07170
int C_00a07170::sub_00a07170(undefined4*param_2)
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

struct C_00a071d0 {
    int sub_00a071d0(int);
    int sub_009b1970(int);
};

// @baa 0x00a071d0
int C_00a071d0::sub_00a071d0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00a071d0 *)(this))->sub_009b1970(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

struct E_00a07210 { BYTE Bytes[24]; };

struct S_00a07210 {
    TArray<E_00a07210> Items; // 0x00
    const E_00a07210* sub_00a07210(INT Index) const;
};

// @baa 0x00a07210
const E_00a07210* S_00a07210::sub_00a07210(INT Index) const
{
    return &Items(Index);
}

struct C_00a072c0{
int sub_00a072c0(undefined4*);
};

// @baa 0x00a072c0
int C_00a072c0::sub_00a072c0(undefined4*param_2)
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

struct C_00a07320 {
    void sub_00a07320();
};

extern "C" __declspec(dllimport) int free(...);
// @baa 0x00a07320
void C_00a07320::sub_00a07320(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

struct C_00a07350 {
    void sub_00a07350();
};

// @baa 0x00a07350
void C_00a07350::sub_00a07350(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[1] = *param_1;
  return;
}

struct C_00a07360 {
    void sub_00a07360();
};

// @baa 0x00a07360
void C_00a07360::sub_00a07360(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

struct C_00a07390{
int sub_00a07390(undefined4*);
};

// @baa 0x00a07390
int C_00a07390::sub_00a07390(undefined4*param_2)
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

struct C_00a07450{
int sub_00a07450(undefined4*);
};

// @baa 0x00a07450
int C_00a07450::sub_00a07450(undefined4*param_2)
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

struct C_00a074b0{
int sub_00a074b0(undefined4*);
};

// @baa 0x00a074b0
int C_00a074b0::sub_00a074b0(undefined4*param_2)
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

struct S_00a07570 {
    TArray<E> Items; // 0x00
    E* sub_00a07570(INT Index);
};

// @baa 0x00a07570
E* S_00a07570::sub_00a07570(INT Index)
{
    return &Items(Index);
}

struct E_00a07600 { BYTE Bytes[24]; };

struct S_00a07600 {
    TArray<E_00a07600> Items; // 0x00
    E_00a07600* sub_00a07600(INT Index);
};

// @baa 0x00a07600
E_00a07600* S_00a07600::sub_00a07600(INT Index)
{
    return &Items(Index);
}

struct E_00a07650 { BYTE Bytes[24]; };

struct S_00a07650 {
    TArray<E_00a07650> Items; // 0x00
    const E_00a07650* sub_00a07650(INT Index) const;
};

// @baa 0x00a07650
const E_00a07650* S_00a07650::sub_00a07650(INT Index) const
{
    return &Items(Index);
}

struct S_00a076a0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00a076a0(INT Index);
};

// @baa 0x00a076a0
QWORD* S_00a076a0::sub_00a076a0(INT Index)
{
    return &Items(Index);
}

struct S_00a076f0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00a076f0(INT Index);
};

// @baa 0x00a076f0
QWORD* S_00a076f0::sub_00a076f0(INT Index)
{
    return &Items(Index);
}

struct E_00a07740 { BYTE Bytes[12]; };

struct S_00a07740 {
    TArray<E_00a07740> Items; // 0x00
    E_00a07740* sub_00a07740(INT Index);
};

// @baa 0x00a07740
E_00a07740* S_00a07740::sub_00a07740(INT Index)
{
    return &Items(Index);
}

struct S_00a07790 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00a07790(INT Index);
};

// @baa 0x00a07790
DWORD* S_00a07790::sub_00a07790(INT Index)
{
    return &Items(Index);
}

struct C_00a079c0 {
    int sub_00a079c0(int);
};

// @baa 0x00a079c0
int C_00a079c0::sub_00a079c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00a079d0 { C_00a079d0* sub_00a079d0(void); };

// @baa 0x00a079d0
C_00a079d0* C_00a079d0::sub_00a079d0(void) { *(int*)((char*)this + 12) = -1; return this; }

struct C_00a07a20 {
    int sub_00a07a20();
};

// @baa 0x00a07a20
int C_00a07a20::sub_00a07a20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00a07a40 {
    int sub_00a07a40(int);
};

// @baa 0x00a07a40
int C_00a07a40::sub_00a07a40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00a07a50 {
    int sub_00a07a50();
};

// @baa 0x00a07a50
int C_00a07a50::sub_00a07a50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00a07bb0
void sub_00a07bb0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

int sub_009f9240(void);
int sub_00a04700(...);
extern undefined4 g_026b6614;
// @baa 0x00a07bd0
int sub_00a07bd0(void)
{
  if (g_026b6614 == 0) {
    g_026b6614 = sub_00a04700(L"Engine");
    sub_009f9240();
  }
  return g_026b6614;
}

// @baa 0x00a01980
/* UE3's USkeletalMeshComponent::SetHasPhysicsAssetInstance(UBOOL bHasInstance): create or destroy the physics
 * asset instance (slot 0x260 InitArticulated(UBOOL bFixed), slot 0x264 TermArticulated(FRBPhysScene* Scene)). */
void USkeletalMeshComponent::SetHasPhysicsAssetInstance(UBOOL bHasInstance)
{
    if (bHasInstance)
    {
        if (!bHasPhysicsAssetInstance)
        {
            vf_260(bSkelCompFixed);
        }
    }
    else if (bHasPhysicsAssetInstance)
    {
        vf_264(0);
        bHasBeenPermanentlyFixed = FALSE;
    }
    bHasPhysicsAssetInstance = bHasInstance;
}
