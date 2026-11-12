// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// UPartyBeaconClient's script natives that the kit's class does not declare.
struct UPartyBeaconClient_ : public UPartyBeaconClient
{
	void execDestroyBeacon(FFrame& Stack, RESULT_DECL);
	void execCancelReservation(FFrame& Stack, RESULT_DECL);
	void execRequestReservation(FFrame& Stack, RESULT_DECL);
};

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UPartyBeaconClient_::*UPartyBeaconClientNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UPartyBeaconClientNativeInfo
{
	const TCHAR* Name;
	UPartyBeaconClientNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UPartyBeaconClient_::name },
// @baa 0x01df7290
UPartyBeaconClientNativeInfo GIpDrvUPartyBeaconClientNatives[] =
{
	MAP_NATIVE(UPartyBeaconClient, execDestroyBeacon)
	MAP_NATIVE(UPartyBeaconClient, execCancelReservation)
	MAP_NATIVE(UPartyBeaconClient, execRequestReservation)
	{ NULL, NULL }
};
