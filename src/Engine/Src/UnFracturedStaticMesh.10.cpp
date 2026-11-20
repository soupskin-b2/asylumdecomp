// UnFracturedStaticMesh.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x007a6fe0
/* UFracturedBaseComponent slot 0x250: BoxCollisionType forces the answer (1 = on, 2 = off); otherwise the static mesh
 * component's answer. */
UINT UFracturedBaseComponent::GetUseSimpleBoxCollision()
{
    switch (BoxCollisionType)
    {
    case 1:
        return TRUE;
    case 2:
        return FALSE;
    default:
        return UStaticMeshComponent::GetUseSimpleBoxCollision();
    }
}

// @baa 0x007a7000
/* UFracturedBaseComponent slot 0x254: LineCollisionType forces the answer (1 = on, 2 = off); otherwise the static mesh
 * component's answer. */
UINT UFracturedBaseComponent::GetUseSimpleLineCollision()
{
    switch (LineCollisionType)
    {
    case 1:
        return TRUE;
    case 2:
        return FALSE;
    default:
        return UStaticMeshComponent::GetUseSimpleLineCollision();
    }
}

// @baa 0x007a7060
/* Ready once the primitive component is and the render thread has released the fragment resources. */
UBOOL UFracturedBaseComponent::IsReadyForFinishDestroy()
{
    return UPrimitiveComponent::IsReadyForFinishDestroy() &&
           ReleaseResourcesFence.GetNumPendingFences() == 0;
}

// @baa 0x007b8b30
/* UFracturedBaseComponent slot 0x290: UE3's IsElementFragmentVisible(ElementIndex,
 * FragmentIndex, InteriorElementIndex, CoreFragmentIndex, bAnyFragmentsHidden); only the fragment's visibility counts. */
UBOOL UFracturedBaseComponent::IsElementFragmentVisible(INT ElementIndex, INT FragmentIndex, INT InteriorElementIndex, INT CoreFragmentIndex, UBOOL bAnyFragmentsHidden)
{
    return ((const TArray<BYTE>&)VisibleFragments)(FragmentIndex) != 0;
}

#line 94 "candidate.cpp"

// @baa 0x007b8ac0
/* UFracturedBaseComponent slot 0x284: UE3's GetNumVisibleFragments. */
INT UFracturedBaseComponent::GetNumVisibleFragments()
{
    INT NumVisible = 0;
    for (INT i = 0; i < VisibleFragments.Num(); i++)
    {
        if (((const TArray<BYTE>&)VisibleFragments)(i) != 0)
        {
            NumVisible++;
        }
    }
    return NumVisible;
}


// @baa 0x007b8070
/* Whether any fragment is hidden. */
UBOOL UFracturedBaseComponent::sub_007b8070()
{
    UBOOL bHidden = FALSE;
    for (INT i = 0; i < VisibleFragments.Num(); i++)
    {
        if (((const TArray<BYTE>&)VisibleFragments)(i) == 0)
        {
            bHidden = TRUE;
            break;
        }
    }
    return bHidden;
}

/* Move one fragment of the skinned stand-in to the given transform. */

// @baa 0x007c5a40
/* After the primitive's transform update, push
 * each visible fragment's transform to the skinned component when skinned rendering is in use. */
void UFracturedStaticMeshComponent::UpdateTransform()
{
    Super::UpdateTransform();
    if (bUseSkinnedRendering && SkinnedComponent != NULL)
    {
        for (INT i = 0; i < VisibleFragments.Num(); i++)
        {
            if (VisibleFragments(i) != 0)
            {
                SkinnedComponent->sub_007c3280(i, LocalToWorld);
            }
        }
    }
}
