// RPlayerController.cpp: 1 function
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
