// OnlineSubsystemSteamworks_0c80000.cpp: 23 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c89310
void AGameInfo::execDoSentinelActionPerLoadedMap( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DoSentinelActionPerLoadedMap();
}

// @baa 0x00c89350
void AGameInfo::execHandlePerLoadedMapAudioStats( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	HandlePerLoadedMapAudioStats();
}

struct AWorldInfo_ : public AWorldInfo
{
	UBOOL IsDemoBuild();
	void execIsDemoBuild(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c89ac0
void AWorldInfo_::execIsDemoBuild( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsDemoBuild();
}

struct AWorldInfo__00c89b70 : public AWorldInfo
{
	UBOOL IsShippingBuild();
	void execIsShippingBuild(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c89b70
void AWorldInfo__00c89b70::execIsShippingBuild( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsShippingBuild();
}

struct AWorldInfo__00c89bb0 : public AWorldInfo
{
	UBOOL IsPlayInEditor();
	void execIsPlayInEditor(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c89bb0
void AWorldInfo__00c89bb0::execIsPlayInEditor( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsPlayInEditor();
}


// @baa 0x00c89c70
void AWorldInfo::execVerifyNavList( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	VerifyNavList();
}


// @baa 0x00c89da0
void AWorldInfo::execIsPreparingMapChange( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsPreparingMapChange();
}

// @baa 0x00c89a10
void AWorldInfo::execGetGameSequence(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(USequence**)Result = this->GetGameSequence();
}

struct APlayerReplicationInfo_ : public APlayerReplicationInfo
{
	void UpdatePing(FLOAT);
};

// @baa 0x00c896c0
void APlayerReplicationInfo::execUpdatePing(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(TimeStamp);
	P_FINISH;
	((APlayerReplicationInfo_*)this)->UpdatePing(TimeStamp);
}

// @baa 0x00c892a0
void AGameInfo::execEndSentinelRun(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(RunResult);
	P_FINISH;
	EndSentinelRun(*(INT*)&RunResult);
}

struct APlayerReplicationInfo__00c89650 : public APlayerReplicationInfo
{
	UBOOL AreUniqueNetIdsEqual(APlayerReplicationInfo*);
};

// @baa 0x00c89650
void APlayerReplicationInfo::execAreUniqueNetIdsEqual(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(APlayerReplicationInfo, OtherPRI);
	P_FINISH;
	*(UBOOL*)Result = ((APlayerReplicationInfo__00c89650*)this)->AreUniqueNetIdsEqual(OtherPRI);
}

// @baa 0x00c89b00
void AWorldInfo::execIsConsoleBuild(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE_OPTX(ConsoleType, 0);
	P_FINISH;
	*(UBOOL*)Result = this->IsConsoleBuild(ConsoleType);
}

// @baa 0x00c89a50
void AWorldInfo::execSetLevelRBGravity(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, NewGrav);
	P_FINISH;
	this->SetLevelRBGravity(NewGrav);
}

// @baa 0x00c89bf0
void AWorldInfo::execForceGarbageCollection(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bFullPurge, 0);
	P_FINISH;
	this->ForceGarbageCollection(bFullPurge);
}

// @baa 0x00c89980
void AWorldInfo::execUpdateMusicTrack(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FMusicTrackStruct, NewMusicTrack);
    P_FINISH;
    this->UpdateMusicTrack(NewMusicTrack);
}

/* AGameInfo::SwapPlayerControllers (008b0c60) isn't declared in the kit. */
struct AGameInfo_ : public AGameInfo
{
    void SwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC);
};

// @baa 0x00c89160
void AGameInfo::execSwapPlayerControllers(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(APlayerController, OldPC);
    P_GET_OBJECT(APlayerController, NewPC);
    P_FINISH;
    ((AGameInfo_*)this)->SwapPlayerControllers(OldPC, NewPC);
}

/* ARoute::ResolveRouteIndex (0086eba0) isn't declared in the kit. */
struct ARoute_ : public ARoute
{
    INT ResolveRouteIndex(INT Idx, BYTE RouteDirection, BYTE& out_bComplete, BYTE& out_bReverse);
};

// @baa 0x00c89760
void ARoute::execResolveRouteIndex(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(Idx);
    P_GET_BYTE(RouteDirection);
    P_GET_BYTE_REF(out_bComplete);
    P_GET_BYTE_REF(out_bReverse);
    P_FINISH;
    *(INT*)Result = ((ARoute_*)this)->ResolveRouteIndex(Idx, RouteDirection, out_bComplete, out_bReverse);
}

// @baa 0x00c89870
void ARoute::execMoveOntoRoutePath(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(APawn, P);
    P_GET_BYTE_OPTX(RouteDirection, ERD_Forward);
    P_GET_FLOAT_OPTX(DistFudgeFactor, 1.f);
    P_FINISH;
    *(INT*)Result = this->MoveOntoRoutePath(P, RouteDirection, DistFudgeFactor);
}

// @baa 0x00c89ca0
void AWorldInfo::execNotifyMatchStarted(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL_OPTX(bShouldPauseMovies, TRUE);
    P_GET_UBOOL_OPTX(bShouldAllowPausing, TRUE);
    P_GET_UBOOL_OPTX(bShouldSkipMovies, FALSE);
    P_FINISH;
    this->NotifyMatchStarted(bShouldPauseMovies, bShouldAllowPausing, bShouldSkipMovies);
}

// @baa 0x00c891f0
void AGameInfo::execAddSentinelPerTimePeriodStats(FFrame& Stack, RESULT_DECL)
{
    P_GET_VECTOR(InLocation);
    P_GET_ROTATOR(InRotation);
    P_FINISH;
    AddSentinelPerTimePeriodStats(InLocation, InRotation);
}

// @baa 0x00c89390
void AGameInfo::execDoSentinel_MemoryAtSpecificLocation(FFrame& Stack, RESULT_DECL)
{
    P_GET_VECTOR(InLocation);
    P_GET_ROTATOR(InRotation);
    P_FINISH;
    DoSentinel_MemoryAtSpecificLocation(InLocation, InRotation);
}

// @baa 0x00c89440
void AGameInfo::execDoSentinel_PerfAtSpecificLocation(FFrame& Stack, RESULT_DECL)
{
    P_GET_VECTOR(InLocation);
    P_GET_ROTATOR(InRotation);
    P_FINISH;
    DoSentinel_PerfAtSpecificLocation(InLocation, InRotation);
}

// @baa 0x00c89580
void AGameReplicationInfo::execOnSameTeam(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(AActor, A);
    P_GET_OBJECT(AActor, B);
    P_FINISH;
    *(UBOOL*)Result = OnSameTeam(A, B);
}
