// UnSkeletalComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
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

/* FName(EName) (UnName.h); the kit's FName has no constructors. */
struct FName_ : public FName
{
    FName_(EName N) { Index = N; Number = 0; }
};

// @baa 0x0091d470
/* GetBoneName(BoneIndex) inlined: the bone's name, or NAME_None for a bad index */
void USkeletalMeshComponent::execGetBoneName(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(BoneIndex);
    P_FINISH;
    *(FName*)Result = (SkeletalMesh && BoneIndex >= 0 && BoneIndex < SkeletalMesh->RefSkeleton.Num()) ? ((TArrayAt_<FMeshBone>&)SkeletalMesh->RefSkeleton).At(BoneIndex).Name : (const FName&)FName_(NAME_None);
}

#line 42 "candidate.cpp"
