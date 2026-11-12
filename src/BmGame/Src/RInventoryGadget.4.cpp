// RInventoryGadget.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct ARInventoryGadget_01706ed0 : public ARInventoryGadget {
    void execGetAutoTargetRotation(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01706ed0
void ARInventoryGadget_01706ed0::execGetAutoTargetRotation(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FRotator*)Result = GetAutoTargetRotation();
}

/* ARInventoryGadget::GetCorrectedAutoTargetOrigin (0x163b170) isn't declared in the kit. */
struct ARInventoryGadget_ : public ARInventoryGadget
{
    FVector GetCorrectedAutoTargetOrigin(FVector& CameraPos, FRotator& AimDirection);
};

// @baa 0x01706f30
void ARInventoryGadget::execGetCorrectedAutoTargetOrigin(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FVector, CameraPos);
    P_GET_STRUCT_REF(FRotator, AimDirection);
    P_FINISH;
    *(FVector*)Result = ((ARInventoryGadget_*)this)->GetCorrectedAutoTargetOrigin(CameraPos, AimDirection);
}

extern FName g_026e25ec;
	/* BMGAME_CheckAutoTarget */
struct ARInventoryGadget__01638920 : public ARInventoryGadget
{
	UBOOL eventCheckAutoTarget(class AActor* Target, FVector& TargetPosition, FLOAT& OverridePriority, FLOAT& OverrideMaxRange);
};

// @baa 0x01638920
/* The script event's generated glue (BmGameClasses.h), out of line here. */
UBOOL ARInventoryGadget__01638920::eventCheckAutoTarget(class AActor* Target, FVector& TargetPosition, FLOAT& OverridePriority, FLOAT& OverrideMaxRange)
{
	struct RInventoryGadget_eventCheckAutoTarget_Parms
	{
		class AActor* Target;
		FVector TargetPosition;
		FLOAT OverridePriority;
		FLOAT OverrideMaxRange;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.Target = Target;
	Parms.TargetPosition = TargetPosition;
	Parms.OverridePriority = OverridePriority;
	Parms.OverrideMaxRange = OverrideMaxRange;
	ProcessEvent(FindFunctionChecked(g_026e25ec), &Parms);
	TargetPosition = Parms.TargetPosition;
	OverridePriority = Parms.OverridePriority;
	OverrideMaxRange = Parms.OverrideMaxRange;
	return Parms.ReturnValue;
}
