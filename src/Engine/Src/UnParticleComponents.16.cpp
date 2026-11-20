// UnParticleComponents.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x00b5edb0
void UParticleSystemComponent::ReportEventSpawn(FName& InEventName, FLOAT InEmitterTime, FVector& InLocation, FVector& InVelocity)
{
    FParticleEventSpawnData* SpawnData = new(SpawnEvents) FParticleEventSpawnData;
    SpawnData->Type = EPET_Spawn;
    SpawnData->EventName = InEventName;
    SpawnData->EmitterTime = InEmitterTime;
    SpawnData->Location = InLocation;
    SpawnData->Velocity = InVelocity;
}

// @baa 0x00b5ee10
void UParticleSystemComponent::ReportEventDeath(FName& InEventName, FLOAT InEmitterTime, FVector& InLocation, FVector& InVelocity, FLOAT InParticleTime)
{
    FParticleEventDeathData* DeathData = new(DeathEvents) FParticleEventDeathData;
    DeathData->Type = EPET_Death;
    DeathData->EventName = InEventName;
    DeathData->EmitterTime = InEmitterTime;
    DeathData->Location = InLocation;
    DeathData->Velocity = InVelocity;
    DeathData->ParticleTime = InParticleTime;
}

// @baa 0x00b5ee80
void UParticleSystemComponent::ReportEventCollision(FName& InEventName, FLOAT InEmitterTime, FVector& InLocation, FVector& InDirection, FVector& InVelocity,
    FLOAT InParticleTime, FVector& InNormal, FLOAT InTime, INT InItem, FName& InBoneName)
{
    FParticleEventCollideData* CollideData = new(CollisionEvents) FParticleEventCollideData;
    CollideData->Type = EPET_Collision;
    CollideData->EventName = InEventName;
    CollideData->EmitterTime = InEmitterTime;
    CollideData->Location = InLocation;
    CollideData->Direction = InDirection;
    CollideData->Velocity = InVelocity;
    CollideData->ParticleTime = InParticleTime;
    CollideData->Normal = InNormal;
    CollideData->Time = InTime;
    CollideData->Item = InItem;
    CollideData->BoneName = InBoneName;
}

// @baa 0x00b5ef40
void UParticleSystemComponent::ReportEventKismet(FName& InEventName, FLOAT InEmitterTime, FVector& InLocation, FVector& InDirection, FVector& InVelocity,
    UBOOL bUsePSysCompLocation, FVector& InNormal)
{
    FParticleEventKismetData* KismetData = new(KismetEvents) FParticleEventKismetData;
    KismetData->Type = EPET_Kismet;
    KismetData->EventName = InEventName;
    KismetData->EmitterTime = InEmitterTime;
    KismetData->Location = InLocation;
    KismetData->Direction = InDirection;
    KismetData->Velocity = InVelocity;
    KismetData->UsePSysCompLocation = bUsePSysCompLocation;
    KismetData->Normal = InNormal;
}
