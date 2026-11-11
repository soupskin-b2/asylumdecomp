// UnParticleTrailModules.cpp: 48 functions
// Placed here by: neighbours 28, class 15, file 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00baaa10
IMPLEMENT_CLASS_AT(UParticleModuleTrailBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleTrailModules.cpp", 13);

// @baa 0x00baab20
int UParticleModuleTrailBase::vf_000(void) { return 1; }

// @baa 0x00baab30
bool UParticleModuleTrailBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00baab70
int UParticleModuleTrailSource::vf_000(void) { return 1; }

// @baa 0x00baab80
void __stdcall sub_00baab80(int a0, int a1, int a2) {  }

// @baa 0x00baabb0
void UParticleModuleTrailSource::vf_168(void) {  }

struct C {
    void sub_00baabe0(undefined4, undefined4, undefined4 *, undefined4 *);
};

// @baa 0x00baabe0
void C::sub_00baabe0(undefined4 param_2, undefined4 param_3, undefined4 * param_4, undefined4 * param_5)
{
    int param_1 = (int)this;

  *param_5 = 0xffffffff;
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *param_5 = *param_4;
  }
  return;
}

// @baa 0x00baac00
int UParticleModuleTrailSpawn::vf_000(void) { return 1; }

// @baa 0x00baac10
void __stdcall sub_00baac10(int a0, int a1, int a2) {  }

// @baa 0x00baac20
void __stdcall sub_00baac20(int a0, int a1, int a2) {  }

// @baa 0x00baac30
int UParticleModuleTrailSpawn::vf_114(int a0) { return 0; }

// @baa 0x00baac40
void UParticleModuleTrailSpawn::vf_168(void) {  }

// @baa 0x00baac60
int UParticleModuleTrailTaper::vf_000(void) { return 1; }

// @baa 0x00baac70
void __stdcall sub_00baac70(int a0, int a1, int a2) {  }

// @baa 0x00baac80
void __stdcall sub_00baac80(int a0, int a1, int a2) {  }

// @baa 0x00baac90
void UParticleModuleTrailTaper::vf_168(void) {  }

// @baa 0x00baacb0
IMPLEMENT_CLASS_AT(UParticleModuleTypeDataTrail2, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleTrailModules.cpp", 477);

// @baa 0x00baadc0
int UParticleModuleTypeDataTrail2::vf_000(void) { return 1; }

// @baa 0x00baadd0
bool UParticleModuleTypeDataTrail2::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00baae10
void UParticleModuleTypeDataTrail2::vf_170(int a0, int a1) {  }

// @baa 0x00baae20
void __stdcall sub_00baae20(int a0, int a1, int a2) {  }

// @baa 0x00baae30
void __stdcall sub_00baae30(int a0, int a1, int a2) {  }

// @baa 0x00baae40
void UParticleModuleTypeDataTrail2::vf_174(int a0, int a1, int a2) {  }

// @baa 0x00baae50
int UParticleModuleTypeDataTrail2::vf_114(int a0) { return 36; }

// @baa 0x00baae60
void UParticleModuleTypeDataTrail2::vf_16c(void) {  }

// @baa 0x00bc8ea0
// @baa 0x00bc8f00
int UParticleModuleTrailBase::vf_130(void) { return 3; }

// @baa 0x00bc8f10
// @baa 0x00bcd770
int sub_005c7a20(void);
extern undefined * g_0201af98;
// @baa 0x00bcd790
undefined4 * UObject::sub_00bcd790(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0201af98);
  return param_1;
}

// @baa 0x00bcd7b0
IMPLEMENT_CLASS_AT(UParticleModuleTrailSource, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleTrailModules.cpp", 18);

// @baa 0x00bcd830
// @baa 0x00bcd860
IMPLEMENT_CLASS_AT(UParticleModuleTrailSpawn, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleTrailModules.cpp", 366);

extern undefined * g_0201b108;
// @baa 0x00bcd880
undefined4 * UObject::sub_00bcd880(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0201b108);
  return param_1;
}

// @baa 0x00bcd8a0
IMPLEMENT_CLASS_AT(UParticleModuleTrailTaper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleTrailModules.cpp", 441);

// @baa 0x00bcd910
// @baa 0x00bcd930
// @baa 0x00bcd950
// @baa 0x00bcdb60
// @baa 0x00bcdc20
// @baa 0x00bd1510
// @baa 0x00bd1530
// @baa 0x00bd1550
// @baa 0x00bd1610
// @baa 0x00bd1720
bool UParticleModuleTrailSource::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00bd1760
// @baa 0x00bd1870
bool UParticleModuleTrailSpawn::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00bd18b0
