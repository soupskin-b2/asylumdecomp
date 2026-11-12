// UnUIDataStores.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct S_00d92b80
{
    INT Unk00;
    INT Unk04;
    INT Unk08;
    INT Unk0c;
    INT Unk10;
    INT Unk14;
    S_00d92b80* sub_00d92b80(INT In);
};

// @baa 0x00d92b80
S_00d92b80* S_00d92b80::sub_00d92b80(INT In)
{
    S_00d92b80* Self = this;
    Self->Unk00 = 0;
    Self->Unk04 = 0;
    Self->Unk08 = 0;
    Self->Unk0c = 0;
    Self->Unk10 = 0;
    Self->Unk14 = 0;
    return Self;
}

struct C
{
    char pad_0[0x8];
    INT Value_8;
    INT Value_c;
    INT Value_10;

    C* sub_00d98610();
};

// @baa 0x00d98610
C* C::sub_00d98610()
{
    Value_8 = 0;
    Value_c = 0;
    Value_10 = 0;
    return this;
}

struct C_00d9a500
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_00d9a500* sub_00d9a500();
};

// @baa 0x00d9a500
C_00d9a500* C_00d9a500::sub_00d9a500()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

#define ARRAY_COUNT(array) (sizeof(array) / sizeof((array)[0]))
// @baa 0x00d936b0
/* UE3 declares this const (InputAliases is read through the const operator()); the kit's declaration isn't. */
FName UUIDataStore_InputAlias::GetAliasInputKeyNameByIndex(INT AliasIndex, BYTE OverridePlatform)
{
    const UUIDataStore_InputAlias* This = this;
    FName Result;
    Result.Index = NAME_None;
    Result.Number = 0;

    if (This->InputAliases.IsValidIndex(AliasIndex))
    {
        const FUIDataStoreInputAlias& Alias = This->InputAliases(AliasIndex);

        INT Platform = IPT_PC;
        if (OverridePlatform < IPT_MAX)
        {
            Platform = OverridePlatform;
        }
#line 2690 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp"
        check(Platform<ARRAY_COUNT(Alias.PlatformInputKeys));
#line 19 "candidate.cpp"

        Result = Alias.PlatformInputKeys[Platform].InputKeyData.InputKeyName;
    }

    return Result;
}

#line 98 "candidate.cpp"

// @baa 0x00d9fb00
/* UE3 declares this const (InputAliases is read through the const operator()); the kit's declaration isn't. */
FName UUIDataStore_InputAlias::GetAliasInputKeyName(FName DesiredAlias, BYTE OverridePlatform)
{
    const UUIDataStore_InputAlias* This = this;
    FName Result;
    Result.Index = NAME_None;
    Result.Number = 0;

    INT AliasIndex = FindInputAliasIndex(DesiredAlias);

    if (This->InputAliases.IsValidIndex(AliasIndex))
    {
        const FUIDataStoreInputAlias& Alias = This->InputAliases(AliasIndex);

        INT Platform = IPT_PC;
        if (OverridePlatform < IPT_MAX)
        {
            Platform = OverridePlatform;
        }
#line 2660 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp"
        check(Platform<ARRAY_COUNT(Alias.PlatformInputKeys));
#line 21 "candidate.cpp"

        Result = Alias.PlatformInputKeys[Platform].InputKeyData.InputKeyName;
    }

    return Result;
}

#line 130 "candidate.cpp"

// @baa 0x00d93750
/* UE3 declares this const (InputAliases is read through the const operator()); the kit's declaration isn't. */
UBOOL UUIDataStore_InputAlias::GetAliasInputKeyDataByIndex(FRawInputKeyEventData& out_InputKeyData, INT AliasIndex, BYTE OverridePlatform)
{
    const UUIDataStore_InputAlias* This = this;
    UBOOL bResult = FALSE;

    if (This->InputAliases.IsValidIndex(AliasIndex))
    {
        const FUIDataStoreInputAlias& Alias = This->InputAliases(AliasIndex);

        INT Platform = IPT_PC;
        if (OverridePlatform < IPT_MAX)
        {
            Platform = OverridePlatform;
        }
#line 2752 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp"
        check(Platform<ARRAY_COUNT(Alias.PlatformInputKeys));
#line 22 "candidate.cpp"

        out_InputKeyData = Alias.PlatformInputKeys[Platform].InputKeyData;
        bResult = TRUE;
    }

    return bResult;
}

#line 159 "candidate.cpp"

// @baa 0x00d9fbb0
/* UE3 declares this const (InputAliases is read through the const operator()); the kit's declaration isn't. */
UBOOL UUIDataStore_InputAlias::GetAliasInputKeyData(FRawInputKeyEventData& out_InputKeyData, FName DesiredAlias, BYTE OverridePlatform)
{
    const UUIDataStore_InputAlias* This = this;
    UBOOL bResult = FALSE;

    INT AliasIndex = FindInputAliasIndex(DesiredAlias);

    if (This->InputAliases.IsValidIndex(AliasIndex))
    {
        const FUIDataStoreInputAlias& Alias = This->InputAliases(AliasIndex);

        INT Platform = IPT_PC;
        if (OverridePlatform < IPT_MAX)
        {
            Platform = OverridePlatform;
        }
#line 2721 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp"
        check(Platform<ARRAY_COUNT(Alias.PlatformInputKeys));
#line 24 "candidate.cpp"

        out_InputKeyData = Alias.PlatformInputKeys[Platform].InputKeyData;
        bResult = TRUE;
    }

    return bResult;
}

#line 190 "candidate.cpp"
