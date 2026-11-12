// UnUIDataStores.cpp: 30 functions
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
void UUIDataStore_OnlinePlayerData::LoadDependentClasses()
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

void sub_00da2110();
// @baa 0x00da5390
void sub_00da5390(void) { sub_00da2110(); }

struct M_00da53a0 { void sub_00da2110(); };

struct C { char pad[8]; M_00da53a0 m; void sub_00da53a0(); };

// @baa 0x00da53a0
void C::sub_00da53a0() { m.sub_00da2110(); }

struct C_00da53b0 {
    undefined4 sub_00da53b0(byte);
    int sub_00618850();
};

int sub_0053dfa0(...);
// @baa 0x00da53b0
undefined4 C_00da53b0::sub_00da53b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00da53b0 *)(((char *)this + 8)))->sub_00618850();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00da53e0 { void sub_00da2110(); };

struct C_00da53e0 { char pad[8]; M_00da53e0 m; void sub_00da53e0(); };

// @baa 0x00da53e0
void C_00da53e0::sub_00da53e0() { m.sub_00da2110(); }

struct C_00da53f0 { void sub_00da2200(int); C_00da53f0 *sub_00da53f0(int); };

// @baa 0x00da53f0
C_00da53f0 *C_00da53f0::sub_00da53f0(int a) { sub_00da2200(a); return this; }

struct C_view {
    int sub_00da2110();
};

// @baa 0x00da5450
undefined4 USkeletalMeshComponent::sub_00da5450(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(((char *)this + 8)))->sub_00da2110();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_00da5480 {
    int sub_00da2200(int);
};

// @baa 0x00da5480
undefined4 * USkeletalMeshComponent::sub_00da5480(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C_view_00da5480 *)(((char *)this + 8)))->sub_00da2200((int)(param_2 + 2));
  return param_1;
}

struct C_view_00da54b0 {
    int sub_00da2200(int);
};

// @baa 0x00da54b0
undefined4 * USkeletalMeshComponent::sub_00da54b0(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  ((C_view_00da54b0 *)(((char *)this + 8)))->sub_00da2200(param_2[1]);
  return param_1;
}

struct C_view_00da54e0 {
    int sub_00da2200(int);
};

// @baa 0x00da54e0
undefined4 * USkeletalMeshComponent::sub_00da54e0(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  ((C_view_00da54e0 *)(((char *)this + 8)))->sub_00da2200(param_2[1]);
  param_1[0x11] = 0xffffffff;
  return param_1;
}

// @baa 0x00da5740
undefined4 USkeletalMeshComponent::sub_00da5740(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(((char *)this + 8)))->sub_00da2110();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00d984c0(void);
// @baa 0x00da5dc0
int USkeletalMeshComponent::sub_00da5dc0(void)
{
    int param_1 = (int)this;

  sub_00d984c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00da5a70();
// @baa 0x00da5de0
void sub_00da5de0(void) { sub_00da5a70(); }

struct C_view_00da5f50 {
    int sub_00da5b60(int);
};

// @baa 0x00da5f50
void USkeletalMeshComponent::sub_00da5f50(void)
{
    int param_1 = (int)this;
  ((C_view_00da5f50 *)((*(char **)((char *)this + 0x10))))->sub_00da5b60(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

// @baa 0x00da5f70
int USkeletalMeshComponent::sub_00da5f70(void)
{
    int param_1 = (int)this;

  sub_00d984c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00d98460(void);
// @baa 0x00da5f90
int USkeletalMeshComponent::sub_00da5f90(void)
{
    int param_1 = (int)this;

  sub_00d98460();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00da5df0();
// @baa 0x00da5fb0
void sub_00da5fb0(void) { sub_00da5df0(); }

void sub_00da5e60();
// @baa 0x00da6000
void sub_00da6000(void) { sub_00da5e60(); }

// @baa 0x00da6080
int USkeletalMeshComponent::sub_00da6080(void)
{
    int param_1 = (int)this;

  sub_00d984c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00da60a0
int USkeletalMeshComponent::sub_00da60a0(void)
{
    int param_1 = (int)this;

  sub_00d98460();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00da60c0
void sub_00da60c0(void) { sub_00da5df0(); }

void sub_00da6010();
// @baa 0x00da60d0
void sub_00da60d0(void) { sub_00da6010(); }

// @baa 0x00da60e0
int USkeletalMeshComponent::sub_00da60e0(void)
{
    int param_1 = (int)this;

  sub_00d984c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00da6100
int USkeletalMeshComponent::sub_00da6100(void)
{
    int param_1 = (int)this;

  sub_00d98460();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00da6120
void sub_00da6120(void) { sub_00da5df0(); }

// @baa 0x00da6130
void sub_00da6130(void) { sub_00da6010(); }

// @baa 0x00da6140
int USkeletalMeshComponent::sub_00da6140(void)
{
    int param_1 = (int)this;

  sub_00d98460();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00da6160
void sub_00da6160(void) { sub_00da6010(); }

#define ARRAY_COUNT(array) (sizeof(array) / sizeof((array)[0]))
// @baa 0x00d935d0
/* UE3 declares this const (InputAliases is read through the const operator()); the kit's declaration isn't. */
FString UUIDataStore_InputAlias::GetAliasFontMarkupByIndex(INT AliasIndex, BYTE OverridePlatform)
{
    const UUIDataStore_InputAlias* This = this;
    FString Result;

    if (This->InputAliases.IsValidIndex(AliasIndex))
    {
        const FUIDataStoreInputAlias& Alias = This->InputAliases(AliasIndex);

        INT Platform = IPT_PC;
        if (OverridePlatform < IPT_MAX)
        {
            Platform = OverridePlatform;
        }
#line 2629 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp"
        check(Platform<ARRAY_COUNT(Alias.PlatformInputKeys));
#line 17 "candidate.cpp"

        Result = Alias.PlatformInputKeys[Platform].ButtonFontMarkupString;
    }

    return Result;
}

#line 356 "candidate.cpp"

// @baa 0x00d9fa10
/* UE3 declares this const (InputAliases is read through the const operator()); the kit's declaration isn't. */
FString UUIDataStore_InputAlias::GetAliasFontMarkup(FName DesiredAlias, BYTE OverridePlatform)
{
    const UUIDataStore_InputAlias* This = this;
    FString Result;

    INT AliasIndex = FindInputAliasIndex(DesiredAlias);

    if (This->InputAliases.IsValidIndex(AliasIndex))
    {
        const FUIDataStoreInputAlias& Alias = This->InputAliases(AliasIndex);

        INT Platform = IPT_PC;
        if (OverridePlatform < IPT_MAX)
        {
            Platform = OverridePlatform;
        }
#line 2599 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp"
        check(Platform<ARRAY_COUNT(Alias.PlatformInputKeys));
#line 21 "candidate.cpp"

        Result = Alias.PlatformInputKeys[Platform].ButtonFontMarkupString;
    }

    return Result;
}

#line 386 "candidate.cpp"
