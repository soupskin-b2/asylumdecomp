// UnAudio.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

/* This is TArray<USoundNodeAttenuation*>::AddUniqueItem's out-of-line copy
 * (USoundCue::RecursiveFindNode<USoundNodeAttenuation>, caller 00cd05c0). */
// @baa 0x00cbeec0
template INT TArray<USoundNodeAttenuation*>::AddUniqueItem(USoundNodeAttenuation* const& Item);
