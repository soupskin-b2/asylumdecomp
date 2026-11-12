// USettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gaps: FString has no operator* (UnString.h), and FSettingsData's structcpptext (SetData overloads) isn't
 * declared. */
struct FStringM_ : public FString
{
	FORCEINLINE const TCHAR* operator*() const
	{
		return Num() ? &(*this)(0) : TEXT("");
	}
};

struct FSettingsData_ : public FSettingsData
{
	void SetData(const TCHAR* InString); /* 0x00d6e1f0 */
	void SetData(const FString& InString);
};

// @baa 0x00d6e290
/* Makes this a string value holding a copy of InString. */
void FSettingsData_::SetData(const FString& InString)
{
	SetData(*(const FStringM_&)InString);
}
