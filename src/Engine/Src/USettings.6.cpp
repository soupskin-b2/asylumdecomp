// USettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00d6e290
/* Makes this a string value holding a copy of InString. */
void FSettingsData::SetData(const FString& InString)
{
	SetData(*InString);
}
