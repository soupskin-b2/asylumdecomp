// UnLevAct.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x007e2d90
void AActor::SetZone(UBOOL bTest, UBOOL bForceRefresh)
{
    if (bDeleteMe)
    {
        return;
    }

    // update physics volume
    APhysicsVolume* NewVolume = WorldInfo->GetPhysicsVolume(Location, this, bCollideActors && !bTest && !bForceRefresh);
    if (!bTest)
    {
        if (NewVolume != PhysicsVolume)
        {
            if (PhysicsVolume)
            {
                PhysicsVolume->eventActorLeavingVolume(this);
                this->eventPhysicsVolumeChange(NewVolume);
            }
            PhysicsVolume = NewVolume;
            PhysicsVolume->eventActorEnteredVolume(this);
        }
    }
    else
    {
        PhysicsVolume = NewVolume;
    }
}

// @baa 0x007e2e10
// APawn::SetZone (vtable slot 0x1c8)
void APawn::SetZone(UBOOL bTest, UBOOL bForceRefresh)
{
    if (bDeleteMe)
    {
        return;
    }

    // update physics volume
    APhysicsVolume* NewVolume = WorldInfo->GetPhysicsVolume(Location, this, bCollideActors && !bTest && !bForceRefresh);
    APhysicsVolume* NewHeadVolume = WorldInfo->GetPhysicsVolume(Location + FVector(0.f, 0.f, BaseEyeHeight), this, bCollideActors && !bTest && !bForceRefresh);
    if (NewVolume != PhysicsVolume)
    {
        if (!bTest)
        {
            if (PhysicsVolume)
            {
                PhysicsVolume->eventPawnLeavingVolume(this);
                this->eventPhysicsVolumeChange(NewVolume);
            }
            if (Controller)
            {
                Controller->eventNotifyPhysicsVolumeChange(NewVolume);
            }
        }
        PhysicsVolume = NewVolume;
        if (!bTest)
        {
            PhysicsVolume->eventPawnEnteredVolume(this);
        }
    }
    if (NewHeadVolume != HeadVolume)
    {
        if (!bTest && (!Controller || !Controller->eventNotifyHeadVolumeChange(NewHeadVolume)))
        {
            this->eventHeadVolumeChange(NewHeadVolume);
        }
        HeadVolume = NewHeadVolume;
    }
}

struct AActor__0076cc90 : public AActor {
    void sub_0076cc90();                                    // UnTouchActors
};

// @baa 0x0076cc90
void AActor__0076cc90::sub_0076cc90()
{
    for (INT i = 0; i < Touching.Num(); )
    {
        if (Touching(i) && !sub_00763730(Touching(i), 0, 0, 0)) // IsOverlapping(Other, NULL, NULL, NULL)
        {
            sub_007691a0(Touching(i), 0); // EndTouch
        }
        else
        {
            i++;
        }
    }
}

// @baa 0x006b6a10
/* TArray<UActorComponent*>::FindItemIndex, out of line (used by GWorld->SpawnActor on Components) */
template INT TArray<UActorComponent*>::FindItemIndex(UActorComponent* const& Item) const;
