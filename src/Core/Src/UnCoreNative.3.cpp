// UnCoreNative.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x005b0ed0
void UTextBufferFactory::InitializeIntrinsicPropertyValues()
{
	new(Formats) FString(TEXT("txt;Text files"));
	SupportedClass = UTextBuffer::StaticClass();
	bCreateNew = FALSE;
	bText = TRUE;
}
