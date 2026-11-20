// UnrealEd_1370000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

/* This is TArray<UPackage*>::AddUniqueItem's out-of-line copy (collecting the found EditorOnlyContentPackages,
 * caller 01384460). */
// @baa 0x01374090
template INT TArray<UPackage*>::AddUniqueItem(UPackage* const& Item);
