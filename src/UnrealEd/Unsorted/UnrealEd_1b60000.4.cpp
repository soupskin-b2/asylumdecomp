// UnrealEd_1b60000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <string.h>

// @baa 0x01b609a0
void sub_01b609a0(void* Dest, const void* Src)
{
	if (Dest)
		memcpy(Dest, Src, 0x1c);
}

// @baa 0x01b6c960
void sub_01b6c960(void* Dest, const void* Src)
{
	if (Dest)
		memcpy(Dest, Src, 0x24);
}

// @baa 0x01b6c9d0
void sub_01b6c9d0(void* Dest, const void* Src)
{
	if (Dest != 0)
	{
		memcpy(Dest, Src, 40);
	}
}
