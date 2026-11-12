// Engine_0970000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Implement.h"

/* FStaticLODModel (UnSkeletalMesh.h): one LOD of a skeletal mesh; only its destructor matters here */
class FStaticLODModel
{
public:
    ~FStaticLODModel(); /* 0x00975b40 */

private:
    BYTE Opaque[0x104];
};

/* TIndirectArray<FStaticLODModel> (USkeletalMesh::LODModels) */
class FStaticLODModelArray : public TIndirectArray<FStaticLODModel>
{
public:
    void Empty(INT Slack = 0);
};

// @baa 0x0097a3c0
/* TIndirectArray::Empty (Array.h): delete every element, then empty the pointers */
void FStaticLODModelArray::Empty(INT Slack)
{
    for (INT i = 0; i < ArrayNum; i++)
    {
        delete (FStaticLODModel*)GetTypedData()[i];
    }
    TArray<void*>::Empty(Slack);
}
