// BmGame_0c80000.cpp: 7 functions
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
