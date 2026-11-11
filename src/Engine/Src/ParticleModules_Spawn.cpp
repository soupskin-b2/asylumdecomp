// ParticleModules_Spawn.cpp: 15 functions
// Placed here by: class 8, callers 3, file 3, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00b33560
int UParticleModuleOrbit::vf_000(void) { return 1; }

// @baa 0x00b339c0
int UParticleModuleOrbit::vf_114(int a0) { return 72; }

// @baa 0x00b339d0
int UParticleModuleOrbit::vf_118(int a0) { return 0; }

// @baa 0x00b342a0
int UParticleModuleSpawnPerUnit::vf_000(void) { return 1; }

// @baa 0x00b40fc0
IMPLEMENT_CLASS_AT(UParticleModuleSpawnBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Spawn.cpp", 11);

// @baa 0x00b41e70
// @baa 0x00b43a00
IMPLEMENT_CLASS_AT(UParticleModuleOrbit, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Orbit.cpp", 16);

// @baa 0x00b43a90
// @baa 0x00b48fd0
// @baa 0x00b490e0
bool UParticleModuleOrbit::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00b4a8a0
// @baa 0x00b4a8c0
IMPLEMENT_CLASS_AT(UParticleModuleSpawn, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Spawn.cpp", 16);

// @baa 0x00b4a8e0
IMPLEMENT_CLASS_AT(UParticleModuleSpawnPerUnit, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Spawn.cpp", 101);

// @baa 0x00b4b400
// @baa 0x00b4b4c0
