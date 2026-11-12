// ParticleModules_Material.cpp: 14 functions
// Placed here by: callers 3, file 3, neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00b40df0
IMPLEMENT_CLASS_AT(UParticleModuleMaterialBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Material.cpp", 12);

// @baa 0x00b41ab0
// @baa 0x00b43970
IMPLEMENT_CLASS_AT(UParticleModuleMaterialByParameter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Material.cpp", 70);

// @baa 0x00b43990
IMPLEMENT_CLASS_AT(UParticleModuleMeshMaterial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Material.cpp", 17);

// @baa 0x00b48bb0
// @baa 0x00b48c70
// @baa 0x00b48d80
bool UParticleModuleMeshMaterial::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b48dc0

// @baa 0x00b33270

// @baa 0x00b33380
int UParticleModuleMaterialBase::vf_000(void) { return 1; }

// @baa 0x00b33390
bool UParticleModuleMaterialBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b333d0
int UParticleModuleMeshMaterial::vf_000(void) { return 1; }

int sub_005c7a20(void);
extern undefined * g_01fef368;
// @baa 0x00b40e10
undefined4 * UObject::sub_00b40e10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fef368);
  return param_1;
}

extern undefined * g_01fef4d0;
// @baa 0x00b40ed0
undefined4 * UObject::sub_00b40ed0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fef4d0);
  return param_1;
}
