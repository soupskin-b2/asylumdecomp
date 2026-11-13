// UnSkeletalTools.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

FArchive& operator<<(FArchive& Ar, TArray<INT>& A);
 /* 0x0054cc70 */
/* bEnableShadowCasting's array serializer is a separate out-of-line copy (0x00963690, its new(Array) is
 * out of line too); the kit types UBOOL as int, so it's bound through this wrapper. */
struct FUBoolArray : public TArray<UBOOL> {};

FArchive& operator<<(FArchive& Ar, FUBoolArray& A);
/* FSkeletalMeshLODInfo as the native code sees it: the kit's script mirror uses TArrayNoInit, which has
 * no constructor, while new(Array) here zero-constructs both arrays. */
struct FSkeletalMeshLODInfo_
{
    FLOAT DisplayFactor;
    FLOAT LODHysteresis;
    TArray<INT> LODMaterialMap;
    TArray<UBOOL> bEnableShadowCasting;
};

/* only the arrays go through the archive; the floats are script properties */
inline FArchive& operator<<(FArchive& Ar, FSkeletalMeshLODInfo_& I)
{
    Ar << I.LODMaterialMap;
    Ar << (FUBoolArray&)I.bEnableShadowCasting;
    return Ar;
}

/* TArray<FSkeletalMeshLODInfo>::Empty(INT Slack), out of line here (0x009755a0). */
struct FSkeletalMeshLODInfoArray : public TArray<FSkeletalMeshLODInfo_>
{
    void Empty(INT Slack);
};

// @baa 0x00979c20
/* TArray<FSkeletalMeshLODInfo>'s operator<< (Array.h): count, then each entry (USkeletalMesh::LODInfo). */
FArchive& operator<<(FArchive& Ar, TArray<FSkeletalMeshLODInfo_>& A)
{
    Ar.CountBytes(A.ArrayNum * sizeof(FSkeletalMeshLODInfo_), A.ArrayMax * sizeof(FSkeletalMeshLODInfo_));
    if (Ar.IsLoading())
    {
        INT NewNum;
        Ar << NewNum;
        A.Empty(NewNum);
        for (INT i = 0; i < NewNum; i++)
        {
            Ar << *::new(A) FSkeletalMeshLODInfo_;
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
