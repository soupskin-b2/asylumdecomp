// TerrainEditor.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// The pure-virtual guard: report the error through the error device, which is
// passed as the first argument (the device itself, not `this` in ecx).
extern int __cdecl sub_00630f20(void* Device, const TCHAR* Fmt, const TCHAR* FuncName);
// @baa 0x012508a0
INT UThumbnailRenderer::GetThumbnailSize(INT, INT, INT, INT, INT)
{
    return sub_00630f20(GError, TEXT("Pure virtual not implemented (%s)"), TEXT("UThumbnailRenderer::GetThumbnailSize"));
}

// @baa 0x012506c0
void UThumbnailLabelRenderer::BuildLabelList(INT Layer, INT X, INT Y)
PURE_VIRTUAL(UThumbnailLabelRenderer::BuildLabelList, return;);
