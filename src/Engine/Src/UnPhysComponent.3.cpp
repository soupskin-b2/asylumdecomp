// UnPhysComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    using TArray<T>::ArrayNum;
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

// @baa 0x00a14920
/* UE3's USkeletalMeshComponent::IsBoneHidden(INT BoneIndex) (execIsBoneHidden's native). */
UBOOL USkeletalMeshComponent::sub_00a14920(INT BoneIndex)
{
    if (BoneVisibility.Num() == 0)
    {
        return FALSE;
    }
    if (BoneIndex != INDEX_NONE)
    {
        return ((TArrayAt_<BYTE>&)BoneVisibility).At(BoneIndex) == 0;
    }
    return FALSE;
}

#line 35 "candidate.cpp"

// @baa 0x00a14870
/* UE3's USkeletalMeshComponent::UnHideBone(INT BoneIndex) (execUnHideBone's native): restore the bone's scale
 * and mark it visible. */
void USkeletalMeshComponent::sub_00a14870(INT BoneIndex)
{
    if (BoneVisibility.Num() && BoneIndex != INDEX_NONE)
    {
        ((TArrayAt_<FBoneAtom>&)LocalAtoms).At(BoneIndex).Scale = 1.f;
        ((TArrayAt_<BYTE>&)BoneVisibility).At(BoneIndex) = 1;
    }
}
