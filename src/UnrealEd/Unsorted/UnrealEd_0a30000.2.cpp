// UnrealEd_0a30000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00a339c0
void USkeletalMeshComponent::execUpdateSoftBodyParams( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateSoftBodyParams();
}

// @baa 0x00a33a50
void USkeletalMeshComponent::execSetSoftBodyFrozen(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewFrozen);
	P_FINISH;
	sub_00a339f0(bNewFrozen);
}
