// CRT_18c0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct sub_018caa30 {
    DWORD field00;
    DWORD field04;
    BYTE  field08;
    sub_018caa30* InitSet(DWORD A, DWORD B, BYTE C);
};

// @baa 0x018caa30
sub_018caa30* sub_018caa30::InitSet(DWORD A, DWORD B, BYTE C)
{
    field00 = A;
    field04 = B;
    field08 = C;
    return this;
}
