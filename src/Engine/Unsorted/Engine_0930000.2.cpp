// Engine_0930000.cpp: 3 functions
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

/* USkeletalMeshComponent::SetPhysicsAsset (0x93c640) isn't declared in the kit. */
struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
    void SetPhysicsAsset(class UPhysicsAsset* NewPhysicsAsset, UBOOL bForceReInit);
};

// @baa 0x0093c7c0
void USkeletalMeshComponent::execSetPhysicsAsset(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UPhysicsAsset, NewPhysicsAsset);
    P_GET_UBOOL_OPTX(bForceReInit, FALSE);
    P_FINISH;
    ((USkeletalMeshComponent_*)this)->SetPhysicsAsset(NewPhysicsAsset, bForceReInit);
}
