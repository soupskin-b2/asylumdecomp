// UnPhysActor.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct AKActor_ : public AKActor
{
	void ResolveRBState();
	void execResolveRBState(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c93730
void AKActor_::execResolveRBState( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResolveRBState();
}

struct ARB_LineImpulseActor_ : public ARB_LineImpulseActor
{
	void FireLineImpulse();
	void execFireLineImpulse(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c939a0
void ARB_LineImpulseActor_::execFireLineImpulse( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	FireLineImpulse();
}

struct AKActor__00c936f0 : public AKActor
{
	UPhysicalMaterial* sub_009d9a90();
};

// @baa 0x00c936f0
void AKActor::execGetKActorPhysMaterial(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UPhysicalMaterial**)Result = this->sub_009d9a90();
}
