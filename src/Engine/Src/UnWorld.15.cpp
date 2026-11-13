// UnWorld.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"
#include "ue3/Cast.h"

// @baa 0x009b2cb0
/* UnLevel.cpp */
UBOOL AWorldInfo::IsPreparingMapChange()
{
	UGameEngine* GameEngine = Cast<UGameEngine>(GEngine);
	return GameEngine ? GameEngine->IsPreparingMapChange() : FALSE;
}

// @baa 0x009b2cd0
/* UnLevel.cpp */
UBOOL AWorldInfo::IsMapChangeReady()
{
	UGameEngine* GameEngine = Cast<UGameEngine>(GEngine);
	return GameEngine ? GameEngine->IsReadyForMapChange() : FALSE;
}

// @baa 0x009b2cf0
/* UnLevel.cpp */
void AWorldInfo::CancelPendingMapChange()
{
	UGameEngine* GameEngine = Cast<UGameEngine>(GEngine);
	if (GameEngine)
	{
		GameEngine->CancelPendingMapChange();
	}
}

// @baa 0x009b2d10
/* UnLevel.cpp: asks the game engine to commit the pending map change on its next tick. */
void AWorldInfo::CommitMapChange()
{
	UGameEngine* GameEngine = Cast<UGameEngine>(GEngine);
	// (IsPreparingMapChange() inlined here)
	UGameEngine* PreparingEngine;
	if (GameEngine && (PreparingEngine = Cast<UGameEngine>(GEngine)) != NULL && PreparingEngine->IsPreparingMapChange())
	{
		GameEngine->bShouldCommitPendingMapChange = TRUE;
	}
}
