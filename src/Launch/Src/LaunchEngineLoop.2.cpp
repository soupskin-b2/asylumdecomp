// LaunchEngineLoop.cpp (part 2 of 4): 2 functions
// Placed here by: callers 1, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

typedef unsigned int U;

struct __declspec(align(8)) C { int x,y; U* sub_005d5620(const wchar_t*,int,int); };

#define G(a,b) extern U g_##a, g_##b;
G(026cad78,026cad7c) G(026cadac,026cadb0) G(026cad34,026cad38) G(026caebc,026caec0) G(026cadd0,026cadd4) G(026caeb4,026caeb8) G(026cae6c,026cae70) G(026cae64,026cae68) G(026cae98,026cae9c) G(026cad48,026cad4c) G(026cad70,026cad74) G(026caea0,026caea4) G(026cadd8,026caddc) G(026cad98,026cad9c) G(026cad2c,026cad30) G(026cad40,026cad44) G(026cae74,026cae78) G(026caec4,026caec8) G(026cade4,026cade8) G(026cae90,026cae94) G(026cadec,026cadf0) G(026cad54,026cad58) G(026caea8,026caeac) G(026cad80,026cad84) G(026cadf4,026cadf8) G(026cad90,026cad94) G(026cadb4,026cadb8) G(026cad88,026cad8c) G(026cad24,026cad28)
#define DO(s,a,b) p=c.sub_005d5620(L##s,1,1); g_##a=p[0]; g_##b=p[1];
// @baa 0x00e2b100
void sub_00e2b100() { C c; U* p;
DO("DestroyBeacon",026cad78,026cad7c)
DO("GetPlayerNicknameFromIndex",026cadac,026cadb0)
DO("GetPlayerUniqueNetIdFromIndex",026cad34,026cad38)
DO("OnArbitrationRegistrationComplete",026caebc,026caec0)
DO("OnCancelFindOnlineGamesComplete",026cadd0,026cadd4)
DO("OnCancellationRequestComplete",026caeb4,026caeb8)
DO("OnClientCancellationReceived",026cae6c,026cae70)
DO("OnCreateOnlineGameComplete",026cae64,026cae68)
DO("OnDestroyOnlineGameComplete",026cae98,026cae9c)
DO("OnEndOnlineGameComplete",026cad48,026cad4c)
DO("OnFindOnlineGamesComplete",026cad70,026cad74)
DO("OnGameInviteAccepted",026caea0,026caea4)
DO("OnHostHasCancelled",026cadd8,026caddc)
DO("OnHostIsReady",026cad98,026cad9c)
DO("OnJoinOnlineGameComplete",026cad2c,026cad30)
DO("OnReadNewsCompleted",026cad40,026cad44)
DO("OnReadTitleFileComplete",026cae74,026cae78)
DO("OnRegisterPlayerComplete",026caec4,026caec8)
DO("OnReservationChange",026cade4,026cade8)
DO("OnReservationCountUpdated",026cae90,026cae94)
DO("OnReservationRequestComplete",026cadec,026cadf0)
DO("OnReservationsFull",026cad54,026cad58)
DO("OnStartOnlineGameComplete",026caea8,026caeac)
DO("OnTravelRequestReceived",026cad80,026cad84)
DO("OnUnregisterPlayerComplete",026cadf4,026cadf8)
DO("OnUpdateOnlineGameComplete",026cad90,026cad94)
DO("RegisterPartyMembers",026cadb4,026cadb8)
DO("UnregisterParty",026cad88,026cad8c)
DO("UnregisterPartyMembers",026cad24,026cad28)
}

extern "C" __declspec(dllimport) int wcscpy_s(...);
// @baa 0x01504620
void sub_01504620(void)
{
  wcscpy_s(L"Example",0x40,L"Bm");
  return;
}
