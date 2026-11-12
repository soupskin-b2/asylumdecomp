// UnSkeletalMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/AppMath.h"

/* UnMemory.h */
#define appMemcpy memcpy
/* FPackedNormal (UnMath.h): a unit vector packed into 4 bytes. */
struct FPackedNormal
{
    union
    {
        struct { BYTE X, Y, Z, W; } Vector;
        DWORD Packed;
    };

    /* unpack to a vector in [-1,1] (out of line here, 0x008911f0) */
    operator FVector() const;
};

/* FRigidSkinVertex (UnSkeletalMesh.h): a vertex bound to a single bone (0x24 bytes). Not in the kit. */
struct FRigidSkinVertex
{
    FVector Position;
    FPackedNormal TangentX, TangentY, TangentZ;
    FLOAT U, V;
    BYTE Bone;
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

/* FFloat16 (Float16.h): a 16-bit float. Not in the kit. */
class FFloat16
{
public:
    WORD Encoded;

    FFloat16(const FFloat16& FP16Value) { Encoded = FP16Value.Encoded; }
    FFloat16(FLOAT FP32Value) { Set(FP32Value); }
    FFloat16& operator=(const FFloat16& FP16Value) { Encoded = FP16Value.Encoded; return *this; }
    void Set(FLOAT FP32Value); /* out of line here, 0x00943460 */
};

/* FVector2DHalf (Float16Color.h): a 2D vector of 16-bit floats. Not in the kit. */
struct FVector2DHalf
{
    FFloat16 X;
    FFloat16 Y;

    FVector2DHalf(const FLOAT& InX, const FLOAT& InY) : X(InX), Y(InY) {}
};

/* the GPU-skin vertex formats (UnSkeletalMesh.h). This build keeps Position in the shared part, ahead
 * of the tangents; only the UVs' precision differs. Not in the kit. */
struct FGPUSkinVertexBase
{
    FVector Position;
    FPackedNormal TangentX;
    FPackedNormal TangentZ;
    BYTE InfluenceBones[4];
    BYTE InfluenceWeights[4];
};

struct FGPUSkinVertexFloat16Uvs : public FGPUSkinVertexBase
{
    FVector2DHalf UV;
};

struct FGPUSkinVertexFloat32Uvs : public FGPUSkinVertexBase
{
    FVector2D UV;
};

/* FVector2D's constructor (UnMath.h); the kit's FVector2D has none */
struct FVector2D_ : public FVector2D
{
    FVector2D_(FLOAT InX, FLOAT InY) { X = InX; Y = InY; }
};

/* FMatrix's basis constructor and Determinant (UnMath.h, out of line here 0x00649b30) */
struct FMatrix_ : public FMatrix
{
    FMatrix_(const FVector& InX, const FVector& InY, const FVector& InZ, const FVector& InW)
    {
        XPlane.X = InX.X; XPlane.Y = InX.Y; XPlane.Z = InX.Z; XPlane.W = 0.0f;
        YPlane.X = InY.X; YPlane.Y = InY.Y; YPlane.Z = InY.Z; YPlane.W = 0.0f;
        ZPlane.X = InZ.X; ZPlane.Y = InZ.Y; ZPlane.Z = InZ.Z; ZPlane.W = 0.0f;
        WPlane.X = InW.X; WPlane.Y = InW.Y; WPlane.Z = InW.Z; WPlane.W = 1.0f;
    }
    FLOAT Determinant() const;
};

/* UnMath.h: the handedness of a tangent basis, -1 or +1 */
static FORCEINLINE FLOAT GetBasisDeterminantSign(const FPackedNormal& XAxis, const FPackedNormal& YAxis, const FPackedNormal& ZAxis)
{
    FMatrix_ Basis(XAxis, YAxis, ZAxis, FVector(0, 0, 0));
    return (Basis.Determinant() < 0) ? -1.0f : +1.0f;
}

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

/* FSkeletalMeshVertexBuffer (UnSkeletalMesh.h): the GPU-skin vertices of a LOD; only what SetVertex uses. Not in the kit. */
class FSkeletalMeshVertexBuffer : public FVertexBuffer
{
public:
    void SetVertex(UINT VertexIndex, const FSoftSkinVertex& SrcVertex);

private:
    UBOOL bInfluencesByteSwapped;
    UBOOL bUseFullPrecisionUVs;   /* 0x1c */
    UBOOL bUsePackedPosition;
    class FStaticMeshVertexDataInterface* VertexData;
    BYTE* Data;                   /* 0x28 */
    UINT Stride;                  /* 0x2c */
    UINT NumVertices;
};

// @baa 0x0094bae0
/* convert a skin vertex to the GPU format and store it */
void FSkeletalMeshVertexBuffer::SetVertex(UINT VertexIndex, const FSoftSkinVertex& SrcVertex)
{
    FGPUSkinVertexBase* DestVertex = (FGPUSkinVertexBase*)(Data + VertexIndex * Stride);
    DestVertex->Position = SrcVertex.Position;
    DestVertex->TangentX = SrcVertex.TangentX;
    DestVertex->TangentZ = SrcVertex.TangentZ;
    // store the sign of the determinant in TangentZ.W
    DestVertex->TangentZ.Vector.W = (BYTE)appTrunc((GetBasisDeterminantSign(SrcVertex.TangentX, SrcVertex.TangentY, SrcVertex.TangentZ) + 1.0f) * 127.5f);
    appMemcpy(DestVertex->InfluenceBones, SrcVertex.InfluenceBones, sizeof(SrcVertex.InfluenceBones));
    appMemcpy(DestVertex->InfluenceWeights, SrcVertex.InfluenceWeights, sizeof(SrcVertex.InfluenceWeights));

    if (!bUseFullPrecisionUVs)
    {
        ((FGPUSkinVertexFloat16Uvs*)DestVertex)->UV = FVector2DHalf(SrcVertex.U, SrcVertex.V);
    }
    else
    {
        ((FGPUSkinVertexFloat32Uvs*)DestVertex)->UV = FVector2D_(SrcVertex.U, SrcVertex.V);
    }
}
