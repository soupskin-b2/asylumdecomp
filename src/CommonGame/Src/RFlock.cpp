// RFlock.cpp: 10 functions
// Placed here by: callers 2, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01544320
IMPLEMENT_CLASS_AT(URFlockComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\RFlock.cpp", 5);

// @baa 0x01544340
// @baa 0x015467c0
IMPLEMENT_CLASS_AT(ARFlockActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\RFlock.cpp", 4);

// @baa 0x015467f0

// @baa 0x0153dc60

// @baa 0x0153dd70
int ARFlockActor::vf_000(void) { return 1; }

// @baa 0x0153dd80
bool ARFlockActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0153ddc0

// @baa 0x0153ded0
int URFlockComponent::vf_000(void) { return 1; }

// @baa 0x0153dee0
bool URFlockComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
