// TextureFlipbook.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x00f24b70
void UReimportTextureFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UTextureFlipBook::StaticClass();
	new(Formats) FString(TEXT("bmp;Texture"));
	new(Formats) FString(TEXT("pcx;Texture"));
	new(Formats) FString(TEXT("tga;Texture"));
	new(Formats) FString(TEXT("float;Texture"));
	new(Formats) FString(TEXT("psd;Texture"));
	bCreateNew = FALSE;
}
