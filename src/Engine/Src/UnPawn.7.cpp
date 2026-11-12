// UnPawn.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Native.h"
#include "ue3/Cast.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

extern template APlayerController* Cast<APlayerController>(UObject* Src);
// @baa 0x0087b650
// APawn::GetViewRotation (vtable slot 0x394)
FRotator APawn::vf_394()
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
            if (((TArrayAt_<ULocalPlayer*>&)GEngine->GamePlayers).At(i) && ((TArrayAt_<ULocalPlayer*>&)GEngine->GamePlayers).At(i)->Actor)
            {
                APlayerController* PC = Cast<APlayerController>(((TArrayAt_<ULocalPlayer*>&)GEngine->GamePlayers).At(i)->Actor);
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
