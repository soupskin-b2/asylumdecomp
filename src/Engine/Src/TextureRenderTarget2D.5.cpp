// TextureRenderTarget2D.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"
#include "ue3/Native.h"

extern FPixelFormatInfo GPixelFormats[];
// @baa 0x0075c5b0
 /* 0x025da760 */
/* Render target sizes are rounded down to whole compression blocks of their format and kept within 1..2048. */
void UTextureRenderTarget2D::PostEditChange(UProperty* PropertyThatChanged)
{
    const INT MaxSize = 2048;
    SizeX = Clamp<INT>(SizeX - (SizeX % GPixelFormats[Format].BlockSizeX), 1, MaxSize);
    SizeY = Clamp<INT>(SizeY - (SizeY % GPixelFormats[Format].BlockSizeY), 1, MaxSize);
    Super::PostEditChange(PropertyThatChanged);
}
