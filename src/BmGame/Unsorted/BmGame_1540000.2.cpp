// BmGame_1540000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4624;
	/* PlayUICue */
struct APlayerController_ : public APlayerController
{
	class UAudioComponent* eventPlayUICue(class USoundCue* Cue);
};

// @baa 0x0154ab90
/* PlayerController.PlayUICue script event: the generated glue, out of line here. */
class UAudioComponent* APlayerController_::eventPlayUICue(class USoundCue* Cue)
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
struct AEmitterPool_ : public AEmitterPool
{
	class UParticleSystemComponent* eventSpawnEmitter(class UParticleSystem* EmitterTemplate, FVector SpawnLocation, FRotator SpawnRotation, class AActor* AttachToActor);
};

// @baa 0x0154ac70
/* EmitterPool.SpawnEmitter script event: the generated glue, out of line here. */
class UParticleSystemComponent* AEmitterPool_::eventSpawnEmitter(class UParticleSystem* EmitterTemplate, FVector SpawnLocation, FRotator SpawnRotation, class AActor* AttachToActor)
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
