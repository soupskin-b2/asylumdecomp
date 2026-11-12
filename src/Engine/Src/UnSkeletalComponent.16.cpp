// UnSkeletalComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"

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
        ((FNameArray&)BoneNames).Add(SkeletalMesh->RefSkeleton.Num());
        for (INT i = 0; i < SkeletalMesh->RefSkeleton.Num(); i++)
        {
            ((TArrayAt_<FName>&)BoneNames).At(i) = ((TArrayAt_<FMeshBone>&)SkeletalMesh->RefSkeleton).At(i).Name;
        }
    }
}

#line 56 "candidate.cpp"
