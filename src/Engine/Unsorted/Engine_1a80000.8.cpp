// Engine_1a80000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <string.h>

// @baa 0x01a84e10
void sub_01a84e10(void* Dest, const void* Src)
{
	if (Dest != 0)
		memcpy(Dest, Src, 56);
}
