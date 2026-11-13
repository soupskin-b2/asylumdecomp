// UnDistributions.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x007a2f60
/* InitializeRawEntry: the raw lookup-table entry is (Min, Max). */
INT UDistributionFloatUniform::InitializeRawEntry(FLOAT Time, FLOAT* Values)
{
	((FLOAT*)Values)[0] = Min;
	((FLOAT*)Values)[1] = Max;
	return 2;
}

// @baa 0x007c0f30
/* GetValue(F, Data): the curve evaluated at F (0 outside any keys). */
FLOAT UDistributionFloatConstantCurve::vf_11c(FLOAT F, FLOAT Data)
{
	return ConstantCurve.Eval(F, 0.f);
}
