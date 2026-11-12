// D3D9Drv_1a10000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"
#include <stdlib.h>

// @baa 0x01a1d340
// C++'s global allocation functions, as a build with the debug heap compiles them: the debug
// header's user-data word is prepended, so the allocator sees the size as the second argument.
void* operator new(UINT Unused, UINT Size)
{
    return malloc(Size);
}
