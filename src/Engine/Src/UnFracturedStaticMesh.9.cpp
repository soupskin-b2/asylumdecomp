// UnFracturedStaticMesh.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* UnMemory.h (memcpy, which the compiler emits as a call to the CRT copy) */
#define appMemcpy memcpy
/* TArray<FMatrix> (e.g. USkeletalMesh::RefBasesInvMatrix) */
struct FMatrixArray : public TArray<FMatrix>
{
    void Copy(const TArray<FMatrix>& Source);
};

// @baa 0x007bec40
/* TArray::Copy for a bitwise-copyable element (Array.h), out of line here */
void FMatrixArray::Copy(const TArray<FMatrix>& Source)
{
    if (this != &Source)
    {
        if (Source.Num() > 0)
        {
            Empty(Source.Num());
            appMemcpy(GetData(), &Source(0), sizeof(FMatrix) * Source.Num());
            ArrayNum = Source.Num();
        }
        else
        {
            Empty();
        }
    }
}

/* TArray::AddZeroed (UE3 Array.h; not in the kit's TArray). */
template<class T> FORCEINLINE INT AddZeroed_(TArray<T>& Array, INT Count)
{
    const INT Index = Array.Add(Count);
    appMemzero((BYTE*)Array.GetData() + Index * sizeof(T), Count * sizeof(T));
    return Index;
}

// @baa 0x007c3280
/* UE3's UFracturedSkinnedMeshComponent::SetFragmentTransform: size the transform array to the fragment count,
 * store the fragment's transform and queue a transform update. */
void UFracturedSkinnedMeshComponent::sub_007c3280(INT FragmentIndex, const FMatrix& LocalToWorld)
{
    if (VisibleFragments.Num() != FragmentTransforms.Num())
    {
        FragmentTransforms.Empty();
        AddZeroed_(FragmentTransforms, VisibleFragments.Num());
    }
#line 1890 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnFracturedStaticMesh.cpp"
    check(FragmentIndex >= 0 && FragmentIndex < VisibleFragments.Num());
    FragmentTransforms(FragmentIndex) = LocalToWorld;
    BeginDeferredUpdateTransform();
    bFragmentTransformsChanged = TRUE;
}

#line 66 "candidate.cpp"
