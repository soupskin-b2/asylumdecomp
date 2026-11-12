// UnSequence.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* FVisiblePortalInfo::operator== (PlayerController.uc cpptext); the kit's struct has none. */
inline UBOOL operator==(const FVisiblePortalInfo& A, const FVisiblePortalInfo& B)
{
    return B.Source == A.Source && B.Destination == A.Destination;
}

// @baa 0x008b1da0
/* the out-of-line TArray<FVisiblePortalInfo>::RemoveItem instantiation (AController::VisiblePortals) */
template INT TArray<FVisiblePortalInfo>::RemoveItem(const FVisiblePortalInfo& Item);

/* TArray::AddItem / AddUniqueItem (Array.h); not in the kit's TArray. */
template<typename T> struct TArrayAddUnique_ : public TArray<T>
{
    INT AddItem(const T& Item)
    {
        const INT Index = this->Add(1);
        new(this->GetTypedData() + Index) T(Item);
        return Index;
    }
    INT AddUniqueItem(const T& Item)
    {
        for (INT Index = 0; Index < this->Num(); Index++)
        {
            if ((*this)(Index) == Item)
            {
                return Index;
            }
        }
        return AddItem(Item);
    }
};

// @baa 0x008b1c90
/* the out-of-line TArray<USequenceEvent*>::AddUniqueItem instantiation (AActor::GeneratedEvents) */
template INT TArrayAddUnique_<USequenceEvent*>::AddUniqueItem(USequenceEvent* const& Item);
