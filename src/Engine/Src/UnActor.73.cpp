// UnActor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x007570e0
bool AVehicle::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
