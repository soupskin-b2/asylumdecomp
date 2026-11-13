// UnrealEd_0ca0000.cpp: 9 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00ca0280
void AFracturedStaticMeshActor::execResetVisibility( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResetVisibility();
}

// @baa 0x00ca02c0
void AFracturedStaticMeshPart::execInitialize( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	Initialize();
}

// @baa 0x00ca0480
void AFractureManager::execCreateFSMParts( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	CreateFSMParts();
}

// @baa 0x00ca04c0
void AFractureManager::execResetPoolVisibility( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResetPoolVisibility();
}

// @baa 0x00ca0380
void AFractureManager::execGetNumFSMPartsScale(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = GetNumFSMPartsScale();
}

// @baa 0x00ca03c0
void AFractureManager::execGetFSMDirectSpawnChanceScale(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = GetFSMDirectSpawnChanceScale();
}

// @baa 0x00ca0400
void AFractureManager::execGetFSMRadialSpawnChanceScale(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = GetFSMRadialSpawnChanceScale();
}

// @baa 0x00ca0440
void AFractureManager::execGetFSMFractureCullDistanceScale(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = GetFSMFractureCullDistanceScale();
}

// @baa 0x00ca0300
void AFracturedStaticMeshPart::execRecyclePart(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bAddToFreePool);
	P_FINISH;
	RecyclePart(bAddToFreePool);
}
