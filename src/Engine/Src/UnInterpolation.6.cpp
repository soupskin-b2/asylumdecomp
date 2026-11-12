// UnInterpolation.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* Unnamed in the kit: the director group of this action's InterpData (UInterpData::FindDirectorGroup inlined, first
 * match). */
struct USeqAct_Interp_ : public USeqAct_Interp
{
    UInterpGroupDirector* sub_00d141c0();
};

// @baa 0x00d141c0
UInterpGroupDirector* USeqAct_Interp_::sub_00d141c0()
{
    if (InterpData != NULL)
    {
        for (INT i = 0; i < InterpData->InterpGroups.Num(); i++)
        {
            UInterpGroup* Group = InterpData->InterpGroups(i);
            UInterpGroupDirector* DirGroup = Cast<UInterpGroupDirector>(Group);
            if (DirGroup != NULL)
            {
                return DirGroup;
            }
        }
    }
    return NULL;
}

/* UnObjBas.h CastChecked<T> (a Cast that fails loudly): out of line in this build, so only declared here. */
template<class T> T* CastChecked(UObject* Src);
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

/* Unnamed in the kit: UE3's AActor::eventGetActorFXAsset() (script event glue). */

// @baa 0x00d1c8c0
/* UE3's UInterpTrackInstFaceFX::InitTrackInst(UInterpTrack* Track): mount the track's anim sets on the actor's FaceFX
 * asset and start from the sequence's current position. */
void UInterpTrackInstFaceFX::InitTrackInst(UInterpTrack* Track)
{
    UInterpGroupInst* GrInst = CastChecked<UInterpGroupInst>(GetOuterOf(this));
    USeqAct_Interp* Seq = CastChecked<USeqAct_Interp>(GetOuterOf(GrInst));
    UInterpTrackFaceFX* FaceFXTrack = CastChecked<UInterpTrackFaceFX>(Track);
    AActor* Actor = GetGroupActorOf(CastChecked<UInterpGroupInst>(GetOuterOf(this)));
    if (Actor != NULL)
    {
        UFaceFXAsset* Asset = Actor->sub_00ce8550();
        if (Asset != NULL)
        {
            for (INT i = 0; i < FaceFXTrack->FaceFXAnimSets.Num(); i++)
            {
                UFaceFXAnimSet* Set = FaceFXTrack->FaceFXAnimSets(i);
                if (Set != NULL)
                {
                    Asset->sub_00bf70e0(Set);
                }
            }
        }
    }
    LastUpdatePosition = Seq->Position;
    bFirstUpdate = TRUE;
}
