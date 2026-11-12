// UnAnimPlay.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00c4d1b0
/* UE3's UAnimNodeSequence::BeginDestroy(): stop a camera anim this node is playing and let it be released. */
void UAnimNodeSequence::BeginDestroy()
{
    if (ActiveCameraAnimInstance)
    {
        /* UE3 UCameraAnimInst::Stop(UBOOL bImmediate) */
        ActiveCameraAnimInstance->sub_007880c0(TRUE);
        ActiveCameraAnimInstance->bAutoReleaseWhenFinished = TRUE;
        ActiveCameraAnimInstance = NULL;
    }
    Super::BeginDestroy();
}

// @baa 0x00c4afa0
/* UAnimNodeSequence slot 0x194 (kit vf_194, UE3 GetAnimPlaybackLength()): the sequence length at the current global
 * play rate (vf_190, UE3 GetGlobalPlayRate()). */
FLOAT UAnimNodeSequence::vf_194()
{
    if (AnimSeq)
    {
        const FLOAT Rate = vf_190();
        if (Rate != 0.f)
        {
            return AnimSeq->SequenceLength / Rate;
        }
    }
    return 0.f;
}

/* Unnamed in the kit (as UnSkeletalAnim.cpp declares them): UE3's USkeletalMeshComponent::UpdateSkelPose(FLOAT DeltaTime,
 * UBOOL bTellChildren) (this build has a third flag), and UActorComponent's "if (bAttached) UpdateTransform()" through
 * slot 0x118. */
struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
    void sub_0093b170(FLOAT DeltaTime, UBOOL bTellChildren, UBOOL Unknown);
};

struct UActorComponent_ : public UActorComponent
{
    void sub_00759620();
};

// @baa 0x00c4aeb0
/* UE3's UAnimNodeSequence::PostEditChange(UProperty* PropertyThatChanged): pick up a changed AnimSeqName and refresh the
 * mesh's pose. */
void UAnimNodeSequence::PostEditChange(UProperty* PropertyThatChanged)
{
    SetAnim(AnimSeqName);
    if (SkelComponent && SkelComponent->bAttached)
    {
        ((USkeletalMeshComponent_*)SkelComponent)->sub_0093b170(0.f, TRUE, FALSE);
        ((UActorComponent_*)SkelComponent)->sub_00759620();
    }
    Super::PostEditChange(PropertyThatChanged);
}
