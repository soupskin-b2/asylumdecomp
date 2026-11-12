// UnSkeletalTools.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

FArchive& operator<<(FArchive& Ar, FSimpleBox& Box);
 /* 0x00943580 */
/* inline here; its out-of-line copy is 0x00943a30 */
inline FArchive& operator<<(FArchive& Ar, FBoneBounds& B)
{
    return Ar << B.BoneIndex << B.Box;
}

/* TArray<FBoneBounds>::Empty(INT Slack), out of line here (0x00957c40). */
struct FBoneBoundsArray : public TArray<FBoneBounds>
{
    void Empty(INT Slack);
};

// @baa 0x00963eb0
/* TArray<FBoneBounds>'s operator<< (Array.h): count, then each entry (USkeletalMesh::PerBoneBounds). */
FArchive& operator<<(FArchive& Ar, TArray<FBoneBounds>& A)
{
    Ar.CountBytes(A.ArrayNum * sizeof(FBoneBounds), A.ArrayMax * sizeof(FBoneBounds));
    if (Ar.IsLoading())
    {
        INT NewNum;
        Ar << NewNum;
        ((FBoneBoundsArray&)A).Empty(NewNum);
        for (INT i = 0; i < NewNum; i++)
        {
            Ar << *::new(A) FBoneBounds;
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
