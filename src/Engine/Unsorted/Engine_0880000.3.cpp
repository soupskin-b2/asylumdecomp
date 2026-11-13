// Engine_0880000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"
#include <math.h>

// @baa 0x0088aa40
/* Mantle specs are unusable when the height difference exceeds the pawn's MaxStepHeight. */
UINT UMantleReachSpec::vf_138(INT P)
{
	if (Start && End.Actor && fabsf(Start->Location.Z - End.Actor->Location.Z) > ((APawn*)P)->MaxStepHeight)
	{
		return FALSE;
	}
	return TRUE;
}
