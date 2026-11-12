// UnSceneCapture.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x008b6990
/* FinishDestroy */
void ASceneCaptureCubeMapActor::vf_02c()
{
    if (StaticMesh)
    {
        // Clear the material instance this actor created from the mesh's materials.
        for (INT MatIdx = 0; MatIdx < StaticMesh->Materials.Num(); MatIdx++)
        {
            if (StaticMesh->Materials(MatIdx) == CubeMaterialInst)
            {
                StaticMesh->Materials(MatIdx) = NULL;
            }
        }
    }
    CubeMaterialInst = NULL;

    Super::vf_02c();
}

// @baa 0x008b6b70
/* FinishDestroy */
void ASceneCaptureReflectActor::vf_02c()
{
    if (StaticMesh)
    {
        // Clear the material instance this actor created from the mesh's materials.
        for (INT MatIdx = 0; MatIdx < StaticMesh->Materials.Num(); MatIdx++)
        {
            if (StaticMesh->Materials(MatIdx) == ReflectMaterialInst)
            {
                StaticMesh->Materials(MatIdx) = NULL;
            }
        }
    }
    ReflectMaterialInst = NULL;

    Super::vf_02c();
}
