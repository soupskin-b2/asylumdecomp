// LaunchEngineLoop.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// FName's string constructor (UnName.cpp), missing from the kit's FName.
enum EFindName { FNAME_Find, FNAME_Add };

struct FNameString : public FName
{
	FNameString(const TCHAR* Name, EFindName FindType = FNAME_Add, UBOOL bSplitName = TRUE); /* 0x005d5620 */
};

#define AUTOGENERATE_NAME(name) extern FName GFXUI_##name;
AUTOGENERATE_NAME(FSCommand)
AUTOGENERATE_NAME(OnClose)
AUTOGENERATE_NAME(Start)
#undef AUTOGENERATE_NAME
#define AUTOGENERATE_NAME(name) GFXUI_##name = FNameString(TEXT(#name));
// @baa 0x00e427c0
void AutoGenerateNamesGFxUI()
{
AUTOGENERATE_NAME(FSCommand)
AUTOGENERATE_NAME(OnClose)
AUTOGENERATE_NAME(Start)
}

#undef AUTOGENERATE_NAME
