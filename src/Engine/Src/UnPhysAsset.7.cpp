// UnPhysAsset.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* placement new as UE3 declares it (UnTemplate.h) */
// @baa 0x00a09a70
void UPhysicsAsset::GetBodyIndicesBelow(TArray<INT>& OutBodyIndices, FName InBoneName, USkeletalMesh* SkelMesh)
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
            OutBodyIndices.AddItem(i);
        }
    }
}
