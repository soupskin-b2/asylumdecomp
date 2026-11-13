// CommonGame_1500000.cpp (part 2 of 3): 42 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0150c8c0
void URFlagManager::execGetObjectFlag(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UObject, Obj);
    P_GET_NAME(FlagName);
    P_FINISH;
    *(UBOOL*)Result = GetObjectFlag(Obj, FlagName);
}

// @baa 0x0150b720
void ARPlayerControllerBase::execFlushPressedKeys( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	FlushPressedKeys();
}

// @baa 0x0150b760
void ARPlayerControllerBase::execQuickSave( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	QuickSave();
}

// @baa 0x0150b7a0
void ARPlayerControllerBase::execToggleMute( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ToggleMute();
}

// @baa 0x0150b7e0
void ARPlayerControllerBase::execGPU( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	GPU();
}

// @baa 0x0150b820
void ARPlayerControllerBase::execToggleGfx( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ToggleGfx();
}

// @baa 0x0150b880
void ARHUDBase::execClearWarningsAndErrors( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ClearWarningsAndErrors();
}

// @baa 0x0150b8c0
void ARHUDBase::execDisplayWarningsAndErrors(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(ShowDuplicates);
    P_GET_UBOOL(Outline);
    P_GET_INT(Max);
    P_FINISH;
    DisplayWarningsAndErrors(ShowDuplicates, Outline, Max);
}

// @baa 0x0150bc40
void ARGameInfoBase::execCacheLevelList( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	CacheLevelList();
}

// @baa 0x0150bd30
void ARDebugMenu::execDoDebugMenu( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DoDebugMenu();
}

// @baa 0x0150bd70
void ARDebugMenu::execDoFPSMenu( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DoFPSMenu();
}

// @baa 0x0150bdb0
void ARDebugMenu::execDoSoundMenu( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DoSoundMenu();
}

// @baa 0x0150bdf0
void ARDebugMenu::execDoProfileAndMemoryMenu( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DoProfileAndMemoryMenu();
}

// @baa 0x0150be30
void ARDebugMenu::execDoRenderingMenu( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DoRenderingMenu();
}

// @baa 0x0150be70
void ARDebugMenu::execDoBrightnessMenu( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DoBrightnessMenu();
}

// @baa 0x0150beb0
void ARDebugMenu::execDoViewModeMenu( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DoViewModeMenu();
}

// @baa 0x0150bef0
void ARDebugMenu::execDoFlagsMenu( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DoFlagsMenu();
}

// @baa 0x0150bf30
void ARDebugMenu::execDoFrameRateLimitingSetting( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DoFrameRateLimitingSetting();
}

// @baa 0x0150bf70
void ARDebugMenu::execDoSecuROMMenu( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	DoSecuROMMenu();
}

// @baa 0x0150c0a0
void ARDebugMenu::execStopMusic( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	StopMusic();
}

// @baa 0x0150c880
void URFlagManager::execInitialise( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	Initialise();
}

// @baa 0x0150cce0
void URFlockComponent::execPostBeginPlay( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	PostBeginPlay();
}

// @baa 0x0150cdf0
void ARRainVolumeBase::execShrinkSplashPoints( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ShrinkSplashPoints();
}

// @baa 0x0150c4d0
void URReachSpec::execAddBlocker(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UObject, NewBlocker);
	P_FINISH;

	AddBlocker(NewBlocker);
}

// @baa 0x0150bac0
void ARGameInfoBase::execGetEngine(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UEngine**)Result = (UEngine*)GetEngine();
}

// @baa 0x0150bc00
void ARGIChallenge::execGetChapterNumber(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = GetChapterNumber();
}

// @baa 0x0150bc80
void ARGameInfoBase::execDebugSoundEmitters(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = DebugSoundEmitters();
}

// @baa 0x0150b9a0
void ARHUDBase::execDebugAssetSupport(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Mode);
	P_FINISH;
	DebugAssetSupport(Mode);
}

// @baa 0x0150c540
void URReachSpec::execRemoveBlocker(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UObject, NewUnblocker);
	P_FINISH;
	RemoveBlocker(NewUnblocker);
}

// @baa 0x0150ce30
void ARRainVolumeBase::execSetSplashPoints(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Index);
	P_FINISH;
	SetSplashPoints(Index);
}

// @baa 0x0150c030
void ARDebugMenu::execGetDecibelValue(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(Value);
	P_FINISH;
	*(INT*)Result = GetDecibelValue(Value);
}

// @baa 0x0150bb00
// @baa 0x0150bb00
void ARGameInfoBase::execActivateRemoteEvent(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(EventName);
    P_FINISH;
    ActivateRemoteEvent(EventName);
}

// @baa 0x0150ca50
// @baa 0x0150ca50
void URFlagManager::execGetGlobalFlag(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(FlagName);
    P_FINISH;
    *(INT*)Result = GetGlobalFlag(FlagName);
}

// @baa 0x0150c1c0
void URBarkFlagBase::execHasTheseFlags(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(URBarkFlagBase, OtherBase);
	P_FINISH;
	*(UBOOL*)Result = HasTheseFlags(OtherBase);
}

// @baa 0x0150c350
void ARPathNode::execIsSafe(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(APawn, TestPawn);
	P_FINISH;
	*(UBOOL*)Result = IsSafe(TestPawn);
}

// @baa 0x0150c430
void ARPathNode::execGetTimeSinceLastSighting(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Index);
	P_FINISH;
	*(FLOAT*)Result = GetTimeSinceLastSighting(Index);
}

// @baa 0x0150bfb0
void ARDebugMenu::execForcePause(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(Pause);
	P_FINISH;
	ForcePause(Pause);
}

// @baa 0x0150cd20
// @baa 0x0150cd20
void URFlockComponent::execTick(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_FINISH;
    Tick(DeltaTime);
}

// @baa 0x0150bb80
void ARGameInfoBase::execGetFreeMB(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL_OPTX(bFreeGPU, 0);
    P_FINISH;

    *(INT*)Result = GetFreeMB(bFreeGPU);
}

// @baa 0x0150cad0
void URFlagManager::execSetGlobalFlag(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(FlagName);
	P_GET_UBOOL(Value);
	P_FINISH;
	*(UBOOL*)Result = SetGlobalFlag(FlagName, Value);
}

// @baa 0x0150ba10
void ARHUDBase::execGetPromptYPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(scr_width);
	P_GET_INT(scr_height);
	P_FINISH;
	*(INT*)Result = GetPromptYPosition(scr_width, scr_height);
}

// @baa 0x0150c3c0
void ARPathNode::execUpdateLastSeenTime(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Index);
	P_FINISH;
	UpdateLastSeenTime(Index);
}
