// BmGameLevelTransitionClasses.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

extern template ARGameRI* Cast<ARGameRI>(UObject* Src);
// @baa 0x0158c460
ARGameRI* ARLevelTransition::vf_354()
{
    return Cast<ARGameRI>(WorldInfo->GRI);
}

// @baa 0x0158d0d0
INT ARPlayerStartInLevel::vf_3b0()
{
    return (INT)Cast<ARGameRI>(WorldInfo->GRI);
}
