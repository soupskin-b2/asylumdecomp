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
/* FVertexFactory (VertexFactory.h) */
class FVertexFactory
{
};

/* FLocalVertexFactory (LocalVertexFactory.h) */
class __declspec(align(16)) FLocalVertexFactory : public FVertexFactory
{
    BYTE Opaque[0x240]; /* FRenderResource base, vertex streams and declaration */
};

/* FLocalShadowVertexFactory (LocalVertexFactory.h) */
class __declspec(align(16)) FLocalShadowVertexFactory : public FVertexFactory
{
    BYTE Opaque[0x1f0]; /* FRenderResource base, position stream and declaration */
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

    /* the render resources of one LOD */
    struct FSkeletalMeshObjectLOD
    {
        FLocalVertexFactory VertexFactory;
        BYTE OpaqueVertexBuffer[0x40];                 /* FFinalSkinVertexBuffer VertexBuffer */
        FLocalShadowVertexFactory ShadowVertexFactory; /* 0x280 */
        BYTE OpaqueShadowVertexBuffer[0xc];
        TArray<FDecalVertexFactoryInfo> DecalVertexFactories; /* 0x47c */

        INT FindDecalVertexFactoryIndex(const UDecalComponent* Decal);
        FLocalDecalVertexFactory* GetDecalVertexFactory(const UDecalComponent* Decal);
    };

    TArray<FSkeletalMeshObjectLOD> LODs; /* 0x2c */
};

// @baa 0x0095fb20
/* the decal's vertex factory, NULL if the decal has none on this LOD */
FLocalDecalVertexFactory* FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD::GetDecalVertexFactory(const UDecalComponent* Decal)
{
    const INT DecalIndex = FindDecalVertexFactoryIndex(Decal);
    if (DecalVertexFactories.IsValidIndex(DecalIndex))
    {
        return &((TArrayAt_<FDecalVertexFactoryInfo>&)DecalVertexFactories).At(DecalIndex).DecalVertexFactory;
    }
    return NULL;
}

#line 120 "candidate.cpp"
