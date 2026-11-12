// Core_1de0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern "C" unsigned char __cdecl sub_0059f5f0(int, int*);
extern int g_025df628;
extern unsigned char g_026c4944;
// @baa 0x01dee3b0
void sub_01dee3b0()
{
    g_026c4944 = sub_0059f5f0(0x20d, &g_025df628);
}
