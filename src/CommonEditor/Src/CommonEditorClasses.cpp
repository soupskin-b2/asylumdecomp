// CommonEditorClasses.cpp: 7 functions
// Placed here by: callers 2, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x017415a0
IMPLEMENT_CLASS_AT(URActorFactoryStaticMeshNoCL, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonEditor\\Src\\CommonEditorClasses.cpp", 5);

// @baa 0x017415c0
// @baa 0x017470e0
IMPLEMENT_CLASS_AT(URGenericBrowserType, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonEditor\\Src\\CommonEditorClasses.cpp", 6);

// @baa 0x01747760

// @baa 0x0173aa00

// @baa 0x0173ab10
int URGenericBrowserType::vf_000(void) { return 1; }

// @baa 0x0173ab20
bool URGenericBrowserType::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
