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

/* Kit gap: the native's exec isn't declared (name from the exe's native table). */
struct UGameUISceneClient__00ca7490 : public UGameUISceneClient
{
	void execRequestInputProcessingUpdate(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca7490
void UGameUISceneClient__00ca7490::execRequestInputProcessingUpdate(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	sub_00dde4f0();	/* RequestInputProcessingUpdate */
}

/* Kit gap: the native's exec isn't declared (name from the exe's native table). */
struct UGameUISceneClient__00ca74c0 : public UGameUISceneClient
{
	void execRequestCursorRenderUpdate(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca74c0
void UGameUISceneClient__00ca74c0::execRequestCursorRenderUpdate(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	sub_00dde500();	/* RequestCursorRenderUpdate */
}

/* Kit gaps: the native's exec and CanUnpauseInternalUI (00dde4d0) aren't declared (name from the exe's native table). */
struct UGameUISceneClient__00ca74f0 : public UGameUISceneClient
{
	void execCanUnpauseInternalUI(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca74f0
void UGameUISceneClient__00ca74f0::execCanUnpauseInternalUI(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = CanUnpauseInternalUI();
}

/* Kit gaps: the native's exec and FindSceneIndex (00de2590) aren't declared (name from the exe's native table). */
struct UGameUISceneClient__00ca6d50 : public UGameUISceneClient
{
	void execFindSceneIndex(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca6d50
void UGameUISceneClient__00ca6d50::execFindSceneIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIScene, SceneToFind);
	P_FINISH;
	*(INT*)Result = FindSceneIndex(SceneToFind);
}

/* Kit gaps: the native's exec and GetSceneAtIndex (00de2670) aren't declared (name from the exe's native table). */
struct UGameUISceneClient__00ca6dc0 : public UGameUISceneClient
{
	void execGetSceneAtIndex(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca6dc0
void UGameUISceneClient__00ca6dc0::execGetSceneAtIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SceneIndex);
	P_FINISH;
	*(class UUIScene**)Result = GetSceneAtIndex(SceneIndex);
}

/* Kit gaps: the native's exec and GetCanvasToScreen (00dddda0) aren't declared (names from the exe's native table). */
struct UUISceneClient_ : public UUISceneClient
{
	void execGetCanvasToScreen(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca1a70
void UUISceneClient_::execGetCanvasToScreen(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT_OPTX(UUIObject, Widget, NULL);
	P_FINISH;
	*(FMatrix*)Result = GetCanvasToScreen(Widget);
}

/* Kit gaps: the native's exec and GetInverseCanvasToScreen (00ddddf0) aren't declared (names from the exe's native table). */
struct UUISceneClient__00ca1af0 : public UUISceneClient
{
	void execGetInverseCanvasToScreen(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca1af0
void UUISceneClient__00ca1af0::execGetInverseCanvasToScreen(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT_OPTX(UUIObject, Widget, NULL);
	P_FINISH;
	*(FMatrix*)Result = GetInverseCanvasToScreen(Widget);
}

/* Kit gaps: the native's exec and FindSceneByTag (00de54e0) aren't declared (names from the exe's native table). */
struct UGameUISceneClient__00ca6ca0 : public UGameUISceneClient
{
	void execFindSceneByTag(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca6ca0
void UGameUISceneClient__00ca6ca0::execFindSceneByTag(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(SceneTag);
	P_GET_OBJECT_OPTX(ULocalPlayer, SceneOwner, NULL);
	P_FINISH;
	*(class UUIScene**)Result = FindSceneByTag(SceneTag, SceneOwner);
}

/* Kit gaps: the native's exec and FindSceneIndexByTag (00de25d0) aren't declared (names from the exe's native table). */
struct UGameUISceneClient__00ca6e30 : public UGameUISceneClient
{
	void execFindSceneIndexByTag(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca6e30
void UGameUISceneClient__00ca6e30::execFindSceneIndexByTag(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(SceneTag);
	P_GET_OBJECT_OPTX(ULocalPlayer, SceneOwner, NULL);
	P_FINISH;
	*(INT*)Result = FindSceneIndexByTag(SceneTag, SceneOwner);
}

/* Kit gaps: the native's exec and GetActiveSceneCount (00de26d0) aren't declared (names from the exe's native table). */
struct UGameUISceneClient__00ca6ee0 : public UGameUISceneClient
{
	void execGetActiveSceneCount(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca6ee0
void UGameUISceneClient__00ca6ee0::execGetActiveSceneCount(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT_OPTX(ULocalPlayer, MatchingPlayerOwner, NULL);
	P_GET_UBOOL_OPTX(bIgnoreUnfocusedScenes, FALSE);
	P_FINISH;
	*(INT*)Result = GetActiveSceneCount(MatchingPlayerOwner, bIgnoreUnfocusedScenes);
}

/* Kit gaps: the native's exec and GetActiveScene (00de2770) aren't declared (names from the exe's native table). */
struct UGameUISceneClient__00ca6f90 : public UGameUISceneClient
{
	void execGetActiveScene(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca6f90
void UGameUISceneClient__00ca6f90::execGetActiveScene(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT_OPTX(ULocalPlayer, MatchingPlayerOwner, NULL);
	P_GET_UBOOL_OPTX(bIgnoreUnfocusedScenes, FALSE);
	P_FINISH;
	*(class UUIScene**)Result = GetActiveScene(MatchingPlayerOwner, bIgnoreUnfocusedScenes);
}

/* Kit gaps: the native's exec and GetPreviousSceneFromIndex (00de2800) aren't declared (names from the exe's native table). */
struct UGameUISceneClient__00ca7130 : public UGameUISceneClient
{
	void execGetPreviousSceneFromIndex(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca7130
void UGameUISceneClient__00ca7130::execGetPreviousSceneFromIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(StartingSceneIndex);
	P_GET_OBJECT_OPTX(ULocalPlayer, MatchingPlayerOwner, NULL);
	P_GET_UBOOL_OPTX(bIgnoreUnfocusedScenes, FALSE);
	P_FINISH;
	*(class UUIScene**)Result = GetPreviousSceneFromIndex(StartingSceneIndex, MatchingPlayerOwner, bIgnoreUnfocusedScenes);
}

/* Kit gaps: the native's exec and GetNextSceneFromIndex (00de2980) aren't declared (names from the exe's native table). */
struct UGameUISceneClient__00ca73b0 : public UGameUISceneClient
{
	void execGetNextSceneFromIndex(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca73b0
void UGameUISceneClient__00ca73b0::execGetNextSceneFromIndex(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(StartingSceneIndex);
	P_GET_OBJECT_OPTX(ULocalPlayer, MatchingPlayerOwner, NULL);
	P_GET_UBOOL_OPTX(bIgnoreUnfocusedScenes, FALSE);
	P_FINISH;
	*(class UUIScene**)Result = GetNextSceneFromIndex(StartingSceneIndex, MatchingPlayerOwner, bIgnoreUnfocusedScenes);
}

/* Kit gaps: the native's exec and GetPreviousScene (00de5550) aren't declared (names from the exe's native table). */
struct UGameUISceneClient__00ca7040 : public UGameUISceneClient
{
	void execGetPreviousScene(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca7040
void UGameUISceneClient__00ca7040::execGetPreviousScene(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIScene, SourceScene);
	P_GET_UBOOL_OPTX(bRequireMatchingPlayerOwner, TRUE);
	P_GET_UBOOL_OPTX(bIgnoreUnfocusedScenes, FALSE);
	P_FINISH;
	*(class UUIScene**)Result = GetPreviousScene(SourceScene, bRequireMatchingPlayerOwner, bIgnoreUnfocusedScenes);
}

/* Kit gaps: the native's exec and GetNextScene (00de5640) aren't declared (names from the exe's native table). */
struct UGameUISceneClient__00ca72c0 : public UGameUISceneClient
{
	void execGetNextScene(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca72c0
void UGameUISceneClient__00ca72c0::execGetNextScene(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIScene, SourceScene);
	P_GET_UBOOL_OPTX(bRequireMatchingPlayerOwner, TRUE);
	P_GET_UBOOL_OPTX(bIgnoreUnfocusedScenes, FALSE);
	P_FINISH;
	*(class UUIScene**)Result = GetNextScene(SourceScene, bRequireMatchingPlayerOwner, bIgnoreUnfocusedScenes);
}

/* Kit gaps: the native's exec and GetPreviousInputProcessingScene (00de2890) aren't declared (names from the exe's native table). */
struct UGameUISceneClient__00ca7210 : public UGameUISceneClient
{
	void execGetPreviousInputProcessingScene(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca7210
void UGameUISceneClient__00ca7210::execGetPreviousInputProcessingScene(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UUIScene, SourceScene);
	P_GET_UBOOL_OPTX(bIgnoreUnfocusedScenes, TRUE);
	P_FINISH;
	*(class UUIScene**)Result = GetPreviousInputProcessingScene(SourceScene, bIgnoreUnfocusedScenes);
}
