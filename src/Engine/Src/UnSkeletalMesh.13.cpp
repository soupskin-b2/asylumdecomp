// UnSkeletalMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* UE3's checkf (UnBuild.h): check with a formatted message */
#define checkf(expr, ...) { if (!(expr)) appFailAssert(#expr, __FILE__, __LINE__, __VA_ARGS__); }
/* the package versions this build writes (UnObjVer.h); the kit doesn't declare them */
extern INT GPackageFileVersion;
extern INT GPackageFileLicenseeVersion;
inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

/* FPackedNormal (UnMath.h): a unit vector packed into 4 bytes. */
struct FPackedNormal
{
    union
    {
        struct { BYTE X, Y, Z, W; } Vector;
        DWORD Packed;
    };
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

FArchive& operator<<(FArchive& Ar, TArray<FSoftSkinVertex>& A);
 /* 0x00675ef0 */
/* TArray<FSoftSkinVertex> with the out-of-line members BulkSerialize calls: CountBytes (0x006521e0),
 * Empty (0x00668040) and Add (0x00655160). */
struct FSoftVertexArray : public TArray<FSoftSkinVertex>
{
    typedef FSoftSkinVertex ElementType;

    void CountBytes(FArchive& Ar);
    void Empty(INT Slack);
    INT Add(INT Count);
    void BulkSerialize(FArchive& Ar);
};

// @baa 0x00963b60
/* TArray::BulkSerialize (Array.h): a raw memory read of the whole array when the package is current,
 * element by element otherwise (FStaticLODModel's soft vertices) */
void FSoftVertexArray::BulkSerialize(FArchive& Ar)
{
    INT SerializedElementSize = sizeof(ElementType);
    Ar << SerializedElementSize;

    if (Ar.IsSaving() || Ar.Ver() < GPackageFileVersion || Ar.LicenseeVer() < GPackageFileLicenseeVersion)
    {
        Ar << *this;
    }
    else
    {
        CountBytes(Ar);
        if (Ar.IsLoading())
        {
#line 758 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
            checkf(SerializedElementSize==0 || SerializedElementSize==sizeof(ElementType), TEXT("Expected %i, Got: %i"), sizeof(ElementType), SerializedElementSize);
            INT NewArrayNum;
            Ar << NewArrayNum;
            Empty(NewArrayNum);
            Add(NewArrayNum);
            Ar.Serialize(GetData(), NewArrayNum * sizeof(ElementType));
        }
    }
}

#line 83 "candidate.cpp"
