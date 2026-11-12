// UnRoute.cpp: 1 function
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
