// UnSkeletalComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

extern template INT TArray<INT>::Add(INT Count);
/* USkeletalMesh::MatchRefBone (0x00976be0) isn't declared in Classes.h. */


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
                    ((TArrayAt_<INT>&)ParentBoneMap).At(i) = i;
                }
            }
            else
            {
                for (INT i = 0; i < ParentBoneMap.Num(); i++)
                {
                    FName BoneName = ((TArrayAt_<FMeshBone>&)SkeletalMesh->RefSkeleton).At(i).Name;
                    ((TArrayAt_<INT>&)ParentBoneMap).At(i) = ParentMesh->MatchRefBone(BoneName);
                }
            }
        }
    }
}

#line 71 "candidate.cpp"
