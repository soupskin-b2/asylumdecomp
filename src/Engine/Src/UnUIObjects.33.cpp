// UnUIObjects.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x014df1a0
void UUISceneFactoryText::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UUIScene::StaticClass();
	bCreateNew = FALSE;
	bText = TRUE;
	new(Formats) FString(TEXT("t3d;UI Scene"));
}
