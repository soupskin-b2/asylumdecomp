// UnPhysAssetTools.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* placement new as UE3 declares it (UnTemplate.h) */
/* TArray::AddItem (Array.h): the kit's TArray lacks it */
struct FIntArray : public TArray<INT> {
    INT AddItem(const INT& Item)
    {
        const INT Index = Add(1);
        ::new(GetTypedData() + Index) INT(Item);
        return Index;
    }
};

// @baa 0x00a17a10
void UPhysicsAsset::UpdateBoundsBodiesArray()
{
    BoundsBodies.Empty();

    for (INT i = 0; i < BodySetup.Num(); i++)
    {
#line 590 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAssetTools.cpp"
        check(BodySetup(i));

        if (BodySetup(i)->bConsiderForBounds)
        {
            BoundsBodies.AddItem(i);
        }
    }
}

#line 43 "candidate.cpp"
