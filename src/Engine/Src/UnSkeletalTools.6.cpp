// UnSkeletalTools.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

inline FArchive& operator<<(FArchive& Ar, FVector& V) { return Ar << V.X << V.Y << V.Z; }

inline FArchive& operator<<(FArchive& Ar, FQuat& F) { return Ar << F.X << F.Y << F.Z << F.W; }

inline FArchive& operator<<(FArchive& Ar, FColor& Color) { Ar.ByteOrderSerialize(&Color, sizeof(Color)); return Ar; }

#define VER_ADDED_BONE_COLOR 0x203 /* name guessed: the package version that added FMeshBone::BoneColor */
/* FMeshBone as this build has it (UnSkeletalMesh.h, 0x48 bytes). The kit's FMeshBone flattens BonePos
 * without Length/XSize/YSize/ZSize, so its NumChildren and ParentIndex sit at the wrong offsets. */
FArchive& operator<<(FArchive& Ar, FMeshBone& F);
 /* 0x00943ad0 */
/* TArray<FMeshBone>::Empty(INT Slack), out of line here (0x009582f0). */
struct FMeshBoneArray : public TArray<FMeshBone>
{
    void Empty(INT Slack);
};

// @baa 0x00963a80
/* TArray<FMeshBone>'s operator<< (Array.h): count, then each bone. */
FArchive& operator<<(FArchive& Ar, TArray<FMeshBone>& A)
{
    Ar.CountBytes(A.ArrayNum * sizeof(FMeshBone), A.ArrayMax * sizeof(FMeshBone));
    if (Ar.IsLoading())
    {
        INT NewNum;
        Ar << NewNum;
        A.Empty(NewNum);
        for (INT i = 0; i < NewNum; i++)
        {
            Ar << *::new(A) FMeshBone;
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

// @baa 0x00f24e00
void UReimportSkeletalMeshFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = USkeletalMesh::StaticClass();
	new(Formats) FString(TEXT("psk;Skeletal Mesh"));
	bCreateNew = FALSE;
}

// @baa 0x00fa7940
void USkeletalMeshFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = USkeletalMesh::StaticClass();
	new(Formats) FString(TEXT("psk;Skeletal Mesh"));
	bCreateNew = FALSE;
}
