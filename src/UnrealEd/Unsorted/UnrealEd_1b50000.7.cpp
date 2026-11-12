// UnrealEd_1b50000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <string.h>

// @baa 0x01b58660
void sub_01b58660(void* Dest, const void* Source)
{
	if (Dest)
		memcpy(Dest, Source, 0x28);
}

// @baa 0x01b586c0
void sub_01b586c0(void* Dest, const void* Src)
{
	if (Dest)
		memcpy(Dest, Src, 0x230);
}
