// RPlayerController.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x01616190
template AStaticMeshActorBase* Cast<AStaticMeshActorBase>(UObject* Src);

/* Cast<ARPawnPlayer> is out of line in the exe (0155de00). */
extern template ARPawnPlayer* Cast<ARPawnPlayer>(UObject* Src);

// @baa 0x01618460
/* Whether the player stands within MaxDistance of a front barrier or side feature of one of the given types
 * (a bit per locator type); OutNormal gets that feature's normal. */
UBOOL ARPlayerController::sub_01618460(INT FeatureTypes, FLOAT MaxDistance, FVector* OutNormal)
{
	ARPawnPlayer* Player = Cast<ARPawnPlayer>(Pawn);
	if (!Player)
	{
		return FALSE;
	}
	for (INT i = 0; i < 3; i++)
	{
		FEnvironmentSpecialMoveLocator* Feature = (i == 0) ? &Player->FrontBarrier : (i == 1) ? &Player->LeftFeature : &Player->RightFeature;
		if ((FeatureTypes & (1 << Feature->Type)) && MaxDistance > Feature->Distance)
		{
			if (OutNormal)
			{
				*OutNormal = Feature->Normal;
			}
			return TRUE;
		}
	}
	return FALSE;
}

// @baa 0x01618d10
/* While flying with the cape glide available, probes for a wall ahead: TRUE when there's no front barrier;
 * a found barrier is cleared and refused. */
UBOOL ARPlayerController::ShouldIKickOffWall(FVector WallNormal)
{
	ARPawnPlayer* Player = Cast<ARPawnPlayer>(Pawn);
	if (!bCapeGlideDisabled && Player->Physics == PHYS_Flying)
	{
		((ARPawnPlayer*)Player)->sub_016a5440(90.f, 45.f, 1.f);
		if (Player->FrontBarrier.Type != 0)
		{
			Player->FrontBarrier.Type = 0;
		}
		else
		{
			return TRUE;
		}
	}
	return FALSE;
}

// @baa 0x01618fe0
/* Probes whether the player could glide: with the fall speed capped at 200 and at least 500 units/s of
 * forward speed along the view direction, the probe must come back clear. Velocity is restored afterwards. */
UBOOL ARPlayerController::HaveRoomToCapeGlide()
{
	ARPawnPlayer* Player = Cast<ARPawnPlayer>(Pawn);
	if (Player)
	{
		FVector SavedVelocity = Player->Velocity;
		if (-200.f > Player->Velocity.Z)
		{
			Player->Velocity.Z = -200.f;
		}
		FVector Dir = Pawn->Rotation.Vector();
		FLOAT Speed = Player->Velocity | Dir;
		if (500.f > Speed)
		{
			Player->Velocity += (500.f - Speed) * Dir;
		}
		UBOOL bHaveRoom = !Player->sub_01694830(0.5f, 0);
		Player->Velocity = SavedVelocity;
		return bHaveRoom;
	}
	return FALSE;
}
