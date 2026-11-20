// Engine_0d10000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* UnObjBas.h CastChecked<T> (a Cast that fails loudly): out of line in this build, so only declared here. */
template<class T> T* CastChecked(UObject* Src);
extern template APlayerController* Cast<APlayerController>(UObject* Src);
// @baa 0x00d10790
/* UE3's UInterpTrackColorScale::UpdateTrack: set the player camera's color scale from the curve. */
void UInterpTrackColorScale::UpdateTrack(FLOAT NewPosition, UInterpTrackInst* TrInst, UBOOL bJump)
{
    UInterpGroupInst* GrInst = CastChecked<UInterpGroupInst>(TrInst->GetOuter());
    APlayerController* PC = Cast<APlayerController>(GrInst->GetGroupActor());
    if (PC && PC->PlayerCamera && !PC->PlayerCamera->bDeleteMe)
    {
        PC->PlayerCamera->bEnableColorScaling = TRUE;
        PC->PlayerCamera->ColorScale = ((UInterpTrackColorScale*)this)->sub_00cfc680(NewPosition);
        PC->PlayerCamera->bEnableColorScaleInterp = FALSE;
    }
}
