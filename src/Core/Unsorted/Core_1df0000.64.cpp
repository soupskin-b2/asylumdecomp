// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UOnlineSubsystemSteamworks::*UOnlineSubsystemSteamworksNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UOnlineSubsystemSteamworksNativeInfo
{
	const TCHAR* Name;
	UOnlineSubsystemSteamworksNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UOnlineSubsystemSteamworks::name },
// @baa 0x01df9160
UOnlineSubsystemSteamworksNativeInfo GOnlineSubsystemSteamworksUOnlineSubsystemSteamworksNatives[] =
{
	MAP_NATIVE(UOnlineSubsystemSteamworks, execGetNumberOfCurrentPlayers)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execReadOnlineAvatar)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execShowCustomPlayersUI)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execGetAchievements)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execReadAchievements)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execShowPlayersUI)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execShowFriendsInviteUI)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execShowFriendsUI)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execUnlockGamerPicture)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execUnlockAchievement)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execIsDeviceValid)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execGetDeviceSelectionResults)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execShowDeviceSelectionUI)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execShowMembershipMarketplaceUI)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execShowContentMarketplaceUI)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execShowInviteUI)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execShowAchievementsUI)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execShowMessagesUI)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execShowGamerCardUI)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execShowFeedbackUI)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execRegisterStatGuid)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execGetClientStatGuid)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execRegisterHostStatGuid)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execGetHostStatGuid)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execJoinFriendGame)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execSendGameInviteToFriends)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execSendGameInviteToFriend)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execSendMessageToFriend)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execDenyFriendInvite)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execAcceptFriendInvite)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execRemoveFriend)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execAddFriendByName)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execAddFriend)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execShowKeyboardUI)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execSetOnlineStatus)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execCreateOnlineAccount)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execGetTitleFileContents)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execReadTitleFile)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execGetNATType)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execIsControllerConnected)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execSetNetworkNotificationPosition)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execHasLinkConnection)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execWriteOnlinePlayerScores)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execFlushOnlineStats)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execWriteOnlineStats)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execFreeStats)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execReadOnlineStatsByRankAroundPlayer)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execReadOnlineStatsByRank)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execReadOnlineStatsForFriends)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execReadOnlineStats)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execSetSpeechRecognitionObject)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execSelectVocabulary)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execGetRecognitionResults)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execStopSpeechRecognition)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execStartSpeechRecognition)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execStopNetworkedVoice)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execStartNetworkedVoice)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execUnmuteRemoteTalker)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execMuteRemoteTalker)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execSetRemoteTalkerPriority)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execIsHeadsetPresent)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execIsRemotePlayerTalking)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execIsLocalPlayerTalking)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execUnregisterRemoteTalker)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execRegisterRemoteTalker)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execUnregisterLocalTalker)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execRegisterLocalTalker)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execGetFriendsList)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execReadFriendsList)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execWriteProfileSettings)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execReadProfileSettings)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execAreAnyFriends)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execIsFriend)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execCanCommunicate)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execCanPlayOnline)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execGetLoginStatus)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execLogout)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execAutoLogin)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execLogin)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execShowLoginUI)
	MAP_NATIVE(UOnlineSubsystemSteamworks, execInit)
	{ NULL, NULL }
};
