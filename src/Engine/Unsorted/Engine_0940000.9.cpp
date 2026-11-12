// Engine_0940000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#define BAA_OUTLINE_NEW
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x0094fec0
/* the out-of-line new(TArray<UMaterialInterface*>&) instance (Array.h line 1275) */
template void* operator new<UMaterialInterface*>(size_t Size, TArray<UMaterialInterface*>& Array);

// @baa 0x0094fe20
/* the out-of-line new(TArray<UBOOL>&) instance (Array.h line 1275); FNativeElem_007b9350 is the kit's UBOOL element */
template void* operator new<FNativeElem_007b9350>(size_t Size, TArray<FNativeElem_007b9350>& Array);
