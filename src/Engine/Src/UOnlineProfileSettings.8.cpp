// UOnlineProfileSettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Implement.h"
#include "ue3/Enums.h"

/* Kit gaps: UE3's global operator delete[] (appFree, out of line at 0053dfa0), FSettingsData's structcpptext
 * (CleanUp, SetData, comparisons), FScriptDelegate::IsCallable and the delegateNotifySettingValueUpdated glue (inlined here;
 * out of line at 00d67120) aren't declared. */
inline void __cdecl operator delete[](void* Ptr) { sub_0053dfa0(Ptr); }

/* FName's comparison (UnName.h); the kit's FName has none. */
extern FName g_026c438c;
	/* NotifySettingValueUpdated */
struct FScriptDelegate_ : public FScriptDelegate
{
	FORCEINLINE UBOOL IsCallable(UObject* OwningObject) const
	{
		return FunctionName != FName(NAME_None) && (Object != NULL ? !Object->IsPendingKill() : (OwningObject != NULL && !OwningObject->IsPendingKill()));
	}
};

struct FSettingsData_ : public FSettingsData
{
	FORCEINLINE void CleanUp()
	{
		if (Type == SDT_String)
		{
			delete [] (TCHAR*)Value2.Dummy;
		}
		else if (Type == SDT_Blob)
		{
			delete [] (BYTE*)Value2.Dummy;
		}
		Type = SDT_Empty;
		Value1 = 0;
		Value2.Dummy = 0;
	}
	FORCEINLINE UBOOL operator==(INT Other) const
	{
		if (Type == SDT_Int32)
		{
			return Other == Value1;
		}
		return FALSE;
	}
	FORCEINLINE UBOOL operator!=(INT Other) const
	{
		return !(*this == Other);
	}
	UBOOL operator==(const FString& Other) const; /* 0x00d6e560 */
	FORCEINLINE UBOOL operator!=(const FString& Other) const
	{
		return !(*this == Other);
	}
	UBOOL FromString(const FString& NewValue); /* 0x00d6e4a0 */
	FORCEINLINE void SetData(INT InData)
	{
		CleanUp();
		Type = SDT_Int32;
		Value1 = InData;
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
/* TArray::AddZeroed (UE3 Array.h). */
template<class T> FORCEINLINE INT AddZeroed_(TArray<T>& Array, INT Count)
{
    const INT Index = Array.Add(Count);
    appMemzero((BYTE*)Array.GetData() + Index * sizeof(T), Count * sizeof(T));
    return Index;
}

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

#define PSI_ProfileVersionNum 26 /* OnlineProfileSettings.uc const */
// @baa 0x00d73920
/* Sets the profile version setting to VersionNumber, adding it (game-owned) when missing. */
void UOnlineProfileSettings::AppendVersionToSettings()
{
    for (INT Index = 0; Index < ProfileSettings.Num(); Index++)
    {
        FOnlineProfileSetting& Setting = ProfileSettings(Index);
        if (Setting.ProfileSetting.PropertyId == PSI_ProfileVersionNum)
        {
            UBOOL bChanged = ((FSettingsData_&)Setting.ProfileSetting.Data) != VersionNumber;
            ((FSettingsData_&)Setting.ProfileSetting.Data).SetData(VersionNumber);
            if (bChanged && ((FScriptDelegate_&)__NotifySettingValueUpdated__Delegate).IsCallable(this))
            {
                ((UOnlineProfileSettings_*)this)->delegateNotifySettingValueUpdated(GetProfileSettingName(PSI_ProfileVersionNum));
            }
            return;
        }
    }
    INT AddIndex = AddZeroed_(ProfileSettings, 1);
    FOnlineProfileSetting& Setting = ProfileSettings(AddIndex);
    Setting.Owner = OPPO_Game;
    Setting.ProfileSetting.PropertyId = PSI_ProfileVersionNum;
    ((FSettingsData_&)Setting.ProfileSetting.Data).SetData(VersionNumber);
    if (((FScriptDelegate_&)__NotifySettingValueUpdated__Delegate).IsCallable(this))
    {
        ((UOnlineProfileSettings_*)this)->delegateNotifySettingValueUpdated(GetProfileSettingName(PSI_ProfileVersionNum));
    }
}

#line 136 "candidate.cpp"
