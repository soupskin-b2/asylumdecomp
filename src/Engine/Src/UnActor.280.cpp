// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* TArray::AddItem (Array.h); not in the kit's TArray. */
template<typename T> struct TArrayAddItem_ : public TArray<T>
{
    INT AddItem(const T& Item)
    {
        const INT Index = this->Add(1);
        new(this->GetTypedData() + Index) T(Item);
        return Index;
    }
};

/* Kit gap: AActor::SetDefaultCollisionType (0x00780cd0; derives CollisionType from the collision flags) isn't declared. */

// @baa 0x007839c0
/* Drops stale attachments, re-registers with the owner, points the components back at this actor and
 * recomputes the collision type. */
void AActor::PostLoad()
{
    Super::PostLoad();

    for (INT AttachmentIndex = 0; AttachmentIndex < Attached.Num(); AttachmentIndex++)
    {
        if (Attached(AttachmentIndex) == NULL || Attached(AttachmentIndex)->Base != this || Attached(AttachmentIndex)->bDeleteMe)
        {
            Attached.Remove(AttachmentIndex--);
        }
    }

    if (Owner)
    {
        ((TArrayAddItem_<AActor*>&)Owner->Children).AddItem(this);
    }

    for (UINT ComponentIndex = 0; ComponentIndex < (UINT)Components.Num(); ComponentIndex++)
    {
        UActorComponent* Component = Components(ComponentIndex);
        if (Component)
        {
            Component->Owner = this;
        }
    }

    this->SetDefaultCollisionType();
}
