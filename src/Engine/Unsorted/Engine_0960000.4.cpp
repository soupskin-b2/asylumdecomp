// Engine_0960000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

/* FNativeElem_007b9350 is the kit's stand-in for UBOOL elements (the kit types UBOOL as int, which would
 * make this TArray<INT>'s serializer, a different function at 0x0054cc70). */
inline FArchive& operator<<(FArchive& Ar, FNativeElem_007b9350& B) { return Ar << (UBOOL&)B; }

// @baa 0x00963690
/* TArray<UBOOL>'s operator<< (Array.h), e.g. FSkeletalMeshLODInfo::bEnableShadowCasting */
FArchive& operator<<(FArchive& Ar, TArray<FNativeElem_007b9350>& A)
{
    Ar.CountBytes(A.ArrayNum * sizeof(FNativeElem_007b9350), A.ArrayMax * sizeof(FNativeElem_007b9350));
    if (Ar.IsLoading())
    {
        INT NewNum;
        Ar << NewNum;
        A.Empty(NewNum);
        for (INT i = 0; i < NewNum; i++)
        {
            Ar << *::new(A) FNativeElem_007b9350;
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
