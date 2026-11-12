// GFxUI_0e50000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#pragma auto_inline(off)
#pragma auto_inline(on)
// @baa 0x00e5d260
/* UGFxEngine's destructor (DECLARE_CLASS's inline ~UGFxEngine: ConditionalDestroy, then
 * ~TArray<FGCReference> GCReferences, then ~UObject). */
void Destroy(UGFxEngine* Engine)
{
    Engine->UGFxEngine::~UGFxEngine();
}
