// TextureFlipbook.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* FString::Printf here is the linker's copy specialised for these argument types (0x00766af0). */
// @baa 0x007676a0
FString UTextureFlipBook::GetDesc()
{
	return FString::Printf(TEXT("%dx%d[%s%s] %dx%d"), SizeX, SizeY, GPixelFormats[Format].Name, DeferCompression ? TEXT("*") : TEXT(""), HorizontalImages, VerticalImages);
}
