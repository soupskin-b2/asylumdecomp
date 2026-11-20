// Engine_0970000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/SkeletalMesh.h"

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
class FStaticMeshVertexDataInterface;
// @baa 0x009763b0
FStaticLODModel::FStaticLODModel()
    : IndexBuffer(TRUE)
    , Size(0)
    , NumVertices(0)
{
}
