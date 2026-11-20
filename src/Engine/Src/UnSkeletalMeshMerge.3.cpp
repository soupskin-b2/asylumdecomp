// UnSkeletalMeshMerge.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/SkeletalMesh.h"

/* FSkeletalMeshMerge::FMergeSectionInfo (UnSkeletalMeshMerge.h): one source section going into a merged section */
struct FMergeSectionInfo
{
    const USkeletalMesh* SkelMesh;
    const FSkelMeshSection* Section;
    const FSkelMeshChunk* Chunk;
    TArray<WORD> BoneMap;
};

// @baa 0x00d49360
/* the out-of-line new(TArray<FMergeSectionInfo>&) instance (Array.h line 1275) */
template void* operator new<FMergeSectionInfo>(size_t Size, TArray<FMergeSectionInfo>& Array);
