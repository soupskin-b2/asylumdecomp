// UnSkeletalMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

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

/* FMatrix::operator* (UnMath.h, out of line at 0x0058e560); the kit's FMatrix has no methods. */

// @baa 0x00d776d0
/* UnSkeletalMesh.cpp helper: world-space matrix of a bone, or identity for a bad index */
FMatrix GetBoneMatrix(INT BoneIndex, const TArray<FMatrix>& SpaceBases, const FMatrix& LocalToWorld)
{
    if (BoneIndex != INDEX_NONE && BoneIndex < SpaceBases.Num())
    {
        return (const FMatrix&)((const TArrayAt_<FMatrix>&)SpaceBases).At(BoneIndex) * LocalToWorld;
    }
    return FMatrix::Identity;
}

#line 42 "candidate.cpp"
