// D3D9Drv_1a10000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <stdlib.h>

// @baa 0x01a1d360
// Allocates a block of the given size.
void* sub_01a1d360(INT Unused, size_t Size)
{
	return malloc(Size);
}
