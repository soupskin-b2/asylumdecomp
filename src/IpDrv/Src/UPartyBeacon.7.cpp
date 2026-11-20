// UPartyBeacon.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"
#include "ue3/Classes.h"

// @baa 0x00e377b0
/* Closes every client connection's socket, then the listening socket (UPartyBeacon::DestroyBeacon, inlined). */
void UPartyBeaconHost::DestroyBeacon()
{
	if (Socket.Dummy && !bIsInTick)
	{
		for (INT Index = 0; Index < Clients.Num(); Index++)
		{
			GSocketSubsystem->DestroySocket((FSocket*)Clients(Index).Socket.Dummy);
		}
		Clients.Empty();
	}
	if (Socket.Dummy)
	{
		if (!bIsInTick)
		{
			GSocketSubsystem->DestroySocket((FSocket*)Socket.Dummy);
			bWantsDeferredDestroy = FALSE;
			Socket.Dummy = 0;
		}
		else
		{
			bWantsDeferredDestroy = TRUE;
		}
	}
}
