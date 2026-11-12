// Engine_0950000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

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

// @baa 0x00950a50
/* Array.h's placement new into a TArray, instantiated out of line for kDOP nodes */
template void* operator new(size_t Size, TArray<FkDOPNode>& Array);
