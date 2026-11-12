// UnParticleComponents.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* Unnamed in the kit: UE3's UParticleSystemComponent::ReportEventSpawn(FName& InEventName, FLOAT InEmitterTime,
 * FVector& InLocation, FVector& InVelocity) (called by UParticleModuleEventGenerator). */
struct UParticleSystemComponent_ : public UParticleSystemComponent
{
    void sub_00b5edb0(FName& InEventName, FLOAT InEmitterTime, FVector& InLocation, FVector& InVelocity);
};

// @baa 0x00b5edb0
void UParticleSystemComponent_::sub_00b5edb0(FName& InEventName, FLOAT InEmitterTime, FVector& InLocation, FVector& InVelocity)
{
    FParticleEventSpawnData* SpawnData = new(SpawnEvents) FParticleEventSpawnData;
    SpawnData->Type = EPET_Spawn;
    SpawnData->EventName = InEventName;
    SpawnData->EmitterTime = InEmitterTime;
    SpawnData->Location = InLocation;
    SpawnData->Velocity = InVelocity;
}

/* Unnamed in the kit: UE3's UParticleSystemComponent::ReportEventDeath(FName& InEventName, FLOAT InEmitterTime,
 * FVector& InLocation, FVector& InVelocity, FLOAT InParticleTime). */
struct UParticleSystemComponent__00b5ee10 : public UParticleSystemComponent
{
    void sub_00b5ee10(FName& InEventName, FLOAT InEmitterTime, FVector& InLocation, FVector& InVelocity, FLOAT InParticleTime);
};

// @baa 0x00b5ee10
void UParticleSystemComponent__00b5ee10::sub_00b5ee10(FName& InEventName, FLOAT InEmitterTime, FVector& InLocation, FVector& InVelocity, FLOAT InParticleTime)
{
    FParticleEventDeathData* DeathData = new(DeathEvents) FParticleEventDeathData;
    DeathData->Type = EPET_Death;
    DeathData->EventName = InEventName;
    DeathData->EmitterTime = InEmitterTime;
    DeathData->Location = InLocation;
    DeathData->Velocity = InVelocity;
    DeathData->ParticleTime = InParticleTime;
}

/* Unnamed in the kit: UE3's UParticleSystemComponent::ReportEventCollision(FName& InEventName, FLOAT InEmitterTime,
 * FVector& InLocation, FVector& InDirection, FVector& InVelocity, FLOAT InParticleTime, FVector& InNormal,
 * FLOAT InTime, INT InItem, FName& InBoneName). */
struct UParticleSystemComponent__00b5ee80 : public UParticleSystemComponent
{
    void sub_00b5ee80(FName& InEventName, FLOAT InEmitterTime, FVector& InLocation, FVector& InDirection, FVector& InVelocity,
        FLOAT InParticleTime, FVector& InNormal, FLOAT InTime, INT InItem, FName& InBoneName);
};

// @baa 0x00b5ee80
void UParticleSystemComponent__00b5ee80::sub_00b5ee80(FName& InEventName, FLOAT InEmitterTime, FVector& InLocation, FVector& InDirection, FVector& InVelocity,
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

/* Unnamed in the kit: UE3's UParticleSystemComponent::ReportEventKismet(FName& InEventName, FLOAT InEmitterTime,
 * FVector& InLocation, FVector& InDirection, FVector& InVelocity, UBOOL bUsePSysCompLocation, FVector& InNormal). */

// @baa 0x00b5ef40
void UParticleSystemComponent::sub_00b5ef40(FName& InEventName, FLOAT InEmitterTime, FVector& InLocation, FVector& InDirection, FVector& InVelocity,
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
