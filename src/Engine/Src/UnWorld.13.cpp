// UnWorld.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c54e0;
	/* ENGINE_PreLogin */
struct AGameInfo_ : public AGameInfo
{
	void eventPreLogin(const FString& Options, const FString& Address, FString& ErrorMessage);
};

// @baa 0x009b7db0
/* The script event's generated glue (EngineClasses.h), out of line here. ErrorMessage is an out
 * parameter; the Parms struct's implicit destructor stays out of line (009b4600). */
void AGameInfo_::eventPreLogin(const FString& Options, const FString& Address, FString& ErrorMessage)
{
	struct GameInfo_eventPreLogin_Parms
	{
		FString Options;
		FString Address;
		FString ErrorMessage;
	} Parms;
	Parms.Options = Options;
	Parms.Address = Address;
	Parms.ErrorMessage = ErrorMessage;
	ProcessEvent(FindFunctionChecked(g_026c54e0), &Parms);
	ErrorMessage = Parms.ErrorMessage;
}

extern FName g_026c4cd8;
	/* ENGINE_InitGame */
struct AGameInfo__009b7e90 : public AGameInfo
{
	void eventInitGame(const FString& Options, FString& ErrorMessage);
};

// @baa 0x009b7e90
/* The script event's generated glue (EngineClasses.h), out of line here. ErrorMessage is an out
 * parameter; the Parms struct's implicit destructor stays out of line (009b4670). */
void AGameInfo__009b7e90::eventInitGame(const FString& Options, FString& ErrorMessage)
{
	struct GameInfo_eventInitGame_Parms
	{
		FString Options;
		FString ErrorMessage;
	} Parms;
	Parms.Options = Options;
	Parms.ErrorMessage = ErrorMessage;
	ProcessEvent(FindFunctionChecked(g_026c4cd8), &Parms);
	ErrorMessage = Parms.ErrorMessage;
}

extern FName g_026c5024;
	/* ENGINE_SetGameType */
struct AGameInfo__009b7f50 : public AGameInfo
{
	UClass* eventSetGameType(const FString& MapName, const FString& Options, const FString& Portal);
};

// @baa 0x009b7f50
/* The script event's generated glue (EngineClasses.h), out of line here: static event
 * class<GameInfo> SetGameType(...), called on the class default object. The Parms struct's
 * implicit destructor stays out of line (009b46d0). */
UClass* AGameInfo__009b7f50::eventSetGameType(const FString& MapName, const FString& Options, const FString& Portal)
{
	struct GameInfo_eventSetGameType_Parms
	{
		FString MapName;
		FString Options;
		FString Portal;
		class UClass* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	Parms.MapName = MapName;
	Parms.Options = Options;
	Parms.Portal = Portal;
	ProcessEvent(FindFunctionChecked(g_026c5024), &Parms);
	return Parms.ReturnValue;
}

// @baa 0x009b4600

	/* ENGINE_InitGame */
struct AGameInfo__009b4670 : public AGameInfo
{
	void eventInitGame(const FString& Options, FString& ErrorMessage);
};

// @baa 0x009b4670
/* The script event's generated glue (EngineClasses.h), out of line here. ErrorMessage is an out
 * parameter; the Parms struct's implicit destructor stays out of line (009b4670). */
void AGameInfo__009b4670::eventInitGame(const FString& Options, FString& ErrorMessage)
{
	struct GameInfo_eventInitGame_Parms
	{
		FString Options;
		FString ErrorMessage;
	} Parms;
	Parms.Options = Options;
	Parms.ErrorMessage = ErrorMessage;
	ProcessEvent(FindFunctionChecked(g_026c4cd8), &Parms);
	ErrorMessage = Parms.ErrorMessage;
}

	/* ENGINE_SetGameType */
struct AGameInfo__009b46d0 : public AGameInfo
{
	UClass* eventSetGameType(const FString& MapName, const FString& Options, const FString& Portal);
};

// @baa 0x009b46d0
/* The script event's generated glue (EngineClasses.h), out of line here: static event
 * class<GameInfo> SetGameType(...), called on the class default object. The Parms struct's
 * implicit destructor stays out of line (009b46d0). */
UClass* AGameInfo__009b46d0::eventSetGameType(const FString& MapName, const FString& Options, const FString& Portal)
{
	struct GameInfo_eventSetGameType_Parms
	{
		FString MapName;
		FString Options;
		FString Portal;
		class UClass* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	Parms.MapName = MapName;
	Parms.Options = Options;
	Parms.Portal = Portal;
	ProcessEvent(FindFunctionChecked(g_026c5024), &Parms);
	return Parms.ReturnValue;
}
