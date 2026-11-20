// Engine_0cb0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

/* This is TArray<USoundNodeWave*>::AddUniqueItem's out-of-line copy (USoundCue::RecursiveFindNode<USoundNodeWave>,
 * caller 00cdc110). */
// @baa 0x00cbef70
template INT TArray<USoundNodeWave*>::AddUniqueItem(USoundNodeWave* const& Item);
