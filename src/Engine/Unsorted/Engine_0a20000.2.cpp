// Engine_0a20000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00a227f0
void USkeletalMeshComponent::execRestoreSavedAnimSets( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	RestoreSavedAnimSets();
}

#include "ue3/ConstructObject.h"

// @baa 0x00a2e460
template URB_BodySetup* ConstructObject<URB_BodySetup>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 51 "candidate.cpp"
