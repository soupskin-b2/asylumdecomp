// RInGameCinematicCam.cpp (part 2 of 2): 2 functions
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct ARInGameCinematicCam_ : public ARInGameCinematicCam {
    UBOOL sub_016b6a90(FName AnimName);
};

// @baa 0x0170a0a0
void ARInGameCinematicCam::execCanFindAnimation(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(AnimName);
    P_FINISH;
    *(UBOOL*)Result = ((ARInGameCinematicCam_*)this)->sub_016b6a90(AnimName);
}

struct ARInGameCinematicCam__0170a120 : public ARInGameCinematicCam
{
	void AnimStarted();
	void execAnimStarted(FFrame& Stack, RESULT_DECL);
};

// @baa 0x0170a120
void ARInGameCinematicCam__0170a120::execAnimStarted( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	AnimStarted();
}
