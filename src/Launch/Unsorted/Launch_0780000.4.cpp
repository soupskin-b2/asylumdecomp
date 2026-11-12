// Launch_0780000.cpp (part 4 of 4): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct T_0078fb90;
// @baa 0x0078fb90
template INT TArray<T_0078fb90*>::RemoveItem(T_0078fb90* const&);

// @baa 0x0078f1f0
/* An animated camera runs the base camera modifiers, then its native ones. */
void AAnimatedCamera::ApplyCameraModifiers(FLOAT DeltaTime, FTPOV& OutPOV)
{
    Super::ApplyCameraModifiers(DeltaTime, OutPOV);
    ApplyCameraModifiersNative(DeltaTime, OutPOV);
}

/* Kit gap: UCameraAnimInst::Stop (UnCamera.cpp; inlined here) isn't declared. */
struct UCameraAnimInst_ : public UCameraAnimInst
{
    FORCEINLINE void Stop(UBOOL bImmediate)
    {
        if (bImmediate || BlendOutTime <= 0.f)
        {
            if (InterpGroupInst->Group != NULL)
            {
                InterpGroupInst->TermGroupInst(TRUE);
            }
            bFinished = TRUE;
            MoveTrack = NULL;
            MoveInst = NULL;
            SourceAnimNode = NULL;
        }
        else
        {
            bBlendingOut = TRUE;
            CurBlendOutTime = 0.f;
        }
    }
};

// @baa 0x0078f050
/* Stops every active instance of Anim (blending out unless bImmediate). */
void AAnimatedCamera::StopAllCameraAnimsByType(UCameraAnim* Anim, UBOOL bImmediate)
{
    for (INT i = 0; i < ActiveAnims.Num(); i++)
    {
        if (ActiveAnims(i)->CamAnim == Anim)
        {
            ((UCameraAnimInst_*)ActiveAnims(i))->Stop(bImmediate);
        }
    }
}
