// UnUserInterface.cpp: 19 functions
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

// @baa 0x00ddd860
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UUITickableObjectProxy::eventScriptTick(FLOAT DeltaTime)
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

// @baa 0x00ddd500
/* The script event's generated glue (EngineClasses.h), out of line here. */
void UGameUISceneClient::eventPauseGame(UBOOL bDesiredPauseState, INT PlayerIndex)
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


// @baa 0x00ca7490
void UGameUISceneClient::execRequestInputProcessingUpdate(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	sub_00dde4f0();	/* RequestInputProcessingUpdate */
}


// @baa 0x00ca74c0
void UGameUISceneClient::execRequestCursorRenderUpdate(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	sub_00dde500();	/* RequestCursorRenderUpdate */
}


// @baa 0x00ca74f0
void UGameUISceneClient::execCanUnpauseInternalUI(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = CanUnpauseInternalUI();
}


// @baa 0x00ca6d50
void UGameUISceneClient::execFindSceneIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIScene, SceneToFind);
	P_FINISH;
	*(INT*)Result = FindSceneIndex(SceneToFind);
}


// @baa 0x00ca6dc0
void UGameUISceneClient::execGetSceneAtIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SceneIndex);
	P_FINISH;
	*(class UUIScene**)Result = GetSceneAtIndex(SceneIndex);
}


// @baa 0x00ca1a70
void UUISceneClient::execGetCanvasToScreen(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT_OPTX(UUIObject, Widget, NULL);
	P_FINISH;
	*(FMatrix*)Result = GetCanvasToScreen(Widget);
}


// @baa 0x00ca1af0
void UUISceneClient::execGetInverseCanvasToScreen(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT_OPTX(UUIObject, Widget, NULL);
	P_FINISH;
	*(FMatrix*)Result = GetInverseCanvasToScreen(Widget);
}


// @baa 0x00ca6ca0
void UGameUISceneClient::execFindSceneByTag(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(SceneTag);
	P_GET_OBJECT_OPTX(ULocalPlayer, SceneOwner, NULL);
	P_FINISH;
	*(class UUIScene**)Result = FindSceneByTag(SceneTag, SceneOwner);
}


// @baa 0x00ca6e30
void UGameUISceneClient::execFindSceneIndexByTag(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(SceneTag);
	P_GET_OBJECT_OPTX(ULocalPlayer, SceneOwner, NULL);
	P_FINISH;
	*(INT*)Result = FindSceneIndexByTag(SceneTag, SceneOwner);
}


// @baa 0x00ca6ee0
void UGameUISceneClient::execGetActiveSceneCount(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT_OPTX(ULocalPlayer, MatchingPlayerOwner, NULL);
	P_GET_UBOOL_OPTX(bIgnoreUnfocusedScenes, FALSE);
	P_FINISH;
	*(INT*)Result = GetActiveSceneCount(MatchingPlayerOwner, bIgnoreUnfocusedScenes);
}


// @baa 0x00ca6f90
void UGameUISceneClient::execGetActiveScene(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT_OPTX(ULocalPlayer, MatchingPlayerOwner, NULL);
	P_GET_UBOOL_OPTX(bIgnoreUnfocusedScenes, FALSE);
	P_FINISH;
	*(class UUIScene**)Result = GetActiveScene(MatchingPlayerOwner, bIgnoreUnfocusedScenes);
}


// @baa 0x00ca7130
void UGameUISceneClient::execGetPreviousSceneFromIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(StartingSceneIndex);
	P_GET_OBJECT_OPTX(ULocalPlayer, MatchingPlayerOwner, NULL);
	P_GET_UBOOL_OPTX(bIgnoreUnfocusedScenes, FALSE);
	P_FINISH;
	*(class UUIScene**)Result = GetPreviousSceneFromIndex(StartingSceneIndex, MatchingPlayerOwner, bIgnoreUnfocusedScenes);
}


// @baa 0x00ca73b0
void UGameUISceneClient::execGetNextSceneFromIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(StartingSceneIndex);
	P_GET_OBJECT_OPTX(ULocalPlayer, MatchingPlayerOwner, NULL);
	P_GET_UBOOL_OPTX(bIgnoreUnfocusedScenes, FALSE);
	P_FINISH;
	*(class UUIScene**)Result = GetNextSceneFromIndex(StartingSceneIndex, MatchingPlayerOwner, bIgnoreUnfocusedScenes);
}


// @baa 0x00ca7040
void UGameUISceneClient::execGetPreviousScene(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIScene, SourceScene);
	P_GET_UBOOL_OPTX(bRequireMatchingPlayerOwner, TRUE);
	P_GET_UBOOL_OPTX(bIgnoreUnfocusedScenes, FALSE);
	P_FINISH;
	*(class UUIScene**)Result = GetPreviousScene(SourceScene, bRequireMatchingPlayerOwner, bIgnoreUnfocusedScenes);
}


// @baa 0x00ca72c0
void UGameUISceneClient::execGetNextScene(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIScene, SourceScene);
	P_GET_UBOOL_OPTX(bRequireMatchingPlayerOwner, TRUE);
	P_GET_UBOOL_OPTX(bIgnoreUnfocusedScenes, FALSE);
	P_FINISH;
	*(class UUIScene**)Result = GetNextScene(SourceScene, bRequireMatchingPlayerOwner, bIgnoreUnfocusedScenes);
}


// @baa 0x00ca7210
void UGameUISceneClient::execGetPreviousInputProcessingScene(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIScene, SourceScene);
	P_GET_UBOOL_OPTX(bIgnoreUnfocusedScenes, TRUE);
	P_FINISH;
	*(class UUIScene**)Result = GetPreviousInputProcessingScene(SourceScene, bIgnoreUnfocusedScenes);
}
