// Engine_0950000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, WORD& W) { Ar.ByteOrderSerialize(&W, sizeof(W)); return Ar; }

/* FkDOPCollisionTriangle (UnkDOP.h): a triangle of a kDOP tree. Not in the kit. */
struct FkDOPCollisionTriangle
{
    WORD v1, v2, v3;
    WORD MaterialIndex;

    FkDOPCollisionTriangle() : v1(0), v2(0), v3(0), MaterialIndex(0) {}

    friend FArchive& operator<<(FArchive& Ar, FkDOPCollisionTriangle& Tri)
    {
        Ar << Tri.v1 << Tri.v2 << Tri.v3 << Tri.MaterialIndex;
        return Ar;
    }
};

// @baa 0x009599c0
/* TArray<FkDOPCollisionTriangle>'s operator<< (Array.h): count, then each triangle */
FArchive& operator<<(FArchive& Ar, TArray<FkDOPCollisionTriangle>& A)
{
    Ar.CountBytes(A.ArrayNum * sizeof(FkDOPCollisionTriangle), A.ArrayMax * sizeof(FkDOPCollisionTriangle));
    if (Ar.IsLoading())
    {
        INT NewNum;
        Ar << NewNum;
        A.Empty(NewNum);
        for (INT i = 0; i < NewNum; i++)
        {
            Ar << *::new(A) FkDOPCollisionTriangle;
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
