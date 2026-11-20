// UnSkeletalTools.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/SkeletalMesh.h"

FArchive& operator<<(FArchive& Ar, TArray<FVector>& A);
 /* 0x007c37a0 */
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

// @baa 0x00950540
/* Array.h's placement new into a TArray, instantiated out of line for PerPolyBoneKDOPs */
template void* operator new(size_t Size, TArray<FPerPolyBoneCollisionData>& Array);
