// UnSkeletalComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

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

/* USkeletalMesh::MatchRefBone (0x00976be0) isn't declared in Classes.h. */
struct USkeletalMesh_ : public USkeletalMesh
{
    INT MatchRefBone(FName BoneName) const;
};

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
    void InitSkelControls();
};

// @baa 0x0092dce0
/* build the bone -> skel control list lookup from the anim tree */
void USkeletalMeshComponent_::InitSkelControls()
{
    ((TArrayReset_<BYTE>&)SkelControlIndex).Reset();

    UAnimTree* Tree = Cast<UAnimTree>(Animations);
    if (SkeletalMesh && Tree && Tree->SkelControlLists.Num() > 0)
    {
        // one entry per bone, 255 meaning no list
        const INT NumBones = SkeletalMesh->RefSkeleton.Num();
        SkelControlIndex.Add(NumBones);
        memset(&((TArrayAt_<BYTE>&)SkelControlIndex).At(0), 0xFF, NumBones);

        const INT NumControls = Tree->SkelControlLists.Num();
#line 5575 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalComponent.cpp"
        check(NumControls < 255);
        for (INT i = 0; i < NumControls; i++)
        {
            const INT BoneIndex = ((USkeletalMesh_*)SkeletalMesh)->MatchRefBone(((TArrayAt_<FSkelControlListHead>&)Tree->SkelControlLists).At(i).BoneName);
            if (BoneIndex != INDEX_NONE && ((TArrayAt_<BYTE>&)SkelControlIndex).At(BoneIndex) == 255)
            {
                ((TArrayAt_<BYTE>&)SkelControlIndex).At(BoneIndex) = i;
            }
        }
    }
}

#line 81 "candidate.cpp"
