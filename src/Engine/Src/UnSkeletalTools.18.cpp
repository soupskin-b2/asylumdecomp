// UnSkeletalTools.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

inline FArchive& operator<<(FArchive& Ar, FLOAT& F) { Ar.ByteOrderSerialize(&F, sizeof(F)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, FVector& V) { return Ar << V.X << V.Y << V.Z; }

inline FArchive& operator<<(FArchive& Ar, BYTE& B) { Ar.Serialize(&B, 1); return Ar; }

/* FPackedNormal (UnMath.h): a unit vector packed into 4 bytes. */
struct FPackedNormal
{
    union
    {
        struct { BYTE X, Y, Z, W; } Vector;
        DWORD Packed;
    };

    /* serialized as its packed DWORD (out of line here, 0x0088b100) */
    friend FArchive& operator<<(FArchive& Ar, FPackedNormal& N);
};

/* FRigidSkinVertex (UnSkeletalMesh.h): a vertex bound to a single bone (0x24 bytes). Not in the kit. */
struct FRigidSkinVertex
{
    FVector Position;
    FPackedNormal TangentX, TangentY, TangentZ;
    FLOAT U, V;
    BYTE Bone;
};

// @baa 0x009448f0
FArchive& operator<<(FArchive& Ar, FRigidSkinVertex& V)
{
    Ar << V.Position;
    Ar << V.TangentX << V.TangentY << V.TangentZ;
    Ar << V.U << V.V;
    Ar << V.Bone;
    return Ar;
}
