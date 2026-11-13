// Engine_0660000.cpp (part 1 of 17): 158 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct E { BYTE Bytes[12]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00660020(INT Index);
};

// @baa 0x00660020
E* S::sub_00660020(INT Index)
{
    return &Items(Index);
}

struct C {
    int sub_00660070(int);
};

// @baa 0x00660070
int C::sub_00660070(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct S_00660080 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00660080(INT Index);
};

// @baa 0x00660080
QWORD* S_00660080::sub_00660080(INT Index)
{
    return &Items(Index);
}

struct E_006600d0 { BYTE Bytes[24]; };

struct S_006600d0 {
    TArray<E_006600d0> Items; // 0x00
    E_006600d0* sub_006600d0(INT Index);
};

// @baa 0x006600d0
E_006600d0* S_006600d0::sub_006600d0(INT Index)
{
    return &Items(Index);
}

struct C_00660120 {
    int sub_00660120(int);
};

// @baa 0x00660120
int C_00660120::sub_00660120(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct S_00660130 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00660130(INT Index);
};

// @baa 0x00660130
QWORD* S_00660130::sub_00660130(INT Index)
{
    return &Items(Index);
}

struct S_00660180 {
    TArray<E> Items; // 0x00
    E* sub_00660180(INT Index);
};

// @baa 0x00660180
E* S_00660180::sub_00660180(INT Index)
{
    return &Items(Index);
}

struct C_006601d0 {
    int sub_006601d0(int);
};

// @baa 0x006601d0
int C_006601d0::sub_006601d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x006629c0
void sub_006629c0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

extern char g_026b0f44[];
// @baa 0x00663340
int sub_00663340(void) { return (int)g_026b0f44; }

int sub_0053dfa0(...);
int sub_00656790(void);
// @baa 0x00663350
undefined4 ULensFlare::sub_00663350(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00630f20(...);
extern undefined4 g_026667a8;
// @baa 0x006634b0
FLOAT USurface::GetSurfaceWidth() {
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",L"USurface::GetSurfaceWidth");
  return (float10)0;
}

int sub_00627f70(...);
int sub_00654ca0(...);
int sub_00654d20(...);
int sub_00654da0(...);
// @baa 0x00663cb0
uint sub_00663cb0(undefined4 * param_1)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = sub_00654ca0(*param_1,0);
  uVar2 = sub_00654da0(param_1[1],0);
  uVar3 = sub_00654d20(param_1[2],0);
  uVar4 = sub_00627f70(param_1 + 3,0x10,0);
  return uVar4 ^ uVar3 ^ uVar2 ^ uVar1;
}

struct C_00663d00 {
    FString sub_00663d00();
};

// @baa 0x00663d00
FString C_00663d00::sub_00663d00()
{
    return TEXT("Decal vertex buffer");
}

extern char g_026b0dec[];
// @baa 0x00664af0
int sub_00664af0(void) { return (int)g_026b0dec; }

struct C_00664b00 {
    int sub_00664b00();
};

// @baa 0x00664b00
int C_00664b00::sub_00664b00(void)
{
    int param_1 = (int)this;

  return param_1 + -0x240;
}

struct A_00664b10 { virtual void sub_00664b50(); char pad[572]; };

struct B_00664b10 { virtual void sub_00664b50(); };

struct C_00664b10 : A_00664b10, B_00664b10 { virtual void sub_00664b50(); C_00664b10(); };

C_00664b10::C_00664b10() {}

// @baa 0x00664b10
void C_00664b10::sub_00664b50() {}

struct C_00665cd0 { void sub_00665cd0(void); };

// @baa 0x00665cd0
void C_00665cd0::sub_00665cd0(void) { *(int*)((char*)this + 4) = 0; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00665ce0 { void* Data; int Num; int Max; void sub_00665ce0(); };

// @baa 0x00665ce0
void C_00665ce0::sub_00665ce0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00665d40 { void* Data; int Num; int Max; void sub_00665d40(); };

// @baa 0x00665d40
void C_00665d40::sub_00665d40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00665da0 {
    void sub_00665da0();
};

// @baa 0x00665da0
void C_00665da0::sub_00665da0(void)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct C_00665de0 {
    uint sub_00665de0();
};

// @baa 0x00665de0
uint C_00665de0::sub_00665de0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x80) | -(uint)(*(uint *)(param_1 + 0x80) == 0) & param_1;
}

struct C_00665e00 { void* Data; int Num; int Max; void sub_00665e00(); };

// @baa 0x00665e00
void C_00665e00::sub_00665e00() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00665e60 {
    void sub_00665e60(int);
};

int sub_0053df70(...);
// @baa 0x00665e60
void C_00665e60::sub_00665e60(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00665ea0 { void* Data; int Num; int Max; void sub_00665ea0(); };

// @baa 0x00665ea0
void C_00665ea0::sub_00665ea0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00665f00 {
    undefined4 sub_00665f00();
};

// @baa 0x00665f00
undefined4 C_00665f00::sub_00665f00(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00665f10 { C_00665f10* sub_00665f10(void); };

// @baa 0x00665f10
C_00665f10* C_00665f10::sub_00665f10(void) { return this; }

struct C_00665f20 { void* Data; int Num; int Max; void sub_00665f20(); };

// @baa 0x00665f20
void C_00665f20::sub_00665f20() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00665f80 {
    void sub_00665f80(int);
};

// @baa 0x00665f80
void C_00665f80::sub_00665f80(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_006660f0 { void* Data; int Num; int Max; void sub_006660f0(); };

// @baa 0x006660f0
void C_006660f0::sub_006660f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00666150 { void* Data; int Num; int Max; void sub_00666150(); };

// @baa 0x00666150
void C_00666150::sub_00666150() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00666200 { C_00666200* sub_00666200(void); };

// @baa 0x00666200
C_00666200* C_00666200::sub_00666200(void) { return this; }

struct C_00666210 { C_00666210* sub_00666210(void); };

// @baa 0x00666210
C_00666210* C_00666210::sub_00666210(void) { return this; }

struct C_00666220 { void* Data; int Num; int Max; void sub_00666220(); };

// @baa 0x00666220
void C_00666220::sub_00666220() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00666360 {
    void sub_00666360(int);
};

// @baa 0x00666360
void C_00666360::sub_00666360(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_006664d0 { void* Data; int Num; int Max; void sub_006664d0(); };

// @baa 0x006664d0
void C_006664d0::sub_006664d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00666650 { void* Data; int Num; int Max; void sub_00666650(); };

// @baa 0x00666650
void C_00666650::sub_00666650() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006666b0 { void* Data; int Num; int Max; void sub_006666b0(); };

// @baa 0x006666b0
void C_006666b0::sub_006666b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00666710 { void* Data; int Num; int Max; void sub_00666710(); };

// @baa 0x00666710
void C_00666710::sub_00666710() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct S_00666840 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00666840(INT Index) const;
};

// @baa 0x00666840
const DWORD* S_00666840::sub_00666840(INT Index) const
{
    return &Items(Index);
}

struct C_006668f0 {
    void sub_006668f0(int);
};

// @baa 0x006668f0
void C_006668f0::sub_006668f0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x1c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00666930 { void* Data; int Num; int Max; void sub_00666930(); };

// @baa 0x00666930
void C_00666930::sub_00666930() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00666990 {
    int sub_00666990(int);
};

// @baa 0x00666990
int C_00666990::sub_00666990(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 4;
}

struct C_00666f10 { void* Data; int Num; int Max; void sub_00666f10(); };

// @baa 0x00666f10
void C_00666f10::sub_00666f10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00667230 {
    void sub_00667230(int);
};

// @baa 0x00667230
void C_00667230::sub_00667230(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

int sub_00662920(...);
// @baa 0x006672e0
void sub_006672e0(int param_1, int param_2)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (param_1 == 2) {
    puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 3;
    }
  }
  return;
}

// @baa 0x00667b20
void UObject::sub_00667b20(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0xc,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00667b60 {
    uint sub_00667b60();
};

// @baa 0x00667b60
uint C_00667b60::sub_00667b60(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x60) | -(uint)(*(uint *)(param_1 + 0x60) == 0) & param_1;
}

struct C_00667b80 {
    uint sub_00667b80();
};

// @baa 0x00667b80
uint C_00667b80::sub_00667b80(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x60) | -(uint)(*(uint *)(param_1 + 0x60) == 0) & param_1;
}

struct C_00667ba0 {
    uint sub_00667ba0();
};

// @baa 0x00667ba0
uint C_00667ba0::sub_00667ba0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x60) | -(uint)(*(uint *)(param_1 + 0x60) == 0) & param_1;
}

struct C_00667c30 {
    int sub_00667c30(int);
};

// @baa 0x00667c30
int C_00667c30::sub_00667c30(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x10 +
         (-(uint)(*(uint *)(param_1 + 0x60) == 0) & param_1 | *(uint *)(param_1 + 0x60));
}

struct C_00667c50 {
    uint sub_00667c50();
};

// @baa 0x00667c50
uint C_00667c50::sub_00667c50(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x80) | -(uint)(*(uint *)(param_1 + 0x80) == 0) & param_1;
}

struct C_00667cd0 {
    int sub_00667cd0(int);
};

// @baa 0x00667cd0
int C_00667cd0::sub_00667cd0(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x10 +
         (-(uint)(*(uint *)(param_1 + 0x80) == 0) & param_1 | *(uint *)(param_1 + 0x80));
}

// @baa 0x00667cf0
void __stdcall sub_00667cf0(int a0, int a1) {  }

// @baa 0x00667d00
void __stdcall sub_00667d00(int a0, int a1) {  }

// @baa 0x00667d10
void __stdcall sub_00667d10(int a0, int a1) {  }

struct C_00667d20 {
    uint sub_00667d20();
};

// @baa 0x00667d20
uint C_00667d20::sub_00667d20(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0xc0) | -(uint)(*(uint *)(param_1 + 0xc0) == 0) & param_1;
}

struct C_00667d40 {
    uint sub_00667d40();
};

// @baa 0x00667d40
uint C_00667d40::sub_00667d40(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0xc0) | -(uint)(*(uint *)(param_1 + 0xc0) == 0) & param_1;
}

struct C_00667d60 {
    int sub_00667d60(int);
};

// @baa 0x00667d60
int C_00667d60::sub_00667d60(int param_2)
{
    uint param_1 = (uint)this;
  return (-(uint)(*(uint *)(param_1 + 0xc0) == 0) & param_1 | *(uint *)(param_1 + 0xc0)) +
         param_2 * 0xc;
}

// @baa 0x00667d80
void __stdcall sub_00667d80(int param1, int param2)
{
}

// @baa 0x00667d90
void __stdcall sub_00667d90(int a0, int a1) {  }

// @baa 0x00667da0
void __stdcall sub_00667da0(int a0, int a1) {  }

// @baa 0x00667db0
void __stdcall sub_00667db0(int a0, int a1) {  }

// @baa 0x00667dc0
void __stdcall sub_00667dc0(int a0, int a1) {  }

// @baa 0x00667dd0
void __stdcall sub_00667dd0(int a0, int a1) {  }

// @baa 0x00667de0
void __stdcall sub_00667de0(int a0, int a1) {  }

// @baa 0x00667df0
void __stdcall sub_00667df0(int a0, int a1) {  }

// @baa 0x00667e00
void __stdcall sub_00667e00(int a0, int a1) {  }

// @baa 0x00667e10
void __stdcall sub_00667e10(int a0, int a1) {  }

// @baa 0x00667e20
void __stdcall sub_00667e20(int a0, int a1) {  }

// @baa 0x00667ff0
void __stdcall sub_00667ff0(int a0, int a1) {  }

// @baa 0x00668000
void UObject::sub_00668000(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x24,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00668040
void UObject::sub_00668040(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x28,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00668080
void __stdcall sub_00668080(int a0, int a1) {  }

// @baa 0x00668090
void __stdcall sub_00668090(int a0, int a1) {  }

// @baa 0x006680a0
void __stdcall sub_006680a0(int a0, int a1) {  }

// @baa 0x00668120
void __stdcall sub_00668120(int a0, int a1) {  }

struct C_00668130 {
    uint sub_00668130();
};

// @baa 0x00668130
uint C_00668130::sub_00668130(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x10) | -(uint)(*(uint *)(param_1 + 0x10) == 0) & param_1;
}

// @baa 0x00668150
void __stdcall sub_00668150(int a0, int a1) {  }

// @baa 0x00668160
void __stdcall sub_00668160(int a0, int a1) {  }

// @baa 0x00668170
void __stdcall sub_00668170(int a0, int a1) {  }

// @baa 0x00668180
void __stdcall sub_00668180(int a0, int a1) {  }

// @baa 0x006682b0
int sub_006682b0(void) { return 0; }

void sub_007249d0();
// @baa 0x006682c0
void sub_006682c0(void) { sub_007249d0(); }

struct A_006682d0 { virtual void sub_00668330(); char pad[16]; };

struct B_006682d0 { virtual void sub_00668330(); };

struct C_006682d0 : A_006682d0, B_006682d0 { virtual void sub_00668330(); C_006682d0(); };

C_006682d0::C_006682d0() {}

// @baa 0x006682d0
void C_006682d0::sub_00668330() {}

struct C_view {
    int sub_0065e120(int);
};

int sub_00716170(...);
// @baa 0x006682e0
undefined4 UTexture2D::sub_006682e0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0065e120(param_2);
  sub_00716170(param_2,param_1 + 200);
  sub_00716170(param_2,param_1 + 0xce);
  sub_00716170(param_2,param_1 + 0xd4);
  sub_00716170(param_2,param_1 + 0xda);
  return uVar1;
}

// @baa 0x00668420
int sub_00668420(void) { return 0; }

struct A_00668440 { virtual void sub_006684a0(); char pad[16]; };

struct B_00668440 { virtual void sub_006684a0(); };

struct C_00668440 : A_00668440, B_00668440 { virtual void sub_006684a0(); C_00668440(); };

C_00668440::C_00668440() {}

// @baa 0x00668440
void C_00668440::sub_006684a0() {}

struct C_view_00668450 {
    int sub_0065e370(int);
};

// @baa 0x00668450
undefined4 UTexture2D::sub_00668450(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view_00668450 *)(this))->sub_0065e370(param_2);
  sub_00716170(param_2,param_1 + 200);
  sub_00716170(param_2,param_1 + 0xce);
  sub_00716170(param_2,param_1 + 0xd4);
  sub_00716170(param_2,param_1 + 0xda);
  return uVar1;
}

// @baa 0x00668590
int sub_00668590(void) { return 0; }

struct A_006685b0 { virtual void sub_00668610(); char pad[16]; };

struct B_006685b0 { virtual void sub_00668610(); };

struct C_006685b0 : A_006685b0, B_006685b0 { virtual void sub_00668610(); C_006685b0(); };

C_006685b0::C_006685b0() {}

// @baa 0x006685b0
void C_006685b0::sub_00668610() {}

struct C_006685c0 {
    undefined4 sub_006685c0(undefined4);
    int sub_0065e550(int);
};

// @baa 0x006685c0
undefined4 C_006685c0::sub_006685c0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_006685c0 *)(this))->sub_0065e550(param_2);
  sub_00716170(param_2,param_1 + 0x128);
  sub_00716170(param_2,param_1 + 0x12e);
  sub_00716170(param_2,param_1 + 0x134);
  sub_00716170(param_2,param_1 + 0x13a);
  return uVar1;
}

// @baa 0x00668700
int sub_00668700(void) { return 0; }

struct A_00668720 { virtual void sub_00668780(); char pad[16]; };

struct B_00668720 { virtual void sub_00668780(); };

struct C_00668720 : A_00668720, B_00668720 { virtual void sub_00668780(); C_00668720(); };

C_00668720::C_00668720() {}

// @baa 0x00668720
void C_00668720::sub_00668780() {}

struct C_00668730 {
    undefined4 sub_00668730(undefined4);
    int sub_0065e730(int);
};

// @baa 0x00668730
undefined4 C_00668730::sub_00668730(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_00668730 *)(this))->sub_0065e730(param_2);
  sub_00716170(param_2,param_1 + 0x128);
  sub_00716170(param_2,param_1 + 0x12e);
  sub_00716170(param_2,param_1 + 0x134);
  sub_00716170(param_2,param_1 + 0x13a);
  return uVar1;
}

// @baa 0x00668870
int sub_00668870(void) { return 0; }

struct A_00668890 { virtual void sub_006688f0(); char pad[16]; };

struct B_00668890 { virtual void sub_006688f0(); };

struct C_00668890 : A_00668890, B_00668890 { virtual void sub_006688f0(); C_00668890(); };

C_00668890::C_00668890() {}

// @baa 0x00668890
void C_00668890::sub_006688f0() {}

struct C_006688a0 {
    undefined4 sub_006688a0(undefined4);
    int sub_0065e910(int);
};

// @baa 0x006688a0
undefined4 C_006688a0::sub_006688a0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_006688a0 *)(this))->sub_0065e910(param_2);
  sub_00716170(param_2,param_1 + 0x128);
  sub_00716170(param_2,param_1 + 0x12e);
  sub_00716170(param_2,param_1 + 0x134);
  sub_00716170(param_2,param_1 + 0x13a);
  return uVar1;
}

struct C_00668910 {
    undefined4 * sub_00668910(undefined4);
    int sub_0065e9b0(int);
};

extern undefined4 g_01ebdb28;
extern undefined * g_01ebdb30;
// @baa 0x00668910
undefined4 * C_00668910::sub_00668910(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00668910 *)(this))->sub_0065e9b0(param_2);
  *param_1 = (undefined4)(&g_01ebdb30);
  param_1[5] = (undefined4)(&g_01ebdb28);
  return param_1;
}

struct A_00668930 { virtual void sub_00669690(); char pad[16]; };

struct B_00668930 { virtual void sub_00669690(); };

struct C_00668930 : A_00668930, B_00668930 { virtual void sub_00669690(); C_00668930(); };

C_00668930::C_00668930() {}

// @baa 0x00668930
void C_00668930::sub_00669690() {}

struct C_00668960 {
    undefined4 * sub_00668960(undefined4);
    int sub_0065eb60(int);
};

extern undefined4 g_01ebdb5c;
extern undefined * g_01ebdb64;
// @baa 0x00668960
undefined4 * C_00668960::sub_00668960(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00668960 *)(this))->sub_0065eb60(param_2);
  *param_1 = (undefined4)(&g_01ebdb64);
  param_1[5] = (undefined4)(&g_01ebdb5c);
  return param_1;
}

struct A_00668980 { virtual void sub_006696b0(); char pad[16]; };

struct B_00668980 { virtual void sub_006696b0(); };

struct C_00668980 : A_00668980, B_00668980 { virtual void sub_006696b0(); C_00668980(); };

C_00668980::C_00668980() {}

// @baa 0x00668980
void C_00668980::sub_006696b0() {}

struct C_006689b0 {
    undefined4 * sub_006689b0(undefined4);
    int sub_0065ec90(int);
};

extern undefined4 g_01ebdb90;
extern undefined * g_01ebdb98;
// @baa 0x006689b0
undefined4 * C_006689b0::sub_006689b0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_006689b0 *)(this))->sub_0065ec90(param_2);
  *param_1 = (undefined4)(&g_01ebdb98);
  param_1[5] = (undefined4)(&g_01ebdb90);
  return param_1;
}

struct A_006689d0 { virtual void sub_006696d0(); char pad[16]; };

struct B_006689d0 { virtual void sub_006696d0(); };

struct C_006689d0 : A_006689d0, B_006689d0 { virtual void sub_006696d0(); C_006689d0(); };

C_006689d0::C_006689d0() {}

// @baa 0x006689d0
void C_006689d0::sub_006696d0() {}

struct C_00668a00 {
    undefined4 * sub_00668a00(undefined4);
    int sub_0065edc0(int);
};

extern undefined4 g_01ebdbc4;
extern undefined * g_01ebdbcc;
// @baa 0x00668a00
undefined4 * C_00668a00::sub_00668a00(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00668a00 *)(this))->sub_0065edc0(param_2);
  *param_1 = (undefined4)(&g_01ebdbcc);
  param_1[5] = (undefined4)(&g_01ebdbc4);
  return param_1;
}

struct A_00668a20 { virtual void sub_006696f0(); char pad[16]; };

struct B_00668a20 { virtual void sub_006696f0(); };

struct C_00668a20 : A_00668a20, B_00668a20 { virtual void sub_006696f0(); C_00668a20(); };

C_00668a20::C_00668a20() {}

// @baa 0x00668a20
void C_00668a20::sub_006696f0() {}

struct C_00668a50 {
    undefined4 * sub_00668a50(undefined4);
    int sub_0065eef0(int);
};

extern undefined4 g_01ebdbf8;
extern undefined * g_01ebdc00;
// @baa 0x00668a50
undefined4 * C_00668a50::sub_00668a50(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00668a50 *)(this))->sub_0065eef0(param_2);
  *param_1 = (undefined4)(&g_01ebdc00);
  param_1[5] = (undefined4)(&g_01ebdbf8);
  return param_1;
}

struct A_00668a70 { virtual void sub_00669710(); char pad[16]; };

struct B_00668a70 { virtual void sub_00669710(); };

struct C_00668a70 : A_00668a70, B_00668a70 { virtual void sub_00669710(); C_00668a70(); };

C_00668a70::C_00668a70() {}

// @baa 0x00668a70
void C_00668a70::sub_00669710() {}

struct C_00668aa0 {
    undefined4 * sub_00668aa0(undefined4);
    int sub_0065f020(int);
};

extern undefined4 g_01ebdc2c;
extern undefined * g_01ebdc34;
// @baa 0x00668aa0
undefined4 * C_00668aa0::sub_00668aa0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00668aa0 *)(this))->sub_0065f020(param_2);
  *param_1 = (undefined4)(&g_01ebdc34);
  param_1[5] = (undefined4)(&g_01ebdc2c);
  return param_1;
}

struct A_00668ac0 { virtual void sub_00669730(); char pad[16]; };

struct B_00668ac0 { virtual void sub_00669730(); };

struct C_00668ac0 : A_00668ac0, B_00668ac0 { virtual void sub_00669730(); C_00668ac0(); };

C_00668ac0::C_00668ac0() {}

// @baa 0x00668ac0
void C_00668ac0::sub_00669730() {}

struct C_00668af0 {
    undefined4 * sub_00668af0(undefined4);
    int sub_0065f150(int);
};

extern undefined4 g_01ebdc60;
extern undefined * g_01ebdc68;
// @baa 0x00668af0
undefined4 * C_00668af0::sub_00668af0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00668af0 *)(this))->sub_0065f150(param_2);
  *param_1 = (undefined4)(&g_01ebdc68);
  param_1[5] = (undefined4)(&g_01ebdc60);
  return param_1;
}

struct A_00668b10 { virtual void sub_00669750(); char pad[16]; };

struct B_00668b10 { virtual void sub_00669750(); };

struct C_00668b10 : A_00668b10, B_00668b10 { virtual void sub_00669750(); C_00668b10(); };

C_00668b10::C_00668b10() {}

// @baa 0x00668b10
void C_00668b10::sub_00669750() {}

struct C_00668b40 {
    undefined4 * sub_00668b40(undefined4);
    int sub_0065f280(int);
};

extern undefined4 g_01ebdc94;
extern undefined * g_01ebdc9c;
// @baa 0x00668b40
undefined4 * C_00668b40::sub_00668b40(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00668b40 *)(this))->sub_0065f280(param_2);
  *param_1 = (undefined4)(&g_01ebdc9c);
  param_1[5] = (undefined4)(&g_01ebdc94);
  return param_1;
}

struct A_00668b60 { virtual void sub_00669770(); char pad[16]; };

struct B_00668b60 { virtual void sub_00669770(); };

struct C_00668b60 : A_00668b60, B_00668b60 { virtual void sub_00669770(); C_00668b60(); };

C_00668b60::C_00668b60() {}

// @baa 0x00668b60
void C_00668b60::sub_00669770() {}

struct C_00668b90 {
    undefined4 * sub_00668b90(undefined4);
    int sub_0065f3b0(int);
};

extern undefined4 g_01ebdcc8;
extern undefined * g_01ebdcd0;
// @baa 0x00668b90
undefined4 * C_00668b90::sub_00668b90(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00668b90 *)(this))->sub_0065f3b0(param_2);
  *param_1 = (undefined4)(&g_01ebdcd0);
  param_1[5] = (undefined4)(&g_01ebdcc8);
  return param_1;
}

struct A_00668bb0 { virtual void sub_00669790(); char pad[16]; };

struct B_00668bb0 { virtual void sub_00669790(); };

struct C_00668bb0 : A_00668bb0, B_00668bb0 { virtual void sub_00669790(); C_00668bb0(); };

C_00668bb0::C_00668bb0() {}

// @baa 0x00668bb0
void C_00668bb0::sub_00669790() {}

struct C_00668f20{
void sub_00668f20();
};

extern int*g_026b0d94;
// @baa 0x00668f20
void C_00668f20::sub_00668f20(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+600))((int)(iVar1));
}
return;
}

struct C_00668ff0{
void sub_00668ff0();
};

// @baa 0x00668ff0
void C_00668ff0::sub_00668ff0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x250))((int)(iVar1));
}
return;
}

struct C_006690c0{
void sub_006690c0();
};

// @baa 0x006690c0
void C_006690c0::sub_006690c0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x254))((int)(iVar1));
}
return;
}

struct C_00669190{
void sub_00669190();
};

// @baa 0x00669190
void C_00669190::sub_00669190(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(0x14+param_1)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00669260{
void sub_00669260();
};

// @baa 0x00669260
void C_00669260::sub_00669260(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(DWORD(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00669330{
void sub_00669330();
};

// @baa 0x00669330
void C_00669330::sub_00669330(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x254))((int)(iVar1));
}
return;
}

struct C_00669400{
void sub_00669400();
};

// @baa 0x00669400
void C_00669400::sub_00669400(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(int*)(0x14+param_1)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_006694d0{
void sub_006694d0();
};

// @baa 0x006694d0
void C_006694d0::sub_006694d0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_006695a0{
void sub_006695a0();
};

// @baa 0x006695a0
void C_006695a0::sub_006695a0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x250))((int)(iVar1));
}
return;
}

struct C_00669670{
void sub_00669670();
};

// @baa 0x00669670
void C_00669670::sub_00669670(void)
{
int param_1=(int)this;

DWORD iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x250))((int)(iVar1));
}
return;
}

struct C_00669880 {
    int sub_00669880(int);
};

// @baa 0x00669880
int C_00669880::sub_00669880(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00669a30 { void* Data; int Num; int Max; void sub_00669a30(); };

// @baa 0x00669a30
void C_00669a30::sub_00669a30() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00669a90
uint sub_00669a90(undefined4 * param_1)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = sub_00654ca0(*param_1,0);
  uVar2 = sub_00654da0(param_1[1],0);
  uVar3 = sub_00654d20(param_1[2],0);
  uVar4 = sub_00627f70(param_1 + 3,0x10,0);
  return uVar4 ^ uVar3 ^ uVar2 ^ uVar1;
}

struct C_00669ae0 {
    int sub_00669ae0(int);
};

// @baa 0x00669ae0
int C_00669ae0::sub_00669ae0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00669af0 {
    int sub_00669af0(int);
};

// @baa 0x00669af0
int C_00669af0::sub_00669af0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_00669b00 {
    uint sub_00669b00();
};

// @baa 0x00669b00
uint C_00669b00::sub_00669b00(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x34) | -(uint)(*(uint *)(param_1 + 0x34) == 0) & param_1;
}

struct C_00669b20 {
    uint sub_00669b20();
};

// @baa 0x00669b20
uint C_00669b20::sub_00669b20(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0xc0) | -(uint)(*(uint *)(param_1 + 0xc0) == 0) & param_1;
}

struct C_00669b40 {
    int sub_00669b40(int);
};

// @baa 0x00669b40
int C_00669b40::sub_00669b40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00669d60 {
    int sub_00669d60(int);
};

// @baa 0x00669d60
int C_00669d60::sub_00669d60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00669d70 {
    uint sub_00669d70();
};

// @baa 0x00669d70
uint C_00669d70::sub_00669d70(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x34) | -(uint)(*(uint *)(param_1 + 0x34) == 0) & param_1;
}

struct C_00669d90 {
    uint sub_00669d90();
};

// @baa 0x00669d90
uint C_00669d90::sub_00669d90(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0xc0) | -(uint)(*(uint *)(param_1 + 0xc0) == 0) & param_1;
}

struct S_00669db0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00669db0(INT Index);
};

// @baa 0x00669db0
DWORD* S_00669db0::sub_00669db0(INT Index)
{
    return &Items(Index);
}

// @baa 0x00669e00
void __stdcall sub_00669e00(int a0, int a1) {  }

struct C_00669e10 {
    int sub_00669e10();
};

// @baa 0x00669e10
int C_00669e10::sub_00669e10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00669e20 {
    int sub_00669e20();
};

// @baa 0x00669e20
int C_00669e20::sub_00669e20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_00669e30 {
    int sub_00669e30();
};

// @baa 0x00669e30
int C_00669e30::sub_00669e30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_00669e40 {
    int sub_00669e40();
};

// @baa 0x00669e40
int C_00669e40::sub_00669e40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00669e60 {
    int sub_00669e60();
};

// @baa 0x00669e60
int C_00669e60::sub_00669e60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_00669e70 {
    int sub_00669e70();
};

// @baa 0x00669e70
int C_00669e70::sub_00669e70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_00669e80 {
    uint sub_00669e80();
};

// @baa 0x00669e80
uint C_00669e80::sub_00669e80(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18) | -(uint)(*(uint *)(param_1 + 0x18) == 0) & param_1;
}

// @baa 0x00669ea0
void __stdcall sub_00669ea0(int a0, int a1) {  }

struct C_00669eb0 {
    int sub_00669eb0(int);
};

// @baa 0x00669eb0
int C_00669eb0::sub_00669eb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x00669ec0
void __stdcall sub_00669ec0(int a0, int a1) {  }

struct C_00669ed0 {
    int sub_00669ed0(int);
};

// @baa 0x00669ed0
int C_00669ed0::sub_00669ed0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x00669ee0
void __stdcall sub_00669ee0(int a0, int a1) {  }

struct C_00669ef0 {
    int sub_00669ef0(int);
};

// @baa 0x00669ef0
int C_00669ef0::sub_00669ef0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_00669f00 {
    int sub_00669f00();
};

// @baa 0x00669f00
int C_00669f00::sub_00669f00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00669f10 {
    int sub_00669f10();
};

// @baa 0x00669f10
int C_00669f10::sub_00669f10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_00669f20 {
    undefined4 sub_00669f20(byte);
};

int sub_006601e0(void);
// @baa 0x00669f20
undefined4 C_00669f20::sub_00669f20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006601e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00669f40 {
    undefined4 sub_00669f40(byte);
};

int sub_00660250(void);
// @baa 0x00669f40
undefined4 C_00669f40::sub_00669f40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00660250();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00669f60 {
    undefined4 sub_00669f60(byte);
};

int sub_006602c0(void);
// @baa 0x00669f60
undefined4 C_00669f60::sub_00669f60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006602c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00669f80 {
    uint sub_00669f80();
};

// @baa 0x00669f80
uint C_00669f80::sub_00669f80(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18) | -(uint)(*(uint *)(param_1 + 0x18) == 0) & param_1;
}
