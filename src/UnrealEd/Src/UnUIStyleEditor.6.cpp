// UnUIStyleEditor.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

// @baa 0x014e47c0
template UUIComp_Event* CastChecked<UUIComp_Event>(UObject* Src);

// @baa 0x014e45f0
template UUISequence* CastChecked<UUISequence>(UObject* Src);

// @baa 0x014e4990
template UUIState* CastChecked<UUIState>(UObject* Src);

// @baa 0x014e4b60
template UUIStyle_Combo* CastChecked<UUIStyle_Combo>(UObject* Src);

// @baa 0x014e4d30
template UUIStyle_Text* CastChecked<UUIStyle_Text>(UObject* Src);

// @baa 0x014e4f00
template UUIStyle_Image* CastChecked<UUIStyle_Image>(UObject* Src);
