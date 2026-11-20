/* The skeletal mesh's render data as this build lays it out (UE3's UnSkeletalMesh.h and
 * UnMeshBuild.h), and the kDOP collision tree types (UnkDOP.h).
 *
 * Evidence: FStaticLODModel's constructor (009763b0) and destructor (00975b40) give its layout: the
 * destructor tears down ActiveBoneIndices (0x18) and ShadowIndices (0x70) with the same TArray<WORD>
 * destructor and RequiredBones (0x24) and ShadowTriangleDoubleSided (0x7c) with TArray<BYTE>'s.
 * The GPU-skin vertex keeps Position first, ahead of the tangents
 * (FSkeletalMeshVertexBuffer::SetVertex 0094bae0). FMeshEdge is WORDs in this build: Serialize
 * converts the older INT edges (FLegacyMeshEdge).
 * Functions with an address are out of line in this build; declare-only here.
 *
 * Opt-in: #include "ue3/SkeletalMesh.h" (it includes RenderResource.h and RHI.h). */
#pragma once
#include "RenderResource.h"
#ifndef UE3_SKELETALMESH_H
#define UE3_SKELETALMESH_H

/* a vertex bound to a single bone (0x24 bytes) */
struct FRigidSkinVertex
{
    FVector Position;
    FPackedNormal TangentX, TangentY, TangentZ;
    FLOAT U, V;
    BYTE Bone;
};

/* a vertex skinned to up to 4 bones (0x28 bytes) */
struct FSoftSkinVertex
{
    FVector Position;
    FPackedNormal TangentX, TangentY, TangentZ;
    FLOAT U, V;
    BYTE InfluenceBones[4];
    BYTE InfluenceWeights[4];
};

/* a run of triangles of one LOD drawn with one material */
struct FSkelMeshSection
{
    WORD MaterialIndex;
    WORD ChunkIndex;
    DWORD BaseIndex;
    WORD NumTriangles;
};

/* vertices of one LOD skinned with one bone map */
struct FSkelMeshChunk
{
    DWORD BaseVertexIndex;
    TArray<FRigidSkinVertex> RigidVertices;
    TArray<FSoftSkinVertex> SoftVertices;
    TArray<WORD> BoneMap;
    INT NumRigidVertices;
    INT NumSoftVertices;
    INT MaxBoneInfluences;

    ~FSkelMeshChunk();                                              /* 0x009590c0 */

    INT GetNumVertices() const { return NumRigidVertices + NumSoftVertices; }

    friend FArchive& operator<<(FArchive& Ar, FSkelMeshChunk& C);   /* 0x00967630 */
};

/* UnMeshBuild.h: a triangle edge for shadow volume extrusion; WORDs in this build */
struct FMeshEdge
{
    WORD Vertices[2];
    WORD Faces[2];
};

/* the INT edges of older packages, converted on load */
struct FLegacyMeshEdge
{
    INT Vertices[2];
    INT Faces[2];
};

/* one index pair of a LOD's influence data (names assumed) */
struct FInfluenceIndexPair
{
    INT First;
    INT Second;

#ifndef BAA_NO_ARCHIVE_OPERATORS
    friend FArchive& operator<<(FArchive& Ar, FInfluenceIndexPair& P)
    {
        return Ar << P.First << P.Second;
    }
#endif
};

/* a section's material and whether it casts shadows (UnSkeletalRender.h) */
struct FSectionElementInfo
{
    FSectionElementInfo(UMaterialInterface* InMaterial, UBOOL bInEnableShadowCasting)
        : Material(InMaterial)
        , bEnableShadowCasting(bInEnableShadowCasting)
    {}

    UMaterialInterface* Material;
    UBOOL bEnableShadowCasting;
};

/* the GPU-skin vertex formats; only the UVs' precision differs */
struct FGPUSkinVertexBase
{
    FVector Position;
    FPackedNormal TangentX;
    FPackedNormal TangentZ;
    BYTE InfluenceBones[4];
    BYTE InfluenceWeights[4];
};

template<UINT NumTexCoords = 1> struct TGPUSkinVertexFloat16Uvs : public FGPUSkinVertexBase
{
    FVector2DHalf UVs[NumTexCoords];
};

template<UINT NumTexCoords = 1> struct TGPUSkinVertexFloat32Uvs : public FGPUSkinVertexBase
{
    FVector2D UVs[NumTexCoords];
};

/* the CPU copy of a skeletal mesh's GPU-skin vertices */
template<typename VertexDataType>
class TSkeletalMeshVertexData : public FStaticMeshVertexDataInterface, public TResourceArray<VertexDataType>
{
public:
    TSkeletalMeshVertexData(UBOOL InNeedsCPUAccess = FALSE)
    :   TResourceArray<VertexDataType>(InNeedsCPUAccess)
    {}

    virtual void ResizeBuffer(UINT NumVertices)
    {
        if ((UINT)this->Num() < NumVertices)
        {
            this->Add(NumVertices - this->Num());
        }
        else if ((UINT)this->Num() > NumVertices)
        {
            this->Remove(NumVertices, this->Num() - NumVertices);
        }
    }
    virtual UINT GetStride() const { return sizeof(VertexDataType); }
    virtual BYTE* GetDataPointer() { return (BYTE*)&(*this)(0); }
    virtual UINT GetNumVertices() const { return this->Num(); }
    virtual FResourceArrayInterface* GetResourceArray() { return this; }
    virtual void Serialize(FArchive& Ar);
};

/* the GPU-skin vertices of a LOD (0x34 bytes, vtable 0x01f86d64) */
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
    virtual ~FSkeletalMeshVertexBuffer();                               /* 0x0094ba30 */
    virtual void InitRHI();                                             /* 0x0c: 0x00951690 */
    virtual FString GetFriendlyName() const;                            /* 0x1c: 0x00951660 */

    void Init(const TArray<FSoftSkinVertex>& InVertices);               /* 0x009764f0 */
    void SetVertex(UINT VertexIndex, const FSoftSkinVertex& SrcVertex); /* 0x0094bae0 */
    FVector2D GetVertexUV(UINT VertexIndex, UINT UVIndex) const;        /* 0x0094b690 */
    void AllocateData();                                                /* 0x0096e6c0 */

    UINT GetNumVertices() const { return NumVertices; }

    /* free the CPU copy of the vertices */
    void CleanUp()
    {
        delete VertexData;
        VertexData = NULL;
    }

    /* the position of a vertex: the first member of every GPU-skin vertex format */
    const FVector& GetVertexPosition(UINT VertexIndex) const
    {
        return *(const FVector*)(Data + VertexIndex * Stride);
    }

    friend FArchive& operator<<(FArchive& Ar, FSkeletalMeshVertexBuffer& VertexBuffer); /* 0x0097b310 */

    UBOOL bInfluencesByteSwapped;                   /* 0x18 */
    UBOOL bUseFullPrecisionUVs;                     /* 0x1c */
    UBOOL bUsePackedPosition;                       /* 0x20 */
    FStaticMeshVertexDataInterface* VertexData;     /* 0x24 */
    BYTE* Data;                                     /* 0x28 */
    UINT Stride;                                    /* 0x2c */
    UINT NumVertices;                               /* 0x30 */
};

/* one LOD of a skeletal mesh (USkeletalMesh::LODModels is a TIndirectArray of them) */
class FStaticLODModel
{
public:
    FStaticLODModel();                                      /* 0x009763b0 */
    ~FStaticLODModel();                                     /* 0x00975b40 */
    void Serialize(FArchive& Ar, UObject* Owner, INT Idx);  /* 0x00980d10 */
    void InitResources(class USkeletalMesh* Parent);        /* 0x0095bbf0 */
    void ReleaseResources();
    INT GetTotalFaces();                                    /* 0x00951780 */

    TArray<FSkelMeshSection> Sections;              /* 0x00 */
    TArray<FSkelMeshChunk> Chunks;                  /* 0x0c */
    TArray<WORD> ActiveBoneIndices;                 /* 0x18 */
    TArray<BYTE> RequiredBones;                     /* 0x24 */
    FRawStaticIndexBuffer IndexBuffer;              /* 0x30 */
    TArray<FMeshEdge> Edges;                        /* 0x64 */
    TArray<WORD> ShadowIndices;                     /* 0x70 */
    TArray<BYTE> ShadowTriangleDoubleSided;         /* 0x7c */
    DWORD Size;                                     /* 0x88 */
    DWORD NumVertices;                              /* 0x8c */
    FSkeletalMeshVertexBuffer VertexBufferGPUSkin;  /* 0x90 */
    TArray<TArray<FInfluenceIndexPair> > InfluenceIndexPairs; /* 0xc4 (name assumed) */
    FIntBulkData RawPointIndices;                   /* 0xd0 */
};

/* UnkDOP.h: the kDOP collision tree. This build uses 3 plane pairs (an axis-aligned box). */
#define NUM_PLANES 3

struct FkDOP
{
    FLOAT Min[NUM_PLANES];
    FLOAT Max[NUM_PLANES];

    FkDOP()
    {
        Init();
    }

    /* empty: inverted bounds that any point expands */
    void Init()
    {
        for (INT nPlane = 0; nPlane < NUM_PLANES; nPlane++)
        {
            Min[nPlane] = MAX_FLT;
            Max[nPlane] = -MAX_FLT;
        }
    }

    /* UE3's TkDOP<FSkelMeshCollisionDataProvider,WORD>::LineCheck: does the line hit the box? */
    UBOOL LineCheck(struct FSkelMeshkDOPLineCollisionCheck& Check, FLOAT& HitTime); /* 0x0094eb40 */

    friend FArchive& operator<<(FArchive& Ar, FkDOP& kDOP); /* 0x00949d60 */
};

/* a node of a kDOP tree, either two children or a run of triangles (0x20 bytes) */
struct FkDOPNode
{
    FkDOP BoundingVolume;
    UBOOL bIsLeaf;
    union
    {
        struct
        {
            WORD LeftNode;
            WORD RightNode;
        } n;
        struct
        {
            WORD NumTriangles;
            WORD StartIndex;
        } t;
    };

    FkDOPNode()
    {
        n.LeftNode = 0xFFFF;
        n.RightNode = 0xFFFF;
        BoundingVolume.Init();
    }

#ifndef BAA_NO_ARCHIVE_OPERATORS
    friend FArchive& operator<<(FArchive& Ar, FkDOPNode& Node)
    {
        Ar << Node.BoundingVolume << Node.bIsLeaf;
        // n.LeftNode overlaps t.NumTriangles and n.RightNode t.StartIndex
        Ar << Node.n.LeftNode << Node.n.RightNode;
        return Ar;
    }
#endif
};

/* a triangle of a kDOP tree (8 bytes) */
struct FkDOPCollisionTriangle
{
    WORD v1, v2, v3;
    WORD MaterialIndex;

    FkDOPCollisionTriangle() : v1(0), v2(0), v3(0), MaterialIndex(0) {}

#ifndef BAA_NO_ARCHIVE_OPERATORS
    friend FArchive& operator<<(FArchive& Ar, FkDOPCollisionTriangle& Tri)
    {
        Ar << Tri.v1 << Tri.v2 << Tri.v3 << Tri.MaterialIndex;
        return Ar;
    }
#endif
};

#endif
