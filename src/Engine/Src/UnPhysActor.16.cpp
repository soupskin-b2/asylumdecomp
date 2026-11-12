// UnPhysActor.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x009f4c80
bool AKActorSpawnable::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009e6b30
/* APawn slot 0x238 (kit vf_238): UE3's APawn::InitRBPhys(): after the actor's physics setup, apply the pawn's
 * rigid-body pushing setting. */
void APawn::vf_238()
{
    Super::vf_238();
    SetPushesRigidBodies(bPushesRigidBodies);
}

// @baa 0x009e6b60
/* APawn slot 0x23c (kit vf_23c, UE3 TermRBPhys(FRBPhysScene* Scene)): stop pushing rigid bodies once the
 * actor's physics is torn down. */
void APawn::vf_23c(INT Scene)
{
    Super::vf_23c(Scene);
    SetPushesRigidBodies(FALSE);
}
