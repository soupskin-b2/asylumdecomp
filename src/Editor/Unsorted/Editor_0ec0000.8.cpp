// Editor_0ec0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <string.h>

extern char g_025d67c0[];
// @baa 0x00ec6750
void* __stdcall sub_00ec6750(void* Dest)
{
	memcpy(Dest, g_025d67c0, 0x40);
	return Dest;
}
