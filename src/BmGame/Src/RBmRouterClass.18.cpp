// RBmRouterClass.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct C_P_7ca0
{
    DWORD V;
    DWORD sub_00757ca0();
};

// @baa 0x01610e50
void __stdcall sub_01610e50(C_P_7ca0* P)
{
    if (P->V == 0)
        P->V = P->sub_00757ca0();
}
