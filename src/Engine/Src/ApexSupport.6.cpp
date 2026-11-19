// ApexSupport.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x00f23b20
void UApexDestructibleAssetFactory::InitializeIntrinsicPropertyValues()
{
	bEditorImport = TRUE;
	SupportedClass = UApexDestructibleAsset::StaticClass();
	Description = TEXT("ApexDestructibleAsset");
	new(Formats) FString(TEXT("pda;Apex Destructible Asset"));
}
