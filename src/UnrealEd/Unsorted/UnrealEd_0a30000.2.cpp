// UnrealEd_0a30000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	void UpdateSoftBodyParams();
	void execUpdateSoftBodyParams(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00a339c0
void USkeletalMeshComponent_::execUpdateSoftBodyParams( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateSoftBodyParams();
}
