// RLineLaucher.cpp (part 1 of 2): 10 functions
// Placed here by: callers 3, file 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01658510
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_LineLauncher, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RLineLaucher.cpp", 19);

// @baa 0x016585b0
IMPLEMENT_CLASS_AT(ARLineLauncherBlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RLineLaucher.cpp", 20);

// @baa 0x016586b0
IMPLEMENT_CLASS_AT(ARLineLauncher, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RLineLaucher.cpp", 18);

// @baa 0x01659a10
// @baa 0x01659ad0
// @baa 0x01659b90

// @baa 0x0163ba10

// @baa 0x0163bb20
int ARSpecialMoveInstance_LineLauncher::vf_000(void) { return 1; }

// @baa 0x0163bb30
bool ARSpecialMoveInstance_LineLauncher::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163bb70
