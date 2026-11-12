// RAnimUtil_RagdollPlayer.cpp: 5 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x015c4050
IMPLEMENT_CLASS_AT(URAnimUtil_RagdollPlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_RagdollPlayer.cpp", 14);

// @baa 0x015c90a0

// @baa 0x015c3070

// @baa 0x015c3180
int URAnimUtil_RagdollPlayer::vf_000(void) { return 1; }

// @baa 0x015c3190
bool URAnimUtil_RagdollPlayer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
