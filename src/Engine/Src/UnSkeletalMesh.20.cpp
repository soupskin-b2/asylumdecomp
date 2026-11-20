// UnSkeletalMesh.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/SkeletalRender.h"

/* the GPU-skin vertex formats (UnSkeletalMesh.h); only the UVs' precision differs. Not in the kit. */
// @baa 0x0094b690
/* a vertex's UVs, whichever precision they are stored at */
FVector2D FSkeletalMeshVertexBuffer::GetVertexUV(UINT VertexIndex, UINT UVIndex) const
{
    if (!bUseFullPrecisionUVs)
    {
        return ((TGPUSkinVertexFloat16Uvs<1>*)(Data + VertexIndex * Stride))->UVs[UVIndex];
    }
    else
    {
        return ((TGPUSkinVertexFloat32Uvs<1>*)(Data + VertexIndex * Stride))->UVs[UVIndex];
    }
}

/* the placement forms of new and delete (<new>) */
class UMaterialInterface;
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
