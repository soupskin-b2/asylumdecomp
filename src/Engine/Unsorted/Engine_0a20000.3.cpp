// Engine_0a20000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x00a22700
/* Puts back the AnimSets saved off while a temporary set was in use. */
void USkeletalMeshComponent::RestoreSavedAnimSets()
{
	AnimSets.Empty();
	if (TemporarySavedAnimSets.Num() > 0)
	{
		AnimSets = TemporarySavedAnimSets;
		TemporarySavedAnimSets.Empty();
	}
}
