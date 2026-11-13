// UnPawn.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* Kit gap: UWorld::GetTimeSeconds (009c8f80) isn't declared. */

// @baa 0x00865160
void APawn::SetAnchor(ANavigationPoint* NewAnchor)
{
	// clear the previous anchor's reference to this pawn
	if (Anchor != NULL && Anchor->AnchoredPawn == this)
	{
		Anchor->AnchoredPawn = NULL;
		Anchor->LastAnchoredPawnTime = GWorld->GetTimeSeconds();
	}

	Anchor = NewAnchor;
	if (Anchor != NULL)
	{
		LastValidAnchorTime = GWorld->GetTimeSeconds();
		LastAnchor = Anchor;
		// only AI pawns claim the anchor
		if (Controller == NULL || Controller->GetAPlayerController() == NULL)
		{
			Anchor->AnchoredPawn = this;
		}
	}
}

/* Kit gap: UWorld::GetGravityZ (009c6c80) isn't declared. */

// @baa 0x00867f90
/* Rigid bodies use the volume's rigid body gravity, scaled by the world's physics gravity scaling. */
FLOAT AActor::GetGravityZ()
{
	if (Physics == PHYS_RigidBody)
	{
		if (PhysicsVolume)
		{
			return PhysicsVolume->GetVolumeRBGravityZ() * WorldInfo->RBPhysicsGravityScaling;
		}
		return GWorld->GetGravityZ() * WorldInfo->RBPhysicsGravityScaling;
	}
	return PhysicsVolume ? PhysicsVolume->GetGravityZ() : GWorld->GetGravityZ();
}

// @baa 0x00865010
// @baa 0x00865010
/* APawn slot 0x194: PostScriptDestroyed. */
void APawn::vf_194()
{
	GWorld->RemovePawn(this);
}
