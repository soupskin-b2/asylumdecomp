// UnSkeletalTools.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* UE3's FArchive operators for plain values (UnArc.h): byte-order serialization of the value. */
inline FArchive& operator<<(FArchive& Ar, FLOAT& F) { Ar.ByteOrderSerialize(&F, sizeof(F)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, DWORD& D) { Ar.ByteOrderSerialize(&D, sizeof(D)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, FVector& V) { return Ar << V.X << V.Y << V.Z; }

inline FArchive& operator<<(FArchive& Ar, FQuat& F) { return Ar << F.X << F.Y << F.Z << F.W; }

/* FColor(R, G, B, A) (UnMath.h); the kit's FColor has no constructor. */
struct FColor_ : public FColor
{
    FColor_(BYTE InR, BYTE InG, BYTE InB, BYTE InA) { B = InB; G = InG; R = InR; A = InA; }
};

inline FArchive& operator<<(FArchive& Ar, FColor& Color) { Ar.ByteOrderSerialize(&Color, sizeof(Color)); return Ar; }

#define VER_ADDED_BONE_COLOR 0x203 /* name guessed: the package version that added FMeshBone::BoneColor */
/* FMeshBone as this build has it (UnSkeletalMesh.h, 0x48 bytes). The kit's FMeshBone flattens BonePos
 * without Length/XSize/YSize/ZSize, so its NumChildren and ParentIndex sit at the wrong offsets. */
// @baa 0x00950000
/* the out-of-line new(TArray<FMeshBone>&) instance (Array.h line 1275) */
template void* operator new<FMeshBone>(size_t Size, TArray<FMeshBone>& Array);

// @baa 0x00950350
/* the out-of-line new(TArray<FBoneBounds>&) instance (Array.h line 1275) */
template void* operator new<FBoneBounds>(size_t Size, TArray<FBoneBounds>& Array);

// @baa 0x00950400
/* the out-of-line new(TArray<USkeletalMeshSocket*>&) instance (Array.h line 1275) */
template void* operator new<USkeletalMeshSocket*>(size_t Size, TArray<USkeletalMeshSocket*>& Array);
