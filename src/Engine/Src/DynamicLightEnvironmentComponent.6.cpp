// DynamicLightEnvironmentComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Undeclared in the kit: the light environment's render-side state, and the global time slicer (GTimeSlicer). */
class FDynamicLightEnvironmentState
{
public:
	void DetachRepresentativeLights(); /* 0x006b7d50 */
};

class FTimeSlicer
{
public:
	enum { InvalidId = 0 };
	void sub_006be3b0(INT* TaskId); /* 0x006be3b0: unregisters the task registered under TaskId */
};

extern FTimeSlicer g_025d75a8;
#define GTimeSlicer g_025d75a8
// @baa 0x006cefb0
/* DynamicLightEnvironmentComponent.cpp */
void UDynamicLightEnvironmentComponent::Detach(UBOOL bWillReattach)
{
	Super::Detach(bWillReattach);

	FDynamicLightEnvironmentState* EnvState = (FDynamicLightEnvironmentState*)State.Dummy;
	if (EnvState)
	{
		EnvState->DetachRepresentativeLights();
	}

#line 1101 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DynamicLightEnvironmentComponent.cpp"
	check(TimeSlicerId != FTimeSlicer::InvalidId);
	GTimeSlicer.sub_006be3b0(&TimeSlicerId);
}

#line 40 "candidate.cpp"
