/* The dynamically bound RHI (UE3's DynamicRHI.h and RHIMethods.h) as this build has it: GDynamicRHI
 * (0x026b0d94) is the D3D9 RHI (vtable 0x02128210) or the null RHI (0x02044750); both have 173 slots.
 *
 * How the slots were placed: the resource reference counting at 0x1c8-0x2a8 is exact (each group's
 * 19 overloads in reverse order of ERHIResourceTypes, as MSVC lays out overloads; every Create* method
 * was checked to AddResourceRef its own type). The methods before it follow UE3 2013's RHIMethods.h
 * order with the methods this 2009 build doesn't have left out; every one was checked against the
 * stack bytes its D3D9 implementation pops, and most against what it calls (the D3D9 device method,
 * or the null RHI's body). A method whose parameter list differs from UE3 2013's says so. Slots that
 * nothing identifies yet are placeholders (vf_XXX), typed by their stack size; rename one when you
 * know it.
 *
 * Opt-in: #include "ue3/RHI.h" after Classes.h. It declares g_026b0d94 as FDynamicRHI* (GDynamicRHI);
 * a source that includes it can't also declare g_026b0d94 with another type. */
#ifndef UE3_RHI_H
#define UE3_RHI_H

/* The resource types, in this build's order (UE3 2013 adds the D3D11 shader types, Texture2DArray,
 * Texture3D and SharedTexture2DArray). */
enum ERHIResourceTypes
{
    RRT_None,
    RRT_SamplerState,
    RRT_RasterizerState,
    RRT_DepthState,
    RRT_StencilState,
    RRT_BlendState,
    RRT_VertexDeclaration,
    RRT_VertexShader,
    RRT_PixelShader,
    RRT_BoundShaderState,
    RRT_IndexBuffer,
    RRT_VertexBuffer,
    RRT_Surface,
    RRT_Texture,
    RRT_Texture2D,
    RRT_TextureCube,
    RRT_SharedTexture2D,
    RRT_SharedMemoryResource,
    RRT_OcclusionQuery,
    RRT_Viewport,
};

enum ECubeFace
{
    CubeFace_PosX = 0,
    CubeFace_NegX,
    CubeFace_PosY,
    CubeFace_NegY,
    CubeFace_PosZ,
    CubeFace_NegZ,
    CubeFace_MAX
};

/* Only passed by reference or pointer here; not laid out yet. */
struct FSamplerStateInitializerRHI;
struct FRasterizerStateInitializerRHI;
struct FDepthStateInitializerRHI;
struct FStencilStateInitializerRHI;
struct FBlendStateInitializerRHI;
struct FVertexElement;
struct FResourceArrayInterface;
struct FResourceBulkDataInterface;
struct FResolveParams;
struct FUpdateTextureRegion2D;
struct FCopyTextureRegion2D;
struct FFloat16Color;
struct FScreenResolutionRHI;
typedef TArray<FVertexElement> FVertexDeclarationElementList;
typedef TArray<FScreenResolutionRHI> FScreenResolutionArray;

/* A resource handle: a distinct type per resource, used only through pointers. */
template<ERHIResourceTypes ResourceType> class TDynamicRHIResource {};
template<ERHIResourceTypes ResourceType> class TDynamicRHIResourceReference;

#define ENUM_RHI_RESOURCE_TYPES(M) \
    M(SamplerState, None) \
    M(RasterizerState, None) \
    M(DepthState, None) \
    M(StencilState, None) \
    M(BlendState, None) \
    M(VertexDeclaration, None) \
    M(VertexShader, None) \
    M(PixelShader, None) \
    M(BoundShaderState, None) \
    M(IndexBuffer, None) \
    M(VertexBuffer, None) \
    M(Surface, None) \
    M(Texture, None) \
    M(Texture2D, Texture) \
    M(TextureCube, Texture) \
    M(SharedTexture2D, Texture2D) \
    M(SharedMemoryResource, None) \
    M(OcclusionQuery, None) \
    M(Viewport, None)

#define DEFINE_DYNAMICRHI_REFERENCE_TYPE(Type, ParentType) \
    template<> class TDynamicRHIResource<RRT_##Type> : public TDynamicRHIResource<RRT_##ParentType> {}; \
    typedef TDynamicRHIResource<RRT_##Type>* F##Type##RHIParamRef; \
    typedef TDynamicRHIResourceReference<RRT_##Type> F##Type##RHIRef;
ENUM_RHI_RESOURCE_TYPES(DEFINE_DYNAMICRHI_REFERENCE_TYPE)
#undef DEFINE_DYNAMICRHI_REFERENCE_TYPE

/* The interface the D3D9 and null RHIs implement (slots in comments). */
class FDynamicRHI
{
public:
    virtual ~FDynamicRHI() {} /* 0x000 */

    /* resources */
    virtual FSamplerStateRHIRef CreateSamplerState(const FSamplerStateInitializerRHI& Initializer) = 0; /* 0x004 */
    virtual FRasterizerStateRHIRef CreateRasterizerState(const FRasterizerStateInitializerRHI& Initializer) = 0; /* 0x008 */
    virtual FDepthStateRHIRef CreateDepthState(const FDepthStateInitializerRHI& Initializer) = 0; /* 0x00c */
    virtual FStencilStateRHIRef CreateStencilState(const FStencilStateInitializerRHI& Initializer) = 0; /* 0x010 */
    virtual FBlendStateRHIRef CreateBlendState(const FBlendStateInitializerRHI& Initializer) = 0; /* 0x014 */
    virtual FVertexDeclarationRHIRef CreateVertexDeclaration(const FVertexDeclarationElementList& Elements) = 0; /* 0x018 */
    virtual FPixelShaderRHIRef CreatePixelShader(const TArray<BYTE>& Code) = 0; /* 0x01c */
    virtual FVertexShaderRHIRef CreateVertexShader(const TArray<BYTE>& Code) = 0; /* 0x020 */
    /* 2013 adds a DWORD flags parameter */
    virtual FBoundShaderStateRHIRef CreateBoundShaderState(FVertexDeclarationRHIParamRef VertexDeclaration, DWORD* StreamStrides, FVertexShaderRHIParamRef VertexShader, FPixelShaderRHIParamRef PixelShader) = 0; /* 0x024 */
    virtual FIndexBufferRHIRef CreateIndexBuffer(UINT Stride, UINT Size, FResourceArrayInterface* ResourceArray, DWORD InUsage) = 0; /* 0x028 */
    /* sets OutNumInstances to 1 and calls CreateIndexBuffer on D3D9 (2013 adds PreallocateInstanceCount) */
    virtual FIndexBufferRHIRef CreateInstancedIndexBuffer(UINT Stride, UINT Size, DWORD InUsage, UINT& OutNumInstances) = 0; /* 0x02c */
    virtual void* LockIndexBuffer(FIndexBufferRHIParamRef IndexBuffer, UINT Offset, UINT Size) = 0; /* 0x030 */
    virtual void UnlockIndexBuffer(FIndexBufferRHIParamRef IndexBuffer) = 0; /* 0x034 */
    virtual FVertexBufferRHIRef CreateVertexBuffer(UINT Size, FResourceArrayInterface* ResourceArray, DWORD InUsage) = 0; /* 0x038 */
    virtual void* LockVertexBuffer(FVertexBufferRHIParamRef VertexBuffer, UINT Offset, UINT SizeRHI, UBOOL bReadOnlyInsteadOfWriteOnly) = 0; /* 0x03c */
    virtual void UnlockVertexBuffer(FVertexBufferRHIParamRef VertexBuffer) = 0; /* 0x040 */
    virtual UBOOL vf_044(INT, INT) = 0; /* 0x044: FALSE on D3D9 (perhaps GetTextureMemoryStats) */
    /* seven parameters here (2013 has the first six) */
    virtual FTexture2DRHIRef CreateTexture2D(UINT SizeX, UINT SizeY, BYTE Format, UINT NumMips, DWORD Flags, FResourceBulkDataInterface* BulkData, INT) = 0; /* 0x048 */
    virtual TDynamicRHIResourceReference<RRT_None> vf_04c(INT, INT) = 0; /* 0x04c: returns a NULL reference on D3D9 */
    virtual void* LockTexture2D(FTexture2DRHIParamRef Texture, UINT MipIndex, UBOOL bIsDataBeingWrittenTo, UINT& DestStride, UBOOL bLockWithinMiptail) = 0; /* 0x050 */
    virtual void UnlockTexture2D(FTexture2DRHIParamRef Texture, UINT MipIndex, UBOOL bLockWithinMiptail) = 0; /* 0x054 */
    virtual UBOOL UpdateTexture2D(FTexture2DRHIParamRef Texture, UINT MipIndex, UINT n, const FUpdateTextureRegion2D* rects, UINT pitch, UINT sbpp, BYTE* psrc) = 0; /* 0x058 */
    virtual INT vf_05c(INT, INT) = 0; /* 0x05c: takes two textures */
    virtual FTexture2DRHIRef GetResolveTarget(FSurfaceRHIParamRef SurfaceRHI) = 0; /* 0x060 */
    virtual INT GetMipTailIdx(FTexture2DRHIParamRef Texture) = 0; /* 0x064 */
    virtual void CopyTexture2D(FTexture2DRHIParamRef DstTexture, UINT MipIdx, INT BaseSizeX, INT BaseSizeY, INT Format, const TArray<FCopyTextureRegion2D>& Regions) = 0; /* 0x068 */
    virtual void CopyMipToMipAsync(FTexture2DRHIParamRef SrcTexture, INT SrcMipIndex, FTexture2DRHIParamRef DestTexture, INT DestMipIndex, INT Size, FThreadSafeCounter& Counter) = 0; /* 0x06c */
    virtual void SelectiveCopyMipData(FTexture2DRHIParamRef Texture, BYTE* Src, BYTE* Dst, UINT MemSize, UINT MipIdx) = 0; /* 0x070 */
    virtual void FinalizeAsyncMipCopy(FTexture2DRHIParamRef SrcTexture, INT SrcMipIndex, FTexture2DRHIParamRef DestTexture, INT DestMipIndex) = 0; /* 0x074 */
    /* one parameter here (2013 adds the memory type first) */
    virtual FSharedMemoryResourceRHIRef CreateSharedMemory(SIZE_T Size) = 0; /* 0x078 */
    virtual FSharedTexture2DRHIRef CreateSharedTexture2D(UINT SizeX, UINT SizeY, BYTE Format, UINT NumMips, FSharedMemoryResourceRHIParamRef SharedMemory, DWORD Flags) = 0; /* 0x07c */
    virtual FTextureCubeRHIRef CreateTextureCube(UINT Size, BYTE Format, UINT NumMips, DWORD Flags, FResourceBulkDataInterface* BulkData) = 0; /* 0x080 */
    virtual void* LockTextureCubeFace(FTextureCubeRHIParamRef Texture, UINT FaceIndex, UINT MipIndex, UBOOL bIsDataBeingWrittenTo, UINT& DestStride, UBOOL bLockWithinMiptail) = 0; /* 0x084 */
    virtual void UnlockTextureCubeFace(FTextureCubeRHIParamRef Texture, UINT FaceIndex, UINT MipIndex, UBOOL bLockWithinMiptail) = 0; /* 0x088 */
    virtual FSurfaceRHIRef CreateTargetableSurface(UINT SizeX, UINT SizeY, BYTE Format, FTexture2DRHIParamRef ResolveTargetTexture, DWORD Flags, const TCHAR* UsageStr) = 0; /* 0x08c */
    virtual FSurfaceRHIRef CreateTargetableCubeSurface(UINT SizeX, BYTE Format, FTextureCubeRHIParamRef ResolveTargetTexture, ECubeFace CubeFace, DWORD Flags, const TCHAR* UsageStr) = 0; /* 0x090 */
    virtual void CopyToResolveTarget(FSurfaceRHIParamRef SourceSurface, UBOOL bKeepOriginalSurface, const FResolveParams& ResolveParams) = 0; /* 0x094 */
    virtual void CopyFromResolveTarget(FSurfaceRHIParamRef DestSurface) = 0; /* 0x098 */
    virtual void CopyFromResolveTargetFast(FSurfaceRHIParamRef DestSurface) = 0; /* 0x09c */
    virtual void CopyFromResolveTargetRectFast(FSurfaceRHIParamRef DestSurface, FLOAT X1, FLOAT Y1, FLOAT X2, FLOAT Y2) = 0; /* 0x0a0 */
    /* the last two parameters here: the cube face (a switch) and a flag D3D9 tests as a byte
     * (2013 passes FReadSurfaceDataFlags instead) */
    virtual void ReadSurfaceData(FSurfaceRHIParamRef Surface, UINT MinX, UINT MinY, UINT MaxX, UINT MaxY, TArray<BYTE>& OutData, ECubeFace CubeFace, BYTE Flag) = 0; /* 0x0a4 */
    virtual void ReadSurfaceFloatData(FSurfaceRHIParamRef Surface, UINT MinX, UINT MinY, UINT MaxX, UINT MaxY, TArray<FFloat16Color>& OutData, ECubeFace CubeFace) = 0; /* 0x0a8 */
    virtual FOcclusionQueryRHIRef CreateOcclusionQuery() = 0; /* 0x0ac */
    virtual void ResetOcclusionQuery(FOcclusionQueryRHIParamRef OcclusionQuery) = 0; /* 0x0b0 */
    virtual UBOOL GetOcclusionQueryResult(FOcclusionQueryRHIParamRef OcclusionQuery, DWORD& OutNumPixels, UBOOL bWait) = 0; /* 0x0b4 */

    /* viewports */
    virtual void BeginDrawingViewport(FViewportRHIParamRef Viewport) = 0; /* 0x0b8 */
    virtual void EndDrawingViewport(FViewportRHIParamRef Viewport, UBOOL bPresent, UBOOL bLockToVsync) = 0; /* 0x0bc */
    virtual FSurfaceRHIRef GetViewportBackBuffer(FViewportRHIParamRef Viewport) = 0; /* 0x0c0 */
    virtual void BeginScene() = 0; /* 0x0c4 */
    virtual void EndScene() = 0; /* 0x0c8 */
    virtual DWORD GetGPUFrameCycles() = 0; /* 0x0cc */
    virtual DWORD GetAvailableTextureMemory() = 0; /* 0x0d0 */
    virtual FViewportRHIRef CreateViewport(void* WindowHandle, UINT SizeX, UINT SizeY, UBOOL bIsFullscreen) = 0; /* 0x0d4 */
    virtual void ResizeViewport(FViewportRHIParamRef Viewport, UINT SizeX, UINT SizeY, UBOOL bIsFullscreen) = 0; /* 0x0d8 */
    virtual void Tick(FLOAT DeltaTime) = 0; /* 0x0dc */

    /* state */
    /* six parameters here (2013 adds Offset after Stride) */
    virtual void SetStreamSource(UINT StreamIndex, FVertexBufferRHIParamRef VertexBuffer, UINT Stride, UBOOL bUseInstanceIndex, UINT NumVerticesPerInstance, UINT NumInstances) = 0; /* 0x0e0 */
    virtual void SetRasterizerState(FRasterizerStateRHIParamRef NewState) = 0; /* 0x0e4 */
    virtual void SetRasterizerStateImmediate(const FRasterizerStateInitializerRHI& ImmediateState) = 0; /* 0x0e8 */
    virtual void SetViewport(UINT MinX, UINT MinY, FLOAT MinZ, UINT MaxX, UINT MaxY, FLOAT MaxZ) = 0; /* 0x0ec */
    virtual void SetScissorRect(UBOOL bEnable, UINT MinX, UINT MinY, UINT MaxX, UINT MaxY) = 0; /* 0x0f0 */
    virtual void SetDepthBoundsTest(UBOOL bEnable, const FVector4& ClipSpaceNearPos, const FVector4& ClipSpaceFarPos) = 0; /* 0x0f4 */
    virtual void SetBoundShaderState(FBoundShaderStateRHIParamRef BoundShaderState) = 0; /* 0x0f8 */
    /* six parameters here (2013 has nine: MipBias, LargestMip, SmallestMip, bForceLinearMinFilter after NewTexture) */
    virtual void SetSamplerState(FPixelShaderRHIParamRef PixelShader, UINT TextureIndex, UINT SamplerIndex, FSamplerStateRHIParamRef NewState, FTextureRHIParamRef NewTexture, FLOAT MipBias) = 0; /* 0x0fc */
    virtual void ClearSamplerBias() = 0; /* 0x100: resets every sampler's D3D9 mip bias */
    /* 2013 adds a ParamIndex parameter to these two */
    virtual void SetVertexShaderParameter(FVertexShaderRHIParamRef VertexShader, UINT BufferIndex, UINT BaseIndex, UINT NumBytes, const void* NewValue) = 0; /* 0x104 */
    virtual void SetPixelShaderParameter(FPixelShaderRHIParamRef PixelShader, UINT BufferIndex, UINT BaseIndex, UINT NumBytes, const void* NewValue) = 0; /* 0x108 */
    /* three parameters here (2013 adds BufferIndex) */
    virtual void SetPixelShaderBoolParameter(FPixelShaderRHIParamRef PixelShader, UINT BaseIndex, UBOOL NewValue) = 0; /* 0x10c */
    virtual void SetRenderTargetBias(FLOAT ColorBias) = 0; /* 0x110 */
    /* sets the view's vertex and pixel shader constants (2013 takes only the view) */
    virtual void SetViewParameters(const FSceneView* View, const FMatrix& ViewProjectionMatrix, const FVector4& ViewOrigin) = 0; /* 0x114 */
    virtual void SetViewParametersWithOverrides(const FSceneView* View, const FMatrix& ViewProjectionMatrix, const FVector4& DiffuseOverride, const FVector4& SpecularOverride) = 0; /* 0x118 */
    virtual void SetShaderRegisterAllocation(UINT NumVertexShaderRegisters, UINT NumPixelShaderRegisters) = 0; /* 0x11c */
    virtual void ReduceTextureCachePenalty(FPixelShaderRHIParamRef PixelShader) = 0; /* 0x120 */
    virtual void SetDepthState(FDepthStateRHIParamRef NewState) = 0; /* 0x124 */
    virtual void SetStencilState(FStencilStateRHIParamRef NewState) = 0; /* 0x128 */
    virtual void SetBlendState(FBlendStateRHIParamRef NewState) = 0; /* 0x12c */
    virtual void SetRenderTarget(FSurfaceRHIParamRef NewRenderTarget, FSurfaceRHIParamRef NewDepthStencilTarget) = 0; /* 0x130 */
    virtual void SetMRTRenderTarget(FSurfaceRHIParamRef NewRenderTarget, UINT TargetIndex) = 0; /* 0x134 */
    virtual void SetColorWriteEnable(UBOOL bEnable) = 0; /* 0x138 */
    virtual void SetColorWriteMask(UINT ColorWriteMask) = 0; /* 0x13c */
    virtual void BeginHiStencilRecord(UBOOL bCompareFunctionEqual, UINT RefValue) = 0; /* 0x140 */
    virtual void BeginHiStencilPlayback(UBOOL bFlush) = 0; /* 0x144 */
    virtual void EndHiStencil() = 0; /* 0x148 */
    virtual void BeginOcclusionQuery(FOcclusionQueryRHIParamRef OcclusionQuery) = 0; /* 0x14c */
    virtual void EndOcclusionQuery(FOcclusionQueryRHIParamRef OcclusionQuery) = 0; /* 0x150 */

    /* drawing */
    virtual void DrawPrimitive(UINT PrimitiveType, UINT BaseVertexIndex, UINT NumPrimitives) = 0; /* 0x154 */
    virtual void DrawIndexedPrimitive(FIndexBufferRHIParamRef IndexBuffer, UINT PrimitiveType, INT BaseVertexIndex, UINT MinIndex, UINT NumVertices, UINT StartIndex, UINT NumPrimitives) = 0; /* 0x158 */
    /* calls DrawIndexedPrimitive on D3D9 (2013 adds PlatformMeshData) */
    virtual void DrawIndexedPrimitive_PreVertexShaderCulling(FIndexBufferRHIParamRef IndexBuffer, UINT PrimitiveType, INT BaseVertexIndex, UINT MinIndex, UINT NumVertices, UINT StartIndex, UINT NumPrimitives, const FMatrix& LocalToWorld) = 0; /* 0x15c */
    virtual void BeginDrawPrimitiveUP(UINT PrimitiveType, UINT NumPrimitives, UINT NumVertices, UINT VertexDataStride, void*& OutVertexData) = 0; /* 0x160 */
    virtual void EndDrawPrimitiveUP() = 0; /* 0x164 */
    virtual void DrawPrimitiveUP(UINT PrimitiveType, UINT NumPrimitives, const void* VertexData, UINT VertexDataStride) = 0; /* 0x168 */
    virtual void BeginDrawIndexedPrimitiveUP(UINT PrimitiveType, UINT NumPrimitives, UINT NumVertices, UINT VertexDataStride, void*& OutVertexData, UINT MinVertexIndex, UINT NumIndices, UINT IndexDataStride, void*& OutIndexData) = 0; /* 0x16c */
    virtual void EndDrawIndexedPrimitiveUP() = 0; /* 0x170 */
    virtual void DrawIndexedPrimitiveUP(UINT PrimitiveType, UINT MinVertexIndex, UINT NumVertices, UINT NumPrimitives, const void* IndexData, UINT IndexDataStride, const void* VertexData, UINT VertexDataStride) = 0; /* 0x174 */
    /* two parameters each; likely DrawSpriteParticles and DrawSubUVParticles (2013 has them here,
     * taking one mesh batch) */
    virtual void vf_178(INT, INT) = 0; /* 0x178 */
    virtual void vf_17c(INT, INT) = 0; /* 0x17c */
    virtual void Clear(UBOOL bClearColor, const FLinearColor& Color, UBOOL bClearDepth, FLOAT Depth, UBOOL bClearStencil, DWORD Stencil) = 0; /* 0x180 */

    /* the rest (empty or trivial on D3D9) */
    virtual void KickCommandBuffer() = 0; /* 0x184 */
    virtual void BlockUntilGPUIdle() = 0; /* 0x188 */
    virtual void SuspendRendering() = 0; /* 0x18c */
    virtual void ResumeRendering() = 0; /* 0x190 */
    virtual UBOOL IsRenderingSuspended() = 0; /* 0x194 */
    virtual void vf_198() = 0; /* 0x198 */
    virtual void vf_19c() = 0; /* 0x19c */
    virtual void vf_1a0(INT) = 0; /* 0x1a0 */
    virtual void vf_1a4(INT, INT, INT) = 0; /* 0x1a4 */
    virtual void vf_1a8(INT, INT) = 0; /* 0x1a8: perhaps RestoreColorDepth(ColorTexture, DepthTexture) */
    virtual void vf_1ac(INT, INT, INT) = 0; /* 0x1ac */
    virtual UBOOL GetAvailableResolutions(FScreenResolutionArray& Resolutions, UBOOL bIgnoreRefreshRate) = 0; /* 0x1b0 */
    virtual void GetSupportedResolution(UINT& Width, UINT& Height) = 0; /* 0x1b4 */
    virtual void vf_1b8(INT, INT) = 0; /* 0x1b8 */
    virtual void vf_1bc(INT, INT) = 0; /* 0x1bc */
    virtual UBOOL IsBusyTexture2D(FTexture2DRHIParamRef Texture, UINT MipIndex) = 0; /* 0x1c0 */
    virtual UBOOL IsBusyVertexBuffer(FVertexBufferRHIParamRef VertexBuffer) = 0; /* 0x1c4 */

    /* reference counting: AddResourceRef 0x1c8-0x210, RemoveResourceRef 0x214-0x25c, GetRefCount
     * 0x260-0x2a8, each group from Viewport down to SamplerState (AddResourceRef(Texture2D) is 0x1dc,
     * RemoveResourceRef(OcclusionQuery) 0x218) */
#define DEFINE_DYNAMICRHI_REFCOUNTING_FORTYPE(Type, ParentType) \
    virtual void AddResourceRef(TDynamicRHIResource<RRT_##Type>* Reference) = 0; \
    virtual void RemoveResourceRef(TDynamicRHIResource<RRT_##Type>* Reference) = 0; \
    virtual DWORD GetRefCount(TDynamicRHIResource<RRT_##Type>* Reference) = 0;
    ENUM_RHI_RESOURCE_TYPES(DEFINE_DYNAMICRHI_REFCOUNTING_FORTYPE)
#undef DEFINE_DYNAMICRHI_REFCOUNTING_FORTYPE

    virtual void vf_2ac(INT, INT, INT, INT, INT, INT) = 0; /* 0x2ac */
    virtual void vf_2b0(INT, INT) = 0; /* 0x2b0 */
};

extern FDynamicRHI* g_026b0d94;
#define GDynamicRHI g_026b0d94

/* A counted reference to an RHI resource (FVertexBufferRHIRef, ...): the counting goes through
 * GDynamicRHI, inline, as UE3's DynamicRHI.h has it. */
template<ERHIResourceTypes ResourceType>
class TDynamicRHIResourceReference
{
public:
    typedef TDynamicRHIResource<ResourceType>* ReferenceType;

    TDynamicRHIResourceReference() : Reference(NULL) {}
    TDynamicRHIResourceReference(ReferenceType InReference)
    {
        Reference = InReference;
        if (Reference)
        {
            GDynamicRHI->AddResourceRef(Reference);
        }
    }
    TDynamicRHIResourceReference(const TDynamicRHIResourceReference& Copy)
    {
        Reference = Copy.Reference;
        if (Reference)
        {
            GDynamicRHI->AddResourceRef(Reference);
        }
    }
    ~TDynamicRHIResourceReference()
    {
        if (Reference)
        {
            GDynamicRHI->RemoveResourceRef(Reference);
        }
    }
    TDynamicRHIResourceReference& operator=(ReferenceType InReference)
    {
        ReferenceType OldReference = Reference;
        if (InReference)
        {
            GDynamicRHI->AddResourceRef(InReference);
        }
        Reference = InReference;
        if (OldReference)
        {
            GDynamicRHI->RemoveResourceRef(OldReference);
        }
        return *this;
    }
    TDynamicRHIResourceReference& operator=(const TDynamicRHIResourceReference& InPtr)
    {
        return *this = InPtr.Reference;
    }
    UBOOL operator==(const TDynamicRHIResourceReference& Other) const { return Reference == Other.Reference; }
    void* operator->() const { return Reference; }
    operator ReferenceType() const { return Reference; }
    UBOOL IsValid() const { return Reference != NULL; }
    void SafeRelease() { *this = NULL; }
    DWORD GetRefCount() { return Reference ? GDynamicRHI->GetRefCount(Reference) : 0; }

private:
    ReferenceType Reference;
};

#endif
