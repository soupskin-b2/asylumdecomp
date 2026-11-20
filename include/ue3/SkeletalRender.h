/* The skeletal mesh's CPU-skinned render objects (UE3's UnSkeletalRender.h,
 * UnSkeletalRenderCPUSkin.h) and the vertex factories they draw with, as far as the decompiled
 * code uses them. The vertex factories' stream layouts aren't worked out yet: their bodies are
 * opaque with the sizes this build has, so arrays of them and the members after them sit right.
 *
 * Evidence: FSkeletalMeshObjectLOD::ReleaseResources (00953120) releases the resources at 0x0,
 * 0x240, 0x260 and 0x45c; GetShadowVertexFactory returns the one at 0x280; DecalVertexFactories
 * is at 0x47c (Remove 00964e50) and bResourcesInitialized at 0x488. FLocalVertexFactory's
 * destructor is 00656790.
 *
 * Opt-in: #include "ue3/SkeletalRender.h" (it includes SkeletalMesh.h, RenderResource.h, RHI.h). */
#pragma once
#include "SkeletalMesh.h"
#ifndef UE3_SKELETALRENDER_H
#define UE3_SKELETALRENDER_H

class UDecalComponent;

/* VertexFactory.h: the vertex streams and declaration a mesh is drawn with */
class FVertexFactory : public FRenderResource
{
};

/* LocalVertexFactory.h: a vertex factory for meshes in local space (0x240 bytes) */
class __declspec(align(16)) FLocalVertexFactory : public FVertexFactory
{
public:
    virtual ~FLocalVertexFactory(); /* 0x00656790 */

    BYTE Opaque[0x22c]; /* the vertex streams, declaration and stream components (not laid out yet) */
};

/* LocalVertexFactory.h: the position-only factory shadow volumes are drawn with (0x1dc bytes) */
class FLocalShadowVertexFactory : public FVertexFactory
{
public:
    BYTE Opaque[0x1c8]; /* the position streams and declaration (not laid out yet) */
};

/* UnSkeletalRenderCPUSkin.h: the skinned vertices, rewritten each frame (0x20 bytes) */
class FFinalSkinVertexBuffer : public FVertexBuffer
{
public:
    class USkeletalMesh* SkeletalMesh;  /* 0x18 */
    DWORD LODIdx;                       /* 0x1c */
};

/* ShadowVolume.h (name assumed): the extrusion flags for shadow volume vertices (0x20 bytes) */
class FShadowExtrusionVertexBuffer : public FVertexBuffer
{
public:
    BYTE Opaque[0x8]; /* not laid out yet */
};

/* DecalVertexFactory.h: the decal interface of a decal vertex factory (0x90 bytes) */
class FDecalVertexFactoryBase
{
public:
    virtual ~FDecalVertexFactoryBase() {}

    BYTE Opaque[0x8c]; /* decal transform and clipping planes (not laid out yet) */
};

/* LocalDecalVertexFactory.h: a local vertex factory with the decal interface after it */
class FLocalDecalVertexFactory : public FLocalVertexFactory, public FDecalVertexFactoryBase
{
};

/* UnDecal.h: a decal attached to a primitive */
class FDecalInteraction
{
public:
    UDecalComponent* Decal;             /* 0x00 */
    BYTE OpaqueDecalInteraction[0xc8];  /* RenderData and the start of DecalState (not laid out yet) */
    INT SortOrder;                      /* 0xcc: DecalState.SortOrder (name assumed) */
};

/* UnSkeletalRender.h: the render data of a USkeletalMeshComponent (0x2c bytes) */
class FSkeletalMeshObject
{
public:
    virtual ~FSkeletalMeshObject();

    BYTE OpaqueBase[0x1c];            /* LOD info, LOD levels and distance factors (not laid out yet) */
    UBOOL bDecalFactoriesEnabled;     /* 0x20 */
    BYTE OpaqueTail[0x8];
};

/* UnSkeletalRenderCPUSkin.h */
class FSkeletalMeshObjectCPUSkin : public FSkeletalMeshObject
{
public:
    const FVertexFactory* GetVertexFactory(INT LODIndex, INT ChunkIdx) const;                                    /* 0x00952e90 */
    FDecalVertexFactoryBase* GetDecalVertexFactory(INT LODIndex, INT ChunkIdx, const FDecalInteraction* Decal);  /* 0x009683a0 */
    const FLocalShadowVertexFactory& GetShadowVertexFactory(INT LODIndex) const;
    void RemoveDecalInteraction_RenderingThread(UDecalComponent* DecalComponent);                                /* 0x0096f080 */

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
        FLocalVertexFactory VertexFactory;                          /* 0x000 */
        FFinalSkinVertexBuffer VertexBuffer;                        /* 0x240 */
        FShadowExtrusionVertexBuffer ShadowExtrusionVertexBuffer;   /* 0x260 */
        FLocalShadowVertexFactory ShadowVertexFactory;              /* 0x280 */
        FFinalSkinVertexBuffer DecalVertexBuffer;                   /* 0x45c (name assumed) */
        FDecalVertexFactoryInfoArray DecalVertexFactories;          /* 0x47c */
        UBOOL bResourcesInitialized;                                /* 0x488 */

        INT FindDecalVertexFactoryIndex(const UDecalComponent* Decal);              /* 0x009531d0 */
        FLocalDecalVertexFactory* GetDecalVertexFactory(const UDecalComponent* Decal); /* 0x0095fb20 */
        void RemoveDecalVertexFactory(const UDecalComponent* Decal);
        void ReleaseResources();                                                     /* 0x00953120 */
    };

    TArray<FSkeletalMeshObjectLOD> LODs; /* 0x2c */
};

#endif
