// Surface.cpp: 5 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00719a50
IMPLEMENT_CLASS_AT(USurface, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\Surface.cpp", 8);

// @baa 0x0071b2d0

// @baa 0x00716a50

// @baa 0x00716b60
int USurface::vf_000(void) { return 1; }

// @baa 0x00716b70
bool USurface::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
