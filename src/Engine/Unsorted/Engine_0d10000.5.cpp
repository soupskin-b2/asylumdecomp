// Engine_0d10000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* UnObjBas.h CastChecked<T> (a Cast that fails loudly): out of line in this build, so only declared here. */
template<class T> T* CastChecked(UObject* Src);
extern template APlayerController* Cast<APlayerController>(UObject* Src);
/* UE3's inline UObject::GetOuter() and UInterpGroupInst::GetGroupActor() (the kit lacks both). */
inline UObject* GetOuterOf(const UObject* Object) { return Object->Outer; }

inline AActor* GetGroupActorOf(UInterpGroupInst* GrInst)
{
    if (GrInst->GroupActor == NULL || GrInst->GroupActor->bDeleteMe)
    {
        return NULL;
    }
    return GrInst->GroupActor;
}

/* Unnamed in the kit: UE3's UInterpTrackColorScale::GetColorScaleAtTime(FLOAT Time). */
struct UInterpTrackColorScale_ : public UInterpTrackColorScale
{
    FVector sub_00cfc680(FLOAT Time);
};

// @baa 0x00d10790
/* UE3's UInterpTrackColorScale::UpdateTrack: set the player camera's color scale from the curve. */
void UInterpTrackColorScale::UpdateTrack(FLOAT NewPosition, UInterpTrackInst* TrInst, UBOOL bJump)
{
    UInterpGroupInst* GrInst = CastChecked<UInterpGroupInst>(GetOuterOf(TrInst));
    APlayerController* PC = Cast<APlayerController>(GetGroupActorOf(GrInst));
    if (PC && PC->PlayerCamera && !PC->PlayerCamera->bDeleteMe)
    {
        PC->PlayerCamera->bEnableColorScaling = TRUE;
        PC->PlayerCamera->ColorScale = ((UInterpTrackColorScale_*)this)->sub_00cfc680(NewPosition);
        PC->PlayerCamera->bEnableColorScaleInterp = FALSE;
    }
}
