// USettings.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

/* Kit gaps: UE3's global operator delete[] (appFree, the exe's out-of-line copy
  * 0053dfa0) isn't declared next to Implement.h's delete, nor is FSettingsData's structcpptext (CleanUp and
 * the SetData overloads). */
inline void __cdecl operator delete[](void* Ptr) { sub_0053dfa0(Ptr); }

struct FSettingsData_ : public FSettingsData
{
	/* Frees the string or blob this holds and empties it. */
	inline void CleanUp()
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
	void SetData(DOUBLE InData);
	void SetData(FLOAT InData);
};

// @baa 0x00d6e320
/* Makes this a double value. */
void FSettingsData_::SetData(DOUBLE InData)
{
	CleanUp();
	Type = SDT_Double;
	*(DOUBLE*)&Value1 = InData;
}

/* Makes this a float value. */
void FSettingsData_::SetData(FLOAT InData)
{
	CleanUp();
	Type = SDT_Float;
	Value1 = *(INT*)&InData;
}

/* Kit gap: FName has no operator== (UE3's compares Index and Number). */
// @baa 0x00d88830
/* Drop the named session from the subsystem's list. */
void UOnlineSubsystem::RemoveNamedSession(FName SessionName)
{
    for (INT SearchIndex = 0; SearchIndex < Sessions.Num(); SearchIndex++)
    {
        FNamedSession& Session = Sessions(SearchIndex);
        if (Session.SessionName == SessionName)
        {
            Sessions.Remove(SearchIndex, 1);
            return;
        }
    }
}
