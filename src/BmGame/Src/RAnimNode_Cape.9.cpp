// RAnimNode_Cape.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* Kit gap: the two level-transition rebuilds this calls (0x0158c5b0, 0x0158c560; names guessed) aren't declared; both are static
 * (they walk every transition in the world themselves). */

// @baa 0x015909c0
/* Keeps the streaming size hint sane, then rebuilds the transition bookkeeping. */
void ARLevelTransition::PostEditChange(UProperty* PropertyThatChanged)
{
	StreamingSizeScaleHint.X = Max(StreamingSizeScaleHint.X, 0.1f);
	StreamingSizeScaleHint.Y = Max(StreamingSizeScaleHint.Y, 0.1f);
	StreamingSizeScaleHint.Z = Max(StreamingSizeScaleHint.Z, 0.1f);
	ARLevelTransition::RebuildTransitionLinks();
	ARLevelTransition::RebuildLevelTransitionList();
	Super::PostEditChange(PropertyThatChanged);
}
