// InterpEditorTools.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

// @baa 0x012f3880
template UInterpTrackHelper* CastChecked<UInterpTrackHelper>(UObject* Src);

// @baa 0x012f3a50
template UInterpTrackAnimControl* CastChecked<UInterpTrackAnimControl>(UObject* Src);

// @baa 0x012f3c20

// @baa 0x012f4190
template UInterpTrackToggle* CastChecked<UInterpTrackToggle>(UObject* Src);

// @baa 0x012f3df0
template UInterpTrackDirector* CastChecked<UInterpTrackDirector>(UObject* Src);

// @baa 0x012f3fc0
template UInterpTrackFloatProp* CastChecked<UInterpTrackFloatProp>(UObject* Src);

// @baa 0x012f4360
template UInterpTrackVectorProp* CastChecked<UInterpTrackVectorProp>(UObject* Src);

// @baa 0x012f4530
template UInterpTrackColorProp* CastChecked<UInterpTrackColorProp>(UObject* Src);
