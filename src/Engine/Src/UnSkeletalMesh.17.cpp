// UnSkeletalMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

/* one index pair of a LOD's influence data (UnSkeletalMesh.h; names assumed). Not in the kit. */
struct FInfluenceIndexPair
{
    INT First;
    INT Second;

    friend FArchive& operator<<(FArchive& Ar, FInfluenceIndexPair& P)
    {
        return Ar << P.First << P.Second;
    }
};

// @baa 0x00963c40
/* TArray<FInfluenceIndexPair>'s operator<< (Array.h): count, then each pair */
FArchive& operator<<(FArchive& Ar, TArray<FInfluenceIndexPair>& A)
{
    Ar.CountBytes(A.ArrayNum * sizeof(FInfluenceIndexPair), A.ArrayMax * sizeof(FInfluenceIndexPair));
    if (Ar.IsLoading())
    {
        INT NewNum;
        Ar << NewNum;
        A.Empty(NewNum);
        for (INT i = 0; i < NewNum; i++)
        {
            Ar << *::new(A) FInfluenceIndexPair;
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
