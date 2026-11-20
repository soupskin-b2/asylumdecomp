// UnLightMap.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* FOnlineStatsRow with its implicit destructor kept out of line, as in the exe */
struct FOnlineStatsRow_ : public FOnlineStatsRow
{
    ~FOnlineStatsRow_();
};

// @baa 0x00d3ef90
/* TArray<FOnlineStatsRow>::~TArray */
template TArray<FOnlineStatsRow_>::~TArray();

#line 50 "candidate.cpp"
