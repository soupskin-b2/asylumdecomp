// Engine_1560000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

// @baa 0x01566d10
/* Slot 0x364: tells each AI pawn standing on (based on) the panel that this was the last floor panel it touched. */
void ARElectrifiedFloorPanel::UpdatePawnsOnTile()
{
	for (INT i = 0; i < Attached.Num(); i++)
	{
		AActor* Other = Attached(i);
		if (Other && ObjectIsA(Other, ARBMPawnAI::StaticClass()))
		{
			((ARBMPawnAI*)Other)->LastFloorPanel = this;
		}
	}
}

#line 37 "candidate.cpp"
