// UnAnimTree.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00c64770
/* Nodes without a slider show no value text. */
FString UAnimNode::GetSliderDrawValue(INT SliderIndex)
{
    return FString(TEXT(""));
}
