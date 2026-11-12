// RAnimNotify_SpawnParticleFX.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e29f8;
	/* SpawnParticleSystem */
struct URAnimNotify_SpawnParticleFX_ : public URAnimNotify_SpawnParticleFX
{
	void eventSpawnParticleSystem(class AActor* Owner, FVector SpawnLocation, FRotator SpawnRotation, class USkeletalMeshComponent* Skeleton);
};

// @baa 0x015922c0
/* RAnimNotify_SpawnParticleFX.SpawnParticleSystem script event: the generated glue, out of line here. */
void URAnimNotify_SpawnParticleFX_::eventSpawnParticleSystem(class AActor* Owner, FVector SpawnLocation, FRotator SpawnRotation, class USkeletalMeshComponent* Skeleton)
{
	struct RAnimNotify_SpawnParticleFX_eventSpawnParticleSystem_Parms
	{
		class AActor* Owner;
		FVector SpawnLocation;
		FRotator SpawnRotation;
		class USkeletalMeshComponent* Skeleton;
	} Parms;
	Parms.Owner = Owner;
	Parms.SpawnLocation = SpawnLocation;
	Parms.SpawnRotation = SpawnRotation;
	Parms.Skeleton = Skeleton;
	ProcessEvent(FindFunctionChecked(g_026e29f8), &Parms);
}
