// UnSkeletalMesh.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* UnObjBase.h: the platform being cooked for (UE3::PLATFORM_Xenon | UE3::PLATFORM_PS3 = 0xc) */
extern DWORD GCookingTarget;
enum { PLATFORM_Xenon = 4, PLATFORM_PS3 = 8 };
/* the package version that moved skeletal meshes to GPU-skin vertex data (UnObjVer.h; name assumed) */
enum { VER_USE_GPUSKIN_VERTEX_DATA = 0x1ed };
inline FArchive& operator<<(FArchive& Ar, UBOOL& B) { Ar.ByteOrderSerialize(&B, sizeof(B)); return Ar; }

/* Exchange (UnTemplate.h) */
template<class T> inline void Exchange(T& A, T& B)
{
    const T Temp = A;
    A = B;
    B = Temp;
}

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

/* TArray<FSoftSkinVertex> with its out-of-line BulkSerialize (0x00963b60) and destructor (0x00666710) */
struct FSoftVertexArray : public TArray<FSoftSkinVertex>
{
    ~FSoftVertexArray();
    void BulkSerialize(FArchive& Ar);
};

/* the part of a GPU-skin vertex both UV precisions share (UnSkeletalMesh.h). Not in the kit. */
struct FGPUSkinVertexBase
{
    FVector Position;
    FPackedNormal TangentX;
    FPackedNormal TangentZ;
    BYTE InfluenceBones[4];
    BYTE InfluenceWeights[4];
};

class FResourceArrayInterface;
/* FStaticMeshVertexDataInterface (StaticMeshVertex.h): the CPU copy of a vertex buffer's data. Not in the kit. */
class FStaticMeshVertexDataInterface
{
public:
    virtual ~FStaticMeshVertexDataInterface() {}
    virtual void ResizeBuffer(UINT NumVertices) = 0;
    virtual UINT GetStride() const = 0;
    virtual BYTE* GetDataPointer() = 0;
    virtual UINT GetNumVertices() const = 0;
    virtual FResourceArrayInterface* GetResourceArray() = 0;
    virtual void Serialize(FArchive& Ar) = 0;
};

/* FRenderResource (RenderResource.h). Not in the kit. */
class FRenderResource
{
public:
    virtual ~FRenderResource();

private:
    /* TLinkedList<FRenderResource*> ResourceLink */
    FRenderResource* ResourceLinkElement;
    void* ResourceLinkNext;
    void* ResourceLinkPrevLink;
    UBOOL bInitialized;
};

/* FVertexBuffer (RenderResource.h). Not in the kit. */
class FVertexBuffer : public FRenderResource
{
public:
    void* VertexBufferRHI; /* FVertexBufferRHIRef */
};

/* FSkeletalMeshVertexBuffer (UnSkeletalMesh.h): the GPU-skin vertices of a LOD. Not in the kit. */
class FSkeletalMeshVertexBuffer : public FVertexBuffer
{
public:
    void Init(const TArray<FSoftSkinVertex>& InVertices); /* 0x009764f0 */
    void AllocateData();                                  /* 0x0096e6c0 */

    UINT GetNumVertices() const { return NumVertices; }

    friend FArchive& operator<<(FArchive& Ar, FSkeletalMeshVertexBuffer& VertexBuffer);

private:
    UBOOL bInfluencesByteSwapped;
    UBOOL bUseFullPrecisionUVs;
    UBOOL bUsePackedPosition;
    FStaticMeshVertexDataInterface* VertexData;
    BYTE* Data;
    UINT Stride;
    UINT NumVertices;
};

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

/* FPackedNormal_0094b780 (UnMath.h): a unit vector packed into 4 bytes. */
struct FPackedNormal_0094b780
{
    union
    {
        struct { BYTE X, Y, Z, W; } Vector;
        DWORD Packed;
    };

    /* unpack to a vector in [-1,1] (out of line here, 0x008911f0) */
    operator FVector() const;
};

/* FFloat16 (Float16.h): a 16-bit float. Not in the kit. */
class FFloat16
{
public:
    WORD Encoded;

    FFloat16(FLOAT FP32Value) { Set(FP32Value); }
    void Set(FLOAT FP32Value); /* out of line here, 0x00943460 */
    operator FLOAT() const;    /* out of line here, 0x009434f0 */
};

/* FVector2DHalf (Float16Color.h): a 2D vector of 16-bit floats. Not in the kit. */
struct FVector2DHalf
{
    FFloat16 X;
    FFloat16 Y;

    FVector2DHalf(const FLOAT& InX, const FLOAT& InY) : X(InX), Y(InY) {}
    FVector2DHalf(const FVector2D& Vector2D) : X(Vector2D.X), Y(Vector2D.Y) {}
};

enum { MAX_TEXCOORDS = 4 };
/* the static mesh vertex formats (StaticMeshVertex.h); only the UVs' precision differs. Not in the kit. */
struct FStaticMeshFullVertex
{
    FPackedNormal_0094b780 TangentX;
    FPackedNormal_0094b780 TangentZ;     /* W holds the sign of the basis determinant */
    DWORD OpaqueVertexExtra;    /* 4 bytes this build adds ahead of the UVs (unknown) */
};

struct FStaticMeshFullVertexFloat16UVs : public FStaticMeshFullVertex
{
    FVector2DHalf UVs[MAX_TEXCOORDS];
};

struct FStaticMeshFullVertexFloat32UVs : public FStaticMeshFullVertex
{
    FVector2D UVs[MAX_TEXCOORDS];
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

/* UnMath.h's FVector operators the kit lacks */
struct FVector_ : public FVector
{
    FVector_(const FVector& V) : FVector(V) {}
    FVector_(FLOAT InX, FLOAT InY, FLOAT InZ) : FVector(InX, InY, InZ) {}

    /* cross product */
    FVector_ operator^(const FVector& V) const
    {
        return FVector_(Y * V.Z - Z * V.Y, Z * V.X - X * V.Z, X * V.Y - Y * V.X);
    }
    FVector operator*(FLOAT Scale) const
    {
        return FVector(X * Scale, Y * Scale, Z * Scale);
    }
};

/* UnMath.h: the binormal of a tangent basis, rebuilt from TangentX, TangentZ and the basis sign
 * kept in TangentZ.W */
static FORCEINLINE FVector GenerateYAxis(const FPackedNormal_0094b780& TangentX, const FPackedNormal_0094b780& TangentZ)
{
    return (FVector_(TangentZ) ^ FVector(TangentX)) * ((FLOAT)TangentZ.Vector.W / 127.5f - 1.0f);
}

// @baa 0x0094b780
/* a vertex's binormal */
FVector FStaticMeshVertexBuffer::VertexTangentY(UINT VertexIndex) const
{
    return GenerateYAxis(GetVertex(VertexIndex)->TangentX, GetVertex(VertexIndex)->TangentZ);
}

/* FMatrix::Inverse (UnMath.h); the kit's FMatrix has none (out of line, 0x006e1510) */
struct FMatrix_ : public FMatrix
{
    FMatrix Inverse() const;
};

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
    WorldToBone = ((FMatrix_&)BoneToWorld).Inverse();
}
