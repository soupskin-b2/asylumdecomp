// UnSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/AppMath.h"

/* FVector's subtraction and Size() (UnMath.h); the kit's FVector has neither. */
struct FVector_ : public FVector
{
    FVector_(FLOAT InX, FLOAT InY, FLOAT InZ) { X = InX; Y = InY; Z = InZ; }
    FVector_ operator-(const FVector& V) const { return FVector_(X - V.X, Y - V.Y, Z - V.Z); }
    FLOAT Size() const { return appSqrt(X * X + Y * Y + Z * Z); }
};

/* slot 0x198 (vf_198) is USequenceEvent::CheckActivate */
struct USeqEvent_AISeeEnemy_ : public USeqEvent_AISeeEnemy
{
    UBOOL CheckActivate(AActor* InOriginator, AActor* InInstigator, UBOOL bTest, TArray<INT>* ActivateIndices, UBOOL bPushTop);
};

// @baa 0x008e83a0
UBOOL USeqEvent_AISeeEnemy_::CheckActivate(AActor* InOriginator, AActor* InInstigator, UBOOL bTest, TArray<INT>* ActivateIndices, UBOOL bPushTop)
{
    // only activate if the enemy is within sight distance (when one is set)
    if (InOriginator != NULL && InInstigator != NULL &&
        (MaxSightDistance <= 0.f ||
         (((const FVector_&)InOriginator->Location) - InInstigator->Location).Size() <= MaxSightDistance))
    {
        return sub_008abba0(InOriginator, InInstigator, bTest, ActivateIndices, bPushTop); // Super::CheckActivate
    }
    return FALSE;
}
