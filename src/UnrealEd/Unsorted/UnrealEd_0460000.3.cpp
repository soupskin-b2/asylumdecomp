// UnrealEd_0460000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <string.h>

// @baa 0x00461840
void sub_00461840(int *Dest, const int *Source)
{
	if (Dest != NULL)
		memcpy(Dest, Source, 36);
}
