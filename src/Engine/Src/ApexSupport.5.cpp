// ApexSupport.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c50d4;
	/* SpawnFractureEmitter */
struct AApexDestructibleActor_ : public AApexDestructibleActor
{
	void eventSpawnFractureEmitter(class UParticleSystem* EmitterTemplate, FVector SpawnLocation);
};

// @baa 0x009d4790
/* ApexDestructibleActor.SpawnFractureEmitter script event: the generated glue, out of line here. */
void AApexDestructibleActor_::eventSpawnFractureEmitter(class UParticleSystem* EmitterTemplate, FVector SpawnLocation)
{
	struct ApexDestructibleActor_eventSpawnFractureEmitter_Parms
	{
		class UParticleSystem* EmitterTemplate;
		FVector SpawnLocation;
	} Parms;
	Parms.EmitterTemplate = EmitterTemplate;
	Parms.SpawnLocation = SpawnLocation;
	ProcessEvent(FindFunctionChecked(g_026c50d4), &Parms);
}
