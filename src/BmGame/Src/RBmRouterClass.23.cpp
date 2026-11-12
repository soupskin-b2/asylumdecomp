// RBmRouterClass.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

// @baa 0x01621e70
void URBMRouterPath::ClearPath()
{
	PathNodes.Empty();
	SmoothedNodes.Empty();
	ShortenProportion = 1.f;
}
