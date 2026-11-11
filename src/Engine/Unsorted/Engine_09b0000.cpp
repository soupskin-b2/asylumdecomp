// Engine_09b0000.cpp: 42 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { int sub_009b0030(void); };

// @baa 0x009b0030
int C::sub_009b0030(void) { return *(int*)((char*)this + 12); }

struct C_009b0040 {
    void sub_009b0040();
};

// @baa 0x009b0040
void C_009b0040::sub_009b0040(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}

extern int g_01f99c9c;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_009b0060(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x009b0060
FDecalValue* FDecalValue::sub_009b0060(int* Src)
{
    Value = (int)&g_01f99c9c;
    Unk04 = *Src;
    return this;
}

extern char g_01f91878[];
// @baa 0x009b0080
int sub_009b0080(void) { return (int)g_01f91878; }

extern char g_01ebb554[];
struct C_009b0090 { void sub_009b0090(void); };

// @baa 0x009b0090
void C_009b0090::sub_009b0090(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_009b00a0 {
    undefined4 * sub_009b00a0(byte);
};

int sub_0053dfa0(...);
// @baa 0x009b00a0
undefined4 * C_009b00a0::sub_009b00a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x009b0150
void sub_009b0150(void) {  }

struct C_009b0160 { int sub_009b0160(void); };

// @baa 0x009b0160
int C_009b0160::sub_009b0160(void) { return *(int*)((char*)this + 116); }

struct C_009b0340 {
    undefined4 sub_009b0340();
};

// @baa 0x009b0340
undefined4 C_009b0340::sub_009b0340(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffffd;
  return 1;
}

extern char g_01f92cdc[];
// @baa 0x009b0390
int sub_009b0390(void) { return (int)g_01f92cdc; }

struct C_009b03a0 { void sub_009b03a0(void); };

// @baa 0x009b03a0
void C_009b03a0::sub_009b03a0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_009b03b0 {
    undefined4 * sub_009b03b0(byte);
};

// @baa 0x009b03b0
undefined4 * C_009b03b0::sub_009b03b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x009b03d0
void sub_009b03d0(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x009b03f0
void sub_009b03f0(S* p, INT Value)
{
    p->vf_18(Value);
}

extern undefined4 g_026b6300;
// @baa 0x009b2c80
undefined4 sub_009b2c80(void)
{
  return g_026b6300;
}

int sub_00630f20(...);
extern undefined4 g_026667a8;
// @baa 0x009b4760
undefined4 sub_009b4760(void)
{
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",
               L"FNetworkNotify::NotifyAcceptedConnection");
  return 2;
}

struct FNetworkNotify {
    undefined4 NotifyGetWorld();
};

// @baa 0x009b47c0
undefined4 FNetworkNotify::NotifyGetWorld()
{
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",L"FNetworkNotify::NotifyGetWorld");
  return 0;
}

int sub_00656490(void);
// @baa 0x009b4b60
undefined4 ULensFlare::sub_009b4b60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00656520(void);
// @baa 0x009b4b80
undefined4 UTexture2DComposite::sub_009b4b80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656520();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009b57b0 {
    undefined4 sub_009b57b0();
    int sub_006b7c00(int);
};

// @baa 0x009b57b0
undefined4 C_009b57b0::sub_009b57b0(void)
{
    int param_1 = (int)this;
  if ((*(byte *)(param_1 + 0xe0) & 2) == 0) {
    ((C_009b57b0 *)(((char *)this + 0x94)))->sub_006b7c00(1);
  }
  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 2;
  return 1;
}

struct C_009b6530 {
    void sub_009b6530(int);
};

int sub_0053df70(...);
// @baa 0x009b6530
void C_009b6530::sub_009b6530(int param_2)
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

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_009b6650 { void* Data; int Num; int Max; void sub_009b6650(); };

// @baa 0x009b6650
void C_009b6650::sub_009b6650() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009b66b0 { void* Data; int Num; int Max; void sub_009b66b0(); };

// @baa 0x009b66b0
void C_009b66b0::sub_009b66b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009b6710 {
    void sub_009b6710(int);
};

// @baa 0x009b6710
void C_009b6710::sub_009b6710(int param_2)
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

// @baa 0x009b6db0
void __stdcall sub_009b6db0(int a0, int a1) {  }

struct C_009b6dc0 {
    void sub_009b6dc0(int);
};

// @baa 0x009b6dc0
void C_009b6dc0::sub_009b6dc0(int param_2)
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

struct C_009b6e00 {
    void sub_009b6e00(int);
};

// @baa 0x009b6e00
void C_009b6e00::sub_009b6e00(int param_2)
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

// @baa 0x009b6e40
void __stdcall sub_009b6e40(int a0, int a1) {  }

// @baa 0x009b73d0
int UState::sub_009b73d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x009b74d0
int UState::sub_009b74d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_009b75d0 {
    int sub_009b75d0(int);
};

// @baa 0x009b75d0
int C_009b75d0::sub_009b75d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_009b7630 {
    int sub_009b7630(int);
};

// @baa 0x009b7630
int C_009b7630::sub_009b7630(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_009b7640 {
    int sub_009b7640();
};

// @baa 0x009b7640
int C_009b7640::sub_009b7640(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_009b7650 {
    int sub_009b7650();
};

// @baa 0x009b7650
int C_009b7650::sub_009b7650(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_009b7660 {
    int sub_009b7660();
};

// @baa 0x009b7660
int C_009b7660::sub_009b7660(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_009b7670 {
    int sub_009b7670();
};

// @baa 0x009b7670
int C_009b7670::sub_009b7670(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_009b7680 {
    int sub_009b7680();
};

// @baa 0x009b7680
int C_009b7680::sub_009b7680(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_009bad70 {
    undefined4 sub_009bad70(byte);
};

int sub_009bad00(void);
// @baa 0x009bad70
undefined4 C_009bad70::sub_009bad70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_009bad00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_009bbc80 { int a, b, c; C_009bbc80(); };

// @baa 0x009bbc80
C_009bbc80::C_009bbc80() : a(0), b(0), c(0) {}

struct C_009bbc90 { void sub_007e0c40(int); C_009bbc90 *sub_009bbc90(int); };

// @baa 0x009bbc90
C_009bbc90 *C_009bbc90::sub_009bbc90(int a) { sub_007e0c40(a); return this; }

struct C_009bbcb0 { void* Data; int Num; int Max; void sub_009bbcb0(); };

// @baa 0x009bbcb0
void C_009bbcb0::sub_009bbcb0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009bbf10 { void* Data; int Num; int Max; void sub_009bbf10(); };

// @baa 0x009bbf10
void C_009bbf10::sub_009bbf10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}
