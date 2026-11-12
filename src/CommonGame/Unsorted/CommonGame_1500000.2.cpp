// CommonGame_1500000.cpp (part 2 of 3): 40 functions
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
    *(UBOOL*)Result = vf_110((INT)Obj, FlagName.Index, FlagName.Number);
}

// @baa 0x0150b720
void ARPlayerControllerBase::execFlushPressedKeys( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_46c();
}

// @baa 0x0150b760
void ARPlayerControllerBase::execQuickSave( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_470();
}

// @baa 0x0150b7a0
void ARPlayerControllerBase::execToggleMute( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_474();
}

// @baa 0x0150b7e0
void ARPlayerControllerBase::execGPU( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_478();
}

// @baa 0x0150b820
void ARPlayerControllerBase::execToggleGfx( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_47c();
}

// @baa 0x0150b880
void ARHUDBase::execClearWarningsAndErrors( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

// @baa 0x0150b8c0
void ARHUDBase::execDisplayWarningsAndErrors(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(ShowDuplicates);
    P_GET_UBOOL(Outline);
    P_GET_INT(Max);
    P_FINISH;
    vf_358(ShowDuplicates, Outline, Max);
}

// @baa 0x0150bc40
void ARGameInfoBase::execCacheLevelList( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_398();
}

// @baa 0x0150bd30
void ARDebugMenu::execDoDebugMenu( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_354();
}

// @baa 0x0150bd70
void ARDebugMenu::execDoFPSMenu( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_358();
}

// @baa 0x0150bdb0
void ARDebugMenu::execDoSoundMenu( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_35c();
}

// @baa 0x0150bdf0
void ARDebugMenu::execDoProfileAndMemoryMenu( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_360();
}

// @baa 0x0150be30
void ARDebugMenu::execDoRenderingMenu( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_364();
}

// @baa 0x0150be70
void ARDebugMenu::execDoBrightnessMenu( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_368();
}

// @baa 0x0150beb0
void ARDebugMenu::execDoViewModeMenu( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_36c();
}

// @baa 0x0150bef0
void ARDebugMenu::execDoFlagsMenu( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_370();
}

// @baa 0x0150bf30
void ARDebugMenu::execDoFrameRateLimitingSetting( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_374();
}

// @baa 0x0150bf70
void ARDebugMenu::execDoSecuROMMenu( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_378();
}

// @baa 0x0150c0a0
void ARDebugMenu::execStopMusic( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_394();
}

// @baa 0x0150c880
void URFlagManager::execInitialise( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_10c();
}

// @baa 0x0150cce0
void URFlockComponent::execPostBeginPlay( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_14c();
}

// @baa 0x0150cdf0
void ARRainVolumeBase::execShrinkSplashPoints( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_36c();
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
	*(UEngine**)Result = (UEngine*)vf_37c();
}

// @baa 0x0150bc00
void ARGIChallenge::execGetChapterNumber(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(INT*)Result = vf_388();
}

// @baa 0x0150bc80
void ARGameInfoBase::execDebugSoundEmitters(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UBOOL*)Result = vf_3a8();
}

// @baa 0x0150b9a0
void ARHUDBase::execDebugAssetSupport(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Mode);
	P_FINISH;
	vf_35c(Mode);
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
	vf_370(Index);
}

// @baa 0x0150c030
void ARDebugMenu::execGetDecibelValue(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(Value);
	P_FINISH;
	*(INT*)Result = vf_38c(Value);
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
	*(FLOAT*)Result = vf_3b8(Index);
}

// @baa 0x0150bfb0
void ARDebugMenu::execForcePause(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(Pause);
	P_FINISH;
	vf_384(Pause);
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

    *(INT*)Result = vf_384(bFreeGPU);
}

// @baa 0x0150cad0
void URFlagManager::execSetGlobalFlag(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(FlagName);
	P_GET_UBOOL(Value);
	P_FINISH;
	*(UBOOL*)Result = SetGlobalFlag(FlagName, Value);
}
