// UnSkeletalMesh.cpp: 4 functions
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

/* the placement forms of new and delete (<new>) */
class UMaterialInterface;
/* FSkeletalMeshSceneProxy::FSectionElementInfo (UnSkeletalRender.h): the material a section is drawn
 * with. Not in the kit. */
struct FSectionElementInfo
{
    FSectionElementInfo(UMaterialInterface* InMaterial, UBOOL bInEnableShadowCasting)
        : Material(InMaterial)
        , bEnableShadowCasting(bInEnableShadowCasting)
    {}

    UMaterialInterface* Material;
    UBOOL bEnableShadowCasting;
};

/* TArray<FSectionElementInfo> with its copy constructor and Copy */
struct FSectionElementInfoArray : public TArray<FSectionElementInfo>
{
    ~FSectionElementInfoArray();
};

/* FSkeletalMeshSceneProxy::FLODSectionElements (UnSkeletalRender.h): the section materials of one LOD */
struct FLODSectionElements
{
    FSectionElementInfoArray SectionElements;
};

/* TArray<FLODSectionElements> with its out-of-line copy constructor (0x00979f10) */
struct FLODSectionElementsArray : public TArray<FLODSectionElements>
{
    FLODSectionElementsArray(const FLODSectionElementsArray& Other);
    ~FLODSectionElementsArray(); /* 0x00975820 */
};

class FSkeletalMeshSceneProxy;
/* FRenderCommand (RenderingThread.h): a command queued for the rendering thread. Not in the kit. */
class FRenderCommand
{
public:
    virtual UINT Execute() = 0;
    virtual const TCHAR* DescribeCommand() = 0;
    virtual ~FRenderCommand() {}
};

/* ENQUEUE_UNIQUE_RENDER_COMMAND_TWOPARAMETER(UpdateSkelProxyLODSectionElementsCmd, ...) in
 * FSkeletalMeshSceneProxy::UpdateMorphMaterialUsage_GameThread (UnSkeletalMesh.cpp): gives the proxy
 * its new section materials */
class EURCMacro_UpdateSkelProxyLODSectionElementsCmd : public FRenderCommand
{
public:
    typedef FLODSectionElementsArray _ParamType1;
    typedef FSkeletalMeshSceneProxy* _ParamType2;

    EURCMacro_UpdateSkelProxyLODSectionElementsCmd(const _ParamType1& InNewLODSections, const _ParamType2& InSkelMeshSceneProxy);
    virtual UINT Execute();
    virtual const TCHAR* DescribeCommand();

private:
    _ParamType1 NewLODSections;
    _ParamType2 SkelMeshSceneProxy;
};

// @baa 0x0097ba40
EURCMacro_UpdateSkelProxyLODSectionElementsCmd::EURCMacro_UpdateSkelProxyLODSectionElementsCmd(const _ParamType1& InNewLODSections, const _ParamType2& InSkelMeshSceneProxy)
    : NewLODSections(InNewLODSections)
    , SkelMeshSceneProxy(InSkelMeshSceneProxy)
{
}

/* FDecalInteraction (UnDecalRenderData.h): a decal on a primitive; only its sort key is needed here.
 * Not in the kit. */
class FDecalInteraction
{
public:
    BYTE OpaqueDecalInteraction[0xcc]; /* Decal, RenderData and the start of DecalState (layout not needed here) */
    INT SortOrder;                     /* 0xcc: DecalState.SortOrder (name assumed) */
};

/* IMPLEMENT_COMPARE_POINTER(FDecalInteraction, UnSkeletalMesh, ...): orders a skeletal mesh proxy's decals by
 * sort order before drawing them (FSkeletalMeshSceneProxy::DrawDynamicElements, 0096e760) */
class CompareUnSkeletalMeshFDecalInteractionPointer
{
public:
    static inline INT Compare(FDecalInteraction* A, FDecalInteraction* B)
    {
        return (A->SortOrder > B->SortOrder) ? 1 : -1;
    }
};

// @baa 0x00959b90
template void Sort<FDecalInteraction*, CompareUnSkeletalMeshFDecalInteractionPointer>(FDecalInteraction** First, INT Num);

// @baa 0x00951e60
/* The detailed info of the SkeletalMeshComponent, or "No_SkeletalMeshComponent". */
FString ASkeletalMeshActor::GetDetailedInfoInternal()
{
    FString Result;
    if (SkeletalMeshComponent != NULL)
    {
        Result = SkeletalMeshComponent->GetDetailedInfoInternal();
    }
    else
    {
        Result = TEXT("No_SkeletalMeshComponent");
    }
    return Result;
}
