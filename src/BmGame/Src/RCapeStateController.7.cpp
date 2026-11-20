// RCapeStateController.cpp: 12 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x01701640
void URCapeStateController::execGetIsInitialised( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = GetIsInitialised();
}

// @baa 0x017016f0
void URCapeStateController::execFinalise( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	Finalise();
}


// @baa 0x01701720
void URCapeStateController::execUpdatePauseState( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	UpdatePauseState();
}


// @baa 0x01701d40
void URCapeStateController::execGetIsPausedOrPendingPaused( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = GetIsPausedOrPendingPaused();
}

// @baa 0x01701d80
void URCapeStateController::execPauseCape( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	PauseCape();
}

// @baa 0x01701db0
void URCapeStateController::execResumeCape( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResumeCape();
}

// @baa 0x01701e60
void URCapeStateController::execSetCapeToBoneDataReferencePose( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	SetCapeToBoneDataReferencePose();
}

// @baa 0x01701750
void URCapeStateController::execUpdate(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	this->Update(DeltaTime);
}

// @baa 0x01701680
void URCapeStateController::execInitialise(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(InitialCapeStateName);
	P_FINISH;
	this->Initialise(InitialCapeStateName);
}

// @baa 0x01701de0
void URCapeStateController::execSetCapeToCurrentAnimPose(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(IsEvaluateAnim, 0);
	P_FINISH;
	this->SetCapeToCurrentAnimPose(IsEvaluateAnim);
}

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
