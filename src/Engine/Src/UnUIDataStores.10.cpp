// UnUIDataStores.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00d97240
INT UUIDataStore_Strings::vf_124(INT A, INT B)
{
    return vf_118(A, B, -1);
}

/* Kit gap: FindPlayerDataStoreIndex is const in this build (the const operator() is used); Classes.h declares
 * it as non-const sub_00d92fb0. */
struct UDataStoreClient_ : public UDataStoreClient
{
	INT FindPlayerDataStoreIndex(ULocalPlayer* PlayerOwner) const;
};

// @baa 0x00d92fb0
/* The index of PlayerOwner's group in PlayerDataStores, or INDEX_NONE. */
INT UDataStoreClient_::FindPlayerDataStoreIndex(ULocalPlayer* PlayerOwner) const
{
	INT Result = INDEX_NONE;
	for (INT PlayerIndex = 0; PlayerIndex < PlayerDataStores.Num(); PlayerIndex++)
	{
		if (PlayerDataStores(PlayerIndex).PlayerOwner == PlayerOwner)
		{
			Result = PlayerIndex;
			break;
		}
	}
	return Result;
}
