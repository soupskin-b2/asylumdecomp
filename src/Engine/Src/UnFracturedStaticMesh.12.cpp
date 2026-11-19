// UnFracturedStaticMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

// @baa 0x007b8990
/* Slot 0x37c (unnamed in the kit; UE3's RemoveDecals): resets the decals attached to fragment IndexToRemove. */
void AFracturedStaticMeshActor::RemoveDecals(INT IndexToRemove)
{
	for (INT i = 0; i < Components.Num(); i++)
	{
		UDecalComponent* DecalComp = Cast<UDecalComponent>(Components(i));
		if (DecalComp && DecalComp->FracturedStaticMeshComponentIndex == IndexToRemove)
		{
			DecalComp->ResetToDefaults();
		}
	}
}

#line 36 "candidate.cpp"
