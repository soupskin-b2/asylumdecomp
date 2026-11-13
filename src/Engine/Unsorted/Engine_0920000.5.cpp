// Engine_0920000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC	/* appRealloc out of line, as in Empty */
#include "ue3/Classes.h"

// @baa 0x0092e930
/* UE3's USkeletalMeshComponent::ToggleInstanceVertexWeights(UBOOL bEnabled): switch to per-instance vertex
 * weights, dropping the bone pairs when they're turned off. */
void USkeletalMeshComponent::ToggleInstanceVertexWeights(UBOOL bEnabled)
{
    bAlwaysUseInstanceWeights = bEnabled;
    bNeedsInstanceWeightUpdate = TRUE;
    if (!bEnabled)
    {
        InstanceVertexWeightBones.Empty();
    }
}
