// Engine_16e0000.cpp: 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x016e56d0
IMPLEMENT_CLASS_AT(ARCrowdAttractor_Cylinder, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCrowd.cpp", 16);

// @baa 0x016e57e0
bool ARCrowdAttractor_Cylinder::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
