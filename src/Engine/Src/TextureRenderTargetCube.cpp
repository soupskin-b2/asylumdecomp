// TextureRenderTargetCube.cpp (part 1 of 3): 7 functions
// Placed here by: class 6, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00756090
int UTextureRenderTargetCube::vf_000(void) { return 1; }

// @baa 0x00756150
int UTextureRenderTargetCube::GetMaterialType(void) { return 32; }

// @baa 0x007613a0
FLOAT UTextureRenderTargetCube::GetSurfaceWidth() {
    int param_1 = (int)this;

  return (float10)*(int *)(param_1 + 0xb4);
}

// @baa 0x00761420
IMPLEMENT_CLASS_AT(UTextureRenderTargetCube, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\TextureRenderTargetCube.cpp", 12);

// @baa 0x00767170
// @baa 0x007684d0
// @baa 0x0076c7c0
