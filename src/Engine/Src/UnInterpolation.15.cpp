// UnInterpolation.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x00ceb780
/* UnInterpolation.cpp helper: rounds each component (a count of turns) to whole turns and returns them in degrees. */
FVector sub_00ceb780(const FVector& Turns)
{
	FVector Result;
	Result.X = appRound(Turns.X) * 360.f;
	Result.Y = appRound(Turns.Y) * 360.f;
	Result.Z = appRound(Turns.Z) * 360.f;
	return Result;
}
