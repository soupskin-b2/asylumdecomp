// USettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <stdlib.h>

/* FString's operator* is out of line here (00439b40), not the kit's inline one; appAtoi/appAtof (UnCRT.h) are spelled _wtoi/_wtof. */
struct FStringO_ : public FString
{
	const TCHAR* operator*() const; /* 0x00439b40 */
};

// @baa 0x00d6e4a0
/* Parses NewData into this value, keeping its type; FALSE for types that can't be parsed (64-bit ints, blobs,
 * dates and empty values). */
UBOOL FSettingsData::FromString(const FString& NewData)
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
