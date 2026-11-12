// Launch_1700000.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct URGFxFSCmdHandler_PlayMovie_ : public URGFxFSCmdHandler_PlayMovie
{
	URSeqAct_PlayGfxMovie* sub_016d2420();
};

// @baa 0x0170b5d0
void URGFxFSCmdHandler_PlayMovie::execGetPlayMovieAction(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(URSeqAct_PlayGfxMovie**)Result = ((URGFxFSCmdHandler_PlayMovie_*)this)->sub_016d2420();
}

typedef UTexture2D* (__thiscall* FSlot)(void*);

// @baa 0x0170b610
void URGFxMovie::execGetPicture(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UTexture2D**)Result = ((FSlot)(*(void***)this)[0x178 / 4])(this);
}

// @baa 0x0170b680
void URGFxMovieFrontend::execSendSaveInfoToFlash(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = vf_17c();
}

// @baa 0x0170b6c0
void URGFxMovieFrontend::execGetVersionNumber(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = vf_180();
}

// @baa 0x0170b3d0
// @baa 0x0170b3d0
void URSeqAct_SetScarecrowCamera::execGetPercDistAlongPath(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(TimeDelta);
    P_FINISH;
    *(FLOAT*)Result = GetPercDistAlongPath(TimeDelta);
}
