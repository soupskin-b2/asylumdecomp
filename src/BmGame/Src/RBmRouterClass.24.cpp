// RBmRouterClass.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x01611190
void ARBMRouteRequest_FindSinglePath::SetGoalForStaticAvoidance(FVector TargetPos)
{
	GoalPos = TargetPos;
	StartAnchor = NULL;
	EndAnchor = NULL;
	RState = RS_AtGoal;
	CurrentPath->ClearPath();
	if (OwningRouter->CurrentRequest == this)
	{
		OwningRouter->bFinalHeading = FALSE;
	}
}
