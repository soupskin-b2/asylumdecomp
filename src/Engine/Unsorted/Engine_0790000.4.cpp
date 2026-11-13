// Engine_0790000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c3ea0;
	/* ENGINE_HandleSeamlessTravelPlayer */
struct AGameInfo_ : public AGameInfo
{
	void eventHandleSeamlessTravelPlayer(class AController*& C);
};

// @baa 0x0079f6d0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AGameInfo_::eventHandleSeamlessTravelPlayer(class AController*& C)
{
	struct GameInfo_eventHandleSeamlessTravelPlayer_Parms
	{
		class AController* C;
	} Parms;
	Parms.C = C;
	ProcessEvent(FindFunctionChecked(g_026c3ea0), &Parms);
	C = Parms.C;
}

extern FName g_026c4700;
	/* ENGINE_EnemyNotVisible */
/* EName entries Core.h doesn't list yet (UnNames.h) */
struct AController_ : public AController
{
	void eventEnemyNotVisible();
};

// @baa 0x0079f410
/* The script event's generated glue (EngineClasses.h), out of line here. EnemyNotVisible is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AController_::eventEnemyNotVisible()
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_EnemyNotVisible - NAME_PROBEMIN))))
	{
		ProcessEvent(FindFunctionChecked(g_026c4700), NULL);
	}
}

extern FName g_026c55b4;
	/* ENGINE_HearNoise */
/* EName entries Core.h doesn't list yet (UnNames.h) */
struct AController__0079f520 : public AController
{
	void eventHearNoise(FLOAT Loudness, class AActor* NoiseMaker, FName NoiseType);
};

// @baa 0x0079f520
/* The script event's generated glue (EngineClasses.h), out of line here. HearNoise is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AController__0079f520::eventHearNoise(FLOAT Loudness, class AActor* NoiseMaker, FName NoiseType)
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_HearNoise - NAME_PROBEMIN))))
	{
		struct Controller_eventHearNoise_Parms
		{
			FLOAT Loudness;
			class AActor* NoiseMaker;
			FName NoiseType;
		} Parms;
		Parms.Loudness = Loudness;
		Parms.NoiseMaker = NoiseMaker;
		Parms.NoiseType = NoiseType;
		ProcessEvent(FindFunctionChecked(g_026c55b4), &Parms);
	}
}
