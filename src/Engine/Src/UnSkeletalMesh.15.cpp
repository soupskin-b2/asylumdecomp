// UnSkeletalMesh.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/SkeletalMesh.h"

/* UnObjBase.h: the platform being cooked for (UE3::PLATFORM_Xenon | UE3::PLATFORM_PS3 = 0xc) */
extern DWORD GCookingTarget;
enum { PLATFORM_Xenon = 4, PLATFORM_PS3 = 8 };
/* the package version that moved skeletal meshes to GPU-skin vertex data (UnObjVer.h; name assumed) */
enum { VER_USE_GPUSKIN_VERTEX_DATA = 0x1ed };

/* TArray<FSoftSkinVertex> with its out-of-line BulkSerialize (0x00963b60) and destructor (0x00666710) */
struct FSoftVertexArray : public TArray<FSoftSkinVertex>
{
    ~FSoftVertexArray();
    void BulkSerialize(FArchive& Ar);
};

class FResourceArrayInterface;
// @baa 0x0097b310
/* serialize the vertex buffer's CPU data, converting the soft vertices of old packages */
FArchive& operator<<(FArchive& Ar, FSkeletalMeshVertexBuffer& VertexBuffer)
{
    // consoles read the influences as one DWORD each, so swap their bytes when cooking for one
    if (Ar.IsSaving() && (GCookingTarget & (PLATFORM_Xenon | PLATFORM_PS3)) && !VertexBuffer.bInfluencesByteSwapped)
    {
        for (UINT VertIdx = 0; VertIdx < VertexBuffer.GetNumVertices(); VertIdx++)
        {
            FGPUSkinVertexBase* Vertex = (FGPUSkinVertexBase*)(VertexBuffer.Data + VertIdx * VertexBuffer.Stride);
            Exchange(Vertex->InfluenceBones[0], Vertex->InfluenceBones[3]);
            Exchange(Vertex->InfluenceWeights[0], Vertex->InfluenceWeights[3]);
            Exchange(Vertex->InfluenceBones[1], Vertex->InfluenceBones[2]);
            Exchange(Vertex->InfluenceWeights[1], Vertex->InfluenceWeights[2]);
        }
        VertexBuffer.bInfluencesByteSwapped = TRUE;
    }

    if (Ar.Ver() < VER_USE_GPUSKIN_VERTEX_DATA)
    {
        // old packages have the soft skin vertices only
        FSoftVertexArray LegacyVertices;
        LegacyVertices.BulkSerialize(Ar);
        VertexBuffer.Init(LegacyVertices);
    }
    else
    {
        Ar << VertexBuffer.bUseFullPrecisionUVs;
        if (Ar.IsLoading())
        {
            VertexBuffer.AllocateData();
        }
        VertexBuffer.VertexData->Serialize(Ar);

        VertexBuffer.Data = VertexBuffer.VertexData->GetDataPointer();
        VertexBuffer.Stride = VertexBuffer.VertexData->GetStride();
        VertexBuffer.NumVertices = VertexBuffer.VertexData->GetNumVertices();
    }
    return Ar;
}

/* the static mesh vertex formats (StaticMeshVertex.h); only the UVs' precision differs. Not in the kit. */
struct FStaticMeshFullVertex
{
    FPackedNormal TangentX;
    FPackedNormal TangentZ;     /* W holds the sign of the basis determinant */
    DWORD OpaqueVertexExtra;    /* 4 bytes this build adds ahead of the UVs (unknown) */
};

/* FStaticMeshVertexBuffer (StaticMeshVertex.h): a static mesh's tangents and UVs. Not in the kit. */
class FStaticMeshVertexBuffer : public FVertexBuffer
{
public:
    FVector VertexTangentY(UINT VertexIndex) const;

    const struct FStaticMeshFullVertex* GetVertex(UINT VertexIndex) const
    {
        return (const FStaticMeshFullVertex*)(Data + VertexIndex * Stride);
    }
    void SetVertexUV(UINT VertexIndex, UINT UVIndex, const FVector2D& Vec2D);

private:
    class FStaticMeshVertexDataInterface* VertexData;
    UINT NumTexCoords;
    BYTE* Data;                   /* 0x20 */
    UINT Stride;                  /* 0x24 */
    UINT NumVertices;
    UBOOL bUseFullPrecisionUVs;   /* 0x2c */
};

/* UnMath.h: the binormal of a tangent basis, rebuilt from TangentX, TangentZ and the basis sign
 * kept in TangentZ.W */
static FORCEINLINE FVector GenerateYAxis(const FPackedNormal& TangentX, const FPackedNormal& TangentZ)
{
    return (FVector(TangentZ) ^ FVector(TangentX)) * ((FLOAT)TangentZ.Vector.W / 127.5f - 1.0f);
}

// @baa 0x0094b780
/* a vertex's binormal */
FVector FStaticMeshVertexBuffer::VertexTangentY(UINT VertexIndex) const
{
    return GenerateYAxis(GetVertex(VertexIndex)->TangentX, GetVertex(VertexIndex)->TangentZ);
}

struct FPerPolyBoneCollisionData;
/* FSkelMeshCollisionDataProvider (UnSkeletalMeshCollision.cpp): what the kDOP tree of one bone's
 * per-poly collision needs to test against a skeletal mesh component. Not in the kit. */
class FSkelMeshCollisionDataProvider
{
public:
    FSkelMeshCollisionDataProvider(USkeletalMeshComponent* InSkelComp, USkeletalMesh* InSkelMesh, INT InBoneIndex, const FPerPolyBoneCollisionData& InBoneData);

private:
    USkeletalMeshComponent* SkelComp;
    USkeletalMesh* SkelMesh;
    const FPerPolyBoneCollisionData& BoneData;
    const INT BoneIndex;
    FMatrix BoneToWorld;
    FMatrix WorldToBone;
};

// @baa 0x0094b710
FSkelMeshCollisionDataProvider::FSkelMeshCollisionDataProvider(USkeletalMeshComponent* InSkelComp, USkeletalMesh* InSkelMesh, INT InBoneIndex, const FPerPolyBoneCollisionData& InBoneData)
    : SkelComp(InSkelComp)
    , SkelMesh(InSkelComp->SkeletalMesh)
    , BoneData(InBoneData)
    , BoneIndex(InBoneIndex)
{
    BoneToWorld = SkelComp->GetBoneMatrix(BoneIndex);
    WorldToBone = BoneToWorld.InverseSafe();
}
