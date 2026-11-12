// UnCoreNative.cpp: 1 function
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

// @baa 0x005b0ed0
void UTextBufferFactory::InitializeIntrinsicPropertyValues()
{
	new(Formats) FString(TEXT("txt;Text files"));
	SupportedClass = UTextBuffer::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = FALSE;
	((FFactoryFlags*)_native2)->bText = TRUE;
}
