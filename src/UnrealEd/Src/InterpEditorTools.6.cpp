// InterpEditorTools.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x012e22b0
template UInterpTrackEvent* Cast<UInterpTrackEvent>(UObject* Src);

// @baa 0x012e2430
template UInterpTrackSound* Cast<UInterpTrackSound>(UObject* Src);

// @baa 0x012e2490
template UInterpTrackToggle* Cast<UInterpTrackToggle>(UObject* Src);

// @baa 0x012e24f0
template UInterpTrackVisibility* Cast<UInterpTrackVisibility>(UObject* Src);

// @baa 0x012e2550
template UInterpTrackAnimControl* Cast<UInterpTrackAnimControl>(UObject* Src);
