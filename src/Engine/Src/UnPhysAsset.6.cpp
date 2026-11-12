// UnPhysAsset.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* FName::operator== (UnName.h) */
// @baa 0x00a09910
INT UPhysicsAsset::FindConstraintIndex(FName ConstraintName)
{
#line 402 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAsset.cpp"
    check(ConstraintSetup.Num() == DefaultInstance->Constraints.Num());

    for (INT i = 0; i < ConstraintSetup.Num(); i++)
    {
        if (ConstraintSetup(i)->JointName == ConstraintName)
        {
            return i;
        }
    }

    return INDEX_NONE;
}

#line 31 "candidate.cpp"

struct UPhysicsAsset__00a20750 : public UPhysicsAsset {
    void UpdateBodyIndices();       // 00a20750
};

// @baa 0x00a20750
void UPhysicsAsset__00a20750::UpdateBodyIndices()
{
    for (INT i = 0; i < DefaultInstance->Bodies.Num(); i++)
    {
        DefaultInstance->Bodies(i)->BodyIndex = i;
    }

    UpdateBoundsBodiesArray();
}
