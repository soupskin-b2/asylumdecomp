// USettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gaps: FName's comparison (UnName.h), FScriptDelegate::IsCallable, the delegateNotifyPropertyValueUpdated
 * glue, and the structcpptext of FSettingsData (operator=, 0x00d74260) / FSettingsProperty (operator=) aren't
 * declared; TArray::AddZeroed isn't in the kit's TArray. */
extern FName g_026c47e8;
 /* NotifyPropertyValueUpdated */
struct FScriptDelegate_ : public FScriptDelegate
{
    FORCEINLINE UBOOL IsCallable(UObject* OwningObject) const
    {
        return FunctionName != FName(NAME_None) && (Object != NULL ? !Object->IsPendingKill() : (OwningObject != NULL && !OwningObject->IsPendingKill()));
    }
};

struct FSettingsData_ : public FSettingsData
{
    FSettingsData_& operator=(const FSettingsData_& Other); /* 0x00d74260 */
};

struct FSettingsProperty_ : public FSettingsProperty
{
    FSettingsProperty_& operator=(const FSettingsProperty_& Other)
    {
        if (&Other != this)
        {
            PropertyId = Other.PropertyId;
            (FSettingsData_&)Data = (const FSettingsData_&)Other.Data;
        }
        return *this;
    }
};

/* TArray<FSettingsProperty>::Add (0x00d6cd40) is out of line in this build; Array.h's body. */
template<> __declspec(noinline) INT TArray<FSettingsProperty>::Add(INT Count)
{
#line 779 BAA_ARRAY_FILE
    check(Count>=0);
    const INT OldNum = ArrayNum;
    if ((ArrayNum += Count) > ArrayMax)
    {
        ArrayMax = AllocatorInstance.CalculateSlack(ArrayNum, ArrayMax, sizeof(FSettingsProperty));
        AllocatorInstance.ResizeAllocation(OldNum, ArrayMax, sizeof(FSettingsProperty));
    }
    return OldNum;
}

#line 50 "USettings.cpp"
/* TArray::AddZeroed (UE3 Array.h). */
template<class T> FORCEINLINE INT AddZeroed_(TArray<T>& Array, INT Count)
{
    const INT Index = Array.Add(Count);
    appMemzero((BYTE*)Array.GetData() + Index * sizeof(T), Count * sizeof(T));
    return Index;
}

struct USettings_ : public USettings
{
    FORCEINLINE FSettingsProperty* FindProperty(INT PropertyId)
    {
        for (INT Index = 0; Index < Properties.Num(); Index++)
        {
            FSettingsProperty& Property = Properties(Index);
            if (Property.PropertyId == PropertyId)
            {
                return &Property;
            }
        }
        return NULL;
    }
    FORCEINLINE void delegateNotifyPropertyValueUpdated(FName PropertyName)
    {
        struct Settings_eventNotifyPropertyValueUpdated_Parms
        {
            FName PropertyName;
        } Parms;
        Parms.PropertyName = PropertyName;
        ProcessDelegate(g_026c47e8, &__NotifyPropertyValueUpdated__Delegate, &Parms, NULL);
    }
};

// @baa 0x00d7a060
/* Copies the new properties' values over the existing ones (adding the missing ones when asked), telling the
 * NotifyPropertyValueUpdated delegate about each. */
void USettings::UpdateProperties(const TArray<FSettingsProperty>& NewProperties, UBOOL bShouldAddIfMissing)
{
    for (INT Index = 0; Index < NewProperties.Num(); Index++)
    {
        const FSettingsProperty& NewProp = NewProperties(Index);
        FSettingsProperty* Prop = ((USettings_*)this)->FindProperty(NewProp.PropertyId);
        if (Prop)
        {
            (FSettingsProperty_&)*Prop = (const FSettingsProperty_&)NewProp;
            if (((FScriptDelegate_&)__NotifyPropertyValueUpdated__Delegate).IsCallable(this))
            {
                ((USettings_*)this)->delegateNotifyPropertyValueUpdated(GetPropertyName(NewProp.PropertyId));
            }
        }
        else if (bShouldAddIfMissing)
        {
            INT AddIndex = AddZeroed_(Properties, 1);
            (FSettingsProperty_&)Properties(AddIndex) = (const FSettingsProperty_&)NewProp;
            if (((FScriptDelegate_&)__NotifyPropertyValueUpdated__Delegate).IsCallable(this))
            {
                ((USettings_*)this)->delegateNotifyPropertyValueUpdated(GetPropertyName(NewProp.PropertyId));
            }
        }
    }
}

#line 117 "candidate.cpp"
