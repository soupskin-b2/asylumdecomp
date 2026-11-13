// Editor_0c80000.cpp: 15 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c89de0
void AWorldInfo::execIsMapChangeReady( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsMapChangeReady();
}

// @baa 0x00c89e20
void AWorldInfo::execCancelPendingMapChange( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	CancelPendingMapChange();
}

// @baa 0x00c89e50
void AWorldInfo::execCommitMapChange( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	CommitMapChange();
}

// @baa 0x00c89e80
void AWorldInfo::execIsInSeamlessTravel( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsInSeamlessTravel();
}

// @baa 0x00c8a070
void AWorldInfo::execIsRecordingDemo( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsRecordingDemo();
}

// @baa 0x00c8a0b0
void AWorldInfo::execIsPlayingDemo( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsPlayingDemo();
}

// @baa 0x00c8a1e0
void AWorldInfo::execDoMemoryTracking( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DoMemoryTracking();
}

// @baa 0x00c89f30
void AWorldInfo::execGetMapInfo(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UMapInfo**)Result = GetMapInfo();
}

// @baa 0x00c8a030
void AWorldInfo::execGetDetailMode(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(BYTE*)Result = GetDetailMode();
}

// @baa 0x00c89f70
void AWorldInfo::execSetMapInfo(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UMapInfo, NewMapInfo);
	P_FINISH;
	SetMapInfo(NewMapInfo);
}

// @baa 0x00c89fd0
void AWorldInfo::execResetActorChannel(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, ChannelOwner);
	P_FINISH;
	ResetActorChannel(ChannelOwner);
}

// @baa 0x00c8a210
void AWorldInfo::execOnScreenDebugMessageExists(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Key);
	P_FINISH;
	*(UBOOL*)Result = OnScreenDebugMessageExists(Key);
}

// @baa 0x00c89ec0
void AWorldInfo::execSetSeamlessTravelMidpointPause(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNowPaused);
	P_FINISH;
	SetSeamlessTravelMidpointPause(bNowPaused);
}

/* AWorldInfo::GetWorldFractureSettings (0x9c6dd0) isn't declared in the kit. */

// @baa 0x00c8a280
void AWorldInfo::execGetWorldFractureSettings(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FWorldFractureSettings*)Result = this->GetWorldFractureSettings();
}

/* Kit gaps: AWorldInfo::GetDemoFrameInfo (0x00bf99c0) and the optional out INT parameter macro. */

#define P_GET_INT_OPTX_REF(v, d) INT v##T = d; GPropAddr = 0; GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; Stack.Step(Stack.Object, &v##T); INT* p##v = (INT*)GPropAddr; INT& v = GPropAddr ? *(INT*)GPropAddr : v##T;
// @baa 0x00c8a0f0
/* GetDemoFrameInfo(optional out int CurrentFrame, optional out int TotalFrames) */
void AWorldInfo::execGetDemoFrameInfo(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT_OPTX_REF(CurrentFrame, 0);
	P_GET_INT_OPTX_REF(TotalFrames, 0);
	P_FINISH;
	this->GetDemoFrameInfo(pCurrentFrame ? &CurrentFrame : NULL, pTotalFrames ? &TotalFrames : NULL);
}
