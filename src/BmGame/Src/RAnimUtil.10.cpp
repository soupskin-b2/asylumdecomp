// RAnimUtil.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"
#include "ue3/AppMath.h"

template ARPawnCharacter* Cast<ARPawnCharacter>(UObject* Src);

 /* 0x0155df00 */
template AController* Cast<AController>(UObject* Src);

 /* 0x008aeb80 */
struct FAnimTarget_ : FAnimTarget
{
    FVector sub_0159dce0(USkeletalMeshComponent* Component, const FVector& Reference) const; /* 0x0159dce0 */
};

// @baa 0x0159dce0
FVector FAnimTarget_::sub_0159dce0(USkeletalMeshComponent* Component, const FVector& Reference) const
{
    if (!IsActive)
    {
        return Reference;
    }
    AActor* TargetActor = Actor;
    if (TargetActor)
    {
        ARPawnCharacter* Character = Cast<ARPawnCharacter>(TargetActor);
        if (!Character)
        {
            AController* Controller = Cast<AController>(TargetActor);
            Character = Controller ? Cast<ARPawnCharacter>(Controller->Pawn) : NULL;
        }
        if (ActorBoneName != NAME_None)
        {
            if (Character && Character->Mesh)
            {
                return Character->Mesh->GetBoneLocation(ActorBoneName, 0);
            }
        }
        else
        {
            if (Character && Character->Anim)
            {
                return Character->Anim->PosePlayer.LookAtRequest.Reference;
            }
            return Actor->Location;
        }
    }
    else if (PositionSpace == 1)
    {
        FVector Direction = Position;
        if (Direction.Size() > 0.0001)
        {
            Direction.Normalize();
            return Reference + Direction * 100.0f;
        }
    }
    else if (PositionSpace == 0)
    {
        return Position;
    }
    else
    {
        return FVector(9999999.0f);
    }
    return Reference;
}
