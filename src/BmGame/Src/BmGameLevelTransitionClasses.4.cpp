// BmGameLevelTransitionClasses.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

/* TArray<FName>::AddItem is out of line in the exe (005cb920) */
extern template INT TArray<FName>::AddItem(const FName& Item);

// @baa 0x0156ce80
/* The levels on either side of this transition (those that are set). */
void ARLevelTransition::GetAllConnectedLevels(TArray<FName>& Out)
{
	Out.Empty();
	if (LevelInFront != NAME_None)
	{
		Out.AddItem(LevelInFront);
	}
	if (LevelBehind != NAME_None)
	{
		Out.AddItem(LevelBehind);
	}
}
