// Core_1df0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// UOnlineSubsystemSteamworks's script natives that the kit's class does not declare.
struct UOnlineSubsystemSteamworks_ : public UOnlineSubsystemSteamworks
{
	void execGetNumberOfCurrentPlayers(FFrame& Stack, RESULT_DECL);
	void execReadOnlineAvatar(FFrame& Stack, RESULT_DECL);
	void execShowCustomPlayersUI(FFrame& Stack, RESULT_DECL);
	void execGetAchievements(FFrame& Stack, RESULT_DECL);
	void execReadAchievements(FFrame& Stack, RESULT_DECL);
	void execShowPlayersUI(FFrame& Stack, RESULT_DECL);
	void execShowFriendsInviteUI(FFrame& Stack, RESULT_DECL);
	void execShowFriendsUI(FFrame& Stack, RESULT_DECL);
	void execUnlockGamerPicture(FFrame& Stack, RESULT_DECL);
	void execUnlockAchievement(FFrame& Stack, RESULT_DECL);
	void execIsDeviceValid(FFrame& Stack, RESULT_DECL);
	void execGetDeviceSelectionResults(FFrame& Stack, RESULT_DECL);
	void execShowDeviceSelectionUI(FFrame& Stack, RESULT_DECL);
	void execShowMembershipMarketplaceUI(FFrame& Stack, RESULT_DECL);
	void execShowContentMarketplaceUI(FFrame& Stack, RESULT_DECL);
	void execShowInviteUI(FFrame& Stack, RESULT_DECL);
	void execShowAchievementsUI(FFrame& Stack, RESULT_DECL);
	void execShowMessagesUI(FFrame& Stack, RESULT_DECL);
	void execShowGamerCardUI(FFrame& Stack, RESULT_DECL);
	void execShowFeedbackUI(FFrame& Stack, RESULT_DECL);
	void execRegisterStatGuid(FFrame& Stack, RESULT_DECL);
	void execGetClientStatGuid(FFrame& Stack, RESULT_DECL);
	void execRegisterHostStatGuid(FFrame& Stack, RESULT_DECL);
	void execGetHostStatGuid(FFrame& Stack, RESULT_DECL);
	void execJoinFriendGame(FFrame& Stack, RESULT_DECL);
	void execSendGameInviteToFriends(FFrame& Stack, RESULT_DECL);
	void execSendGameInviteToFriend(FFrame& Stack, RESULT_DECL);
	void execSendMessageToFriend(FFrame& Stack, RESULT_DECL);
	void execDenyFriendInvite(FFrame& Stack, RESULT_DECL);
	void execAcceptFriendInvite(FFrame& Stack, RESULT_DECL);
	void execRemoveFriend(FFrame& Stack, RESULT_DECL);
	void execAddFriendByName(FFrame& Stack, RESULT_DECL);
	void execAddFriend(FFrame& Stack, RESULT_DECL);
	void execShowKeyboardUI(FFrame& Stack, RESULT_DECL);
	void execSetOnlineStatus(FFrame& Stack, RESULT_DECL);
	void execCreateOnlineAccount(FFrame& Stack, RESULT_DECL);
	void execGetTitleFileContents(FFrame& Stack, RESULT_DECL);
	void execReadTitleFile(FFrame& Stack, RESULT_DECL);
	void execGetNATType(FFrame& Stack, RESULT_DECL);
	void execIsControllerConnected(FFrame& Stack, RESULT_DECL);
	void execSetNetworkNotificationPosition(FFrame& Stack, RESULT_DECL);
	void execHasLinkConnection(FFrame& Stack, RESULT_DECL);
	void execWriteOnlinePlayerScores(FFrame& Stack, RESULT_DECL);
	void execFlushOnlineStats(FFrame& Stack, RESULT_DECL);
	void execWriteOnlineStats(FFrame& Stack, RESULT_DECL);
	void execFreeStats(FFrame& Stack, RESULT_DECL);
	void execReadOnlineStatsByRankAroundPlayer(FFrame& Stack, RESULT_DECL);
	void execReadOnlineStatsByRank(FFrame& Stack, RESULT_DECL);
	void execReadOnlineStatsForFriends(FFrame& Stack, RESULT_DECL);
	void execReadOnlineStats(FFrame& Stack, RESULT_DECL);
	void execSetSpeechRecognitionObject(FFrame& Stack, RESULT_DECL);
	void execSelectVocabulary(FFrame& Stack, RESULT_DECL);
	void execGetRecognitionResults(FFrame& Stack, RESULT_DECL);
	void execStopSpeechRecognition(FFrame& Stack, RESULT_DECL);
	void execStartSpeechRecognition(FFrame& Stack, RESULT_DECL);
	void execStopNetworkedVoice(FFrame& Stack, RESULT_DECL);
	void execStartNetworkedVoice(FFrame& Stack, RESULT_DECL);
	void execUnmuteRemoteTalker(FFrame& Stack, RESULT_DECL);
	void execMuteRemoteTalker(FFrame& Stack, RESULT_DECL);
	void execSetRemoteTalkerPriority(FFrame& Stack, RESULT_DECL);
	void execIsHeadsetPresent(FFrame& Stack, RESULT_DECL);
	void execIsRemotePlayerTalking(FFrame& Stack, RESULT_DECL);
	void execIsLocalPlayerTalking(FFrame& Stack, RESULT_DECL);
	void execUnregisterRemoteTalker(FFrame& Stack, RESULT_DECL);
	void execRegisterRemoteTalker(FFrame& Stack, RESULT_DECL);
	void execUnregisterLocalTalker(FFrame& Stack, RESULT_DECL);
	void execRegisterLocalTalker(FFrame& Stack, RESULT_DECL);
	void execGetFriendsList(FFrame& Stack, RESULT_DECL);
	void execReadFriendsList(FFrame& Stack, RESULT_DECL);
	void execWriteProfileSettings(FFrame& Stack, RESULT_DECL);
	void execReadProfileSettings(FFrame& Stack, RESULT_DECL);
	void execAreAnyFriends(FFrame& Stack, RESULT_DECL);
	void execIsFriend(FFrame& Stack, RESULT_DECL);
	void execCanCommunicate(FFrame& Stack, RESULT_DECL);
	void execCanPlayOnline(FFrame& Stack, RESULT_DECL);
	void execGetLoginStatus(FFrame& Stack, RESULT_DECL);
	void execLogout(FFrame& Stack, RESULT_DECL);
	void execAutoLogin(FFrame& Stack, RESULT_DECL);
	void execLogin(FFrame& Stack, RESULT_DECL);
	void execShowLoginUI(FFrame& Stack, RESULT_DECL);
	void execInit(FFrame& Stack, RESULT_DECL);
};

/* UnScript.h DECLARE_NATIVE_TYPE: the class's table of script natives (name, member pointer). */
typedef void (UOnlineSubsystemSteamworks_::*UOnlineSubsystemSteamworksNative)(FFrame& TheStack, RESULT_DECL);

#pragma pack(push, 4)
struct UOnlineSubsystemSteamworksNativeInfo
{
	const TCHAR* Name;
	UOnlineSubsystemSteamworksNative Pointer;
};

#pragma pack(pop)
#define MAP_NATIVE(cls, name) { TEXT("int") TEXT(#cls) TEXT(#name), &UOnlineSubsystemSteamworks_::name },
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
