// SpeedTree.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <string.h>

// @baa 0x01a77d60
void sub_01a77d60(void* Dest, const void* Src)
{
	if (Dest != 0)
		memcpy(Dest, Src, 196);
}

// @baa 0x01a90b00
void sub_01a90b00(void *Dest, const void *Src)
{
	if (Dest != 0)
		memcpy(Dest, Src, 32);
}
