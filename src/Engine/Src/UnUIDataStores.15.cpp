// UnUIDataStores.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4358;
	/* ENGINE_OnRegister */
/* Kit gap: the generated glue for UIDataProvider_OnlinePlayerDataBase's script event OnRegister (EngineClasses.h) isn't declared; this build keeps it out of line. */
struct UUIDataProvider_OnlinePlayerDataBase_ : public UUIDataProvider_OnlinePlayerDataBase
{
	void eventOnRegister(class ULocalPlayer* InPlayer);
};

// @baa 0x00d8f8a0
void UUIDataProvider_OnlinePlayerDataBase_::eventOnRegister(class ULocalPlayer* InPlayer)
{
	struct UIDataProvider_OnlinePlayerDataBase_eventOnRegister_Parms
	{
		ULocalPlayer* InPlayer;
	} Parms;
	Parms.InPlayer = InPlayer;
	ProcessEvent(FindFunctionChecked(g_026c4358), &Parms);
}
