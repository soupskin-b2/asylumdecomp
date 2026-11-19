// UnSkeletalComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"

/* TArray<FName>::Add(INT Count), out of line here (0x00544320). */
struct FNameArray : public TArray<FName>
{
    INT Add(INT Count);
};

// @baa 0x0092d550
void USkeletalMeshComponent::execGetBoneNames(FFrame& Stack, RESULT_DECL)
{
    P_GET_TARRAY_REF(FName, BoneNames);
    P_FINISH;

    // GetBoneNames, inlined: the names of all bones in the ref skeleton, in order
    if (SkeletalMesh == NULL)
    {
        BoneNames.Empty();
    }
    else
    {
        BoneNames.Empty(SkeletalMesh->RefSkeleton.Num());
        BoneNames.Add(SkeletalMesh->RefSkeleton.Num());
        for (INT i = 0; i < SkeletalMesh->RefSkeleton.Num(); i++)
        {
            BoneNames(i) = SkeletalMesh->RefSkeleton(i).Name;
        }
    }
}

#line 56 "candidate.cpp"
