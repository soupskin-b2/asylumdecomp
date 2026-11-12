// UPartyBeacon.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/AppMath.h"

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

// @baa 0x00e374e0
/* Hands out a random one of the remaining team choices (each team once), or team 0 with a single team. */
INT UPartyBeaconHost::GetTeamAssignment()
{
	if (NumTeams > 1)
	{
		INT Index = appTrunc(appFrand() * PotentialTeamChoices.Num());
		INT TeamNum = ((TArrayAt_<INT>&)PotentialTeamChoices).At(Index);
		PotentialTeamChoices.Remove(Index);
		return TeamNum;
	}
	return 0;
}

#line 37 "candidate.cpp"
