// RTapePlayer.cpp: 5 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01658900
IMPLEMENT_CLASS_AT(ARTapePlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RTapePlayer.cpp", 9);

// @baa 0x01659d10

// @baa 0x0163c130

// @baa 0x0163c240
int ARTapePlayer::vf_000(void) { return 1; }

// @baa 0x0163c250
bool ARTapePlayer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
