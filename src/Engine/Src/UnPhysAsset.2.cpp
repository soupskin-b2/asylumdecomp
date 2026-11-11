// UnPhysAsset.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct URB_BodyInstance_ : public URB_BodyInstance
{
	UBOOL IsFixed();
	void execIsFixed(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c94e90
void URB_BodyInstance_::execIsFixed( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsFixed();
}

struct URB_BodyInstance__00c94ed0 : public URB_BodyInstance
{
	UBOOL IsValidBodyInstance();
	void execIsValidBodyInstance(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c94ed0
void URB_BodyInstance__00c94ed0::execIsValidBodyInstance( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsValidBodyInstance();
}

struct URB_BodyInstance__00c95440 : public URB_BodyInstance
{
	void SetPhysMaterialOverride(UPhysicalMaterial* NewPhysMaterial); /* 00a207c0 */
	void execSetPhysMaterialOverride(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c95440
void URB_BodyInstance__00c95440::execSetPhysMaterialOverride(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UPhysicalMaterial, NewPhysMaterial);
	P_FINISH;
	SetPhysMaterialOverride(NewPhysMaterial);
}

struct URB_BodyInstance__00c955e0 : public URB_BodyInstance
{
	void UpdateDampingProperties();
	void execUpdateDampingProperties(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c955e0
void URB_BodyInstance__00c955e0::execUpdateDampingProperties( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateDampingProperties();
}

struct URB_BodyInstance__00c94f10 : public URB_BodyInstance
{
	UPhysicsAssetInstance* sub_00a051a0();
};

// @baa 0x00c94f10
void URB_BodyInstance::execGetPhysicsAssetInstance(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UPhysicsAssetInstance**)Result = ((URB_BodyInstance__00c94f10*)this)->sub_00a051a0();
}
