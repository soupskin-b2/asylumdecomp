// Engine_08c0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

extern FName g_026c4dc8;
	/* ENGINE_ClearPause */
/* Kit gap: the GameInfo.ClearPause script event's glue (EngineClasses.h, inline) isn't declared. */

struct AGameInfo_ : public AGameInfo
{
	FORCEINLINE void eventClearPause()
	{
		ProcessEvent(FindFunctionChecked(g_026c4dc8), NULL);
	}
};

// @baa 0x008c7500
/* AGameInfo::ForceClearUnpauseDelegates (UnGame.cpp): drops every CanUnpause delegate PauseActor registered, and if
 * PauseActor's player was the pauser, hands that role to another live player (or clears it). */
void AGameInfo::ForceClearUnpauseDelegates(AActor* PauseActor)
{
	if (PauseActor != NULL)
	{
		UBOOL bUpdatePausedState = FALSE;
		for (INT PauserIdx = Pausers.Num() - 1; PauserIdx >= 0; PauserIdx--)
		{
			FScriptDelegate& Delegate = Pausers(PauserIdx);
			if (Delegate.Object == PauseActor)
			{
				Pausers.Remove(PauserIdx);
				bUpdatePausedState = TRUE;
			}
		}

		// if we removed some CanUnpause delegates, we may be able to unpause the game now
		if (bUpdatePausedState)
		{
			((AGameInfo_*)this)->eventClearPause();
		}

		APlayerController* PC = Cast<APlayerController>(PauseActor);
		if (PC != NULL && PC->PlayerReplicationInfo != NULL && WorldInfo != NULL && WorldInfo->Pauser == PC->PlayerReplicationInfo)
		{
			// try to find another player to be the server's pauser
			for (AController* C = WorldInfo->ControllerList; C != NULL; C = C->NextController)
			{
				APlayerController* OtherPlayer = Cast<APlayerController>(C);
				if (OtherPlayer != NULL && OtherPlayer->PlayerReplicationInfo != NULL &&
					OtherPlayer->PlayerReplicationInfo != PC->PlayerReplicationInfo &&
					!OtherPlayer->bDeleteMe && !OtherPlayer->HasAnyFlags(RF_PendingKill) &&
					!OtherPlayer->PlayerReplicationInfo->bDeleteMe && !OtherPlayer->PlayerReplicationInfo->HasAnyFlags(RF_PendingKill) &&
					!OtherPlayer->bPendingDelete && !OtherPlayer->PlayerReplicationInfo->bPendingDelete)
				{
					WorldInfo->Pauser = OtherPlayer->PlayerReplicationInfo;
					break;
				}
			}

			// if we couldn't find another player, clear the pauser
			if (WorldInfo->Pauser == PC->PlayerReplicationInfo)
			{
				WorldInfo->Pauser = NULL;
			}
		}
	}
}

template APlayerController* Cast<APlayerController>(UObject* Src);
