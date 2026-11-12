// UnActorComponent.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

/* TArray<UActorComponent*>::FindItemByClass (Array.h), out of line per SearchType */
struct FActorComponentArray : public TArray<UActorComponent*> {
    template<class SearchType> UBOOL FindItemByClass(SearchType** Item = NULL, INT* ItemIndex = NULL, INT StartIndex = 0)
    {
        UClass* SearchClass = SearchType::StaticClass();
        for (INT Idx = StartIndex; Idx < ArrayNum; Idx++)
        {
            if ((*this)(Idx) != NULL && ObjectIsA((*this)(Idx), SearchClass))
            {
                if (Item != NULL)
                {
                    *Item = (SearchType*)((*this)(Idx));
                }
                if (ItemIndex != NULL)
                {
                    *ItemIndex = Idx;
                }
                return TRUE;
            }
        }
        return FALSE;
    }
};

// @baa 0x006b72f0
template UBOOL FActorComponentArray::FindItemByClass<UStaticMeshComponent>(UStaticMeshComponent**, INT*, INT);

/* Cast<T> is out of line for this T in the exe (006b0420) */
extern template USkeletalMeshComponent* Cast<USkeletalMeshComponent>(UObject* Src);
/* Kit gap (Array.h, issue #39): forceinline operator() stand-in */
template<class T> class TArrayFI
{
public:
    FHeapAllocation AllocatorInstance;
    INT ArrayNum;
    INT ArrayMax;

    INT Num() const { return ArrayNum; }
    __forceinline T& operator()(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return ((T*)AllocatorInstance.GetAllocation())[i];
    }
};

// @baa 0x00765b90
/* UActorComponent::DetachFromAny helper (name not in the exe: a file-static in UnActorComponent.cpp).
 * Detaches Component from SkelComp, or recursively from any skeletal mesh attached to it.
 * Returns TRUE once the component is no longer attached. */
UBOOL DetachComponentFromSkelComp(UActorComponent* Component, USkeletalMeshComponent* SkelComp)
{
    SkelComp->sub_0093fde0(Component); // DetachComponent
    if (!Component->bAttached)
    {
        return TRUE;
    }

    for (INT i = 0; i < SkelComp->Attachments.Num(); i++)
    {
        USkeletalMeshComponent* AttachedSkelComp = Cast<USkeletalMeshComponent>(((TArrayFI<FAttachment>&)SkelComp->Attachments)(i).Component);
        if (AttachedSkelComp && DetachComponentFromSkelComp(Component, AttachedSkelComp))
        {
            return TRUE;
        }
    }

    return FALSE;
}

#line 79 "candidate.cpp"
