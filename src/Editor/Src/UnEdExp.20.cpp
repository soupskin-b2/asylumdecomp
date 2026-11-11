// UnEdExp.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <string.h>

// @baa 0x00eeda30
void sub_00eeda30(int* Dest, const int* Src)
{
	if (Dest)
		memcpy(Dest, Src, 0x40);
}
