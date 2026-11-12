// RPlayerController.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x01616190
template AStaticMeshActorBase* Cast<AStaticMeshActorBase>(UObject* Src);

/* Cast<ARPawnPlayer> is out of line in the exe (0155de00). */
extern template ARPawnPlayer* Cast<ARPawnPlayer>(UObject* Src);
/* Kit gap: this helper behind execAmIStandingNextToFeature isn't declared. */
struct ARPlayerController_ : public ARPlayerController
{
	UBOOL sub_01618460(INT FeatureTypes, FLOAT MaxDistance, FVector* OutNormal);
};

// @baa 0x01618460
/* Whether the player stands within MaxDistance of a front barrier or side feature of one of the given types
 * (a bit per locator type); OutNormal gets that feature's normal. */
UBOOL ARPlayerController_::sub_01618460(INT FeatureTypes, FLOAT MaxDistance, FVector* OutNormal)
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

/* Kit gaps: ARPawnPlayer's environment-feature probe (016a5440) and this helper behind execShouldIKickOffWall
 * aren't declared. */
struct ARPawnPlayer_ : public ARPawnPlayer
{
	void sub_016a5440(FLOAT A, FLOAT B, FLOAT C);
};

struct ARPlayerController__01618d10 : public ARPlayerController
{
	UBOOL sub_01618d10(FVector WallNormal);
};

// @baa 0x01618d10
/* While flying with the cape glide available, probes for a wall ahead: TRUE when there's no front barrier;
 * a found barrier is cleared and refused. */
UBOOL ARPlayerController__01618d10::sub_01618d10(FVector WallNormal)
{
	ARPawnPlayer* Player = Cast<ARPawnPlayer>(Pawn);
	if (!bCapeGlideDisabled && Player->Physics == PHYS_Flying)
	{
		((ARPawnPlayer_*)Player)->sub_016a5440(90.f, 45.f, 1.f);
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
