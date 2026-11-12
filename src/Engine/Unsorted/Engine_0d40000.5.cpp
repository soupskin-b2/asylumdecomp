// Engine_0d40000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* VJointPos (UnSkeletalMesh.h): a bone's reference pose. */
struct VJointPos
{
    FQuat Orientation;
    FVector Position;
    FLOAT Length;
    FLOAT XSize;
    FLOAT YSize;
    FLOAT ZSize;
};

/* FMeshBone as this build has it (0x48 bytes); the kit's FMeshBone has ParentIndex at the wrong offset. */
struct FMeshBone_
{
    FName Name;
    DWORD Flags;
    VJointPos BonePos;
    INT ParentIndex;      /* 0x38 */
    INT NumChildren;
    INT Depth;
    FColor BoneColor;
};

/* UnMemory.h (memcpy, which the compiler emits as a call to the CRT copy) */
#define appMemcpy memcpy
/* TArray<FMeshBone> (USkeletalMesh::RefSkeleton) with its out-of-line Empty (0x009582f0) */
struct FRefSkeletonArray : public TArray<FMeshBone_>
{
    void Empty(INT Slack);
    void Copy(const TArray<FMeshBone_>& Source);
};

// @baa 0x00d4cef0
/* TArray::Copy for a bitwise-copyable element (Array.h), out of line here */
void FRefSkeletonArray::Copy(const TArray<FMeshBone_>& Source)
{
    if (this != &Source)
    {
        if (Source.Num() > 0)
        {
            Empty(Source.Num());
            appMemcpy(GetData(), &Source(0), sizeof(FMeshBone_) * Source.Num());
            ArrayNum = Source.Num();
        }
        else
        {
            TArray<FMeshBone_>::Empty();
        }
    }
}
