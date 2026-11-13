// UnSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x008bc9f0
/* GetFloatRef: picks a new random value in [Min, Max] each time it's read. */
char* USeqVar_RandomFloat::vf_174()
{
	const FLOAT Alpha = appFrand();
	FloatValue = Min + (Max - Min) * Alpha;
	return (char*)&FloatValue;
}
