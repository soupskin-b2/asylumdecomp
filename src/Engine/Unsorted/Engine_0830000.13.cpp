// Engine_0830000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap: APortalTeleporter::CanTeleport (0x008b08f0) isn't virtual in this build and isn't declared. */
struct APortalTeleporter_ : public APortalTeleporter
{
	UBOOL CanTeleport(AActor* A);
};

// @baa 0x00837990
/* Whether A may go through the portal this marker stands for. */
UBOOL APortalMarker::CanTeleport(AActor* A)
{
	return (MyPortal != NULL && ((APortalTeleporter_*)MyPortal)->CanTeleport(A));
}

/* Unnamed ANavigationPoint helper: bubble-sorts PathList by ascending reach spec Distance. */
struct ANavigationPoint_ : public ANavigationPoint
{
	void sub_0083f3a0();
};

// @baa 0x0083f3a0
void ANavigationPoint_::sub_0083f3a0()
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
