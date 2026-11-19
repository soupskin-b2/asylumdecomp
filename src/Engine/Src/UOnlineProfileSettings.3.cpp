// UOnlineProfileSettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include <new.h>
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x00d728f0
/* The names of an id-mapped profile setting's values, added to Values; FALSE when the setting isn't id mapped. */
INT UOnlineProfileSettings::GetProfileSettingValues(INT ProfileSettingId, TArray<FName>& Values)
{
	for (INT Index = 0; Index < ProfileMappings.Num(); Index++)
	{
		const FSettingsPropertyPropertyMetaData& MetaData = ProfileMappings(Index);
		if (MetaData.Id == ProfileSettingId)
		{
			if (MetaData.MappingType == PVMT_IdMapped)
			{
				for (INT ValueIdx = 0; ValueIdx < MetaData.ValueMappings.Num(); ValueIdx++)
				{
					Values.AddItem(MetaData.ValueMappings(ValueIdx).Name);
				}
				return TRUE;
			}
			return FALSE;
		}
	}
	return FALSE;
}
