// UnSkeletalComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

/* FName::operator== (UnName.h); the kit's FName has no operators. */
inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

/* Native behind execGetTimeOfScriptNotifyInAnimSequence (0x0092d9b0); not in Classes.h. */
struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
    FLOAT GetTimeOfScriptNotifyInAnimSequence(UAnimSequence* AnimSeq, FName NotifyName, INT NthOccurrence);
};

// @baa 0x0092d740
FLOAT USkeletalMeshComponent_::GetTimeOfScriptNotifyInAnimSequence(UAnimSequence* AnimSeq, FName NotifyName, INT NthOccurrence)
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
