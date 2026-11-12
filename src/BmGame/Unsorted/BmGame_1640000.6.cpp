// BmGame_1640000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x016407e0
template ARGameRI* Cast<ARGameRI>(UObject* Src);

// @baa 0x01641eb0
/* While the grapple space test runs, railings don't block. */
UBOOL ARGrappleGun::IgnoreBlockingBy(const AActor* Other) const
{
	if (bDoingGrappleSpaceTest)
	{
		AStaticMeshActorBase* StaticMeshActor = Cast<AStaticMeshActorBase>((AActor*)Other);
		if (StaticMeshActor && StaticMeshActor->bRailing)
		{
			return TRUE;
		}
	}
	return Super::IgnoreBlockingBy(Other);
}
