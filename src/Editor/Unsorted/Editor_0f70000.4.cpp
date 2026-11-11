// Editor_0f70000.cpp (part 4 of 5): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00f73600
IMPLEMENT_CLASS_AT(UTransactor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdTran.cpp", 631);

// @baa 0x00f73710
int UTransactor::vf_000(void) { return 1; }

// @baa 0x00f73720
bool UTransactor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
