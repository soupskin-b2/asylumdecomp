// UnInteraction.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00ca0a60
void UInput::execResetInput( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResetInput();
}

#include "ue3/ConstructObject.h"

// @baa 0x00d71f80
template UGameUISceneClient* ConstructObject<UGameUISceneClient>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 51 "candidate.cpp"
