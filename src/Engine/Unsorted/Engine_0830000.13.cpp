// Engine_0830000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00837990
/* Whether A may go through the portal this marker stands for. */
UBOOL APortalMarker::CanTeleport(AActor* A)
{
	return (MyPortal != NULL && MyPortal->CanTeleport(A));
}


// @baa 0x0083f3a0
void ANavigationPoint::sub_0083f3a0()
{
	for (INT i = 0; i < PathList.Num(); i++)
	{
		for (INT j = 0; j < PathList.Num() - 1; j++)
		{
			if (PathList(j)->Distance > PathList(j + 1)->Distance)
			{
				UReachSpec* Temp = PathList(j + 1);
				PathList(j + 1) = PathList(j);
				PathList(j) = Temp;
			}
		}
	}
}

// @baa 0x00836b00
/* The factory this one was ultimately copied from (follows OriginalFactory to the end). */
class ANavigationPoint* APickupFactory::SpecifyEndAnchor(APawn* RouteFinder)
{
	APickupFactory* Best = this;
	while (Best->OriginalFactory)
	{
		Best = Best->OriginalFactory;
	}
	return Best;
}
