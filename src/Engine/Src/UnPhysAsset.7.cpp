// UnPhysAsset.cpp: 1 function
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

struct UPhysicsAsset_ : public UPhysicsAsset {
    void GetBodyIndicesBelow(TArray<INT>& OutBodyIndices, FName InBoneName, USkeletalMesh* SkelMesh); // 00a09a70
};

// @baa 0x00a09a70
void UPhysicsAsset_::GetBodyIndicesBelow(TArray<INT>& OutBodyIndices, FName InBoneName, USkeletalMesh* SkelMesh)
{
    USkeletalMesh* Mesh = (USkeletalMesh*)SkelMesh;
    INT BaseIndex = Mesh->MatchRefBone(InBoneName);

    // Iterate over all other bodies, looking for 'children' of this one
    for (INT i = 0; i < BodySetup.Num(); i++)
    {
        URB_BodySetup* BS = BodySetup(i);
        INT TestIndex = Mesh->MatchRefBone(BS->BoneName);

        // We want to return this body as well.
        if (TestIndex == BaseIndex || Mesh->BoneIsChildOf(TestIndex, BaseIndex))
        {
            ((FIntArray&)OutBodyIndices).AddItem(i);
        }
    }
}
