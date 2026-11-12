// Engine_07d0000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c50a4;
	/* ENGINE_PostLogin */
struct AGameInfo_ : public AGameInfo
{
	void eventPostLogin(class APlayerController* NewPlayer);
};

// @baa 0x007d64a0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AGameInfo_::eventPostLogin(class APlayerController* NewPlayer)
{
	struct GameInfo_eventPostLogin_Parms
	{
		class APlayerController* NewPlayer;
	} Parms;
	Parms.NewPlayer = NewPlayer;
	ProcessEvent(FindFunctionChecked(g_026c50a4), &Parms);
}

extern FName g_026c55e4;
	/* ENGINE_SetProgressMessage */
struct APlayerController_ : public APlayerController
{
	void eventSetProgressMessage(BYTE MessageType, const FString& Message, const FString& Title);
};

// @baa 0x007dca60
/* The script event's generated glue (EngineClasses.h), out of line here. The Parms struct's
 * implicit destructor (two FStrings) stays out of line (007dca60). Callers pass GamePlayers(0)->Actor. */
void APlayerController_::eventSetProgressMessage(BYTE MessageType, const FString& Message, const FString& Title)
{
	struct PlayerController_eventSetProgressMessage_Parms
	{
		BYTE MessageType;
		FString Message;
		FString Title;
	} Parms;
	Parms.MessageType = MessageType;
	Parms.Message = Message;
	Parms.Title = Title;
	ProcessEvent(FindFunctionChecked(g_026c55e4), &Parms);
}

extern FName g_026c4570;
	/* ENGINE_PostBeginPlay */
extern FName g_026c3ff8;
	/* ENGINE_SetInitialState */
/* EName entry Core.h doesn't list yet (UnNames.h): the PostBeginPlay probe. */
#define NAME_PostBeginPlay 0x165
/* Kit gap: the script-event glue (EngineClasses.h, inline) isn't declared. PostBeginPlay is a probe function: the
 * glue only calls into script when the current state probes for it. */
struct AActor_ : public AActor
{
    FORCEINLINE void eventPostBeginPlay()
    {
        if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_PostBeginPlay - NAME_PROBEMIN))))
        {
            ProcessEvent(FindFunctionChecked(g_026c4570), NULL);
        }
    }
    FORCEINLINE void eventSetInitialState() { ProcessEvent(FindFunctionChecked(g_026c3ff8), NULL); }
};

// @baa 0x007d7170
/* AActor slot 0x1d8 (kit vf_1d8): UE3's AActor::PostBeginPlay(): script PostBeginPlay, then the initial state and
 * a base for actors that should start on one (slot 0x124, UE3 FindBase). */
void AActor::vf_1d8()
{
    ((AActor_*)this)->eventPostBeginPlay();
    bDonePostBeginPlay = TRUE;
    if (!bDeleteMe)
    {
        ((AActor_*)this)->eventSetInitialState();
        if (!Base && bCollideWorld && bShouldBaseAtStartup && (Physics == PHYS_None || Physics == PHYS_Rotating))
        {
            vf_124();
        }
    }
}

struct AActor__007d5bb0 : public AActor
{
	void eventPostBeginPlay();
};

// @baa 0x007d5bb0
/* The script event's generated glue (EngineClasses.h), out of line here. PostBeginPlay is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AActor__007d5bb0::eventPostBeginPlay()
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_PostBeginPlay - NAME_PROBEMIN))))
	{
		ProcessEvent(FindFunctionChecked(g_026c4570), NULL);
	}
}

extern FName g_026c54b0;
	/* ENGINE_PreBeginPlay */
/* EName entries Core.h doesn't list yet (UnNames.h) */
#define NAME_PreBeginPlay 0x163
struct AActor__007d5c00 : public AActor
{
	void eventPreBeginPlay();
};

// @baa 0x007d5c00
/* The script event's generated glue (EngineClasses.h), out of line here. PreBeginPlay is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AActor__007d5c00::eventPreBeginPlay()
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_PreBeginPlay - NAME_PROBEMIN))))
	{
		ProcessEvent(FindFunctionChecked(g_026c54b0), NULL);
	}
}

extern FName g_026c5544;
	/* ENGINE_ActorLeavingVolume */
/* EName entries Core.h doesn't list yet (UnNames.h) */
#define NAME_ActorLeavingVolume 0x169

// @baa 0x007d5fd0
/* The script event's generated glue (EngineClasses.h), out of line here. ActorLeavingVolume is a probe
 * function: the glue only calls into script when the current state probes for it. */
void APhysicsVolume::eventActorLeavingVolume(class AActor* Other)
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_ActorLeavingVolume - NAME_PROBEMIN))))
	{
		struct PhysicsVolume_eventActorLeavingVolume_Parms
		{
			class AActor* Other;
		} Parms;
		Parms.Other = Other;
		ProcessEvent(FindFunctionChecked(g_026c5544), &Parms);
	}
}
