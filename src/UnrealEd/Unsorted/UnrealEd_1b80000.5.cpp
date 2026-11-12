// UnrealEd_1b80000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// A two-argument forwarder: the object comes second and receives the first argument.
struct S_01b8e740
{
    INT sub_01b8e740(INT Value);
};

// @baa 0x01b8e8b0
INT sub_01b8e8b0(INT Value, S_01b8e740* Object)
{
    return Object->sub_01b8e740(Value);
}
