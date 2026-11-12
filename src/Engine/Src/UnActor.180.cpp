// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x007717e0
bool UForcedReachSpec::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
