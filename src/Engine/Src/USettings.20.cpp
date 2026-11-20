// USettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Implement.h"
#include <wchar.h>
#include <string.h>

/* Makes this a blob holding a copy of InData. */
void FSettingsData::SetData(const TArray<BYTE>& InData)
{
	SetData(InData.Num(), InData.GetTypedData());
}

/* Makes this a 64-bit integer value. */
void FSettingsData::SetData(QWORD InData)
{
	CleanUp();
	Type = SDT_Int64;
	*(QWORD*)&Value1 = InData;
}

/* Makes this a date/time value (two 32-bit halves). */
void FSettingsData::SetData(INT InValue1, INT InValue2)
{
	CleanUp();
	Type = SDT_DateTime;
	Value1 = InValue1;
	Value2.Dummy = InValue2;
}

/* The float this holds; 0 when it isn't a float. */
void FSettingsData::GetData(FLOAT& OutData) const
{
	if (Type == SDT_Float)
	{
		OutData = *(const FLOAT*)&Value1;
	}
	else
	{
		OutData = 0.f;
	}
}

/* The double this holds; 0 when it isn't a double. */
void FSettingsData::GetData(DOUBLE& OutData) const
{
	if (Type == SDT_Double)
	{
		OutData = *(const DOUBLE*)&Value1;
	}
	else
	{
		OutData = 0.0;
	}
}

/* The string this holds; empty when it isn't a string. */
void FSettingsData::GetData(FString& OutData) const
{
	if (Type == SDT_String && Value2.Dummy != 0)
	{
		OutData = (const TCHAR*)Value2.Dummy;
	}
	else
	{
		OutData = TEXT("");
	}
}

UBOOL FSettingsData::operator==(INT Other) const
{
	UBOOL bEqual = FALSE;
	if (Type == SDT_Int32)
	{
		bEqual = Other == Value1;
	}
	return bEqual;
}

UBOOL FSettingsData::operator!=(INT Other) const
{
	return !(*this == Other);
}

UBOOL FSettingsData::operator==(QWORD Other) const
{
	if (Type == SDT_Int64)
	{
		QWORD Value;
		memcpy(&Value, &Value1, sizeof(QWORD));
		if (Other == Value)
		{
			return TRUE;
		}
	}
	return FALSE;
}

UBOOL FSettingsData::operator!=(QWORD Other) const
{
	return !(*this == Other);
}

UBOOL FSettingsData::operator==(FLOAT Other) const
{
	if (Type == SDT_Float && Other == *(const FLOAT*)&Value1)
	{
		return TRUE;
	}
	return FALSE;
}

UBOOL FSettingsData::operator!=(FLOAT Other) const
{
	return !(*this == Other);
}

UBOOL FSettingsData::operator==(DOUBLE Other) const
{
	if (Type == SDT_Double && Other == *(const DOUBLE*)&Value1)
	{
		return TRUE;
	}
	return FALSE;
}

UBOOL FSettingsData::operator!=(DOUBLE Other) const
{
	return !(*this == Other);
}

UBOOL FSettingsData::operator==(const TCHAR* Other) const
{
	if (Type == SDT_String && Value2.Dummy != 0 && Other != NULL)
	{
		return wcscmp((const TCHAR*)Value2.Dummy, Other) == 0;
	}
	return FALSE;
}

UBOOL FSettingsData::operator!=(const TCHAR* Other) const
{
	return !(*this == Other);
}

UBOOL FSettingsData::operator==(const FString& Other) const
{
	if (Type == SDT_String && Value2.Dummy != 0)
	{
		return wcscmp((const TCHAR*)Value2.Dummy, *Other) == 0;
	}
	return FALSE;
}

UBOOL FSettingsData::operator!=(const FString& Other) const
{
	return !(*this == Other);
}

// @baa 0x00d67de0
/* The value of a hex digit; 0 for anything else. */
INT ParseHexDigit(TCHAR c)
{
	INT Result = 0;
	if (c >= TEXT('0') && c <= TEXT('9'))
	{
		Result = c - TEXT('0');
	}
	else if (c >= TEXT('a') && c <= TEXT('f'))
	{
		Result = c + 10 - TEXT('a');
	}
	else if (c >= TEXT('A') && c <= TEXT('F'))
	{
		Result = c + 10 - TEXT('A');
	}
	else
	{
		Result = 0;
	}
	return Result;
}
