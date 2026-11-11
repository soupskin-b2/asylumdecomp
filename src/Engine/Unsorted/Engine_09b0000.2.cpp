// Engine_09b0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
// FNetworkNotify::NotifyAcceptingChannel (009b47a0, 29 bytes)
// UnConn.h's FNetworkNotify: the interface UNetConnection reports to. Classes.h has no such class
// (it is not a UObject), so it is declared here with the one virtual this function is.
#include "ue3/Core.h"
#include "ue3/Script.h"

class UChannel;
struct FNetworkNotify
{
	virtual UBOOL NotifyAcceptingChannel(UChannel* Channel);
};

// @baa 0x009b47a0
UBOOL FNetworkNotify::NotifyAcceptingChannel(UChannel* Channel)
{
	PURE_VIRTUAL(FNetworkNotify::NotifyAcceptingChannel, return 0;);
}
