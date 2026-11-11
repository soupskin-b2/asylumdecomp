// RConstrainingComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct URConstrainingComponent_ : public URConstrainingComponent
{
	UBOOL GetIsSyncronised();
	void execGetIsSyncronised(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01702f10
void URConstrainingComponent_::execGetIsSyncronised( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = GetIsSyncronised();
}

struct URConstrainingComponent__01702fb0 : public URConstrainingComponent
{
	void ClearRBConstraints();
	void execClearRBConstraints(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01702fb0
void URConstrainingComponent__01702fb0::execClearRBConstraints( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ClearRBConstraints();
}
