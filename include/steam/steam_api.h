/* Steamworks SDK declarations the game was built with (the 2009 SDK's steam_api.h and the callback
 * structs it uses), written for this project from what the game's code shows: field offsets, struct
 * sizes (each CCallback's GetCallbackSizeBytes) and callback ids (each Register). Opt in with
 *   #include "steam/steam_api.h"
 */
#pragma once

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned __int64 uint64;
typedef uint64 SteamAPICall_t;

enum EResult { k_EResultOK = 1, k_EResultFail = 2, k_EResultNoConnection = 3 };
enum EDenyReason { k_EDenyInvalid = 0, k_EDenyInvalidVersion = 1, k_EDenyGeneric = 2, k_EDenyNotLoggedOn = 3 };

/* steamclientpublic.h packs CSteamID to 1 byte: in GSClientDeny_t it follows no padding */
#pragma pack(push, 1)
class CSteamID
{
public:
    uint64 m_unAll64Bits;
};
#pragma pack(pop)

/* ---------------------------------------------------------------- callbacks */

enum
{
    k_iSteamUserCallbacks = 100,
    k_iSteamGameServerCallbacks = 200,
    k_iSteamFriendsCallbacks = 300,
    k_iSteamUtilsCallbacks = 700,
    k_iSteamUserStatsCallbacks = 1100,
};

struct SteamServersConnected_t { enum { k_iCallback = k_iSteamUserCallbacks + 1 }; };
struct SteamServersDisconnected_t { enum { k_iCallback = k_iSteamUserCallbacks + 3 }; EResult m_eResult; };
struct ClientGameServerDeny_t
{
    enum { k_iCallback = k_iSteamUserCallbacks + 13 };
    uint32 m_uAppID;
    uint32 m_unGameServerIP;
    uint16 m_usGameServerPort;
    uint16 m_bSecure;
    uint32 m_uReason;
};
struct GSPolicyResponse_t { enum { k_iCallback = k_iSteamUserCallbacks + 15 }; uint8 m_bSecure; };
struct GSClientApprove_t { enum { k_iCallback = k_iSteamGameServerCallbacks + 1 }; CSteamID m_SteamID; };
struct GSClientDeny_t
{
    enum { k_iCallback = k_iSteamGameServerCallbacks + 2 };
    CSteamID m_SteamID;
    EDenyReason m_eDenyReason;
    char m_pchOptionalText[128];
};
struct GSClientKick_t { enum { k_iCallback = k_iSteamGameServerCallbacks + 3 }; CSteamID m_SteamID; EDenyReason m_eDenyReason; };
struct GSClientAchievementStatus_t
{
    enum { k_iCallback = k_iSteamGameServerCallbacks + 6 };
    uint64 m_SteamID;
    char m_pchAchievement[128];
    bool m_bUnlocked;
};
struct GameOverlayActivated_t { enum { k_iCallback = k_iSteamFriendsCallbacks + 31 }; uint8 m_bActive; };
struct GameServerChangeRequested_t { enum { k_iCallback = k_iSteamFriendsCallbacks + 32 }; char m_rgchServer[64]; char m_rgchPassword[64]; };
struct SteamShutdown_t { enum { k_iCallback = k_iSteamUtilsCallbacks + 4 }; };
struct UserStatsReceived_t { enum { k_iCallback = k_iSteamUserStatsCallbacks + 1 }; uint64 m_nGameID; EResult m_eResult; CSteamID m_steamIDUser; };
struct UserStatsStored_t { enum { k_iCallback = k_iSteamUserStatsCallbacks + 2 }; uint64 m_nGameID; EResult m_eResult; };

/* matchmaking filters (ISteamMatchmakingServers) */
struct MatchMakingKeyValuePair_t
{
    MatchMakingKeyValuePair_t() { m_szKey[0] = m_szValue[0] = 0; }
    char m_szKey[256];
    char m_szValue[256];
};

/* ---------------------------------------------------------------- the callback dispatch */

class CCallbackBase;
extern "C" __declspec(dllimport) void __cdecl SteamAPI_RegisterCallback(CCallbackBase* pCallback, int iCallback);
extern "C" __declspec(dllimport) void __cdecl SteamAPI_UnregisterCallback(CCallbackBase* pCallback);

class CCallbackBase
{
public:
    CCallbackBase() { m_nCallbackFlags = 0; m_iCallback = 0; }
    virtual void Run(void* pvParam) = 0;
    virtual void Run(void* pvParam, bool bIOFailure, SteamAPICall_t hSteamAPICall) = 0;
    int GetICallback() { return m_iCallback; }
    virtual int GetCallbackSizeBytes() = 0;

protected:
    enum { k_ECallbackFlagsRegistered = 0x01, k_ECallbackFlagsGameServer = 0x02 };
    uint8 m_nCallbackFlags;
    int m_iCallback;
    friend class CCallbackMgr;
};

/* a member function of T called with P, Steam's callback id P::k_iCallback */
template <class T, class P, bool bGameServer>
class CCallback : protected CCallbackBase
{
public:
    typedef void (T::*func_t)(P*);

    CCallback(T* pObj, func_t func) : m_pObj(pObj), m_Func(func)
    {
        if (pObj && func)
            Register(pObj, func);
    }
    ~CCallback()
    {
        if (m_nCallbackFlags & k_ECallbackFlagsRegistered)
            Unregister();
    }
    void Register(T* pObj, func_t func)
    {
        if (!pObj || !func)
            return;
        if (m_nCallbackFlags & k_ECallbackFlagsRegistered)
            Unregister();
        if (bGameServer)
            m_nCallbackFlags |= k_ECallbackFlagsGameServer;
        m_pObj = pObj;
        m_Func = func;
        SteamAPI_RegisterCallback(this, P::k_iCallback);
    }
    void Unregister() { SteamAPI_UnregisterCallback(this); }

private:
    virtual void Run(void* pvParam) { (m_pObj->*m_Func)((P*)pvParam); }
    virtual void Run(void* pvParam, bool, SteamAPICall_t) { (m_pObj->*m_Func)((P*)pvParam); }
    int GetCallbackSizeBytes() { return sizeof(P); }

    T* m_pObj;
    func_t m_Func;
};

/* declares a callback member and its handler: STEAM_CALLBACK(FMyClass, OnStats, UserStatsReceived_t, StatsCallback) */
#define STEAM_CALLBACK(thisclass, func, param, var) CCallback<thisclass, param, false> var; void func(param* pParam)
#define STEAM_GAMESERVER_CALLBACK(thisclass, func, param, var) CCallback<thisclass, param, true> var; void func(param* pParam)
