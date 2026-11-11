// Launch_1700000.cpp: 1 function
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
