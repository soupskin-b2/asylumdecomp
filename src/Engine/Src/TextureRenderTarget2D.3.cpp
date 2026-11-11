// TextureRenderTarget2D.cpp (part 3 of 3): 2 functions
// Placed here by: callers 1, class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00767160
IMPLEMENT_CLASS_AT(UScriptedTexture, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\TextureRenderTarget2D.cpp", 382);

// @baa 0x0076c780
bool UTextureRenderTarget2D::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
