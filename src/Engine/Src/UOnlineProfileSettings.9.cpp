// UOnlineProfileSettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Implement.h"
#include "ue3/Enums.h"

/* Inline here, out of line in the kit: FScriptDelegate::IsCallable (0x00784f80), FSettingsData's SetData/comparison
 * structcpptext and the delegateNotifySettingValueUpdated glue (00d67120). */

extern FName g_026c438c;
	/* NotifySettingValueUpdated */
struct FScriptDelegate_ : public FScriptDelegate
{
	FORCEINLINE UBOOL IsCallable(UObject* OwningObject) const
	{
		return FunctionName != FName(NAME_None) && (Object != NULL ? !Object->IsPendingKill() : (OwningObject != NULL && !OwningObject->IsPendingKill()));
	}
};

/* TArray<FOnlineProfileSetting>::Add (0x00d6cf90) is out of line in this build; Array.h's body. */
template<> __declspec(noinline) INT TArray<FOnlineProfileSetting>::Add(INT Count)
{
#line 779 BAA_ARRAY_FILE
    check(Count>=0);
    const INT OldNum = ArrayNum;
    if ((ArrayNum += Count) > ArrayMax)
    {
        ArrayMax = AllocatorInstance.CalculateSlack(ArrayNum, ArrayMax, sizeof(FOnlineProfileSetting));
        AllocatorInstance.ResizeAllocation(OldNum, ArrayMax, sizeof(FOnlineProfileSetting));
    }
    return OldNum;
}

#line 100 "UOnlineProfileSettings.cpp"
struct UOnlineProfileSettings_ : public UOnlineProfileSettings
{
	FORCEINLINE void delegateNotifySettingValueUpdated(FName SettingName)
	{
		struct OnlineProfileSettings_eventNotifySettingValueUpdated_Parms
		{
			FName SettingName;
		} Parms;
		Parms.SettingName = SettingName;
		ProcessDelegate(g_026c438c, &__NotifySettingValueUpdated__Delegate, &Parms, NULL);
	}
};

/* TArray<FOnlineProfileSetting>::Empty (0x00d7f8d0) is out of line in this build; Array.h's body. */
template<> __declspec(noinline) void TArray<FOnlineProfileSetting>::Empty(INT Slack)
{
    DestructItems(0, ArrayNum);
    ArrayNum = 0;
    if (ArrayMax != Slack)
    {
        ArrayMax = Slack;
        AllocatorInstance.ResizeAllocation(0, ArrayMax, sizeof(FOnlineProfileSetting));
    }
}

/* The structcpptext assignments of FSettingsProperty and FOnlineProfileSetting (inline here). */
struct FSettingsProperty_ : public FSettingsProperty
{
	FSettingsProperty_& operator=(const FSettingsProperty_& Other)
	{
		if (&Other != this)
		{
			PropertyId = Other.PropertyId;
			Data = (const FSettingsData&)Other.Data;
		}
		return *this;
	}
};

struct FOnlineProfileSetting_ : public FOnlineProfileSetting
{
	FOnlineProfileSetting_& operator=(const FOnlineProfileSetting_& Other)
	{
		if (&Other != this)
		{
			Owner = Other.Owner;
			(FSettingsProperty_&)ProfileSetting = (const FSettingsProperty_&)Other.ProfileSetting;
		}
		return *this;
	}
};

// @baa 0x00d81460
/* Replaces the settings with the defaults (plus the version setting), then tells the NotifySettingValueUpdated
 * delegate. */
void UOnlineProfileSettings::SetToDefaults()
{
    ProfileSettings.Empty();
    for (INT Index = 0; Index < DefaultSettings.Num(); Index++)
    {
        INT AddIndex = ProfileSettings.AddZeroed(1);
        (FOnlineProfileSetting_&)ProfileSettings(AddIndex) = (const FOnlineProfileSetting_&)DefaultSettings(Index);
    }
    AppendVersionToSettings();
    if (((FScriptDelegate_&)__NotifySettingValueUpdated__Delegate).IsCallable(this))
    {
        ((UOnlineProfileSettings_*)this)->delegateNotifySettingValueUpdated(GetProfileSettingName(0));
    }
}

#line 163 "candidate.cpp"
