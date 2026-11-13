// RCapeStateController.cpp: 12 functions
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
	void Update(FLOAT);
};

// @baa 0x01701750
void URCapeStateController::execUpdate(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	this->Update(DeltaTime);
}

struct URCapeStateController__01701680 : public URCapeStateController
{
	void Initialise(FName);
};

// @baa 0x01701680
void URCapeStateController::execInitialise(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(InitialCapeStateName);
	P_FINISH;
	this->Initialise(InitialCapeStateName);
}

struct URCapeStateController__01701de0 : public URCapeStateController
{
	void SetCapeToCurrentAnimPose(UBOOL);
};

// @baa 0x01701de0
void URCapeStateController::execSetCapeToCurrentAnimPose(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(IsEvaluateAnim, 0);
	P_FINISH;
	this->SetCapeToCurrentAnimPose(IsEvaluateAnim);
}

/* URCapeStateController::SetCapeStateAndTime (0x16e7670) isn't declared in the kit. */
struct URCapeStateController__01701960 : public URCapeStateController
{
    void SetCapeStateAndTime(FName NewCapeStateName, FLOAT NewCapeStateTime, FLOAT AnimPlayRate, UBOOL bMirrored, FName AnimName, FName SyncAnimNameOverride, FLOAT SyncAnimOffsetOverride);
};

// @baa 0x01701960
void URCapeStateController::execSetCapeStateAndTime(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(NewCapeStateName);
    P_GET_FLOAT(NewCapeStateTime);
    P_GET_FLOAT_OPTX(AnimPlayRate, 1.f);
    P_GET_UBOOL_OPTX(bMirrored, FALSE);
    P_GET_NAME_OPTX(AnimName, NAME_None);
    P_GET_NAME_OPTX(SyncAnimNameOverride, NAME_None);
    P_GET_FLOAT_OPTX(SyncAnimOffsetOverride, 0.f);
    P_FINISH;
    this->SetCapeStateAndTime(NewCapeStateName, NewCapeStateTime, AnimPlayRate, bMirrored, AnimName, SyncAnimNameOverride, SyncAnimOffsetOverride);
}

/* URCapeStateController::BeginCinematicState (0x16e7910) isn't declared in the kit. */
struct URCapeStateController__01701b20 : public URCapeStateController
{
    void BeginCinematicState(FName AnimName, class URCapeStateConfig* TemplateStateConfig, FLOAT AnimStartTime, FLOAT AnimPlayRate, FName SyncAnimName, FLOAT SyncAnimOffset, UBOOL bMirrored, UBOOL bClearVelocityOnExit, UBOOL bTeleportToInitialPose);
};

// @baa 0x01701b20
void URCapeStateController::execBeginCinematicState(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(AnimName);
    P_GET_OBJECT(URCapeStateConfig, TemplateStateConfig);
    P_GET_FLOAT(AnimStartTime);
    P_GET_FLOAT_OPTX(AnimPlayRate, 1.f);
    P_GET_NAME_OPTX(SyncAnimName, NAME_None);
    P_GET_FLOAT_OPTX(SyncAnimOffset, 0.f);
    P_GET_UBOOL_OPTX(bMirrored, FALSE);
    P_GET_UBOOL_OPTX(bClearVelocityOnExit, FALSE);
    P_GET_UBOOL_OPTX(bTeleportToInitialPose, FALSE);
    P_FINISH;
    this->BeginCinematicState(AnimName, TemplateStateConfig, AnimStartTime, AnimPlayRate, SyncAnimName, SyncAnimOffset, bMirrored, bClearVelocityOnExit, bTeleportToInitialPose);
}
