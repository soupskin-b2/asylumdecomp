// TerrainEditor.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// The pure-virtual guard: report the error through the error device, which is
// passed as the first argument (the device itself, not `this` in ecx).
extern int __cdecl sub_00630f20(void* Device, const TCHAR* Fmt, const TCHAR* FuncName);
// @baa 0x012508a0
void UThumbnailRenderer::GetThumbnailSize(UObject* Object, EThumbnailPrimType PrimType, FLOAT Zoom, DWORD& OutWidth, DWORD& OutHeight)
{
    sub_00630f20(GError, TEXT("Pure virtual not implemented (%s)"), TEXT("UThumbnailRenderer::GetThumbnailSize"));
}

// @baa 0x012506c0
void UThumbnailLabelRenderer::BuildLabelList(INT Layer, INT X, INT Y)
PURE_VIRTUAL(UThumbnailLabelRenderer::BuildLabelList, return;);

#include "ue3/ConstructObject.h"

// @baa 0x01250b30
template USkeletalMeshComponent* ConstructObject<USkeletalMeshComponent>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 57 "candidate.cpp"

// @baa 0x0125b3d0
template UTerrainEditOptions* ConstructObject<UTerrainEditOptions>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
