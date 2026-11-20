// UnPhysActor.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c93730
void AKActor::execResolveRBState( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResolveRBState();
}

// @baa 0x00c939a0
void ARB_LineImpulseActor::execFireLineImpulse( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	FireLineImpulse();
}

// @baa 0x00c936f0
void AKActor::execGetKActorPhysMaterial(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UPhysicalMaterial**)Result = this->GetKActorPhysMaterial();
}
