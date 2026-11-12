// Engine_09f0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x009ffb90
void UPrimitiveComponent::execSetRBChannel(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(Channel);
	P_FINISH;
	RBChannel = Channel;
	vf_20c();
}

extern FName g_026c4340;
	/* ENGINE_BreakOffPartsInRadius */
struct AFracturedStaticMeshActor_ : public AFracturedStaticMeshActor
{
	void eventBreakOffPartsInRadius(FVector Origin, FLOAT Radius, FLOAT RBStrength, UBOOL bWantPhysChunksAndParticles, UBOOL bAllowDamagedEventFiring, FVector BlastOriginOffset);
};

// @baa 0x009fd450
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AFracturedStaticMeshActor_::eventBreakOffPartsInRadius(FVector Origin, FLOAT Radius, FLOAT RBStrength, UBOOL bWantPhysChunksAndParticles, UBOOL bAllowDamagedEventFiring, FVector BlastOriginOffset)
{
	struct FracturedStaticMeshActor_eventBreakOffPartsInRadius_Parms
	{
		FVector Origin;
		FLOAT Radius;
		FLOAT RBStrength;
		UBOOL bWantPhysChunksAndParticles;
		UBOOL bAllowDamagedEventFiring;
		FVector BlastOriginOffset;
	} Parms;
	Parms.Origin = Origin;
	Parms.Radius = Radius;
	Parms.RBStrength = RBStrength;
	Parms.bWantPhysChunksAndParticles = bWantPhysChunksAndParticles ? TRUE : FALSE;
	Parms.bAllowDamagedEventFiring = bAllowDamagedEventFiring ? TRUE : FALSE;
	Parms.BlastOriginOffset = BlastOriginOffset;
	ProcessEvent(FindFunctionChecked(g_026c4340), &Parms);
}
