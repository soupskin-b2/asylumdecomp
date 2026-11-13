// UnUIDataStores.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x00d93a90
/* UIDataStore_OnlinePlayerData.cpp: the gamer points of every unlocked achievement, capped at 1000.
 * (The elements are read through the array's const accessor.) */
INT UUIDataProvider_PlayerAchievements::GetTotalGamerScore()
{
	INT Result = 0;
	for (INT AchievementIdx = 0; AchievementIdx < Achievements.Num(); AchievementIdx++)
	{
		const FAchievementDetails& Achievement = ((const TArray<FAchievementDetails>&)Achievements)(AchievementIdx);
		if (Achievement.bWasAchievedOnline || Achievement.bWasAchievedOffline)
		{
			Result += Achievement.GamerPoints;
		}
	}
	return Min(1000, Result);
}
