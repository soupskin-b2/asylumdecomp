// USettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Implement.h"
#include <wchar.h>
#include <string.h>

/* Kit gaps: UE3's global operator delete[] (appFree, out of line at 0053dfa0) isn't declared next to Implement.h's
 * delete, FString has no operator* (UnString.h), and FSettingsData's structcpptext (SetData/GetData overloads and
 * the comparison operators) isn't declared. */
inline void __cdecl operator delete[](void* Ptr) { sub_0053dfa0(Ptr); }

struct FStringM_ : public FString
{
	FORCEINLINE const TCHAR* operator*() const
	{
		return Num() ? &(*this)(0) : TEXT("");
	}
};

struct FSettingsData_ : public FSettingsData
{
	FORCEINLINE void CleanUp()
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
	void SetData(DWORD InSize, const BYTE* InData); /* 0x00d6e390 */
	void SetData(const TArray<BYTE>& InData);
	void SetData(QWORD InData);
	void SetData(INT InValue1, INT InValue2);
	void GetData(FLOAT& OutData) const;
	void GetData(DOUBLE& OutData) const;
	void GetData(FString& OutData) const;
	UBOOL operator==(INT Other) const;
	UBOOL operator!=(INT Other) const;
	UBOOL operator==(QWORD Other) const;
	UBOOL operator!=(QWORD Other) const;
	UBOOL operator==(FLOAT Other) const;
	UBOOL operator!=(FLOAT Other) const;
	UBOOL operator==(DOUBLE Other) const;
	UBOOL operator!=(DOUBLE Other) const;
	UBOOL operator==(const TCHAR* Other) const;
	UBOOL operator!=(const TCHAR* Other) const;
	UBOOL operator==(const FString& Other) const;
	UBOOL operator!=(const FString& Other) const;
};

/* Makes this a blob holding a copy of InData. */
void FSettingsData_::SetData(const TArray<BYTE>& InData)
{
	SetData(InData.Num(), InData.GetTypedData());
}

/* Makes this a 64-bit integer value. */
void FSettingsData_::SetData(QWORD InData)
{
	CleanUp();
	Type = SDT_Int64;
	*(QWORD*)&Value1 = InData;
}

/* Makes this a date/time value (two 32-bit halves). */
void FSettingsData_::SetData(INT InValue1, INT InValue2)
{
	CleanUp();
	Type = SDT_DateTime;
	Value1 = InValue1;
	Value2.Dummy = InValue2;
}

// @baa 0x00d6e470
/* The float this holds; 0 when it isn't a float. */
void FSettingsData_::GetData(FLOAT& OutData) const
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
void FSettingsData_::GetData(DOUBLE& OutData) const
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
void FSettingsData_::GetData(FString& OutData) const
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

UBOOL FSettingsData_::operator==(INT Other) const
{
	UBOOL bEqual = FALSE;
	if (Type == SDT_Int32)
	{
		bEqual = Other == Value1;
	}
	return bEqual;
}

UBOOL FSettingsData_::operator!=(INT Other) const
{
	return !(*this == Other);
}

UBOOL FSettingsData_::operator==(QWORD Other) const
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

UBOOL FSettingsData_::operator!=(QWORD Other) const
{
	return !(*this == Other);
}

UBOOL FSettingsData_::operator==(FLOAT Other) const
{
	if (Type == SDT_Float && Other == *(const FLOAT*)&Value1)
	{
		return TRUE;
	}
	return FALSE;
}

UBOOL FSettingsData_::operator!=(FLOAT Other) const
{
	return !(*this == Other);
}

UBOOL FSettingsData_::operator==(DOUBLE Other) const
{
	if (Type == SDT_Double && Other == *(const DOUBLE*)&Value1)
	{
		return TRUE;
	}
	return FALSE;
}

UBOOL FSettingsData_::operator!=(DOUBLE Other) const
{
	return !(*this == Other);
}

UBOOL FSettingsData_::operator==(const TCHAR* Other) const
{
	if (Type == SDT_String && Value2.Dummy != 0 && Other != NULL)
	{
		return wcscmp((const TCHAR*)Value2.Dummy, Other) == 0;
	}
	return FALSE;
}

UBOOL FSettingsData_::operator!=(const TCHAR* Other) const
{
	return !(*this == Other);
}

UBOOL FSettingsData_::operator==(const FString& Other) const
{
	if (Type == SDT_String && Value2.Dummy != 0)
	{
		return wcscmp((const TCHAR*)Value2.Dummy, *(const FStringM_&)Other) == 0;
	}
	return FALSE;
}

UBOOL FSettingsData_::operator!=(const FString& Other) const
{
	return !(*this == Other);
}

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
