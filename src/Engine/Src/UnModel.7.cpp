// UnModel.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x00f23250
void UModelFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UModel::StaticClass();
	new(Formats) FString(TEXT("t3d;Unreal model text"));
	bCreateNew = FALSE;
	bText = TRUE;
}
