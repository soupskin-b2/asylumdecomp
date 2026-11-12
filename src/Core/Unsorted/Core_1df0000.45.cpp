// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

unsigned char __cdecl sub_0059f5f0(int Size, int* Data);
extern int g_025df9e8;
extern unsigned char g_026c5002;
// @baa 0x01df01b0
void sub_01df01b0(void)
{
	g_026c5002 = sub_0059f5f0(0x20c, &g_025df9e8);
}
