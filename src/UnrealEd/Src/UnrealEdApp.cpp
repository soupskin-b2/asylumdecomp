// UnrealEdApp.cpp (part 1 of 4): 64 functions
// Placed here by: neighbours 62, callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct C{
int sub_0111f210(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x0111f210
int C::sub_0111f210(undefined4*param_2)
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

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0111f270(INT Index);
};

// @baa 0x0111f270
DWORD* S::sub_0111f270(INT Index)
{
    return &Items(Index);
}

struct C_0111f2c0{
int sub_0111f2c0(undefined4*);
};

// @baa 0x0111f2c0
int C_0111f2c0::sub_0111f2c0(undefined4*param_2)
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

struct S_0111f320 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0111f320(INT Index);
};

// @baa 0x0111f320
DWORD* S_0111f320::sub_0111f320(INT Index)
{
    return &Items(Index);
}

struct C_0111f370{
int sub_0111f370(undefined4*);
};

// @baa 0x0111f370
int C_0111f370::sub_0111f370(undefined4*param_2)
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
	FFaceFXElement* sub_0111f3d0(INT Index);
};

// @baa 0x0111f3d0
FFaceFXElement* UFxRenderWidget::sub_0111f3d0(INT Index)
{
	return &BoneArray(Index);
}

struct S_0111f5e0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0111f5e0(INT Index);
};

// @baa 0x0111f5e0
DWORD* S_0111f5e0::sub_0111f5e0(INT Index)
{
    return &Items(Index);
}

struct E { BYTE Bytes[280]; };

struct S_0111f630 {
    TArray<E> Items; // 0x00
    E* sub_0111f630(INT Index);
};

// @baa 0x0111f630
E* S_0111f630::sub_0111f630(INT Index)
{
    return &Items(Index);
}

typedef uint size_t;

struct C_0111f680 {
    int sub_0111f680(int);
    int sub_0111caa0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0111f680
int C_0111f680::sub_0111f680(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0111f680 *)(this))->sub_0111caa0(param_2);
  sub_01a37612((void *)(iVar1 * 0x118 + *param_1),0,param_2 * 0x118);
  return iVar1;
}

struct S_0111f6c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0111f6c0(INT Index);
};

// @baa 0x0111f6c0
DWORD* S_0111f6c0::sub_0111f6c0(INT Index)
{
    return &Items(Index);
}

struct S_0111f710 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0111f710(INT Index);
};

// @baa 0x0111f710
DWORD* S_0111f710::sub_0111f710(INT Index)
{
    return &Items(Index);
}

struct E_0111f7c0 { BYTE Bytes[12]; };

struct S_0111f7c0 {
    TArray<E_0111f7c0> Items; // 0x00
    E_0111f7c0* sub_0111f7c0(INT Index);
};

// @baa 0x0111f7c0
E_0111f7c0* S_0111f7c0::sub_0111f7c0(INT Index)
{
    return &Items(Index);
}

struct C_0111f870 {
    int sub_0111f870(int);
};

// @baa 0x0111f870
int C_0111f870::sub_0111f870(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0111f880
void __stdcall sub_0111f880(int a0, int a1) {  }

struct C_0111f890 {
    int sub_0111f890(int);
};

// @baa 0x0111f890
int C_0111f890::sub_0111f890(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0111f8a0
void __stdcall sub_0111f8a0(int a0, int a1) {  }

struct C_0111f8b0 {
    int sub_0111f8b0(int);
};

// @baa 0x0111f8b0
int C_0111f8b0::sub_0111f8b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0111f8c0
void __stdcall sub_0111f8c0(int a0, int a1) {  }

struct C_0111f8d0 {
    int sub_0111f8d0(int);
};

// @baa 0x0111f8d0
int C_0111f8d0::sub_0111f8d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0111f8e0
void __stdcall sub_0111f8e0(int a0, int a1) {  }

struct C_0111f950 {
    int sub_0111f950(int);
};

// @baa 0x0111f950
int C_0111f950::sub_0111f950(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x0111f960
void __stdcall sub_0111f960(int a0, int a1) {  }

struct C_0111f9b0 {
    int sub_0111f9b0(int);
};

// @baa 0x0111f9b0
int C_0111f9b0::sub_0111f9b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x0111f9c0
void __stdcall sub_0111f9c0(int a0, int a1) {  }

struct C_0111f9d0 {
    int sub_0111f9d0(int);
};

// @baa 0x0111f9d0
int C_0111f9d0::sub_0111f9d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0111f9e0
void __stdcall sub_0111f9e0(int a0, int a1) {  }

struct C_0111fa50 {
    int sub_0111fa50(int);
};

// @baa 0x0111fa50
int C_0111fa50::sub_0111fa50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0111fa60
void __stdcall sub_0111fa60(int a0, int a1) {  }

struct C_0111fa70 {
    int sub_0111fa70(int);
};

// @baa 0x0111fa70
int C_0111fa70::sub_0111fa70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x118 + *param_1;
}

struct C_0111fa80 {
    int sub_0111fa80(int);
};

// @baa 0x0111fa80
int C_0111fa80::sub_0111fa80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0111fa90
void __stdcall sub_0111fa90(int a0, int a1) {  }

struct C_0111faa0 {
    int sub_0111faa0(int);
};

// @baa 0x0111faa0
int C_0111faa0::sub_0111faa0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0111fab0
void __stdcall sub_0111fab0(int a0, int a1) {  }

struct C_0111fac0 {
    int sub_0111fac0(int);
};

// @baa 0x0111fac0
int C_0111fac0::sub_0111fac0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x0111fad0
void __stdcall sub_0111fad0(int a0, int a1) {  }

struct C_0111fb10 {
    int sub_0111fb10(int);
};

// @baa 0x0111fb10
int C_0111fb10::sub_0111fb10(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 4;
}

// @baa 0x0111fb20
void __stdcall sub_0111fb20(int a0, int a1) {  }

struct S_0111fb30 { int sub_00544d40(int); };

// @baa 0x0111fb30
int sub_0111fb30(S_0111fb30 *s, int a) { return s->sub_00544d40(a); }

struct C_0111fb40 {
    int sub_0111fb40(int);
};

// @baa 0x0111fb40
int C_0111fb40::sub_0111fb40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_0111fbf0 {
    int sub_0111fbf0(int);
};

// @baa 0x0111fbf0
int C_0111fbf0::sub_0111fbf0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0111fc00 {
    int sub_0111fc00(int);
};

// @baa 0x0111fc00
int C_0111fc00::sub_0111fc00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0111fc90 {
    int sub_0111fc90(int);
};

// @baa 0x0111fc90
int C_0111fc90::sub_0111fc90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_0111fcb0 {
    int sub_0111fcb0(int);
};

// @baa 0x0111fcb0
int C_0111fcb0::sub_0111fcb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

int sub_005413d0(...);
// @baa 0x0111fcf0
void sub_0111fcf0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0111fd00 {
    int sub_0111fd00(int);
};

// @baa 0x0111fd00
int C_0111fd00::sub_0111fd00(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_0111fd10 {
    int sub_0111fd10();
};

// @baa 0x0111fd10
int C_0111fd10::sub_0111fd10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0111fd30 {
    int sub_0111fd30();
};

// @baa 0x0111fd30
int C_0111fd30::sub_0111fd30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_0111fd50 {
    int sub_0111fd50();
};

// @baa 0x0111fd50
int C_0111fd50::sub_0111fd50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0111fd70 {
    int sub_0111fd70();
};

// @baa 0x0111fd70
int C_0111fd70::sub_0111fd70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0111fd90 {
    int sub_0111fd90();
};

// @baa 0x0111fd90
int C_0111fd90::sub_0111fd90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0111fdb0 {
    int sub_0111fdb0();
};

// @baa 0x0111fdb0
int C_0111fdb0::sub_0111fdb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0111fdc0 {
    int sub_0111fdc0();
};

// @baa 0x0111fdc0
int C_0111fdc0::sub_0111fdc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0111fde0 {
    int sub_0111fde0();
};

// @baa 0x0111fde0
int C_0111fde0::sub_0111fde0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0111fdf0 {
    int sub_0111fdf0(int);
};

// @baa 0x0111fdf0
int C_0111fdf0::sub_0111fdf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0111fe00 {
    int sub_0111fe00(int);
};

// @baa 0x0111fe00
int C_0111fe00::sub_0111fe00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0111fe10 {
    int sub_0111fe10();
};

// @baa 0x0111fe10
int C_0111fe10::sub_0111fe10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0111fe30 {
    int sub_0111fe30();
};

// @baa 0x0111fe30
int C_0111fe30::sub_0111fe30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_0111fe50 {
    int sub_0111fe50();
};

// @baa 0x0111fe50
int C_0111fe50::sub_0111fe50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0111fe70 {
    int sub_0111fe70();
};

// @baa 0x0111fe70
int C_0111fe70::sub_0111fe70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0111fe80 {
    int sub_0111fe80();
};

// @baa 0x0111fe80
int C_0111fe80::sub_0111fe80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0111fea0 {
    int sub_0111fea0();
};

// @baa 0x0111fea0
int C_0111fea0::sub_0111fea0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0113cc70 {
    undefined4 sub_0113cc70(byte);
};

int sub_0053dfa0(...);
int sub_011314d0(void);
// @baa 0x0113cc70
undefined4 C_0113cc70::sub_0113cc70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011314d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_012920d0();
// @baa 0x01294bf0
void sub_01294bf0(void) { sub_012920d0(); }

struct C_01454530 {
    undefined4 sub_01454530(byte);
};

int sub_01454490(void);
// @baa 0x01454530
undefined4 C_01454530::sub_01454530(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01454490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
