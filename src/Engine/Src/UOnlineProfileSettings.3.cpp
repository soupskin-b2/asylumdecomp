// UOnlineProfileSettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include <new.h>
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* Kit gap: TArray::AddItem (Array.h) isn't declared. */
template<class T> struct TArrayAddItem_ : public TArray<T>
{
	FORCEINLINE INT AddItem(const T& Item)
	{
		const INT Index = this->Add(1);
		new(this->GetTypedData() + Index) T(Item);
		return Index;
	}
};

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
					((TArrayAddItem_<FName>&)Values).AddItem(MetaData.ValueMappings(ValueIdx).Name);
				}
				return TRUE;
			}
			return FALSE;
		}
	}
	return FALSE;
}
