// UnUIDataStores.cpp (part 1 of 6): 699 functions
// Placed here by: neighbours 605, callers 36, file 36, class 22.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00da15c0(void);
int sub_00da45e0(...);
extern undefined4 g_026c5bfc;
// @baa 0x00ca28f0
int sub_00ca28f0(void)
{
  if (g_026c5bfc == 0) {
    g_026c5bfc = sub_00da45e0(L"Engine");
    sub_00da15c0();
  }
  return g_026c5bfc;
}

int sub_00d99c00(...);
int sub_00da1470(void);
extern undefined4 g_026c5bec;
// @baa 0x00ca2920
int sub_00ca2920(void)
{
  if (g_026c5bec == 0) {
    g_026c5bec = sub_00d99c00(L"Engine");
    sub_00da1470();
  }
  return g_026c5bec;
}

int sub_00dca3b0(void);
int sub_00dd8ef0(...);
extern undefined4 g_026c5d94;
// @baa 0x00ca2bb0
int sub_00ca2bb0(void)
{
  if (g_026c5d94 == 0) {
    g_026c5d94 = sub_00dd8ef0(L"Engine");
    sub_00dca3b0();
  }
  return g_026c5d94;
}

int sub_00d9a440(...);
int sub_00d9c710(void);
extern undefined4 g_026c5c1c;
// @baa 0x00ca2be0
int sub_00ca2be0(void)
{
  if (g_026c5c1c == 0) {
    g_026c5c1c = sub_00d9a440(L"Engine");
    sub_00d9c710();
  }
  return g_026c5c1c;
}

int sub_00d99f00(...);
int sub_00d9c5c0(void);
extern undefined4 g_026c5c00;
// @baa 0x00ca2c10
int sub_00ca2c10(void)
{
  if (g_026c5c00 == 0) {
    g_026c5c00 = sub_00d99f00(L"Engine");
    sub_00d9c5c0();
  }
  return g_026c5c00;
}

int sub_00d99fc0(...);
int sub_00d9f400(void);
extern undefined4 g_026c5c04;
// @baa 0x00ca2cf0
int sub_00ca2cf0(void)
{
  if (g_026c5c04 == 0) {
    g_026c5c04 = sub_00d99fc0(L"Engine");
    sub_00d9f400();
  }
  return g_026c5c04;
}

int sub_00d9a080(...);
int sub_00da1710(void);
extern undefined4 g_026c5c08;
// @baa 0x00ca2d20
int sub_00ca2d20(void)
{
  if (g_026c5c08 == 0) {
    g_026c5c08 = sub_00d9a080(L"Engine");
    sub_00da1710();
  }
  return g_026c5c08;
}

int sub_00d9a140(...);
int sub_00da1860(void);
extern undefined4 g_026c5c0c;
// @baa 0x00ca2d50
int sub_00ca2d50(void)
{
  if (g_026c5c0c == 0) {
    g_026c5c0c = sub_00d9a140(L"Engine");
    sub_00da1860();
  }
  return g_026c5c0c;
}

int sub_00d9a200(...);
int sub_00da2d40(void);
extern undefined4 g_026c5c10;
// @baa 0x00ca2d80
int sub_00ca2d80(void)
{
  if (g_026c5c10 == 0) {
    g_026c5c10 = sub_00d9a200(L"Engine");
    sub_00da2d40();
  }
  return g_026c5c10;
}

int sub_00d9a2c0(...);
int sub_00d9f550(void);
extern undefined4 g_026c5c14;
// @baa 0x00ca2db0
int sub_00ca2db0(void)
{
  if (g_026c5c14 == 0) {
    g_026c5c14 = sub_00d9a2c0(L"Engine");
    sub_00d9f550();
  }
  return g_026c5c14;
}

extern char g_01e3f3e0[];
// @baa 0x00d8f330
int sub_00d8f330(void) { return (int)g_01e3f3e0; }

// @baa 0x00d8f340
int sub_00d8f340(int a0, int a1) { return a1; }

// @baa 0x00d8f350
IMPLEMENT_CLASS_AT(UUIDataStoreSubscriber, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 81);

int sub_005c7a20(void);
extern undefined * g_020bf9a8;
// @baa 0x00d8f3b0
undefined4 * UObject::sub_00d8f3b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020bf9a8);
  return param_1;
}

// @baa 0x00d8f3d0
// @baa 0x00d8f3f0
undefined4 sub_00d8f3f0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_020bfab8;
// @baa 0x00d8f400
undefined4 * UObject::sub_00d8f400(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020bfab8);
  return param_1;
}

// @baa 0x00d8f420
IMPLEMENT_CLASS_AT(UUIDataStorePublisher, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 82);

// @baa 0x00d8f480
extern char g_020bfbc4[];
// @baa 0x00d8f4a0
void UUIDataStorePublisher::sub_00d8f4a0(void) { *(int*)((char*)this + 0) = (int)g_020bfbc4; }

int sub_0053dfa0(...);
// @baa 0x00d8f4b0
undefined4 * UUIDataStorePublisher::sub_00d8f4b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020bfbc4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C { C* sub_00d8f4d0(int a0); };

// @baa 0x00d8f4d0
C* C::sub_00d8f4d0(int a0) { return this; }

// @baa 0x00d8f4e0
int sub_00d8f4e0(int a0, int a1) { return a1; }

// @baa 0x00d8f4f0
int sub_00d8f4f0(int a0, int a1) { return a1; }

// @baa 0x00d8f500
int sub_00d8f500(int a0, int a1) { return a1; }

// @baa 0x00d8f510
int sub_00d8f510(int a0, int a1) { return a1; }

struct C_00d8f520 { int sub_00d8f520(void); };

// @baa 0x00d8f520
int C_00d8f520::sub_00d8f520(void) { return *(int*)((char*)this + 28); }

struct C_00d8f530 { C_00d8f530* sub_00d8f530(int a0); };

// @baa 0x00d8f530
C_00d8f530* C_00d8f530::sub_00d8f530(int a0) { return this; }

extern "C" int g_026c4a44;
extern "C" int g_026c4a48;
struct UObjectThunk {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_00d8f540();
};

// @baa 0x00d8f540
void UObjectThunk::sub_00d8f540()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c4a44, g_026c4a48, 0), 0, 0);
}

// @baa 0x00d8f5b0
int sub_00d8f5b0(int a0, int a1) { return a1; }

// @baa 0x00d8f5c0
int sub_00d8f5c0(int a0, int a1) { return a1; }

// @baa 0x00d8f5d0
int sub_00d8f5d0(int a0, int a1) { return a1; }

// @baa 0x00d8f5e0
int sub_00d8f5e0(int a0, int a1) { return a1; }

struct C_00d8f5f0 { C_00d8f5f0* sub_00d8f5f0(void); };

// @baa 0x00d8f5f0
C_00d8f5f0* C_00d8f5f0::sub_00d8f5f0(void) { *(int*)((char*)this + 0) = (int)g_020bfbc4; return this; }

// @baa 0x00d8f600
int sub_00d8f600(int a0, int a1) { return a1; }

struct C_00d8f610 { C_00d8f610* sub_00d8f610(void); };

// @baa 0x00d8f610
C_00d8f610* C_00d8f610::sub_00d8f610(void) { return this; }

// @baa 0x00d8f620
int sub_00d8f620(int a0, int a1) { return a1; }

extern char g_01ebc268[];
// @baa 0x00d8f630
int sub_00d8f630(void) { return (int)g_01ebc268; }

// @baa 0x00d8f640
int sub_00d8f640(int a0, int a1) { return a1; }

// @baa 0x00d8f650
int sub_00d8f650(int a0, int a1) { return a1; }

struct C_00d8f660 { C_00d8f660* sub_00d8f660(int a0); };

// @baa 0x00d8f660
C_00d8f660* C_00d8f660::sub_00d8f660(int a0) { return this; }

struct C_00d8f670 { C_00d8f670* sub_00d8f670(int a0); };

// @baa 0x00d8f670
C_00d8f670* C_00d8f670::sub_00d8f670(int a0) { return this; }

struct C_00d8f680 { C_00d8f680* sub_00d8f680(int a0); };

// @baa 0x00d8f680
C_00d8f680* C_00d8f680::sub_00d8f680(int a0) { return this; }

// @baa 0x00d8f780
int sub_00d8f780(int a0, int a1) { return a1; }

// @baa 0x00d8f790
int sub_00d8f790(int a0, int a1) { return a1; }

// @baa 0x00d8f7a0
int sub_00d8f7a0(int a0, int a1) { return a1; }

struct C_00d8f7b0 { C_00d8f7b0* sub_00d8f7b0(void); };

// @baa 0x00d8f7b0
C_00d8f7b0* C_00d8f7b0::sub_00d8f7b0(void) { return this; }

// @baa 0x00d8f7c0
int sub_00d8f7c0(int a0, int a1) { return a1; }

struct C_00d8f7d0 { C_00d8f7d0* sub_00d8f7d0(void); };

// @baa 0x00d8f7d0
C_00d8f7d0* C_00d8f7d0::sub_00d8f7d0(void) { return this; }

// @baa 0x00d8f7e0
int sub_00d8f7e0(int a0, int a1) { return a1; }

// @baa 0x00d8f7f0
int sub_00d8f7f0(int a0, int a1) { return a1; }

struct C_00d8f800 { C_00d8f800* sub_00d8f800(int a0); };

// @baa 0x00d8f800
C_00d8f800* C_00d8f800::sub_00d8f800(int a0) { return this; }

struct C_00d8f810 { C_00d8f810* sub_00d8f810(int a0); };

// @baa 0x00d8f810
C_00d8f810* C_00d8f810::sub_00d8f810(int a0) { return this; }

struct UObjectThunk_00d8f870 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_00d8f870();
};

// @baa 0x00d8f870
void UObjectThunk_00d8f870::sub_00d8f870()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c4a44, g_026c4a48, 0), 0, 0);
}

// @baa 0x00d8f8e0
int sub_00d8f8e0(int a0, int a1) { return a1; }

// @baa 0x00d8f8f0
int sub_00d8f8f0(void) { return (int)g_01e3f3e0; }

// @baa 0x00d8f900
int sub_00d8f900(int a0, int a1) { return a1; }

// @baa 0x00d8f910
int sub_00d8f910(void) { return (int)g_01ebc268; }

// @baa 0x00d8f920
int sub_00d8f920(int a0, int a1) { return a1; }

// @baa 0x00d8f930
int sub_00d8f930(int a0, int a1) { return a1; }

// @baa 0x00d8f940
int sub_00d8f940(int a0, int a1) { return a1; }

extern char g_020b5204[];
// @baa 0x00d8f950
int sub_00d8f950(void) { return (int)g_020b5204; }

// @baa 0x00d8f960
int sub_00d8f960(int a0, int a1) { return a1; }

// @baa 0x00d8f970
int sub_00d8f970(int a0, int a1) { return a1; }

extern char g_020b5210[];
// @baa 0x00d8f980
int sub_00d8f980(void) { return (int)g_020b5210; }

// @baa 0x00d8f990
int sub_00d8f990(int a0, int a1) { return a1; }

struct C_00d8f9a0 { C_00d8f9a0* sub_00d8f9a0(int a0); };

// @baa 0x00d8f9a0
C_00d8f9a0* C_00d8f9a0::sub_00d8f9a0(int a0) { return this; }

struct C_00d8f9b0 { C_00d8f9b0* sub_00d8f9b0(int a0); };

// @baa 0x00d8f9b0
C_00d8f9b0* C_00d8f9b0::sub_00d8f9b0(int a0) { return this; }

// @baa 0x00d8fa40
int sub_00d8fa40(int a0, int a1) { return a1; }

// @baa 0x00d8fa50
int sub_00d8fa50(int a0, int a1) { return a1; }

// @baa 0x00d8fa60
int sub_00d8fa60(int a0, int a1) { return a1; }

// @baa 0x00d8fa70
int sub_00d8fa70(int a0, int a1) { return a1; }

// @baa 0x00d8fa80
int sub_00d8fa80(int a0, int a1) { return a1; }

struct C_00d8fa90 { C_00d8fa90* sub_00d8fa90(int a0); };

// @baa 0x00d8fa90
C_00d8fa90* C_00d8fa90::sub_00d8fa90(int a0) { return this; }

struct C_00d8faa0 { C_00d8faa0* sub_00d8faa0(int a0); };

// @baa 0x00d8faa0
C_00d8faa0* C_00d8faa0::sub_00d8faa0(int a0) { return this; }

// @baa 0x00d8fb30
int sub_00d8fb30(int a0, int a1) { return a1; }

// @baa 0x00d8fb40
int sub_00d8fb40(void) { return (int)g_020b5210; }

// @baa 0x00d8fb50
void sub_00d8fb50(void) {  }

struct C_00d8fb60 { C_00d8fb60* sub_00d8fb60(void); };

// @baa 0x00d8fb60
C_00d8fb60* C_00d8fb60::sub_00d8fb60(void) { return this; }

struct C_00d8fb70 { C_00d8fb70* sub_00d8fb70(void); };

// @baa 0x00d8fb70
C_00d8fb70* C_00d8fb70::sub_00d8fb70(void) { return this; }

// @baa 0x00d8fb80
int sub_00d8fb80(int a0, int a1) { return a1; }

// @baa 0x00d8fb90
int sub_00d8fb90(int a0, int a1) { return a1; }

// @baa 0x00d8fba0
int sub_00d8fba0(void) { return (int)g_020b5210; }

// @baa 0x00d8fbb0
int sub_00d8fbb0(int a0, int a1) { return a1; }

// @baa 0x00d8fbc0
int sub_00d8fbc0(int a0, int a1) { return a1; }

// @baa 0x00d8fbd0
int sub_00d8fbd0(void) { return (int)g_020b5210; }

// @baa 0x00d8fbe0
IMPLEMENT_CLASS_AT(UUIContainer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIContainers.cpp", 28);

// @baa 0x00d8fcf0
int UUIContainer::vf_000(void) { return 1; }

// @baa 0x00d8fd00
bool UUIContainer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d8fd60
int UUITabPage::vf_000(void) { return 1; }

// @baa 0x00d8fd70
IMPLEMENT_CLASS_AT(UUITabControl, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIContainers.cpp", 38);

// @baa 0x00d8fea0
bool UUITabControl::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00d8fee0 { char* sub_00d8fee0(void); };

// @baa 0x00d8fee0
char* C_00d8fee0::sub_00d8fee0(void) { return (char*)this + 4; }

// @baa 0x00d8fef0
IMPLEMENT_CLASS_AT(UDataStoreClient, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 15);

// @baa 0x00d90020
bool UDataStoreClient::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d90060
IMPLEMENT_CLASS_AT(UUIDataProvider, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 16);

// @baa 0x00d90170
int UUIDataProvider::vf_000(void) { return 1; }

// @baa 0x00d90180
bool UUIDataProvider::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d901c0
int UUIConfigProvider::vf_000(void) { return 1; }

// @baa 0x00d901d0
int UUIConfigFileProvider::vf_000(void) { return 1; }

// @baa 0x00d901e0
int UUIConfigSectionProvider::vf_000(void) { return 1; }

// @baa 0x00d901f0
int UUIDataStore::vf_000(void) { return 1; }

// @baa 0x00d90220
int UUIDataStore_SessionSettings::vf_000(void) { return 1; }

// @baa 0x00d90230
int UUIDataStore_GameState::vf_000(void) { return 1; }

// @baa 0x00d90240
int UCurrentGameDataStore::vf_000(void) { return 1; }

// @baa 0x00d90250
int UPlayerOwnerDataStore::vf_000(void) { return 1; }

// @baa 0x00d90260
int UUIDataStore_Strings::vf_000(void) { return 1; }

// @baa 0x00d90270
int USceneDataStore::vf_000(void) { return 1; }

// @baa 0x00d90280
int UUIDataStore_Remote::vf_000(void) { return 1; }

// @baa 0x00d90290
int UUIDataStore_StringBase::vf_000(void) { return 1; }

// @baa 0x00d902c0
int UUIPropertyDataProvider::vf_000(void) { return 1; }

// @baa 0x00d902d0
int UUIDynamicDataProvider::vf_000(void) { return 1; }

// @baa 0x00d902e0
int UGameInfoDataProvider::vf_000(void) { return 1; }

// @baa 0x00d902f0
int UPlayerDataProvider::vf_000(void) { return 1; }

// @baa 0x00d90300
int UPlayerOwnerDataProvider::vf_000(void) { return 1; }

// @baa 0x00d90310
int UUISettingsProvider::vf_000(void) { return 1; }

// @baa 0x00d90320
int USessionSettingsProvider::vf_000(void) { return 1; }

// @baa 0x00d90350
// @baa 0x00d90460
int UUIDataStoreSubscriber::vf_000(void) { return 1; }

// @baa 0x00d90470
bool UUIDataStoreSubscriber::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d904b0
int UUIDataStorePublisher::vf_000(void) { return 1; }

// @baa 0x00d904c0
void sub_00d904c0(void) {  }

// @baa 0x00d90550
void UUIDataStore::vf_140(void) {  }

// @baa 0x00d90560
int sub_00d90560(void) { return 0; }

// @baa 0x00d906c0
int UUIDataProvider_OnlinePlayerDataBase::vf_000(void) { return 1; }

// @baa 0x00d906d0
int UUIDataProvider_OnlineFriends::vf_000(void) { return 1; }

// @baa 0x00d906e0
int UUIDataProvider_OnlineFriendMessages::vf_000(void) { return 1; }

// @baa 0x00d906f0
int UUIDataProvider_PlayerAchievements::vf_000(void) { return 1; }

// @baa 0x00d90890
int UUIDataProvider_OnlineProfileSettingsArray::vf_000(void) { return 1; }

// @baa 0x00d908a0
int UUIDataProvider_OnlinePlayers::vf_000(void) { return 1; }

// @baa 0x00d908b0
int UUIDataProvider_OnlineClanMates::vf_000(void) { return 1; }

struct C_00d908c0 { int sub_00d908c0(void); };

// @baa 0x00d908c0
int C_00d908c0::sub_00d908c0(void) { return *(int*)((char*)this + 4); }

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_00d908d0();
};

// @baa 0x00d908d0
S *S::sub_00d908d0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_00d908e0 {
    undefined4 sub_00d908e0();
};

// @baa 0x00d908e0
undefined4 C_00d908e0::sub_00d908e0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

struct C_00d908f0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00d908f0(INT Index);
};

// @baa 0x00d908f0
UBOOL C_00d908f0::sub_00d908f0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00d90910 { int sub_00d90910(void); };

// @baa 0x00d90910
int C_00d90910::sub_00d90910(void) { return *(int*)((char*)this + 4); }

struct C_00d90920 { int a, b, c; C_00d90920(); };

// @baa 0x00d90920
C_00d90920::C_00d90920() : a(0), b(0), c(0) {}

struct C_00d90930 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00d90930(INT Index);
};

// @baa 0x00d90930
UBOOL C_00d90930::sub_00d90930(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00d90950 { int sub_00d90950(void); };

// @baa 0x00d90950
int C_00d90950::sub_00d90950(void) { return *(int*)((char*)this + 4); }

struct C_00d90960 { int a, b, c; C_00d90960(); };

// @baa 0x00d90960
C_00d90960::C_00d90960() : a(0), b(0), c(0) {}

struct C_00d90970 { int sub_00d90970(void); };

// @baa 0x00d90970
int C_00d90970::sub_00d90970(void) { return *(int*)((char*)this + 4); }

struct C_00d90980 { int sub_00d90980(void); };

// @baa 0x00d90980
int C_00d90980::sub_00d90980(void) { return *(int*)((char*)this + 4); }

struct C_00d90990 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00d90990(INT Index);
};

// @baa 0x00d90990
UBOOL C_00d90990::sub_00d90990(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00d909b0 { int sub_00d909b0(void); };

// @baa 0x00d909b0
int C_00d909b0::sub_00d909b0(void) { return *(int*)((char*)this + 4); }

struct C_00d909c0 { int sub_00d909c0(void); };

// @baa 0x00d909c0
int C_00d909c0::sub_00d909c0(void) { return *(int*)((char*)this + 4); }

struct C_00d909d0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00d909d0(INT Index);
};

// @baa 0x00d909d0
UBOOL C_00d909d0::sub_00d909d0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00d909f0 { int sub_00d909f0(void); };

// @baa 0x00d909f0
int C_00d909f0::sub_00d909f0(void) { return *(int*)((char*)this + 4); }

struct C_00d90a00 { int sub_00d90a00(void); };

// @baa 0x00d90a00
int C_00d90a00::sub_00d90a00(void) { return *(int*)((char*)this + 4); }

struct C_00d90a10 { char* sub_00d90a10(void); };

// @baa 0x00d90a10
char* C_00d90a10::sub_00d90a10(void) { return (char*)this + 60; }

struct T_00d90a20 { int x; };

// @baa 0x00d90a20
template const T_00d90a20& TIndirectArray<T_00d90a20>::operator()(INT) const;

struct S_00d90a70 {
    INT Unk00;
    INT Unk04;
    S_00d90a70 *sub_00d90a70();
};

// @baa 0x00d90a70
S_00d90a70 *S_00d90a70::sub_00d90a70()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_00d90a80 {
    undefined4 sub_00d90a80();
};

// @baa 0x00d90a80
undefined4 C_00d90a80::sub_00d90a80(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 4);
}

struct C_00d90a90 { C_00d90a90* sub_00d90a90(int a0); };

// @baa 0x00d90a90
C_00d90a90* C_00d90a90::sub_00d90a90(int a0) { return this; }

struct C_00d90b10 { C_00d90b10* sub_00d90b10(int a0); };

// @baa 0x00d90b10
C_00d90b10* C_00d90b10::sub_00d90b10(int a0) { return this; }

struct C_00d90b20 { int sub_00d90b20(void); };

// @baa 0x00d90b20
int C_00d90b20::sub_00d90b20(void) { return *(int*)((char*)this + 0); }

struct C_00d90b30 { int sub_00d90b30(void); };

// @baa 0x00d90b30
int C_00d90b30::sub_00d90b30(void) { return *(int*)((char*)this + 0); }

struct C_00d90bb0 {
    int sub_00d90bb0(int);
};

// @baa 0x00d90bb0
int C_00d90bb0::sub_00d90bb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00d90bc0 { int sub_00d90bc0(void); };

// @baa 0x00d90bc0
int C_00d90bc0::sub_00d90bc0(void) { return *(int*)((char*)this + 0); }

struct C_00d90bd0 { int sub_00d90bd0(void); };

// @baa 0x00d90bd0
int C_00d90bd0::sub_00d90bd0(void) { return *(int*)((char*)this + 0); }

struct C_00d90c50 {
    int sub_00d90c50(int);
};

// @baa 0x00d90c50
int C_00d90c50::sub_00d90c50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00d90c60 { int sub_00d90c60(void); };

// @baa 0x00d90c60
int C_00d90c60::sub_00d90c60(void) { return *(int*)((char*)this + 0); }

struct C_00d90c70 { C_00d90c70* sub_00d90c70(int a0); };

// @baa 0x00d90c70
C_00d90c70* C_00d90c70::sub_00d90c70(int a0) { return this; }

struct C_00d90c80 { int sub_00d90c80(void); };

// @baa 0x00d90c80
int C_00d90c80::sub_00d90c80(void) { return *(int*)((char*)this + 0); }

struct C_00d90d00 { C_00d90d00* sub_00d90d00(int a0); };

// @baa 0x00d90d00
C_00d90d00* C_00d90d00::sub_00d90d00(int a0) { return this; }

struct C_00d90d10 { int sub_00d90d10(void); };

// @baa 0x00d90d10
int C_00d90d10::sub_00d90d10(void) { return *(int*)((char*)this + 0); }

struct C_00d90d90 { C_00d90d90* sub_00d90d90(int a0); };

// @baa 0x00d90d90
C_00d90d90* C_00d90d90::sub_00d90d90(int a0) { return this; }

struct C_00d90da0 { int sub_00d90da0(void); };

// @baa 0x00d90da0
int C_00d90da0::sub_00d90da0(void) { return *(int*)((char*)this + 0); }

struct C_00d90e20 { C_00d90e20* sub_00d90e20(int a0); };

// @baa 0x00d90e20
C_00d90e20* C_00d90e20::sub_00d90e20(int a0) { return this; }

struct C_00d90e30 { int sub_00d90e30(void); };

// @baa 0x00d90e30
int C_00d90e30::sub_00d90e30(void) { return *(int*)((char*)this + 0); }

struct C_00d90e40 {
    int sub_00d90e40(int);
};

// @baa 0x00d90e40
int C_00d90e40::sub_00d90e40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_00d90e50 { C_00d90e50* sub_00d90e50(int a0); };

// @baa 0x00d90e50
C_00d90e50* C_00d90e50::sub_00d90e50(int a0) { return this; }

struct C_00d90e60 { C_00d90e60* sub_00d90e60(int a0); };

// @baa 0x00d90e60
C_00d90e60* C_00d90e60::sub_00d90e60(int a0) { return this; }

struct C_00d90e70 { C_00d90e70* sub_00d90e70(int a0); };

// @baa 0x00d90e70
C_00d90e70* C_00d90e70::sub_00d90e70(int a0) { return this; }

struct C_00d90e80 { C_00d90e80* sub_00d90e80(int a0); };

// @baa 0x00d90e80
C_00d90e80* C_00d90e80::sub_00d90e80(int a0) { return this; }

struct C_00d90e90 { C_00d90e90* sub_00d90e90(int a0); };

// @baa 0x00d90e90
C_00d90e90* C_00d90e90::sub_00d90e90(int a0) { return this; }

struct C_00d90ea0 { int sub_00d90ea0(void); };

// @baa 0x00d90ea0
int C_00d90ea0::sub_00d90ea0(void) { return *(int*)((char*)this + 0); }

struct C_00d90f20 { C_00d90f20* sub_00d90f20(int a0); };

// @baa 0x00d90f20
C_00d90f20* C_00d90f20::sub_00d90f20(int a0) { return this; }

struct C_00d90f30 { int sub_00d90f30(void); };

// @baa 0x00d90f30
int C_00d90f30::sub_00d90f30(void) { return *(int*)((char*)this + 0); }

struct C_00d90f40 { int sub_00d90f40(void); };

// @baa 0x00d90f40
int C_00d90f40::sub_00d90f40(void) { return *(int*)((char*)this + 0); }

struct C_00d90f50 {
    int sub_00d90f50(int);
};

// @baa 0x00d90f50
int C_00d90f50::sub_00d90f50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_00d90f60 { C_00d90f60* sub_00d90f60(int a0); };

// @baa 0x00d90f60
C_00d90f60* C_00d90f60::sub_00d90f60(int a0) { return this; }

struct C_00d90f70 { int sub_00d90f70(void); };

// @baa 0x00d90f70
int C_00d90f70::sub_00d90f70(void) { return *(int*)((char*)this + 0); }

struct C_00d90f80 { C_00d90f80* sub_00d90f80(int a0); };

// @baa 0x00d90f80
C_00d90f80* C_00d90f80::sub_00d90f80(int a0) { return this; }

struct C_00d90f90 { C_00d90f90* sub_00d90f90(int a0); };

// @baa 0x00d90f90
C_00d90f90* C_00d90f90::sub_00d90f90(int a0) { return this; }

struct C_00d90fa0 { C_00d90fa0* sub_00d90fa0(int a0); };

// @baa 0x00d90fa0
C_00d90fa0* C_00d90fa0::sub_00d90fa0(int a0) { return this; }

struct C_00d90fb0 { C_00d90fb0* sub_00d90fb0(int a0); };

// @baa 0x00d90fb0
C_00d90fb0* C_00d90fb0::sub_00d90fb0(int a0) { return this; }

struct C_00d90fc0 { C_00d90fc0* sub_00d90fc0(int a0); };

// @baa 0x00d90fc0
C_00d90fc0* C_00d90fc0::sub_00d90fc0(int a0) { return this; }

struct C_00d90ff0 {
    int sub_00d90ff0();
};

// @baa 0x00d90ff0
int C_00d90ff0::sub_00d90ff0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00d91000 { int a, b; C_00d91000(int, int); };

// @baa 0x00d91000
C_00d91000::C_00d91000(int x, int y) : a(x), b(y) {}

struct C_00d91020 {
    int sub_00d91020();
};

// @baa 0x00d91020
int C_00d91020::sub_00d91020(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00d91030 { int a, b; C_00d91030(int, int); };

// @baa 0x00d91030
C_00d91030::C_00d91030(int x, int y) : a(x), b(y) {}

struct C_00d91050 { int sub_00d91050(void); };

// @baa 0x00d91050
int C_00d91050::sub_00d91050(void) { return *(int*)((char*)this + 0); }

struct C_00d91060 { int sub_00d91060(void); };

// @baa 0x00d91060
int C_00d91060::sub_00d91060(void) { return *(int*)((char*)this + 0); }

struct C_00d91070 { int sub_00d91070(void); };

// @baa 0x00d91070
int C_00d91070::sub_00d91070(void) { return *(int*)((char*)this + 0); }

struct C_00d91080 { int sub_00d91080(void); };

// @baa 0x00d91080
int C_00d91080::sub_00d91080(void) { return *(int*)((char*)this + 0); }

struct E { BYTE Bytes[16]; };

struct S_00d91090 {
    TArray<E> Items; // 0x00
    E* sub_00d91090(INT Index);
};

// @baa 0x00d91090
E* S_00d91090::sub_00d91090(INT Index)
{
    return &Items(Index);
}

struct C_00d910e0 { int sub_00d910e0(void); };

// @baa 0x00d910e0
int C_00d910e0::sub_00d910e0(void) { return *(int*)((char*)this + 0); }

struct C_00d910f0 { int sub_00d910f0(void); };

// @baa 0x00d910f0
int C_00d910f0::sub_00d910f0(void) { return *(int*)((char*)this + 0); }

struct C_00d91100 { int sub_00d91100(void); };

// @baa 0x00d91100
int C_00d91100::sub_00d91100(void) { return *(int*)((char*)this + 0); }

struct C_00d91110 { int sub_00d91110(void); };

// @baa 0x00d91110
int C_00d91110::sub_00d91110(void) { return *(int*)((char*)this + 0); }

struct C_00d91120 { int sub_00d91120(void); };

// @baa 0x00d91120
int C_00d91120::sub_00d91120(void) { return *(int*)((char*)this + 0); }

struct C_00d91130 { int sub_00d91130(void); };

// @baa 0x00d91130
int C_00d91130::sub_00d91130(void) { return *(int*)((char*)this + 0); }

struct C_00d911b0 { int sub_00d911b0(void); };

// @baa 0x00d911b0
int C_00d911b0::sub_00d911b0(void) { return *(int*)((char*)this + 0); }

struct C_00d911c0 { int sub_00d911c0(void); };

// @baa 0x00d911c0
int C_00d911c0::sub_00d911c0(void) { return *(int*)((char*)this + 0); }

struct C_00d911d0 { int sub_00d911d0(void); };

// @baa 0x00d911d0
int C_00d911d0::sub_00d911d0(void) { return *(int*)((char*)this + 0); }

struct C_00d911e0 { int sub_00d911e0(void); };

// @baa 0x00d911e0
int C_00d911e0::sub_00d911e0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00d911f0
int sub_00d911f0(int a0) { return *(int*)a0; }

// @baa 0x00d91200
undefined4 sub_00d91200(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00d91220 {
    void sub_00d91220(int *);
};

// @baa 0x00d91220
void C_00d91220::sub_00d91220(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

// @baa 0x00d91230
int sub_00d91230(int a0) { return *(int*)a0; }

// @baa 0x00d91240
undefined4 sub_00d91240(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00d91260 {
    void sub_00d91260(int *);
};

// @baa 0x00d91260
void C_00d91260::sub_00d91260(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

struct C_00d91270 { int sub_00d91270(void); };

// @baa 0x00d91270
int C_00d91270::sub_00d91270(void) { return *(int*)((char*)this + 0); }

struct C_00d91280 { int sub_00d91280(void); };

// @baa 0x00d91280
int C_00d91280::sub_00d91280(void) { return *(int*)((char*)this + 0); }

struct C_00d91290 { int sub_00d91290(void); };

// @baa 0x00d91290
int C_00d91290::sub_00d91290(void) { return *(int*)((char*)this + 0); }

struct C_00d912a0 { int sub_00d912a0(void); };

// @baa 0x00d912a0
int C_00d912a0::sub_00d912a0(void) { return *(int*)((char*)this + 0); }

struct C_00d912b0 { int sub_00d912b0(void); };

// @baa 0x00d912b0
int C_00d912b0::sub_00d912b0(void) { return *(int*)((char*)this + 0); }

struct C_00d912c0 { int sub_00d912c0(void); };

// @baa 0x00d912c0
int C_00d912c0::sub_00d912c0(void) { return *(int*)((char*)this + 0); }

struct C_00d912d0 { int sub_00d912d0(void); };

// @baa 0x00d912d0
int C_00d912d0::sub_00d912d0(void) { return *(int*)((char*)this + 0); }

struct C_00d912e0 { int sub_00d912e0(void); };

// @baa 0x00d912e0
int C_00d912e0::sub_00d912e0(void) { return *(int*)((char*)this + 0); }

struct C_00d912f0 { int sub_00d912f0(void); };

// @baa 0x00d912f0
int C_00d912f0::sub_00d912f0(void) { return *(int*)((char*)this + 0); }

struct C_00d91380 {
    undefined4 sub_00d91380();
};

// @baa 0x00d91380
undefined4 C_00d91380::sub_00d91380(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x14);
}

struct C_00d91390 { int sub_00d91390(void); };

// @baa 0x00d91390
int C_00d91390::sub_00d91390(void) { return *(int*)((char*)this + 20); }

struct C_00d913a0 { int sub_00d913a0(void); };

// @baa 0x00d913a0
int C_00d913a0::sub_00d913a0(void) { return *(int*)((char*)this + 20); }

struct C_00d913b0 { int sub_00d913b0(void); };

// @baa 0x00d913b0
int C_00d913b0::sub_00d913b0(void) { return *(int*)((char*)this + 20); }

struct C_00d913c0 { int sub_00d913c0(void); };

// @baa 0x00d913c0
int C_00d913c0::sub_00d913c0(void) { return *(int*)((char*)this + 20); }

// @baa 0x00d913d0
int sub_00d913d0(int a0) { return *(int*)a0; }

struct C_00d91400 { int a, b; C_00d91400(int, int); };

// @baa 0x00d91400
C_00d91400::C_00d91400(int x, int y) : a(x), b(y) {}

void sub_00572b30();
// @baa 0x00d914c0
void sub_00d914c0(void) { sub_00572b30(); }

// @baa 0x00d91550
void sub_00d91550(void) { sub_00572b30(); }

int sub_005eb8e0(...);
int sub_00d67420(void);
int sub_00d8ac90(...);
extern undefined4 g_026c5964;
// @baa 0x00d91560
void sub_00d91560(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c5964 == 0) {
    g_026c5964 = sub_00d8ac90(L"Engine");
    sub_00d67420();
  }
  sub_005eb8e0(g_026c5964,param_1,param_2,param_3,param_4,param_5);
  return;
}

struct S_00d915b0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00d915b0(INT Index) const;
};

// @baa 0x00d915b0
const DWORD* S_00d915b0::sub_00d915b0(INT Index) const
{
    return &Items(Index);
}

struct E_00d91600 { BYTE Bytes[24]; };

struct S_00d91600 {
    TArray<E_00d91600> Items; // 0x00
    const E_00d91600* sub_00d91600(INT Index) const;
};

// @baa 0x00d91600
const E_00d91600* S_00d91600::sub_00d91600(INT Index) const
{
    return &Items(Index);
}

// @baa 0x00d916d0
// @baa 0x00d916f0
// @baa 0x00d91710
// @baa 0x00d917d0
struct S_00d919b0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00d919b0(INT Index) const;
};

// @baa 0x00d919b0
const DWORD* S_00d919b0::sub_00d919b0(INT Index) const
{
    return &Items(Index);
}

struct C_00d91a80{
int sub_00d91a80(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00d91a80
int C_00d91a80::sub_00d91a80(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct S_00d91b90 {
    TArray<E> Items; // 0x00
    E* sub_00d91b90(INT Index);
};

// @baa 0x00d91b90
E* S_00d91b90::sub_00d91b90(INT Index)
{
    return &Items(Index);
}

struct S_00d91be0 {
    TArray<E> Items; // 0x00
    const E* sub_00d91be0(INT Index) const;
};

// @baa 0x00d91be0
const E* S_00d91be0::sub_00d91be0(INT Index) const
{
    return &Items(Index);
}

typedef uint size_t;

struct C_00d91c30 {
    int sub_00d91c30(int);
    int sub_00d90b40(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00d91c30
int C_00d91c30::sub_00d91c30(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00d91c30 *)(this))->sub_00d90b40(param_2);
  sub_01a37612((void *)(iVar1 * 0x10 + *param_1),0,param_2 << 4);
  return iVar1;
}

struct S_00d91c60 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00d91c60(INT Index);
};

// @baa 0x00d91c60
DWORD* S_00d91c60::sub_00d91c60(INT Index)
{
    return &Items(Index);
}

struct C_00d91ce0{
int sub_00d91ce0(undefined4*);
};

// @baa 0x00d91ce0
int C_00d91ce0::sub_00d91ce0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct E_00d91d40 { BYTE Bytes[24]; };

struct S_00d91d40 {
    TArray<E_00d91d40> Items; // 0x00
    E_00d91d40* sub_00d91d40(INT Index);
};

// @baa 0x00d91d40
E_00d91d40* S_00d91d40::sub_00d91d40(INT Index)
{
    return &Items(Index);
}

struct S_00d91d90 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00d91d90(INT Index);
};

// @baa 0x00d91d90
DWORD* S_00d91d90::sub_00d91d90(INT Index)
{
    return &Items(Index);
}

struct C_00d91de0{
int sub_00d91de0(undefined4*);
};

// @baa 0x00d91de0
int C_00d91de0::sub_00d91de0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct E_00d91e40 { BYTE Bytes[48]; };

struct S_00d91e40 {
    TArray<E_00d91e40> Items; // 0x00
    E_00d91e40* sub_00d91e40(INT Index);
};

// @baa 0x00d91e40
E_00d91e40* S_00d91e40::sub_00d91e40(INT Index)
{
    return &Items(Index);
}

struct E_00d91f00 { BYTE Bytes[52]; };

struct S_00d91f00 {
    TArray<E_00d91f00> Items; // 0x00
    const E_00d91f00* sub_00d91f00(INT Index) const;
};

// @baa 0x00d91f00
const E_00d91f00* S_00d91f00::sub_00d91f00(INT Index) const
{
    return &Items(Index);
}

struct S_00d91f50 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00d91f50(INT Index);
};

// @baa 0x00d91f50
DWORD* S_00d91f50::sub_00d91f50(INT Index)
{
    return &Items(Index);
}

struct E_00d92000 { BYTE Bytes[80]; };

struct S_00d92000 {
    TArray<E_00d92000> Items; // 0x00
    E_00d92000* sub_00d92000(INT Index);
};

// @baa 0x00d92000
E_00d92000* S_00d92000::sub_00d92000(INT Index)
{
    return &Items(Index);
}

struct E_00d92050 { BYTE Bytes[80]; };

struct S_00d92050 {
    TArray<E_00d92050> Items; // 0x00
    const E_00d92050* sub_00d92050(INT Index) const;
};

// @baa 0x00d92050
const E_00d92050* S_00d92050::sub_00d92050(INT Index) const
{
    return &Items(Index);
}

struct S_00d920a0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00d920a0(INT Index);
};

// @baa 0x00d920a0
DWORD* S_00d920a0::sub_00d920a0(INT Index)
{
    return &Items(Index);
}

// @baa 0x00d921e0
void __stdcall sub_00d921e0(int a0, int a1) {  }

struct C_00d921f0 {
    int sub_00d921f0(int);
};

// @baa 0x00d921f0
int C_00d921f0::sub_00d921f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00d92200 {
    int sub_00d92200(int);
};

// @baa 0x00d92200
int C_00d92200::sub_00d92200(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00d92210
void __stdcall sub_00d92210(int a0, int a1) {  }

struct C_00d92220 {
    int sub_00d92220(int);
};

// @baa 0x00d92220
int C_00d92220::sub_00d92220(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_00d92230 {
    int sub_00d92230(int);
};

// @baa 0x00d92230
int C_00d92230::sub_00d92230(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00d92240
void __stdcall sub_00d92240(int a0, int a1) {  }

struct C_00d92250 {
    int sub_00d92250(int);
};

// @baa 0x00d92250
int C_00d92250::sub_00d92250(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00d92260 {
    int sub_00d92260(int);
};

// @baa 0x00d92260
int C_00d92260::sub_00d92260(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00d92270 {
    int sub_00d92270(int);
};

// @baa 0x00d92270
int C_00d92270::sub_00d92270(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00d92280 {
    int sub_00d92280(int);
};

// @baa 0x00d92280
int C_00d92280::sub_00d92280(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00d92290 {
    int sub_00d92290(int);
};

// @baa 0x00d92290
int C_00d92290::sub_00d92290(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00d922a0
void __stdcall sub_00d922a0(int a0, int a1) {  }

struct C_00d92310 {
    int sub_00d92310(int);
};

// @baa 0x00d92310
int C_00d92310::sub_00d92310(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00d92320
void __stdcall sub_00d92320(int a0, int a1) {  }

struct C_00d92330 {
    int sub_00d92330(int);
};

// @baa 0x00d92330
int C_00d92330::sub_00d92330(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00d92340 {
    int sub_00d92340(int);
};

// @baa 0x00d92340
int C_00d92340::sub_00d92340(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_00d92350 {
    int sub_00d92350(int);
};

// @baa 0x00d92350
int C_00d92350::sub_00d92350(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00d92360 {
    int sub_00d92360(int);
};

// @baa 0x00d92360
int C_00d92360::sub_00d92360(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct E_00d92370 { BYTE Bytes[52]; };

struct S_00d92370 {
    TArray<E_00d92370> Items; // 0x00
    E_00d92370* sub_00d92370(INT Index);
};

// @baa 0x00d92370
E_00d92370* S_00d92370::sub_00d92370(INT Index)
{
    return &Items(Index);
}

struct S_00d923c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00d923c0(INT Index);
};

// @baa 0x00d923c0
DWORD* S_00d923c0::sub_00d923c0(INT Index)
{
    return &Items(Index);
}

struct S_00d92410 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00d92410(INT Index);
};

// @baa 0x00d92410
DWORD* S_00d92410::sub_00d92410(INT Index)
{
    return &Items(Index);
}

struct S_00d92460 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00d92460(INT Index);
};

// @baa 0x00d92460
DWORD* S_00d92460::sub_00d92460(INT Index)
{
    return &Items(Index);
}

struct S_00d924b0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00d924b0(INT Index);
};

// @baa 0x00d924b0
DWORD* S_00d924b0::sub_00d924b0(INT Index)
{
    return &Items(Index);
}

struct S_00d92500 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00d92500(INT Index);
};

// @baa 0x00d92500
DWORD* S_00d92500::sub_00d92500(INT Index)
{
    return &Items(Index);
}

struct S_00d92550 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00d92550(INT Index);
};

// @baa 0x00d92550
QWORD* S_00d92550::sub_00d92550(INT Index)
{
    return &Items(Index);
}

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_00d925a0(INT Index);
};

// @baa 0x00d925a0
FFaceFXElement* UFxRenderWidget::sub_00d925a0(INT Index)
{
	return &BoneArray(Index);
}

struct S_00d925f0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00d925f0(INT Index);
};

// @baa 0x00d925f0
QWORD* S_00d925f0::sub_00d925f0(INT Index)
{
    return &Items(Index);
}

struct C_00d92640 { int sub_00d92640(void); };

// @baa 0x00d92640
int C_00d92640::sub_00d92640(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d92650 { int sub_00d92650(void); };

// @baa 0x00d92650
int C_00d92650::sub_00d92650(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d92660 { int sub_00d92660(void); };

// @baa 0x00d92660
int C_00d92660::sub_00d92660(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d926a0 {
    int sub_00d926a0(int);
};

// @baa 0x00d926a0
int C_00d926a0::sub_00d926a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00d92750 {
    int sub_00d92750(int);
};

// @baa 0x00d92750
int C_00d92750::sub_00d92750(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_00d927c0 { int sub_00d927c0(void); };

// @baa 0x00d927c0
int C_00d927c0::sub_00d927c0(void) { return *(int*)((char*)this + 20); }

struct C_00d927d0 {
    int sub_00d927d0();
};

// @baa 0x00d927d0
int C_00d927d0::sub_00d927d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d927f0 {
    int sub_00d927f0();
};

// @baa 0x00d927f0
int C_00d927f0::sub_00d927f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d92810 {
    int sub_00d92810(int);
};

// @baa 0x00d92810
int C_00d92810::sub_00d92810(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00d92830 {
    int sub_00d92830(int);
};

// @baa 0x00d92830
int C_00d92830::sub_00d92830(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_00d92870 {
    int sub_00d92870(int);
};

// @baa 0x00d92870
int C_00d92870::sub_00d92870(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x58 + *param_1;
}

struct C_00d92880 {
    int sub_00d92880();
};

// @baa 0x00d92880
int C_00d92880::sub_00d92880(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d928a0 {
    int sub_00d928a0();
};

// @baa 0x00d928a0
int C_00d928a0::sub_00d928a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d928c0 {
    int sub_00d928c0();
};

// @baa 0x00d928c0
int C_00d928c0::sub_00d928c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d928e0 {
    void sub_00d928e0(int *);
};

// @baa 0x00d928e0
void C_00d928e0::sub_00d928e0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

struct C_00d928f0 {
    int sub_00d928f0(int);
};

// @baa 0x00d928f0
int C_00d928f0::sub_00d928f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x58 + *param_1;
}

struct C_00d92990 { int sub_00d92990(void); };

// @baa 0x00d92990
int C_00d92990::sub_00d92990(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d929a0 {
    int sub_00d929a0();
};

// @baa 0x00d929a0
int C_00d929a0::sub_00d929a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d92b50 {
    void * sub_00d92b50();
};

// @baa 0x00d92b50
void * C_00d92b50::sub_00d92b50(void)
{
    void * param_1 = (void *)this;

  sub_01a37612(param_1,0,0x30);
  return param_1;
}

struct S_00d92b70 {
    INT Unk00;
    INT Unk04;
    S_00d92b70 *sub_00d92b70();
};

// @baa 0x00d92b70
S_00d92b70 *S_00d92b70::sub_00d92b70()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_00d92bb0 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_00d92bb0& sub_00d92bb0(int Arg);
};

// @baa 0x00d92bb0
C_00d92bb0& C_00d92bb0::sub_00d92bb0(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

struct M_00d92c20 { void sub_0040fcc0(); };

struct C_00d92c20 { char pad[8]; M_00d92c20 m; void sub_00d92c20(); };

// @baa 0x00d92c20
void C_00d92c20::sub_00d92c20() { m.sub_0040fcc0(); }

struct M_00d92c40 { void sub_0040fcc0(); };

struct C_00d92c40 { char pad[12]; M_00d92c40 m; void sub_00d92c40(); };

// @baa 0x00d92c40
void C_00d92c40::sub_00d92c40() { m.sub_0040fcc0(); }

struct M_00d92c50 { void sub_0040fcc0(); };

struct C_00d92c50 { char pad[12]; M_00d92c50 m; void sub_00d92c50(); };

// @baa 0x00d92c50
void C_00d92c50::sub_00d92c50() { m.sub_0040fcc0(); }

// @baa 0x00d92cc0
int sub_00d92cc0(void) { return 0; }

// @baa 0x00d92cd0
int __stdcall sub_00d92cd0(int a0, int a1) { return 0; }

int sub_00d92c70(...);
// @baa 0x00d92cf0
uint sub_00d92cf0(undefined4 param_1, int param_2)
{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = sub_00d92c70(param_1,0x3c);
  }
  uVar1 = sub_00d92c70(param_1,2);
  if ((uVar2 != 0) && ((uVar1 == 0 || (uVar2 <= uVar1)))) {
    uVar1 = uVar2;
  }
  return uVar1;
}

struct C_00d92e10 {
    undefined4 * sub_00d92e10(byte);
    int sub_0040fcc0();
};

extern undefined4 g_020bfbd8;
// @baa 0x00d92e10
undefined4 * C_00d92e10::sub_00d92e10(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_020bfbd8);
  ((C_00d92e10 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00d92e60
// @baa 0x00d92f70
bool UUIDataStorePublisher::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_00d93030();
// @baa 0x00d93220
void sub_00d93220(void) { sub_00d93030(); }

// @baa 0x00d93250
void sub_00d93250(void) { sub_00d93030(); }

struct C_00d93280 {
    undefined4 sub_00d93280(int);
    int sub_00d93030(int);
};

// @baa 0x00d93280
undefined4 C_00d93280::sub_00d93280(int param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_00d93280 *)(this))->sub_00d93030(param_2);
  if ((iVar1 != 0) && ((*(int *)(param_1 + 0x54) == 0) == (*(int *)(param_2 + 0x54) == 0))) {
    return 1;
  }
  return 0;
}

struct C_00d94130 { C_00d94130* sub_00d94130(void); };

// @baa 0x00d94130
C_00d94130* C_00d94130::sub_00d94130(void) { return this; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00d94140 { void* Data; int Num; int Max; void sub_00d94140(); };

// @baa 0x00d94140
void C_00d94140::sub_00d94140() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d941a0 { void* Data; int Num; int Max; void sub_00d941a0(); };

// @baa 0x00d941a0
void C_00d941a0::sub_00d941a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d94240 { void* Data; int Num; int Max; void sub_00d94240(); };

// @baa 0x00d94240
void C_00d94240::sub_00d94240() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d942a0 { void* Data; int Num; int Max; void sub_00d942a0(); };

// @baa 0x00d942a0
void C_00d942a0::sub_00d942a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d94300 { void* Data; int Num; int Max; void sub_00d94300(); };

// @baa 0x00d94300
void C_00d94300::sub_00d94300() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00d94410
void __stdcall sub_00d94410(int a0, int a1) {  }

// @baa 0x00d94420
void __stdcall sub_00d94420(int a0, int a1) {  }

// @baa 0x00d94430
void __stdcall sub_00d94430(int a0, int a1) {  }

// @baa 0x00d94440
void __stdcall sub_00d94440(int a0, int a1) {  }

// @baa 0x00d94450
void __stdcall sub_00d94450(int a0, int a1) {  }

// @baa 0x00d94460
void __stdcall sub_00d94460(int a0, int a1) {  }

// @baa 0x00d94470
void __stdcall sub_00d94470(int a0, int a1) {  }

// @baa 0x00d94480
void __stdcall sub_00d94480(int a0, int a1) {  }

struct C_00d94490 {
    undefined4 sub_00d94490(byte);
};

int sub_00d93b00(void);
// @baa 0x00d94490
undefined4 C_00d94490::sub_00d94490(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d93b00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00d944b0 { void sub_00cc4a60(); };

struct C_00d944b0 { char pad[4]; M_00d944b0 m; void sub_00d944b0(); };

// @baa 0x00d944b0
void C_00d944b0::sub_00d944b0() { m.sub_00cc4a60(); }

struct M_00d944c0 { void sub_00d94140(); };

struct C_00d944c0 { char pad[12]; M_00d944c0 m; void sub_00d944c0(); };

// @baa 0x00d944c0
void C_00d944c0::sub_00d944c0() { m.sub_00d94140(); }

// @baa 0x00d945d0
int USkeletalMeshComponent::sub_00d945d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00d94660 {
    int sub_00d94660(int);
};

// @baa 0x00d94660
int C_00d94660::sub_00d94660(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_00d94670 {
    int sub_00d94670();
};

// @baa 0x00d94670
int C_00d94670::sub_00d94670(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d94690 {
    int sub_00d94690(int);
};

// @baa 0x00d94690
int C_00d94690::sub_00d94690(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00d946b0 {
    int sub_00d946b0(int);
};

// @baa 0x00d946b0
int C_00d946b0::sub_00d946b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_00d946c0 {
    int sub_00d946c0(int);
};

// @baa 0x00d946c0
int C_00d946c0::sub_00d946c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x58 + *param_1;
}

struct C_00d946d0 {
    int sub_00d946d0();
};

// @baa 0x00d946d0
int C_00d946d0::sub_00d946d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x58 + *(int *)*param_1;
}

struct C_00d946e0 {
    int sub_00d946e0();
};

// @baa 0x00d946e0
int C_00d946e0::sub_00d946e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00d94700 {
    int sub_00d94700();
};

// @baa 0x00d94700
int C_00d94700::sub_00d94700(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x4c + *(int *)*param_1;
}

struct C_00d94780 {
    int sub_00d94780();
};

// @baa 0x00d94780
int C_00d94780::sub_00d94780(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00d947a0 {
    int sub_00d947a0();
};

// @baa 0x00d947a0
int C_00d947a0::sub_00d947a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x4c + *(int *)*param_1;
}

struct C_00d947b0 {
    int sub_00d947b0(int);
};

// @baa 0x00d947b0
int C_00d947b0::sub_00d947b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x58 + *param_1;
}

struct C_00d947c0 { int a, b, c; C_00d947c0(); };

// @baa 0x00d947c0
C_00d947c0::C_00d947c0() : a(0), b(0), c(0) {}

struct C_00d947d0 {
    int sub_00d947d0();
};

// @baa 0x00d947d0
int C_00d947d0::sub_00d947d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00d94900 {
    undefined4 * sub_00d94900(undefined4 *);
    int sub_00547da0(int);
};

// @baa 0x00d94900
undefined4 * C_00d94900::sub_00d94900(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  ((C_00d94900 *)(((char *)this + 0xc)))->sub_00547da0((int)(param_2 + 3));
  return param_1;
}

// @baa 0x00d94cf0
// @baa 0x00d94d60
int UUIDataProvider::vf_12c(int a0, int a1) { return 0; }

// @baa 0x00d94d70
void* UUIDataProvider::vf_130() { return this; }

// @baa 0x00d94e70
// @baa 0x00d94e90
IMPLEMENT_CLASS_AT(UUIConfigProvider, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 17);

// @baa 0x00d94ef0
void sub_00d941a0();
// @baa 0x00d94f10
void sub_00d94f10(void) { sub_00d941a0(); }

// @baa 0x00d94f20
IMPLEMENT_CLASS_AT(UUIDataProvider_OnlinePlayerDataBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 10414);

struct UObjectThunk_00d94fc0 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_00d94fc0();
};

// @baa 0x00d94fc0
void UObjectThunk_00d94fc0::sub_00d94fc0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c4a44, g_026c4a48, 0), 0, 0);
}

// @baa 0x00d94ff0
void sub_00d94240();
// @baa 0x00d95010
void sub_00d95010(void) { sub_00d94240(); }

// @baa 0x00d95020
IMPLEMENT_CLASS_AT(UUIDataStore, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 20);

// @baa 0x00d95090
void UUIDataStore::LoadDependentClasses(void) {  }

// @baa 0x00d950c0
// @baa 0x00d950e0
IMPLEMENT_CLASS_AT(UUIDataStore_GameState, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 60);

// @baa 0x00d95140
// @baa 0x00d95160
IMPLEMENT_CLASS_AT(UUIDataStore_Remote, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 65);

// @baa 0x00d951c0
// @baa 0x00d951e0
IMPLEMENT_CLASS_AT(UUIDataStore_Settings, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 58);

// @baa 0x00d95240
void sub_00d942a0();
// @baa 0x00d95260
void sub_00d95260(void) { sub_00d942a0(); }

// @baa 0x00d95270
IMPLEMENT_CLASS_AT(UUIDataStore_StringBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 66);

// @baa 0x00d952d0
void sub_00d94300();
// @baa 0x00d952f0
void sub_00d952f0(void) { sub_00d94300(); }

// @baa 0x00d95300
IMPLEMENT_CLASS_AT(UUIPropertyDataProvider, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 68);

// @baa 0x00d95360
// @baa 0x00d95380
IMPLEMENT_CLASS_AT(UUIDynamicDataProvider, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 69);

// @baa 0x00d953e0
// @baa 0x00d95400
IMPLEMENT_CLASS_AT(UPlayerDataProvider, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 71);

// @baa 0x00d95460
// @baa 0x00d95480
IMPLEMENT_CLASS_AT(UUISettingsProvider, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 73);

// @baa 0x00d954e0
// @baa 0x00d95530
int sub_00d95530(void) { return 1; }

struct C_00d95820 {
    undefined4 sub_00d95820(byte);
};

int sub_00d957b0(void);
// @baa 0x00d95820
undefined4 C_00d95820::sub_00d95820(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d957b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d95ed0 { void sub_00d947f0(int); C_00d95ed0 *sub_00d95ed0(int); };

// @baa 0x00d95ed0
C_00d95ed0 *C_00d95ed0::sub_00d95ed0(int a) { sub_00d947f0(a); return this; }

struct C_00d95ef0 { C_00d95ef0* sub_00d95ef0(void); };

// @baa 0x00d95ef0
C_00d95ef0* C_00d95ef0::sub_00d95ef0(void) { return this; }

struct C_00d95fa0 {
    undefined4 sub_00d95fa0();
};

// @baa 0x00d95fa0
undefined4 C_00d95fa0::sub_00d95fa0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00d95fb0 { void* Data; int Num; int Max; void sub_00d95fb0(); };

// @baa 0x00d95fb0
void C_00d95fb0::sub_00d95fb0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d96010 { void* Data; int Num; int Max; void sub_00d96010(); };

// @baa 0x00d96010
void C_00d96010::sub_00d96010() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d96070 { void* Data; int Num; int Max; void sub_00d96070(); };

// @baa 0x00d96070
void C_00d96070::sub_00d96070() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d960d0 { void* Data; int Num; int Max; void sub_00d960d0(); };

// @baa 0x00d960d0
void C_00d960d0::sub_00d960d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d96130 {
    undefined4 sub_00d96130();
};

// @baa 0x00d96130
undefined4 C_00d96130::sub_00d96130(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00d96140 { C_00d96140* sub_00d96140(void); };

// @baa 0x00d96140
C_00d96140* C_00d96140::sub_00d96140(void) { return this; }

struct C_00d96150 { C_00d96150* sub_00d96150(void); };

// @baa 0x00d96150
C_00d96150* C_00d96150::sub_00d96150(void) { return this; }

struct C_00d96160 { void* Data; int Num; int Max; void sub_00d96160(); };

// @baa 0x00d96160
void C_00d96160::sub_00d96160() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d962e0 { int a, b, c; C_00d962e0(); };

// @baa 0x00d962e0
C_00d962e0::C_00d962e0() : a(0), b(0), c(0) {}

struct C_00d96450 {
    int sub_00d96450(int);
};

// @baa 0x00d96450
int C_00d96450::sub_00d96450(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00d96470 {
    int sub_00d96470(int);
};

// @baa 0x00d96470
int C_00d96470::sub_00d96470(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_00d96480 {
    int sub_00d96480();
};

// @baa 0x00d96480
int C_00d96480::sub_00d96480(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d964a0 {
    undefined4 sub_00d964a0(byte);
    int sub_00cc4a60();
};

// @baa 0x00d964a0
undefined4 C_00d964a0::sub_00d964a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00d964a0 *)(((char *)this + 4)))->sub_00cc4a60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d964d0 {
    undefined4 sub_00d964d0(byte);
    int sub_00d94140();
};

// @baa 0x00d964d0
undefined4 C_00d964d0::sub_00d964d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00d964d0 *)(((char *)this + 0xc)))->sub_00d94140();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d96500 {
    undefined4 sub_00d96500(byte);
};

int sub_00d944d0(void);
// @baa 0x00d96500
undefined4 C_00d96500::sub_00d96500(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d944d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00d965e0
int USkeletalMeshComponent::sub_00d965e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00d96680 {
    int sub_00d96680(int);
};

// @baa 0x00d96680
int C_00d96680::sub_00d96680(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_00d96690 {
    int sub_00d96690();
};

// @baa 0x00d96690
int C_00d96690::sub_00d96690(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x58 + *(int *)*param_1;
}

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_00d966a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d966a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d966a0& operator++();
};

TConstSetBitIterator_00d966a0::TConstSetBitIterator_00d966a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d966a0
TConstSetBitIterator_00d966a0& TConstSetBitIterator_00d966a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d966c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d966c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d966c0& operator++();
};

TConstSetBitIterator_00d966c0::TConstSetBitIterator_00d966c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d966c0
TConstSetBitIterator_00d966c0& TConstSetBitIterator_00d966c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d966e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d966e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d966e0& operator++();
};

TConstSetBitIterator_00d966e0::TConstSetBitIterator_00d966e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d966e0
TConstSetBitIterator_00d966e0& TConstSetBitIterator_00d966e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d96730 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d96730(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d96730& operator++();
};

TConstSetBitIterator_00d96730::TConstSetBitIterator_00d96730(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d96730
TConstSetBitIterator_00d96730& TConstSetBitIterator_00d96730::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d96780 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d96780(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d96780& operator++();
};

TConstSetBitIterator_00d96780::TConstSetBitIterator_00d96780(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d96780
TConstSetBitIterator_00d96780& TConstSetBitIterator_00d96780::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d967d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d967d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d967d0& operator++();
};

TConstSetBitIterator_00d967d0::TConstSetBitIterator_00d967d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d967d0
TConstSetBitIterator_00d967d0& TConstSetBitIterator_00d967d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d967f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d967f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d967f0& operator++();
};

TConstSetBitIterator_00d967f0::TConstSetBitIterator_00d967f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d967f0
TConstSetBitIterator_00d967f0& TConstSetBitIterator_00d967f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d96810 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d96810(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d96810& operator++();
};

TConstSetBitIterator_00d96810::TConstSetBitIterator_00d96810(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d96810
TConstSetBitIterator_00d96810& TConstSetBitIterator_00d96810::operator++()
{
    It.Advance();
    return *this;
}

struct C_00d96830 {
    int sub_00d96830();
};

// @baa 0x00d96830
int C_00d96830::sub_00d96830(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x58 + *(int *)*param_1;
}

struct TConstSetBitIterator_00d96840 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d96840(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d96840& operator++();
};

TConstSetBitIterator_00d96840::TConstSetBitIterator_00d96840(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d96840
TConstSetBitIterator_00d96840& TConstSetBitIterator_00d96840::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d96890 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d96890(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d96890& operator++();
};

TConstSetBitIterator_00d96890::TConstSetBitIterator_00d96890(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d96890
TConstSetBitIterator_00d96890& TConstSetBitIterator_00d96890::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d968e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d968e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d968e0& operator++();
};

TConstSetBitIterator_00d968e0::TConstSetBitIterator_00d968e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d968e0
TConstSetBitIterator_00d968e0& TConstSetBitIterator_00d968e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d96950 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d96950(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d96950& operator++();
};

TConstSetBitIterator_00d96950::TConstSetBitIterator_00d96950(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d96950
TConstSetBitIterator_00d96950& TConstSetBitIterator_00d96950::operator++()
{
    It.Advance();
    return *this;
}

struct C_00d96970 {
    int sub_00d96970();
};

// @baa 0x00d96970
int C_00d96970::sub_00d96970(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00d96990 {
    undefined4 * sub_00d96990(undefined4 *);
    int sub_00d95e70(int);
};

// @baa 0x00d96990
undefined4 * C_00d96990::sub_00d96990(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  ((C_00d96990 *)(((char *)this + 0xc)))->sub_00d95e70((int)(param_2 + 3));
  return param_1;
}

extern undefined * g_020bfbe8;
// @baa 0x00d96a60
undefined4 * UObject::sub_00d96a60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020bfbe8);
  return param_1;
}

extern undefined * g_020bfd28;
// @baa 0x00d96a80
undefined4 * UObject::sub_00d96a80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020bfd28);
  return param_1;
}

// @baa 0x00d96ac0
IMPLEMENT_CLASS_AT(UUIConfigFileProvider, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 18);

// @baa 0x00d96b40
extern undefined * g_020c0cb8;
// @baa 0x00d96b60
undefined4 * UObject::sub_00d96b60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c0cb8);
  return param_1;
}

// @baa 0x00d96b80
IMPLEMENT_CLASS_AT(UUIConfigSectionProvider, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 19);

// @baa 0x00d96bf0
extern undefined * g_020bfe68;
// @baa 0x00d96c10
undefined4 * UObject::sub_00d96c10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020bfe68);
  return param_1;
}

extern undefined * g_020c0df8;
// @baa 0x00d96c30
undefined4 * UObject::sub_00d96c30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c0df8);
  return param_1;
}

// @baa 0x00d96c50
IMPLEMENT_CLASS_AT(UUIDataProvider_OnlineClanMates, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 12074);

// @baa 0x00d96cb0
extern undefined * g_020c0f40;
// @baa 0x00d96cd0
undefined4 * UObject::sub_00d96cd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c0f40);
  return param_1;
}

// @baa 0x00d96cf0
IMPLEMENT_CLASS_AT(UUIDataProvider_OnlineFriendMessages, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 10542);

// @baa 0x00d96d50
extern undefined * g_020c1088;
// @baa 0x00d96d70
undefined4 * UObject::sub_00d96d70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c1088);
  return param_1;
}

// @baa 0x00d96d90
IMPLEMENT_CLASS_AT(UUIDataProvider_OnlinePlayers, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 12066);

// @baa 0x00d96df0
extern undefined * g_020c11d0;
// @baa 0x00d96e10
undefined4 * UObject::sub_00d96e10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c11d0);
  return param_1;
}

// @baa 0x00d96e30
IMPLEMENT_CLASS_AT(UUIDataProvider_OnlineProfileSettings, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 11473);

// @baa 0x00d96ea0
extern undefined * g_020c1320;
// @baa 0x00d96ec0
undefined4 * UObject::sub_00d96ec0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c1320);
  return param_1;
}

// @baa 0x00d96ee0
IMPLEMENT_CLASS_AT(UUIDataProvider_OnlineProfileSettingsArray, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 11725);

// @baa 0x00d96f60
extern undefined * g_020bffb0;
// @baa 0x00d96f80
undefined4 * UObject::sub_00d96f80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020bffb0);
  return param_1;
}

extern undefined * g_020c1460;
// @baa 0x00d96fa0
undefined4 * UObject::sub_00d96fa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c1460);
  return param_1;
}

// @baa 0x00d96fc0
IMPLEMENT_CLASS_AT(USceneDataStore, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 64);

// @baa 0x00d97020
extern undefined * g_020c0108;
// @baa 0x00d97040
undefined4 * UObject::sub_00d97040(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c0108);
  return param_1;
}

void sub_00d95fb0();
// @baa 0x00d97060
void sub_00d97060(void) { sub_00d95fb0(); }

void sub_00d96010();
// @baa 0x00d97070
void sub_00d97070(void) { sub_00d96010(); }

void sub_00d96070();
// @baa 0x00d97080
void sub_00d97080(void) { sub_00d96070(); }

void sub_00d960d0();
// @baa 0x00d97090
void sub_00d97090(void) { sub_00d960d0(); }

extern undefined * g_020c0260;
// @baa 0x00d970a0
undefined4 * UObject::sub_00d970a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c0260);
  return param_1;
}

extern undefined * g_020c15b8;
// @baa 0x00d970c0
undefined4 * UObject::sub_00d970c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c15b8);
  return param_1;
}

// @baa 0x00d970e0
IMPLEMENT_CLASS_AT(UUIDataStore_OnlinePlayerData, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 10922);

// @baa 0x00d971b0
extern undefined * g_020c03b8;
// @baa 0x00d971e0
undefined4 * UObject::sub_00d971e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c03b8);
  return param_1;
}

extern undefined * g_020c0510;
// @baa 0x00d97200
undefined4 * UObject::sub_00d97200(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c0510);
  return param_1;
}

extern undefined * g_020c1710;
// @baa 0x00d97220
undefined4 * UObject::sub_00d97220(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c1710);
  return param_1;
}

// @baa 0x00d97280
IMPLEMENT_CLASS_AT(UUIDataStore_Strings, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 63);

// @baa 0x00d972f0
extern undefined * g_020c1868;
// @baa 0x00d97310
undefined4 * UObject::sub_00d97310(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c1868);
  return param_1;
}

// @baa 0x00d97330
IMPLEMENT_CLASS_AT(UUIDynamicFieldProvider, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 75);

// @baa 0x00d97390
extern undefined * g_020c0668;
// @baa 0x00d973b0
undefined4 * UObject::sub_00d973b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c0668);
  return param_1;
}

extern undefined * g_020c07a8;
// @baa 0x00d973d0
undefined4 * UObject::sub_00d973d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c07a8);
  return param_1;
}

extern undefined * g_020c19a8;
// @baa 0x00d973f0
undefined4 * UObject::sub_00d973f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c19a8);
  return param_1;
}

// @baa 0x00d97410
IMPLEMENT_CLASS_AT(UGameInfoDataProvider, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 70);

// @baa 0x00d97470
extern undefined * g_020c08e8;
// @baa 0x00d97490
undefined4 * UObject::sub_00d97490(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c08e8);
  return param_1;
}

extern undefined * g_020c1ae8;
// @baa 0x00d974b0
undefined4 * UObject::sub_00d974b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c1ae8);
  return param_1;
}

// @baa 0x00d974d0
IMPLEMENT_CLASS_AT(UPlayerOwnerDataProvider, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 72);

// @baa 0x00d97530
extern undefined * g_020c0a28;
// @baa 0x00d97550
undefined4 * UObject::sub_00d97550(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c0a28);
  return param_1;
}

extern undefined * g_020c1c28;
// @baa 0x00d97570
undefined4 * UObject::sub_00d97570(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c1c28);
  return param_1;
}

// @baa 0x00d97590
IMPLEMENT_CLASS_AT(USessionSettingsProvider, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 74);

// @baa 0x00d975f0
void sub_00d96160();
// @baa 0x00d97620
void sub_00d97620(void) { sub_00d96160(); }

void sub_00d961c0();
// @baa 0x00d97630
void sub_00d97630(void) { sub_00d961c0(); }

void sub_00d96220();
// @baa 0x00d97640
void sub_00d97640(void) { sub_00d96220(); }

void sub_00d96280();
// @baa 0x00d97650
void sub_00d97650(void) { sub_00d96280(); }

struct C_00d97cc0 {
    undefined4 sub_00d97cc0();
};

// @baa 0x00d97cc0
undefined4 C_00d97cc0::sub_00d97cc0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00d97cd0 { C_00d97cd0* sub_00d97cd0(void); };

// @baa 0x00d97cd0
C_00d97cd0* C_00d97cd0::sub_00d97cd0(void) { return this; }

struct C_00d97ce0 { C_00d97ce0* sub_00d97ce0(void); };

// @baa 0x00d97ce0
C_00d97ce0* C_00d97ce0::sub_00d97ce0(void) { return this; }

struct C_00d97cf0 { C_00d97cf0* sub_00d97cf0(void); };

// @baa 0x00d97cf0
C_00d97cf0* C_00d97cf0::sub_00d97cf0(void) { return this; }

struct C_00d97d00 { C_00d97d00* sub_00d97d00(void); };

// @baa 0x00d97d00
C_00d97d00* C_00d97d00::sub_00d97d00(void) { return this; }

struct C_00d97d10 { C_00d97d10* sub_00d97d10(void); };

// @baa 0x00d97d10
C_00d97d10* C_00d97d10::sub_00d97d10(void) { return this; }

struct C_00d97d20 { C_00d97d20* sub_00d97d20(void); };

// @baa 0x00d97d20
C_00d97d20* C_00d97d20::sub_00d97d20(void) { return this; }

struct C_00d97d30 { C_00d97d30* sub_00d97d30(void); };

// @baa 0x00d97d30
C_00d97d30* C_00d97d30::sub_00d97d30(void) { return this; }

struct C_00d97da0 {
    int sub_00d97da0();
};

// @baa 0x00d97da0
int C_00d97da0::sub_00d97da0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d97f50 {
    int sub_00d97f50();
};

// @baa 0x00d97f50
int C_00d97f50::sub_00d97f50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x58 + *(int *)*param_1;
}

struct M_00d98010 { void sub_00553720(); };

struct C_00d98010 { char pad[8]; M_00d98010 m; void sub_00d98010(); };

// @baa 0x00d98010
void C_00d98010::sub_00d98010() { m.sub_00553720(); }

struct TConstSetBitIterator_00d98200 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d98200(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d98200& operator++();
};

TConstSetBitIterator_00d98200::TConstSetBitIterator_00d98200(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d98200
TConstSetBitIterator_00d98200& TConstSetBitIterator_00d98200::operator++()
{
    It.Advance();
    return *this;
}

struct M_00d98220 { void sub_00553720(); };

struct C_00d98220 { char pad[8]; M_00d98220 m; void sub_00d98220(); };

// @baa 0x00d98220
void C_00d98220::sub_00d98220() { m.sub_00553720(); }

struct TConstSetBitIterator_00d98310 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d98310(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d98310& operator++();
};

TConstSetBitIterator_00d98310::TConstSetBitIterator_00d98310(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d98310
TConstSetBitIterator_00d98310& TConstSetBitIterator_00d98310::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d98360 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d98360(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d98360& operator++();
};

TConstSetBitIterator_00d98360::TConstSetBitIterator_00d98360(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d98360
TConstSetBitIterator_00d98360& TConstSetBitIterator_00d98360::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d983b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d983b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d983b0& operator++();
};

TConstSetBitIterator_00d983b0::TConstSetBitIterator_00d983b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d983b0
TConstSetBitIterator_00d983b0& TConstSetBitIterator_00d983b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d98520 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d98520(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d98520& operator++();
};

TConstSetBitIterator_00d98520::TConstSetBitIterator_00d98520(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d98520
TConstSetBitIterator_00d98520& TConstSetBitIterator_00d98520::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d98570 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d98570(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d98570& operator++();
};

TConstSetBitIterator_00d98570::TConstSetBitIterator_00d98570(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d98570
TConstSetBitIterator_00d98570& TConstSetBitIterator_00d98570::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d985c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d985c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d985c0& operator++();
};

TConstSetBitIterator_00d985c0::TConstSetBitIterator_00d985c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d985c0
TConstSetBitIterator_00d985c0& TConstSetBitIterator_00d985c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d98620 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d98620(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d98620& operator++();
};

TConstSetBitIterator_00d98620::TConstSetBitIterator_00d98620(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d98620
TConstSetBitIterator_00d98620& TConstSetBitIterator_00d98620::operator++()
{
    It.Advance();
    return *this;
}

struct C_00d98670 {
    undefined4 sub_00d98670(byte);
    int sub_00553720();
};

// @baa 0x00d98670
undefined4 C_00d98670::sub_00d98670(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00d98670 *)(((char *)this + 8)))->sub_00553720();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00d98830
// @baa 0x00d988e0
// @baa 0x00d98900
// @baa 0x00d98930
// @baa 0x00d98950
// @baa 0x00d98970
// @baa 0x00d98990
void sub_00d97bf0();
// @baa 0x00d989b0
void sub_00d989b0(void) { sub_00d97bf0(); }

// @baa 0x00d989c0
// @baa 0x00d989e0
// @baa 0x00d98a00
// @baa 0x00d98a20
// @baa 0x00d98a40
// @baa 0x00d98a60
extern undefined * g_020c1d68;
// @baa 0x00d98a80
undefined4 * UObject::sub_00d98a80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c1d68);
  return param_1;
}

// @baa 0x00d98aa0
IMPLEMENT_CLASS_AT(UCurrentGameDataStore, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 61);

// @baa 0x00d98b20
extern undefined * g_020c1ec0;
// @baa 0x00d98b50
undefined4 * UObject::sub_00d98b50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c1ec0);
  return param_1;
}

// @baa 0x00d98b70
IMPLEMENT_CLASS_AT(UPlayerOwnerDataStore, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 62);

// @baa 0x00d98bf0
// @baa 0x00d98c20
// @baa 0x00d98c40
// @baa 0x00d98c60
extern undefined * g_020c2018;
// @baa 0x00d98c80
undefined4 * UObject::sub_00d98c80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c2018);
  return param_1;
}

// @baa 0x00d98ca0
IMPLEMENT_CLASS_AT(UUIDataStore_SessionSettings, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 59);

// @baa 0x00d98d30
// @baa 0x00d98d60
// @baa 0x00d98d80
// @baa 0x00d98da0
// @baa 0x00d98dc0
// @baa 0x00d98de0
// @baa 0x00d98e00
// @baa 0x00d98e20
// @baa 0x00d98e40
// @baa 0x00d98e60
// @baa 0x00d98e80
// @baa 0x00d996c0
// @baa 0x00d99780
// @baa 0x00d99840
// @baa 0x00d99900
// @baa 0x00d999c0
// @baa 0x00d99a80
// @baa 0x00d99b40
// @baa 0x00d99c00
// @baa 0x00d99cc0
// @baa 0x00d99d80
// @baa 0x00d99e40
// @baa 0x00d99f00
// @baa 0x00d99fc0
// @baa 0x00d9a080
// @baa 0x00d9a140
// @baa 0x00d9a200
// @baa 0x00d9a2c0
// @baa 0x00d9a380
// @baa 0x00d9a440
struct M_00d9a510 { void sub_00d97d40(); };

struct C_00d9a510 { char pad[4]; M_00d9a510 m; void sub_00d9a510(); };

// @baa 0x00d9a510
void C_00d9a510::sub_00d9a510() { m.sub_00d97d40(); }

// @baa 0x00d9a520
// @baa 0x00d9a5e0
// @baa 0x00d9a6a0
// @baa 0x00d9a760
// @baa 0x00d9a820
// @baa 0x00d9a8e0
// @baa 0x00d9a9a0
struct C_00d9adc0 { C_00d9adc0* sub_00d9adc0(void); };

// @baa 0x00d9adc0
C_00d9adc0* C_00d9adc0::sub_00d9adc0(void) { return this; }

struct C_00d9af70 {
    int sub_00d9af70();
};

// @baa 0x00d9af70
int C_00d9af70::sub_00d9af70(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return param_1[5] * 0x58 + *(int *)*param_1;
}

struct C_00d9af80 {
    int sub_00d9af80();
};

// @baa 0x00d9af80
int C_00d9af80::sub_00d9af80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x58 + 8 + *(int *)*param_1;
}

struct TConstSetBitIterator_00d9af90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d9af90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d9af90& operator++();
};

TConstSetBitIterator_00d9af90::TConstSetBitIterator_00d9af90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d9af90
TConstSetBitIterator_00d9af90& TConstSetBitIterator_00d9af90::operator++()
{
    It.Advance();
    return *this;
}

struct C_00d9afb0 {
    undefined4 sub_00d9afb0(byte);
    int sub_00553720();
};

// @baa 0x00d9afb0
undefined4 C_00d9afb0::sub_00d9afb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00d9afb0 *)(((char *)this + 8)))->sub_00553720();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00d9b510 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d9b510(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d9b510& operator++();
};

TConstSetBitIterator_00d9b510::TConstSetBitIterator_00d9b510(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d9b510
TConstSetBitIterator_00d9b510& TConstSetBitIterator_00d9b510::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d9b6a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d9b6a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d9b6a0& operator++();
};

TConstSetBitIterator_00d9b6a0::TConstSetBitIterator_00d9b6a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d9b6a0
TConstSetBitIterator_00d9b6a0& TConstSetBitIterator_00d9b6a0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00d9b820 {
    undefined4 * sub_00d9b820(undefined4 *);
    int sub_0060d780(int);
};

// @baa 0x00d9b820
undefined4 * C_00d9b820::sub_00d9b820(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C_00d9b820 *)(((char *)this + 8)))->sub_0060d780((int)(param_2 + 2));
  return param_1;
}

void sub_00d986a0();
// @baa 0x00d9b850
void sub_00d9b850(void) { sub_00d986a0(); }

void sub_00d9aa60();
// @baa 0x00d9b860
void sub_00d9b860(void) { sub_00d9aa60(); }

struct C_00d9b870 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_00d9b870& sub_00d9b870(int Arg);
};

// @baa 0x00d9b870
C_00d9b870& C_00d9b870::sub_00d9b870(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

struct C_00d9baa0 {
    int sub_00d9baa0();
};

// @baa 0x00d9baa0
int C_00d9baa0::sub_00d9baa0(void)
{
    int param_1 = (int)this;

  return param_1 + -0x50;
}

struct A_00d9bac0 { virtual void sub_00d9bcb0(); char pad[76]; };

struct B_00d9bac0 { virtual void sub_00d9bcb0(); };

struct C_00d9bac0 : A_00d9bac0, B_00d9bac0 { virtual void sub_00d9bcb0(); C_00d9bac0(); };

C_00d9bac0::C_00d9bac0() {}

// @baa 0x00d9bac0
void C_00d9bac0::sub_00d9bcb0() {}

// @baa 0x00d9bb60
IMPLEMENT_CLASS_AT(UUIDataProvider_OnlineFriends, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 10415);

// @baa 0x00d9bcb0
void sub_00d9add0();
// @baa 0x00d9bce0
void sub_00d9bce0(void) { sub_00d9add0(); }

// @baa 0x00d9bcf0
// @baa 0x00d9bd10
// @baa 0x00d9bd30
// @baa 0x00d9c0e0
// @baa 0x00d9c1f0
bool UUIConfigProvider::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d9c230
// @baa 0x00d9c340
bool UUIDataStore::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d9c380
// @baa 0x00d9c440
// @baa 0x00d9c500
// @baa 0x00d9c5c0
// @baa 0x00d9c6d0
bool UUIPropertyDataProvider::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d9c710
// @baa 0x00d9c820
bool UUIDynamicFieldProvider::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d9db00
// @baa 0x00d9dc10
bool UUIDataProvider_OnlinePlayerDataBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d9dd00
// @baa 0x00d9de10
bool UUIDataProvider_OnlineProfileSettingsArray::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00d9de50 { C_00d9de50* sub_00d9de50(void); };

// @baa 0x00d9de50
C_00d9de50* C_00d9de50::sub_00d9de50(void) { return this; }

struct C_00d9de60 { void sub_00d9b710(int); C_00d9de60 *sub_00d9de60(int); };

// @baa 0x00d9de60
C_00d9de60 *C_00d9de60::sub_00d9de60(int a) { sub_00d9b710(a); return this; }

struct C_00d9de80 { C_00d9de80* sub_00d9de80(void); };

// @baa 0x00d9de80
C_00d9de80* C_00d9de80::sub_00d9de80(void) { return this; }

struct C_00d9de90 { C_00d9de90* sub_00d9de90(void); };

// @baa 0x00d9de90
C_00d9de90* C_00d9de90::sub_00d9de90(void) { return this; }

struct TConstSetBitIterator_00d9dea0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d9dea0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d9dea0& operator++();
};

TConstSetBitIterator_00d9dea0::TConstSetBitIterator_00d9dea0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d9dea0
TConstSetBitIterator_00d9dea0& TConstSetBitIterator_00d9dea0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view {
    int sub_0060d780(int);
};

// @baa 0x00d9e010
undefined4 * USkeletalMeshComponent::sub_00d9e010(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  ((C_view *)(((char *)this + 8)))->sub_0060d780(param_2[1]);
  return param_1;
}

// @baa 0x00d9e100
undefined4 * USkeletalMeshComponent::sub_00d9e100(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  ((C_view *)(((char *)this + 8)))->sub_0060d780(param_2[1]);
  param_1[5] = 0xffffffff;
  return param_1;
}

extern undefined * g_020c3400;
// @baa 0x00d9e6d0
undefined4 * UObject::sub_00d9e6d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c3400);
  return param_1;
}

// @baa 0x00d9e6f0
// @baa 0x00d9e790
// @baa 0x00d9e860
extern undefined * g_020c3510;
// @baa 0x00d9e890
undefined4 * UObject::sub_00d9e890(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020c3510);
  return param_1;
}

// @baa 0x00d9e8b0
IMPLEMENT_CLASS_AT(UUIDataProvider_PlayerAchievements, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 10625);

// @baa 0x00d9e920
// @baa 0x00d9e940
IMPLEMENT_CLASS_AT(UUICalloutButtonPanel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIContainers.cpp", 29);

// @baa 0x00d9ea50
bool UUICalloutButtonPanel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d9ea90
IMPLEMENT_CLASS_AT(UUITabPage, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIContainers.cpp", 36);

// @baa 0x00d9eba0
bool UUITabPage::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d9ebe0
// @baa 0x00d9ecf0
bool UUIConfigFileProvider::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d9ed30
bool UUIConfigSectionProvider::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d9ed70
// @baa 0x00d9ee80
bool UUIDataStore_Settings::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d9eec0
// @baa 0x00d9efd0
bool UUIDataStore_GameState::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d9f010
// @baa 0x00d9f120
bool USceneDataStore::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d9f160
// @baa 0x00d9f270
bool UUIDataStore_Remote::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d9f2b0
// @baa 0x00d9f3c0
bool UUIDataStore_StringBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d9f400
// @baa 0x00d9f510
bool UUIDynamicDataProvider::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d9f550
// @baa 0x00d9f660
bool UUISettingsProvider::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d9ff50
// @baa 0x00da0010
// @baa 0x00da0120
bool UUIDataProvider_OnlineFriends::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da0160
// @baa 0x00da0270
bool UUIDataProvider_OnlineFriendMessages::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da02b0
// @baa 0x00da03c0
bool UUIDataProvider_PlayerAchievements::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da0400
// @baa 0x00da0510
bool UUIDataProvider_OnlineProfileSettings::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da0550
// @baa 0x00da0660
bool UUIDataProvider_OnlinePlayers::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da06a0
// @baa 0x00da07b0
bool UUIDataProvider_OnlineClanMates::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_view_00da09a0 {
    int sub_00d9e1f0(int, int);
};

// @baa 0x00da09a0
void USkeletalMeshComponent::sub_00da09a0(void)
{
    int param_1 = (int)this;
  ((C_view_00da09a0 *)(this))->sub_00d9e1f0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00da09b0 {
    int sub_00d9e2b0(int, int);
};

// @baa 0x00da09b0
undefined4 USkeletalMeshComponent::sub_00da09b0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00da09b0 *)(this))->sub_00d9e2b0(param_2, param_3);
  return param_1;
}

struct C_view_00da09d0 {
    int sub_00d9e310(int, int);
};

// @baa 0x00da09d0
int USkeletalMeshComponent::sub_00da09d0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00da09d0 *)(this))->sub_00d9e310(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00da09f0 {
    int sub_00d9e390(int, int);
};

// @baa 0x00da09f0
int USkeletalMeshComponent::sub_00da09f0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00da09f0 *)(this))->sub_00d9e390(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00da0a10 {
    int sub_00d9dec0(int);
};

// @baa 0x00da0a10
void USkeletalMeshComponent::sub_00da0a10(void)
{
    int param_1 = (int)this;
  ((C_view_00da0a10 *)((*(char **)((char *)this + 0x10))))->sub_00d9dec0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_00d98400(void);
// @baa 0x00da0a30
int USkeletalMeshComponent::sub_00da0a30(void)
{
    int param_1 = (int)this;

  sub_00d98400();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00d999c0(...);
int sub_00d9c230(void);
extern undefined4 g_026c5bd4;
// @baa 0x00da0c80
void sub_00da0c80(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c5bd4 == 0) {
    g_026c5bd4 = sub_00d999c0(L"Engine");
    sub_00d9c230();
  }
  sub_005eb8e0(g_026c5bd4,param_1,param_2,param_3,param_4,param_5);
  return;
}

// @baa 0x00da0e70
// @baa 0x00da0e90
// @baa 0x00da0eb0
// @baa 0x00da0f70
// @baa 0x00da1080
// @baa 0x00da1190
bool UUIDataStore_SessionSettings::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da11d0
// @baa 0x00da12e0
bool UCurrentGameDataStore::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da1320
// @baa 0x00da1430
bool UPlayerOwnerDataStore::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da1470
// @baa 0x00da1580
bool UUIDataStore_Strings::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da15c0
IMPLEMENT_CLASS_AT(UUIDataStore_InputAlias, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 67);

// @baa 0x00da16d0
bool UUIDataStore_InputAlias::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da1710
// @baa 0x00da1820
bool UGameInfoDataProvider::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da1860
// @baa 0x00da1970
bool UPlayerDataProvider::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da19b0
bool USessionSettingsProvider::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da1a70
// @baa 0x00da1b30
// @baa 0x00da1c40
bool UUIDataStore_OnlinePlayerData::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_view_00da2180 {
    int sub_00d9e2b0(int, int);
};

// @baa 0x00da2180
int USkeletalMeshComponent::sub_00da2180(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00da2180 *)(this))->sub_00d9e2b0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_00d9e1f0(int, int);
};

struct C_00da21b0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00da21b0(void);
};

// @baa 0x00da21b0
void C_00da21b0::sub_00da21b0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00d9e1f0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x00da21d0
int USkeletalMeshComponent::sub_00da21d0(void)
{
    int param_1 = (int)this;

  sub_00d98400();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00da0a50();
// @baa 0x00da21f0
void sub_00da21f0(void) { sub_00da0a50(); }

int sub_00d9ff50(...);
int sub_00da0010(void);
extern undefined4 g_026c5c2c;
// @baa 0x00da2370
void sub_00da2370(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c5c2c == 0) {
    g_026c5c2c = sub_00d9ff50(L"Engine");
    sub_00da0010();
  }
  sub_005eb8e0(g_026c5c2c,param_1,param_2,param_3,param_4,param_5);
  return;
}

int sub_00d9a5e0(...);
int sub_00da0160(void);
extern undefined4 g_026c5c30;
// @baa 0x00da23c0
void sub_00da23c0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c5c30 == 0) {
    g_026c5c30 = sub_00d9a5e0(L"Engine");
    sub_00da0160();
  }
  sub_005eb8e0(g_026c5c30,param_1,param_2,param_3,param_4,param_5);
  return;
}

int sub_00d9a8e0(...);
int sub_00da0550(void);
extern undefined4 g_026c5c44;
// @baa 0x00da2410
void sub_00da2410(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c5c44 == 0) {
    g_026c5c44 = sub_00d9a8e0(L"Engine");
    sub_00da0550();
  }
  sub_005eb8e0(g_026c5c44,param_1,param_2,param_3,param_4,param_5);
  return;
}

int sub_00d9a9a0(...);
int sub_00da06a0(void);
extern undefined4 g_026c5c48;
// @baa 0x00da2460
void sub_00da2460(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c5c48 == 0) {
    g_026c5c48 = sub_00d9a9a0(L"Engine");
    sub_00da06a0();
  }
  sub_005eb8e0(g_026c5c48,param_1,param_2,param_3,param_4,param_5);
  return;
}

// @baa 0x00da2d40
// @baa 0x00da2e50
bool UPlayerOwnerDataProvider::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da2e90
void sub_00da2110();
// @baa 0x00da32b0
void sub_00da32b0(void) { sub_00da2110(); }

extern FName g_026c50ec;
 /* ENGINE_ProviderClientBound */

inline UBOOL IsChildOf(const UField* Struct, const UField* SomeBase)
{
    for (; Struct; Struct = Struct->SuperField)
        if (Struct == SomeBase)
            return 1;
    return 0;
}

struct FProviderClientBound_Parms {
    UClass* ProviderClientClass;
};

struct USessionSettingsProvider_ : public USessionSettingsProvider {
    UFunction* sub_005d7d10(FName InName, UBOOL Global); /* FindFunctionChecked */
    void eventProviderClientBound(UClass* InProviderClient)
    {
        FProviderClientBound_Parms Parms;
        Parms.ProviderClientClass = InProviderClient;
        ProcessEvent(sub_005d7d10(g_026c50ec, 0), &Parms, 0);
    }
    UBOOL sub_00da32c0(UClass* ProviderClass);
};

// @baa 0x00da32c0
UBOOL USessionSettingsProvider_::sub_00da32c0(UClass* ProviderClass)
{
    UBOOL bResult = 0;
    if (ProviderClientMetaClass == NULL)
        appFailAssert("ProviderClientMetaClass != NULL", "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp", 9017, TEXT(""));

    if (IsChildOf(ProviderClass, ProviderClientMetaClass)
        && ProviderClass->sub_005b9020(ProviderClientClass))
    {
        ProviderClient = ProviderClass;
        for (UField* Link = *(UField**)((BYTE*)ProviderClass + 0x64); Link; Link = *(UField**)((BYTE*)Link + 0x58))
        {
        }
        eventProviderClientBound(ProviderClass);
        bResult = 1;
    }
    return bResult;
}

// @baa 0x00da33b0
int USkeletalMeshComponent::sub_00da33b0(void)
{
    int param_1 = (int)this;

  sub_00d98400();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct M_00da33d0 { void sub_00618850(); };

struct C_00da33d0 { char pad[8]; M_00da33d0 m; void sub_00da33d0(); };

// @baa 0x00da33d0
void C_00da33d0::sub_00da33d0() { m.sub_00618850(); }

struct C_00da3430 { void sub_00da2200(int); C_00da3430 *sub_00da3430(int); };

// @baa 0x00da3430
C_00da3430 *C_00da3430::sub_00da3430(int a) { sub_00da2200(a); return this; }

void sub_00da2260();
// @baa 0x00da3450
void sub_00da3450(void) { sub_00da2260(); }

int sub_00da02b0(void);
int sub_00da1a70(...);
extern undefined4 g_026c5c34;
// @baa 0x00da3500
void sub_00da3500(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c5c34 == 0) {
    g_026c5c34 = sub_00da1a70(L"Engine");
    sub_00da02b0();
  }
  sub_005eb8e0(g_026c5c34,param_1,param_2,param_3,param_4,param_5);
  return;
}

// @baa 0x00da3660
int UUIDataStore_InputAlias::vf_12c(int a0, int a1) { return 1; }

int sub_005c7a70(...);
int sub_00da3670(void);
// @baa 0x00da36f0
undefined4 UUIDataStore_InputAlias::sub_00da36f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00da3670();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xb4);
  }
  return param_1;
}

// @baa 0x00da3e30
void sub_00da3e30(void) { sub_00da2110(); }

// @baa 0x00da4420
int USkeletalMeshComponent::sub_00da4420(void)
{
    int param_1 = (int)this;

  sub_00d98400();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct M_00da4440 { void sub_00618850(); };

struct C_00da4440 { char pad[8]; M_00da4440 m; void sub_00da4440(); };

// @baa 0x00da4440
void C_00da4440::sub_00da4440() { m.sub_00618850(); }

struct C_00da44a0 { void sub_00da2200(int); C_00da44a0 *sub_00da44a0(int); };

// @baa 0x00da44a0
C_00da44a0 *C_00da44a0::sub_00da44a0(int a) { sub_00da2200(a); return this; }

int sub_00d9a380(...);
int sub_00da2e90(void);
extern undefined4 g_026c5c18;
// @baa 0x00da44e0
void sub_00da44e0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c5c18 == 0) {
    g_026c5c18 = sub_00d9a380(L"Engine");
    sub_00da2e90();
  }
  sub_005eb8e0(g_026c5c18,param_1,param_2,param_3,param_4,param_5);
  return;
}

// @baa 0x00da45d0
// @baa 0x00da45e0
