// UnInterpolation.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"
#include "ue3/Cast.h"
#include "ue3/Classes.h"

/* UnObjBas.h ConstructObject<T>, out of line in this build (UClass as the project's other callers spell it). */
class FObjectInstancingGraph;

template<class T>
T* ConstructObject(UClass* Class, UObject* Outer, FName Name, QWORD SetFlags, UObject* Template, UObject* SubobjectRoot, FObjectInstancingGraph* InstanceGraph);
/* UnObjBas.h RF_Transactional (64-bit object flags). */
#define RF_Transactional ((QWORD)0x0000000100000000)
/* TArray::AddItem(const T&), which the kit's Array.h lacks; out of line in this build. */
template<class T> struct TArrayAddItem_ : public TArray<T>
{
    INT AddItem(const T& Item);
};

/* Unnamed in the kit: UE3's USeqAct_Interp::AddPlayerToDirectorTracks(APlayerController* PC) (0x00d14240) and the
 * player filter it uses (0x00cf33e0). */

// @baa 0x00d14240
/* Give a newly joined player its own director group instances while the matinee is running. */
void USeqAct_Interp::sub_00d14240(APlayerController* PC)
{
    if (PC != NULL && InterpData != NULL && GroupInst.Num() > 0)
    {
        for (INT i = 0; i < InterpData->InterpGroups.Num(); i++)
        {
            UInterpGroupDirector* DirGroup = Cast<UInterpGroupDirector>(InterpData->InterpGroups(i));
            if (DirGroup != NULL)
            {
                for (INT j = 0; j < GroupInst.Num(); j++)
                {
                    if (GroupInst(j)->Group == DirGroup && GroupInst(j)->GroupActor == PC)
                    {
                        goto NextGroup; /* this player already has an instance of the group */
                    }
                }
                if (this->sub_00cf33e0(PC))
                {
                    UInterpGroupInstDirector* NewGroupInstDir = ConstructObject<UInterpGroupInstDirector>(
                        (UClass*)UInterpGroupInstDirector::StaticClass(), this, NAME_None, RF_Transactional, NULL, NULL, NULL);
                    ((TArrayAddItem_<UInterpGroupInst*>&)GroupInst).AddItem(NewGroupInstDir);
                    NewGroupInstDir->InitGroupInst(DirGroup, PC);
                }
            }
NextGroup:;
        }
    }
}
