// CommonGame_1510000.cpp: 9 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern char g_026e0bf4;
extern char g_026e0bd8;

// @baa 0x015127e0
void ARDebugMenu::execBreatherBufferToggle(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	((ARDebugMenu*)&g_026e0bf4)->sub_015109e0();
	((ARDebugMenu*)&g_026e0bd8)->sub_015109e0();
}

// @baa 0x01512260
void ARGameInfoBase::execIsInCorrectChapterForLevel(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(LevelPackageName);
	P_FINISH;
	*(UBOOL*)Result = IsInCorrectChapterForLevel(LevelPackageName);
}

// @baa 0x015123e0
void ARGameInfoBase::execIsPhysXLevelToNotLoad(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(LevelPackageName);
	P_FINISH;
	*(UBOOL*)Result = IsPhysXLevelToNotLoad(LevelPackageName);
}

// @baa 0x01512b20
void URFlagManager::execGetPersistentMapName(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FString*)Result = GetPersistentMapName();
}

// @baa 0x01512320
void ARGameInfoBase::execIsPhysXLevel(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(LevelPackageName);
	P_FINISH;
	*(UBOOL*)Result = IsPhysXLevel(LevelPackageName);
}

// @baa 0x015126a0
void ARDebugMenu::execGetVersionInfo(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(FString*)Result = GetVersionInfo();
}

// @baa 0x01512a60
void URFlagManager::execSetGlobalFlags(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(FlagList);
	P_FINISH;
	*(INT*)Result = SetGlobalFlags(FlagList);
}

// @baa 0x01512930
void URBarkFlagBase::execGetValueForType(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(TestType);
	P_GET_INT_OPTX(TestIndex, 0);
	P_FINISH;
	*(FString*)Result = GetValueForType(TestType, TestIndex);
}

// @baa 0x01512730
void ARDebugMenu::execLoadLevel(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(LevelName);
	P_FINISH;
	LoadLevel(LevelName);
}
