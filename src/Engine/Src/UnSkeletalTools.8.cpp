// UnSkeletalTools.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* UE3's FArchive operators for plain values (UnArc.h). */
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

// @baa 0x00943bb0
FArchive& operator<<(FArchive& Ar, FSkelMeshSection& S)
{
    Ar << S.MaterialIndex;
    Ar << S.ChunkIndex;
    Ar << S.BaseIndex;
    Ar << S.NumTriangles;
    return Ar;
}
