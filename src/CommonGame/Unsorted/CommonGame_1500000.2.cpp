// CommonGame_1500000.cpp (part 2 of 3): 23 functions
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
