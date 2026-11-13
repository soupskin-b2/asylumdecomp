// Kismet.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

// @baa 0x011a12f0
template USequenceObjectHelper* CastChecked<USequenceObjectHelper>(UObject* Src);

// @baa 0x011a14c0
template USequenceObject* CastChecked<USequenceObject>(UObject* Src);
