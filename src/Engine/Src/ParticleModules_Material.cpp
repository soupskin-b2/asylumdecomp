// ParticleModules_Material.cpp: 8 functions
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
