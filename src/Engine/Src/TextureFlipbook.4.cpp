// TextureFlipbook.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gaps: FPixelFormatInfo / GPixelFormats (0x025da760, UnRHI) and FString::Printf (as the linker specialised it
 * for these argument types, 0x00766af0) aren't declared. */
struct FPixelFormatInfo
{
	const TCHAR* Name;
	INT BlockSizeX;
	INT BlockSizeY;
	INT BlockSizeZ;
	INT BlockBytes;
	INT NumComponents;
	DWORD PlatformFormat;
	DWORD Flags;
	UBOOL Supported;
};

extern FPixelFormatInfo g_025da760[];
#define GPixelFormats g_025da760
// @baa 0x007676a0
FString UTextureFlipBook::GetDesc()
{
	return FString::Printf(TEXT("%dx%d[%s%s] %dx%d"), SizeX, SizeY, GPixelFormats[Format].Name, DeferCompression ? TEXT("*") : TEXT(""), HorizontalImages, VerticalImages);
}
