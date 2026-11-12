// GFxUIEditorFactories.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x014ff360
template UGFxMovieFactory* Cast<UGFxMovieFactory>(UObject* Src);

// @baa 0x014fa970
template UTextureFactory* Cast<UTextureFactory>(UObject* Src);
