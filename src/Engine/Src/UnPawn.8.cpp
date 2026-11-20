// UnPawn.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

/* Cast<T> is out of line for this T in the exe (006b0290) */
extern template UPrimitiveComponent* Cast<UPrimitiveComponent>(UObject* Src);
// @baa 0x00764820
/* TRUE if the actor has a collision component and it is the only component that collides with actors */
UBOOL AActor::sub_00764820()
{
    if (!CollisionComponent)
    {
        return FALSE;
    }

    for (INT ComponentIdx = 0; ComponentIdx < AllComponents.Num(); ComponentIdx++)
    {
        UPrimitiveComponent* Primitive = Cast<UPrimitiveComponent>(AllComponents(ComponentIdx));
        if (Primitive && Primitive->CollideActors && Primitive != CollisionComponent)
        {
            return FALSE;
        }
    }
    return TRUE;
}

#line 53 "candidate.cpp"
