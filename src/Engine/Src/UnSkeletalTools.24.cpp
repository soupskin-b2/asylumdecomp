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
    ~FkDOPNodeArray();                /* 0x00957ce0 */
    void BulkSerialize(FArchive& Ar); /* 0x00965f90 */
};

struct FkDOPTriangleArray : public TArray<FkDOPCollisionTriangle>
{
    ~FkDOPTriangleArray();            /* 0x007c4130 */
    void BulkSerialize(FArchive& Ar); /* 0x00966070 */
};

/* TArray<FVector> with its out-of-line destructor (0x00665d40) */
struct FVectorArray : public TArray<FVector>
{
    ~FVectorArray();
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
    FVectorArray CollisionVerts;

    friend FArchive& operator<<(FArchive& Ar, FPerPolyBoneCollisionData& Data)
    {
        Ar << Data.KDOPTree;
        Ar << Data.CollisionVerts;
        return Ar;
    }
};

/* TArray<FPerPolyBoneCollisionData>'s destructor (USkeletalMesh::PerPolyBoneKDOPs), out of line here */
template<> __declspec(noinline) TArray<FPerPolyBoneCollisionData>::~TArray()
{
    // DestructItems(0, ArrayNum), as this build inlines it
    const INT Count = ArrayNum;
    for (INT i = 0; i < Count; i++)
    {
        (&(*this)(i))->~FPerPolyBoneCollisionData();
    }
    ArrayNum = ArrayMax = 0;
}

// @baa 0x00979d40
/* USkeletalMesh's destructor destroys PerPolyBoneKDOPs; this stands in for it so the compiler emits
 * the specialisation above. */
void DestroyPerPolyBoneKDOPs(TArray<FPerPolyBoneCollisionData>& PerPolyBoneKDOPs)
{
    PerPolyBoneKDOPs.~TArray();
}
