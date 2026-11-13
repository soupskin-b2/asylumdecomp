// UnFracturedStaticMesh.cpp: 11 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x009472a0
void UFracturedBaseComponent::execGetUseSimpleBoxCollision(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = GetUseSimpleBoxCollision();
}

// @baa 0x00947300
void UFracturedBaseComponent::execGetUseSimpleLineCollision(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = GetUseSimpleLineCollision();
}

// @baa 0x00c9f100
void UFracturedBaseComponent::execGetNumFragments(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = GetNumFragments();
}

// @baa 0x00c9f140
void UFracturedBaseComponent::execGetNumVisibleFragments(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = GetNumVisibleFragments();
}

// @baa 0x00c9f090
void UFracturedBaseComponent::execIsFragmentVisible(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(FragmentIndex);
	P_FINISH;
	*(UBOOL*)Result = IsFragmentVisible(FragmentIndex);
}

// @baa 0x00947170
void UStaticMeshComponent::execSetForceStaticDecals(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bForce);
	P_FINISH;
	SetForceStaticDecals(bForce);
}

extern FName g_026c4f18;
	/* ENGINE_ReturnPartActor */
struct AFracturedStaticMeshActor_ : public AFracturedStaticMeshActor
{
	void eventReturnPartActor(class AFracturedStaticMeshPart* Part);
};

// @baa 0x007a4e00
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AFracturedStaticMeshActor_::eventReturnPartActor(class AFracturedStaticMeshPart* Part)
{
	struct FracturedStaticMeshActor_eventReturnPartActor_Parms
	{
		class AFracturedStaticMeshPart* Part;
	} Parms;
	Parms.Part = Part;
	ProcessEvent(FindFunctionChecked(g_026c4f18), &Parms);
}

extern FName g_026c45b4;
	/* ENGINE_SpawnChunkDestroyEffect */
struct AFracturedStaticMeshActor__007a4ec0 : public AFracturedStaticMeshActor
{
	void eventSpawnChunkDestroyEffect(UParticleSystem* Effect, FBox ChunkBox, FVector ChunkDir, FLOAT Scale);
};

// @baa 0x007a4ec0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AFracturedStaticMeshActor__007a4ec0::eventSpawnChunkDestroyEffect(UParticleSystem* Effect, FBox ChunkBox, FVector ChunkDir, FLOAT Scale)
{
	struct FracturedStaticMeshActor_eventSpawnChunkDestroyEffect_Parms
	{
		class UParticleSystem* Effect;
		FBox ChunkBox;
		FVector ChunkDir;
		FLOAT Scale;
	} Parms;
	Parms.Effect = Effect;
	Parms.ChunkBox = ChunkBox;
	Parms.ChunkDir = ChunkDir;
	Parms.Scale = Scale;
	ProcessEvent(FindFunctionChecked(g_026c45b4), &Parms);
}

extern FName g_026c5444;
	/* ENGINE_SpawnPartActor */
struct AFracturedStaticMeshActor__007a4e40 : public AFracturedStaticMeshActor
{
	AFracturedStaticMeshPart* eventSpawnPartActor(INT ChunkIndex, FVector InitialVel, FVector InitialAngVel);
};

// @baa 0x007a4e40
/* The script event's generated glue (EngineClasses.h), out of line here. */
AFracturedStaticMeshPart* AFracturedStaticMeshActor__007a4e40::eventSpawnPartActor(INT ChunkIndex, FVector InitialVel, FVector InitialAngVel)
{
	struct FracturedStaticMeshActor_eventSpawnPartActor_Parms
	{
		INT ChunkIndex;
		FVector InitialVel;
		FVector InitialAngVel;
		class AFracturedStaticMeshPart* ReturnValue;
	} Parms;
	Parms.ChunkIndex = ChunkIndex;
	Parms.InitialVel = InitialVel;
	Parms.InitialAngVel = InitialAngVel;
	Parms.ReturnValue = NULL;
	ProcessEvent(FindFunctionChecked(g_026c5444), &Parms);
	return Parms.ReturnValue;
}

// @baa 0x009470c0
void UFracturedBaseComponent::execSetStaticMesh(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UStaticMesh, NewMesh);
    P_GET_UBOOL_OPTX(bForce, FALSE);
    P_FINISH;
    *(UBOOL*)Result = SetStaticMesh(NewMesh, bForce);
}

// @baa 0x00cc6af0
void UFracturedBaseComponent::execGetVisibleFragments(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(TArray<BYTE>*)Result = GetVisibleFragments();
}
