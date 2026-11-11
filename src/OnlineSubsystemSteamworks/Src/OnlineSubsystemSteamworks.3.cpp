// OnlineSubsystemSteamworks.cpp (part 3 of 3): 78 functions
// Placed here by: hand (the Steamworks CCallback template).
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "steam/steam_api.h"

/* The online subsystem's Steam callbacks (constructed at 00e96fc0): a STEAM_CALLBACK member for each
 * callback Steam sends, after a pointer back to the subsystem. The class name is ours. Each
 * CCallback<> below is instantiated here, as the compiler did where the members were declared. */
class FOnlineSubsystemSteamworksCallbacks
{
public:
    class UOnlineSubsystemSteamworks* Subsystem;
    INT Unknown04;
    INT Unknown08;
    INT Unknown0C;
};

// UserStatsReceived_t (vtable 0211bf0c): the constructor, Register, the destructor, Run, Run (3 arguments), GetCallbackSizeBytes
// @baa 0x00e8f2f0
// @baa 0x00e8bd30
// @baa 0x00e8b710
// @baa 0x00e8b730
// @baa 0x00e8b740
// @baa 0x00e8b760
template class CCallback<FOnlineSubsystemSteamworksCallbacks, UserStatsReceived_t, false>;

// UserStatsStored_t (vtable 0211bf18): the constructor, Register, the destructor, Run, Run (3 arguments), GetCallbackSizeBytes
// @baa 0x00e8f330
// @baa 0x00e8bd70
// @baa 0x00e8b770
// @baa 0x00e8b790
// @baa 0x00e8b7a0
// @baa 0x00e8b7c0
template class CCallback<FOnlineSubsystemSteamworksCallbacks, UserStatsStored_t, false>;

// GameOverlayActivated_t (vtable 0211bf24): the constructor, Register, the destructor, Run, Run (3 arguments), GetCallbackSizeBytes
// @baa 0x00e8f370
// @baa 0x00e8bdb0
// @baa 0x00e8b7d0
// @baa 0x00e8b7f0
// @baa 0x00e8b800
// @baa 0x00e8b820
template class CCallback<FOnlineSubsystemSteamworksCallbacks, GameOverlayActivated_t, false>;

// SteamShutdown_t (vtable 0211bf30): the constructor, Register, the destructor, Run, Run (3 arguments), GetCallbackSizeBytes
// @baa 0x00e8f3b0
// @baa 0x00e8bdf0
// @baa 0x00e8b830
// @baa 0x00e8b850
// @baa 0x00e8b860
// @baa 0x00e8b880
template class CCallback<FOnlineSubsystemSteamworksCallbacks, SteamShutdown_t, false>;

// GameServerChangeRequested_t (vtable 0211bf3c): the constructor, Register, the destructor, Run, Run (3 arguments), GetCallbackSizeBytes
// @baa 0x00e8f3f0
// @baa 0x00e8be30
// @baa 0x00e8b890
// @baa 0x00e8b8b0
// @baa 0x00e8b8c0
// @baa 0x00e8b8e0
template class CCallback<FOnlineSubsystemSteamworksCallbacks, GameServerChangeRequested_t, false>;

// SteamServersConnected_t (vtable 0211bf48): the constructor, Register, the destructor, Run, Run (3 arguments), GetCallbackSizeBytes
// @baa 0x00e8f430
// @baa 0x00e8be70
// @baa 0x00e8b8f0
// @baa 0x00e8b910
// @baa 0x00e8b920
// @baa 0x00e8b940
template class CCallback<FOnlineSubsystemSteamworksCallbacks, SteamServersConnected_t, false>;

// SteamServersDisconnected_t (vtable 0211bf54): the constructor, Register, the destructor, Run, Run (3 arguments), GetCallbackSizeBytes
// @baa 0x00e8f470
// @baa 0x00e8beb0
// @baa 0x00e8b950
// @baa 0x00e8b970
// @baa 0x00e8b980
// @baa 0x00e8b9a0
template class CCallback<FOnlineSubsystemSteamworksCallbacks, SteamServersDisconnected_t, false>;

// ClientGameServerDeny_t (vtable 0211bf60): the constructor, Register, the destructor, Run, Run (3 arguments), GetCallbackSizeBytes
// @baa 0x00e8f4b0
// @baa 0x00e8bef0
// @baa 0x00e8b9b0
// @baa 0x00e8b9d0
// @baa 0x00e8b9e0
// @baa 0x00e8ba00
template class CCallback<FOnlineSubsystemSteamworksCallbacks, ClientGameServerDeny_t, false>;

// GSClientApprove_t (vtable 0211bf6c): the constructor, Register, the destructor, Run, Run (3 arguments), GetCallbackSizeBytes
// @baa 0x00e8f4f0
// @baa 0x00e8bf30
// @baa 0x00e8ba10
// @baa 0x00e8ba30
// @baa 0x00e8ba40
// @baa 0x00e8ba60
template class CCallback<FOnlineSubsystemSteamworksCallbacks, GSClientApprove_t, true>;

// GSClientDeny_t (vtable 0211bf78): the constructor, Register, the destructor, Run, Run (3 arguments), GetCallbackSizeBytes
// @baa 0x00e8f530
// @baa 0x00e8bf80
// @baa 0x00e8ba70
// @baa 0x00e8ba90
// @baa 0x00e8baa0
// @baa 0x00e8bac0
template class CCallback<FOnlineSubsystemSteamworksCallbacks, GSClientDeny_t, true>;

// GSClientKick_t (vtable 0211bf84): the constructor, Register, the destructor, Run, Run (3 arguments), GetCallbackSizeBytes
// @baa 0x00e8f570
// @baa 0x00e8bfd0
// @baa 0x00e8bad0
// @baa 0x00e8baf0
// @baa 0x00e8bb00
// @baa 0x00e8bb20
template class CCallback<FOnlineSubsystemSteamworksCallbacks, GSClientKick_t, true>;

// GSPolicyResponse_t (vtable 0211bf90): the constructor, Register, the destructor, Run, Run (3 arguments), GetCallbackSizeBytes
// @baa 0x00e8f5b0
// @baa 0x00e8c020
// @baa 0x00e8bb30
// @baa 0x00e8bb50
// @baa 0x00e8bb60
// @baa 0x00e8bb80
template class CCallback<FOnlineSubsystemSteamworksCallbacks, GSPolicyResponse_t, true>;

// GSClientAchievementStatus_t (vtable 0211bf9c): the constructor, Register, the destructor, Run, Run (3 arguments), GetCallbackSizeBytes
// @baa 0x00e8f5f0
// @baa 0x00e8c070
// @baa 0x00e8bb90
// @baa 0x00e8bbb0
// @baa 0x00e8bbc0
// @baa 0x00e8bbe0
template class CCallback<FOnlineSubsystemSteamworksCallbacks, GSClientAchievementStatus_t, true>;
