// UnLevAct.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct AWorldInfo_ : public AWorldInfo {
    APhysicsVolume* GetPhysicsVolume(const FVector& Loc, AActor* A, UBOOL bUseTouch); // 007ddb40
};

struct APhysicsVolume_ : public APhysicsVolume {
    void eventActorLeavingVolume(AActor* Other);  // 007d5fd0
    void eventActorEnteredVolume(AActor* Other);  // 007d6030
};

struct AActor_ : public AActor {
    void eventPhysicsVolumeChange(APhysicsVolume* NewVolume); // 007d5dd0
};

// @baa 0x007e2d90
// AActor::SetZone (vtable slot 0x1c8)
void AActor::vf_1c8(INT bTest, INT bForceRefresh)
{
    if (bDeleteMe)
    {
        return;
    }

    // update physics volume
    APhysicsVolume* NewVolume = ((AWorldInfo_*)WorldInfo)->GetPhysicsVolume(Location, this, bCollideActors && !bTest && !bForceRefresh);
    if (!bTest)
    {
        if (NewVolume != PhysicsVolume)
        {
            if (PhysicsVolume)
            {
                ((APhysicsVolume_*)PhysicsVolume)->eventActorLeavingVolume(this);
                ((AActor_*)this)->eventPhysicsVolumeChange(NewVolume);
            }
            PhysicsVolume = NewVolume;
            ((APhysicsVolume_*)PhysicsVolume)->eventActorEnteredVolume(this);
        }
    }
    else
    {
        PhysicsVolume = NewVolume;
    }
}

/* FVector::operator+ (UnMath.h); the kit's FVector has only constructors */
FORCEINLINE FVector operator+(const FVector& A, const FVector& B) { return FVector(A.X + B.X, A.Y + B.Y, A.Z + B.Z); }

struct APhysicsVolume__007e2e10 : public APhysicsVolume {
    void eventPawnLeavingVolume(APawn* Other);   // 007d5f30
    void eventPawnEnteredVolume(APawn* Other);   // 007d5f80
};

struct AController_ : public AController {
    void eventNotifyPhysicsVolumeChange(APhysicsVolume* NewVolume);    // 007d61e0
    UBOOL eventNotifyHeadVolumeChange(APhysicsVolume* NewVolume);      // 007d6170
};

struct APawn_ : public APawn {
    void eventHeadVolumeChange(APhysicsVolume* NewHeadVolume);         // 007d6550
};

// @baa 0x007e2e10
// APawn::SetZone (vtable slot 0x1c8)
void APawn::vf_1c8(INT bTest, INT bForceRefresh)
{
    if (bDeleteMe)
    {
        return;
    }

    // update physics volume
    APhysicsVolume* NewVolume = ((AWorldInfo_*)WorldInfo)->GetPhysicsVolume(Location, this, bCollideActors && !bTest && !bForceRefresh);
    APhysicsVolume* NewHeadVolume = ((AWorldInfo_*)WorldInfo)->GetPhysicsVolume(Location + FVector(0.f, 0.f, BaseEyeHeight), this, bCollideActors && !bTest && !bForceRefresh);
    if (NewVolume != PhysicsVolume)
    {
        if (!bTest)
        {
            if (PhysicsVolume)
            {
                ((APhysicsVolume__007e2e10*)PhysicsVolume)->eventPawnLeavingVolume(this);
                ((AActor_*)this)->eventPhysicsVolumeChange(NewVolume);
            }
            if (Controller)
            {
                ((AController_*)Controller)->eventNotifyPhysicsVolumeChange(NewVolume);
            }
        }
        PhysicsVolume = NewVolume;
        if (!bTest)
        {
            ((APhysicsVolume__007e2e10*)PhysicsVolume)->eventPawnEnteredVolume(this);
        }
    }
    if (NewHeadVolume != HeadVolume)
    {
        if (!bTest && (!Controller || !((AController_*)Controller)->eventNotifyHeadVolumeChange(NewHeadVolume)))
        {
            ((APawn_*)this)->eventHeadVolumeChange(NewHeadVolume);
        }
        HeadVolume = NewHeadVolume;
    }
}
