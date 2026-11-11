// AnimSetViewerTools.cpp (part 3 of 4): 4 functions
// Placed here by: neighbours 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x01339240
template UAnimNode* Cast<UAnimNode>(UObject* Src);

// @baa 0x013392a0
template USkelControlBase* Cast<USkelControlBase>(UObject* Src);

// @baa 0x01339300
template UMorphNodeBase* Cast<UMorphNodeBase>(UObject* Src);

// @baa 0x01339460
template UAnimObject* Cast<UAnimObject>(UObject* Src);
