// RSmashableProp.cpp: 13 functions
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
	SetupProp(propSetupData);
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

extern FName g_026e27e4;
	/* GetSaveSmashedState */
struct ARSmashableProp__01668ab0 : public ARSmashableProp
{
	UBOOL eventGetSaveSmashedState();
};

// @baa 0x01668ab0
/* RSmashableProp.GetSaveSmashedState script event: the generated glue, out of line here. */
UBOOL ARSmashableProp__01668ab0::eventGetSaveSmashedState()
{
	struct RSmashableProp_eventGetSaveSmashedState_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e27e4), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e26b4;
	/* SetSaveSmashedState */
struct ARSmashableProp__01668af0 : public ARSmashableProp
{
	void eventSetSaveSmashedState(UBOOL Removed);
};

// @baa 0x01668af0
/* RSmashableProp.SetSaveSmashedState script event: the generated glue, out of line here. */
void ARSmashableProp__01668af0::eventSetSaveSmashedState(UBOOL Removed)
{
	struct RSmashableProp_eventSetSaveSmashedState_Parms
	{
		UBOOL Removed;
	} Parms;
	Parms.Removed = Removed ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026e26b4), &Parms);
}

extern FName g_026e2f30;
	/* SpawnEmitter */
struct ARSmashableProp__01668ba0 : public ARSmashableProp
{
	class AEmitter* eventSpawnEmitter(class UParticleSystem* ParticleSystem);
};

// @baa 0x01668ba0
/* RSmashableProp.SpawnEmitter script event: the generated glue, out of line here. */
class AEmitter* ARSmashableProp__01668ba0::eventSpawnEmitter(class UParticleSystem* ParticleSystem)
{
	struct RSmashableProp_eventSpawnEmitter_Parms
	{
		class UParticleSystem* ParticleSystem;
		class AEmitter* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	Parms.ParticleSystem = ParticleSystem;
	ProcessEvent(FindFunctionChecked(g_026e2f30), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2b8c;
	/* DestroyProp */
struct ARSmashableProp__01668bf0 : public ARSmashableProp
{
	void eventDestroyProp(class ARSmashableProp* DestroyProp);
};

// @baa 0x01668bf0
/* RSmashableProp.DestroyProp script event: the generated glue, out of line here. */
void ARSmashableProp__01668bf0::eventDestroyProp(class ARSmashableProp* DestroyProp)
{
	struct RSmashableProp_eventDestroyProp_Parms
	{
		class ARSmashableProp* DestroyProp;
	} Parms;
	Parms.DestroyProp = DestroyProp;
	ProcessEvent(FindFunctionChecked(g_026e2b8c), &Parms);
}

extern FName g_026e3a04;
	/* SpawnProp */
struct ARSmashableProp__01668c30 : public ARSmashableProp
{
	class ARSmashableProp* eventSpawnProp(class AActor* spawnedObjectOwner, FVector brickPos, FRotator brickRot, class URSmashablePropConfig* brickPropConfig);
};

// @baa 0x01668c30
/* RSmashableProp.SpawnProp script event: the generated glue, out of line here. */
class ARSmashableProp* ARSmashableProp__01668c30::eventSpawnProp(class AActor* spawnedObjectOwner, FVector brickPos, FRotator brickRot, class URSmashablePropConfig* brickPropConfig)
{
	struct RSmashableProp_eventSpawnProp_Parms
	{
		class AActor* spawnedObjectOwner;
		FVector brickPos;
		FRotator brickRot;
		class URSmashablePropConfig* brickPropConfig;
		class ARSmashableProp* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	Parms.spawnedObjectOwner = spawnedObjectOwner;
	Parms.brickPos = brickPos;
	Parms.brickRot = brickRot;
	Parms.brickPropConfig = brickPropConfig;
	ProcessEvent(FindFunctionChecked(g_026e3a04), &Parms);
	return Parms.ReturnValue;
}
