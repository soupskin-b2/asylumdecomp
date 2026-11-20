// UnSkeletalTools.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Implement.h"
#include "ue3/SkeletalMesh.h"

/* the licensee package version that changed shadow edges to WORDs (UnObjVer.h; name assumed) */
enum { VER_AA_SHADOW_EDGES_WORDS = 5 };
/* the package version that added the influence index pairs (name assumed) */
enum { VER_AA_LOD_INFLUENCE_PAIRS = 0x216 };

/* UnObjBas.h CastChecked<T>; out of line here (0x00980b40 for USkeletalMesh) */
template<class T> T* CastChecked(UObject* Src);
struct FSkelMeshSection;
struct FSkelMeshChunk;
/* TArray<FMeshEdge> with its out-of-line Add (0x00805400) */
struct FMeshEdgeArray : public TArray<FMeshEdge>
{
    INT Add(INT Count);
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
class FStaticMeshVertexDataInterface;
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
