// BmGame_1600000.cpp (part 2 of 3): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// ARBMRouter_NoPawn::GetPos (slot 0x354): returns the actor's own Location.
// The header's placeholder for this slot is `virtual INT vf_354(INT)`; the code
// returns a 12-byte FVector by value (hidden result pointer, ret 4).
struct ARBMRouter_NoPawn_ : public ARBMRouter_NoPawn
{
    FVector sub_0160f290();
};

// @baa 0x0160f290
FVector ARBMRouter_NoPawn_::sub_0160f290()
{
    return Location;
}

// @baa 0x0160f230
FVector ARBMRouter_DynamicObject::GetPos()
{
    return HostPawn->Location;
}
