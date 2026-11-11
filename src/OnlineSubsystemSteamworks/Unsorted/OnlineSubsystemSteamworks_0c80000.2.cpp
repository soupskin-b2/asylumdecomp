// OnlineSubsystemSteamworks_0c80000.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c89310
void AGameInfo::execDoSentinelActionPerLoadedMap( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_364();
}

// @baa 0x00c89350
void AGameInfo::execHandlePerLoadedMapAudioStats( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_368();
}

struct AWorldInfo_ : public AWorldInfo
{
	UBOOL IsDemoBuild();
	void execIsDemoBuild(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c89ac0
void AWorldInfo_::execIsDemoBuild( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsDemoBuild();
}

struct AWorldInfo__00c89b70 : public AWorldInfo
{
	UBOOL IsShippingBuild();
	void execIsShippingBuild(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c89b70
void AWorldInfo__00c89b70::execIsShippingBuild( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsShippingBuild();
}

struct AWorldInfo__00c89bb0 : public AWorldInfo
{
	UBOOL IsPlayInEditor();
	void execIsPlayInEditor(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c89bb0
void AWorldInfo__00c89bb0::execIsPlayInEditor( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsPlayInEditor();
}

struct AWorldInfo__00c89c70 : public AWorldInfo
{
	void VerifyNavList();
	void execVerifyNavList(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c89c70
void AWorldInfo__00c89c70::execVerifyNavList( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	VerifyNavList();
}

struct AWorldInfo__00c89da0 : public AWorldInfo
{
	UBOOL IsPreparingMapChange();
	void execIsPreparingMapChange(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c89da0
void AWorldInfo__00c89da0::execIsPreparingMapChange( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsPreparingMapChange();
}

struct AWorldInfo__00c89a10 : public AWorldInfo
{
	USequence* sub_008a7800();
};

// @baa 0x00c89a10
void AWorldInfo::execGetGameSequence(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(USequence**)Result = ((AWorldInfo__00c89a10*)this)->sub_008a7800();
}
