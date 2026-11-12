// UnParticleComponents.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW		/* new(Array) T kept out of line, per T */
#define BAA_OUTLINE_ALLOC	/* appRealloc out of line, as in Add */
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x00b58e10
/* Array.h's placement new into a TArray, instantiated out of line for FParticleEventSpawnData (used for UParticleSystemComponent SpawnEvents). */
FParticleEventSpawnData* NewFParticleEventSpawnData(TArray<FParticleEventSpawnData>& Array)
{
	return new(Array) FParticleEventSpawnData;
}

// @baa 0x00b58eb0
/* Array.h's placement new into a TArray, instantiated out of line for FParticleEventDeathData (used for UParticleSystemComponent DeathEvents). */
FParticleEventDeathData* NewFParticleEventDeathData(TArray<FParticleEventDeathData>& Array)
{
	return new(Array) FParticleEventDeathData;
}

// @baa 0x00b58f70
/* Array.h's placement new into a TArray, instantiated out of line for FParticleEventCollideData (used for UParticleSystemComponent CollisionEvents). */
FParticleEventCollideData* NewFParticleEventCollideData(TArray<FParticleEventCollideData>& Array)
{
	return new(Array) FParticleEventCollideData;
}

// @baa 0x00b59010
/* Array.h's placement new into a TArray, instantiated out of line for FParticleEventKismetData (used for UParticleSystemComponent KismetEvents). */
FParticleEventKismetData* NewFParticleEventKismetData(TArray<FParticleEventKismetData>& Array)
{
	return new(Array) FParticleEventKismetData;
}
