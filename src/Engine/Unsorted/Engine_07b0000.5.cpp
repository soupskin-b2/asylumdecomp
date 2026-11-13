// Engine_07b0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <wchar.h>

/* Kit gap: appStricmp (UnVcWin32.h), inline as UE3 has it. */

// @baa 0x007b5540
/* PlayerReplicationInfo: the alias when one is set, else the player's name. */
FString APlayerReplicationInfo::GetPlayerAlias()
{
	if (appStricmp(*PlayerAlias, TEXT("")) != 0)
	{
		return PlayerAlias;
	}
	return PlayerName;
}
