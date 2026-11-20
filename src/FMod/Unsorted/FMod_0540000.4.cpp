// FMod_0540000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x0054dc90
FString FString::Right(INT Count) const
{
	return FString(**this + Len() - Clamp(Count, 0, Len()));
}
