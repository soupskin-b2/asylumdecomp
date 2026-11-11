// RSmashableProp.cpp: 8 functions
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

struct ARSmashableProp__016ff4f0 : public ARSmashableProp
{
	void sub_0166b2e0(UBOOL);
};

// @baa 0x016ff4f0
void ARSmashableProp::execSetIsStatic(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(isStatic);
	P_FINISH;
	((ARSmashableProp__016ff4f0*)this)->sub_0166b2e0(isStatic);
}

struct ARSmashableProp__016ff980 : public ARSmashableProp
{
	void* sub_016751c0(FName);
};

// @baa 0x016ff980
void ARSmashableProp::execGetDecalMaterialInstance(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(DecalTypeName);
	P_FINISH;
	*(void**)Result = ((ARSmashableProp__016ff980*)this)->sub_016751c0(DecalTypeName);
}

// @baa 0x016ff870
// @baa 0x016ff870
void ARSmashableProp::execSetLightEnvironment(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UDynamicLightEnvironmentComponent, NewLightEnvironment);
    P_FINISH;
    SetLightEnvironment(NewLightEnvironment);
}
