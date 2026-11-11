// InterpEditor.cpp (part 3 of 3): 4 functions
// Placed here by: callers 3, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x012c3fc0
template UInterpTrackToggle* Cast<UInterpTrackToggle>(UObject* Src);

// @baa 0x012c4020
template UInterpTrackVisibility* Cast<UInterpTrackVisibility>(UObject* Src);

// @baa 0x012c4080
template UInterpTrackSound* Cast<UInterpTrackSound>(UObject* Src);

// @baa 0x012c40e0
template UInterpTrackEvent* Cast<UInterpTrackEvent>(UObject* Src);
