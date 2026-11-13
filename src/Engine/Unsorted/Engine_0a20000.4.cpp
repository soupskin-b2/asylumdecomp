// Engine_0a20000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* the out-of-line TArray<UAnimSet*> assignment */
template void TArray<UAnimSet*>::operator=(const TArray<UAnimSet*>& Other);

// @baa 0x00a22770
/* UnSkeletalComponent.cpp: saves the AnimSets so RestoreSavedAnimSets can put them back (only the first save counts). */
void USkeletalMeshComponent::execSaveAnimSets(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	if (TemporarySavedAnimSets.Num() == 0)
	{
		TemporarySavedAnimSets.Empty();
		TemporarySavedAnimSets = AnimSets;
	}
}
