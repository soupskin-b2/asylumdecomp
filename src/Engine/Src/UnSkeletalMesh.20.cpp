// UnSkeletalMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* FPackedNormal (UnMath.h): a unit vector packed into 4 bytes. */
struct FPackedNormal
{
    union
    {
        struct { BYTE X, Y, Z, W; } Vector;
        DWORD Packed;
    };
};

/* FFloat16 (Float16.h): a 16-bit float. Not in the kit. */
class FFloat16
{
public:
    WORD Encoded;

    operator FLOAT() const; /* out of line here, 0x009434f0 */
};

/* FVector2DHalf (Float16Color.h): a 2D vector of 16-bit floats. Not in the kit. */
struct FVector2DHalf
{
    FFloat16 X;
    FFloat16 Y;

    operator FVector2D() const
    {
        FVector2D Result;
        Result.X = X;
        Result.Y = Y;
        return Result;
    }
};

/* the GPU-skin vertex formats (UnSkeletalMesh.h); only the UVs' precision differs. Not in the kit. */
enum { MAX_TEXCOORDS = 4 };
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
    FVector2DHalf UVs[MAX_TEXCOORDS];
};

struct FGPUSkinVertexFloat32Uvs : public FGPUSkinVertexBase
{
    FVector2D UVs[MAX_TEXCOORDS];
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
    FVector2D GetVertexUV(UINT VertexIndex, UINT UVIndex) const;

private:
    UBOOL bInfluencesByteSwapped;
    UBOOL bUseFullPrecisionUVs;   /* 0x1c */
    UBOOL bUsePackedPosition;
    class FStaticMeshVertexDataInterface* VertexData;
    BYTE* Data;                   /* 0x28 */
    UINT Stride;                  /* 0x2c */
    UINT NumVertices;
};

// @baa 0x0094b690
/* a vertex's UVs, whichever precision they are stored at */
FVector2D FSkeletalMeshVertexBuffer::GetVertexUV(UINT VertexIndex, UINT UVIndex) const
{
    if (!bUseFullPrecisionUVs)
    {
        return ((FGPUSkinVertexFloat16Uvs*)(Data + VertexIndex * Stride))->UVs[UVIndex];
    }
    else
    {
        return ((FGPUSkinVertexFloat32Uvs*)(Data + VertexIndex * Stride))->UVs[UVIndex];
    }
}
