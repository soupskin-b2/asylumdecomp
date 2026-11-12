// UnMorph.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* UnLinkedObjDrawUtils.h */
#define LO_CONNECTOR_LENGTH 10
// @baa 0x00834860
FIntPoint UMorphNodeBase::GetConnectionLocation(INT ConnType, INT ConnIndex)
{
	if (ConnType == 0)	/* LOC_INPUT */
	{
#line 105 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnMorph.cpp"
		check(ConnIndex == 0);
		return FIntPoint(NodePosX - LO_CONNECTOR_LENGTH, OutDrawY);
	}
	return FIntPoint(0, 0);
}

#line 21 "candidate.cpp"
