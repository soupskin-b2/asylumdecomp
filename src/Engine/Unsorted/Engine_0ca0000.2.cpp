// Engine_0ca0000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00ca09f0
void UInteraction::execInit( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	Init();
}

// @baa 0x00ca0ec0
void UUIInputConfiguration::execLoadInputAliasClasses( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	LoadInputAliasClasses();
}

// @baa 0x00ca0ef0
void UUIInputConfiguration::execNotifyGameSessionEnded( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	NotifyGameSessionEnded();
}

// @baa 0x00ca2130
void UUIDataProvider_PlayerAchievements::execGetTotalGamerScore( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(INT*)Result = GetTotalGamerScore();
}

// @baa 0x00ca21d0
void UUIDataStore::execOnCommit( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	OnCommit();
}

// @baa 0x00ca2330
void UUIDataStore_OnlinePlayerData::execOnSettingProviderChanged(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UUIDataProvider, SourceProvider);
    P_GET_NAME_OPTX(SettingsName, NAME_None);
    P_FINISH;
    this->OnSettingProviderChanged(SourceProvider, SettingsName);
}
