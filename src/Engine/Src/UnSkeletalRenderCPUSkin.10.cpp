// UnSkeletalRenderCPUSkin.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/SkeletalRender.h"

// @baa 0x00953120
/* start releasing all of the LOD's render resources */
void FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD::ReleaseResources()
{
    BeginReleaseResource(&VertexFactory);
    BeginReleaseResource(&VertexBuffer);
    BeginReleaseResource(&ShadowExtrusionVertexBuffer);
    BeginReleaseResource(&DecalVertexBuffer);

    for (INT DecalIdx = 0; DecalIdx < DecalVertexFactories.Num(); DecalIdx++)
    {
        BeginReleaseResource(&DecalVertexFactories(DecalIdx).DecalVertexFactory);
    }

    bResourcesInitialized = FALSE;
}
