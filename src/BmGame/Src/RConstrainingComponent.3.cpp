// RConstrainingComponent.cpp: 4 functions
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

struct URConstrainingComponent__01702f50 : public URConstrainingComponent
{
	void AddRBConstraint(URB_ConstraintSetup*);
};

// @baa 0x01702f50
void URConstrainingComponent::execAddRBConstraint(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(URB_ConstraintSetup, ConstraintSetup);
	P_FINISH;
	this->AddRBConstraint(ConstraintSetup);
}

struct URConstrainingComponent__01702fe0 : public URConstrainingComponent
{
	UBOOL UpdateRBConstraints(UBOOL);
};

// @baa 0x01702fe0
void URConstrainingComponent::execUpdateRBConstraints(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bNoPhys, 0);
	P_FINISH;
	*(UBOOL*)Result = this->UpdateRBConstraints(bNoPhys);
}
