// UnFracturedStaticMesh.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x009472a0
void UFracturedBaseComponent::execGetUseSimpleBoxCollision(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_250();
}

// @baa 0x00947300
void UFracturedBaseComponent::execGetUseSimpleLineCollision(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_254();
}

// @baa 0x00c9f100
void UFracturedBaseComponent::execGetNumFragments(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = vf_280();
}

// @baa 0x00c9f140
void UFracturedBaseComponent::execGetNumVisibleFragments(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = vf_284();
}
