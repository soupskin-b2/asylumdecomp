// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UPartyBeaconHost::*UPartyBeaconHostNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UPartyBeaconHostNativeInfo
{
	const TCHAR* Name;
	UPartyBeaconHostNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UPartyBeaconHost::name },
// @baa 0x01df72d0
UPartyBeaconHostNativeInfo GIpDrvUPartyBeaconHostNatives[] =
{
	MAP_NATIVE(UPartyBeaconHost, execGetTeamAssignment)
	MAP_NATIVE(UPartyBeaconHost, execAppendReservationSkillsToSearch)
	MAP_NATIVE(UPartyBeaconHost, execTellClientsHostHasCancelled)
	MAP_NATIVE(UPartyBeaconHost, execTellClientsHostIsReady)
	MAP_NATIVE(UPartyBeaconHost, execTellClientsToTravel)
	MAP_NATIVE(UPartyBeaconHost, execDestroyBeacon)
	MAP_NATIVE(UPartyBeaconHost, execInitHostBeacon)
	{ NULL, NULL }
};
