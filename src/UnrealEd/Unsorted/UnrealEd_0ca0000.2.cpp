// UnrealEd_0ca0000.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00ca0280
void AFracturedStaticMeshActor::execResetVisibility( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_390();
}

// @baa 0x00ca02c0
void AFracturedStaticMeshPart::execInitialize( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_394();
}

// @baa 0x00ca0480
void AFractureManager::execCreateFSMParts( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_364();
}

// @baa 0x00ca04c0
void AFractureManager::execResetPoolVisibility( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_368();
}

// @baa 0x00ca0380
void AFractureManager::execGetNumFSMPartsScale(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_354();
}

// @baa 0x00ca03c0
void AFractureManager::execGetFSMDirectSpawnChanceScale(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_358();
}

// @baa 0x00ca0400
void AFractureManager::execGetFSMRadialSpawnChanceScale(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_35c();
}

// @baa 0x00ca0440
void AFractureManager::execGetFSMFractureCullDistanceScale(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_360();
}
