// Engine_0960000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

// @baa 0x00963790
/* TArray<UMaterialInterface*>'s operator<< (Array.h): count, then each reference (USkeletalMesh::Materials). */
FArchive& operator<<(FArchive& Ar, TArray<UMaterialInterface*>& A)
{
    Ar.CountBytes(A.ArrayNum * sizeof(UMaterialInterface*), A.ArrayMax * sizeof(UMaterialInterface*));
    if (Ar.IsLoading())
    {
        INT NewNum;
        Ar << NewNum;
        A.Empty(NewNum);
        for (INT i = 0; i < NewNum; i++)
        {
            Ar << *::new(A) UMaterialInterface*;
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
