// Engine_06f0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x006ff870
template void TArray<FScalarParameterValueOverTime>::Empty(INT Slack);

// @baa 0x006ff9e0
template void TArray<FVectorParameterValueOverTime>::Empty(INT Slack);
