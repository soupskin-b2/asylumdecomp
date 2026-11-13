// UnDistributions.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x007a2f60
/* InitializeRawEntry: the raw lookup-table entry is (Min, Max). */
INT UDistributionFloatUniform::vf_118(INT Time, INT Values)
{
	((FLOAT*)Values)[0] = Min;
	((FLOAT*)Values)[1] = Max;
	return 2;
}
