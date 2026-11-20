// UnParticleComponents.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* FParticleSystemReplayFrame with its implicit destructor kept out of line, as in the exe */
struct FParticleSystemReplayFrame_ : public FParticleSystemReplayFrame
{
    ~FParticleSystemReplayFrame_();
};

// @baa 0x00b6fc10
/* TArray<FParticleSystemReplayFrame>::~TArray */
template TArray<FParticleSystemReplayFrame_>::~TArray();

#line 50 "candidate.cpp"
