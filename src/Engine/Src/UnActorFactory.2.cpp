// UnActorFactory.cpp (part 2 of 2): 2 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x00c4c840
template APointLight* Cast<APointLight>(UObject* Src);

// @baa 0x00c4c8a0
template ASpotLight* Cast<ASpotLight>(UObject* Src);
