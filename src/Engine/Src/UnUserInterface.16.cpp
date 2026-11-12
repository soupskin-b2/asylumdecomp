// UnUserInterface.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
// UUISceneClient::IsSceneInitialized (00de14f0, 32 bytes)
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00de14f0
UINT UUISceneClient::IsSceneInitialized(INT SceneIndex)
{
	PURE_VIRTUAL(UUISceneClient::IsSceneInitialized, return 1;);
}

extern FName g_026c50e4;
	/* ENGINE_ScriptTick */
struct UUITickableObjectProxy_ : public UUITickableObjectProxy
{
	void eventScriptTick(FLOAT DeltaTime);
};

// @baa 0x00ddd860
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UUITickableObjectProxy_::eventScriptTick(FLOAT DeltaTime)
{
	struct UITickableObjectProxy_eventScriptTick_Parms
	{
		FLOAT DeltaTime;
	} Parms;
	Parms.DeltaTime = DeltaTime;
	ProcessEvent(FindFunctionChecked(g_026c50e4), &Parms);
}

extern FName g_026c4c5c;
	/* ENGINE_PauseGame */
struct UGameUISceneClient_ : public UGameUISceneClient
{
	void eventPauseGame(UBOOL bDesiredPauseState, INT PlayerIndex);
};

// @baa 0x00ddd500
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UGameUISceneClient_::eventPauseGame(UBOOL bDesiredPauseState, INT PlayerIndex)
{
	struct GameUISceneClient_eventPauseGame_Parms
	{
		UBOOL bDesiredPauseState;
		INT PlayerIndex;
	} Parms;
	Parms.bDesiredPauseState = bDesiredPauseState ? TRUE : FALSE;
	Parms.PlayerIndex = PlayerIndex;
	ProcessEvent(FindFunctionChecked(g_026c4c5c), &Parms);
}
