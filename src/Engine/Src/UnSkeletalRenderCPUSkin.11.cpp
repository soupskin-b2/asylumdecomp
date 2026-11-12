// UnSkeletalRenderCPUSkin.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* The render classes below aren't in the kit; only the parts these functions touch are spelled out, the
 * rest is kept opaque with the sizes the CPU-skin code uses. */
/* FRenderResource (RenderResource.h): its virtual functions in slot order */
class FRenderResource
{
public:
    virtual ~FRenderResource();
    virtual void InitDynamicRHI();
    virtual void ReleaseDynamicRHI();
    virtual void InitRHI();
    virtual void ReleaseRHI();
    virtual void InitResource();
    virtual void ReleaseResource();
};

/* FVertexFactory (VertexFactory.h) */
class FVertexFactory : public FRenderResource
{
};

/* FLocalVertexFactory (LocalVertexFactory.h) */
class __declspec(align(16)) FLocalVertexFactory : public FVertexFactory
{
public:
    virtual ~FLocalVertexFactory(); /* 0x00656790 */

private:
    BYTE Opaque[0x23c]; /* resource link, vertex streams and declaration */
};

/* FLocalShadowVertexFactory (LocalVertexFactory.h) */
class __declspec(align(16)) FLocalShadowVertexFactory : public FVertexFactory
{
    BYTE Opaque[0x1ec]; /* FRenderResource base, position stream and declaration */
};

/* FDecalVertexFactoryBase (DecalVertexFactory.h): the decal interface of a decal vertex factory */
class FDecalVertexFactoryBase
{
public:
    virtual ~FDecalVertexFactoryBase() {}

private:
    BYTE Opaque[0x8c]; /* decal transform and clipping planes */
};

/* FLocalDecalVertexFactory (LocalDecalVertexFactory.h): a local vertex factory with the decal interface after it */
class FLocalDecalVertexFactory : public FLocalVertexFactory, public FDecalVertexFactoryBase
{
};

class UDecalComponent;
/* FDecalInteraction (UnDecal.h): a decal attached to a primitive */
class FDecalInteraction
{
public:
    UDecalComponent* Decal;
};

class FFinalSkinVertexBuffer;
/* FSkeletalMeshObject (UnSkeletalRender.h): the render data of a USkeletalMeshComponent */
class FSkeletalMeshObject
{
public:
    virtual ~FSkeletalMeshObject();

protected:
    BYTE OpaqueBase[0x1c];            /* LOD info, LOD levels and distance factors */
    UBOOL bDecalFactoriesEnabled;      /* 0x20 */
    BYTE OpaqueTail[0x8];
};

/* FSkeletalMeshObjectCPUSkin (UnSkeletalRenderCPUSkin.h) */
class FSkeletalMeshObjectCPUSkin : public FSkeletalMeshObject
{
public:
    const FVertexFactory* GetVertexFactory(INT LODIndex, INT ChunkIdx) const;
    FDecalVertexFactoryBase* GetDecalVertexFactory(INT LODIndex, INT ChunkIdx, const FDecalInteraction* Decal);
    const FLocalShadowVertexFactory& GetShadowVertexFactory(INT LODIndex) const;
    void RemoveDecalInteraction_RenderingThread(UDecalComponent* DecalComponent);

public:
    /* one decal and the vertex factory it is drawn with */
    struct FDecalVertexFactoryInfo
    {
        const UDecalComponent* Decal;
        FLocalDecalVertexFactory DecalVertexFactory;
    };

    /* TArray<FDecalVertexFactoryInfo> with its out-of-line Remove (0x00964e50) */
    struct FDecalVertexFactoryInfoArray : public TArray<FDecalVertexFactoryInfo>
    {
        void Remove(INT Index, INT Count = 1);
    };

    /* the render resources of one LOD */
    struct FSkeletalMeshObjectLOD
    {
        FLocalVertexFactory VertexFactory;
        BYTE OpaqueVertexBuffer[0x40];                 /* FFinalSkinVertexBuffer VertexBuffer */
        FLocalShadowVertexFactory ShadowVertexFactory; /* 0x280 */
        BYTE OpaqueShadowVertexBuffer[0xc];
        FDecalVertexFactoryInfoArray DecalVertexFactories; /* 0x47c */
        UBOOL bResourcesInitialized;                        /* 0x488 */

        INT FindDecalVertexFactoryIndex(const UDecalComponent* Decal);
        FLocalDecalVertexFactory* GetDecalVertexFactory(const UDecalComponent* Decal);
        void RemoveDecalVertexFactory(const UDecalComponent* Decal);
    };

    TArray<FSkeletalMeshObjectLOD> LODs; /* 0x2c */
};

// @baa 0x00964e50
/* TArray::Remove (Array.h), out of line here */
void FSkeletalMeshObjectCPUSkin::FDecalVertexFactoryInfoArray::Remove(INT Index, INT Count)
{
#line 829 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
    check(Index>=0);
    check(Index<=ArrayNum);
    check(Index+Count<=ArrayNum);

    // DestructItems(Index, Count)
    for (INT i = Index; i < Index + Count; i++)
    {
        (&(*this)(i))->~FDecalVertexFactoryInfo();
    }

    const INT NumToMove = ArrayNum - Index - Count;
    if (NumToMove)
    {
        appMemmove((BYTE*)AllocatorInstance.GetAllocation() + Index * sizeof(FDecalVertexFactoryInfo),
                   (BYTE*)AllocatorInstance.GetAllocation() + (Index + Count) * sizeof(FDecalVertexFactoryInfo),
                   NumToMove * sizeof(FDecalVertexFactoryInfo));
    }
    ArrayNum -= Count;
    const INT NewArrayMax = AllocatorInstance.CalculateSlack(ArrayNum, ArrayMax, sizeof(FDecalVertexFactoryInfo));
    if (NewArrayMax != ArrayMax)
    {
        ArrayMax = NewArrayMax;
        AllocatorInstance.ResizeAllocation(ArrayNum, ArrayMax, sizeof(FDecalVertexFactoryInfo));
    }
}

#line 153 "candidate.cpp"
