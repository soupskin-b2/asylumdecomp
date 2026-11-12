// GamePlayerInput.cpp: 4 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00e285d0
IMPLEMENT_CLASS_AT(UGamePlayerInput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GameFramework\\Src\\GamePlayerInput.cpp", 8);

// @baa 0x00e285f0

// @baa 0x00e25a30
int UGamePlayerInput::vf_000(void) { return 1; }

// @baa 0x00e25a40
bool UGamePlayerInput::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
