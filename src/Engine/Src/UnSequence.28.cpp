// UnSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x00f24ab0
void USequenceFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = USequence::StaticClass();
	new(Formats) FString(TEXT("t3d;Unreal Sequence"));
	bCreateNew = FALSE;
	bEditorImport = TRUE;
	bText = TRUE;
}
