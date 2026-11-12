// USettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <stdlib.h>

/* Kit gaps: FString's operator* (UnString.h; out of line here at 00439b40), appAtoi/appAtof (UnCRT.h: _wtoi/_wtof)
 * and FSettingsData's structcpptext (FromString and the SetData overloads) aren't declared. */
struct FStringO_ : public FString
{
	const TCHAR* operator*() const; /* 0x00439b40 */
};

struct FSettingsData_ : public FSettingsData
{
	void SetData(INT InData); /* 0x00d6e2e0 */
	void SetData(DOUBLE InData); /* 0x00d6e320 */
	void SetData(FLOAT InData); /* 0x00d6e350 */
	void SetData(const FString& InString); /* 0x00d6e290 */
	UBOOL FromString(const FString& NewData);
};

// @baa 0x00d6e4a0
/* Parses NewData into this value, keeping its type; FALSE for types that can't be parsed (64-bit ints, blobs,
 * dates and empty values). */
UBOOL FSettingsData_::FromString(const FString& NewData)
{
	switch (Type)
	{
		case SDT_Float:
		{
			SetData((FLOAT)_wtof(*(const FStringO_&)NewData));
			return TRUE;
		}
		case SDT_Int32:
		{
			SetData((INT)_wtoi(*(const FStringO_&)NewData));
			return TRUE;
		}
		case SDT_Double:
		{
			SetData((DOUBLE)_wtof(*(const FStringO_&)NewData));
			return TRUE;
		}
		case SDT_String:
		{
			SetData(NewData);
			return TRUE;
		}
	}
	return FALSE;
}
