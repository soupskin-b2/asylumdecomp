// UnSkeletalMesh.cpp: 1 function
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

// @baa 0x0095bbf0
/* start initialising the LOD's index buffer, and its vertex buffer when it's skinned on the GPU */
void FStaticLODModel::InitResources(USkeletalMesh* Parent)
{
#line 543 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalMesh.cpp"
    check(Parent);
    BeginInitResource(&IndexBuffer);
    if (!Parent->IsCPUSkinned())
    {
        BeginInitResource(&VertexBufferGPUSkin);
    }
}

#line 229 "candidate.cpp"
