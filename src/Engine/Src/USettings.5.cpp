// USettings.cpp: 1 function
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
	void SetData(INT InData);
};

// @baa 0x00d6e2e0
/* Makes this a 32-bit integer value. */
void FSettingsData_::SetData(INT InData)
{
	CleanUp();
	Type = SDT_Int32;
	Value1 = InData;
}
