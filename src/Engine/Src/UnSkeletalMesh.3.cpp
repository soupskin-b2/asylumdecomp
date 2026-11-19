// UnSkeletalMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* FMatrix::operator* (UnMath.h, out of line at 0x0058e560); the kit's FMatrix has no methods. */

// @baa 0x00d776d0
/* UnSkeletalMesh.cpp helper: world-space matrix of a bone, or identity for a bad index */
FMatrix GetBoneMatrix(INT BoneIndex, const TArray<FMatrix>& SpaceBases, const FMatrix& LocalToWorld)
{
    if (BoneIndex != INDEX_NONE && BoneIndex < SpaceBases.Num())
    {
        return (const FMatrix&)SpaceBases(BoneIndex) * LocalToWorld;
    }
    return FMatrix::Identity;
}

#line 42 "candidate.cpp"
