// UnrealEd_0c90000.cpp: 3 functions
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
	vf_160((INT)NewParent);
}

struct UMorphTargetSet_ : public UMorphTargetSet
{
	void* sub_0083d900(FName);
};

// @baa 0x00c926d0
void UMorphTargetSet::execFindMorphTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(MorphTargetName);
	P_FINISH;
	*(void**)Result = ((UMorphTargetSet_*)this)->sub_0083d900(MorphTargetName);
}
