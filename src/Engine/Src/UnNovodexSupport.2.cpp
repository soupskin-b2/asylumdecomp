// UnNovodexSupport.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c941e0
void UPhysicalMaterial::execCalculateImpactStrength(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(ImpactSpeed);
	P_FINISH;
	*(FLOAT*)Result = CalculateImpactStrength(ImpactSpeed);
}

// @baa 0x00c94250
void UPhysicalMaterial::execCalculateSlideStrength(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(SlideSpeed);
	P_FINISH;
	*(FLOAT*)Result = CalculateSlideStrength(SlideSpeed);
}
