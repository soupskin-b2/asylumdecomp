// Editor_0830000.cpp (part 1 of 2): 48 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { char* sub_00831430(void); };

// @baa 0x00831430
char* C::sub_00831430(void) { return (char*)this + 32; }

struct C_008314c0 {
    undefined4 sub_008314c0();
};

// @baa 0x008314c0
undefined4 C_008314c0::sub_008314c0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x1c);
}

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_01f3ee90;
// @baa 0x008314d0
undefined4 * UUnrealEdEngine::sub_008314d0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(0);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_01f3ee90);
  return param_1;
}

// @baa 0x00831570
int sub_00831570(void) { return 3; }

void sub_00c38ac0();
// @baa 0x00831580
void sub_00831580(void) { sub_00c38ac0(); }

struct M_008316a0 { void sub_00b20de0(); };

struct C_008316a0 { char pad[148]; M_008316a0 m; void sub_008316a0(); };

// @baa 0x008316a0
void C_008316a0::sub_008316a0() { m.sub_00b20de0(); }

// @baa 0x008316b0
int sub_008316b0(void) { return 1690; }

struct C_008316c0 {
    int sub_008316c0();
};

// @baa 0x008316c0
int C_008316c0::sub_008316c0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x2c;
}

struct C_008316d0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_008316d0(INT Index);
};

// @baa 0x008316d0
UBOOL C_008316d0::sub_008316d0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_008316f0 { int sub_008316f0(void); };

// @baa 0x008316f0
int C_008316f0::sub_008316f0(void) { return *(int*)((char*)this + 4); }

struct C_00831700 { int sub_00831700(void); };

// @baa 0x00831700
int C_00831700::sub_00831700(void) { return *(int*)((char*)this + 4); }

struct C_00831710 { C_00831710* sub_00831710(void); };

// @baa 0x00831710
C_00831710* C_00831710::sub_00831710(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00831720 { int sub_00831720(void); };

// @baa 0x00831720
int C_00831720::sub_00831720(void) { return *(int*)((char*)this + 0); }

struct C_00831730 { int sub_00831730(void); };

// @baa 0x00831730
int C_00831730::sub_00831730(void) { return *(int*)((char*)this + 0); }

// @baa 0x00831760
void sub_00831760(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_00831810 {
    int sub_00831810();
};

// @baa 0x00831810
int C_00831810::sub_00831810(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0xf0) * 0xb + *(int *)(param_1 + 0x84)) * 4;
}

struct C_00831830 { int a, b, c; C_00831830(); };

// @baa 0x00831830
C_00831830::C_00831830() : a(0), b(0), c(0) {}

// @baa 0x00831840
int UTexture2DComposite::sub_00831840(void) { return *(int*)((char*)this + 0); }

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00831850(INT Index);
};

// @baa 0x00831850
DWORD* S::sub_00831850(INT Index)
{
    return &Items(Index);
}

// @baa 0x008318a0
int UTexture2DComposite::sub_008318a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x008318b0
void __stdcall sub_008318b0(int a0, int a1) {  }

// @baa 0x00831950
void sub_00831950(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

int sub_0053dfa0(...);
int sub_00831a50(void);
// @baa 0x00831d80
undefined4 UTexture2DComposite::sub_00831d80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00831a50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00834d10
IMPLEMENT_CLASS_AT(UMotionBlurEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMotionBlurEffect.cpp", 10);

// @baa 0x00834e20
int UMotionBlurEffect::vf_000(void) { return 1; }

// @baa 0x00834e30
bool UMotionBlurEffect::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00834e70
IMPLEMENT_CLASS_AT(UDOFBloomMotionBlurEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMotionBlurEffect.cpp", 11);

// @baa 0x00834f80
int UDOFBloomMotionBlurEffect::vf_000(void) { return 1; }

// @baa 0x00834f90
bool UDOFBloomMotionBlurEffect::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00834fd0 {
    undefined4 * sub_00834fd0(undefined4);
    int sub_00739650(int);
};

extern undefined4 g_01f43e14;
extern undefined * g_01f43e1c;
// @baa 0x00834fd0
undefined4 * C_00834fd0::sub_00834fd0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00834fd0 *)(this))->sub_00739650(param_2);
  *param_1 = (undefined4)(&g_01f43e1c);
  param_1[5] = (undefined4)(&g_01f43e14);
  return param_1;
}

// @baa 0x00834ff0
undefined4 sub_00834ff0(void)
{
  return 1;
}

// @baa 0x00835000
void sub_00835000(void) {  }

void sub_007249d0();
// @baa 0x00835010
void sub_00835010(void) { sub_007249d0(); }

struct C_view_00835160 {
    int sub_0073f030(int);
};

int sub_00716170(...);
int sub_007161b0(...);
int sub_00afa590(...);
// @baa 0x00835160
undefined4 UMorphWeightSequence::sub_00835160(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view_00835160 *)(this))->sub_0073f030(param_2);
  sub_00afa590(param_2,param_1 + 0x4c);
  sub_007161b0(param_2,param_1 + 0x6a);
  sub_00716170(param_2,param_1 + 0x70);
  sub_00716170(param_2,param_1 + 0x76);
  sub_00716170(param_2,param_1 + 0x7c);
  sub_00716170(param_2,param_1 + 0x82);
  sub_00716170(param_2,param_1 + 0x88);
  sub_00716170(param_2,param_1 + 0x8e);
  return uVar1;
}

// @baa 0x008351e0
int sub_008351e0(void) { return 1; }

// @baa 0x008351f0
void sub_008351f0(void) {  }

// @baa 0x00835200
void sub_00835200(void) { sub_007249d0(); }

struct C_view_00835210 {
    int sub_00835020(int);
};

extern undefined4 g_01f43e74;
extern undefined * g_01f43e7c;
// @baa 0x00835210
undefined4 * UMorphWeightSequence::sub_00835210(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00835210 *)(this))->sub_00835020(param_2);
  *param_1 = (undefined4)(&g_01f43e7c);
  param_1[5] = (undefined4)(&g_01f43e74);
  return param_1;
}

struct S_00835230 {
    void sub_007249d0();
    void sub_00835230();
};

// @baa 0x00835230
void S_00835230::sub_00835230() {
    sub_007249d0();
}

// @baa 0x008352f0
int sub_008352f0(void) { return 1; }

// @baa 0x00835300
int sub_00835300(void) { return 1; }

// @baa 0x00835340
int __stdcall sub_00835340(int a0) { return 1; }

extern char g_01ebbe1c[];
struct C_00835350 { void sub_00835350(void); };

// @baa 0x00835350
void C_00835350::sub_00835350(void) { *(int*)((char*)this + 0) = (int)g_01ebbe1c; }

struct E { BYTE Bytes[48]; };

struct S_0083c910 {
    TArray<E> Items; // 0x00
    const E* sub_0083c910(INT Index) const;
};

// @baa 0x0083c910
const E* S_0083c910::sub_0083c910(INT Index) const
{
    return &Items(Index);
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
	FFaceFXElement* sub_0083c9c0(INT Index);
};

// @baa 0x0083c9c0
FFaceFXElement* UFxRenderWidget::sub_0083c9c0(INT Index)
{
	return &BoneArray(Index);
}

struct E_0083ca90 { BYTE Bytes[16]; };

struct S_0083ca90 {
    TArray<E_0083ca90> Items; // 0x00
    E_0083ca90* sub_0083ca90(INT Index);
};

// @baa 0x0083ca90
E_0083ca90* S_0083ca90::sub_0083ca90(INT Index)
{
    return &Items(Index);
}

struct S_0083cae0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0083cae0(INT Index);
};

// @baa 0x0083cae0
DWORD* S_0083cae0::sub_0083cae0(INT Index)
{
    return &Items(Index);
}

struct E_0083cb30 { BYTE Bytes[24]; };

struct S_0083cb30 {
    TArray<E_0083cb30> Items; // 0x00
    E_0083cb30* sub_0083cb30(INT Index);
};

// @baa 0x0083cb30
E_0083cb30* S_0083cb30::sub_0083cb30(INT Index)
{
    return &Items(Index);
}
