// LaunchEngineLoop.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// FName's string constructor (UnName.cpp), missing from the kit's FName.

struct FNameString : public FName
{
	FNameString(const TCHAR* Name, EFindName FindType = FNAME_Add, UBOOL bSplitName = TRUE); /* 0x005d5620 */
};

#define AUTOGENERATE_NAME(name) extern FName EDITOR_##name;
AUTOGENERATE_NAME(Build)
#undef AUTOGENERATE_NAME
#define AUTOGENERATE_NAME(name) EDITOR_##name = FNameString(TEXT(#name));
// @baa 0x00ec12b0
void AutoGenerateNamesEditor()
{
AUTOGENERATE_NAME(Build)
}

#undef AUTOGENERATE_NAME
