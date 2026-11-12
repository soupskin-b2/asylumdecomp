// UnSequence.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

// @baa 0x008febf0
/* the out-of-line Cast<USequence> instantiation */
template USequence* Cast<USequence>(UObject* Src);

/* USkeletalMeshComponent::SetEnableClothSimulation (0x0090eac0; declared as sub_0090eac0 in Classes.h) */
/* slot 0x174 (vf_174) is USequenceOp::Activated */
struct USeqAct_SetClothParam_ : public USeqAct_SetClothParam
{
    void Activated();
};

// @baa 0x008c0e70
void USeqAct_SetClothParam_::Activated()
{
    for (INT TargetIdx = 0; TargetIdx < Targets.Num(); TargetIdx++)
    {
        ASkeletalMeshActor* SkeletalMeshActor = Cast<ASkeletalMeshActor>(Targets(TargetIdx));
        if (SkeletalMeshActor == NULL)
        {
#line 11082 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp"
            check(SkeletalMeshActor);
            continue;
        }
        USkeletalMeshComponent* Component = SkeletalMeshActor->SkeletalMeshComponent;
        if (Component == NULL)
        {
#line 11086 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSequence.cpp"
            check(Component);
            continue;
        }
        Component->sub_0090eac0(bEnableClothSimulation); // SetEnableClothSimulation
    }
}

#line 43 "candidate.cpp"
