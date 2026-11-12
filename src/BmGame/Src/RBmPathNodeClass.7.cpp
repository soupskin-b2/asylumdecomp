// RBmPathNodeClass.cpp: 13 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_006837e0();
// @baa 0x01605da0
void sub_01605da0(void) { sub_006837e0(); }

// @baa 0x015dfb70
INT ARBMPathNode_FenceJump::vf_29c(INT P)
{
    return vf_3bc(1);
}

// @baa 0x015e00f0
INT ARBMPathNode_GapJump::vf_29c(INT P)
{
    return vf_3bc(1);
}

// @baa 0x015e0a20
INT ARCornerPointBase::vf_29c(INT P)
{
    return vf_358(1);
}

struct ARBMPathNode_GapJump_ : public ARBMPathNode_GapJump
{
    void sub_0083f0c0();
};

// @baa 0x015e0110
void ARBMPathNode_GapJump::vf_180()
{
    Proxy1 = NULL;
    Proxy2 = NULL;
    ((ARBMPathNode_GapJump_*)this)->sub_0083f0c0();
}

struct ARBMAIController_ : public ARBMAIController
{
    INT sub_015ef760(INT A, INT* B, INT C);
    INT vf_424(INT A, INT B, INT C, INT D, INT E);
};

// @baa 0x015f1f50
INT ARBMAIController_::vf_424(INT A, INT B, INT C, INT D, INT E)
{
    return sub_015ef760(A, &B, E);
}

/* Kit gap: the shared visibility test both CanSeeActor overloads forward to (0x015ef760; the view position is
 * optional) isn't declared. */
struct ARBMAIController__015f1f30 : public ARBMAIController
{
    FLOAT CanSeeActorInternal(AActor* TestActor, const FVector* TestPos, UBOOL bEarlyOut); /* 0x015ef760 */
};

// @baa 0x015f1f30
/* How well the controller sees TestActor from its own view point. */
FLOAT ARBMAIController::CanSeeActor(AActor* TestActor, UBOOL bEarlyOut)
{
    return ((ARBMAIController__015f1f30*)this)->CanSeeActorInternal(TestActor, NULL, bEarlyOut);
}

// @baa 0x015e1090
/* Batman takes cover at the stored position, facing away from the marker (yaw + 180 degrees). */
void ARCornerWallMarkerBase::GetBatmanCornerPositionAndRotation(FLOAT CollisionRadius, FVector& BatmanPosition, FRotator& BatmanCoverRotation)
{
    BatmanPosition = BatmanCoverPosition;
    BatmanCoverRotation = FRotator(Rotation.Pitch, Rotation.Yaw + 32768, Rotation.Roll);
}

// @baa 0x015dfb90
/* Slot 0x180 (unnamed in the kit; called for actors spawned at run time): fence jumps always face along X. */
void ARBMPathNode_FenceJump::vf_180()
{
	JumpNormal.X = 1.f;
	JumpNormal.Y = 0.f;
	JumpNormal.Z = 0.f;
	Super::vf_180();
}

// @baa 0x015e1030
/* Shows the sprite for the marker's current mode in the editor: two-way when Batman can use it, else one-way. */
void ARCornerWallMarkerBase::PostEditChange(UProperty* PropertyThatChanged)
{
	if (BatmanCanUse)
	{
		SpriteComponentTwoWay->SetHiddenEditor(FALSE);
		SpriteComponentOneWay->SetHiddenEditor(TRUE);
	}
	else
	{
		SpriteComponentTwoWay->SetHiddenEditor(TRUE);
		SpriteComponentOneWay->SetHiddenEditor(FALSE);
	}
	Super::PostEditChange(PropertyThatChanged);
}

/* Kit gap: TArray::AddItem isn't declared; this build calls it out of line (TArray<AActor*>::AddItem, 0x0075ef50). */
template<class T> struct TArray_ : public TArray<T>
{
	INT AddItem(const T& Item);
};

// @baa 0x015edb20
/* The traverse node's related actors: its two proxies and two end points (those that are set). */
void ARBMPathNode_VariablePositionTraverse::vf_340(TArray<AActor*>& Actors)
{
	if (Proxy1)
	{
		((TArray_<AActor*>&)Actors).AddItem((AActor*)Proxy1);
	}
	if (Proxy2)
	{
		((TArray_<AActor*>&)Actors).AddItem((AActor*)Proxy2);
	}
	if (EndPoint1)
	{
		((TArray_<AActor*>&)Actors).AddItem((AActor*)EndPoint1);
	}
	if (EndPoint2)
	{
		((TArray_<AActor*>&)Actors).AddItem((AActor*)EndPoint2);
	}
}

/* Kit gap: TArray::AddUniqueItem isn't declared; this build calls it out of line
 * (TArray<AActor*>::AddUniqueItem, 0x008b1a70). */
template<class T> struct TArray__015edba0 : public TArray<T>
{
	INT AddUniqueItem(const T& Item);
};

// @baa 0x015edba0
/* The corner point's related actors: its wall markers (those that are set). */
void ARCornerPointBase::vf_340(TArray<AActor*>& Actors)
{
	for (INT i = 0; i < 4; i++)
	{
		if (WallPoint[i])
		{
			((TArray__015edba0<AActor*>&)Actors).AddUniqueItem((AActor*)WallPoint[i]);
		}
	}
}

// @baa 0x015ef030
void __stdcall sub_015ef030(FVector4* Out)
{
    Out->X = 0.0f;
    Out->Y = 1.0f;
    Out->Z = 0.0f;
    Out->W = 0.0f;
}
