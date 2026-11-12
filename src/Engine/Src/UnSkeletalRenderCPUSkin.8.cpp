// UnSkeletalRenderCPUSkin.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

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
    BYTE Opaque[0x90]; /* decal transform and clipping planes */
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

private:
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

// @baa 0x00968430
/* release and forget the vertex factory of a decal that is being detached */
void FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD::RemoveDecalVertexFactory(const UDecalComponent* Decal)
{
    const INT DecalIndex = FindDecalVertexFactoryIndex(Decal);
    if (DecalVertexFactories.IsValidIndex(DecalIndex))
    {
        if (bResourcesInitialized)
        {
            FDecalVertexFactoryInfo& DecalInfo = ((TArrayAt_<FDecalVertexFactoryInfo>&)DecalVertexFactories).At(DecalIndex);
            DecalInfo.DecalVertexFactory.ReleaseResource();
        }
        DecalVertexFactories.Remove(DecalIndex);
    }
}

#line 145 "candidate.cpp"
