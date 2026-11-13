// UnFracturedStaticMesh.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* The project's existing binding for UStaticMeshComponent's slot 0x250 override (0x00947280, bound as C::sub_00947280;
 * the kit doesn't declare the override on UStaticMeshComponent). */
struct C
{
    UINT sub_00947280();
};

// @baa 0x007a6fe0
/* UFracturedBaseComponent slot 0x250: BoxCollisionType forces the answer (1 = on, 2 = off); otherwise the static mesh
 * component's answer. */
UINT UFracturedBaseComponent::vf_250()
{
    switch (BoxCollisionType)
    {
    case 1:
        return TRUE;
    case 2:
        return FALSE;
    default:
        return ((C*)this)->sub_00947280();
    }
}

/* The project's existing binding for UStaticMeshComponent's slot 0x254 override (0x009472e0, bound as C_007a7000::sub_009472e0;
 * the kit doesn't declare the override on UStaticMeshComponent). */
struct C_007a7000
{
    UINT sub_009472e0();
};

// @baa 0x007a7000
/* UFracturedBaseComponent slot 0x254: LineCollisionType forces the answer (1 = on, 2 = off); otherwise the static mesh
 * component's answer. */
UINT UFracturedBaseComponent::vf_254()
{
    switch (LineCollisionType)
    {
    case 1:
        return TRUE;
    case 2:
        return FALSE;
    default:
        return ((C_007a7000*)this)->sub_009472e0();
    }
}

/* Kit gap: FRenderCommandFence::GetNumPendingFences (0x0071f7e0) isn't declared on the fence mirror. */
struct FRenderCommandFence_ : public FRenderCommandFence_Mirror
{
    UINT GetNumPendingFences() const;
};

// @baa 0x007a7060
/* Ready once the primitive component is and the render thread has released the fragment resources. */
UBOOL UFracturedBaseComponent::IsReadyForFinishDestroy()
{
    return UPrimitiveComponent::IsReadyForFinishDestroy() &&
           ((const FRenderCommandFence_&)ReleaseResourcesFence).GetNumPendingFences() == 0;
}

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
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

// @baa 0x007b8b30
/* UFracturedBaseComponent slot 0x290 (kit vf_290 with five INTs): UE3's IsElementFragmentVisible(ElementIndex,
 * FragmentIndex, InteriorElementIndex, CoreFragmentIndex, bAnyFragmentsHidden); only the fragment's visibility counts. */
INT UFracturedBaseComponent::vf_290(INT ElementIndex, INT FragmentIndex, INT InteriorElementIndex, INT CoreFragmentIndex, INT bAnyFragmentsHidden)
{
    return ((const TArrayAt_<BYTE>&)VisibleFragments).At(FragmentIndex) != 0;
}

#line 94 "candidate.cpp"

// @baa 0x007b8ac0
/* UFracturedBaseComponent slot 0x284 (kit vf_284): UE3's GetNumVisibleFragments. */
INT UFracturedBaseComponent::GetNumVisibleFragments()
{
    INT NumVisible = 0;
    for (INT i = 0; i < VisibleFragments.Num(); i++)
    {
        if (((const TArrayAt_<BYTE>&)VisibleFragments).At(i) != 0)
        {
            NumVisible++;
        }
    }
    return NumVisible;
}

struct UFracturedBaseComponent_ : public UFracturedBaseComponent
{
    UBOOL sub_007b8070(); /* 0x007b8070 */
};

// @baa 0x007b8070
/* Unnamed in the kit: whether any fragment is hidden. */
UBOOL UFracturedBaseComponent_::sub_007b8070()
{
    UBOOL bHidden = FALSE;
    for (INT i = 0; i < VisibleFragments.Num(); i++)
    {
        if (((const TArrayAt_<BYTE>&)VisibleFragments).At(i) == 0)
        {
            bHidden = TRUE;
            break;
        }
    }
    return bHidden;
}

/* The project's existing binding for UPrimitiveComponent's slot 0x118 (0x006db540, bound as C_007c5a40::sub_006db540). */
struct C_007c5a40
{
    void sub_006db540();
};

/* Unnamed in the kit (0x007c3280): move one fragment of the skinned stand-in to the given transform. */

// @baa 0x007c5a40
/* UFracturedStaticMeshComponent slot 0x118 (kit vf_118, the transform update): after the primitive update, push
 * each visible fragment's transform to the skinned component when skinned rendering is in use. */
void UFracturedStaticMeshComponent::vf_118()
{
    ((C_007c5a40*)this)->sub_006db540();
    if (bUseSkinnedRendering && SkinnedComponent != NULL)
    {
        for (INT i = 0; i < VisibleFragments.Num(); i++)
        {
            if (((TArrayAt_<BYTE>&)VisibleFragments).At(i) != 0)
            {
                SkinnedComponent->sub_007c3280(i, LocalToWorld);
            }
        }
    }
}
