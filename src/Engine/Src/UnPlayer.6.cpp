// UnPlayer.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* FSplitscreenData with its implicit destructor kept out of line, as in the exe */
struct FSplitscreenData_ : public FSplitscreenData
{
    ~FSplitscreenData_();
};

// @baa 0x0089e0b0
/* TArray<FSplitscreenData>::~TArray */
template TArray<FSplitscreenData_>::~TArray();

#line 50 "candidate.cpp"
