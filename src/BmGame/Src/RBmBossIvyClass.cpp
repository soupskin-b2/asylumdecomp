// RBmBossIvyClass.cpp: 8 functions
// Placed here by: callers 2, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x016cac60
IMPLEMENT_CLASS_AT(ARPlantPod, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBossIvyClass.cpp", 18);

// @baa 0x016cacc0
IMPLEMENT_CLASS_AT(ARSoftBodyProjectile, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBossIvyClass.cpp", 17);

// @baa 0x016cb240
// @baa 0x016cb300

// @baa 0x016acd00

// @baa 0x016ace10
int ARSoftBodyProjectile::vf_000(void) { return 1; }

// @baa 0x016ace20
bool ARSoftBodyProjectile::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016ace60
