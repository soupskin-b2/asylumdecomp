// UPartyBeacon.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Array.h"
#include "ue3/Classes.h"

/* Kit gap: UE3's socket subsystem interface (UnSocket.h) isn't declared. Only the slots this uses are named. */
class FSocket;
class FSocketSubsystem
{
public:
	virtual UBOOL Initialize(FString& Error) = 0;			/* 0x00 */
	virtual void Destroy() = 0;					/* 0x04 */
	virtual FSocket* CreateStreamSocket(const FString& SocketDescription) = 0;	/* 0x08 */
	virtual FSocket* CreateDGramSocket(const FString& SocketDescription, UBOOL bForceUDP) = 0;	/* 0x0c */
	virtual void DestroySocket(FSocket* Socket) = 0;		/* 0x10 */
};

extern FSocketSubsystem* g_026cad04;
// @baa 0x00e377b0
	/* GSocketSubsystem */
/* Closes every client connection's socket, then the listening socket (UPartyBeacon::DestroyBeacon, inlined). */
void UPartyBeaconHost::DestroyBeacon()
{
	if (Socket.Dummy && !bIsInTick)
	{
		for (INT Index = 0; Index < Clients.Num(); Index++)
		{
			g_026cad04->DestroySocket((FSocket*)Clients(Index).Socket.Dummy);
		}
		Clients.Empty();
	}
	if (Socket.Dummy)
	{
		if (!bIsInTick)
		{
			g_026cad04->DestroySocket((FSocket*)Socket.Dummy);
			bWantsDeferredDestroy = FALSE;
			Socket.Dummy = 0;
		}
		else
		{
			bWantsDeferredDestroy = TRUE;
		}
	}
}
