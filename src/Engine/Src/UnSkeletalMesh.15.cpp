// UnSkeletalMesh.cpp: 1 function
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
