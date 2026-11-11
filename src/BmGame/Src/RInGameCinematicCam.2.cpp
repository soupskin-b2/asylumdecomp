// RInGameCinematicCam.cpp (part 2 of 2): 5 functions
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

struct ARInGameCinematicCam__01709f50 : public ARInGameCinematicCam
{
	void sub_016c6240(FLOAT);
};

// @baa 0x01709f50
void ARInGameCinematicCam::execSetNormalizedTime(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NormTime);
	P_FINISH;
	((ARInGameCinematicCam__01709f50*)this)->sub_016c6240(NormTime);
}

struct ARInGameCinematicCam__01709fc0 : public ARInGameCinematicCam
{
	void sub_016be410(FLOAT);
};

// @baa 0x01709fc0
void ARInGameCinematicCam::execSetTime(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(RealTime);
	P_FINISH;
	((ARInGameCinematicCam__01709fc0*)this)->sub_016be410(RealTime);
}

struct ARInGameCinematicCam__0170a030 : public ARInGameCinematicCam
{
	void sub_016be4a0(FLOAT);
};

// @baa 0x0170a030
void ARInGameCinematicCam::execUpdateAnimation(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	((ARInGameCinematicCam__0170a030*)this)->sub_016be4a0(DeltaTime);
}
