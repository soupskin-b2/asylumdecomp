// USettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

/* Kit gap: FSettingsData's structcpptext (CleanUp and the SetData overloads) isn't declared. */


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
	void SetData(DWORD InSize, const BYTE* InData);
};

// @baa 0x00d6e390
/* Makes this a blob value holding its own copy of the InSize bytes at InData. */
void FSettingsData_::SetData(DWORD InSize, const BYTE* InData)
{
	CleanUp();
	Type = SDT_Blob;
	if (InSize > 0)
	{
		Value1 = InSize;
		BYTE* Blob = new BYTE[InSize];
		Value2.Dummy = (INT)Blob;
		memcpy(Blob, InData, Value1);
	}
}
