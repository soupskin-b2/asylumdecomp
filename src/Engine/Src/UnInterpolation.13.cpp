// UnInterpolation.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

struct UInterpTrackInstMove_ : public UInterpTrackInstMove {
    void CalcInitialTransform(UInterpTrack* Track, UBOOL bSoft); // 00d1ba30
};

struct USeqAct_Interp_ : public USeqAct_Interp {
    void sub_00d1d2d0(); // RecaptureActorTransforms
};

// @baa 0x00d1d2d0
void USeqAct_Interp_::sub_00d1d2d0()
{
    if (InterpData)
    {
        for (INT i = 0; i < GroupInst.Num(); i++)
        {
            UInterpGroupInst* GrInst = GroupInst(i);
#line 1539 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp"
            check(GrInst->Group);
            check(GrInst->Group->InterpTracks.Num() == GrInst->TrackInst.Num());

            for (INT j = 0; j < GrInst->TrackInst.Num(); j++)
            {
                UInterpTrackInstMove_* MoveInst = (UInterpTrackInstMove_*)Cast<UInterpTrackInstMove>(GrInst->TrackInst(j));
                if (MoveInst)
                {
                    MoveInst->CalcInitialTransform(GrInst->Group->InterpTracks(j), TRUE);
                }
            }
        }
    }
}

#line 41 "candidate.cpp"
