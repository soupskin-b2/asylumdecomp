// UnRoute.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x008a6c50
INT UPath_AvoidInEscapableNodes::CachePawnReacFlags(APawn* P)
{
	Radius = P->bCanCrouch ? appTrunc(P->CrouchRadius) : appTrunc(P->CylinderComponent->CollisionRadius);
	Height = P->bCanCrouch ? appTrunc(P->CrouchHeight) : appTrunc(P->CylinderComponent->CollisionHeight);
	MaxFallSpeed = appTrunc(P->MaxFallSpeed * P->AIMaxFallSpeedFactor);	/* APawn::GetAIMaxFallSpeed() */
	return MoveFlags = P->calcMoveFlags();
}

// @baa 0x008a6e20
/* Keeps the reachable goal with the lowest remaining path weight; never ends the search. */
UBOOL UGoal_Null::EvaluateGoal(ANavigationPoint*& PossibleGoal, APawn* Pawn)
{
	if (PossibleGoal->bestPathWeight > 0)
	{
		if (GeneratedGoal == NULL || PossibleGoal->bestPathWeight - PossibleGoal->visitedWeight < GeneratedGoal->bestPathWeight - GeneratedGoal->visitedWeight)
		{
			GeneratedGoal = PossibleGoal;
		}
	}
	return FALSE;
}

// @baa 0x008a6aa0
/* EvaluatePath(Spec, Pawn, out_PathCost, out_HeuristicCost): paths past MaxTraversalDist are
 * rejected, or with bSoft penalized by the overshoot plus SoftStartPenalty. */
UBOOL UPath_WithinTraversalDist::EvaluatePath(UReachSpec* Spec, APawn* Pawn, INT& out_PathCost, INT& out_HeuristicCost)
{
	INT& PathCost = out_PathCost;
	if (Spec->Start->visitedWeight + PathCost > MaxTraversalDist)
	{
		if (bSoft)
		{
			PathCost += appTrunc(PathCost - MaxTraversalDist + SoftStartPenalty);
		}
		else
		{
			return FALSE;
		}
	}
	return TRUE;
}
