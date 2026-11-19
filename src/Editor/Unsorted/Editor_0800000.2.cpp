// Editor_0800000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4bcc;
	/* ConditionalPause */

// @baa 0x00802c70
/* PlayerController.ConditionalPause script event: the generated glue, out of line here. */
void APlayerController::eventConditionalPause(UBOOL bDesiredPauseState)
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

// @baa 0x00802d20
/* GameInfo.KickIdler script event: the generated glue, out of line here. */
void AGameInfo::eventKickIdler(class APlayerController* PC)
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

// @baa 0x00802de0
/* Pawn.GetViewRotation script event: the generated glue, out of line here. */
FRotator APawn::eventGetViewRotation()
{
	struct Pawn_eventGetViewRotation_Parms
	{
		FRotator ReturnValue;
	} Parms;
	appMemzero(&Parms.ReturnValue, sizeof(Parms.ReturnValue));
	ProcessEvent(FindFunctionChecked(g_026c40f0), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c3f94;
// A one-FLOAT UnrealScript event with no return value: the generated glue, out of line here.

// @baa 0x00803550
void UObject::eventScriptCall(FLOAT Value)
{
    struct ScriptCall_Parms
    {
        FLOAT Value;
    } Parms;
    Parms.Value = Value;
    ProcessEvent(FindFunctionChecked(g_026c3f94), &Parms);
}
