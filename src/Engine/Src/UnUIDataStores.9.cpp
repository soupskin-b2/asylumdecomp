// UnUIDataStores.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gaps: FString::Len and operator* (UnString.h), StaticLoadClass (UnObjBas.h, 005eb8e0) and the
 * LoadClass<T> template aren't declared; same code as UE3's, on a stand-in. */
struct FStringM : public FString
{
	FORCEINLINE INT Len() const
	{
		return Num() ? Num() - 1 : 0;
	}
	FORCEINLINE const TCHAR* operator*() const
	{
		return Num() ? &(*this)(0) : TEXT("");
	}
};

#define STR(S) (*(const FStringM&)(S))
#define STRLEN(S) (((const FStringM&)(S)).Len())
#define LOAD_None 0x00000000		/* UnObjBas.h ELoadFlags */
UClass* StaticLoadClass(UClass* BaseClass, UObject* InOuter, const TCHAR* Name, const TCHAR* Filename, DWORD LoadFlags, UPackageMap* Sandbox);
template<class T> inline UClass* LoadClass(UObject* Outer, const TCHAR* Name, const TCHAR* Filename, DWORD LoadFlags, UPackageMap* Sandbox)
{
	return StaticLoadClass(T::StaticClass(), Outer, Name, Filename, LoadFlags, Sandbox);
}

// @baa 0x00da3e40
/* vf_144 is LoadDependentClasses: loads the classes named in the ini, falling back to the defaults. */
void UUIDataStore_OnlinePlayerData::vf_144()
{
	if (STRLEN(ProfileSettingsClassName) > 0)
	{
		ProfileSettingsClass = LoadClass<UOnlineProfileSettings>(NULL, STR(ProfileSettingsClassName), NULL, LOAD_None, NULL);
	}

	if (STRLEN(FriendsProviderClassName) > 0)
	{
		FriendsProviderClass = LoadClass<UUIDataProvider_OnlineFriends>(NULL, STR(FriendsProviderClassName), NULL, LOAD_None, NULL);
	}
	if (FriendsProviderClass == NULL)
	{
		FriendsProviderClass = UUIDataProvider_OnlineFriends::StaticClass();
	}

	if (STRLEN(FriendMessagesProviderClassName) > 0)
	{
		FriendMessagesProviderClass = LoadClass<UUIDataProvider_OnlineFriendMessages>(NULL, STR(FriendMessagesProviderClassName), NULL, LOAD_None, NULL);
	}
	if (FriendMessagesProviderClass == NULL)
	{
		FriendMessagesProviderClass = UUIDataProvider_OnlineFriendMessages::StaticClass();
	}

	if (STRLEN(PlayersProviderClassName) > 0)
	{
		PlayersProviderClass = LoadClass<UUIDataProvider_OnlinePlayers>(NULL, STR(PlayersProviderClassName), NULL, LOAD_None, NULL);
	}
	if (PlayersProviderClass == NULL)
	{
		PlayersProviderClass = UUIDataProvider_OnlinePlayers::StaticClass();
	}

	if (STRLEN(ClanMatesProviderClassName) > 0)
	{
		ClanMatesProviderClass = LoadClass<UUIDataProvider_OnlineClanMates>(NULL, STR(ClanMatesProviderClassName), NULL, LOAD_None, NULL);
	}
	if (ClanMatesProviderClass == NULL)
	{
		ClanMatesProviderClass = UUIDataProvider_OnlineClanMates::StaticClass();
	}

	if (STRLEN(AchievementsProviderClassName) > 0)
	{
		AchievementsProviderClass = LoadClass<UUIDataProvider_PlayerAchievements>(NULL, STR(AchievementsProviderClassName), NULL, LOAD_None, NULL);
	}
	if (AchievementsProviderClass == NULL)
	{
		AchievementsProviderClass = UUIDataProvider_PlayerAchievements::StaticClass();
	}
}
