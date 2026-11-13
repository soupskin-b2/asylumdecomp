// UnSequence.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

// @baa 0x008fe9c0
template USequenceEvent* CastChecked<USequenceEvent>(UObject* Src);

// @baa 0x008fed10
template USequence* CastChecked<USequence>(UObject* Src);
