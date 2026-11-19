// UPartyBeacon.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/AppMath.h"

// @baa 0x00e374e0
/* Hands out a random one of the remaining team choices (each team once), or team 0 with a single team. */
INT UPartyBeaconHost::GetTeamAssignment()
{
	if (NumTeams > 1)
	{
		INT Index = appTrunc(appFrand() * PotentialTeamChoices.Num());
		INT TeamNum = PotentialTeamChoices(Index);
		PotentialTeamChoices.Remove(Index);
		return TeamNum;
	}
	return 0;
}

#line 37 "candidate.cpp"
