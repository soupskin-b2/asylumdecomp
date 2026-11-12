// RJokerTannoy.cpp: 5 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0162d5e0
IMPLEMENT_CLASS_AT(ARJokerTannoy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RJokerTannoy.cpp", 4);

// @baa 0x0162f550

// @baa 0x01611fa0

// @baa 0x016120b0
int ARJokerTannoy::vf_000(void) { return 1; }

// @baa 0x016120c0
bool ARJokerTannoy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
