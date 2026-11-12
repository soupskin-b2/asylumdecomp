// Engine_0d00000.cpp (part 1 of 4): 77 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005c7a20(void);
extern undefined * g_02098eb8;
// @baa 0x00d00f60
undefined4 * UObject::sub_00d00f60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02098eb8);
  return param_1;
}

extern undefined * g_02098fd8;
// @baa 0x00d00f80
undefined4 * UObject::sub_00d00f80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02098fd8);
  return param_1;
}

// @baa 0x00d00fa0
IMPLEMENT_CLASS_AT(UInterpGroupInstDirector, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 31);

// @baa 0x00d01000
// @baa 0x00d01050
IMPLEMENT_CLASS_AT(UInterpTrackDirector, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 59);

// @baa 0x00d010d0
// @baa 0x00d01120
int UInterpTrackEvent::vf_14c(void) { return 1; }

// @baa 0x00d01130
IMPLEMENT_CLASS_AT(UInterpTrackEvent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 56);

// @baa 0x00d011b0
// @baa 0x00d012e0
IMPLEMENT_CLASS_AT(UInterpTrackAnimControl, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 68);

// @baa 0x00d01370
// @baa 0x00d013d0
IMPLEMENT_CLASS_AT(UInterpTrackFaceFXRegister, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 90);

// @baa 0x00d01450
// @baa 0x00d014b0
IMPLEMENT_CLASS_AT(UInterpTrackFade, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 62);

// @baa 0x00d01520
// @baa 0x00d01580
IMPLEMENT_CLASS_AT(UInterpTrackFloatMaterialParam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 77);

// @baa 0x00d015f0
// @baa 0x00d01650
IMPLEMENT_CLASS_AT(UInterpTrackFloatParticleParam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 74);

// @baa 0x00d016c0
// @baa 0x00d01720
IMPLEMENT_CLASS_AT(UInterpTrackFloatProp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 47);

// @baa 0x00d01790
// @baa 0x00d017f0
IMPLEMENT_CLASS_AT(UInterpTrackMorphWeight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 93);

// @baa 0x00d01860
// @baa 0x00d018c0
IMPLEMENT_CLASS_AT(UInterpTrackSkelControlScale, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 96);

// @baa 0x00d01930
// @baa 0x00d01990
IMPLEMENT_CLASS_AT(UInterpTrackSlomo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 65);

// @baa 0x00d01a00
// @baa 0x00d01a60
IMPLEMENT_CLASS_AT(UInterpTrackSoundFade, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 100);

// @baa 0x00d01ad0
void sub_00cf7fd0();
// @baa 0x00d01b00
void sub_00d01b00(void) { sub_00cf7fd0(); }

struct C { C* sub_00d01b10(void); };

// @baa 0x00d01b10
C* C::sub_00d01b10(void) { return this; }

// @baa 0x00d01b50
int UInterpTrackParticleReplay::vf_14c(void) { return 1; }

// @baa 0x00d01b60
IMPLEMENT_CLASS_AT(UInterpTrackParticleReplay, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 109);

// @baa 0x00d01be0
// @baa 0x00d02e20
// @baa 0x00d02f30
bool UInterpTrackParticleReplay::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_00d05410();
// @baa 0x00d06fa0
void sub_00d06fa0(void) { sub_00d05410(); }

// @baa 0x00d0ae50
// @baa 0x00d0af60
bool UInterpTrackFloatProp::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d0afa0
IMPLEMENT_CLASS_AT(UInterpTrackVectorProp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 50);

// @baa 0x00d0b0b0
bool UInterpTrackVectorProp::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d0b0f0
IMPLEMENT_CLASS_AT(UInterpTrackColorProp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 53);

// @baa 0x00d0b200
bool UInterpTrackColorProp::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d0b240
// @baa 0x00d0b350
bool UInterpTrackFade::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d0b390
// @baa 0x00d0b4e0
// @baa 0x00d0b5f0
bool UInterpTrackAnimControl::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d0b630
IMPLEMENT_CLASS_AT(UInterpTrackSound, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 71);

// @baa 0x00d0b780
// @baa 0x00d0b890
bool UInterpTrackFloatParticleParam::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d0b8d0
// @baa 0x00d0b9e0
bool UInterpTrackFloatMaterialParam::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d0ba20
IMPLEMENT_CLASS_AT(UInterpTrackVectorMaterialParam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 80);

// @baa 0x00d0bb30
bool UInterpTrackVectorMaterialParam::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d0bb70
IMPLEMENT_CLASS_AT(UInterpTrackColorScale, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 83);

// @baa 0x00d0bc80
bool UInterpTrackColorScale::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d0bcc0
// @baa 0x00d0bdd0
bool UInterpTrackFaceFXRegister::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d0be10
// @baa 0x00d0bf20
bool UInterpTrackMorphWeight::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d0bf60
// @baa 0x00d0c070
bool UInterpTrackSkelControlScale::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d0c0b0
// @baa 0x00d0c1c0
bool UInterpTrackSoundFade::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d0c200
IMPLEMENT_CLASS_AT(UInterpTrackAudioMaster, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 103);

// @baa 0x00d0c310
bool UInterpTrackAudioMaster::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00d0c560 { C_00d0c560* sub_00d0c560(void); };

// @baa 0x00d0c560
C_00d0c560* C_00d0c560::sub_00d0c560(void) { return this; }

int sub_0053dfa0(...);
int sub_00d0a8b0(void);
// @baa 0x00d0c8c0
undefined4 UObject::sub_00d0c8c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d0a8b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d0cce0 {
    int sub_00d0cce0();
};

int sub_00d05b70(void);
// @baa 0x00d0cce0
int C_00d0cce0::sub_00d0cce0(void)
{
    int param_1 = (int)this;

  sub_00d05b70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d0cd00 {
    int sub_00d0cd00();
};

int sub_00d05bd0(void);
// @baa 0x00d0cd00
int C_00d0cd00::sub_00d0cd00(void)
{
    int param_1 = (int)this;

  sub_00d05bd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d0cd20 {
    int sub_00d0cd20();
};

int sub_00d05c30(void);
// @baa 0x00d0cd20
int C_00d0cd20::sub_00d0cd20(void)
{
    int param_1 = (int)this;

  sub_00d05c30();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00d0d3e0
IMPLEMENT_CLASS_AT(AInterpActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 20);

// @baa 0x00d0d440
// @baa 0x00d0d4a0
IMPLEMENT_CLASS_AT(AMatineeActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp", 21);

// @baa 0x00d0d500
struct C_00d0d530 { C_00d0d530* sub_00d0d530(void); };

// @baa 0x00d0d530
C_00d0d530* C_00d0d530::sub_00d0d530(void) { return this; }
