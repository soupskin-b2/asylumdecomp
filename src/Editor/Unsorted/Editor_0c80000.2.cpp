// Editor_0c80000.cpp: 14 functions
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
	*(UMapInfo**)Result = sub_009c9950();
}

// @baa 0x00c8a030
void AWorldInfo::execGetDetailMode(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(BYTE*)Result = sub_009b0b00();
}

// @baa 0x00c89f70
void AWorldInfo::execSetMapInfo(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UMapInfo, NewMapInfo);
	P_FINISH;
	sub_009c9a20(NewMapInfo);
}

// @baa 0x00c89fd0
void AWorldInfo::execResetActorChannel(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, ChannelOwner);
	P_FINISH;
	sub_009b0b70(ChannelOwner);
}

// @baa 0x00c8a210
void AWorldInfo::execOnScreenDebugMessageExists(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Key);
	P_FINISH;
	*(UBOOL*)Result = sub_009c3c40(Key);
}

// @baa 0x00c89ec0
void AWorldInfo::execSetSeamlessTravelMidpointPause(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bNowPaused);
	P_FINISH;
	sub_009cec40(bNowPaused);
}

/* AWorldInfo::GetWorldFractureSettings (0x9c6dd0) isn't declared in the kit. */
struct AWorldInfo_ : public AWorldInfo
{
    FWorldFractureSettings GetWorldFractureSettings();
};

// @baa 0x00c8a280
void AWorldInfo::execGetWorldFractureSettings(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FWorldFractureSettings*)Result = ((AWorldInfo_*)this)->GetWorldFractureSettings();
}
