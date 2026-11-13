// UnActorComponent.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x0075e840
/* UActorComponent slot 0x20 (kit vf_020): UE3's UActorComponent::BeginDestroy(): detach if still attached and
 * forget the scene and owner before the object-level BeginDestroy. */
void UActorComponent::BeginDestroy()
{
    if (bAttached)
    {
        Detach(FALSE);
    }
    Scene.Dummy = 0;
    Owner = NULL;
    Super::BeginDestroy();
}

/* GetOuter() is a macro here so the check text reads as in the original. */

#define GetOuter() Outer
// @baa 0x0075e870
/* UActorComponent slot 0x088 (kit vf_088): UE3's UActorComponent::NeedsLoadForClient(): only when the outer loads on
 * the client and the component isn't marked not-for-client. */
INT UActorComponent::vf_088()
{
#line 501 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp"
    check(GetOuter());
    return GetOuter()->vf_088() && !this->HasAnyFlags(RF_NotForClient);
}

#line 40 "candidate.cpp"

/* GetOuter() is a macro here so the check text reads as in the original. */
// @baa 0x0075e8c0
/* UActorComponent slot 0x08c (kit vf_08c): UE3's UActorComponent::NeedsLoadForServer(): only when the outer loads on
 * the server and the component isn't marked not-for-server. */
INT UActorComponent::vf_08c()
{
#line 508 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp"
    check(GetOuter());
    return GetOuter()->vf_08c() && !this->HasAnyFlags(RF_NotForServer);
}

#line 55 "candidate.cpp"

// @baa 0x007596c0
/* Marks the transform dirty; static owners update their components now (slot 0x314, UE3 ConditionalUpdateComponents),
 * an ownerless attached component updates itself (slot 0x118, UE3 UpdateTransform). */
void UActorComponent::BeginDeferredUpdateTransform()
{
    bNeedsUpdateTransform = TRUE;
    if (Owner)
    {
        if ((Owner->bStatic || Owner->bExtraStasis) && !(Owner->bDeleteMe || Owner->HasAnyFlags(RF_PendingKill))
            && !Owner->HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
        {
            Owner->vf_314(FALSE);
        }
    }
    else if (bAttached)
    {
        vf_118();
    }
}
