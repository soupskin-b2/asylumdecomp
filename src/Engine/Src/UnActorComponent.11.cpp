// UnActorComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

/* Cast<T> is out of line for this T in the exe (006b0420) */
extern template USkeletalMeshComponent* Cast<USkeletalMeshComponent>(UObject* Src);
/* File-static helper in UnActorComponent.cpp (00765b90, matched): detaches Component from SkelComp or from any
 * skeletal mesh attached below it. */
UBOOL DetachComponentFromSkelComp(UActorComponent* Component, USkeletalMeshComponent* SkelComp);
// @baa 0x00765c40
/* Detaches the component from whatever it's attached to: its owner, or a skeletal mesh component of the owner
 * it's attached to; with no owner, detaches it directly. */
void UActorComponent::DetachFromAny()
{
    if (bAttached)
    {
        if (Owner == NULL)
        {
            Detach(FALSE);
            Scene.Dummy = 0;
            Owner = NULL;
        }
        else
        {
            Owner->DetachComponent(this); // DetachComponent
            if (bAttached)
            {
                for (INT CompIdx = 0; CompIdx < Owner->AllComponents.Num(); CompIdx++)
                {
                    USkeletalMeshComponent* SkelComp = Cast<USkeletalMeshComponent>(Owner->AllComponents(CompIdx));
                    if (SkelComp && DetachComponentFromSkelComp(this, SkelComp))
                    {
                        break;
                    }
                }
            }
        }
    }
}

#line 58 "candidate.cpp"
