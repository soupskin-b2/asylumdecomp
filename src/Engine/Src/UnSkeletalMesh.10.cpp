// UnSkeletalMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, WORD& W) { Ar.ByteOrderSerialize(&W, sizeof(W)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, DWORD& D) { Ar.ByteOrderSerialize(&D, sizeof(D)); return Ar; }

/* FSkelMeshSection (UnSkeletalMesh.h): a run of triangles of one LOD drawn with one material. Not in the kit. */
struct FSkelMeshSection
{
    WORD MaterialIndex;
    WORD ChunkIndex;
    DWORD BaseIndex;
    WORD NumTriangles;
};

/* inline here; its out-of-line copy is 0x00943bb0 */
inline FArchive& operator<<(FArchive& Ar, FSkelMeshSection& S)
{
    Ar << S.MaterialIndex;
    Ar << S.ChunkIndex;
    Ar << S.BaseIndex;
    Ar << S.NumTriangles;
    return Ar;
}

/* TArray<FSkelMeshSection>::Empty(INT Slack), out of line here (0x009583d0). */
struct FSkelMeshSectionArray : public TArray<FSkelMeshSection>
{
    void Empty(INT Slack);
};

// @baa 0x00963d70
/* TArray<FSkelMeshSection>'s operator<< (Array.h): count, then each entry (FStaticLODModel::Sections). */
FArchive& operator<<(FArchive& Ar, TArray<FSkelMeshSection>& A)
{
    Ar.CountBytes(A.ArrayNum * sizeof(FSkelMeshSection), A.ArrayMax * sizeof(FSkelMeshSection));
    if (Ar.IsLoading())
    {
        INT NewNum;
        Ar << NewNum;
        ((FSkelMeshSectionArray&)A).Empty(NewNum);
        for (INT i = 0; i < NewNum; i++)
        {
            Ar << *::new(A) FSkelMeshSection;
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
