// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

/* the object flag ActorIsPendingKill tests in this build */

// @baa 0x007693c0
/** marks all components for which Owner is relevant for visibility as dirty, recursing to children */
void MarkOwnerRelevantComponentsDirty(AActor* TheActor)
{
    for (INT i = 0; i < TheActor->AllComponents.Num(); i++)
    {
        UPrimitiveComponent* Primitive = Cast<UPrimitiveComponent>(TheActor->AllComponents(i));
        if (Primitive != NULL && (TheActor->bOnlyOwnerSee || Primitive->bOnlyOwnerSee || Primitive->bOwnerNoSee))
        {
            Primitive->BeginDeferredReattach();
        }
    }

    // recurse to children
    for (INT i = 0; i < TheActor->Children.Num(); i++)
    {
        AActor* Child = (AActor*)TheActor->Children(i);
        if (Child != NULL && !Child->ActorIsPendingKill())
        {
            MarkOwnerRelevantComponentsDirty(Child);
        }
    }
}
