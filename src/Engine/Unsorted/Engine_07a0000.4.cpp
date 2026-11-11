// Engine_07a0000.cpp (part 4 of 4): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x007aa200
template UNetConnection* Cast<UNetConnection>(UObject* Src);

// @baa 0x007aa260
template UAudioComponent* Cast<UAudioComponent>(UObject* Src);

// @baa 0x007aa2c0
template APlayerController* Cast<APlayerController>(UObject* Src);

// @baa 0x007aa320
template AVolumePathNode* Cast<AVolumePathNode>(UObject* Src);

// @baa 0x007aa380
template AVehicle* Cast<AVehicle>(UObject* Src);

// @baa 0x007aa3e0
template AInterpActor* Cast<AInterpActor>(UObject* Src);

// @baa 0x007aa450
template UDecalComponent* Cast<UDecalComponent>(UObject* Src);
