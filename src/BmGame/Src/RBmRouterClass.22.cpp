// RBmRouterClass.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

extern FName g_026e364c;
	/* BMGAME_AddTransientCosts */
/* Inlined here: the script-event glue for eventAddTransientCosts (0x0160e030); Classes.h declares the out-of-line
 * copy. */
struct ARBMRouteRequest_NervousSearch_ : public ARBMRouteRequest_NervousSearch
{
	FORCEINLINE void eventAddTransientCosts(FVector CentrePoint)
	{
		struct RBMRouteRequest_NervousSearch_eventAddTransientCosts_Parms
		{
			FVector CentrePoint;
		} Parms;
		Parms.CentrePoint = CentrePoint;
		ProcessEvent(FindFunctionChecked(g_026e364c), &Parms);
	}
};

// @baa 0x016113a0
/* Clears every navigation point's transient cost, then lets script block paths around the search centre. */
void ARBMRouteRequest_NervousSearch::DoPathBlocking(FVector CentrePoint)
{
	for (ANavigationPoint* Nav = GWorld->sub_009c8530(); Nav; Nav = Nav->nextNavigationPoint)
	{
		Nav->TransientCost = 0;
		Nav->sub_00856a10();
	}
	((ARBMRouteRequest_NervousSearch_*)this)->eventAddTransientCosts(CentrePoint);
}
