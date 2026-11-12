// USettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <string.h>
#include <wchar.h>

/* The engine calls the CRT memcmp out of line (0053de70) rather than its intrinsic form. */
#pragma function(memcmp)
/* Kit gap: FSettingsData's structcpptext (operator==, operator!=) isn't declared. */
struct FSettingsData_ : public FSettingsData
{
	UBOOL operator==(const FSettingsData_& Other) const;
	UBOOL operator!=(const FSettingsData_& Other) const;
};

/* Whether both hold the same type and value (blobs and strings compare by contents). */
UBOOL FSettingsData_::operator==(const FSettingsData_& Other) const
{
	if (Type == Other.Type)
	{
		if (Type == SDT_Blob)
		{
			return memcmp((const void*)Value2.Dummy, (const void*)Other.Value2.Dummy, Value1) == 0;
		}
		else if (Type == SDT_String)
		{
			return wcscmp((const TCHAR*)Value2.Dummy, (const TCHAR*)Other.Value2.Dummy) == 0;
		}
		return Value1 == Other.Value1 && Value2.Dummy == Other.Value2.Dummy;
	}
	return FALSE;
}

// @baa 0x00d67d30
/* Whether they differ in type or value. */
UBOOL FSettingsData_::operator!=(const FSettingsData_& Other) const
{
	return !(*this == Other);
}
