// UnPhysComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00a14920
/* UE3's USkeletalMeshComponent::IsBoneHidden(INT BoneIndex) (execIsBoneHidden's native). */
UBOOL USkeletalMeshComponent::IsBoneHidden(INT BoneIndex)
{
    if (BoneVisibility.Num() == 0)
    {
        return FALSE;
    }
    if (BoneIndex != INDEX_NONE)
    {
        return BoneVisibility(BoneIndex) == 0;
    }
    return FALSE;
}

#line 35 "candidate.cpp"

// @baa 0x00a14870
/* UE3's USkeletalMeshComponent::UnHideBone(INT BoneIndex) (execUnHideBone's native): restore the bone's scale
 * and mark it visible. */
void USkeletalMeshComponent::UnHideBone(INT BoneIndex)
{
    if (BoneVisibility.Num() && BoneIndex != INDEX_NONE)
    {
        LocalAtoms(BoneIndex).Scale = 1.f;
        BoneVisibility(BoneIndex) = 1;
    }
}
