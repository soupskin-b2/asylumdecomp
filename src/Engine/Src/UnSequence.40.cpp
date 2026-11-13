// UnSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// The editor isn't compiled into this build (UE3's Core.h defines it away).
#ifndef GIsEditor
#define GIsEditor FALSE
#endif
// The game keeps this instantiation's destructor out of line (0x00665ce0).
extern template TArray<INT*>::~TArray();
/* Kit gap: USequenceOp::GetIntVars (UnSequence.cpp) isn't declared. */
struct USequenceOp_ : public USequenceOp
{
    void GetIntVars(TArray<INT*>& outInts, const TCHAR* inDesc = NULL); /* 0x008d6a00 */
};

// @baa 0x008e39e0
UBOOL USeqAct_DelaySwitch::UpdateOp(FLOAT DeltaTime)
{
    if (NextLinkTime <= 0.f)
    {
        if (CurrentIdx < OutputLinks.Num() &&
            !OutputLinks(CurrentIdx).bDisabled &&
            !(OutputLinks(CurrentIdx).bDisabledPIE && GIsEditor))
        {
            // activate the current link
            OutputLinks(CurrentIdx).bHasImpulse = TRUE;

            // and tell any attached variables which one it was
            TArray<INT*> LinkVars;
            ((USequenceOp_*)this)->GetIntVars(LinkVars, TEXT("Active Link"));
            for (INT Idx = 0; Idx < LinkVars.Num(); Idx++)
            {
                *(LinkVars(Idx)) = CurrentIdx + 1;
            }
            CurrentIdx++;
        }
        NextLinkTime = SwitchDelay;
    }
    else
    {
        NextLinkTime -= DeltaTime;
    }
    // done once every link has fired
    return (CurrentIdx >= OutputLinks.Num());
}
