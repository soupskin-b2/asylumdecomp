// UnrealEd_1280000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

/* This is TArray<USpeedTree*>::AddUniqueItem's out-of-line copy (collecting the SpeedTree assets of the
 * SpeedTreeActors, caller 01287e60). */
// @baa 0x01284230
template INT TArray<USpeedTree*>::AddUniqueItem(USpeedTree* const& Item);
