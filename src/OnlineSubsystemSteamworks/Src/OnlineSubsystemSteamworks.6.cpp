// OnlineSubsystemSteamworks.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE for UOnlineSubsystemSteamworks: the class's table of script natives (name, member pointer). */
typedef void (UOnlineSubsystemSteamworks::*UOnlineSubsystemSteamworksNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UOnlineSubsystemSteamworksNativeInfo
{
	const TCHAR* Name;
	UOnlineSubsystemSteamworksNative Pointer;
};

#pragma pack(pop)
extern UOnlineSubsystemSteamworksNativeInfo g_025e52a0[];
// @baa 0x00e88ea0
/* IMPLEMENT_NATIVE_HANDLER for UOnlineSubsystemSteamworks: the native registered under this name, or NULL. */
UOnlineSubsystemSteamworksNative* sub_00e88ea0(const TCHAR* NativeName)
{
	DWORD NativeIndex = 0;
	while (g_025e52a0[NativeIndex].Name)
	{
		if (wcscmp(NativeName, g_025e52a0[NativeIndex].Name) == 0)
		{
			return &g_025e52a0[NativeIndex].Pointer;
		}
		NativeIndex++;
	}
	return NULL;
}
