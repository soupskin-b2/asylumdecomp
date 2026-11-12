// UnSkeletalTools.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

FArchive& operator<<(FArchive& Ar, TArray<FVector>& A);
 /* 0x007c37a0 */
/* TkDOPTree's nodes and triangles (UnkDOP.h); opaque elements, read with BulkSerialize */
struct FkDOPNode
{
    BYTE Opaque[0x40]; /* the node's bounds and children or triangle range (size assumed) */
};

struct FkDOPCollisionTriangle
{
    WORD v1, v2, v3;
    WORD MaterialIndex;
};

struct FkDOPNodeArray : public TArray<FkDOPNode>
{
    void BulkSerialize(FArchive& Ar); /* 0x00965f90 */
};

struct FkDOPTriangleArray : public TArray<FkDOPCollisionTriangle>
{
    void BulkSerialize(FArchive& Ar); /* 0x00966070 */
};

/* TkDOPTree<FSkelMeshCollisionDataProvider,WORD> (UnkDOP.h) */
struct FSkelMeshkDOPTree
{
    FkDOPNodeArray Nodes;
    FkDOPTriangleArray Triangles;

    friend FArchive& operator<<(FArchive& Ar, FSkelMeshkDOPTree& Tree)
    {
        Tree.Nodes.BulkSerialize(Ar);
        Tree.Triangles.BulkSerialize(Ar);
        return Ar;
    }
};

/* FPerPolyBoneCollisionData (UnSkeletalMesh.h): one bone's per-poly collision, the native element of
 * USkeletalMesh::PerPolyBoneKDOPs (the kit's FNativeElem_00979d40) */
struct FPerPolyBoneCollisionData
{
    FSkelMeshkDOPTree KDOPTree;
    TArray<FVector> CollisionVerts;

    friend FArchive& operator<<(FArchive& Ar, FPerPolyBoneCollisionData& Data)
    {
        Ar << Data.KDOPTree;
        Ar << Data.CollisionVerts;
        return Ar;
    }
};

/* TArray<FPerPolyBoneCollisionData>::Empty (Array.h), out of line here (0x00979e20) */
struct FPerPolyBoneCollisionDataArray : public TArray<FPerPolyBoneCollisionData>
{
    void Empty(INT Slack);
};

// @baa 0x0097d180
/* TArray<FPerPolyBoneCollisionData>'s operator<< (Array.h): count, then each bone's data */
FArchive& operator<<(FArchive& Ar, TArray<FPerPolyBoneCollisionData>& A)
{
    Ar.CountBytes(A.ArrayNum * sizeof(FPerPolyBoneCollisionData), A.ArrayMax * sizeof(FPerPolyBoneCollisionData));
    if (Ar.IsLoading())
    {
        INT NewNum;
        Ar << NewNum;
        ((FPerPolyBoneCollisionDataArray&)A).Empty(NewNum);
        for (INT i = 0; i < NewNum; i++)
        {
            Ar << *::new(A) FPerPolyBoneCollisionData;
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
