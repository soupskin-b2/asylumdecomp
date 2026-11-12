// UnSkeletalComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* 0x009357b0 (UE3 UpdateSkelPose; name assumed) isn't declared in Classes.h: it rebuilds the pose from the AnimTree (skipped when the
 * argument is FALSE and the component's 0x400 flag at 0x334 is set) and advances TickTag. */

// @baa 0x00935c60
/* bring the pose up to date; if it didn't tick this frame, let each ticked anim node know */
void USkeletalMeshComponent::UpdateAnimations()
{
    const INT OldTickTag = TickTag;
    this->UpdateSkelPose(FALSE);

    if (OldTickTag == TickTag && Animations)
    {
        const INT NumNodes = AnimTickArray.Num();
        for (INT i = 0; i < NumNodes; i++)
        {
            AnimTickArray(i)->vf_12c();
        }
    }
}

/* Unnamed in the kit: resets the ragdoll's sleep tracking (permanent fixing, damping ramp-up). */
struct USkeletalMeshComponent__0090f4e0 : public USkeletalMeshComponent
{
    void sub_0090f4e0();
};

// @baa 0x0090f4e0
void USkeletalMeshComponent__0090f4e0::sub_0090f4e0()
{
    bHasBeenPermanentlyFixed = FALSE;
    FramesPhysicsAsleep = 0;
    CurrDampingRampupTime = 0.f;
}
