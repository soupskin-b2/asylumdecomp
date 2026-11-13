// UnActor.cpp: 15 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00784e60
bool ADynamicBlockingVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00784510
/* Editing a brush rebuilds its model's bounds. */
void ABrush::PostEditChange(UProperty* PropertyThatChanged)
{
    if (Brush)
    {
        Brush->BuildBound();
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

// @baa 0x0068ee40
/* AActor slot 0x38 (kit vf_038): UE3's AActor::IsPendingKill(): destroyed or marked for killing. */
UBOOL AActor::IsPendingKill()
{
    return bDeleteMe || this->HasAnyFlags(RF_PendingKill);
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

// @baa 0x00777440
/* Sets bOnlyOwnerSee and has the components re-attached (a full update, not transform-only). */
void AActor::sub_00777440(UBOOL bNewOnlyOwnerSee)
{
	bOnlyOwnerSee = bNewOnlyOwnerSee;
	MarkComponentsAsDirty(FALSE);
}

// @baa 0x0068f440
/* The player controller of the top of the owner chain (UE3: GetTopPlayerController). */
APlayerController* AActor::GetTopPlayerController()
{
	AActor* TopActor = this;
	while (TopActor->Owner)
	{
		TopActor = TopActor->Owner;
	}
	return TopActor->GetAPlayerController();
}

struct AActor__00784080 : public AActor
{
	void SetCollisionFromCollisionType(); /* 0x00780e30 */
	void EndTouch(AActor* Other, UBOOL NoNotifyOther); /* 0x007691a0 */
};

// @baa 0x00784080
/* UnActor.cpp: AActor::SetCollisionType(BYTE NewType) */
void AActor::sub_00784080(BYTE NewType)
{
	bNetDirty = TRUE;
	const UBOOL bOldCollideActors = bCollideActors;

	CollisionType = NewType;
	ReplicatedCollisionType = CollisionType;
	((AActor__00784080*)this)->SetCollisionFromCollisionType();

	if (bCollideActors != bOldCollideActors)
	{
		if (bCollideActors)
		{
			FindTouchingActors();
		}
		else
		{
			for (INT i = 0; i < Touching.Num(); )
			{
				if (Touching(i) != NULL)
				{
					((AActor__00784080*)Touching(i))->EndTouch(this, 0);
				}
				else
				{
					i++;
				}
			}
		}
	}
}

/* Kit gap: ABrush::CopyPosRotScaleFrom (UnActor.cpp) */
struct ABrush_ : public ABrush
{
	void CopyPosRotScaleFrom(ABrush* Other); /* 0x0075deb0 */
};

// @baa 0x0075deb0
/* Copies Other's placement (location, rotation, pre-pivot), rebuilds the bounds and the components. */
void ABrush_::CopyPosRotScaleFrom(ABrush* Other)
{
#line 3052 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp"
	check(BrushComponent);
	check(Brush);
	check(Other);
	check(Other->BrushComponent);
	check(Other->Brush);

	Location = Other->Location;
	Rotation = Other->Rotation;
	PrePivot = Other->PrePivot;

	Brush->BuildBound();
	vf_310(FALSE);
	if (!bDeleteMe && !HasAnyFlags(RF_PendingKill) && !HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
	{
		vf_314(FALSE);
	}
}

#line 205 "candidate.cpp"
