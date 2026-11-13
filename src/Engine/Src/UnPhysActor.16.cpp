// UnPhysActor.cpp: 4 functions
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
void APawn::TermRBPhys(FRBPhysScene* Scene)
{
    Super::TermRBPhys(Scene);
    SetPushesRigidBodies(FALSE);
}

// @baa 0x009d9b10
/* A spawnable KActor going back to the pool drops its replicated mesh/material and detaches its impact and slide
 * effects. */
void AKActorSpawnable::ResetComponents()
{
	ReplicatedMesh = NULL;
	ReplicatedMaterial = NULL;
	sub_008c7f00(ImpactEffectComponent);	/* DetachComponent */
	ImpactEffectComponent = NULL;
	sub_008c7f00(ImpactSoundComponent);
	ImpactSoundComponent = NULL;
	sub_008c7f00(ImpactSoundComponent2);
	ImpactSoundComponent2 = NULL;
	sub_008c7f00(SlideEffectComponent);
	SlideEffectComponent = NULL;
	sub_008c7f00(SlideSoundComponent);
	SlideSoundComponent = NULL;
}
