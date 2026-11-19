// UnSkeletalComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

extern template UAnimTree* Cast<UAnimTree>(UObject* Src);
extern template INT TArray<BYTE>::Add(INT Count);
void* __cdecl memset(void* Dest, int Value, size_t Count);
#pragma intrinsic(memset)
/* TArray::Reset (Array.h): empties without freeing; not in the kit's TArray. */
template<typename T> struct TArrayReset_ : public TArray<T>
{
    void Reset()
    {
        this->DestructItems(0, this->ArrayNum);
        this->ArrayNum = 0;
    }
};

// @baa 0x0092dce0
/* build the bone -> skel control list lookup from the anim tree */
void USkeletalMeshComponent::InitSkelControls()
{
    ((TArrayReset_<BYTE>&)SkelControlIndex).Reset();

    UAnimTree* Tree = Cast<UAnimTree>(Animations);
    if (SkeletalMesh && Tree && Tree->SkelControlLists.Num() > 0)
    {
        // one entry per bone, 255 meaning no list
        const INT NumBones = SkeletalMesh->RefSkeleton.Num();
        SkelControlIndex.Add(NumBones);
        memset(&SkelControlIndex(0), 0xFF, NumBones);

        const INT NumControls = Tree->SkelControlLists.Num();
#line 5575 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalComponent.cpp"
        check(NumControls < 255);
        for (INT i = 0; i < NumControls; i++)
        {
            const INT BoneIndex = SkeletalMesh->MatchRefBone(Tree->SkelControlLists(i).BoneName);
            if (BoneIndex != INDEX_NONE && SkelControlIndex(BoneIndex) == 255)
            {
                SkelControlIndex(BoneIndex) = i;
            }
        }
    }
}

#line 81 "candidate.cpp"
