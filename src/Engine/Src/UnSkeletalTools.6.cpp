// UnSkeletalTools.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
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

/* VJointPos (UnSkeletalMesh.h): a bone's reference pose. Not in the kit (its FMeshBone has it flattened). */
struct VJointPos
{
    FQuat Orientation;
    FVector Position;
    FLOAT Length;
    FLOAT XSize;
    FLOAT YSize;
    FLOAT ZSize;
};

inline FArchive& operator<<(FArchive& Ar, FColor& Color) { Ar.ByteOrderSerialize(&Color, sizeof(Color)); return Ar; }

#define VER_ADDED_BONE_COLOR 0x203 /* name guessed: the package version that added FMeshBone::BoneColor */
/* FMeshBone as this build has it (UnSkeletalMesh.h, 0x48 bytes). The kit's FMeshBone flattens BonePos
 * without Length/XSize/YSize/ZSize, so its NumChildren and ParentIndex sit at the wrong offsets. */
struct FMeshBone_
{
    FName Name;           /* 0x00 */
    DWORD Flags;          /* 0x08 */
    VJointPos BonePos;    /* 0x0c */
    INT ParentIndex;      /* 0x38 */
    INT NumChildren;      /* 0x3c */
    INT Depth;            /* 0x40 */
    FColor BoneColor;     /* 0x44 */
};

FArchive& operator<<(FArchive& Ar, FMeshBone_& F);
 /* 0x00943ad0 */
/* TArray<FMeshBone>::Empty(INT Slack), out of line here (0x009582f0). */
struct FMeshBoneArray : public TArray<FMeshBone_>
{
    void Empty(INT Slack);
};

// @baa 0x00963a80
/* TArray<FMeshBone>'s operator<< (Array.h): count, then each bone. */
FArchive& operator<<(FArchive& Ar, TArray<FMeshBone_>& A)
{
    Ar.CountBytes(A.ArrayNum * sizeof(FMeshBone_), A.ArrayMax * sizeof(FMeshBone_));
    if (Ar.IsLoading())
    {
        INT NewNum;
        Ar << NewNum;
        A.Empty(NewNum);
        for (INT i = 0; i < NewNum; i++)
        {
            Ar << *::new(A) FMeshBone_;
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

/* UFactory's flags (UE3: bCreateNew, bEditAfterNew, bEditorImport, bText) are in the kit's
 * _native2 blob at 0x50; this stand-in names them. */
struct FFactoryFlags
{
	BITFIELD bCreateNew : 1;
	BITFIELD bEditAfterNew : 1;
	BITFIELD bEditorImport : 1;
	BITFIELD bText : 1;
};

// @baa 0x00f24e00
void UReimportSkeletalMeshFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = USkeletalMesh::StaticClass();
	new(Formats) FString(TEXT("psk;Skeletal Mesh"));
	((FFactoryFlags*)_native2)->bCreateNew = FALSE;
}

// @baa 0x00fa7940
void USkeletalMeshFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = USkeletalMesh::StaticClass();
	new(Formats) FString(TEXT("psk;Skeletal Mesh"));
	((FFactoryFlags*)_native2)->bCreateNew = FALSE;
}
