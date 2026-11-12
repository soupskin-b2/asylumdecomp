// UOnlineProfileSettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Enums.h"
#include <new.h>

// @baa 0x00d73870
/* Makes sure the profile version is among the ids read. */
void UOnlineProfileSettings::AppendVersionToReadIds()
{
	/* ProfileSettingIds.AddUniqueItem(PSI_ProfileVersionNum), written out: the kit's TArray has no AddUniqueItem/AddItem
	 * (this build's AddItem is Add(1) plus a placement new on GetTypedData()[Index], with no operator() check). */
	for (INT Index = 0; Index < ProfileSettingIds.Num(); Index++)
	{
		if (ProfileSettingIds(Index) == PSI_ProfileVersionNum)
		{
			return;
		}
	}
	const INT NewIndex = ProfileSettingIds.Add(1);
	new(&ProfileSettingIds.GetTypedData()[NewIndex]) INT(PSI_ProfileVersionNum);
}
