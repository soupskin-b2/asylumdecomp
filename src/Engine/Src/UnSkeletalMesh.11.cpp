// UnSkeletalMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/SkeletalMesh.h"

FArchive& operator<<(FArchive& Ar, FSkelMeshChunk& C);
 /* 0x00967630 */
/* TArray<FSkelMeshChunk>::Empty(INT Slack), out of line here (0x00975c20). */
struct FSkelMeshChunkArray : public TArray<FSkelMeshChunk>
{
    void Empty(INT Slack);
};

// @baa 0x00979a10
/* TArray<FSkelMeshChunk>'s operator<< (Array.h): count, then each chunk (FStaticLODModel::Chunks). */
FArchive& operator<<(FArchive& Ar, TArray<FSkelMeshChunk>& A)
{
    Ar.CountBytes(A.ArrayNum * sizeof(FSkelMeshChunk), A.ArrayMax * sizeof(FSkelMeshChunk));
    if (Ar.IsLoading())
    {
        INT NewNum;
        Ar << NewNum;
        A.Empty(NewNum);
        for (INT i = 0; i < NewNum; i++)
        {
            Ar << *::new(A) FSkelMeshChunk;
        }
    }
    else
    {
        Ar << A.ArrayNum;
        for (INT i = 0; i < A.ArrayNum; i++)
        {
            Ar << A(i);
        }
    }
    return Ar;
}
