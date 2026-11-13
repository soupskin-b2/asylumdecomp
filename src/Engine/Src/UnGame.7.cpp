// UnGame.cpp: 15 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c3e44;
	/* ENGINE_PostInit */
struct UOnlineSubsystem_ : public UOnlineSubsystem
{
	UBOOL eventPostInit();
};

// @baa 0x007d6290
/* The script event's generated glue (EngineClasses.h), out of line here: event bool PostInit() */
UBOOL UOnlineSubsystem_::eventPostInit()
{
	struct OnlineSubsystem_eventPostInit_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026c3e44), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c4e5c;
	/* ENGINE_Init */
struct UOnlineSubsystem__007d62d0 : public UOnlineSubsystem
{
	UBOOL eventInit();
};

// @baa 0x007d62d0
/* The script event's generated glue (EngineClasses.h), out of line here: event bool Init() */
UBOOL UOnlineSubsystem__007d62d0::eventInit()
{
	struct OnlineSubsystem_eventInit_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4e5c), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c55e4;
	/* ENGINE_SetProgressMessage */
struct APlayerController_ : public APlayerController
{
	void eventSetProgressMessage(BYTE MessageType, const FString& Message, const FString& Title);
};

// @baa 0x007e1010
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

extern FName g_026c46b4;
	/* ENGINE_PreCommitMapChange */
struct AGameInfo_ : public AGameInfo
{
	void eventPreCommitMapChange(const FString& PreviousMapName, const FString& NextMapName);
};

// @baa 0x007dcb50
/* The script event's generated glue (EngineClasses.h), out of line here. The Parms struct's
 * implicit destructor (two FStrings) stays out of line (007dcb50). */
void AGameInfo_::eventPreCommitMapChange(const FString& PreviousMapName, const FString& NextMapName)
{
	struct GameInfo_eventPreCommitMapChange_Parms
	{
		FString PreviousMapName;
		FString NextMapName;
	} Parms;
	Parms.PreviousMapName = PreviousMapName;
	Parms.NextMapName = NextMapName;
	ProcessEvent(FindFunctionChecked(g_026c46b4), &Parms);
}

extern FName g_026c3d4c;
	/* ENGINE_Login */
struct AGameInfo__007dcbc0 : public AGameInfo
{
	APlayerController* eventLogin(const FString& Portal, const FString& Options, FString& ErrorMessage);
};

// @baa 0x007dcbc0
/* The script event's generated glue (EngineClasses.h), out of line here. ErrorMessage is an out
 * parameter; the Parms struct's implicit destructor (three FStrings) stays out of line (007dcbc0). */
APlayerController* AGameInfo__007dcbc0::eventLogin(const FString& Portal, const FString& Options, FString& ErrorMessage)
{
	struct GameInfo_eventLogin_Parms
	{
		FString Portal;
		FString Options;
		FString ErrorMessage;
		class APlayerController* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	Parms.Portal = Portal;
	Parms.Options = Options;
	Parms.ErrorMessage = ErrorMessage;
	ProcessEvent(FindFunctionChecked(g_026c3d4c), &Parms);
	ErrorMessage = Parms.ErrorMessage;
	return Parms.ReturnValue;
}

// @baa 0x007e10d0

extern FName g_026c4518;
	/* ENGINE_Broadcast */
struct AGameInfo__007e1180 : public AGameInfo
{
	void eventBroadcast(AActor* Sender, const FString& Msg, FName Type);
};

// @baa 0x007e1180
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AGameInfo__007e1180::eventBroadcast(AActor* Sender, const FString& Msg, FName Type)
{
	struct GameInfo_eventBroadcast_Parms
	{
		class AActor* Sender;
		FString Msg;
		FName Type;
	} Parms;
	Parms.Sender = Sender;
	Parms.Msg = Msg;
	Parms.Type = Type;
	ProcessEvent(FindFunctionChecked(g_026c4518), &Parms);
}

	/* ENGINE_Login */
struct AGameInfo__007e1230 : public AGameInfo
{
	APlayerController* eventLogin(const FString& Portal, const FString& Options, FString& ErrorMessage);
};

// @baa 0x007e1230
/* The script event's generated glue (EngineClasses.h), out of line here. ErrorMessage is an out
 * parameter; the Parms struct's implicit destructor (three FStrings) stays out of line (007dcbc0). */
APlayerController* AGameInfo__007e1230::eventLogin(const FString& Portal, const FString& Options, FString& ErrorMessage)
{
	struct GameInfo_eventLogin_Parms
	{
		FString Portal;
		FString Options;
		FString ErrorMessage;
		class APlayerController* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	Parms.Portal = Portal;
	Parms.Options = Options;
	Parms.ErrorMessage = ErrorMessage;
	ProcessEvent(FindFunctionChecked(g_026c3d4c), &Parms);
	ErrorMessage = Parms.ErrorMessage;
	return Parms.ReturnValue;
}

extern FName g_026c4990;
	/* ENGINE_ServerTravel */
struct AGameInfo__007e1430 : public AGameInfo
{
	void eventServerTravel(const FString& URL, UBOOL bAbsolute, UBOOL bShouldSkipGameNotify);
};

// @baa 0x007e1430
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AGameInfo__007e1430::eventServerTravel(const FString& URL, UBOOL bAbsolute, UBOOL bShouldSkipGameNotify)
{
	struct GameInfo_eventServerTravel_Parms
	{
		FString URL;
		UBOOL bAbsolute;
		UBOOL bShouldSkipGameNotify;
	} Parms;
	Parms.URL = URL;
	Parms.bAbsolute = bAbsolute ? TRUE : FALSE;
	Parms.bShouldSkipGameNotify = bShouldSkipGameNotify ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4990), &Parms);
}

extern FName g_026c4f38;
	/* NotifyLoadedWorld */
struct APlayerController__009aeca0 : public APlayerController
{
	void eventNotifyLoadedWorld(FName WorldPackageName, UBOOL bFinalDest);
};

// @baa 0x009aeca0
/* PlayerController.NotifyLoadedWorld script event: the generated glue, out of line here. */
void APlayerController__009aeca0::eventNotifyLoadedWorld(FName WorldPackageName, UBOOL bFinalDest)
{
	struct PlayerController_eventNotifyLoadedWorld_Parms
	{
		FName WorldPackageName;
		UBOOL bFinalDest;
	} Parms;
	Parms.WorldPackageName = WorldPackageName;
	Parms.bFinalDest = bFinalDest ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4f38), &Parms);
}

extern FName g_026c4038;
	/* ServerNotifyLoadedWorld */
struct APlayerController__009aed00 : public APlayerController
{
	void eventServerNotifyLoadedWorld(FName WorldPackageName);
};

// @baa 0x009aed00
/* PlayerController.ServerNotifyLoadedWorld script event: the generated glue, out of line here. */
void APlayerController__009aed00::eventServerNotifyLoadedWorld(FName WorldPackageName)
{
	struct PlayerController_eventServerNotifyLoadedWorld_Parms
	{
		FName WorldPackageName;
	} Parms;
	Parms.WorldPackageName = WorldPackageName;
	ProcessEvent(FindFunctionChecked(g_026c4038), &Parms);
}

	/* ENGINE_Init */
/* Kit gap: the generated glue for GameViewportClient's script event Init (EngineClasses.h) isn't declared; this
 * build keeps it out of line (UGameEngine::Init calls it). */
struct UGameViewportClient_ : public UGameViewportClient
{
	UBOOL eventInit(FString& OutError);
};

// @baa 0x007e14f0
UBOOL UGameViewportClient_::eventInit(FString& OutError)
{
	struct GameViewportClient_eventInit_Parms
	{
		FString OutError;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.OutError = OutError;
	ProcessEvent(FindFunctionChecked(g_026c4e5c), &Parms);
	OutError = Parms.OutError;
	return Parms.ReturnValue;
}

extern FName g_026c3d88;
	/* ENGINE_GetSeamlessTravelActorList */
/* Kit gap: the generated glue for PlayerController's script event GetSeamlessTravelActorList (EngineClasses.h) isn't
 * declared; this build keeps it out of line (FSeamlessTravelHandler::Tick calls it). */
struct APlayerController__009bd9b0 : public APlayerController
{
	void eventGetSeamlessTravelActorList(UBOOL bToEntry, TArray<AActor*>& ActorList);
};

// @baa 0x009bd9b0
void APlayerController__009bd9b0::eventGetSeamlessTravelActorList(UBOOL bToEntry, TArray<AActor*>& ActorList)
{
	struct PlayerController_eventGetSeamlessTravelActorList_Parms
	{
		UBOOL bToEntry;
		TArray<AActor*> ActorList;
	} Parms;
	Parms.bToEntry = bToEntry ? TRUE : FALSE;
	Parms.ActorList = ActorList;
	ProcessEvent(FindFunctionChecked(g_026c3d88), &Parms);
	ActorList = Parms.ActorList;
}

	/* ENGINE_GetSeamlessTravelActorList */
/* Kit gap: the generated glue for GameInfo's script event GetSeamlessTravelActorList (EngineClasses.h) isn't
 * declared; this build keeps it out of line (FSeamlessTravelHandler::Tick calls it). */
struct AGameInfo__009bda70 : public AGameInfo
{
	void eventGetSeamlessTravelActorList(UBOOL bToEntry, TArray<AActor*>& ActorList);
};

// @baa 0x009bda70
void AGameInfo__009bda70::eventGetSeamlessTravelActorList(UBOOL bToEntry, TArray<AActor*>& ActorList)
{
	struct GameInfo_eventGetSeamlessTravelActorList_Parms
	{
		UBOOL bToEntry;
		TArray<AActor*> ActorList;
	} Parms;
	Parms.bToEntry = bToEntry ? TRUE : FALSE;
	Parms.ActorList = ActorList;
	ProcessEvent(FindFunctionChecked(g_026c3d88), &Parms);
	ActorList = Parms.ActorList;
}

extern FName g_026c3d24;
	/* ENGINE_GetDefaultGameClassPath */
/* Kit gap: the generated glue for GameInfo's static script event GetDefaultGameClassPath (EngineClasses.h) isn't
 * declared; this build keeps it out of line (UGameEngine's map loading calls it on the GameInfo class default
 * object). */
struct AGameInfo__007e1320 : public AGameInfo
{
	FString eventGetDefaultGameClassPath(const FString& MapName, const FString& Options, const FString& Portal);
};

// @baa 0x007e1320
FString AGameInfo__007e1320::eventGetDefaultGameClassPath(const FString& MapName, const FString& Options, const FString& Portal)
{
	struct GameInfo_eventGetDefaultGameClassPath_Parms
	{
		FString MapName;
		FString Options;
		FString Portal;
		FString ReturnValue;
	} Parms;
	Parms.MapName = MapName;
	Parms.Options = Options;
	Parms.Portal = Portal;
	ProcessEvent(FindFunctionChecked(g_026c3d24), &Parms);
	return Parms.ReturnValue;
}
