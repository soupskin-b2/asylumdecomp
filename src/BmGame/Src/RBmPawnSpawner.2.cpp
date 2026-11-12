// RBmPawnSpawner.cpp (part 2 of 2): 5 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x01603020
template ARBMPathNode_VariablePositionTraverse* Cast<ARBMPathNode_VariablePositionTraverse>(UObject* Src);

// @baa 0x01603080
template ARBMPathNode_Ladder* Cast<ARBMPathNode_Ladder>(UObject* Src);

// @baa 0x016030e0
template ARCornerPoint* Cast<ARCornerPoint>(UObject* Src);

// @baa 0x015fea50
template ARBMPathNode_CrossLevel* Cast<ARBMPathNode_CrossLevel>(UObject* Src);

// @baa 0x015feab0
template ARBMPathNode_SpecialMove* Cast<ARBMPathNode_SpecialMove>(UObject* Src);
