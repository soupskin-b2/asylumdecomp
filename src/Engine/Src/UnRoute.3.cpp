// UnRoute.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x008a6d40
/* The last evaluator in the chain decides: a goal was found if one was generated. */
bool UPathGoalEvaluator::DetermineFinalGoal(ANavigationPoint*& out_GoalNav)
{
	if (NextEvaluator)
	{
		return NextEvaluator->DetermineFinalGoal(out_GoalNav);
	}
	return GeneratedGoal != NULL;
}

// @baa 0x008b6590
/* A path is fine when, from where it ends, some other usable path leads on that the pawn can take (its move flags
 * cover the path's) and lands no faster than the pawn can fall. Paths into dead ends are refused. */
UBOOL UPath_AvoidInEscapableNodes::EvaluatePath(UReachSpec* Spec, APawn* Pawn, INT& out_PathCost, INT& out_HeuristicCost)
{
	ANavigationPoint* Nav = (ANavigationPoint*)Spec->End.Actor;
	if (Nav == NULL)
	{
		return FALSE;
	}
	for (INT Idx = 0; Idx < Nav->PathList.Num(); Idx++)
	{
		UReachSpec* OtherSpec = Nav->PathList(Idx);
		if (OtherSpec && Spec != OtherSpec && OtherSpec->CostFor(Pawn) < 10000000 /* UCONST_BLOCKEDPATHCOST */ &&
			(OtherSpec->reachFlags & MoveFlags) == OtherSpec->reachFlags && OtherSpec->MaxLandingVelocity <= MaxFallSpeed)
		{
			return TRUE;
		}
	}
	return FALSE;
}
