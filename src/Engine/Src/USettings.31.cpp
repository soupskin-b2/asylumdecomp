// USettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include <string.h>

/* Kit gaps: TArray::AddZeroed isn't declared (Array.h), and this file calls TArray<FIdToStringMapping>::Add out of
 * line (00d6ccc0). */
template<class T> struct TArrayAdd_ : public TArray<T>
{
	INT Add(INT Count);
	FORCEINLINE INT AddZeroed(INT Count)
	{
		const INT Index = Add(Count);
		memset(this->GetTypedData() + Index, 0, Count * sizeof(T));
		return Index;
	}
};

// @baa 0x00d799f0
/* The ids and names of a string setting's values; FALSE when there's no such setting. */
UBOOL USettings::GetStringSettingValueNames(INT StringSettingId, TArray<FIdToStringMapping>& Values)
{
	for (INT Index = 0; Index < LocalizedSettingsMappings.Num(); Index++)
	{
		if (LocalizedSettingsMappings(Index).Id == StringSettingId)
		{
			Values.Empty(LocalizedSettingsMappings(Index).ValueMappings.Num());
			((TArrayAdd_<FIdToStringMapping>&)Values).AddZeroed(LocalizedSettingsMappings(Index).ValueMappings.Num());
			for (INT ValueIdx = 0; ValueIdx < LocalizedSettingsMappings(Index).ValueMappings.Num(); ValueIdx++)
			{
				Values(ValueIdx).Id = LocalizedSettingsMappings(Index).ValueMappings(ValueIdx).Id;
				Values(ValueIdx).Name = LocalizedSettingsMappings(Index).ValueMappings(ValueIdx).Name;
			}
			return TRUE;
		}
	}
	return FALSE;
}
