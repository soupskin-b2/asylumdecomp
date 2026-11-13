// UnSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x008bc9f0
/* GetFloatRef: picks a new random value in [Min, Max] each time it's read. */
FLOAT* USeqVar_RandomFloat::GetFloatRef()
{
	const FLOAT Alpha = appFrand();
	FloatValue = Min + (Max - Min) * Alpha;
	return &FloatValue;
}
