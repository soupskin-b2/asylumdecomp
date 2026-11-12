// RAnimNode_Cape.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct FMatrix_ : FMatrix
{
    FMatrix operator*(const FMatrix& Other) const; /* 0x0058e560 */
};

struct USkeletalMesh_ : USkeletalMesh
{
    FMatrix GetRefPoseMatrix(INT BoneIndex) const; /* 0x00951c70 */
};

struct URAnimNode_Cape_ : URAnimNode_Cape
{
    void sub_01569ea0(INT boneIndex, FMatrix& BoneMatrix); /* 0x01569ea0 */
    void sub_0156e4a0(INT boneIndex, FMatrix& BoneMatrix); /* 0x0156e4a0 */
};

// @baa 0x0156e4a0
void URAnimNode_Cape_::sub_0156e4a0(INT boneIndex, FMatrix& BoneMatrix)
{
#line 1150 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(BoneRefSpaceBaseNoParentCache.Num() != 0);
    if (BoneRefSpaceBaseNoParentCache.Num() != 0)
    {
#line 1155 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
        check(boneIndex < BoneRefSpaceBaseNoParentCache.Num());
        BoneMatrix = BoneRefSpaceBaseNoParentCache(boneIndex);
    }
    else
    {
        sub_01569ea0(boneIndex, BoneMatrix);
    }

    USkeletalMeshComponent* pCapeSkeletalMeshComponent = SkelComponent;
#line 1170 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(pCapeSkeletalMeshComponent != NULL);
    USkeletalMesh* pCapeSkeletalMesh = pCapeSkeletalMeshComponent->SkeletalMesh;
#line 1172 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(pCapeSkeletalMesh != NULL);
#line 1174 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNode_Cape.cpp"
    check(boneIndex < pCapeSkeletalMesh->RefSkeleton.Num());

    const TArray<INT>& ParentBoneMap = SkelComponent->ParentBoneMap;
    const INT ParentBoneIndex = ParentBoneMap(0);
    FMatrix ParentMatrix;
    if (ParentBoneIndex != INDEX_NONE)
    {
        USkeletalMeshComponent* ParentComponent = SkelComponent->ParentAnimComponent;
        ParentMatrix = (ParentComponent->bUsePrePhysicsSpaceBases
            ? ParentComponent->PrePhysicsSpaceBases
            : ParentComponent->SpaceBases)(ParentBoneIndex);
    }
    else
    {
        ParentMatrix = static_cast<const USkeletalMesh_*>(pCapeSkeletalMesh)->GetRefPoseMatrix(0);
    }
    BoneMatrix = static_cast<const FMatrix_&>(BoneMatrix) * ParentMatrix;
}

#line 65 "candidate.cpp"
