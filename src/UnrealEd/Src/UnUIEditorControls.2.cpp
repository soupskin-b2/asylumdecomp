// UnUIEditorControls.cpp (part 2 of 2): 3 functions
// Placed here by: callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x0149f410
template UUIEvent* Cast<UUIEvent>(UObject* Src);

// @baa 0x0149f470
template UUIEvent_ProcessInput* Cast<UUIEvent_ProcessInput>(UObject* Src);

// @baa 0x0149f4d0
template USequenceCondition* Cast<USequenceCondition>(UObject* Src);
