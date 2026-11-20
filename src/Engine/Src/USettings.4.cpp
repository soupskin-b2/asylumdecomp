// USettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00d6e390
/* Makes this a blob value holding its own copy of the InSize bytes at InData. */
void FSettingsData::SetData(DWORD InSize, const BYTE* InData)
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
