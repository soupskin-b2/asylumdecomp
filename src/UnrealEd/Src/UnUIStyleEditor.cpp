// UnUIStyleEditor.cpp (part 1 of 5): 121 functions
// Placed here by: neighbours 112, callers 9.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { void sub_00dca870(int a0); };

// @baa 0x00dca870
void C::sub_00dca870(int a0) { *(int*)((char*)this + 24) = a0; }

// @baa 0x0149b250
void UUIPreviewString::sub_0149b250(int a0) { *(int*)((char*)this + 48) = a0; }

extern char g_026de9a4[];
// @baa 0x014dc760
int sub_014dc760(void) { return (int)g_026de9a4; }

extern char g_025e9428[];
// @baa 0x014dc770
int sub_014dc770(void) { return (int)g_025e9428; }

extern char g_026de9bc[];
// @baa 0x014dc780
int sub_014dc780(void) { return (int)g_026de9bc; }

extern char g_026deb14[];
// @baa 0x014dc850
int sub_014dc850(void) { return (int)g_026deb14; }

extern char g_025e9430[];
// @baa 0x014dc860
int sub_014dc860(void) { return (int)g_025e9430; }

extern char g_026deb2c[];
// @baa 0x014dc870
int sub_014dc870(void) { return (int)g_026deb2c; }

extern char g_026deb44[];
// @baa 0x014dc9f0
int sub_014dc9f0(void) { return (int)g_026deb44; }

extern char g_022bda60[];
// @baa 0x014dca00
int sub_014dca00(void) { return (int)g_022bda60; }

extern char g_026deb5c[];
// @baa 0x014dca10
int sub_014dca10(void) { return (int)g_026deb5c; }

extern char g_026dec14[];
// @baa 0x014dca50
int sub_014dca50(void) { return (int)g_026dec14; }

extern char g_022bec20[];
// @baa 0x014dca60
int sub_014dca60(void) { return (int)g_022bec20; }

extern char g_026dec2c[];
// @baa 0x014dca70
int sub_014dca70(void) { return (int)g_026dec2c; }

// @baa 0x014dcb50
void sub_014dcb50(void)
{
  return;
}

extern char g_026ded9c[];
// @baa 0x014dcb60
int sub_014dcb60(void) { return (int)g_026ded9c; }

extern char g_022c09a8[];
// @baa 0x014dcb70
int sub_014dcb70(void) { return (int)g_022c09a8; }

extern char g_026dedb4[];
// @baa 0x014dcb80
int sub_014dcb80(void) { return (int)g_026dedb4; }

extern char g_026dedcc[];
// @baa 0x014dcc60
int sub_014dcc60(void) { return (int)g_026dedcc; }

extern char g_022c0ce8[];
// @baa 0x014dcc70
int sub_014dcc70(void) { return (int)g_022c0ce8; }

extern char g_026dede4[];
// @baa 0x014dcc80
int sub_014dcc80(void) { return (int)g_026dede4; }

extern char g_026deeb4[];
// @baa 0x014dcd80
int sub_014dcd80(void) { return (int)g_026deeb4; }

extern char g_025e9438[];
// @baa 0x014dcd90
int sub_014dcd90(void) { return (int)g_025e9438; }

extern char g_026deecc[];
// @baa 0x014dcda0
int sub_014dcda0(void) { return (int)g_026deecc; }

struct A_014dd7c0 { virtual void sub_014e7f00(); char pad[412]; };

struct B_014dd7c0 { virtual void sub_014e7f00(); };

struct C_014dd7c0 : A_014dd7c0, B_014dd7c0 { virtual void sub_014e7f00(); C_014dd7c0(); };

C_014dd7c0::C_014dd7c0() {}

// @baa 0x014dd7c0
void C_014dd7c0::sub_014e7f00() {}

struct C_014de250 {
    void sub_014de250();
    int sub_00ddb270();
};

int sub_00dd1a50(...);
// @baa 0x014de250
void C_014de250::sub_014de250(void)
{
    int param_1 = (int)this;
  int iVar1;
  undefined4 uVar2;
  iVar1 = sub_00dd1a50(*(undefined4 *)(param_1 + 0x188));
  if (iVar1 == 0) {
    uVar2 = ((C_014de250 *)(((char *)this + 0x16c)))->sub_00ddb270();
    sub_00dd1a50(uVar2);
  }
  return;
}

void sub_014de1a0();
// @baa 0x014de280
void sub_014de280(void) { sub_014de1a0(); }

struct C_014de340 {
    void sub_014de340();
    int sub_00ddb270();
};

int sub_00dd1ab0(...);
// @baa 0x014de340
void C_014de340::sub_014de340(void)
{
    int param_1 = (int)this;
  int iVar1;
  undefined4 uVar2;
  iVar1 = sub_00dd1ab0(*(undefined4 *)(param_1 + 0x1a4));
  if (iVar1 == 0) {
    uVar2 = ((C_014de340 *)(((char *)this + 0x188)))->sub_00ddb270();
    sub_00dd1ab0(uVar2);
  }
  return;
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_014de7c0(INT Index);
};

// @baa 0x014de7c0
DWORD* S::sub_014de7c0(INT Index)
{
    return &Items(Index);
}

struct S_014de810 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_014de810(INT Index) const;
};

// @baa 0x014de810
const DWORD* S_014de810::sub_014de810(INT Index) const
{
    return &Items(Index);
}

struct C_014de860{
int sub_014de860(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x014de860
int C_014de860::sub_014de860(undefined4*param_2)
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

struct S_014de8c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_014de8c0(INT Index);
};

// @baa 0x014de8c0
DWORD* S_014de8c0::sub_014de8c0(INT Index)
{
    return &Items(Index);
}

struct S_014de910 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_014de910(INT Index) const;
};

// @baa 0x014de910
const DWORD* S_014de910::sub_014de910(INT Index) const
{
    return &Items(Index);
}

struct C_014de960{
int sub_014de960(undefined4*);
};

// @baa 0x014de960
int C_014de960::sub_014de960(undefined4*param_2)
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

struct S_014de9c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_014de9c0(INT Index);
};

// @baa 0x014de9c0
DWORD* S_014de9c0::sub_014de9c0(INT Index)
{
    return &Items(Index);
}

struct S_014dea10 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_014dea10(INT Index) const;
};

// @baa 0x014dea10
const DWORD* S_014dea10::sub_014dea10(INT Index) const
{
    return &Items(Index);
}

struct C_014dea60{
int sub_014dea60(undefined4*);
};

// @baa 0x014dea60
int C_014dea60::sub_014dea60(undefined4*param_2)
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

struct S_014deac0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_014deac0(INT Index);
};

// @baa 0x014deac0
DWORD* S_014deac0::sub_014deac0(INT Index)
{
    return &Items(Index);
}

struct S_014deb10 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_014deb10(INT Index) const;
};

// @baa 0x014deb10
const DWORD* S_014deb10::sub_014deb10(INT Index) const
{
    return &Items(Index);
}

struct C_014deb60{
int sub_014deb60(undefined4*);
};

// @baa 0x014deb60
int C_014deb60::sub_014deb60(undefined4*param_2)
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

// @baa 0x014ded00
void __stdcall sub_014ded00(int a0, int a1) {  }

// @baa 0x014ded10
void __stdcall sub_014ded10(int a0, int a1) {  }

// @baa 0x014ded20
void __stdcall sub_014ded20(int a0, int a1) {  }

// @baa 0x014ded30
void __stdcall sub_014ded30(int a0, int a1) {  }

struct C_014ded40 {
    int sub_014ded40(int);
};

// @baa 0x014ded40
int C_014ded40::sub_014ded40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_014ded50 {
    int sub_014ded50();
};

// @baa 0x014ded50
int C_014ded50::sub_014ded50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

int sub_005413d0(...);
// @baa 0x014ded90
void sub_014ded90(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_014deda0 {
    int sub_014deda0(int);
};

// @baa 0x014deda0
int C_014deda0::sub_014deda0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_014dedb0 {
    int sub_014dedb0();
};

// @baa 0x014dedb0
int C_014dedb0::sub_014dedb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_014dedd0 {
    int sub_014dedd0();
};

// @baa 0x014dedd0
int C_014dedd0::sub_014dedd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_014dede0 {
    int sub_014dede0();
};

// @baa 0x014dede0
int C_014dede0::sub_014dede0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_014dee00 {
    int sub_014dee00();
};

// @baa 0x014dee00
int C_014dee00::sub_014dee00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_014df3c0 {
    undefined4 sub_014df3c0(byte);
};

int sub_0053dfa0(...);
int sub_014df350(void);
// @baa 0x014df3c0
undefined4 C_014df3c0::sub_014df3c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014df350();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_014df470 { virtual void sub_014df480(); char pad[432]; };

struct B_014df470 { virtual void sub_014df480(); };

struct C_014df470 : A_014df470, B_014df470 { virtual void sub_014df480(); C_014df470(); };

C_014df470::C_014df470() {}

// @baa 0x014df470
void C_014df470::sub_014df480() {}

struct C_014df480 {
    undefined4 sub_014df480(byte);
};

int sub_014dc1f0(void);
// @baa 0x014df480
undefined4 C_014df480::sub_014df480(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014dc1f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_014df5b0 { virtual void sub_014df5c0(); char pad[332]; };

struct B_014df5b0 { virtual void sub_014df5c0(); };

struct C_014df5b0 : A_014df5b0, B_014df5b0 { virtual void sub_014df5c0(); C_014df5b0(); };

C_014df5b0::C_014df5b0() {}

// @baa 0x014df5b0
void C_014df5b0::sub_014df5c0() {}

struct C_014df5c0 {
    undefined4 sub_014df5c0(byte);
};

int sub_014df540(void);
// @baa 0x014df5c0
undefined4 C_014df5c0::sub_014df5c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014df540();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014df790 {
    undefined4 sub_014df790(byte);
};

int sub_014df720(void);
// @baa 0x014df790
undefined4 C_014df790::sub_014df790(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014df720();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_014dfd00 { virtual void sub_014dfd10(); char pad[432]; };

struct B_014dfd00 { virtual void sub_014dfd10(); };

struct C_014dfd00 : A_014dfd00, B_014dfd00 { virtual void sub_014dfd10(); C_014dfd00(); };

C_014dfd00::C_014dfd00() {}

// @baa 0x014dfd00
void C_014dfd00::sub_014dfd10() {}

void sub_00dad4f0();
// @baa 0x014e40a0
void sub_014e40a0(void) { sub_00dad4f0(); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_014e40f0 { void* Data; int Num; int Max; void sub_014e40f0(); };

// @baa 0x014e40f0
void C_014e40f0::sub_014e40f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_014e4150 { void* Data; int Num; int Max; void sub_014e4150(); };

// @baa 0x014e4150
void C_014e4150::sub_014e4150() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_014e41f0 { void* Data; int Num; int Max; void sub_014e41f0(); };

// @baa 0x014e41f0
void C_014e41f0::sub_014e41f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_014e4290 { void* Data; int Num; int Max; void sub_014e4290(); };

// @baa 0x014e4290
void C_014e4290::sub_014e4290() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_014e4330 {
    int sub_014e4330(int);
};

// @baa 0x014e4330
int C_014e4330::sub_014e4330(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_014e4340 {
    int sub_014e4340();
};

// @baa 0x014e4340
int C_014e4340::sub_014e4340(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_014e4360 {
    int sub_014e4360();
};

// @baa 0x014e4360
int C_014e4360::sub_014e4360(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_014e4370 {
    int sub_014e4370(int);
};

// @baa 0x014e4370
int C_014e4370::sub_014e4370(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_014e4400 {
    int sub_014e4400(int);
};

// @baa 0x014e4400
int C_014e4400::sub_014e4400(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x014e78c0
void sub_014e78c0(void) {  }

struct A_014e78d0 { virtual void sub_014e8950(); char pad[332]; };

struct B_014e78d0 { virtual void sub_014e8950(); };

struct C_014e78d0 : A_014e78d0, B_014e78d0 { virtual void sub_014e8950(); C_014e78d0(); };

C_014e78d0::C_014e78d0() {}

// @baa 0x014e78d0
void C_014e78d0::sub_014e8950() {}

// @baa 0x014e7a80
void sub_014e7a80(void) {  }

// @baa 0x014e7a90
void sub_014e7a90(void) {  }

struct A_014e7aa0 { virtual void sub_014e8970(); char pad[332]; };

struct B_014e7aa0 { virtual void sub_014e8970(); };

struct C_014e7aa0 : A_014e7aa0, B_014e7aa0 { virtual void sub_014e8970(); C_014e7aa0(); };

C_014e7aa0::C_014e7aa0() {}

// @baa 0x014e7aa0
void C_014e7aa0::sub_014e8970() {}

struct C_014e7f00 {
    undefined4 sub_014e7f00(byte);
};

int sub_014e3950(void);
// @baa 0x014e7f00
undefined4 C_014e7f00::sub_014e7f00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014e3950();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014e81b0 {
    undefined4 sub_014e81b0(byte);
};

int sub_014e3a40(void);
// @baa 0x014e81b0
undefined4 C_014e81b0::sub_014e81b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014e3a40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014e81f0 { void sub_01197610(int); C_014e81f0 *sub_014e81f0(int); };

// @baa 0x014e81f0
C_014e81f0 *C_014e81f0::sub_014e81f0(int a) { sub_01197610(a); return this; }

struct C_014e8210 { void sub_01197610(int); C_014e8210 *sub_014e8210(int); };

// @baa 0x014e8210
C_014e8210 *C_014e8210::sub_014e8210(int a) { sub_01197610(a); return this; }

struct C_014e8230 {
    int sub_014e8230();
};

// @baa 0x014e8230
int C_014e8230::sub_014e8230(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_014e8250 {
    int sub_014e8250();
};

// @baa 0x014e8250
int C_014e8250::sub_014e8250(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_014e8260 {
    int sub_014e8260();
};

// @baa 0x014e8260
int C_014e8260::sub_014e8260(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x18;
}

struct C_014e8270 { void sub_014e50d0(int); C_014e8270 *sub_014e8270(int); };

// @baa 0x014e8270
C_014e8270 *C_014e8270::sub_014e8270(int a) { sub_014e50d0(a); return this; }

extern TArray<int> g_026a1ca4;
struct C_014e8590 {
    int sub_014e8590();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x014e8590
int C_014e8590::sub_014e8590()
{
    return g_026a1ca4(Index);
}

struct C_view {
    int sub_00dcdc00(int, int);
};

// @baa 0x014e85f0
int UPackageMap::sub_014e85f0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00dcdc00((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_014e8620 {
    int sub_014e8620();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x014e8620
int C_014e8620::sub_014e8620()
{
    return g_026a1ca4(Index);
}

struct C_014e86c0 {
    int sub_014e86c0();
};

// @baa 0x014e86c0
int C_014e86c0::sub_014e86c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
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

struct TConstSetBitIterator_014e86d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014e86d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014e86d0& operator++();
};

TConstSetBitIterator_014e86d0::TConstSetBitIterator_014e86d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014e86d0
TConstSetBitIterator_014e86d0& TConstSetBitIterator_014e86d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014e86f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014e86f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014e86f0& operator++();
};

TConstSetBitIterator_014e86f0::TConstSetBitIterator_014e86f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014e86f0
TConstSetBitIterator_014e86f0& TConstSetBitIterator_014e86f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014e8740 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014e8740(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014e8740& operator++();
};

TConstSetBitIterator_014e8740::TConstSetBitIterator_014e8740(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014e8740
TConstSetBitIterator_014e8740& TConstSetBitIterator_014e8740::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014e8760 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014e8760(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014e8760& operator++();
};

TConstSetBitIterator_014e8760::TConstSetBitIterator_014e8760(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014e8760
TConstSetBitIterator_014e8760& TConstSetBitIterator_014e8760::operator++()
{
    It.Advance();
    return *this;
}

struct C_014e8950 {
    undefined4 sub_014e8950(byte);
};

int sub_014e7850(void);
// @baa 0x014e8950
undefined4 C_014e8950::sub_014e8950(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014e7850();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014e8970 {
    undefined4 sub_014e8970(byte);
};

int sub_014e7a10(void);
// @baa 0x014e8970
undefined4 C_014e8970::sub_014e8970(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014e7a10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_014e8af0 { virtual void sub_014e8b00(); char pad[336]; };

struct B_014e8af0 { virtual void sub_014e8b00(); };

struct C_014e8af0 : A_014e8af0, B_014e8af0 { virtual void sub_014e8b00(); C_014e8af0(); };

C_014e8af0::C_014e8af0() {}

// @baa 0x014e8af0
void C_014e8af0::sub_014e8b00() {}

struct C_014e8b00 {
    undefined4 sub_014e8b00(byte);
};

int sub_014dd570(void);
// @baa 0x014e8b00
undefined4 C_014e8b00::sub_014e8b00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014dd570();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014e8b20 {
    undefined4 * sub_014e8b20();
};

int sub_014e8a00(void);
extern undefined4 g_022c80c4;
extern undefined * g_022c80d0;
extern undefined * g_022c8130;
// @baa 0x014e8b20
undefined4 * C_014e8b20::sub_014e8b20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_014e8a00();
  *param_1 = (undefined4)(&g_022c8130);
  param_1[0x54] = (undefined4)(&g_022c80d0);
  param_1[0x55] = (undefined4)(&g_022c80c4);
  return param_1;
}

struct A_014e8b50 { virtual void sub_014e8b70(); char pad[336]; };

struct B_014e8b50 { virtual void sub_014e8b70(); };

struct C_014e8b50 : A_014e8b50, B_014e8b50 { virtual void sub_014e8b70(); C_014e8b50(); };

C_014e8b50::C_014e8b50() {}

// @baa 0x014e8b50
void C_014e8b50::sub_014e8b70() {}

struct C_014e8cd0 {
    undefined4 * sub_014e8cd0();
};

extern undefined4 g_022c83f4;
extern undefined * g_022c8400;
extern undefined * g_022c8460;
// @baa 0x014e8cd0
undefined4 * C_014e8cd0::sub_014e8cd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_014e8a00();
  *param_1 = (undefined4)(&g_022c8460);
  param_1[0x54] = (undefined4)(&g_022c8400);
  param_1[0x55] = (undefined4)(&g_022c83f4);
  return param_1;
}

struct A_014e8d00 { virtual void sub_014e8d20(); char pad[336]; };

struct B_014e8d00 { virtual void sub_014e8d20(); };

struct C_014e8d00 : A_014e8d00, B_014e8d00 { virtual void sub_014e8d20(); C_014e8d00(); };

C_014e8d00::C_014e8d00() {}

// @baa 0x014e8d00
void C_014e8d00::sub_014e8d20() {}

struct C_014e8f10 {
    undefined4 sub_014e8f10(byte);
};

int sub_014e5520(void);
// @baa 0x014e8f10
undefined4 C_014e8f10::sub_014e8f10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014e5520();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014e8fd0 {
    undefined4 sub_014e8fd0(byte);
};

int sub_014e5930(void);
// @baa 0x014e8fd0
undefined4 C_014e8fd0::sub_014e8fd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014e5930();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_014eadb0 { virtual void sub_014eadc0(); char pad[332]; };

struct B_014eadb0 { virtual void sub_014eadc0(); };

struct C_014eadb0 : A_014eadb0, B_014eadb0 { virtual void sub_014eadc0(); C_014eadb0(); };

C_014eadb0::C_014eadb0() {}

// @baa 0x014eadb0
void C_014eadb0::sub_014eadc0() {}

struct C_014eadc0 {
    undefined4 sub_014eadc0(byte);
};

int sub_014dd450(void);
// @baa 0x014eadc0
undefined4 C_014eadc0::sub_014eadc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014dd450();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x014eae50
void sub_014eae50(void) {  }

struct A_014eae60 { virtual void sub_014eaed0(); char pad[332]; };

struct B_014eae60 { virtual void sub_014eaed0(); };

struct C_014eae60 : A_014eae60, B_014eae60 { virtual void sub_014eaed0(); C_014eae60(); };

C_014eae60::C_014eae60() {}

// @baa 0x014eae60
void C_014eae60::sub_014eaed0() {}

struct C_014eaed0 {
    undefined4 sub_014eaed0(byte);
};

int sub_014eae70(void);
// @baa 0x014eaed0
undefined4 C_014eaed0::sub_014eaed0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014eae70();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014eef70 {
    void sub_014eef70(undefined4);
};

int sub_014e8390(...);
// @baa 0x014eef70
void C_014eef70::sub_014eef70(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_014e8390(param_2,param_1 + 0x50);
  return;
}

struct C_014ef820 {
    void sub_014ef820(undefined4);
};

int sub_014e8290(...);
// @baa 0x014ef820
void C_014ef820::sub_014ef820(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_014e8290(param_2,param_1 + 0x24);
  return;
}

struct C_014ef840 {
    void sub_014ef840(undefined4);
};

int sub_014e8490(...);
// @baa 0x014ef840
void C_014ef840::sub_014ef840(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_014e8490(param_2,param_1 + 0x48);
  return;
}

struct C_014f0370 { void sub_014e87b0(int); C_014f0370 *sub_014f0370(int); };

// @baa 0x014f0370
C_014f0370 *C_014f0370::sub_014f0370(int a) { sub_014e87b0(a); return this; }

struct C_014f0390 { void sub_014e87b0(int); C_014f0390 *sub_014f0390(int); };

// @baa 0x014f0390
C_014f0390 *C_014f0390::sub_014f0390(int a) { sub_014e87b0(a); return this; }

struct TConstSetBitIterator_014f04e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014f04e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014f04e0& operator++();
};

TConstSetBitIterator_014f04e0::TConstSetBitIterator_014f04e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014f04e0
TConstSetBitIterator_014f04e0& TConstSetBitIterator_014f04e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014f05e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014f05e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014f05e0& operator++();
};

TConstSetBitIterator_014f05e0::TConstSetBitIterator_014f05e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014f05e0
TConstSetBitIterator_014f05e0& TConstSetBitIterator_014f05e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014f0690 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014f0690(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014f0690& operator++();
};

TConstSetBitIterator_014f0690::TConstSetBitIterator_014f0690(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014f0690
TConstSetBitIterator_014f0690& TConstSetBitIterator_014f0690::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x014f0a10
void sub_014f0a10(void) {  }

struct A_014f0a20 { virtual void sub_014f0a90(); char pad[332]; };

struct B_014f0a20 { virtual void sub_014f0a90(); };

struct C_014f0a20 : A_014f0a20, B_014f0a20 { virtual void sub_014f0a90(); C_014f0a20(); };

C_014f0a20::C_014f0a20() {}

// @baa 0x014f0a20
void C_014f0a20::sub_014f0a90() {}

struct C_014f0a90 {
    undefined4 sub_014f0a90(byte);
};

int sub_014f0a30(void);
// @baa 0x014f0a90
undefined4 C_014f0a90::sub_014f0a90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014f0a30();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_014f4030 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014f4030(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014f4030& operator++();
};

TConstSetBitIterator_014f4030::TConstSetBitIterator_014f4030(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014f4030
TConstSetBitIterator_014f4030& TConstSetBitIterator_014f4030::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014f4250 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014f4250(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014f4250& operator++();
};

TConstSetBitIterator_014f4250::TConstSetBitIterator_014f4250(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014f4250
TConstSetBitIterator_014f4250& TConstSetBitIterator_014f4250::operator++()
{
    It.Advance();
    return *this;
}

struct C_014f6410 {
    int sub_014f6410();
};

int sub_014f0630(void);
// @baa 0x014f6410
int C_014f6410::sub_014f6410(void)
{
    int param_1 = (int)this;

  sub_014f0630();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_014f8a10 {
    int sub_014f8a10();
};

// @baa 0x014f8a10
int C_014f8a10::sub_014f8a10(void)
{
    int param_1 = (int)this;

  sub_014f0630();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_014f6620();
// @baa 0x014f8a30
void sub_014f8a30(void) { sub_014f6620(); }
