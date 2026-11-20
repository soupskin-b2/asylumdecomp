// Engine_0950000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/SkeletalMesh.h"

// @baa 0x00950150
/* the out-of-line new(TArray<FSkelMeshSection>&) instance (Array.h line 1275) */
template void* operator new<FSkelMeshSection>(size_t Size, TArray<FSkelMeshSection>& Array);

// @baa 0x00950200
/* the out-of-line new(TArray<FSkelMeshChunk>&) instance (Array.h line 1275) */
template void* operator new<FSkelMeshChunk>(size_t Size, TArray<FSkelMeshChunk>& Array);

/* UnkDOP.h */
// @baa 0x00959800
/* TArray<FkDOPNode>'s operator<< (Array.h): count, then each node */
FArchive& operator<<(FArchive& Ar, TArray<FkDOPNode>& A)
{
    Ar.CountBytes(A.ArrayNum * sizeof(FkDOPNode), A.ArrayMax * sizeof(FkDOPNode));
    if (Ar.IsLoading())
    {
        INT NewNum;
        Ar << NewNum;
        A.Empty(NewNum);
        for (INT i = 0; i < NewNum; i++)
        {
            Ar << *::new(A) FkDOPNode;
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
