// UnSkeletalComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* 0x009357b0 (UE3 UpdateSkelPose; name assumed) isn't declared in Classes.h: it rebuilds the pose from the AnimTree (skipped when the
 * argument is FALSE and the component's 0x400 flag at 0x334 is set) and advances TickTag. */
struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
    void UpdateSkelPose(UBOOL bForceUpdate);
};

// @baa 0x00935c60
/* bring the pose up to date; if it didn't tick this frame, let each ticked anim node know */
void USkeletalMeshComponent::UpdateAnimations()
{
    const INT OldTickTag = TickTag;
    ((USkeletalMeshComponent_*)this)->UpdateSkelPose(FALSE);

    if (OldTickTag == TickTag && Animations)
    {
        const INT NumNodes = AnimTickArray.Num();
        for (INT i = 0; i < NumNodes; i++)
        {
            AnimTickArray(i)->vf_12c();
        }
    }
}
