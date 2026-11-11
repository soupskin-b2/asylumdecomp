// Engine_0a20000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	void RestoreSavedAnimSets();
	void execRestoreSavedAnimSets(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00a227f0
void USkeletalMeshComponent_::execRestoreSavedAnimSets( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	RestoreSavedAnimSets();
}
