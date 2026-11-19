// RCrowd.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x016d7020
/* Slot 0x354: how many agents belong to flock FlockID. */
INT ARCrowdManager::GetNumAgentsInFlock(INT FlockID)
{
	INT Count = 0;
	for (INT i = 0; i < Agents.Num(); i++)
	{
		if (Agents(i)->FlockID == FlockID)
		{
			Count++;
		}
	}
	return Count;
}

#line 35 "candidate.cpp"
