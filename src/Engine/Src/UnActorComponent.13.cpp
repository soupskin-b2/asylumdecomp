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

/* Kit gap: UObject::GetOuter and HasAnyFlags (UnObjBas.h); ObjectFlags is an FQWord here. GetOuter() is a macro
 * so the check text reads as in the original. */
#define RF_NotForClient ((QWORD)0x0010000000000000)

#define GetOuter() Outer
// @baa 0x0075e870
/* UActorComponent slot 0x088 (kit vf_088): UE3's UActorComponent::NeedsLoadForClient(): only when the outer loads on
 * the client and the component isn't marked not-for-client. */
INT UActorComponent::vf_088()
{
#line 501 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp"
    check(GetOuter());
    return GetOuter()->vf_088() && !((const UObject*)this)->HasAnyFlags(RF_NotForClient);
}

#line 40 "candidate.cpp"

/* Kit gap: UObject::GetOuter and HasAnyFlags (UnObjBas.h); ObjectFlags is an FQWord here. GetOuter() is a macro
 * so the check text reads as in the original. */
#define RF_NotForServer ((QWORD)0x0020000000000000)
// @baa 0x0075e8c0
/* UActorComponent slot 0x08c (kit vf_08c): UE3's UActorComponent::NeedsLoadForServer(): only when the outer loads on
 * the server and the component isn't marked not-for-server. */
INT UActorComponent::vf_08c()
{
#line 508 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp"
    check(GetOuter());
    return GetOuter()->vf_08c() && !((const UObject*)this)->HasAnyFlags(RF_NotForServer);
}

#line 55 "candidate.cpp"

/* Kit gap: UObject::HasAnyFlags and the RF_ flags (UnObjBas.h); ObjectFlags is an FQWord here. */
#define RF_ClassDefaultObject ((QWORD)0x0000000000000200)
#define RF_ArchetypeObject ((QWORD)0x0000000000000400)
#define RF_PendingKill ((QWORD)0x2000000000000000)
/* Unnamed in the kit: UE3's UActorComponent::BeginDeferredUpdateTransform(). */
struct UActorComponent_ : public UActorComponent
{
    void sub_007596c0();
};

// @baa 0x007596c0
/* Marks the transform dirty; static owners update their components now (slot 0x314, UE3 ConditionalUpdateComponents),
 * an ownerless attached component updates itself (slot 0x118, UE3 UpdateTransform). */
void UActorComponent_::sub_007596c0()
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
