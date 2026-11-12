// Unknown_1ba0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern int __stdcall sub_01ba6030(int A, int B);
// @baa 0x01ba9750
int __stdcall sub_01ba9750(int A, int B)
{
    int Result = sub_01ba6030(A, B);
    if (0 < Result)
        Result = 0;
    return Result;
}
