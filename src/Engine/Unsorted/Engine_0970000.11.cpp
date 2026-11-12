// Engine_0970000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* the element types of the LOD's arrays (UnSkeletalMesh.h, UnMeshBuild.h); only the parts the
 * constructor needs to know: their sizes */
struct FSkelMeshSection
{
    WORD MaterialIndex;
    WORD ChunkIndex;
    DWORD BaseIndex;
    WORD NumTriangles;
};

struct FSkelMeshChunk
{
    BYTE OpaqueVertices[0x34]; /* BaseVertexIndex, rigid and soft vertices, bone map and counts */
};

struct FMeshEdge
{
    WORD Vertices[2];
    WORD Faces[2];
};

struct FInfluenceIndexPair
{
    INT First;
    INT Second;
};

/* the LOD's arrays, each with the out-of-line destructor the game uses */
struct FSkelMeshSectionArray : public TArray<FSkelMeshSection> { ~FSkelMeshSectionArray(); };

         /* 0x00957b10 */
struct FSkelMeshChunkArray : public TArray<FSkelMeshChunk> { ~FSkelMeshChunkArray(); };

               /* 0x009751b0 */
struct FWordArray : public TArray<WORD> { ~FWordArray(); };

                                           /* 0x00602210 */
struct FByteArray : public TArray<BYTE> { ~FByteArray(); };

                                           /* 0x00549310 */
struct FMeshEdgeArray : public TArray<FMeshEdge> { ~FMeshEdgeArray(); };

                              /* 0x007c4070 */
struct FInfluenceIndexPairArrays : public TArray<TArray<FInfluenceIndexPair> > { ~FInfluenceIndexPairArrays(); };

 /* 0x00975280 */
/* FRenderResource (RenderResource.h). Not in the kit. */
class FRenderResource
{
public:
    FRenderResource() : bInitialized(FALSE) {}
    virtual ~FRenderResource();

private:
    /* TLinkedList<FRenderResource*> ResourceLink: the element is set when the resource is linked */
    struct FResourceLink
    {
        FRenderResource* Element;
        FResourceLink* NextLink;
        FResourceLink** PrevLink;

        FResourceLink() : NextLink(NULL), PrevLink(NULL) {}
    };

    FResourceLink ResourceLink;
    BITFIELD bInitialized : 1;
};

/* FIndexBufferRHIRef / FVertexBufferRHIRef (RHI.h): a reference to an RHI resource, NULL when created */
struct FRHIResourceRef
{
    void* Reference;
    FRHIResourceRef() : Reference(NULL) {}
};

/* FIndexBuffer (RenderResource.h). Not in the kit. */
class FIndexBuffer : public FRenderResource
{
public:
    FRHIResourceRef IndexBufferRHI; /* FIndexBufferRHIRef */
};

/* FVertexBuffer (RenderResource.h). Not in the kit. */
class FVertexBuffer : public FRenderResource
{
public:
    FRHIResourceRef VertexBufferRHI; /* FVertexBufferRHIRef */
};

/* FResourceArrayInterface (ResourceArray.h). Not in the kit. */
class FResourceArrayInterface
{
public:
    virtual const void* GetResourceData() const = 0;
    virtual UINT GetResourceDataSize() const = 0;
    virtual void Discard() = 0;
    virtual UBOOL IsStatic() const = 0;
    virtual UBOOL GetAllowCPUAccess() const = 0;
    virtual void SetAllowCPUAccess(UBOOL bInNeedsCPUAccess) = 0;
};

/* TResourceArray<WORD> (ResourceArray.h): the index data. Not in the kit. */
class FIndexResourceArray : public FResourceArrayInterface, public TArray<WORD>
{
public:
    FIndexResourceArray(UBOOL InNeedsCPUAccess) : bNeedsCPUAccess(InNeedsCPUAccess) {}

    virtual const void* GetResourceData() const;
    virtual UINT GetResourceDataSize() const;
    virtual void Discard();
    virtual UBOOL IsStatic() const;
    virtual UBOOL GetAllowCPUAccess() const;
    virtual void SetAllowCPUAccess(UBOOL bInNeedsCPUAccess);

private:
    UBOOL bNeedsCPUAccess;
};

/* FRawStaticIndexBuffer (RawIndexBuffer.h). Not in the kit. */
class FRawStaticIndexBuffer : public FIndexBuffer
{
public:
    FRawStaticIndexBuffer(UBOOL InNeedsCPUAccess = FALSE)
        : Indices(InNeedsCPUAccess)
        , bSetupForInstancing(FALSE)
        , NumVertsPerInstance(0)
    {}
    virtual ~FRawStaticIndexBuffer(); /* 0x007c4f20 */

    FIndexResourceArray Indices;
    UBOOL bSetupForInstancing;
    UINT NumVertsPerInstance;
};

class FStaticMeshVertexDataInterface;
/* FSkeletalMeshVertexBuffer (UnSkeletalMesh.h): the GPU-skin vertices of a LOD. Not in the kit. */
class FSkeletalMeshVertexBuffer : public FVertexBuffer
{
public:
    FSkeletalMeshVertexBuffer()
        : bInfluencesByteSwapped(FALSE)
        , bUseFullPrecisionUVs(FALSE)
        , bUsePackedPosition(FALSE)
        , VertexData(NULL)
        , Data(NULL)
        , Stride(0)
        , NumVertices(0)
    {}
    virtual ~FSkeletalMeshVertexBuffer(); /* 0x0094ba30 */

private:
    UBOOL bInfluencesByteSwapped;
    UBOOL bUseFullPrecisionUVs;
    UBOOL bUsePackedPosition;
    FStaticMeshVertexDataInterface* VertexData;
    BYTE* Data;
    UINT Stride;
    UINT NumVertices;
};

/* FUntypedBulkData (UnBulkData.h). Not in the kit (its script mirror is). */
class FUntypedBulkData
{
public:
    FUntypedBulkData(); /* 0x0056bf90 */
    virtual ~FUntypedBulkData();
    virtual INT GetElementSize() const = 0;

private:
    BYTE Opaque[0x30]; /* flags, counts, offsets and the data, as in FUntypedBulkData_Mirror */
};

/* FIntBulkData (UnBulkData.h): bulk data of INTs */
class FIntBulkData : public FUntypedBulkData
{
public:
    virtual INT GetElementSize() const;
};

/* FStaticLODModel (UnSkeletalMesh.h): one LOD of a skeletal mesh. Not in the kit. */
class FStaticLODModel
{
public:
    FStaticLODModel();

private:
    FSkelMeshSectionArray Sections;
    FSkelMeshChunkArray Chunks;
    FWordArray ActiveBoneIndices;
    FByteArray RequiredBones;
    FRawStaticIndexBuffer IndexBuffer;          /* 0x30 */
    FMeshEdgeArray Edges;                       /* 0x64 */
    FWordArray ShadowIndices;                   /* 0x70 */
    FByteArray ShadowTriangleDoubleSided;       /* 0x7c */
    DWORD Size;                                 /* 0x88 */
    DWORD NumVertices;                          /* 0x8c */
    FSkeletalMeshVertexBuffer VertexBufferGPUSkin; /* 0x90 */
    FInfluenceIndexPairArrays InfluenceIndexPairs; /* 0xc4 (name assumed) */
    FIntBulkData RawPointIndices;               /* 0xd0 */
};

// @baa 0x009763b0
FStaticLODModel::FStaticLODModel()
    : IndexBuffer(TRUE)
    , Size(0)
    , NumVertices(0)
{
}
