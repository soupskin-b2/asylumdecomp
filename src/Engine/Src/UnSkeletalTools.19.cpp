// UnSkeletalTools.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Implement.h"

/* the licensee package version that changed shadow edges to WORDs (UnObjVer.h; name assumed) */
enum { VER_AA_SHADOW_EDGES_WORDS = 5 };
/* the package version that added the influence index pairs (name assumed) */
enum { VER_AA_LOD_INFLUENCE_PAIRS = 0x216 };
inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, DWORD& D) { Ar.ByteOrderSerialize(&D, sizeof(D)); return Ar; }

/* IsLoading is restated as this build compiles it (the flag normalized to 0/1), which the kit's inline doesn't do. */
class FArchive_ : public FArchive
{
public:
    UBOOL IsLoading() const { return ArIsLoading != 0; }
};

/* UnObjBas.h CastChecked<T>; out of line here (0x00980b40 for USkeletalMesh) */
template<class T> T* CastChecked(UObject* Src);
struct FSkelMeshSection;
struct FSkelMeshChunk;
/* FMeshEdge (UnMeshBuild.h): a triangle edge for shadow volume extrusion; this build stores it as WORDs */
struct FMeshEdge
{
    WORD Vertices[2];
    WORD Faces[2];
};

/* the edge as packages before VER_AA_SHADOW_EDGES_WORDS stored it */
struct FLegacyMeshEdge
{
    INT Vertices[2];
    INT Faces[2];
};

/* TArray<FMeshEdge> with its out-of-line Add (0x00805400) */
struct FMeshEdgeArray : public TArray<FMeshEdge>
{
    INT Add(INT Count);
};

/* one index pair of the LOD's influence data (UnSkeletalMesh.h; names assumed) */
struct FInfluenceIndexPair
{
    INT First;
    INT Second;
};

FArchive& operator<<(FArchive& Ar, TArray<FSkelMeshSection>& A);
   /* 0x00963d70 */
FArchive& operator<<(FArchive& Ar, TArray<FSkelMeshChunk>& A);
     /* 0x00979a10 */
FArchive& operator<<(FArchive& Ar, TArray<WORD>& A);
               /* 0x006076c0 */
FArchive& operator<<(FArchive& Ar, TArray<BYTE>& A);
               /* 0x00725cc0 */
FArchive& operator<<(FArchive& Ar, TArray<FMeshEdge>& A);
          /* 0x00812c80 */
FArchive& operator<<(FArchive& Ar, TArray<FLegacyMeshEdge>& A);
    /* 0x00818d20 */
FArchive& operator<<(FArchive& Ar, TArray<TArray<FInfluenceIndexPair> >& A);
 /* 0x00979b20 */
/* FRawStaticIndexBuffer (RawIndexBuffer.h); opaque, serialized out of line (0x007321e0) */
class FRawStaticIndexBuffer
{
public:
    friend FArchive& operator<<(FArchive& Ar, FRawStaticIndexBuffer& I);

private:
    BYTE Opaque[0x34];
};

/* FIntBulkData (UnBulkData.h): bulk data of INTs */
struct FIntBulkData : public FUntypedBulkData_Mirror
{
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

class FStaticMeshVertexDataInterface;
/* FSkeletalMeshVertexBuffer (UnSkeletalMesh.h): the GPU-skin vertices of a LOD. Not in the kit. */
class FSkeletalMeshVertexBuffer : public FVertexBuffer
{
public:
    friend FArchive& operator<<(FArchive& Ar, FSkeletalMeshVertexBuffer& VertexBuffer); /* 0x0097b310 */

    UBOOL bInfluencesByteSwapped;
    UBOOL bUseFullPrecisionUVs;
    UBOOL bUsePackedPosition;

private:
    FStaticMeshVertexDataInterface* VertexData;
    BYTE* Data;
    UINT Stride;
    UINT NumVertices;
};

/* FStaticLODModel (UnSkeletalMesh.h): one LOD of a skeletal mesh. Not in the kit. */
class FStaticLODModel
{
public:
    FStaticLODModel(); /* 0x009763b0 */
    void Serialize(FArchive& Ar, UObject* Owner, INT Idx); /* 0x00980d10 */

private:
    TArray<FSkelMeshSection> Sections;
    TArray<FSkelMeshChunk> Chunks;
    TArray<WORD> ActiveBoneIndices;
    TArray<BYTE> RequiredBones;
    FRawStaticIndexBuffer IndexBuffer;          /* 0x30 */
    FMeshEdgeArray Edges;                       /* 0x64 */
    TArray<WORD> ShadowIndices;                 /* 0x70 */
    TArray<BYTE> ShadowTriangleDoubleSided;     /* 0x7c */
    DWORD Size;                                 /* 0x88 */
    DWORD NumVertices;                          /* 0x8c */
    FSkeletalMeshVertexBuffer VertexBufferGPUSkin; /* 0x90 */
    TArray<TArray<FInfluenceIndexPair> > InfluenceIndexPairs; /* 0xc4 (name assumed) */
    FIntBulkData RawPointIndices;               /* 0xd0 */
};

/* TIndirectArray<FStaticLODModel> (USkeletalMesh::LODModels) with its out-of-line Empty (0x0097a3c0) */
class FStaticLODModelArray : public TIndirectArray<FStaticLODModel>
{
public:
    void Empty(INT Slack = 0);
    INT AddRawItem(FStaticLODModel* Item);
    void Serialize(FArchive& Ar, UObject* Owner);
};

/* UnTemplate.h's placement new into a TIndirectArray: the element is allocated on its own and its
 * pointer added */
inline void* operator new(size_t Size, FStaticLODModelArray& Array)
{
    const INT Index = Array.AddRawItem((FStaticLODModel*)sub_0053df40(Size, DEFAULT_ALIGNMENT)); /* appMalloc, out of line */
    return &Array(Index);
}

inline INT FStaticLODModelArray::AddRawItem(FStaticLODModel* Item)
{
    const INT Index = TArray<void*>::Add(1);
    GetTypedData()[Index] = Item;
    return Index;
}

// @baa 0x009810d0
/* TIndirectArray::Serialize (Array.h): the count, then each LOD, which is told its owner and index */
void FStaticLODModelArray::Serialize(FArchive& Ar, UObject* Owner)
{
    Ar.CountBytes(ArrayNum * sizeof(void*), ArrayMax * sizeof(void*));
    if (Ar.IsLoading())
    {
        INT NewNum;
        Ar << NewNum;
        Empty(NewNum);
        for (INT Index = 0; Index < NewNum; Index++)
        {
            new(*this) FStaticLODModel;
        }
        for (INT Index = 0; Index < NewNum; Index++)
        {
            (*this)(Index).Serialize(Ar, Owner, Index);
        }
    }
    else
    {
        Ar << ArrayNum;
        for (INT Index = 0; Index < ArrayNum; Index++)
        {
            (*this)(Index).Serialize(Ar, Owner, Index);
        }
    }
}
