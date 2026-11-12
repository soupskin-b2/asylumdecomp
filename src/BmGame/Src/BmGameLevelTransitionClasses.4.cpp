// BmGameLevelTransitionClasses.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

/* FName != NAME_None (UnName.h); the kit's FName has no operators. */
inline UBOOL operator!=(const FName& A, EName B) { return A.Index != B || A.Number != 0; }

/* Kit gap: TArray::AddItem isn't declared; this build calls it out of line (TArray<FName>::AddItem, 0x005cb920). */
template<class T> struct TArray_ : public TArray<T>
{
	INT AddItem(const T& Item);
};

// @baa 0x0156ce80
/* The levels on either side of this transition (those that are set). */
void ARLevelTransition::GetAllConnectedLevels(TArray<FName>& Out)
{
	Out.Empty();
	if (LevelInFront != NAME_None)
	{
		((TArray_<FName>&)Out).AddItem(LevelInFront);
	}
	if (LevelBehind != NAME_None)
	{
		((TArray_<FName>&)Out).AddItem(LevelBehind);
	}
}
