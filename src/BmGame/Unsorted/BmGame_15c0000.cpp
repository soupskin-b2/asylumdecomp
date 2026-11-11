// BmGame_15c0000.cpp (part 1 of 3): 80 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x015c0030
int URAnimNotify_BeginRagdoll::vf_000(void) { return 1; }

// @baa 0x015c0040
bool URAnimNotify_BeginRagdoll::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015c0080
IMPLEMENT_CLASS_AT(URAnimNotify_CanCancelBeforeHere, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 21);

// @baa 0x015c0190
int URAnimNotify_CanCancelBeforeHere::vf_000(void) { return 1; }

// @baa 0x015c01a0
bool URAnimNotify_CanCancelBeforeHere::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015c01e0
IMPLEMENT_CLASS_AT(URAnimNotify_CanCancelAfterHere, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 22);

// @baa 0x015c02f0
int URAnimNotify_CanCancelAfterHere::vf_000(void) { return 1; }

// @baa 0x015c0300
bool URAnimNotify_CanCancelAfterHere::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015c0340
IMPLEMENT_CLASS_AT(URAnimNotify_CanCorrectAfterHere, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 23);

// @baa 0x015c0450
int URAnimNotify_CanCorrectAfterHere::vf_000(void) { return 1; }

// @baa 0x015c0460
bool URAnimNotify_CanCorrectAfterHere::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015c04a0
int URAnimNotify_Clip::vf_000(void) { return 1; }

// @baa 0x015c04b0
int URAnimNotify_ClipRootMotion::vf_000(void) { return 1; }

// @baa 0x015c04c0
int URAnimNotify_CollisionOptions::vf_000(void) { return 1; }

// @baa 0x015c04d0
IMPLEMENT_CLASS_AT(URAnimNotify_EndFixIK, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 27);

// @baa 0x015c05e0
int URAnimNotify_EndFixIK::vf_000(void) { return 1; }

// @baa 0x015c05f0
bool URAnimNotify_EndFixIK::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015c0630
IMPLEMENT_CLASS_AT(URAnimNotify_EndRagdoll, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 28);

// @baa 0x015c0740
int URAnimNotify_EndRagdoll::vf_000(void) { return 1; }

// @baa 0x015c0750
bool URAnimNotify_EndRagdoll::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015c0790
int URAnimNotify_FloorHeight::vf_000(void) { return 1; }

// @baa 0x015c07a0
int URAnimNotify_ForwardYaw::vf_000(void) { return 1; }

// @baa 0x015c07b0
IMPLEMENT_CLASS_AT(URAnimNotify_MeetingPoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 31);

// @baa 0x015c08c0
int URAnimNotify_MeetingPoint::vf_000(void) { return 1; }

// @baa 0x015c08d0
bool URAnimNotify_MeetingPoint::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015c0910
IMPLEMENT_CLASS_AT(URAnimNotify_SetFaceFXRegister, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 32);

// @baa 0x015c0a20
int URAnimNotify_SetFaceFXRegister::vf_000(void) { return 1; }

// @baa 0x015c0a30
bool URAnimNotify_SetFaceFXRegister::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015c0a70
IMPLEMENT_CLASS_AT(URAnimNotify_WeaponSwitch, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 33);

// @baa 0x015c0b80
int URAnimNotify_WeaponSwitch::vf_000(void) { return 1; }

// @baa 0x015c0b90
bool URAnimNotify_WeaponSwitch::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015c1670
IMPLEMENT_CLASS_AT(URAnimUtil_PhysicsOutput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_PhysicsOutput.cpp", 16);

// @baa 0x015c1780
int URAnimUtil_PhysicsOutput::vf_000(void) { return 1; }

// @baa 0x015c1790
bool URAnimUtil_PhysicsOutput::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

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

// @baa 0x015c3070
IMPLEMENT_CLASS_AT(URAnimUtil_RagdollPlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_RagdollPlayer.cpp", 14);

// @baa 0x015c3180
int URAnimUtil_RagdollPlayer::vf_000(void) { return 1; }

// @baa 0x015c3190
bool URAnimUtil_RagdollPlayer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
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

// @baa 0x015cb6b0
IMPLEMENT_CLASS_AT(URAnimNotify_Clip, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 24);

// @baa 0x015cb7c0
bool URAnimNotify_Clip::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015cb800
IMPLEMENT_CLASS_AT(URAnimNotify_ClipRootMotion, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 25);

// @baa 0x015cb910
bool URAnimNotify_ClipRootMotion::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015cb950
IMPLEMENT_CLASS_AT(URAnimNotify_CollisionOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 26);

// @baa 0x015cba60
bool URAnimNotify_CollisionOptions::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015cbaa0
IMPLEMENT_CLASS_AT(URAnimNotify_FloorHeight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 29);

// @baa 0x015cbbb0
bool URAnimNotify_FloorHeight::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015cbbf0
IMPLEMENT_CLASS_AT(URAnimNotify_ForwardYaw, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 30);

// @baa 0x015cbd00
bool URAnimNotify_ForwardYaw::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
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
