// UnrealEd_0c90000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c9be40
void ANxGenericForceFieldBox::execDoInitRBPhys( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

// @baa 0x00c9b410
void UMaterialInstanceTimeVarying::execSetParent(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UMaterialInterface, NewParent);
	P_FINISH;
	SetParent(NewParent);
}

// @baa 0x00c926d0
void UMorphTargetSet::execFindMorphTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(MorphTargetName);
	P_FINISH;
	*(void**)Result = FindMorphTarget(MorphTargetName);
}

// @baa 0x00c92650
// @baa 0x00c92650
void UAnimSet::execFindAnimSequence(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(SequenceName);
    P_FINISH;
    *(UAnimSequence**)Result = FindAnimSequence(SequenceName);
}
