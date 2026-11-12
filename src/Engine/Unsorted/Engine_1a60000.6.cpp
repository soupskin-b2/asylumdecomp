// Engine_1a60000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <string.h>

// @baa 0x01a63130
void sub_01a63130(void* Dest, const void* Src)
{
    if (Dest)
    {
        memcpy(Dest, Src, 0x28);
    }
}

// @baa 0x01a6fe00
void sub_01a6fe00(void* Dest, const void* Src)
{
	if (Dest != 0)
		memcpy(Dest, Src, 0x40);
}
