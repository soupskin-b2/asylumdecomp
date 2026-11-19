// BmGame_1600000.cpp (part 2 of 3): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"


// @baa 0x0160f290
FVector ARBMRouter_NoPawn::GetPos()
{
    return Location;
}

// @baa 0x0160f230
FVector ARBMRouter_DynamicObject::GetPos()
{
    return HostPawn->Location;
}
