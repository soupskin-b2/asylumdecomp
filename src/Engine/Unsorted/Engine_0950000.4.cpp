// Engine_0950000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/SkeletalMesh.h"

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
