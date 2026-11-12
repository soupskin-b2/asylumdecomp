// UnSkeletalMesh.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

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

    FFloat16(const FFloat16& FP16Value) { Encoded = FP16Value.Encoded; }
    FFloat16& operator=(const FFloat16& FP16Value) { Encoded = FP16Value.Encoded; return *this; }
};

/* FVector2DHalf (Float16Color.h): a 2D vector of 16-bit floats; its copy constructor is out of line
 * here (0x0094a700). Not in the kit. */
struct FVector2DHalf
{
    FFloat16 X;
    FFloat16 Y;
};

/* the GPU-skin vertex formats (UnSkeletalMesh.h). Not in the kit. */
struct FGPUSkinVertexBase
{
    FVector Position;
    FPackedNormal TangentX;
    FPackedNormal TangentZ;
    BYTE InfluenceBones[4];
    BYTE InfluenceWeights[4];
};

template<UINT NumTexCoords> struct TGPUSkinVertexFloat16Uvs : public FGPUSkinVertexBase
{
    FVector2DHalf UVs[NumTexCoords];
};

/* the placement forms of new and delete (<new>) */
/* TArray<TGPUSkinVertexFloat16Uvs<1> > with its out-of-line Copy */
struct FGPUSkinVertexFloat16UvsArray : public TArray<TGPUSkinVertexFloat16Uvs<1> >
{
    void Copy(const TArray<TGPUSkinVertexFloat16Uvs<1> >& Source);
};

// @baa 0x0095aed0
/* TArray::Copy (Array.h): copy-construct each element */
void FGPUSkinVertexFloat16UvsArray::Copy(const TArray<TGPUSkinVertexFloat16Uvs<1> >& Source)
{
    if (this != &Source)
    {
        if (Source.Num() > 0)
        {
            Empty(Source.Num());
            for (INT Index = 0; Index < Source.Num(); Index++)
            {
                ::new(GetTypedData() + Index) TGPUSkinVertexFloat16Uvs<1>(Source(Index));
            }
            ArrayNum = Source.Num();
        }
        else
        {
            Empty();
        }
    }
}

template<UINT NumTexCoords> struct TGPUSkinVertexFloat32Uvs : public FGPUSkinVertexBase
{
    FVector2D UVs[NumTexCoords];
};

/* TArray<TGPUSkinVertexFloat32Uvs<1> > with its out-of-line Copy */
struct FGPUSkinVertexFloat32UvsArray : public TArray<TGPUSkinVertexFloat32Uvs<1> >
{
    void Copy(const TArray<TGPUSkinVertexFloat32Uvs<1> >& Source);
};

// @baa 0x0095b020
/* TArray::Copy (Array.h): copy-construct each element */
void FGPUSkinVertexFloat32UvsArray::Copy(const TArray<TGPUSkinVertexFloat32Uvs<1> >& Source)
{
    if (this != &Source)
    {
        if (Source.Num() > 0)
        {
            Empty(Source.Num());
            for (INT Index = 0; Index < Source.Num(); Index++)
            {
                ::new(GetTypedData() + Index) TGPUSkinVertexFloat32Uvs<1>(Source(Index));
            }
            ArrayNum = Source.Num();
        }
        else
        {
            Empty();
        }
    }
}

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

/* TArray<FSectionElementInfo> with its out-of-line destructor (0x0094f930) */
struct FSectionElementInfoArray : public TArray<FSectionElementInfo>
{
    ~FSectionElementInfoArray();
};

/* FSkeletalMeshSceneProxy::FLODSectionElements (UnSkeletalRender.h): the section materials of one LOD */
struct FLODSectionElements
{
    FSectionElementInfoArray SectionElements;
};

/* TArray<FLODSectionElements>'s destructor (FSkeletalMeshSceneProxy::LODSections), out of line here */
template<> __declspec(noinline) TArray<FLODSectionElements>::~TArray()
{
    // DestructItems(0, ArrayNum), as this build inlines it
    const INT Count = ArrayNum;
    for (INT i = 0; i < Count; i++)
    {
        (&(*this)(i))->~FLODSectionElements();
    }
    ArrayNum = ArrayMax = 0;
}

// @baa 0x00975820
/* FSkeletalMeshSceneProxy's destructor destroys LODSections; this stands in for it so the compiler
 * emits the specialisation above. */
void DestroyLODSections(TArray<FLODSectionElements>& LODSections)
{
    LODSections.~TArray();
}

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

    /* the position of a vertex: the first member of every GPU-skin vertex format */
    const FVector& GetVertexPosition(UINT VertexIndex) const
    {
        return *(const FVector*)(Data + VertexIndex * Stride);
    }

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

/* TIndirectArray<FStaticLODModel> (USkeletalMesh::LODModels); only the accessor used here */
struct FStaticLODModelArray : public TArray<FStaticLODModel*>
{
    FStaticLODModel& operator()(INT i)
    {
#line 1705 BAA_ARRAY_FILE
        check(i>=0 && i<this->ArrayNum);
        return *GetTypedData()[i];
    }
};

/* a triangle's three corners. Its name is unknown; not in the kit. */
struct FSkelMeshTriangle
{
    FVector Vertices[3];
};

/* TArray<FSkelMeshTriangle> with UE3's Reserve and AddItem */
struct FSkelMeshTriangleArray : public TArray<FSkelMeshTriangle>
{
    void Reserve(INT Number)
    {
        if (Number > ArrayMax)
        {
            ArrayMax = Number;
            AllocatorInstance.ResizeAllocation(ArrayNum, ArrayMax, sizeof(FSkelMeshTriangle));
        }
    }
    INT AddItem(const FSkelMeshTriangle& Item)
    {
        const INT Index = Add(1);
        new(GetTypedData() + Index) FSkelMeshTriangle(Item);
        return Index;
    }
};

/* USkeletalMesh with the native type of LODModels and this undeclared method */
struct USkeletalMesh_ : public USkeletalMesh
{
    FStaticLODModelArray& GetLODModels() { return (FStaticLODModelArray&)LODModels; }
    void GetTriangles(FSkelMeshTriangleArray& OutTriangles);
};

// @baa 0x0095f040
/* add the triangles of the base LOD, by vertex position, to OutTriangles (the name of this method is unknown) */
void USkeletalMesh_::GetTriangles(FSkelMeshTriangleArray& OutTriangles)
{
    const INT NumIndices = GetLODModels()(0).IndexBuffer.Indices.Num();
    const INT NumTriangles = NumIndices / 3;
#line 3168 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalMesh.cpp"
    check(NumIndices==NumTriangles*3);

    OutTriangles.Reserve(OutTriangles.Num() + NumTriangles);
    INT Index = 0;
    for (INT TriangleIndex = 0; TriangleIndex < NumTriangles; TriangleIndex++)
    {
        FSkelMeshTriangle Triangle;
        for (INT CornerIndex = 0; CornerIndex < 3; CornerIndex++)
        {
            const INT VertexIndex = GetLODModels()(0).IndexBuffer.Indices(Index);
            Triangle.Vertices[CornerIndex] = GetLODModels()(0).VertexBufferGPUSkin.GetVertexPosition(VertexIndex);
            Index++;
        }
        OutTriangles.AddItem(Triangle);
    }
}

#line 435 "candidate.cpp"
