// UnSkeletalComponent.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

extern template UAnimTree* Cast<UAnimTree>(UObject* Src);

// @baa 0x00913fb0
/* find a skel control by name in the anim tree, if there is one */
USkelControlBase* USkeletalMeshComponent::FindSkelControl(FName InControlName)
{
    UAnimTree* Tree = Cast<UAnimTree>(Animations);
    if (Tree)
    {
        return Tree->FindSkelControl(InControlName);
    }
    return NULL;
}


// @baa 0x00913fe0
/* find a morph node by name in the anim tree, if there is one */
UMorphNodeBase* USkeletalMeshComponent::FindMorphNode(FName InNodeName)
{
    UAnimTree* Tree = Cast<UAnimTree>(Animations);
    if (Tree)
    {
        return Tree->FindMorphNode(InNodeName);
    }
    return NULL;
}

/* Unnamed in the kit: UE3's USkeletalMeshComponent::SetAttachmentOwnerVisibility(UActorComponent* Component):
 * attached primitives take this component's owner-visibility settings. The third flag is UE3's
 * bIgnoreOwnerHidden; this build reads bit 7 of 0x194, which the kit names DontDrawThisFrame. */

// @baa 0x00913f30
void USkeletalMeshComponent::SetAttachmentOwnerVisibility(UActorComponent* Component)
{
    if (bOverrideAttachmentOwnerVisibility)
    {
        UPrimitiveComponent* PrimComp = Cast<UPrimitiveComponent>(Component);
        if (PrimComp)
        {
            PrimComp->SetOwnerNoSee(bOwnerNoSee);
            PrimComp->SetOnlyOwnerSee(bOnlyOwnerSee);
            PrimComp->SetDontDrawThisFrame(DontDrawThisFrame);
        }
    }
}
