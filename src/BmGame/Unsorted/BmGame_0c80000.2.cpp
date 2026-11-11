// BmGame_0c80000.cpp: 16 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct AActor_ : public AActor
{
	UBOOL PlayerCanSeeMe();
	void execPlayerCanSeeMe(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c82ec0
void AActor_::execPlayerCanSeeMe( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = PlayerCanSeeMe();
}

struct AActor__00c834a0 : public AActor
{
	UBOOL IsInPersistentLevel();
	void execIsInPersistentLevel(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c834a0
void AActor__00c834a0::execIsInPersistentLevel( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsInPersistentLevel();
}

// @baa 0x00c83fe0
void AController::execRouteCache_Empty( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_358();
}

struct APlayerController_ : public APlayerController
{
	UBOOL AllowConsole();
	void execAllowConsole(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c86c00
void APlayerController_::execAllowConsole( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = AllowConsole();
}

// @baa 0x00c86e00
void APlayerController::execCleanUpAudioComponents( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_418();
}

struct APlayerController__00c872f0 : public APlayerController
{
	UBOOL HasClientLoadedCurrentWorld();
	void execHasClientLoadedCurrentWorld(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c872f0
void APlayerController__00c872f0::execHasClientLoadedCurrentWorld( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = HasClientLoadedCurrentWorld();
}

struct APlayerController__00c87630 : public APlayerController
{
	void ClientFlushLevelStreaming();
	void execClientFlushLevelStreaming(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c87630
void APlayerController__00c87630::execClientFlushLevelStreaming( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ClientFlushLevelStreaming();
}

// @baa 0x00c830e0
void AActor::execIsPlayerOwned(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_140();
}

// @baa 0x00c83fa0
void APlayerController::execIsLocalPlayerController(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_354();
}

// @baa 0x00c87080
void APlayerController::execIsKeyboardAvailable(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_430();
}

// @baa 0x00c82f90
void AWorldInfo::execGetGravityZ(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FLOAT*)Result = vf_138();
}

// @baa 0x00c83120
void ATeamInfo::execGetTeamNum(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(BYTE*)Result = vf_144();
}

// @baa 0x00c870c0
void APlayerController::execIsMouseAvailable(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_434();
}

// @baa 0x00c87430
void APlayerController::execGetViewTarget(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AActor**)Result = (AActor*)vf_3b8();
}

// @baa 0x00c877d0
void APlayerController::execIsShowingSubtitles(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_448();
}

struct APlayerController__00c86c40 : public APlayerController
{
	void sub_007ac560(INT);
};

// @baa 0x00c86c40
void APlayerController::execSetNetSpeed(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(NewSpeed);
	P_FINISH;
	((APlayerController__00c86c40*)this)->sub_007ac560(NewSpeed);
}
