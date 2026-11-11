// Editor_0c80000.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct AWorldInfo_ : public AWorldInfo
{
	UBOOL IsMapChangeReady();
	void execIsMapChangeReady(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c89de0
void AWorldInfo_::execIsMapChangeReady( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsMapChangeReady();
}

struct AWorldInfo__00c89e20 : public AWorldInfo
{
	void CancelPendingMapChange();
	void execCancelPendingMapChange(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c89e20
void AWorldInfo__00c89e20::execCancelPendingMapChange( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	CancelPendingMapChange();
}

struct AWorldInfo__00c89e50 : public AWorldInfo
{
	void CommitMapChange();
	void execCommitMapChange(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c89e50
void AWorldInfo__00c89e50::execCommitMapChange( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	CommitMapChange();
}

struct AWorldInfo__00c89e80 : public AWorldInfo
{
	UBOOL IsInSeamlessTravel();
	void execIsInSeamlessTravel(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c89e80
void AWorldInfo__00c89e80::execIsInSeamlessTravel( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsInSeamlessTravel();
}

struct AWorldInfo__00c8a070 : public AWorldInfo
{
	UBOOL IsRecordingDemo();
	void execIsRecordingDemo(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c8a070
void AWorldInfo__00c8a070::execIsRecordingDemo( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsRecordingDemo();
}

struct AWorldInfo__00c8a0b0 : public AWorldInfo
{
	UBOOL IsPlayingDemo();
	void execIsPlayingDemo(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c8a0b0
void AWorldInfo__00c8a0b0::execIsPlayingDemo( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsPlayingDemo();
}

struct AWorldInfo__00c8a1e0 : public AWorldInfo
{
	void DoMemoryTracking();
	void execDoMemoryTracking(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c8a1e0
void AWorldInfo__00c8a1e0::execDoMemoryTracking( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DoMemoryTracking();
}
