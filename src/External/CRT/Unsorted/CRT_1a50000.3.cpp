// CRT_1a50000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/AppMath.h"

extern double g_0240a448;
// @baa 0x01a5e120
float sub_01a5e120(float x)
{
	x = g_0240a448 * x * x * x;
	return x;
}
