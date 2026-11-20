// Engine_0830000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

template<typename T> struct TArrayAddItemInline_ : public TArray<T>
{
    FORCEINLINE INT AddItem(const T& Item)
    {
        const INT Index = this->Add(1);
        new(this->GetTypedData() + Index) T(Item);
        return Index;
    }
};

// @baa 0x0083e980
/* Hands out the cross-level path and volume references that need fixing up (resolved ones when the level goes
 * away, unresolved ones otherwise). */
void ANavigationPoint::GetActorReferences(TArray<FActorReference*>& ActorRefs, UBOOL bIsRemovingLevel)
{
    Super::GetActorReferences(ActorRefs, bIsRemovingLevel);
    if (bHasCrossLevelPaths)
    {
        for (INT PathIdx = 0; PathIdx < PathList.Num(); PathIdx++)
        {
            UReachSpec* Spec = PathList(PathIdx);
            if (Spec->End.Guid.IsValid())
            {
                if ((bIsRemovingLevel && Spec->End.Actor != NULL) || (!bIsRemovingLevel && Spec->End.Actor == NULL))
                {
                    ActorRefs.AddItem(&Spec->End);
                }
            }
        }
        for (INT VolumeIdx = 0; VolumeIdx < Volumes.Num(); VolumeIdx++)
        {
            FActorReference& ActorRef = Volumes(VolumeIdx);
            if (ActorRef.Guid.IsValid())
            {
                if ((bIsRemovingLevel && ActorRef.Actor != NULL) || (!bIsRemovingLevel && ActorRef.Actor == NULL))
                {
                    ((TArrayAddItemInline_<FActorReference*>&)ActorRefs).AddItem(&ActorRef);
                }
            }
        }
    }
}
