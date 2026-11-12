// Engine_0750000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4198;
	/* PostRenderFor */
struct AActor_ : public AActor
{
	void eventPostRenderFor(class APlayerController* PC, class UCanvas* Canvas, FVector CameraPosition, FVector CameraDir);
};

// @baa 0x00753750
/* Actor.PostRenderFor script event: the generated glue, out of line here. */
void AActor_::eventPostRenderFor(class APlayerController* PC, class UCanvas* Canvas, FVector CameraPosition, FVector CameraDir)
{
	struct Actor_eventPostRenderFor_Parms
	{
		class APlayerController* PC;
		class UCanvas* Canvas;
		FVector CameraPosition;
		FVector CameraDir;
	} Parms;
	Parms.PC = PC;
	Parms.Canvas = Canvas;
	Parms.CameraPosition = CameraPosition;
	Parms.CameraDir = CameraDir;
	ProcessEvent(FindFunctionChecked(g_026c4198), &Parms);
}

extern FName g_026c52d8;
	/* ScriptGetTeamNum */
struct AActor__007537d0 : public AActor
{
	BYTE eventScriptGetTeamNum();
};

// @baa 0x007537d0
/* Actor.ScriptGetTeamNum script event: the generated glue, out of line here. */
BYTE AActor__007537d0::eventScriptGetTeamNum()
{
	struct Actor_eventScriptGetTeamNum_Parms
	{
		BYTE ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026c52d8), &Parms);
	return Parms.ReturnValue;
}

	/* ScriptGetTeamNum */
struct AActor__00758bf0 : public AActor
{
	BYTE eventScriptGetTeamNum();
};

// @baa 0x00758bf0
/* Actor.ScriptGetTeamNum script event: the generated glue, out of line here. */
BYTE AActor__00758bf0::eventScriptGetTeamNum()
{
	struct Actor_eventScriptGetTeamNum_Parms
	{
		BYTE ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026c52d8), &Parms);
	return Parms.ReturnValue;
}
