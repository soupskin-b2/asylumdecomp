// USettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* Kit gap: FSettingsData's structcpptext (GetData) isn't declared. */
struct FSettingsData_ : public FSettingsData
{
	void GetData(TArray<BYTE>& OutData) const;
};

// @baa 0x00d79720
/* Copies out the blob this holds, or empties OutData when it isn't a blob. */
void FSettingsData_::GetData(TArray<BYTE>& OutData) const
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
