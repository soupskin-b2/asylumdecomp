// BmGame_15d0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* UnMath.h's FVector::operator- (the kit's FVector doesn't declare it): data-free helper. */

// @baa 0x015dd380
FLOAT ARBMCombatManager::GetAngleFromPawnToPawn(ARPawnCombat* Pawn1, ARPawnCombat* Pawn2)
{
	const FVector Delta = (Pawn2->Location) - Pawn1->Location;
	return appAtan2(Delta.Y, Delta.X);
}
