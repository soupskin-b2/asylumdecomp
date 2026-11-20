// USettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00d6e2e0
/* Makes this a 32-bit integer value. */
void FSettingsData::SetData(INT InData)
{
	CleanUp();
	Type = SDT_Int32;
	Value1 = InData;
}
