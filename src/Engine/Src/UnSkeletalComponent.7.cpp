// UnSkeletalComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

/* FName::operator== (UnName.h); the kit's FName has no operators. */
/* Native behind execGetTimeOfScriptNotifyInAnimSequence (0x0092d9b0); not in Classes.h. */

// @baa 0x0092d740
FLOAT USkeletalMeshComponent::GetTimeOfScriptNotifyInAnimSequence(UAnimSequence* AnimSeq, FName NotifyName, INT NthOccurrence)
{
    const INT NumNotifies = AnimSeq->Notifies.Num();
    for (INT i = 0; i < NumNotifies; i++)
    {
        if (ObjectIsA(AnimSeq->Notifies(i).Notify, UAnimNotify_Script::StaticClass()) &&
            ((UAnimNotify_Script*)AnimSeq->Notifies(i).Notify)->NotifyName == NotifyName)
        {
            if (--NthOccurrence == 0)
            {
                return AnimSeq->Notifies(i).Time;
            }
        }
    }
    return -1.f;
}

/* USkeletalMeshComponent::TickSkelControls isn't declared in Classes.h */
struct USkeletalMeshComponent__0091cff0 : public USkeletalMeshComponent
{
    void TickSkelControls(FLOAT DeltaSeconds);
};

// @baa 0x0091cff0
/* tick every SkelControl of the AnimTree once per component tick (TickTag guards controls shared between lists) */
void USkeletalMeshComponent__0091cff0::TickSkelControls(FLOAT DeltaSeconds)
{
    UAnimTree* Tree = Cast<UAnimTree>(Animations);
    if (Tree)
    {
        for (INT i = 0; i < Tree->SkelControlLists.Num(); i++)
        {
            USkelControlBase* Control = Tree->SkelControlLists(i).ControlHead;
            while (Control)
            {
                if (Control->ControlTickTag != TickTag)
                {
                    Control->ControlTickTag = TickTag;
                    Control->TickSkelControl(DeltaSeconds, this);
                }
                Control = Control->NextControl;
            }
        }
    }
}
