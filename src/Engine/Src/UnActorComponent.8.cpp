// UnActorComponent.cpp: 1 function
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
