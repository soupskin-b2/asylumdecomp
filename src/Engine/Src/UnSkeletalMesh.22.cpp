// UnSkeletalMesh.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/SkeletalMesh.h"

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

/* a triangle's three corners (its UE3 name is unknown) */
struct FSkelMeshTriangle
{
    FVector Vertices[3];
};

/* USkeletalMesh with the native type of LODModels and this undeclared method */
struct USkeletalMesh_ : public USkeletalMesh
{
    FStaticLODModelArray& GetLODModels() { return (FStaticLODModelArray&)LODModels; }
    void GetTriangles(TArray<FSkelMeshTriangle>& OutTriangles);
};

// @baa 0x0095f040
/* add the triangles of the base LOD, by vertex position, to OutTriangles (the name of this method is unknown) */
void USkeletalMesh_::GetTriangles(TArray<FSkelMeshTriangle>& OutTriangles)
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
