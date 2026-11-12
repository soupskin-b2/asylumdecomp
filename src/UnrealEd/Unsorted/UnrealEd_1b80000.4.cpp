// UnrealEd_1b80000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <string.h>

// @baa 0x01b851c0
void sub_01b851c0(void* Dest, const void* Src)
{
	if (Dest)
		memcpy(Dest, Src, 0x108);
}
