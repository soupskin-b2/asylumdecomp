// UnSkeletalTools.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/SkeletalMesh.h"

inline FArchive& operator<<(FArchive& Ar, FVector& V) { return Ar << V.X << V.Y << V.Z; }

// @baa 0x009448f0
FArchive& operator<<(FArchive& Ar, FRigidSkinVertex& V)
{
    Ar << V.Position;
    Ar << V.TangentX << V.TangentY << V.TangentZ;
    Ar << V.U << V.V;
    Ar << V.Bone;
    return Ar;
}
