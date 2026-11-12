// UnActorComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* TArray<UActorComponent*>::RemoveItem as this build has it (Array.h:1032, the older remove-in-place form
 * whose check reads the allocation directly; the kit's RemoveItem is the newer compacting one).
 * operator() is forced inline (issue #39), Remove is out of line in the exe (00766450). */
template<class T> class TArrayRemoveItem_
{
public:
    typedef T ElementType;
    FHeapAllocation AllocatorInstance;
    INT ArrayNum;
    INT ArrayMax;

    void Remove(INT Index, INT Count = 1);
    __forceinline T& operator()(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return ((T*)AllocatorInstance.GetAllocation())[i];
    }
    INT RemoveItem(const T& Item)
    {
#line 1032 BAA_ARRAY_FILE
        check( ((&Item) < (ElementType*)AllocatorInstance.GetAllocation()) || ((&Item) >= (ElementType*)AllocatorInstance.GetAllocation()+ArrayMax) );
        const INT OriginalNum = ArrayNum;
        for (INT Index = 0; Index < ArrayNum; Index++)
        {
            if ((*this)(Index) == Item)
            {
                Remove(Index--);
            }
        }
        return OriginalNum - ArrayNum;
    }
};

/* Kit gap: UActorComponent::IsAttached() (an inline accessor of bAttached in UnActorComponent.h) isn't declared. */
#define IsAttached() bAttached
// @baa 0x0076d150
/* Detaching removes the component from its owner's component list. */
void UActorComponent::Detach(UBOOL bWillReattach)
{
#line 607 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActorComponent.cpp"
    check(IsAttached());
    bAttached = FALSE;
    if (Owner)
    {
        ((TArrayRemoveItem_<UActorComponent*>&)Owner->AllComponents).RemoveItem(this);
    }
}

#line 56 "candidate.cpp"
