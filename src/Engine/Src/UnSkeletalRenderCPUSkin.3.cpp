// UnSkeletalRenderCPUSkin.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

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

class FDecalInteraction;
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
        const FDecalInteraction* Decal;
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

        INT FindDecalVertexFactoryIndex(const FDecalInteraction* Decal) const;
        FDecalVertexFactoryBase* GetDecalVertexFactory(const FDecalInteraction* Decal);
    };

    TArray<FSkeletalMeshObjectLOD> LODs; /* 0x2c */
};

// @baa 0x00952e90
/* debug check that the LOD exists */
const FVertexFactory* FSkeletalMeshObjectCPUSkin::GetVertexFactory(INT LODIndex, INT ChunkIdx) const
{
#line 791 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalRenderCPUSkin.cpp"
    check(LODs.IsValidIndex(LODIndex));
    return &LODs(LODIndex).VertexFactory;
}

#line 92 "candidate.cpp"
