// UnSkeletalTools.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

FArchive& operator<<(FArchive& Ar, FMatrix& M);
// @baa 0x00963910
 /* UnMath.h, 0x00802300 */
/* TArray<FMatrix>'s operator<< (Array.h): count, then each matrix (USkeletalMesh::RefBasesInvMatrix). */
FArchive& operator<<(FArchive& Ar, TArray<FMatrix>& A)
{
    Ar.CountBytes(A.ArrayNum * sizeof(FMatrix), A.ArrayMax * sizeof(FMatrix));
    if (Ar.IsLoading())
    {
        INT NewNum;
        Ar << NewNum;
        A.Empty(NewNum);
        for (INT i = 0; i < NewNum; i++)
        {
            Ar << *::new(A) FMatrix;
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
