// RAnimUtil_PhysicsOutput.cpp: 5 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x015c3db0
IMPLEMENT_CLASS_AT(URAnimUtil_PhysicsOutput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_PhysicsOutput.cpp", 16);

// @baa 0x015c61a0

// @baa 0x015c1670

// @baa 0x015c1780
int URAnimUtil_PhysicsOutput::vf_000(void) { return 1; }

// @baa 0x015c1790
bool URAnimUtil_PhysicsOutput::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
