// FluidSurfaceComponent.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00ca7b80
void UFluidSurfaceComponent::execSetDetailPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, WorldPos);
	P_FINISH;
	SetDetailPosition(WorldPos);
}

// @baa 0x00ca7bf0
void UFluidSurfaceComponent::execSetSimulationPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, WorldPos);
	P_FINISH;
	SetSimulationPosition(WorldPos);
}

// @baa 0x00ca7a70
void UFluidSurfaceComponent::execApplyForce(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, WorldPos);
	P_GET_FLOAT(Strength);
	P_GET_FLOAT(Radius);
	P_GET_UBOOL_OPTX(bImpulse, FALSE);
	P_FINISH;
	ApplyForce(WorldPos, Strength, Radius, bImpulse);
}
