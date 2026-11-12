// UnSkeletalMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Native.h"

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

/* TArray<FSectionElementInfo> with its out-of-line copy constructor (0x009673c0) and destructor (0x0094f930) */
struct FSectionElementInfoArray : public TArray<FSectionElementInfo>
{
    FSectionElementInfoArray(const FSectionElementInfoArray& Other);
    ~FSectionElementInfoArray();
};

/* FSkeletalMeshSceneProxy::FLODSectionElements (UnSkeletalRender.h): the section materials of one LOD */
struct FLODSectionElements
{
    FSectionElementInfoArray SectionElements;
};

/* TArray<FLODSectionElements>'s destructor is out of line in this build (0x00975820) */
template<> TArray<FLODSectionElements>::~TArray();
/* TArray<FLODSectionElements> with its out-of-line Copy (0x00976100) and copy constructor (0x00979f10) */
struct FLODSectionElementsArray : public TArray<FLODSectionElements>
{
    FLODSectionElementsArray() {}
    FLODSectionElementsArray(const FLODSectionElementsArray& Other);
    FLODSectionElementsArray& operator=(const FLODSectionElementsArray& Other)
    {
        Copy(Other);
        return *this;
    }
    void Copy(const TArray<FLODSectionElements>& Source);
};

/* the main thread's check (UnThreadingBase.h; 0x00715880) */
UBOOL IsInGameThread();
/* FRingBuffer (RingBuffer.h): the render command queue's storage. Not in the kit. */
class FRingBuffer
{
public:
    /* a region allocated in the buffer for one command, committed when it goes */
    class AllocationContext
    {
    public:
        AllocationContext(FRingBuffer& InRingBuffer, UINT InAllocationSize); /* 0x00542a10 */
        ~AllocationContext();                                                  /* 0x005470a0 */
        void Commit();                                                         /* 0x00542ad0 */

        BYTE* GetAllocation() const { return AllocationStart; }
        UINT GetAllocatedSize() const { return AllocationEnd - AllocationStart; }

    private:
        FRingBuffer& RingBuffer;
        BYTE* AllocationStart;
        BYTE* AllocationEnd;
    };

private:
    BYTE OpaqueRingBufferState[0x18]; /* Data, DataEnd, ReadPointer, WritePointer, bIsWriting, Alignment (size assumed) */
};

/* RenderingThread.h's globals */
extern UBOOL g_026b2194;
#define GIsThreadedRendering g_026b2194
extern FRingBuffer g_026b24c0;
#define GRenderCommandBuffer g_026b24c0
/* FRenderCommand (RenderingThread.h): a command queued for the rendering thread. Not in the kit. */
class FRenderCommand
{
public:
    virtual UINT Execute() = 0;
    virtual const TCHAR* DescribeCommand() = 0;
    virtual ~FRenderCommand() {}

    static void* operator new(size_t Size, const FRingBuffer::AllocationContext& Allocation)
    {
        return Allocation.GetAllocation();
    }
};

/* FSkipRenderCommand (RenderingThread.h): fills the end of the ring buffer when a command doesn't fit */
class FSkipRenderCommand : public FRenderCommand
{
public:
    FSkipRenderCommand(UINT InNumSkipBytes) : NumSkipBytes(InNumSkipBytes) {}
    virtual UINT Execute();
    virtual const TCHAR* DescribeCommand();

private:
    UINT NumSkipBytes;
};

/* ENQUEUE_RENDER_COMMAND (RenderingThread.h): queue a command, or run it now without a rendering thread */
#define ENQUEUE_RENDER_COMMAND(TypeName,Params) \
    { \
        check(IsInGameThread()); \
        if(GIsThreadedRendering) \
        { \
            FRingBuffer::AllocationContext AllocationContext(GRenderCommandBuffer,sizeof(TypeName)); \
            if(AllocationContext.GetAllocatedSize() < sizeof(TypeName)) \
            { \
                check(AllocationContext.GetAllocatedSize() >= sizeof(FSkipRenderCommand)); \
                new(AllocationContext) FSkipRenderCommand(AllocationContext.GetAllocatedSize()); \
                AllocationContext.Commit(); \
                new(FRingBuffer::AllocationContext(GRenderCommandBuffer,sizeof(TypeName))) TypeName Params; \
            } \
            else \
            { \
                new(AllocationContext) TypeName Params; \
            } \
        } \
        else \
        { \
            TypeName TypeName##Command Params; \
            TypeName##Command.Execute(); \
        } \
    }
/* FPrimitiveSceneProxy (PrimitiveSceneProxy.h); opaque here. Not in the kit. */
class FPrimitiveSceneProxy
{
public:
    virtual ~FPrimitiveSceneProxy();

private:
    BYTE OpaquePrimitiveSceneProxy[0xb0 - 4]; /* the primitive's scene state, up to the skeletal proxy's flags (boundary assumed) */
};

/* FSkeletalMeshSceneProxy (UnSkeletalRender.h). Not in the kit. */
class FSkeletalMeshSceneProxy : public FPrimitiveSceneProxy
{
public:
    void UpdateMorphMaterialUsage_GameThread(UBOOL bNeedsMorphUsage);

    BITFIELD OpaqueProxyFlags : 5;     /* bForceWireframe, bIsCPUSkinned and the shadow flags (order unknown) */
    BITFIELD bMorphMaterialUsage : 1;  /* 0xb0 bit 5 */
    DWORD OpaqueProxyState;            /* 0xb4 (unknown) */
    FLODSectionElementsArray LODSections; /* 0xb8 */
};

/* ENQUEUE_UNIQUE_RENDER_COMMAND_TWOPARAMETER(UpdateSkelProxyLODSectionElementsCmd, ...) */
class EURCMacro_UpdateSkelProxyLODSectionElementsCmd : public FRenderCommand
{
public:
    typedef FLODSectionElementsArray _ParamType1;
    typedef FSkeletalMeshSceneProxy* _ParamType2;

    EURCMacro_UpdateSkelProxyLODSectionElementsCmd(const _ParamType1& InNewLODSections, const _ParamType2& InSkelMeshSceneProxy); /* 0x0097ba40 */
    virtual UINT Execute()
    {
        SkelMeshSceneProxy->LODSections = NewLODSections;
        return sizeof(*this);
    }
    virtual const TCHAR* DescribeCommand();

private:
    _ParamType1 NewLODSections;
    _ParamType2 SkelMeshSceneProxy;
};

// @baa 0x0097dd50
/* use materials fit for morph targets on all the proxy's sections, or no longer need them; sections
 * whose material can't be used fall back to the default material */
void FSkeletalMeshSceneProxy::UpdateMorphMaterialUsage_GameThread(UBOOL bNeedsMorphUsage)
{
    if (bNeedsMorphUsage != bMorphMaterialUsage)
    {
        bMorphMaterialUsage = bNeedsMorphUsage;

        // a copy of the current sections, to give the rendering thread
        FLODSectionElementsArray NewLODSections;
        NewLODSections.Copy(LODSections);
        for (INT LodIndex = 0; LodIndex < NewLODSections.Num(); LodIndex++)
        {
            FLODSectionElements& LODSection = NewLODSections(LodIndex);
            for (INT SectIdx = 0; SectIdx < LODSection.SectionElements.Num(); SectIdx++)
            {
                FSectionElementInfo& SectionElement = LODSection.SectionElements(SectIdx);
                if (SectionElement.Material)
                {
                    const UBOOL bMorphUsageOk = !bMorphMaterialUsage || SectionElement.Material->CheckMaterialUsage(MATUSAGE_MorphTargets);
                    const UBOOL bSkelUsageOk = SectionElement.Material->CheckMaterialUsage(MATUSAGE_SkeletalMesh);
                    if (!bMorphUsageOk || !bSkelUsageOk)
                    {
                        SectionElement.Material = GEngine->DefaultMaterial;
                    }
                }
            }
        }

#line 3116 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalMesh.cpp"
        ENQUEUE_RENDER_COMMAND(EURCMacro_UpdateSkelProxyLODSectionElementsCmd,(NewLODSections,this));
    }
}

#line 212 "candidate.cpp"
