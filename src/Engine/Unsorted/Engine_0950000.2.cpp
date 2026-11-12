// Engine_0950000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* FSkelMeshSection (UnSkeletalMesh.h): a run of triangles of one LOD drawn with one material. Not in the kit. */
struct FSkelMeshSection
{
    WORD MaterialIndex;
    WORD ChunkIndex;
    DWORD BaseIndex;
    WORD NumTriangles;
};

// @baa 0x00950150
/* the out-of-line new(TArray<FSkelMeshSection>&) instance (Array.h line 1275) */
template void* operator new<FSkelMeshSection>(size_t Size, TArray<FSkelMeshSection>& Array);

/* FPackedNormal (UnMath.h): a unit vector packed into 4 bytes. */
struct FPackedNormal
{
    union
    {
        struct { BYTE X, Y, Z, W; } Vector;
        DWORD Packed;
    };
};

/* FRigidSkinVertex (UnSkeletalMesh.h): a vertex bound to a single bone (0x24 bytes). Not in the kit. */
struct FRigidSkinVertex
{
    FVector Position;
    FPackedNormal TangentX, TangentY, TangentZ;
    FLOAT U, V;
    BYTE Bone;
};

/* FSoftSkinVertex (UnSkeletalMesh.h): a vertex skinned to up to 4 bones (0x28 bytes). Not in the kit. */
struct FSoftSkinVertex
{
    FVector Position;
    FPackedNormal TangentX, TangentY, TangentZ;
    FLOAT U, V;
    BYTE InfluenceBones[4];
    BYTE InfluenceWeights[4];
};

/* FSkelMeshChunk (UnSkeletalMesh.h): vertices of one LOD skinned with one bone map. Not in the kit. */
struct FSkelMeshChunk
{
    DWORD BaseVertexIndex;
    TArray<FRigidSkinVertex> RigidVertices;
    TArray<FSoftSkinVertex> SoftVertices;
    TArray<WORD> BoneMap;
    INT NumRigidVertices;
    INT NumSoftVertices;
    INT MaxBoneInfluences;
};

// @baa 0x00950200
/* the out-of-line new(TArray<FSkelMeshChunk>&) instance (Array.h line 1275) */
template void* operator new<FSkelMeshChunk>(size_t Size, TArray<FSkelMeshChunk>& Array);

inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, WORD& W) { Ar.ByteOrderSerialize(&W, sizeof(W)); return Ar; }

/* UnkDOP.h */
#define MAX_FLT 3.402823466e+38F
#define NUM_PLANES 3
/* FkDOP (UnkDOP.h): an axis-aligned bounding volume (a kDOP with 3 plane pairs). Not in the kit. */
struct FkDOP
{
    FLOAT Min[NUM_PLANES];
    FLOAT Max[NUM_PLANES];

    FkDOP()
    {
        Init();
    }

    /* empty: inverted bounds that any point expands */
    void Init()
    {
        for (INT nPlane = 0; nPlane < NUM_PLANES; nPlane++)
        {
            Min[nPlane] = MAX_FLT;
            Max[nPlane] = -MAX_FLT;
        }
    }

    friend FArchive& operator<<(FArchive& Ar, FkDOP& kDOP); /* 0x00949d60 */
};

/* FkDOPNode (UnkDOP.h): a node of a kDOP tree, either two children or a run of triangles. Not in the kit. */
struct FkDOPNode
{
    FkDOP BoundingVolume;
    UBOOL bIsLeaf;
    union
    {
        struct
        {
            WORD LeftNode;
            WORD RightNode;
        } n;
        struct
        {
            WORD NumTriangles;
            WORD StartIndex;
        } t;
    };

    FkDOPNode()
    {
        n.LeftNode = 0xFFFF;
        n.RightNode = 0xFFFF;
        BoundingVolume.Init();
    }

    friend FArchive& operator<<(FArchive& Ar, FkDOPNode& Node)
    {
        Ar << Node.BoundingVolume << Node.bIsLeaf;
        // n.LeftNode overlaps t.NumTriangles and n.RightNode t.StartIndex
        Ar << Node.n.LeftNode << Node.n.RightNode;
        return Ar;
    }
};

// @baa 0x00959800
/* TArray<FkDOPNode>'s operator<< (Array.h): count, then each node */
FArchive& operator<<(FArchive& Ar, TArray<FkDOPNode>& A)
{
    Ar.CountBytes(A.ArrayNum * sizeof(FkDOPNode), A.ArrayMax * sizeof(FkDOPNode));
    if (Ar.IsLoading())
    {
        INT NewNum;
        Ar << NewNum;
        A.Empty(NewNum);
        for (INT i = 0; i < NewNum; i++)
        {
            Ar << *::new(A) FkDOPNode;
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
