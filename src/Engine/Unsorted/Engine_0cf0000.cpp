// Engine_0cf0000.cpp: 102 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_00cf0020(int);
};

// @baa 0x00cf0020
int C::sub_00cf0020(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00cf0030 {
    int sub_00cf0030(int);
};

// @baa 0x00cf0030
int C_00cf0030::sub_00cf0030(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00cf0040 {
    int sub_00cf0040();
};

// @baa 0x00cf0040
int C_00cf0040::sub_00cf0040(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00cf0060 {
    int sub_00cf0060();
};

// @baa 0x00cf0060
int C_00cf0060::sub_00cf0060(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00cf0080 {
    int sub_00cf0080();
};

// @baa 0x00cf0080
int C_00cf0080::sub_00cf0080(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00cf00a0 {
    int sub_00cf00a0();
};

// @baa 0x00cf00a0
int C_00cf00a0::sub_00cf00a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x00cf0390
void sub_00cf0390(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  }
  return;
}

// @baa 0x00cf03b0
IMPLEMENT_CLASS_AT(UInterpTrack, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 33);

// @baa 0x00cf0430
INT UInterpTrack::GetNumKeyframes() { return 0; }

// @baa 0x00cf0460
FLOAT UInterpTrack::GetKeyframeTime(INT KeyIndex) { return 0.0f; }

// @baa 0x00cf0470
INT UInterpTrack::AddKeyframe(FLOAT a1, UInterpTrackInst* a2, BYTE a3) {
    return 0xFFFFFFFF;
}

// @baa 0x00cf0480
void UInterpTrack::UpdateKeyframe(INT a0, UInterpTrackInst* a1) {  }

// @baa 0x00cf0490
INT UInterpTrack::SetKeyframeTime(INT a, FLOAT b, UBOOL c) {
    return -1;
}

// @baa 0x00cf04a0
void UInterpTrack::RemoveKeyframe(INT a0) {  }

// @baa 0x00cf04b0
INT UInterpTrack::DuplicateKeyframe(INT a, FLOAT b) {
    return 0xffffffff;
}

// @baa 0x00cf04c0
UBOOL UInterpTrack::GetClosestSnapPosition(FLOAT a0, TArray<INT>& a1, FLOAT& a2) { return 0; }

// @baa 0x00cf04d0
void UInterpTrack::vf_138(FLOAT a0, UInterpTrackInst* a1) {  }

// @baa 0x00cf04e0
void UInterpTrack::vf_13c(FLOAT a0, UInterpTrackInst* a1, UBOOL a2) {  }

// @baa 0x00cf04f0
void UInterpTrack::vf_140(int a0) {  }

// @baa 0x00cf0500
int UInterpTrack::vf_14c(void) { return 0; }

// @baa 0x00cf0510
void UInterpTrack::vf_158(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x00cf0520
void UInterpTrack::vf_15c(void) {  }

// @baa 0x00cf0530
int UInterpGroupInstDirector::sub_00cf0530(void)
{
    int param_1 = (int)this;

  return param_1 + -0x34;
}

// @baa 0x00cf0540
struct C_00cf0590 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_00cf0590& sub_00cf0590(int Arg);
};

// @baa 0x00cf0590
C_00cf0590& C_00cf0590::sub_00cf0590(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

struct C_00cf0630 { C_00cf0630* sub_00cf0630(void); };

// @baa 0x00cf0630
C_00cf0630* C_00cf0630::sub_00cf0630(void) { return this; }

struct C_00cf06c0 { C_00cf06c0* sub_00cf06c0(void); };

// @baa 0x00cf06c0
C_00cf06c0* C_00cf06c0::sub_00cf06c0(void) { return this; }

// @baa 0x00cf1120
IMPLEMENT_CLASS_AT(UInterpFilter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 2209);

// @baa 0x00cf1190
int sub_005c7a20(void);
extern undefined * g_02098808;
// @baa 0x00cf11b0
undefined4 * UObject::sub_00cf11b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02098808);
  return param_1;
}

struct C_00cf11d0 { C_00cf11d0* sub_00cf11d0(void); };

// @baa 0x00cf11d0
C_00cf11d0* C_00cf11d0::sub_00cf11d0(void) { return this; }

// @baa 0x00cf12d0
IMPLEMENT_CLASS_AT(UInterpTrackInstProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 36);

// @baa 0x00cf13e0
bool UInterpTrackInstProperty::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf1420
IMPLEMENT_CLASS_AT(UInterpTrackInstMove, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 39);

// @baa 0x00cf1530
bool UInterpTrackInstMove::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf1570
IMPLEMENT_CLASS_AT(UInterpTrackInstToggle, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 42);

// @baa 0x00cf1680
bool UInterpTrackInstToggle::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf16c0
IMPLEMENT_CLASS_AT(UInterpTrackInstEvent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 57);

// @baa 0x00cf17d0
bool UInterpTrackInstEvent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf1810
IMPLEMENT_CLASS_AT(UInterpTrackInstDirector, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 60);

// @baa 0x00cf1920
bool UInterpTrackInstDirector::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf1960
IMPLEMENT_CLASS_AT(UInterpTrackInstFade, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 63);

// @baa 0x00cf1a70
bool UInterpTrackInstFade::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf1ab0
IMPLEMENT_CLASS_AT(UInterpTrackInstSlomo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 66);

// @baa 0x00cf1bc0
bool UInterpTrackInstSlomo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf1c00
IMPLEMENT_CLASS_AT(UInterpTrackInstAnimControl, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 69);

// @baa 0x00cf1d10
bool UInterpTrackInstAnimControl::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf1d50
IMPLEMENT_CLASS_AT(UInterpTrackInstSound, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 72);

// @baa 0x00cf1e60
bool UInterpTrackInstSound::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf1ea0
IMPLEMENT_CLASS_AT(UInterpTrackInstFloatParticleParam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 75);

// @baa 0x00cf1fb0
bool UInterpTrackInstFloatParticleParam::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf1ff0
IMPLEMENT_CLASS_AT(UInterpTrackInstFloatMaterialParam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 78);

// @baa 0x00cf2100
bool UInterpTrackInstFloatMaterialParam::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf2140
IMPLEMENT_CLASS_AT(UInterpTrackInstVectorMaterialParam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 81);

// @baa 0x00cf2250
bool UInterpTrackInstVectorMaterialParam::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf2290
IMPLEMENT_CLASS_AT(UInterpTrackInstColorScale, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 84);

// @baa 0x00cf23a0
bool UInterpTrackInstColorScale::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf23e0
IMPLEMENT_CLASS_AT(UInterpTrackInstFaceFX, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 87);

// @baa 0x00cf24f0
bool UInterpTrackInstFaceFX::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf2530
IMPLEMENT_CLASS_AT(UInterpTrackInstFaceFXRegister, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 91);

// @baa 0x00cf2640
bool UInterpTrackInstFaceFXRegister::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf2680
IMPLEMENT_CLASS_AT(UInterpTrackInstMorphWeight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 94);

// @baa 0x00cf2790
bool UInterpTrackInstMorphWeight::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf27d0
IMPLEMENT_CLASS_AT(UInterpTrackInstSkelControlScale, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 97);

// @baa 0x00cf28e0
bool UInterpTrackInstSkelControlScale::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf2920
IMPLEMENT_CLASS_AT(UInterpTrackInstSoundFade, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 101);

// @baa 0x00cf2a30
bool UInterpTrackInstSoundFade::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf2a70
IMPLEMENT_CLASS_AT(UInterpTrackInstAudioMaster, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 104);

// @baa 0x00cf2b80
bool UInterpTrackInstAudioMaster::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf2bc0
IMPLEMENT_CLASS_AT(UInterpTrackInstVisibility, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 107);

// @baa 0x00cf2cd0
bool UInterpTrackInstVisibility::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf2d10
IMPLEMENT_CLASS_AT(UInterpTrackInstParticleReplay, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 110);

// @baa 0x00cf2e20
bool UInterpTrackInstParticleReplay::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cf7540
FString UInterpTrackParticleReplay::vf_144()
{
    return TEXT("UnrealEd.InterpTrackParticleReplayHelper");
}

struct C_00cf8760 {
    void sub_00cf8760(int);
};

int sub_0053df70(...);
// @baa 0x00cf8760
void C_00cf8760::sub_00cf8760(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x18,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00cf87a0
void __stdcall sub_00cf87a0(int a0, int a1) {  }

int sub_0053dfa0(...);
int sub_00cf6650(void);
// @baa 0x00cf87b0
undefined4 UInterpTrackFaceFX::sub_00cf87b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00cf6650();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00cf87d0 { void sub_0040fcc0(); };

struct C_00cf87d0 { char pad[8]; M_00cf87d0 m; void sub_00cf87d0(); };

// @baa 0x00cf87d0
void C_00cf87d0::sub_00cf87d0() { m.sub_0040fcc0(); }

struct C_00cf8b50 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_00cf8b50& sub_00cf8b50(int Arg);
};

// @baa 0x00cf8b50
C_00cf8b50& C_00cf8b50::sub_00cf8b50(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

extern undefined * g_02098918;
// @baa 0x00cf8cf0
undefined4 * UObject::sub_00cf8cf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02098918);
  return param_1;
}

// @baa 0x00cf8d10
IMPLEMENT_CLASS_AT(UFontImportOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnFont.cpp", 10);

// @baa 0x00cf8d80
void sub_00cf77a0();
// @baa 0x00cf8db0
void sub_00cf8db0(void) { sub_00cf77a0(); }

void sub_00cf7800();
// @baa 0x00cf8de0
void sub_00cf8de0(void) { sub_00cf7800(); }

void sub_00cf78a0();
// @baa 0x00cf8df0
void sub_00cf8df0(void) { sub_00cf78a0(); }

void sub_00cf7900();
// @baa 0x00cf8e00
void sub_00cf8e00(void) { sub_00cf7900(); }

// @baa 0x00cfa480
IMPLEMENT_CLASS_AT(UInterpTrackInstFloatProp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 48);

// @baa 0x00cfa590
bool UInterpTrackInstFloatProp::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cfa5d0
IMPLEMENT_CLASS_AT(UInterpTrackInstVectorProp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 51);

// @baa 0x00cfa6e0
bool UInterpTrackInstVectorProp::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cfa720
IMPLEMENT_CLASS_AT(UInterpTrackInstColorProp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 54);

// @baa 0x00cfa830
bool UInterpTrackInstColorProp::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00cfce70 {
    int sub_00cfce70(undefined4 *, int);
    int sub_00cf8610(int, int);
};

// @baa 0x00cfce70
int C_00cfce70::sub_00cfce70(undefined4 * param_2, int param_3)
{
    uint param_1 = (uint)this;
  undefined4 *puVar1;
  ((C_00cfce70 *)(this))->sub_00cf8610(param_3, 1);
  puVar1 = (undefined4 *)
           ((-(uint)(*(uint *)(param_1 + 0xc0) == 0) & param_1 | *(uint *)(param_1 + 0xc0)) +
           param_3 * 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
  }
  return param_3;
}

struct C_00cfcec0 {
    void sub_00cfcec0();
};

// @baa 0x00cfcec0
void C_00cfcec0::sub_00cfcec0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != 0) {
    param_1[2] = 0;
    if (*param_1 != 0) {
      iVar1 = sub_0053df70(*param_1,0,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00cfcef0 {
    void sub_00cfcef0();
};

// @baa 0x00cfcef0
void C_00cfcef0::sub_00cfcef0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != 0) {
    param_1[2] = 0;
    if (*param_1 != 0) {
      iVar1 = sub_0053df70(*param_1,0,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00cfcf20 { C_00cfcf20* sub_00cfcf20(void); };

// @baa 0x00cfcf20
C_00cfcf20* C_00cfcf20::sub_00cfcf20(void) { return this; }

struct C_00cfd010 {
    undefined4 sub_00cfd010();
};

// @baa 0x00cfd010
undefined4 C_00cfd010::sub_00cfd010(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00cfd120 { C_00cfd120* sub_00cfd120(void); };

// @baa 0x00cfd120
C_00cfd120* C_00cfd120::sub_00cfd120(void) { return this; }

struct C_00cfd130 { C_00cfd130* sub_00cfd130(void); };

// @baa 0x00cfd130
C_00cfd130* C_00cfd130::sub_00cfd130(void) { return this; }

struct C_00cfd140 { C_00cfd140* sub_00cfd140(void); };

// @baa 0x00cfd140
C_00cfd140* C_00cfd140::sub_00cfd140(void) { return this; }

struct C_00cfd150 { C_00cfd150* sub_00cfd150(void); };

// @baa 0x00cfd150
C_00cfd150* C_00cfd150::sub_00cfd150(void) { return this; }

struct C_00cfd160 { C_00cfd160* sub_00cfd160(void); };

// @baa 0x00cfd160
C_00cfd160* C_00cfd160::sub_00cfd160(void) { return this; }
