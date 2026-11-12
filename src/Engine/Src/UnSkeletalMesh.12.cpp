// UnSkeletalMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, DWORD& D) { Ar.ByteOrderSerialize(&D, sizeof(D)); return Ar; }

/* vertex types (UnSkeletalMesh.h); only referenced through their arrays here */
struct FRigidSkinVertex;
struct FSoftSkinVertex;
FArchive& operator<<(FArchive& Ar, TArray<FRigidSkinVertex>& A);
 /* 0x00675df0 */
FArchive& operator<<(FArchive& Ar, TArray<FSoftSkinVertex>& A);
  /* 0x00675ef0 */
FArchive& operator<<(FArchive& Ar, TArray<WORD>& A);
             /* 0x006076c0 */
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

// @baa 0x00967630
FArchive& operator<<(FArchive& Ar, FSkelMeshChunk& C)
{
    Ar << C.BaseVertexIndex;
    Ar << C.RigidVertices;
    Ar << C.SoftVertices;
    Ar << C.BoneMap;
    Ar << C.NumRigidVertices;
    Ar << C.NumSoftVertices;
    Ar << C.MaxBoneInfluences;
    return Ar;
}
