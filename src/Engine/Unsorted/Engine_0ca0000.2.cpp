// Engine_0ca0000.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00ca09f0
void UInteraction::execInit( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_10c();
}

struct UUIInputConfiguration_ : public UUIInputConfiguration
{
	void LoadInputAliasClasses();
	void execLoadInputAliasClasses(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca0ec0
void UUIInputConfiguration_::execLoadInputAliasClasses( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	LoadInputAliasClasses();
}

// @baa 0x00ca0ef0
void UUIInputConfiguration::execNotifyGameSessionEnded( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_10c();
}

struct UUIDataProvider_PlayerAchievements_ : public UUIDataProvider_PlayerAchievements
{
	INT GetTotalGamerScore();
	void execGetTotalGamerScore(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca2130
void UUIDataProvider_PlayerAchievements_::execGetTotalGamerScore( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(INT*)Result = GetTotalGamerScore();
}

// @baa 0x00ca21d0
void UUIDataStore::execOnCommit( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_140();
}
