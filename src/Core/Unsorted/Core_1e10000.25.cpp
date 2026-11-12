// Core_1e10000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern unsigned char __cdecl sub_0059f5f0(int Index, int* State);
extern int g_025ebeec;
extern unsigned char g_026e1798;
// @baa 0x01e15780
void sub_01e15780()
{
    g_026e1798 = sub_0059f5f0(0xfa0, &g_025ebeec);
}
