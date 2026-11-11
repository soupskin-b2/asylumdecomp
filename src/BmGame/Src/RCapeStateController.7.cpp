// RCapeStateController.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct URCapeStateController_ : public URCapeStateController
{
	UBOOL GetIsInitialised();
	void execGetIsInitialised(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01701640
void URCapeStateController_::execGetIsInitialised( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = GetIsInitialised();
}

struct URCapeStateController__017016f0 : public URCapeStateController
{
	void Finalise();
	void execFinalise(FFrame& Stack, RESULT_DECL);
};

// @baa 0x017016f0
void URCapeStateController__017016f0::execFinalise( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	Finalise();
}

struct URCapeStateController__01701720 : public URCapeStateController
{
	void UpdatePauseState();
	void execUpdatePauseState(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01701720
void URCapeStateController__01701720::execUpdatePauseState( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdatePauseState();
}

struct URCapeStateController__01701d40 : public URCapeStateController
{
	UBOOL GetIsPausedOrPendingPaused();
	void execGetIsPausedOrPendingPaused(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01701d40
void URCapeStateController__01701d40::execGetIsPausedOrPendingPaused( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = GetIsPausedOrPendingPaused();
}

struct URCapeStateController__01701d80 : public URCapeStateController
{
	void PauseCape();
	void execPauseCape(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01701d80
void URCapeStateController__01701d80::execPauseCape( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	PauseCape();
}

struct URCapeStateController__01701db0 : public URCapeStateController
{
	void ResumeCape();
	void execResumeCape(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01701db0
void URCapeStateController__01701db0::execResumeCape( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResumeCape();
}

struct URCapeStateController__01701e60 : public URCapeStateController
{
	void SetCapeToBoneDataReferencePose();
	void execSetCapeToBoneDataReferencePose(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01701e60
void URCapeStateController__01701e60::execSetCapeToBoneDataReferencePose( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	SetCapeToBoneDataReferencePose();
}

struct URCapeStateController__01701750 : public URCapeStateController
{
	void sub_016e7ce0(FLOAT);
};

// @baa 0x01701750
void URCapeStateController::execUpdate(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	((URCapeStateController__01701750*)this)->sub_016e7ce0(DeltaTime);
}
