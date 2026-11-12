// MarkUnusedScriptNoExportCommandlet.cpp: 5 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0174c9f0
IMPLEMENT_CLASS_AT(UMarkUnusedScriptNoExportCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonEditor\\Src\\MarkUnusedScriptNoExportCommandlet.cpp", 6);

// @baa 0x0174d8f0

// @baa 0x0173d9c0

// @baa 0x0173dad0
int UMarkUnusedScriptNoExportCommandlet::vf_000(void) { return 1; }

// @baa 0x0173dae0
bool UMarkUnusedScriptNoExportCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
