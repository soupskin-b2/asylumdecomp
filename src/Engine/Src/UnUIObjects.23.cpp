// UnUIObjects.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Implement.h"
#include "ue3/Classes.h"
#include <new.h>

/* TArray::AddItem (Array.h); the kit's TArray has Add but no AddItem. */
template<typename T>
struct TArrayAddItem : public TArray<T>
{
    INT AddItem(const T& Item)
    {
        const INT Index = this->Add(1);
        new((T*)this->AllocatorInstance.GetAllocation() + Index) T(Item);
        return Index;
    }
};

struct UUIScreenObject_ : public UUIScreenObject
{
    void sub_00daf880(TArray<UUIObject*>& out_Subscribers) const;
};

// @baa 0x00daf880
/* Gathers every descendant widget that wants scene update notifications. */
void UUIScreenObject_::sub_00daf880(TArray<UUIObject*>& out_Subscribers) const
{
    for (INT ChildIndex = 0; ChildIndex < Children.Num(); ChildIndex++)
    {
        UUIObject* Child = Children(ChildIndex);
        if (Child != NULL)
        {
            if (Child->bEnableSceneUpdateNotifications)
            {
                ((TArrayAddItem<UUIObject*>&)out_Subscribers).AddItem(Child);
            }
            ((UUIScreenObject_*)Child)->sub_00daf880(out_Subscribers);
        }
    }
}
