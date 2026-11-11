// UnrealEd_0c90000.cpp: 2 functions
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
