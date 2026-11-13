// RCrowd.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
	using TArray<T>::ArrayNum;
	__forceinline T& At(INT i)
	{
#line 560 BAA_ARRAY_FILE
		check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
		return this->GetTypedData()[i];
	}
};

// @baa 0x016d7020
/* Slot 0x354 (unnamed in the kit): how many agents belong to flock FlockID. */
INT ARCrowdManager::GetNumAgentsInFlock(INT FlockID)
{
	INT Count = 0;
	for (INT i = 0; i < Agents.Num(); i++)
	{
		if (((TArrayAt_<ARCrowdAgent*>&)Agents).At(i)->FlockID == FlockID)
		{
			Count++;
		}
	}
	return Count;
}

#line 35 "candidate.cpp"
