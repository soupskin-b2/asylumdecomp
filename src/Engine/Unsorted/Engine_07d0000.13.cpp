// Engine_07d0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x007da4b0
/* TArray<WORD>::AddUniqueItem, out of line here (bone maps) */
template INT TArray<WORD>::AddUniqueItem(const WORD& Item);
