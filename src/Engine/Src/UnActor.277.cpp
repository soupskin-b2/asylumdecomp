// UnActor.cpp: 11 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00784e60
bool ADynamicBlockingVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

/* Kit gap: UModel::BuildBound() (0x0081ced0) isn't declared. */
struct UModel_ : public UModel
{
    void BuildBound(); /* 0x0081ced0 */
};

// @baa 0x00784510
/* Editing a brush rebuilds its model's bounds. */
void ABrush::PostEditChange(UProperty* PropertyThatChanged)
{
    if (Brush)
    {
        ((UModel_*)Brush)->BuildBound();
    }
    Super::PostEditChange(PropertyThatChanged);
}

/* Unnamed in the kit: UE3's AActor::GetTopOwner() (the last actor up the Owner chain). */
struct AActor_ : public AActor
{
    AActor* sub_0068f1e0();
};

// @baa 0x0068f1e0
AActor* AActor_::sub_0068f1e0()
{
    AActor* Top;
    for (Top = this; Top->Owner; Top = Top->Owner);
    return Top;
}

/* Kit gap: UObject::HasAnyFlags and RF_PendingKill (UnObjBas.h); ObjectFlags is an FQWord here. */
#define RF_PendingKill ((QWORD)0x2000000000000000)
struct UObject_ : public UObject
{
    FORCEINLINE UBOOL HasAnyFlags(QWORD Flags) const { return (*(const QWORD*)&ObjectFlags & Flags) != 0; }
};

// @baa 0x0068ee40
/* AActor slot 0x38 (kit vf_038): UE3's AActor::IsPendingKill(): destroyed or marked for killing. */
UBOOL AActor::IsPendingKill()
{
    return bDeleteMe || ((UObject_*)this)->HasAnyFlags(RF_PendingKill);
}

/* DECLARE_CLASS glue: compares AGameInfo's StaticConfigName (0x00754150, returns "Game") with the base one
 * (0x0053f6c0, returns "Engine"); both are bound as INT-returning free functions. */
INT sub_00754150();
INT sub_0053f6c0();
// @baa 0x00756930
INT AGameInfo::vf_000()
{
    return sub_00754150 == sub_0053f6c0;
}

// @baa 0x00777400
void AActor::SetDrawScale(FLOAT NewScale)
{
	DrawScale = NewScale;
	MarkComponentsAsDirty();
	bNetDirty = TRUE;
}

// @baa 0x00777420
void AActor::SetDrawScale3D(FVector NewScale3D)
{
	DrawScale3D = NewScale3D;
	MarkComponentsAsDirty();
}

// @baa 0x0075de60
UBOOL AActor::SupportsKismetModification(USequenceOp* AskingOp, FString& Reason)
{
	if (bStatic && RemoteRole == ROLE_None && !bForceAllowKismetModification)
	{
		Reason = TEXT("Actor is static");
		return FALSE;
	}
	if (bTearOff)
	{
		Reason = TEXT("Actor is dead");
		return FALSE;
	}
	return TRUE;
}

// @baa 0x00777460
void AActor::SetHidden(UBOOL bNewHidden)
{
	if (bHidden != bNewHidden)
	{
		bHidden = bNewHidden;
		bNetDirty = TRUE;
		MarkComponentsAsDirty(FALSE);
	}
}

// @baa 0x0068f470
void AActor::GetActorReferences(TArray<FActorReference*>& ActorRefs, UBOOL bIsRemovingLevel)
{
	for (INT ComponentIndex = 0; ComponentIndex < Components.Num(); ComponentIndex++)
	{
		if (Components(ComponentIndex))
		{
			Components(ComponentIndex)->GetActorReferences(ActorRefs, bIsRemovingLevel);
		}
	}
}

// @baa 0x0068f1a0
/* Slot 0x350 (unnamed in the kit): the point other actors should look at or go to; by default the actor's location. */
FVector AActor::vf_350()
{
	return Location;
}
