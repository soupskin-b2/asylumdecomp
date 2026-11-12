// UnrealEd_0a30000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00a339c0
void USkeletalMeshComponent::execUpdateSoftBodyParams( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdateSoftBodyParams();
}

// @baa 0x00a33a50
void USkeletalMeshComponent::execSetSoftBodyFrozen(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNewFrozen);
	P_FINISH;
	sub_00a339f0(bNewFrozen);
}

extern FName g_026c3fe0;
	/* GetRadii */
struct UForceFieldShapeBox_ : public UForceFieldShapeBox
{
	FVector eventGetRadii();
};

// @baa 0x00a33eb0
/* ForceFieldShapeBox.GetRadii script event: the generated glue, out of line here. */
FVector UForceFieldShapeBox_::eventGetRadii()
{
	struct ForceFieldShapeBox_eventGetRadii_Parms
	{
		FVector ReturnValue;
	} Parms;
	appMemzero(&Parms.ReturnValue, sizeof(Parms.ReturnValue));
	ProcessEvent(FindFunctionChecked(g_026c3fe0), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c4a08;
	/* GetHeight */
struct UForceFieldShapeCapsule_ : public UForceFieldShapeCapsule
{
	FLOAT eventGetHeight();
};

// @baa 0x00a34020
/* ForceFieldShapeCapsule.GetHeight script event: the generated glue, out of line here. */
FLOAT UForceFieldShapeCapsule_::eventGetHeight()
{
	struct ForceFieldShapeCapsule_eventGetHeight_Parms
	{
		FLOAT ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026c4a08), &Parms);
	return Parms.ReturnValue;
}
