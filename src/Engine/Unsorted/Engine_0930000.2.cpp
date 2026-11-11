// Engine_0930000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	void ForceSkelUpdate();
	void execForceSkelUpdate(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0093c8d0
void USkeletalMeshComponent_::execForceSkelUpdate( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ForceSkelUpdate();
}

struct USkeletalMeshComponent__0093c900 : public USkeletalMeshComponent
{
	void StopFaceFXAnim();
	void execStopFaceFXAnim(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0093c900
void USkeletalMeshComponent__0093c900::execStopFaceFXAnim( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	StopFaceFXAnim();
}
