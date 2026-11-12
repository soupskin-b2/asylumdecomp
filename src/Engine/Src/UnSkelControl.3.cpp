// UnSkelControl.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/AppMath.h"

struct USkelControlLookAt_ : public USkelControlLookAt
{
    void SetLookAtAlpha(FLOAT DesiredAlpha, FLOAT DesiredBlendTime);
};

// @baa 0x0090d060
void USkelControlLookAt_::SetLookAtAlpha(FLOAT DesiredAlpha, FLOAT DesiredBlendTime)
{
    if (LookAtAlphaTarget != DesiredAlpha)
    {
        LookAtAlphaTarget = DesiredAlpha;
        LookAtAlphaBlendTimeToGo = appAbs(DesiredAlpha - LookAtAlpha) * DesiredBlendTime;
    }
}
