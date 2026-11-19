// DynamicLightEnvironmentComponent.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c8b710
void UDynamicLightEnvironmentComponent::execResetEnvironment( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResetEnvironment();
}

#include "ue3/ConstructObject.h"

// @baa 0x006b78d0
template UPointLightComponent* ConstructObject<UPointLightComponent>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 51 "candidate.cpp"

// @baa 0x006b7970
template USphericalHarmonicLightComponent* ConstructObject<USphericalHarmonicLightComponent>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x006b7a10
template USkyLightComponent* ConstructObject<USkyLightComponent>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
