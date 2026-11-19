// BmGame_1540000.cpp: 12 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4624;
	/* PlayUICue */

// @baa 0x0154ab90
/* PlayerController.PlayUICue script event: the generated glue, out of line here. */
class UAudioComponent* APlayerController::eventPlayUICue(class USoundCue* Cue)
{
	struct PlayerController_eventPlayUICue_Parms
	{
		class USoundCue* Cue;
		class UAudioComponent* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	Parms.Cue = Cue;
	ProcessEvent(FindFunctionChecked(g_026c4624), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e0f6c;
	/* SpawnEmitter */

// @baa 0x0154ac70
/* EmitterPool.SpawnEmitter script event: the generated glue, out of line here. */
class UParticleSystemComponent* AEmitterPool::eventSpawnEmitter(class UParticleSystem* EmitterTemplate, FVector SpawnLocation, FRotator SpawnRotation, class AActor* AttachToActor)
{
	struct EmitterPool_eventSpawnEmitter_Parms
	{
		class UParticleSystem* EmitterTemplate;
		FVector SpawnLocation;
		FRotator SpawnRotation;
		class AActor* AttachToActor;
		class UParticleSystemComponent* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	Parms.EmitterTemplate = EmitterTemplate;
	Parms.SpawnLocation = SpawnLocation;
	Parms.SpawnRotation = SpawnRotation;
	Parms.AttachToActor = AttachToActor;
	ProcessEvent(FindFunctionChecked(g_026e0f6c), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2e70;
	/* CauseDamageToPawn */

// @baa 0x0154b3c0
/* RElectrifiedFloorPanel.CauseDamageToPawn script event: the generated glue, out of line here. */
void ARElectrifiedFloorPanel::eventCauseDamageToPawn(class ARPawnCharacter* CPawn)
{
	struct RElectrifiedFloorPanel_eventCauseDamageToPawn_Parms
	{
		class ARPawnCharacter* CPawn;
	} Parms;
	Parms.CPawn = CPawn;
	ProcessEvent(FindFunctionChecked(g_026e2e70), &Parms);
}

extern FName g_026e32bc;
	/* TriggerBatmanOnEvent */

// @baa 0x0154b400
/* RElectrifiedFloorPanel.TriggerBatmanOnEvent script event: the generated glue, out of line here. */
void ARElectrifiedFloorPanel::eventTriggerBatmanOnEvent(UBOOL IsOff)
{
	struct RElectrifiedFloorPanel_eventTriggerBatmanOnEvent_Parms
	{
		UBOOL IsOff;
	} Parms;
	Parms.IsOff = IsOff ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026e32bc), &Parms);
}

extern FName g_026e3018;
	/* CreateMaterial */

// @baa 0x0154b470
/* RElectrifiedFloorPanel.CreateMaterial script event: the generated glue, out of line here. */
void ARElectrifiedFloorPanel::eventCreateMaterial(INT Index)
{
	struct RElectrifiedFloorPanel_eventCreateMaterial_Parms
	{
		INT Index;
	} Parms;
	Parms.Index = Index;
	ProcessEvent(FindFunctionChecked(g_026e3018), &Parms);
}

extern FName g_026e3394;
	/* GetHeartBeatType */

// @baa 0x0154c6d0
/* RPawnVillain.GetHeartBeatType script event: the generated glue, out of line here. */
INT ARPawnVillain::eventGetHeartBeatType()
{
	struct RPawnVillain_eventGetHeartBeatType_Parms
	{
		INT ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026e3394), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3164;
	/* MusicSetVariableLinkType */

// @baa 0x0154c7f0
/* RSeqAct_Music.MusicSetVariableLinkType script event: the generated glue, out of line here. */
void URSeqAct_Music::eventMusicSetVariableLinkType(INT I)
{
	struct RSeqAct_Music_eventMusicSetVariableLinkType_Parms
	{
		INT I;
	} Parms;
	Parms.I = I;
	ProcessEvent(FindFunctionChecked(g_026e3164), &Parms);
}

extern FName g_026e31f8;
	/* AmIUnderATunnelGrate */

// @baa 0x0154c930
/* RPlayerController.AmIUnderATunnelGrate script event: the generated glue, out of line here. */
UBOOL ARPlayerController::eventAmIUnderATunnelGrate()
{
	struct RPlayerController_eventAmIUnderATunnelGrate_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e31f8), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2550;
	/* DrawHUDLines */

// @baa 0x0154c9a0
/* RPlayerController.DrawHUDLines script event: the generated glue, out of line here. */
UBOOL ARPlayerController::eventDrawHUDLines()
{
	struct RPlayerController_eventDrawHUDLines_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2550), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3a3c;
// A parameterless UnrealScript event that returns an int: the generated glue, out of line here.

// @baa 0x0154af90
INT UObject::eventScriptCall()
{
    struct ScriptCall_Parms
    {
        INT ReturnValue;
    } Parms;
    Parms.ReturnValue = 0;
    ProcessEvent(FindFunctionChecked(g_026e3a3c), &Parms);
    return Parms.ReturnValue;
}

extern FName g_026c4398;
	/* ENGINE_SetInvestigateHighlighted */

// @baa 0x0154aae0
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor::eventSetInvestigateHighlighted(class UMaterialInstanceConstant* highMat, UBOOL On)
{
	struct Actor_eventSetInvestigateHighlighted_Parms
	{
		class UMaterialInstanceConstant* highMat;
		UBOOL On;
	} Parms;
	Parms.highMat = highMat;
	Parms.On = On ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4398), &Parms);
}

extern FName g_026c4d88;
	/* ENGINE_GetGameTimePlayed */

// @baa 0x0154abf0
/* The script event's generated glue (EngineClasses.h), out of line here. */
FLOAT AGameInfo::eventGetGameTimePlayed()
{
	struct GameInfo_eventGetGameTimePlayed_Parms
	{
		FLOAT ReturnValue;
	} Parms;
	Parms.ReturnValue = 0;
	ProcessEvent(FindFunctionChecked(g_026c4d88), &Parms);
	return Parms.ReturnValue;
}
