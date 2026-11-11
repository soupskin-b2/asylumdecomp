// BrowserManager.cpp (part 1 of 3): 87 functions
// Placed here by: neighbours 76, callers 5, class 5, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern undefined4 g_026d4e00;
// @baa 0x01278070
undefined4 sub_01278070(void)
{
  return *(undefined4 *)(g_026d4e00 + 0x58);
}

extern char g_02019ce8[];
// @baa 0x01368ee0
int sub_01368ee0(void) { return (int)g_02019ce8; }

// @baa 0x01369260
IMPLEMENT_CLASS_AT(UBrowserManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\BrowserManager.cpp", 21);

// @baa 0x01369390
bool UBrowserManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C {
    undefined4 * sub_0136b240(byte);
};

int sub_0053dfa0(...);
extern undefined * g_01e72a60;
// @baa 0x0136b240
undefined4 * C::sub_0136b240(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

typedef uint size_t;

struct C_0136b440 {
    int sub_0136b440(int);
    int sub_01369dc0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0136b440
int C_0136b440::sub_0136b440(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0136b440 *)(this))->sub_01369dc0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x28),0,param_2 * 0x28);
  return iVar1;
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0136b480(INT Index);
};

// @baa 0x0136b480
DWORD* S::sub_0136b480(INT Index)
{
    return &Items(Index);
}

struct C_0136b4d0{
int sub_0136b4d0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x0136b4d0
int C_0136b4d0::sub_0136b4d0(undefined4*param_2)
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

struct S_0136b530 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0136b530(INT Index);
};

// @baa 0x0136b530
DWORD* S_0136b530::sub_0136b530(INT Index)
{
    return &Items(Index);
}

struct S_0136b5e0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0136b5e0(INT Index);
};

// @baa 0x0136b5e0
DWORD* S_0136b5e0::sub_0136b5e0(INT Index)
{
    return &Items(Index);
}

struct C_0136b630{
int sub_0136b630(undefined4*);
};

// @baa 0x0136b630
int C_0136b630::sub_0136b630(undefined4*param_2)
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

struct S_0136b740 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_0136b740(INT Index) const;
};

// @baa 0x0136b740
const DWORD* S_0136b740::sub_0136b740(INT Index) const
{
    return &Items(Index);
}

struct E { BYTE Bytes[24]; };

struct S_0136b790 {
    TArray<E> Items; // 0x00
    E* sub_0136b790(INT Index);
};

// @baa 0x0136b790
E* S_0136b790::sub_0136b790(INT Index)
{
    return &Items(Index);
}

struct S_0136b7e0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0136b7e0(INT Index);
};

// @baa 0x0136b7e0
DWORD* S_0136b7e0::sub_0136b7e0(INT Index)
{
    return &Items(Index);
}

struct S_0136b890 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_0136b890(INT Index) const;
};

// @baa 0x0136b890
const DWORD* S_0136b890::sub_0136b890(INT Index) const
{
    return &Items(Index);
}

struct E_0136b8e0 { BYTE Bytes[12]; };

struct S_0136b8e0 {
    TArray<E_0136b8e0> Items; // 0x00
    E_0136b8e0* sub_0136b8e0(INT Index);
};

// @baa 0x0136b8e0
E_0136b8e0* S_0136b8e0::sub_0136b8e0(INT Index)
{
    return &Items(Index);
}

struct C_0136b930 {
    int sub_0136b930(int);
    int sub_0136a070(int);
};

// @baa 0x0136b930
int C_0136b930::sub_0136b930(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0136b930 *)(this))->sub_0136a070(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct C_0136b970 {
    int sub_0136b970(int);
};

// @baa 0x0136b970
int C_0136b970::sub_0136b970(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0136b980
void __stdcall sub_0136b980(int a0, int a1) {  }

struct C_0136b990 {
    int sub_0136b990(int);
};

// @baa 0x0136b990
int C_0136b990::sub_0136b990(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0136b9a0
void __stdcall sub_0136b9a0(int a0, int a1) {  }

struct C_0136b9b0 {
    int sub_0136b9b0(int);
};

// @baa 0x0136b9b0
int C_0136b9b0::sub_0136b9b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0136b9c0
void __stdcall sub_0136b9c0(int a0, int a1) {  }

struct C_0136b9d0 {
    int sub_0136b9d0(int);
};

// @baa 0x0136b9d0
int C_0136b9d0::sub_0136b9d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0136b9e0 {
    int sub_0136b9e0(int);
};

// @baa 0x0136b9e0
int C_0136b9e0::sub_0136b9e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0136b9f0
void __stdcall sub_0136b9f0(int a0, int a1) {  }

struct S_0136ba00 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0136ba00(INT Index);
};

// @baa 0x0136ba00
DWORD* S_0136ba00::sub_0136ba00(INT Index)
{
    return &Items(Index);
}

struct C_0136ba80{
int sub_0136ba80(undefined4*);
};

// @baa 0x0136ba80
int C_0136ba80::sub_0136ba80(undefined4*param_2)
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

struct C_0136bae0 {
    int sub_0136bae0(int);
};

// @baa 0x0136bae0
int C_0136bae0::sub_0136bae0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0136baf0
void __stdcall sub_0136baf0(int a0, int a1) {  }

struct C_0136bb00 {
    int sub_0136bb00(int);
};

// @baa 0x0136bb00
int C_0136bb00::sub_0136bb00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

int sub_005413d0(...);
// @baa 0x0136bb40
void sub_0136bb40(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0136bb50 {
    int sub_0136bb50(int);
};

// @baa 0x0136bb50
int C_0136bb50::sub_0136bb50(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_0136bb90 {
    int sub_0136bb90(int);
};

// @baa 0x0136bb90
int C_0136bb90::sub_0136bb90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0136bba0 {
    int sub_0136bba0();
};

// @baa 0x0136bba0
int C_0136bba0::sub_0136bba0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0136bbc0 {
    int sub_0136bbc0(int);
};

// @baa 0x0136bbc0
int C_0136bbc0::sub_0136bbc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0136bbd0 {
    int sub_0136bbd0(int);
};

// @baa 0x0136bbd0
int C_0136bbd0::sub_0136bbd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0136bbe0 {
    int sub_0136bbe0();
};

// @baa 0x0136bbe0
int C_0136bbe0::sub_0136bbe0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0136bc00 {
    int sub_0136bc00();
};

// @baa 0x0136bc00
int C_0136bc00::sub_0136bc00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0136bc10 {
    int sub_0136bc10(int);
};

// @baa 0x0136bc10
int C_0136bc10::sub_0136bc10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0136bc20 {
    int sub_0136bc20(int);
};

// @baa 0x0136bc20
int C_0136bc20::sub_0136bc20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0136bc30 {
    int sub_0136bc30();
};

// @baa 0x0136bc30
int C_0136bc30::sub_0136bc30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0136bc50 {
    int sub_0136bc50();
};

// @baa 0x0136bc50
int C_0136bc50::sub_0136bc50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0136bc60 {
    int sub_0136bc60();
};

// @baa 0x0136bc60
int C_0136bc60::sub_0136bc60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct S_0136bc80 { int sub_00544d40(int); };

// @baa 0x0136bc80
int sub_0136bc80(S_0136bc80 *s, int a) { return s->sub_00544d40(a); }

struct C_0136bc90 {
    int sub_0136bc90(int);
};

// @baa 0x0136bc90
int C_0136bc90::sub_0136bc90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0136bca0 {
    int sub_0136bca0();
};

// @baa 0x0136bca0
int C_0136bca0::sub_0136bca0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0136bcc0 {
    int sub_0136bcc0();
};

// @baa 0x0136bcc0
int C_0136bcc0::sub_0136bcc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0136bce0 {
    int sub_0136bce0(int);
};

// @baa 0x0136bce0
int C_0136bce0::sub_0136bce0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0136bcf0
void sub_0136bcf0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0136bd00 {
    int sub_0136bd00(int);
};

// @baa 0x0136bd00
int C_0136bd00::sub_0136bd00(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

// @baa 0x0136bd40
void sub_0136bd40(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

// @baa 0x0136bd80
void sub_0136bd80(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0136bd90 {
    int sub_0136bd90();
};

// @baa 0x0136bd90
int C_0136bd90::sub_0136bd90(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0136be20 {
    int sub_0136be20(int);
};

// @baa 0x0136be20
int C_0136be20::sub_0136be20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0136be30 {
    int sub_0136be30(int);
};

// @baa 0x0136be30
int C_0136be30::sub_0136be30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0136be40 {
    int sub_0136be40();
};

// @baa 0x0136be40
int C_0136be40::sub_0136be40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0136be60 {
    int sub_0136be60();
};

// @baa 0x0136be60
int C_0136be60::sub_0136be60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0136be70 {
    int sub_0136be70();
};

// @baa 0x0136be70
int C_0136be70::sub_0136be70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0136be90 {
    int sub_0136be90();
};

// @baa 0x0136be90
int C_0136be90::sub_0136be90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0136bea0 {
    int sub_0136bea0();
};

// @baa 0x0136bea0
int C_0136bea0::sub_0136bea0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0136bec0 {
    int sub_0136bec0();
};

// @baa 0x0136bec0
int C_0136bec0::sub_0136bec0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0136bed0 {
    int sub_0136bed0();
};

// @baa 0x0136bed0
int C_0136bed0::sub_0136bed0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0136bef0 {
    int sub_0136bef0();
};

// @baa 0x0136bef0
int C_0136bef0::sub_0136bef0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0136bf00 {
    int sub_0136bf00();
};

// @baa 0x0136bf00
int C_0136bf00::sub_0136bf00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0136bf20 {
    int sub_0136bf20();
};

// @baa 0x0136bf20
int C_0136bf20::sub_0136bf20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0136bf30 {
    int sub_0136bf30();
};

// @baa 0x0136bf30
int C_0136bf30::sub_0136bf30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0136bf40 {
    int sub_0136bf40();
};

// @baa 0x0136bf40
int C_0136bf40::sub_0136bf40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0136bf50 {
    int sub_0136bf50();
};

// @baa 0x0136bf50
int C_0136bf50::sub_0136bf50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0136bf60 {
    int sub_0136bf60(int);
};

// @baa 0x0136bf60
int C_0136bf60::sub_0136bf60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0136bf70 {
    int sub_0136bf70();
};

// @baa 0x0136bf70
int C_0136bf70::sub_0136bf70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0136bf90 {
    int sub_0136bf90();
};

// @baa 0x0136bf90
int C_0136bf90::sub_0136bf90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0136bfa0 {
    int sub_0136bfa0();
};

// @baa 0x0136bfa0
int C_0136bfa0::sub_0136bfa0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0136bfc0 {
    int sub_0136bfc0();
};

// @baa 0x0136bfc0
int C_0136bfc0::sub_0136bfc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0136c570 {
    int sub_0136c570(int);
};

// @baa 0x0136c570
int C_0136c570::sub_0136c570(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0136c580 {
    int sub_0136c580(int);
};

// @baa 0x0136c580
int C_0136c580::sub_0136c580(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct S_0136c590 { int sub_00544d40(int); };

// @baa 0x0136c590
int sub_0136c590(S_0136c590 *s, int a) { return s->sub_00544d40(a); }

struct C_0136c620 {
    int sub_0136c620();
};

// @baa 0x0136c620
int C_0136c620::sub_0136c620(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0136cb90 { int sub_0136cb90(void); };

// @baa 0x0136cb90
int C_0136cb90::sub_0136cb90(void) { return *(int*)((char*)this + 836); }

struct C_0136cc10 {
    undefined4 sub_0136cc10(byte);
};

int sub_0136cba0(void);
// @baa 0x0136cc10
undefined4 C_0136cc10::sub_0136cc10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0136cba0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_01373c80 { void* Data; int Num; int Max; void sub_01373c80(); };

// @baa 0x01373c80
void C_01373c80::sub_01373c80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01377fc0 {
    undefined4 sub_01377fc0(byte);
};

int sub_01373c80(void);
// @baa 0x01377fc0
undefined4 C_01377fc0::sub_01377fc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01373c80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0138c650
// @baa 0x0138c6c0
// @baa 0x0138d450
// @baa 0x0138d470
int sub_01126ed0(void);
extern undefined * g_0226bf9c;
extern undefined4 g_0226bfc0;
extern undefined * g_0226bfc8;
// @baa 0x013abe40
undefined4 * UUnrealEdEngine::sub_013abe40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01126ed0();
  *param_1 = (undefined4)(&g_0226bfc8);
  param_1[0x51] = (undefined4)(&g_0226bfc0);
  param_1[0x52] = (undefined4)(&g_0226bf9c);
  return param_1;
}
