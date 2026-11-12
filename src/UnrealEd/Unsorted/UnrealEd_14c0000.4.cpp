// UnrealEd_14c0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4998;
	/* DisablePlayerInput */
struct UUIScreenObject_ : public UUIScreenObject
{
	void eventDisablePlayerInput(BYTE PlayerIndex, UBOOL bRecurse);
};

// @baa 0x014c5730
/* UIScreenObject.DisablePlayerInput script event: the generated glue, out of line here. */
void UUIScreenObject_::eventDisablePlayerInput(BYTE PlayerIndex, UBOOL bRecurse)
{
	struct UIScreenObject_eventDisablePlayerInput_Parms
	{
		BYTE PlayerIndex;
		UBOOL bRecurse;
	} Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.bRecurse = bRecurse ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4998), &Parms);
}

extern FName g_026c4934;
	/* EnablePlayerInput */
struct UUIScreenObject__014c5780 : public UUIScreenObject
{
	void eventEnablePlayerInput(BYTE PlayerIndex, UBOOL bRecurse);
};

// @baa 0x014c5780
/* UIScreenObject.EnablePlayerInput script event: the generated glue, out of line here. */
void UUIScreenObject__014c5780::eventEnablePlayerInput(BYTE PlayerIndex, UBOOL bRecurse)
{
	struct UIScreenObject_eventEnablePlayerInput_Parms
	{
		BYTE PlayerIndex;
		UBOOL bRecurse;
	} Parms;
	Parms.PlayerIndex = PlayerIndex;
	Parms.bRecurse = bRecurse ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4934), &Parms);
}
