// RBmRouterClass.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

extern FName g_026e2788;
	/* BMGAME_SmoothEnd */
/* Kit gap: URBMRouterPath's script event glue (BmGameClasses.h) isn't declared; inline here as the generated
 * header has it (out of line at 0160e3f0). */
struct URBMRouterPath_ : public URBMRouterPath
{
	FORCEINLINE void eventSmoothEnd(class ARPawn* User, INT& NumSmoothed)
	{
		struct RBMRouterPath_eventSmoothEnd_Parms
		{
			class ARPawn* User;
			INT NumSmoothed;
		} Parms;
		Parms.User = User;
		Parms.NumSmoothed = NumSmoothed;
		ProcessEvent(FindFunctionChecked(g_026e2788), &Parms);
		NumSmoothed = Parms.NumSmoothed;
	}
};

// @baa 0x01616600
/* Smooths both ends of a path: the end in script, the start by updating it from the pawn. Returns the larger number
 * of nodes either removed. */
INT ARBMRouter::SmoothPathBothEnds(class ARPawn* User, class URBMRouterPath*& aPath)
{
	INT NumSmoothedEnd = 0;
	((URBMRouterPath_*)aPath)->eventSmoothEnd(User, NumSmoothedEnd);
	INT NumSmoothedStart;
	aPath->UpdatePath(User, NumSmoothedStart, FALSE, TRUE, FALSE);
	aPath->OldPathPos = User->Location;
	return Max(NumSmoothedEnd, NumSmoothedStart);
}
