// fmod_systemi.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// @baa 0x0176abc6
// FMOD helper: stores an event into p (0x42200 is an FMOD error/state value) or returns 0x25 when p is null.
int __stdcall sub_0176abc6(int* State)
{
    if (State == 0)
        return 0x25;
    *State = 0x42200;
    return 0;
}

struct Sub
{
    void sub_017ae244();
};

struct C
{
    char pad_00[0x128];
    Sub Marker;

    INT sub_01782f90();
};

// @baa 0x01782f90
INT C::sub_01782f90()
{
    ((Sub*)((char*)this + 0x128))->sub_017ae244();
    return 0;
}
