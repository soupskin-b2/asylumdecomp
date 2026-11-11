// RInGameCinematicCam.cpp (part 2 of 2): 5 functions
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0170a0a0
void ARInGameCinematicCam::execCanFindAnimation(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(AnimName);
    P_FINISH;
    *(UBOOL*)Result = sub_016b6a90(AnimName);
}

// @baa 0x0170a120
void ARInGameCinematicCam::execAnimStarted( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	AnimStarted();
}

// @baa 0x01709f50
void ARInGameCinematicCam::execSetNormalizedTime(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NormTime);
	P_FINISH;
	sub_016c6240(NormTime);
}

// @baa 0x01709fc0
void ARInGameCinematicCam::execSetTime(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(RealTime);
	P_FINISH;
	sub_016be410(RealTime);
}

// @baa 0x0170a030
void ARInGameCinematicCam::execUpdateAnimation(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	sub_016be4a0(DeltaTime);
}
