// CommonGame_1530000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e0f08;
	/* COMMONGAME_SpawnDecal */
struct URParticleModuleSpawnDecalOnDeath_ : public URParticleModuleSpawnDecalOnDeath
{
	class UDecalComponent* eventSpawnDecal(class AActor* Owner, FVector Position, FRotator Direction);
};

// @baa 0x0153b770
/* The script event's generated glue (CommonGameClasses.h), out of line here. */
class UDecalComponent* URParticleModuleSpawnDecalOnDeath_::eventSpawnDecal(class AActor* Owner, FVector Position, FRotator Direction)
{
	struct RParticleModuleSpawnDecalOnDeath_eventSpawnDecal_Parms
	{
		class AActor* Owner;
		FVector Position;
		FRotator Direction;
		class UDecalComponent* ReturnValue;
	} Parms;
	Parms.Owner = Owner;
	Parms.Position = Position;
	Parms.Direction = Direction;
	Parms.ReturnValue = NULL;
	ProcessEvent(FindFunctionChecked(g_026e0f08), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e0f20;
	/* COMMONGAME_SpawnParticles */
struct URParticleModuleSpawnOnDeath_ : public URParticleModuleSpawnOnDeath
{
	void eventSpawnParticles(class AActor* OwningActor, FVector Position);
};

// @baa 0x0153b810
/* The script event's generated glue (CommonGameClasses.h), out of line here. */
void URParticleModuleSpawnOnDeath_::eventSpawnParticles(class AActor* OwningActor, FVector Position)
{
	struct RParticleModuleSpawnOnDeath_eventSpawnParticles_Parms
	{
		class AActor* OwningActor;
		FVector Position;
	} Parms;
	Parms.OwningActor = OwningActor;
	Parms.Position = Position;
	ProcessEvent(FindFunctionChecked(g_026e0f20), &Parms);
}
