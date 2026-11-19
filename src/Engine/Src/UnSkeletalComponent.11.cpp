// UnSkeletalComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

extern template INT TArray<INT>::Add(INT Count);

// @baa 0x0092db40
/* map each of our bones to the matching bone of ParentAnimComponent's mesh */
void USkeletalMeshComponent::UpdateParentBoneMap()
{
    ParentBoneMap.Empty();

    if (SkeletalMesh && ParentAnimComponent)
    {
        USkeletalMesh* ParentMesh = ParentAnimComponent->SkeletalMesh;
        if (ParentMesh)
        {
            ParentBoneMap.Add(SkeletalMesh->RefSkeleton.Num());
            if (SkeletalMesh == ParentMesh)
            {
                // same mesh, so the map is the identity
                for (INT i = 0; i < ParentBoneMap.Num(); i++)
                {
                    ParentBoneMap(i) = i;
                }
            }
            else
            {
                for (INT i = 0; i < ParentBoneMap.Num(); i++)
                {
                    FName BoneName = SkeletalMesh->RefSkeleton(i).Name;
                    ParentBoneMap(i) = ParentMesh->MatchRefBone(BoneName);
                }
            }
        }
    }
}

#line 71 "candidate.cpp"
