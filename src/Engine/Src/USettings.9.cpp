// USettings.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* Kit gap: FSettingsData's structcpptext (GetData) isn't declared. */

// @baa 0x00d79720
/* Copies out the blob this holds, or empties OutData when it isn't a blob. */
void FSettingsData::GetData(TArray<BYTE>& OutData) const
{
	if (Type == SDT_Blob)
	{
		OutData.Empty(Value1);
		OutData.Add(Value1);
		memcpy(OutData.GetData(), (const void*)Value2.Dummy, Value1);
	}
	else
	{
		OutData.Empty();
	}
}

/* Kit gaps: FName's comparison, FScriptDelegate::IsCallable and the delegateNotifySettingValueUpdated glue
 * (inlined here) aren't declared. */
extern FName g_026c438c;
	/* NotifySettingValueUpdated */
struct FScriptDelegate_ : public FScriptDelegate
{
	FORCEINLINE UBOOL IsCallable(UObject* OwningObject) const
	{
		return FunctionName != FName(NAME_None) && (Object != NULL ? !Object->IsPendingKill() : (OwningObject != NULL && !OwningObject->IsPendingKill()));
	}
};

struct USettings_ : public USettings
{
	FORCEINLINE void delegateNotifySettingValueUpdated(FName SettingName)
	{
		struct Settings_eventNotifySettingValueUpdated_Parms
		{
			FName SettingName;
		} Parms;
		Parms.SettingName = SettingName;
		ProcessDelegate(g_026c438c, &__NotifySettingValueUpdated__Delegate, &Parms, NULL);
	}
};

// @baa 0x00d743a0
/* Sets a string setting's value index (adding the setting when asked to) and tells the NotifySettingValueUpdated
 * delegate when it changes. */
void USettings::SetStringSettingValue(INT StringSettingId, INT ValueIndex, UBOOL bShouldAutoAdd)
{
	UBOOL bChanged = FALSE;
	UBOOL bFound = FALSE;
	for (INT Index = 0; Index < LocalizedSettings.Num(); Index++)
	{
		if (LocalizedSettings(Index).Id == StringSettingId)
		{
			bChanged = LocalizedSettings(Index).ValueIndex != ValueIndex;
			LocalizedSettings(Index).ValueIndex = ValueIndex;
			bFound = TRUE;
			break;
		}
	}
	if (!bFound && bShouldAutoAdd == TRUE)
	{
		INT AddIndex = LocalizedSettings.Add(1);
		LocalizedSettings(AddIndex).Id = StringSettingId;
		LocalizedSettings(AddIndex).ValueIndex = ValueIndex;
		bChanged = TRUE;
	}
	if (bChanged && ((FScriptDelegate_&)__NotifySettingValueUpdated__Delegate).IsCallable(this))
	{
		((USettings_*)this)->delegateNotifySettingValueUpdated(GetStringSettingName(StringSettingId));
	}
}

// @baa 0x00d74690
/* Steps a string setting's value index by Direction, wrapping (or clamping by leaving it) at the ends, and tells
 * the NotifySettingValueUpdated delegate. */
UBOOL USettings::IncrementStringSettingValue(INT StringSettingId, INT Direction, UBOOL bShouldWrapValue)
{
	for (INT Index = 0; Index < LocalizedSettings.Num(); Index++)
	{
		if (LocalizedSettings(Index).Id == StringSettingId)
		{
			INT NewValue = LocalizedSettings(Index).ValueIndex + Direction;
			INT MaxValue = 0;
			for (INT MapIndex = 0; MapIndex < LocalizedSettingsMappings.Num(); MapIndex++)
			{
				if (LocalizedSettingsMappings(MapIndex).Id == StringSettingId)
				{
					MaxValue = LocalizedSettingsMappings(MapIndex).ValueMappings.Num() - 1;
				}
			}
			if ((NewValue < 0 || NewValue > MaxValue) && bShouldWrapValue)
			{
				NewValue = NewValue >= 0 ? 0 : MaxValue;
			}
			LocalizedSettings(Index).ValueIndex = NewValue;
			if (((FScriptDelegate_&)__NotifySettingValueUpdated__Delegate).IsCallable(this))
			{
				((USettings_*)this)->delegateNotifySettingValueUpdated(GetStringSettingName(StringSettingId));
			}
			return TRUE;
		}
	}
	return FALSE;
}
