// RAnimNode_Cape.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* UFactory's flags (UE3: bCreateNew, bEditAfterNew, bEditorImport, bText) are in the kit's
 * _native2 blob at 0x50; this stand-in names them. */
struct FFactoryFlags
{
	BITFIELD bCreateNew : 1;
	BITFIELD bEditAfterNew : 1;
	BITFIELD bEditorImport : 1;
	BITFIELD bText : 1;
};

// @baa 0x01590410
void URPoseConfigFactoryNew::InitializeIntrinsicPropertyValues()
{
	SupportedClass = URPoseConfig::StaticClass();
	((FFactoryFlags*)_native2)->bCreateNew = TRUE;
	Description = TEXT("Animation Pose Config");
}
