// Engine_07d0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* TArray<WORD>::AddUniqueItem (Array.h), out of line here (bone maps) */
struct FWordArray : public TArray<WORD>
{
    INT AddUniqueItem(const WORD& Item);
};

// @baa 0x007da4b0
INT FWordArray::AddUniqueItem(const WORD& Item)
{
    for (INT Index = 0; Index < ArrayNum; Index++)
    {
        if ((*this)(Index) == Item)
        {
            return Index;
        }
    }

    // AddItem(Item)
    const INT Index = Add(1);
    new((EInternal*)(GetTypedData() + Index)) WORD(Item);
    return Index;
}
