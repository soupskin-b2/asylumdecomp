// TextureFlipbook.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* UFactory's flags (UE3: bCreateNew, bEditAfterNew, bEditorImport, bText) are in the kit's
 * _native2 blob at 0x50; this stand-in names them. */
struct FFactoryFlags
{
	BITFIELD bCreateNew : 1;
	BITFIELD bEditAfterNew : 1;
	BITFIELD bEditorImport : 1;
	BITFIELD bText : 1;
};

// @baa 0x00f24b70
void UReimportTextureFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UTextureFlipBook::StaticClass();
	new(Formats) FString(TEXT("bmp;Texture"));
	new(Formats) FString(TEXT("pcx;Texture"));
	new(Formats) FString(TEXT("tga;Texture"));
	new(Formats) FString(TEXT("float;Texture"));
	new(Formats) FString(TEXT("psd;Texture"));
	((FFactoryFlags*)_native2)->bCreateNew = FALSE;
}
