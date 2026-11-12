// UOnlineProfileSettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Enums.h"

/* Kit gap: FSettingsData's structcpptext (GetData overloads) isn't declared. */
struct FSettingsData_ : public FSettingsData
{
	FORCEINLINE void GetData(INT& OutData) const
	{
		if (Type == SDT_Int32)
		{
			OutData = Value1;
		}
		else
		{
			OutData = 0;
		}
	}
};

// @baa 0x00d72d20
/* Returns the id of an id-mapped setting's current value and, optionally, its index in the value mappings. */
UBOOL UOnlineProfileSettings::GetProfileSettingValueId(INT ProfileSettingId, INT& ValueId, INT* ListIndex)
{
	for (INT MapIndex = 0; MapIndex < ProfileMappings.Num(); MapIndex++)
	{
		const FSettingsPropertyPropertyMetaData& MetaData = ProfileMappings(MapIndex);
		if (MetaData.Id == ProfileSettingId)
		{
			for (INT ProfileIndex = 0; ProfileIndex < ProfileSettings.Num(); ProfileIndex++)
			{
				const FOnlineProfileSetting& Setting = ProfileSettings(ProfileIndex);
				if (Setting.ProfileSetting.PropertyId == ProfileSettingId)
				{
					if (MetaData.MappingType == PVMT_IdMapped)
					{
						((const FSettingsData_&)Setting.ProfileSetting.Data).GetData(ValueId);
						if (ListIndex)
						{
							for (INT Index = 0; Index < MetaData.ValueMappings.Num(); Index++)
							{
								if (MetaData.ValueMappings(Index).Id == ValueId)
								{
									*ListIndex = Index;
									break;
								}
							}
						}
						return TRUE;
					}
					return FALSE;
				}
			}
		}
	}
	return FALSE;
}
