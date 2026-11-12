// UnParticleBeamModules.cpp: 60 functions
// Placed here by: class 26, neighbours 15, file 6, callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00b50a20
IMPLEMENT_CLASS_AT(UParticleModuleBeamBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleBeamModules.cpp", 15);

// @baa 0x00b50b30
int UParticleModuleBeamBase::vf_000(void) { return 1; }

// @baa 0x00b50b40
bool UParticleModuleBeamBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b50b80
IMPLEMENT_CLASS_AT(UParticleModuleTypeDataBeam2, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleBeamModules.cpp", 20);

// @baa 0x00b50c90
int UParticleModuleTypeDataBeam2::vf_000(void) { return 1; }

// @baa 0x00b50ca0
bool UParticleModuleTypeDataBeam2::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b50ce0
void UParticleModuleTypeDataBeam2::vf_174(int a0, int a1, int a2) {  }

// @baa 0x00b50cf0
void UParticleModuleTypeDataBeam2::vf_16c(void) {  }

// @baa 0x00b50e10
int UParticleModuleBeamModifier::vf_000(void) { return 1; }

// @baa 0x00b50e20
int UParticleModuleBeamModifier::vf_114(int a0) { return 32; }

// @baa 0x00b50e30
void UParticleModuleBeamModifier::vf_168(void) {  }

// @baa 0x00b50e40
void UParticleModuleBeamModifier::PostEditChange(UProperty* a0) {  }

// @baa 0x00b50e50
void UParticleModuleBeamModifier::vf_134(int a0) {  }

// @baa 0x00b50e60
void UParticleModuleBeamModifier::vf_15c(int a0) {  }

// @baa 0x00b50e70
int UParticleModuleBeamNoise::vf_000(void) { return 1; }

// @baa 0x00b50e80
int UParticleModuleBeamNoise::vf_114(int a0) { return 0; }

// @baa 0x00b65680
// @baa 0x00b666f0
int sub_005c7a20(void);
extern undefined * g_01ffa240;
// @baa 0x00b66710
undefined4 * UObject::sub_00b66710(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ffa240);
  return param_1;
}

// @baa 0x00b66730
IMPLEMENT_CLASS_AT(UParticleModuleBeamModifier, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleBeamModules.cpp", 902);

// @baa 0x00b667c0
extern undefined * g_01ffa3b0;
// @baa 0x00b667f0
undefined4 * UObject::sub_00b667f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ffa3b0);
  return param_1;
}

// @baa 0x00b66810
IMPLEMENT_CLASS_AT(UParticleModuleBeamNoise, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleBeamModules.cpp", 1131);

// @baa 0x00b668c0
extern undefined * g_01ffa520;
// @baa 0x00b668f0
undefined4 * UObject::sub_00b668f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ffa520);
  return param_1;
}

// @baa 0x00b66910
IMPLEMENT_CLASS_AT(UParticleModuleBeamSource, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleBeamModules.cpp", 1391);

// @baa 0x00b669a0
extern undefined * g_01ffa690;
// @baa 0x00b669d0
undefined4 * UObject::sub_00b669d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ffa690);
  return param_1;
}

// @baa 0x00b669f0
IMPLEMENT_CLASS_AT(UParticleModuleBeamTarget, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleBeamModules.cpp", 1932);

// @baa 0x00b66a80
extern undefined * g_01ffa800;
// @baa 0x00b66ab0
undefined4 * UObject::sub_00b66ab0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ffa800);
  return param_1;
}

// @baa 0x00b66ad0
// @baa 0x00b66b70
// @baa 0x00b68ca0
// @baa 0x00b69700
// @baa 0x00b69720
// @baa 0x00b69740
// @baa 0x00b69760
// @baa 0x00b69780
// @baa 0x00b69d00
// @baa 0x00b69dc0
// @baa 0x00b69e80
// @baa 0x00b69f90
bool UParticleModuleBeamModifier::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b69fd0
// @baa 0x00b6a090
// @baa 0x00b6a1a0
bool UParticleModuleBeamNoise::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b6a1e0
// @baa 0x00b6a2a0
// @baa 0x00b6a3b0
bool UParticleModuleBeamSource::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b6a3f0

// @baa 0x00b50f00
int UParticleModuleBeamSource::vf_000(void) { return 1; }

// @baa 0x00b50f10
void UParticleModuleBeamSource::vf_168(void) {  }

// @baa 0x00b50fd0
int UParticleModuleBeamTarget::vf_000(void) { return 1; }

// @baa 0x00b50fe0
int UParticleModuleBeamTarget::vf_114(int a0) { return 0; }

// @baa 0x00b50ff0
void UParticleModuleBeamTarget::vf_168(void) {  }

// @baa 0x00b656e0
int UParticleModuleBeamBase::vf_130(void) { return 2; }

// @baa 0x00b656f0

// @baa 0x00b6a4b0

// @baa 0x00b6a5c0
bool UParticleModuleBeamTarget::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b50e90
/* Slot 0x168 (unnamed in the kit): a negative lock time means the noise is locked for good. */
void UParticleModuleBeamNoise::vf_168()
{
	if (NoiseLockTime < 0.f)
	{
		bNoiseLock = TRUE;
	}
	else
	{
		bNoiseLock = FALSE;
	}
}
