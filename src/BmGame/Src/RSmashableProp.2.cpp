// RSmashableProp.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct ARSmashableProp_ : public ARSmashableProp
{
	UBOOL GetHasSubMeshes();
	void execGetHasSubMeshes(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016ff450
void ARSmashableProp_::execGetHasSubMeshes( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = GetHasSubMeshes();
}

struct ARSmashableProp__016ff490 : public ARSmashableProp
{
    void SetBreakableType(BYTE breakableType);
    void execSetBreakableType(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016ff490
void ARSmashableProp__016ff490::execSetBreakableType(FFrame& Stack, RESULT_DECL)
{
    P_GET_BYTE(breakableType);
    P_FINISH;
    SetBreakableType(breakableType);
}

struct ARSmashableProp__016ff670 : public ARSmashableProp
{
	UBOOL GetHasSubParts();
	void execGetHasSubParts(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016ff670
void ARSmashableProp__016ff670::execGetHasSubParts( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = GetHasSubParts();
}

// @baa 0x016ff830
void ARSmashableProp::execBreakProp(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	vf_35c();
}

// @baa 0x016ff6b0
void ARSmashableProp::execSetupProp(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(URSmashablePropConfig, propSetupData);
	P_FINISH;
	vf_354((INT)propSetupData);
}
