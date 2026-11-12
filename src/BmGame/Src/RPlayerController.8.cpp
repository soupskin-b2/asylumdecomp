// RPlayerController.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e3194;
	/* GetPathToWithoutBeingSeenFrom */
struct ARBMRouteRequest_HideOnCorner_ : public ARBMRouteRequest_HideOnCorner
{
	class URBMRouterPath* eventGetPathToWithoutBeingSeenFrom(FVector Dest, FVector HideFromPos);
};

// @baa 0x0160dec0
/* RBMRouteRequest_HideOnCorner.GetPathToWithoutBeingSeenFrom script event: the generated glue, out of line here. */
class URBMRouterPath* ARBMRouteRequest_HideOnCorner_::eventGetPathToWithoutBeingSeenFrom(FVector Dest, FVector HideFromPos)
{
	struct RBMRouteRequest_HideOnCorner_eventGetPathToWithoutBeingSeenFrom_Parms
	{
		FVector Dest;
		FVector HideFromPos;
		class URBMRouterPath* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	Parms.Dest = Dest;
	Parms.HideFromPos = HideFromPos;
	ProcessEvent(FindFunctionChecked(g_026e3194), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3698;
	/* LockDestCorner */
struct ARBMRouteRequest_HideOnCorner__0160de60 : public ARBMRouteRequest_HideOnCorner
{
	void eventLockDestCorner();
};

// @baa 0x0160de60
/* RBMRouteRequest_HideOnCorner.LockDestCorner script event: the generated glue, out of line here. */
void ARBMRouteRequest_HideOnCorner__0160de60::eventLockDestCorner()
{
	ProcessEvent(FindFunctionChecked(g_026e3698), NULL);
}

extern FName g_026e2dc8;
	/* UnlockDestCorner */
struct ARBMRouteRequest_HideOnCorner__0160de90 : public ARBMRouteRequest_HideOnCorner
{
	void eventUnlockDestCorner();
};

// @baa 0x0160de90
/* RBMRouteRequest_HideOnCorner.UnlockDestCorner script event: the generated glue, out of line here. */
void ARBMRouteRequest_HideOnCorner__0160de90::eventUnlockDestCorner()
{
	ProcessEvent(FindFunctionChecked(g_026e2dc8), NULL);
}

extern FName g_026e3474;
	/* GrappleStopCollidingWorld */
struct ARPlayerController_ : public ARPlayerController
{
	void eventGrappleStopCollidingWorld();
};

// @baa 0x016122c0
/* RPlayerController.GrappleStopCollidingWorld script event: the generated glue, out of line here. */
void ARPlayerController_::eventGrappleStopCollidingWorld()
{
	ProcessEvent(FindFunctionChecked(g_026e3474), NULL);
}

extern FName g_026e3a48;
	/* SearchNewAmbientSound */
struct ARPlayerController__016125c0 : public ARPlayerController
{
	void eventSearchNewAmbientSound();
};

// @baa 0x016125c0
/* RPlayerController.SearchNewAmbientSound script event: the generated glue, out of line here. */
void ARPlayerController__016125c0::eventSearchNewAmbientSound()
{
	ProcessEvent(FindFunctionChecked(g_026e3a48), NULL);
}

/* ARPlayerController::ShouldIReallyLand (0x16181f0) isn't declared in the kit. */
struct ARPlayerController__016f93c0 : public ARPlayerController
{
    UBOOL ShouldIReallyLand(class AActor* HitFloor, FVector& HitNormal);
};

// @baa 0x016f93c0
void ARPlayerController::execShouldIReallyLand(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, HitFloor);
    P_GET_STRUCT_REF(FVector, HitNormal);
    P_FINISH;
    *(UBOOL*)Result = ((ARPlayerController__016f93c0*)this)->ShouldIReallyLand(HitFloor, HitNormal);
}

// @baa 0x0171daf0
void ARPlayerController::execCheckContentExists(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(Path);
    P_FINISH;
    *(UBOOL*)Result = CheckContentExists(Path);
}

// @baa 0x0171dbb0
void ARPlayerController::execIsMoviePresent(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(Path);
    P_FINISH;
    *(UBOOL*)Result = IsMoviePresent(Path);
}
