// RBmPathNodeClass.cpp: 8 functions
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
