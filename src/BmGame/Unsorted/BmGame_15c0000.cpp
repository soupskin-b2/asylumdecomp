// BmGame_15c0000.cpp (part 1 of 3): 43 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_015c1e00();
};

// @baa 0x015c1e00
undefined4 C::sub_015c1e00(void)
{
    int param_1 = (int)this;
  if ((*(float *)(param_1 + 0x59c) <= *(float *)(param_1 + 0x5b4)) &&
     (*(float *)(param_1 + 0x5b4) < 1.0)) {
    return 1;
  }
  return 0;
}

struct C_015c1e30 {
    undefined4 sub_015c1e30();
};

// @baa 0x015c1e30
undefined4 C_015c1e30::sub_015c1e30(void)
{
    int param_1 = (int)this;
  if ((*(float *)(param_1 + 0x5a0) <= *(float *)(param_1 + 0x5b4)) &&
     (*(float *)(param_1 + 0x5b4) < 1.0)) {
    return 1;
  }
  return 0;
}

// @baa 0x015c3500
void sub_015c3500(void) {  }

struct C_015c3580 { int sub_015c3580(void); };

// @baa 0x015c3580
int C_015c3580::sub_015c3580(void) { return *(int*)((char*)this + 4); }

struct C_015c35e0 { C_015c35e0* sub_015c35e0(void); };

// @baa 0x015c35e0
C_015c35e0* C_015c35e0::sub_015c35e0(void) { *(int*)((char*)this + 128) = 0; return this; }

struct C_015c36b0 {
    int * sub_015c36b0(int);
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x015c36b0
int * C_015c36b0::sub_015c36b0(int param_2)
{
    int * param_1 = (int *)this;

  *param_1 = param_2;
  param_1[1] = -1;
  if (param_2 == 0) {
    sub_006311e0("Sequence","BmGame/Inc\\RAnimUtil_Notify.h",0x4e,&g_01e3f3dc);
  }
  return param_1;
}

struct C_015c36f0 { C_015c36f0* sub_015c36f0(int a0); };

// @baa 0x015c36f0
C_015c36f0* C_015c36f0::sub_015c36f0(int a0) { return this; }

struct C_015c3700 { int sub_015c3700(void); };

// @baa 0x015c3700
int C_015c3700::sub_015c3700(void) { return *(int*)((char*)this + 0); }

struct T_015c3710 { BYTE b[44]; };

// @baa 0x015c3710
template T_015c3710& TArray<T_015c3710>::Last(INT);

struct C_015c3770 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_015c3770(INT Index);
};

// @baa 0x015c3770
UBOOL C_015c3770::sub_015c3770(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_015c3790 { int sub_015c3790(void); };

// @baa 0x015c3790
int C_015c3790::sub_015c3790(void) { return *(int*)((char*)this + 0); }

// @baa 0x015c3810
void sub_015c3810(int param_1, undefined4 * param_2)
{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  if (uVar2 < 8) {
    *(undefined4 *)(param_1 + uVar2 * 0xc) = *param_2;
    iVar1 = param_1 + uVar2 * 0xc;
    *(undefined4 *)(iVar1 + 4) = param_2[1];
    *(undefined4 *)(iVar1 + 8) = param_2[2];
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  }
  return;
}

// @baa 0x015c3c10
void sub_015c3c10(int param_1, undefined4 * param_2)
{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  if (uVar1 < 0x10) {
    *(undefined4 *)(param_1 + uVar1 * 8) = *param_2;
    *(undefined4 *)(param_1 + 4 + uVar1 * 8) = param_2[1];
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  }
  return;
}

struct FBlendState_ {
    FLOAT Alpha;
    FLOAT Start;
    UBOOL bFlag;
    FBlendState_() {}
    FBlendState_(FLOAT InAlpha, FLOAT InStart, UBOOL InFlag) : Alpha(InAlpha), Start(InStart), bFlag(InFlag) {}
};

// @baa 0x015c3cd0
FBlendState_ sub_015c3cd0(FLOAT Start, FLOAT Elapsed, FLOAT Duration)
{
    if (Duration < 1.e-4)
    {
        return FBlendState_(Start, Start, 0);
    }
    FLOAT Value = Elapsed / Duration + Start;
    if (Value >= 1.f)
    {
        Value = 1.f;
    }
    return FBlendState_(Value, Start, 0);
}

struct C_015c6170 {
    undefined4 * sub_015c6170(undefined4 *);
};

int __stdcall sub_0094a720(int, int, int, int, int);
int sub_015c12a0(...);
// @baa 0x015c6170
undefined4 * C_015c6170::sub_015c6170(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  sub_0094a720((int)(param_1 + 1), (int)(param_2 + 1), 0x40, 6, (int)(sub_015c12a0));
  return param_1;
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
	FFaceFXElement* sub_015ca250(INT Index);
};

// @baa 0x015ca250
FFaceFXElement* UFxRenderWidget::sub_015ca250(INT Index)
{
	return &BoneArray(Index);
}

struct C_015ca2a0 { void sub_015c3710(int); void sub_015ca2a0(); };

// @baa 0x015ca2a0
void C_015ca2a0::sub_015ca2a0() { sub_015c3710(0); }

struct C_015ca2b0 {
    int sub_015ca2b0(int);
};

// @baa 0x015ca2b0
int C_015ca2b0::sub_015ca2b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x015ca2c0
void __stdcall sub_015ca2c0(int a0, int a1) {  }

int sub_015bf9a0(void);
int sub_015c51e0(...);
extern undefined4 g_026e15bc;
// @baa 0x015ca330
int sub_015ca330(void)
{
  if (g_026e15bc == 0) {
    g_026e15bc = sub_015c51e0(L"BmGame");
    sub_015bf9a0();
  }
  return g_026e15bc;
}

int sub_015bfc60(void);
int sub_015c5360(...);
extern undefined4 g_026e15c4;
// @baa 0x015ca360
int sub_015ca360(void)
{
  if (g_026e15c4 == 0) {
    g_026e15c4 = sub_015c5360(L"BmGame");
    sub_015bfc60();
  }
  return g_026e15c4;
}

int sub_015bfdc0(void);
int sub_015c5420(...);
extern undefined4 g_026e15c8;
// @baa 0x015ca390
int sub_015ca390(void)
{
  if (g_026e15c8 == 0) {
    g_026e15c8 = sub_015c5420(L"BmGame");
    sub_015bfdc0();
  }
  return g_026e15c8;
}

int sub_015bff20(void);
int sub_015c54e0(...);
extern undefined4 g_026e15cc;
// @baa 0x015ca3c0
int sub_015ca3c0(void)
{
  if (g_026e15cc == 0) {
    g_026e15cc = sub_015c54e0(L"BmGame");
    sub_015bff20();
  }
  return g_026e15cc;
}

int sub_015c01e0(void);
int sub_015c5660(...);
extern undefined4 g_026e15d4;
// @baa 0x015ca3f0
int sub_015ca3f0(void)
{
  if (g_026e15d4 == 0) {
    g_026e15d4 = sub_015c5660(L"BmGame");
    sub_015c01e0();
  }
  return g_026e15d4;
}

int sub_015c0080(void);
int sub_015c55a0(...);
extern undefined4 g_026e15d0;
// @baa 0x015ca420
int sub_015ca420(void)
{
  if (g_026e15d0 == 0) {
    g_026e15d0 = sub_015c55a0(L"BmGame");
    sub_015c0080();
  }
  return g_026e15d0;
}

int sub_015c0340(void);
int sub_015c5720(...);
extern undefined4 g_026e15d8;
// @baa 0x015ca450
int sub_015ca450(void)
{
  if (g_026e15d8 == 0) {
    g_026e15d8 = sub_015c5720(L"BmGame");
    sub_015c0340();
  }
  return g_026e15d8;
}

int sub_015c04d0(void);
int sub_015c5a20(...);
extern undefined4 g_026e15e8;
// @baa 0x015ca480
int sub_015ca480(void)
{
  if (g_026e15e8 == 0) {
    g_026e15e8 = sub_015c5a20(L"BmGame");
    sub_015c04d0();
  }
  return g_026e15e8;
}

int sub_015c0630(void);
int sub_015c5ae0(...);
extern undefined4 g_026e15ec;
// @baa 0x015ca4b0
int sub_015ca4b0(void)
{
  if (g_026e15ec == 0) {
    g_026e15ec = sub_015c5ae0(L"BmGame");
    sub_015c0630();
  }
  return g_026e15ec;
}

int sub_015c07b0(void);
int sub_015c5d20(...);
extern undefined4 g_026e15f8;
// @baa 0x015ca4e0
int sub_015ca4e0(void)
{
  if (g_026e15f8 == 0) {
    g_026e15f8 = sub_015c5d20(L"BmGame");
    sub_015c07b0();
  }
  return g_026e15f8;
}

int sub_015c0a70(void);
int sub_015c5de0(...);
extern undefined4 g_026e1600;
// @baa 0x015ca5e0
int sub_015ca5e0(void)
{
  if (g_026e1600 == 0) {
    g_026e1600 = sub_015c5de0(L"BmGame");
    sub_015c0a70();
  }
  return g_026e1600;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_015ce730 { void* Data; int Num; int Max; void sub_015ce730(); };

// @baa 0x015ce730
void C_015ce730::sub_015ce730() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_015cf940(...);
// @baa 0x015cf9e0
void sub_015cf9e0(undefined4 param_1, undefined4 param_2)
{
  sub_015cf940(param_1,param_2,0);
  return;
}

// @baa 0x015cfa00
void sub_015cfa00(undefined4 param_1, undefined4 param_2)
{
  sub_015cf940(param_1,param_2,1);
  return;
}

struct C_015c3590
{
    INT First;
    INT Second;

    C_015c3590* sub_015c3590(INT Value);
};

// @baa 0x015c3590
C_015c3590* C_015c3590::sub_015c3590(INT Value)
{
    First = Value;
    Second = Value;
    return this;
}

extern void __stdcall sub_015cbd40(INT A, INT Value);
// @baa 0x015cf930
void __stdcall sub_015cf930(INT A, INT* Value)
{
    sub_015cbd40(A, *Value);
}

// @baa 0x015c32f0
bool sub_015c32f0(BYTE* P)
{
    INT B = P[0xe4];
    return B == 1 || B == 3;
}

struct C_015c35a0
{
    FLOAT A, B;
    C_015c35a0* sub_015c35a0(FLOAT F);
};

// @baa 0x015c35a0
C_015c35a0* C_015c35a0::sub_015c35a0(FLOAT F)
{
    A = F;
    B = F;
    return this;
}

struct C_015ca2d0_Item
{
    INT Pad[15];
    INT Limit;
};

struct C_015ca2d0
{
    C_015ca2d0_Item* B;
    INT A;
    INT sub_015ca2d0();
};

// @baa 0x015ca2d0
INT C_015ca2d0::sub_015ca2d0()
{
    INT V = A;
    if (V < 0 || V >= B->Limit)
        return 0;
    return 1;
}

struct C_015c35c0
{
    FLOAT A, B;
    C_015c35c0* sub_015c35c0(FLOAT X, FLOAT Y);
};

// @baa 0x015c35c0
C_015c35c0* C_015c35c0::sub_015c35c0(FLOAT X, FLOAT Y)
{
    A = X;
    B = Y;
    return this;
}

struct C_015c2fd0_Inner
{
    BYTE Pad[0x18];
    DWORD F18;
};

struct C_015c2fd0
{
    void* P0;
    C_015c2fd0_Inner F4;
    DWORD sub_015c2fd0();
};

// @baa 0x015c2fd0
DWORD C_015c2fd0::sub_015c2fd0()
{
    if (P0 != NULL)
    {
        C_015c2fd0_Inner* Q = &F4;
        if (Q != NULL)
            return Q->F18 & 1;
    }
    return 0;
}

struct C_015c1de0
{
    BYTE Pad[0x598];
    FLOAT F598;
    BYTE Pad2[0x18];
    FLOAT F5b4;
    INT sub_015c1de0();
};

// @baa 0x015c1de0
INT C_015c1de0::sub_015c1de0()
{
    if (F598 > F5b4)
        return 1;
    return 0;
}

struct C_E44_1170
{
    FLOAT F;
    BYTE Pad[0x40];
};

struct C_015c1170
{
    INT N;
    BYTE Pad[0x18];
    C_E44_1170 Arr[1];
    void sub_015c1170();
};

// @baa 0x015c1170
void C_015c1170::sub_015c1170()
{
    for (INT i = 0; i < N; i++)
        Arr[i].F = 0.0f;
}

struct C_P2_5ea0b
{
    FLOAT sub_015982d0(FLOAT F);
    void sub_015980e0(FLOAT F);
};

// @baa 0x015c5ea0
void sub_015c5ea0(FLOAT* P1, C_P2_5ea0b* P2)
{
    FLOAT R1 = P2->sub_015982d0(*P1);
    P2->sub_015980e0(R1);
}
