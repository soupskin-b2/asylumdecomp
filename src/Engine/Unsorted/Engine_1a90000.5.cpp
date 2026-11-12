// Engine_1a90000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
// sub_01a9c200: copy 16 dwords (64 bytes) from Src to Dst, unless Dst is null.
#include <string.h>

// @baa 0x01a9c200
void sub_01a9c200(void* Dst, const void* Src)
{
	if (Dst != 0)
		memcpy(Dst, Src, 64);
}
