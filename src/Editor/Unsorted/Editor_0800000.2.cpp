// Editor_0800000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4bcc;
	/* ConditionalPause */
struct APlayerController_ : public APlayerController
{
	void eventConditionalPause(UBOOL bDesiredPauseState);
};

// @baa 0x00802c70
/* PlayerController.ConditionalPause script event: the generated glue, out of line here. */
void APlayerController_::eventConditionalPause(UBOOL bDesiredPauseState)
{
	struct PlayerController_eventConditionalPause_Parms
	{
		UBOOL bDesiredPauseState;
	} Parms;
	Parms.bDesiredPauseState = bDesiredPauseState ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4bcc), &Parms);
}

extern FName g_026c4dc0;
	/* KickIdler */
struct AGameInfo_ : public AGameInfo
{
	void eventKickIdler(class APlayerController* PC);
};

// @baa 0x00802d20
/* GameInfo.KickIdler script event: the generated glue, out of line here. */
void AGameInfo_::eventKickIdler(class APlayerController* PC)
{
	struct GameInfo_eventKickIdler_Parms
	{
		class APlayerController* PC;
	} Parms;
	Parms.PC = PC;
	ProcessEvent(FindFunctionChecked(g_026c4dc0), &Parms);
}

extern FName g_026c40f0;
	/* GetViewRotation */
struct APawn_ : public APawn
{
	FRotator eventGetViewRotation();
};

// @baa 0x00802de0
/* Pawn.GetViewRotation script event: the generated glue, out of line here. */
FRotator APawn_::eventGetViewRotation()
{
	struct Pawn_eventGetViewRotation_Parms
	{
		FRotator ReturnValue;
	} Parms;
	appMemzero(&Parms.ReturnValue, sizeof(Parms.ReturnValue));
	ProcessEvent(FindFunctionChecked(g_026c40f0), &Parms);
	return Parms.ReturnValue;
}
