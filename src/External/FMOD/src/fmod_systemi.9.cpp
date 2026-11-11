// fmod_systemi.cpp: 1 function
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
