// UnUserInterface.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x00ddef70
UBOOL FUIImageAdjustmentData::operator==(const FUIImageAdjustmentData& Other) const
{
	return ProtectedRegion[0] == Other.ProtectedRegion[0]
		&&	ProtectedRegion[1] == Other.ProtectedRegion[1]
		&&	AdjustmentType == Other.AdjustmentType
		&&	Alignment == Other.Alignment;
}
