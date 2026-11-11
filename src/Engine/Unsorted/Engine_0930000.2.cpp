// Engine_0930000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0093c8d0
void USkeletalMeshComponent::execForceSkelUpdate( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ForceSkelUpdate();
}

// @baa 0x0093c900
void USkeletalMeshComponent::execStopFaceFXAnim( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	StopFaceFXAnim();
}
