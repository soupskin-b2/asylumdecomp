// UnAudio.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x0078ffb0
/* the out-of-line TArray<UAudioComponent*>::AddUniqueItem instantiation (UAudioDevice::AudioComponents) */
template INT TArray<UAudioComponent*>::AddUniqueItem(UAudioComponent* const& Item);
