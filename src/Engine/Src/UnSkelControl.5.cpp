// UnSkelControl.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x00912e20
/* blend the control's strength to NewStrength over InBlendTime seconds */
void USkelControlBase::SetSkelControlStrength(FLOAT NewStrength, FLOAT InBlendTime)
{
    NewStrength = Clamp<FLOAT>(NewStrength, 0.f, 1.f);
    InBlendTime = Max<FLOAT>(InBlendTime, 0.f);

    if (StrengthTarget != NewStrength || BlendTimeToGo > InBlendTime)
    {
        StrengthTarget = NewStrength;
        BlendTimeToGo = InBlendTime;

        // a zero blend time applies the new strength right away
        if (BlendTimeToGo <= 0.f)
        {
            ControlStrength = StrengthTarget;
            BlendTimeToGo = 0.f;
        }
    }
}

#define KINDA_SMALL_NUMBER (1.e-4)
/* slot 0x120 (vf_120) is USkelControlBase::TickSkelControl(FLOAT DeltaSeconds, USkeletalMeshComponent* SkelComp);
 * the base version is at 0x009225f0. */
struct USkelControlLookAt_ : public USkelControlLookAt
{
    void TickSkelControl(FLOAT DeltaSeconds, USkeletalMeshComponent* SkelComp);
};

// @baa 0x00923c70
void USkelControlLookAt_::TickSkelControl(FLOAT DeltaSeconds, USkeletalMeshComponent* SkelComp)
{
    USkelControlBase::TickSkelControl(DeltaSeconds, SkelComp);

    // blend LookAtAlpha towards its target, snapping when the time runs out or it's close enough
    const FLOAT BlendDelta = LookAtAlphaTarget - LookAtAlpha;
    if ((LookAtAlphaBlendTimeToGo > KINDA_SMALL_NUMBER || appAbs(BlendDelta) > KINDA_SMALL_NUMBER) &&
        !(DeltaSeconds >= LookAtAlphaBlendTimeToGo) && !(appAbs(BlendDelta) <= KINDA_SMALL_NUMBER))
    {
        LookAtAlpha += BlendDelta / LookAtAlphaBlendTimeToGo * DeltaSeconds;
        LookAtAlphaBlendTimeToGo -= DeltaSeconds;
    }
    else
    {
        LookAtAlphaBlendTimeToGo = 0.f;
        LookAtAlpha = LookAtAlphaTarget;
    }
}
