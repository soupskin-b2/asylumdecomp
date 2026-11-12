// fmod_eventimpl_complex.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// FMOD complex-event helper structs, fields from the code
struct C_023e0724_18 { // object held through offset 0x18 of arg1
    INT Pad_00[0x0f];
    INT State; // +0x3c
};

struct C_023e0724 {
    INT Pad_00[0x06];
    C_023e0724_18 *Sub; // +0x18
};

// @baa 0x017f5040
// @baa 0x017f5040
int __stdcall sub_017f5040(C_023e0724 *P, BYTE *Out)
{
    *Out = P->Sub->State != 0;
    return 0;
}
