// Engine_0970000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct FSkelMeshSection;
struct FSkelMeshChunk;
struct FMeshEdge;
struct FInfluenceIndexPair;
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
/* FRawStaticIndexBuffer (RawIndexBuffer.h); opaque here */
class FRawStaticIndexBuffer
{
public:
    ~FRawStaticIndexBuffer(); /* 0x007c4f20 */

private:
    BYTE Opaque[0x34];
};

/* FSkeletalMeshVertexBuffer (UnSkeletalMesh.h); opaque here */
class FSkeletalMeshVertexBuffer
{
public:
    ~FSkeletalMeshVertexBuffer(); /* 0x0094ba30 */

private:
    BYTE Opaque[0x34];
};

/* FIntBulkData (UnBulkData.h): bulk data of INTs */
struct FIntBulkData : public FUntypedBulkData_Mirror
{
};

/* FStaticLODModel (UnSkeletalMesh.h): one LOD of a skeletal mesh. Not in the kit. */
class FStaticLODModel
{
public:
    ~FStaticLODModel();

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

// @baa 0x00975b40
FStaticLODModel::~FStaticLODModel()
{
}
