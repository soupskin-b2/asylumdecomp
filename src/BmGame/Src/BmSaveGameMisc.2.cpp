// BmSaveGameMisc.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e3aa0;
	/* FE_NewGame */
struct ARPlayerController_ : public ARPlayerController
{
	void eventFE_NewGame(const FString& Difficulty);
};

// @baa 0x01722dc0
/* RPlayerController.FE_NewGame script event: the generated glue, out of line here. */
void ARPlayerController_::eventFE_NewGame(const FString& Difficulty)
{
	struct RPlayerController_eventFE_NewGame_Parms
	{
		FString Difficulty;
	} Parms;
	Parms.Difficulty = Difficulty;
	ProcessEvent(FindFunctionChecked(g_026e3aa0), &Parms);
}

// @baa 0x017232b0
void ARLevelTransition::execGetAllConnectedLevels(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY_REF(FName, Out);
	P_FINISH;
	GetAllConnectedLevels(Out);
}

struct ARHarpoonDragPhysicsBase_ : public ARHarpoonDragPhysicsBase
{
	UBOOL GetAnchorPointPositionAndRotation(INT AnchorIndex, FVector& OutPosition, FRotator* OutRotation); /* 0x0171fb20 */
};

// @baa 0x01722f10
/* native function bool GetAnchorPointPositionAndRotation(int AnchorIndex, out vector OutPosition, optional out rotator OutRotation) */
void ARHarpoonDragPhysicsBase::execGetAnchorPointPositionAndRotation(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(AnchorIndex);
	P_GET_STRUCT_REF(FVector, OutPosition);
	GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
	P_GET_STRUCT_OPTX_REF(FRotator, OutRotation);
	if (GRuntimeUCFlags & RUC_SkippedOptionalParm)
	{
		OutRotation = FRotator(0, 0, 0);
	}
	P_FINISH;
	*(UBOOL*)Result = ((ARHarpoonDragPhysicsBase_*)this)->GetAnchorPointPositionAndRotation(AnchorIndex, OutPosition, pOutRotation ? &OutRotation : NULL);
}
