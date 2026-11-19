// UnPawn.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Native.h"
#include "ue3/Cast.h"

extern template APlayerController* Cast<APlayerController>(UObject* Src);
// @baa 0x0087b650
// APawn::GetViewRotation (vtable slot 0x394)
FRotator APawn::GetViewRotation()
{
    if (Controller)
    {
        return Controller->Rotation;
    }
    else if (Role < ROLE_Authority)
    {
        // check if being spectated
        for (INT i = 0; i < GEngine->GamePlayers.Num(); i++)
        {
            if (GEngine->GamePlayers(i) && GEngine->GamePlayers(i)->Actor)
            {
                APlayerController* PC = Cast<APlayerController>(GEngine->GamePlayers(i)->Actor);
                if (PC && PC->ViewTarget == this)
                {
                    return PC->BlendedTargetViewRotation;
                }
            }
        }
    }
    return Rotation;
}

#line 55 "candidate.cpp"
