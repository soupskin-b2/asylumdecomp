// UnrealEd_1ac0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// A two-argument forwarder: the object comes second and receives the first argument.
struct S_01ac95f0
{
    INT sub_01ac95f0(INT Value);
};

// @baa 0x01ac9ad0
INT sub_01ac9ad0(INT Value, S_01ac95f0* Object)
{
    return Object->sub_01ac95f0(Value);
}
