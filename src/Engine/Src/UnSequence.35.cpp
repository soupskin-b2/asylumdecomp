// UnSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"
#include "ue3/Cast.h"
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* UnMath.h */
#define SMALL_NUMBER (1.e-8f)
/* Unnamed in the kit (0x008c09f0): force (or stop forcing) the materials' mips resident for Duration, here and on
 * every remote player. */
struct USeqAct_ForceMaterialMipsResident_ : public USeqAct_ForceMaterialMipsResident
{
    void sub_008c09f0(UBOOL bEnable, FLOAT Duration);
};

// @baa 0x008cd200
/* UE3's USeqAct_ForceMaterialMipsResident::UpdateOp(FLOAT DeltaTime): done when the time runs out, or early (stopping
 * the forcing) when the second input fires. */
UBOOL USeqAct_ForceMaterialMipsResident::UpdateOp(FLOAT DeltaTime)
{
    RemainingTime -= DeltaTime;
    if (RemainingTime <= 0.f)
    {
        return TRUE;
    }
    if (InputLinks.Num() > 1 && InputLinks(1).bHasImpulse)
    {
        ((USeqAct_ForceMaterialMipsResident_*)this)->sub_008c09f0(FALSE, 0.f);
        return TRUE;
    }
    return FALSE;
}
