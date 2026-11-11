// FluidSurfaceComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct UFluidSurfaceComponent_ : public UFluidSurfaceComponent
{
	void sub_00be4940(FVector);
};

// @baa 0x00ca7b80
void UFluidSurfaceComponent::execSetDetailPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, WorldPos);
	P_FINISH;
	((UFluidSurfaceComponent_*)this)->sub_00be4940(WorldPos);
}

struct UFluidSurfaceComponent__00ca7bf0 : public UFluidSurfaceComponent
{
	void sub_00be4bb0(FVector);
};

// @baa 0x00ca7bf0
void UFluidSurfaceComponent::execSetSimulationPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, WorldPos);
	P_FINISH;
	((UFluidSurfaceComponent__00ca7bf0*)this)->sub_00be4bb0(WorldPos);
}
