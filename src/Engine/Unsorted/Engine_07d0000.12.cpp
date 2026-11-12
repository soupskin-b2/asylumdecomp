// Engine_07d0000.cpp: 2 functions
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
