// InterpEditorTools.cpp (part 4 of 5): 5 functions
// Placed here by: neighbours 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x012e2310
template UInterpFilter_Custom* Cast<UInterpFilter_Custom>(UObject* Src);

// @baa 0x012e2370
template UInterpTrackParticleReplay* Cast<UInterpTrackParticleReplay>(UObject* Src);

// @baa 0x012e23d0
template UInterpTrackFloatBase* Cast<UInterpTrackFloatBase>(UObject* Src);

// @baa 0x012e25b0
template UInterpTrackVectorBase* Cast<UInterpTrackVectorBase>(UObject* Src);

// @baa 0x012e2610
template UInterpGroup* Cast<UInterpGroup>(UObject* Src);
