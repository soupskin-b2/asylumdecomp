// Launch_1700000.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct URGFxFSCmdHandler_PlayMovie_ : public URGFxFSCmdHandler_PlayMovie
{
	URSeqAct_PlayGfxMovie* GetPlayMovieAction();
};

// @baa 0x0170b5d0
void URGFxFSCmdHandler_PlayMovie::execGetPlayMovieAction(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(URSeqAct_PlayGfxMovie**)Result = ((URGFxFSCmdHandler_PlayMovie_*)this)->GetPlayMovieAction();
}

// @baa 0x0170b610
void URGFxMovie::execGetPicture(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UTexture2D**)Result = GetPicture();
}

// @baa 0x0170b680
void URGFxMovieFrontend::execSendSaveInfoToFlash(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = SendSaveInfoToFlash();
}

// @baa 0x0170b6c0
void URGFxMovieFrontend::execGetVersionNumber(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = GetVersionNumber();
}

// @baa 0x0170b3d0
// @baa 0x0170b3d0
void URSeqAct_SetScarecrowCamera::execGetPercDistAlongPath(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(TimeDelta);
    P_FINISH;
    *(FLOAT*)Result = GetPercDistAlongPath(TimeDelta);
}

/* The script signature isn't known; parameter names are descriptive guesses (a vector in, a vector out). */

// @baa 0x0170b850
void ARStealthTakeDownStage::execFindSpotForTakeDown(FFrame& Stack, RESULT_DECL)
{
    P_GET_VECTOR(Start);
    P_GET_STRUCT_REF(FVector, out_Spot);
    P_FINISH;
    *(UBOOL*)Result = ((ARStealthTakeDownStage*)this)->FindSpotForTakeDown(Start, out_Spot);
}

/* Its two parameters are 4-byte out values; the names are descriptive guesses. */

// @baa 0x0170ba10
void ARStealthTakeDownStage_RailingAttack::execCheckSpaceOnEithSide(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL_REF(bSpaceOnLeft);
    P_GET_UBOOL_REF(bSpaceOnRight);
    P_FINISH;
    ((ARStealthTakeDownStage_RailingAttack*)this)->CheckSpaceOnEithSide(bSpaceOnLeft, bSpaceOnRight);
}
