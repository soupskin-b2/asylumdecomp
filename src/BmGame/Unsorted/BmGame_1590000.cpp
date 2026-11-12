// BmGame_1590000.cpp (part 1 of 2): 282 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0158b870(...);
int sub_015905d0(void);
extern undefined4 g_026e1314;
// @baa 0x01591580
int sub_01591580(void)
{
  if (g_026e1314 == 0) {
    g_026e1314 = sub_0158b870(L"BmGame");
    sub_015905d0();
  }
  return g_026e1314;
}

int sub_0158b570(...);
int sub_01590480(void);
extern undefined4 g_026e12fc;
// @baa 0x015915b0
int sub_015915b0(void)
{
  if (g_026e12fc == 0) {
    g_026e12fc = sub_0158b570(L"BmGame");
    sub_01590480();
  }
  return g_026e12fc;
}

int sub_0158b930(...);
int sub_01590720(void);
extern undefined4 g_026e1318;
// @baa 0x015915e0
int sub_015915e0(void)
{
  if (g_026e1318 == 0) {
    g_026e1318 = sub_0158b930(L"BmGame");
    sub_01590720();
  }
  return g_026e1318;
}

int sub_0158b6f0(...);
int sub_01591610(void);
extern undefined4 g_026e130c;
// @baa 0x01591c10
int sub_01591c10(void)
{
  if (g_026e130c == 0) {
    g_026e130c = sub_0158b6f0(L"BmGame");
    sub_01591610();
  }
  return g_026e130c;
}

// @baa 0x01591dc0
void sub_01591dc0(void) {  }

// @baa 0x01591dd0
float10 sub_01591dd0(double param_1)
{
  return (float10)param_1;
}

struct C { char* sub_01591de0(void); };

// @baa 0x01591de0
char* C::sub_01591de0(void) { return (char*)this + 20; }

struct C_01591df0 {
    uint sub_01591df0();
};

// @baa 0x01591df0
uint C_01591df0::sub_01591df0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x524) >> 6 & 1;
}

struct C_01591e00 {
    bool sub_01591e00();
};

// @baa 0x01591e00
bool C_01591e00::sub_01591e00(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x528) != -1;
}

struct C_01591e10 { C_01591e10* sub_01591e10(int a0); };

// @baa 0x01591e10
C_01591e10* C_01591e10::sub_01591e10(int a0) { return this; }

struct C_01591e80 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_01591e80& sub_01591e80(int Arg);
};

// @baa 0x01591e80
C_01591e80& C_01591e80::sub_01591e80(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

// @baa 0x01591f90
int sub_01591f90(int a0, int a1) { return a1; }

// @baa 0x01591fa0
int sub_01591fa0(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_0231b4c0;
// @baa 0x01591fb0
undefined4 * UObject::sub_01591fb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231b4c0);
  return param_1;
}

// @baa 0x01591fd0
IMPLEMENT_CLASS_AT(URAnimNotify_IdleOverlay, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 19);

// @baa 0x01592030
// @baa 0x01592050
undefined4 sub_01592050(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x01592080
IMPLEMENT_CLASS_AT(URAnimNotify_Emote, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 25);

// @baa 0x01592180
IMPLEMENT_CLASS_AT(URAnimNotify_PlayGadgetAnim, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 22);

// @baa 0x015921e0
// @baa 0x01592200
undefined4 sub_01592200(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x01592230
IMPLEMENT_CLASS_AT(URAnimNotify_Rumble, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 20);

// @baa 0x01592290
struct C_015922b0 {
    int sub_015922b0(int param1);
};

// @baa 0x015922b0
int C_015922b0::sub_015922b0(int param1) { return (int)this; }

// @baa 0x01592350
IMPLEMENT_CLASS_AT(URAnimNotify_SpawnParticleFX, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_SpawnParticleFX.cpp", 18);

// @baa 0x01592420
IMPLEMENT_CLASS_AT(URAnimNotify_SpawnParticleFX_PCOnly, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_SpawnParticleFX.cpp", 19);

// @baa 0x01592480
struct C_015924a0 {
    undefined4 sub_015924a0();
};

// @baa 0x015924a0
undefined4 C_015924a0::sub_015924a0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_015924b0 { C_015924b0* sub_015924b0(void); };

// @baa 0x015924b0
C_015924b0* C_015924b0::sub_015924b0(void) { return this; }

struct C_015924c0 { C_015924c0* sub_015924c0(void); };

// @baa 0x015924c0
C_015924c0* C_015924c0::sub_015924c0(void) { return this; }

struct C_015924d0 { C_015924d0* sub_015924d0(void); };

// @baa 0x015924d0
C_015924d0* C_015924d0::sub_015924d0(void) { return this; }

struct C_015924e0 { C_015924e0* sub_015924e0(void); };

// @baa 0x015924e0
C_015924e0* C_015924e0::sub_015924e0(void) { return this; }

// @baa 0x015924f0
int sub_015924f0(int a0, int a1) { return a1; }

extern undefined * g_0231bb50;
// @baa 0x01592500
undefined4 * UObject::sub_01592500(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231bb50);
  return param_1;
}

// @baa 0x01592520
IMPLEMENT_CLASS_AT(URAnimNotify_StrikeContact, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 16);

// @baa 0x01592580
struct C_015925b0 { C_015925b0* sub_015925b0(void); };

// @baa 0x015925b0
C_015925b0* C_015925b0::sub_015925b0(void) { return this; }

// @baa 0x01592700
undefined4 sub_01592700(float * param_1, float * param_2)
{
  if (*param_1 == *param_2) {
    return 1;
  }
  return 0;
}

// @baa 0x01592720
undefined4 sub_01592720(float * param_1, float * param_2)
{
  if (*param_1 != *param_2) {
    return 1;
  }
  return 0;
}

struct C_01592740 {
    undefined4 sub_01592740();
};

// @baa 0x01592740
undefined4 C_01592740::sub_01592740(void)
{
    float * param_1 = (float *)this;
  if (0.0001 < *param_1) {
    return 1;
  }
  return 0;
}

struct C_01592760 { C_01592760* sub_01592760(void); };

// @baa 0x01592760
C_01592760* C_01592760::sub_01592760(void) { return this; }

struct C_015927d0 { C_015927d0* sub_015927d0(void); };

// @baa 0x015927d0
C_015927d0* C_015927d0::sub_015927d0(void) { return this; }

struct C_015927e0 { C_015927e0* sub_015927e0(void); };

// @baa 0x015927e0
C_015927e0* C_015927e0::sub_015927e0(void) { return this; }

struct C_01592860 {
    C_01592860 *sub_01592860(void);
};

// @baa 0x01592860
C_01592860 *C_01592860::sub_01592860(void)
{
    DWORD *d = (DWORD *)this;
    *d &= 0xffffffc0;
    return this;
}

struct C_01592870 { C_01592870* sub_01592870(void); };

// @baa 0x01592870
C_01592870* C_01592870::sub_01592870(void) { return this; }

struct C_01592880 { C_01592880* sub_01592880(void); };

// @baa 0x01592880
C_01592880* C_01592880::sub_01592880(void) { return this; }

struct C_01592890 { C_01592890* sub_01592890(void); };

// @baa 0x01592890
C_01592890* C_01592890::sub_01592890(void) { return this; }

struct C_015928d0 { C_015928d0* sub_015928d0(void); };

// @baa 0x015928d0
C_015928d0* C_015928d0::sub_015928d0(void) { return this; }

struct C_015929a0 { C_015929a0* sub_015929a0(void); };

// @baa 0x015929a0
C_015929a0* C_015929a0::sub_015929a0(void) { return this; }

struct C_01592b90 { C_01592b90* sub_01592b90(void); };

// @baa 0x01592b90
C_01592b90* C_01592b90::sub_01592b90(void) { return this; }

struct C_01592ba0 { int a; C_01592ba0(int); };

// @baa 0x01592ba0
C_01592ba0::C_01592ba0(int x) : a(x) {}

// @baa 0x01592bb0
bool sub_01592bb0(int * param_1, int * param_2)
{
  return *param_1 == *param_2;
}

struct C_01592bd0 {
    bool sub_01592bd0();
};

// @baa 0x01592bd0
bool C_01592bd0::sub_01592bd0(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_01592be0 {
    bool sub_01592be0();
};

// @baa 0x01592be0
bool C_01592be0::sub_01592be0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == 0;
}

struct C_01592bf0 { C_01592bf0* sub_01592bf0(void); };

// @baa 0x01592bf0
C_01592bf0* C_01592bf0::sub_01592bf0(void) { return this; }

struct C_01592d30 { C_01592d30* sub_01592d30(void); };

// @baa 0x01592d30
C_01592d30* C_01592d30::sub_01592d30(void) { return this; }

struct C_01592f70 { C_01592f70* sub_01592f70(void); };

// @baa 0x01592f70
C_01592f70* C_01592f70::sub_01592f70(void) { return this; }

struct C_01592fc0 { C_01592fc0* sub_01592fc0(void); };

// @baa 0x01592fc0
C_01592fc0* C_01592fc0::sub_01592fc0(void) { return this; }

struct C_01593050 { C_01593050* sub_01593050(void); };

// @baa 0x01593050
C_01593050* C_01593050::sub_01593050(void) { return this; }

struct C_015930d0 {
    bool sub_015930d0();
};

// @baa 0x015930d0
bool C_015930d0::sub_015930d0(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_015930e0 { C_015930e0* sub_015930e0(void); };

// @baa 0x015930e0
C_015930e0* C_015930e0::sub_015930e0(void) { return this; }

struct C_015932b0 { C_015932b0* sub_015932b0(void); };

// @baa 0x015932b0
C_015932b0* C_015932b0::sub_015932b0(void) { return this; }

struct C_015932f0 {
    undefined4 sub_015932f0();
};

// @baa 0x015932f0
undefined4 C_015932f0::sub_015932f0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_01593340 { C_01593340* sub_01593340(void); };

// @baa 0x01593340
C_01593340* C_01593340::sub_01593340(void) { return this; }

struct C_01593370 { C_01593370* sub_01593370(void); };

// @baa 0x01593370
C_01593370* C_01593370::sub_01593370(void) { return this; }

// @baa 0x015934f0
undefined4 sub_015934f0(float * param_1, float * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_01593560 { C_01593560* sub_01593560(void); };

// @baa 0x01593560
C_01593560* C_01593560::sub_01593560(void) { return this; }

// @baa 0x015935f0
int sub_015935f0(int a0, int a1) { return a1; }

extern undefined * g_0231bcb8;
// @baa 0x01593600
undefined4 * UObject::sub_01593600(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231bcb8);
  return param_1;
}

// @baa 0x01593620
IMPLEMENT_CLASS_AT(URAnimUtil, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil.cpp", 14);

// @baa 0x01593680
struct C_01593760 { char* sub_01593760(void); };

// @baa 0x01593760
char* C_01593760::sub_01593760(void) { return (char*)this + 224; }

struct C_01593770 { char* sub_01593770(void); };

// @baa 0x01593770
char* C_01593770::sub_01593770(void) { return (char*)this + 236; }

struct C_01593780 { char* sub_01593780(void); };

// @baa 0x01593780
char* C_01593780::sub_01593780(void) { return (char*)this + 248; }

// @baa 0x01593790
int sub_01593790(int a0, int a1) { return a1; }

extern undefined * g_0231bdc8;
// @baa 0x015937a0
undefined4 * UObject::sub_015937a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231bdc8);
  return param_1;
}

// @baa 0x015937c0
IMPLEMENT_CLASS_AT(URAnimNotify_BeginFixGroup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 23);

// @baa 0x01593820
// @baa 0x01593840
undefined4 sub_01593840(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x01593870
IMPLEMENT_CLASS_AT(URAnimNotify_EndFixGroup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 24);

// @baa 0x015938d0
// @baa 0x015938f0
undefined4 sub_015938f0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_0231bff8;
// @baa 0x01593900
undefined4 * UObject::sub_01593900(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231bff8);
  return param_1;
}

// @baa 0x01593920
IMPLEMENT_CLASS_AT(URAnimNotify_FootPassing, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Footstep.cpp", 15);

// @baa 0x01593980
void URAnimNotify_FootPassing::vf_10c(UINT a0) {  }

// @baa 0x01593990
// @baa 0x015939b0
undefined4 sub_015939b0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x015939e0
IMPLEMENT_CLASS_AT(URAnimNotify_FootSyncIn, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Footstep.cpp", 16);

// @baa 0x01593a40
void URAnimNotify_FootSyncIn::vf_10c(UINT a0) {  }

// @baa 0x01593a50
// @baa 0x01593a70
undefined4 sub_01593a70(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x01593aa0
IMPLEMENT_CLASS_AT(URAnimNotify_FootSyncOut, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Footstep.cpp", 17);

// @baa 0x01593b00
void URAnimNotify_FootSyncOut::vf_10c(UINT a0) {  }

// @baa 0x01593b10
struct C_01593b30 {
    undefined4 sub_01593b30();
};

// @baa 0x01593b30
undefined4 C_01593b30::sub_01593b30(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_01593b40 { C_01593b40* sub_01593b40(int a0); };

// @baa 0x01593b40
C_01593b40* C_01593b40::sub_01593b40(int a0) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01593b50 { C_01593b50* sub_01593b50(void); };

// @baa 0x01593b50
C_01593b50* C_01593b50::sub_01593b50(void) { return this; }

struct C_01593b80 { C_01593b80* sub_01593b80(void); };

// @baa 0x01593b80
C_01593b80* C_01593b80::sub_01593b80(void) { return this; }

struct C_01593bb0 { C_01593bb0* sub_01593bb0(void); };

// @baa 0x01593bb0
C_01593bb0* C_01593bb0::sub_01593bb0(void) { return this; }

struct C_01593bc0 { C_01593bc0* sub_01593bc0(void); };

// @baa 0x01593bc0
C_01593bc0* C_01593bc0::sub_01593bc0(void) { return this; }

struct C_01593bd0 { C_01593bd0* sub_01593bd0(void); };

// @baa 0x01593bd0
C_01593bd0* C_01593bd0::sub_01593bd0(void) { return this; }

struct C_01593be0 { C_01593be0* sub_01593be0(void); };

// @baa 0x01593be0
C_01593be0* C_01593be0::sub_01593be0(void) { return this; }

struct C_01593bf0 { C_01593bf0* sub_01593bf0(void); };

// @baa 0x01593bf0
C_01593bf0* C_01593bf0::sub_01593bf0(void) { return this; }

struct C_01593c00 { C_01593c00* sub_01593c00(void); };

// @baa 0x01593c00
C_01593c00* C_01593c00::sub_01593c00(void) { return this; }

struct C_01593c10 { C_01593c10* sub_01593c10(void); };

// @baa 0x01593c10
C_01593c10* C_01593c10::sub_01593c10(void) { return this; }

struct C_01593c20 { C_01593c20* sub_01593c20(void); };

// @baa 0x01593c20
C_01593c20* C_01593c20::sub_01593c20(void) { return this; }

struct C_01593c30 { C_01593c30* sub_01593c30(void); };

// @baa 0x01593c30
C_01593c30* C_01593c30::sub_01593c30(void) { return this; }

struct C_01593c40 { C_01593c40* sub_01593c40(void); };

// @baa 0x01593c40
C_01593c40* C_01593c40::sub_01593c40(void) { return this; }

struct C_01593c50 { C_01593c50* sub_01593c50(void); };

// @baa 0x01593c50
C_01593c50* C_01593c50::sub_01593c50(void) { return this; }

struct C_01593c60 { C_01593c60* sub_01593c60(void); };

// @baa 0x01593c60
C_01593c60* C_01593c60::sub_01593c60(void) { return this; }

struct C_01593c70 { C_01593c70* sub_01593c70(void); };

// @baa 0x01593c70
C_01593c70* C_01593c70::sub_01593c70(void) { return this; }

struct C_01593c80 { C_01593c80* sub_01593c80(void); };

// @baa 0x01593c80
C_01593c80* C_01593c80::sub_01593c80(void) { return this; }

struct C_01593c90 { C_01593c90* sub_01593c90(void); };

// @baa 0x01593c90
C_01593c90* C_01593c90::sub_01593c90(void) { return this; }

struct C_01593ca0 { C_01593ca0* sub_01593ca0(void); };

// @baa 0x01593ca0
C_01593ca0* C_01593ca0::sub_01593ca0(void) { return this; }

struct C_01593cb0 { C_01593cb0* sub_01593cb0(void); };

// @baa 0x01593cb0
C_01593cb0* C_01593cb0::sub_01593cb0(void) { return this; }

struct C_01593cc0 { C_01593cc0* sub_01593cc0(void); };

// @baa 0x01593cc0
C_01593cc0* C_01593cc0::sub_01593cc0(void) { return this; }

struct C_01593cd0 { C_01593cd0* sub_01593cd0(void); };

// @baa 0x01593cd0
C_01593cd0* C_01593cd0::sub_01593cd0(void) { return this; }

struct C_01593ce0 { C_01593ce0* sub_01593ce0(void); };

// @baa 0x01593ce0
C_01593ce0* C_01593ce0::sub_01593ce0(void) { return this; }

struct C_01593cf0 { C_01593cf0* sub_01593cf0(void); };

// @baa 0x01593cf0
C_01593cf0* C_01593cf0::sub_01593cf0(void) { return this; }

struct C_01593d00 { C_01593d00* sub_01593d00(void); };

// @baa 0x01593d00
C_01593d00* C_01593d00::sub_01593d00(void) { return this; }

struct C_01593d10 { C_01593d10* sub_01593d10(void); };

// @baa 0x01593d10
C_01593d10* C_01593d10::sub_01593d10(void) { return this; }

struct C_01593d20 { C_01593d20* sub_01593d20(void); };

// @baa 0x01593d20
C_01593d20* C_01593d20::sub_01593d20(void) { return this; }

struct C_01593d30 { C_01593d30* sub_01593d30(void); };

// @baa 0x01593d30
C_01593d30* C_01593d30::sub_01593d30(void) { return this; }

struct C_01593ed0 { C_01593ed0* sub_01593ed0(void); };

// @baa 0x01593ed0
C_01593ed0* C_01593ed0::sub_01593ed0(void) { return this; }

struct C_01593f10 { C_01593f10* sub_01593f10(void); };

// @baa 0x01593f10
C_01593f10* C_01593f10::sub_01593f10(void) { return this; }

// @baa 0x01594060
int sub_01594060(int a0, int a1) { return a1; }

extern undefined * g_0231c340;
// @baa 0x01594070
undefined4 * UObject::sub_01594070(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231c340);
  return param_1;
}

// @baa 0x01594090
IMPLEMENT_CLASS_AT(URAnimUtil_AnimAccumulator, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_AnimAccumulator.cpp", 14);

// @baa 0x015940f0
struct C_01594110 {
    undefined4 sub_01594110();
};

// @baa 0x01594110
undefined4 C_01594110::sub_01594110(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_01594140 { C_01594140* sub_01594140(void); };

// @baa 0x01594140
C_01594140* C_01594140::sub_01594140(void) { return this; }

struct C_01594170 { C_01594170* sub_01594170(void); };

// @baa 0x01594170
C_01594170* C_01594170::sub_01594170(void) { return this; }

struct C_01594180 { C_01594180* sub_01594180(void); };

// @baa 0x01594180
C_01594180* C_01594180::sub_01594180(void) { return this; }

struct C_01594190 { C_01594190* sub_01594190(void); };

// @baa 0x01594190
C_01594190* C_01594190::sub_01594190(void) { return this; }

struct C_015941a0 { C_015941a0* sub_015941a0(void); };

// @baa 0x015941a0
C_015941a0* C_015941a0::sub_015941a0(void) { return this; }

struct C_015941d0 { C_015941d0* sub_015941d0(void); };

// @baa 0x015941d0
C_015941d0* C_015941d0::sub_015941d0(void) { return this; }

struct C_015941e0 { C_015941e0* sub_015941e0(void); };

// @baa 0x015941e0
C_015941e0* C_015941e0::sub_015941e0(void) { return this; }

struct C_015941f0 { C_015941f0* sub_015941f0(void); };

// @baa 0x015941f0
C_015941f0* C_015941f0::sub_015941f0(void) { return this; }

struct C_01594200 {
    void * sub_01594200(undefined4, uint);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x01594200
void * C_01594200::sub_01594200(undefined4 param_2, uint param_3)
{
    void * param_1 = (void *)this;

  sub_01a37612(param_1,0,0x120);
  *(undefined4 *)((int)param_1 + 0x114) = param_2;
  *(uint *)((int)param_1 + 0x11c) =
       *(uint *)((int)param_1 + 0x11c) ^ (*(uint *)((int)param_1 + 0x11c) ^ param_3) & 1;
  return param_1;
}

struct C_01594240 { C_01594240* sub_01594240(void); };

// @baa 0x01594240
C_01594240* C_01594240::sub_01594240(void) { return this; }

struct C_01594250 { C_01594250* sub_01594250(void); };

// @baa 0x01594250
C_01594250* C_01594250::sub_01594250(void) { return this; }

struct C_01594260 { C_01594260* sub_01594260(void); };

// @baa 0x01594260
C_01594260* C_01594260::sub_01594260(void) { return this; }

struct C_01594270 {
    void * sub_01594270(undefined4);
};

// @baa 0x01594270
void * C_01594270::sub_01594270(undefined4 param_2)
{
    void * param_1 = (void *)this;

  sub_01a37612(param_1,0,0x18c);
  *(undefined4 *)((int)param_1 + 0x184) = param_2;
  return param_1;
}

struct C_015942a0 { C_015942a0* sub_015942a0(void); };

// @baa 0x015942a0
C_015942a0* C_015942a0::sub_015942a0(void) { return this; }

struct C_015942d0 { C_015942d0* sub_015942d0(void); };

// @baa 0x015942d0
C_015942d0* C_015942d0::sub_015942d0(void) { return this; }

struct C_015943c0 { C_015943c0* sub_015943c0(void); };

// @baa 0x015943c0
C_015943c0* C_015943c0::sub_015943c0(void) { return this; }

struct C_015943d0 { C_015943d0* sub_015943d0(void); };

// @baa 0x015943d0
C_015943d0* C_015943d0::sub_015943d0(void) { return this; }

struct C_015943e0 {
    void sub_015943e0();
};

// @baa 0x015943e0
void C_015943e0::sub_015943e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[0x1f] = 0;
  param_1[0x3e] = 0;
  return;
}

struct C_015943f0 { C_015943f0* sub_015943f0(void); };

// @baa 0x015943f0
C_015943f0* C_015943f0::sub_015943f0(void) { return this; }

// @baa 0x015944f0
IMPLEMENT_CLASS_AT(URAnimUtil_AnimOutput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_AnimOutput.cpp", 14);

// @baa 0x01594550
struct C_01594570 {
    undefined4 sub_01594570();
};

// @baa 0x01594570
undefined4 C_01594570::sub_01594570(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_01594580 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_01594580& sub_01594580(int Arg);
};

// @baa 0x01594580
C_01594580& C_01594580::sub_01594580(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

struct C_01594590 { C_01594590* sub_01594590(void); };

// @baa 0x01594590
C_01594590* C_01594590::sub_01594590(void) { return this; }

struct C_015945a0 { C_015945a0* sub_015945a0(void); };

// @baa 0x015945a0
C_015945a0* C_015945a0::sub_015945a0(void) { return this; }

struct C_015945b0 { C_015945b0* sub_015945b0(void); };

// @baa 0x015945b0
C_015945b0* C_015945b0::sub_015945b0(void) { return this; }

struct C_015945c0 { C_015945c0* sub_015945c0(void); };

// @baa 0x015945c0
C_015945c0* C_015945c0::sub_015945c0(void) { return this; }

struct C_015945f0 { C_015945f0* sub_015945f0(void); };

// @baa 0x015945f0
C_015945f0* C_015945f0::sub_015945f0(void) { return this; }

// @baa 0x01594600
int sub_01594600(int a0, int a1) { return a1; }

extern undefined * g_0231c5b0;
// @baa 0x01594610
undefined4 * UObject::sub_01594610(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231c5b0);
  return param_1;
}

// @baa 0x01594630
IMPLEMENT_CLASS_AT(URAnimUtil_FaceFXOutput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_FaceFXOutput.cpp", 19);

// @baa 0x01594690
struct C_015946b0 {
    undefined4 sub_015946b0();
};

// @baa 0x015946b0
undefined4 C_015946b0::sub_015946b0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_015946c0 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_015946c0& sub_015946c0(int Arg);
};

// @baa 0x015946c0
C_015946c0& C_015946c0::sub_015946c0(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

struct C_015946d0 { C_015946d0* sub_015946d0(void); };

// @baa 0x015946d0
C_015946d0* C_015946d0::sub_015946d0(void) { return this; }

struct C_01594700 { C_01594700* sub_01594700(void); };

// @baa 0x01594700
C_01594700* C_01594700::sub_01594700(void) { return this; }

struct C_01594760 {
    float10 sub_01594760();
};

// @baa 0x01594760
float10 C_01594760::sub_01594760(void)
{
    float * param_1 = (float *)this;

  return (float10)param_1[2] + (float10)param_1[1] + (float10)*param_1;
}

struct C_015947c0 { C_015947c0* sub_015947c0(void); };

// @baa 0x015947c0
C_015947c0* C_015947c0::sub_015947c0(void) { return this; }

struct C_015947d0 { float sub_015947d0(void); };

// @baa 0x015947d0
float C_015947d0::sub_015947d0(void) { return *(float*)((char*)this + 52); }

struct C_015947e0 { float sub_015947e0(void); };

// @baa 0x015947e0
float C_015947e0::sub_015947e0(void) { return *(float*)((char*)this + 56); }

struct C_015947f0 { char* sub_015947f0(void); };

// @baa 0x015947f0
char* C_015947f0::sub_015947f0(void) { return (char*)this + 16; }

struct C_01594800 { char* sub_01594800(void); };

// @baa 0x01594800
char* C_01594800::sub_01594800(void) { return (char*)this + 40; }

struct C_01594810 { C_01594810* sub_01594810(void); };

// @baa 0x01594810
C_01594810* C_01594810::sub_01594810(void) { return this; }

struct C_01594820 { C_01594820* sub_01594820(void); };

// @baa 0x01594820
C_01594820* C_01594820::sub_01594820(void) { return this; }

struct C_01594830 { float sub_01594830(void); };

// @baa 0x01594830
float C_01594830::sub_01594830(void) { return *(float*)((char*)this + 0); }

struct C_01594840 { C_01594840* sub_01594840(void); };

// @baa 0x01594840
C_01594840* C_01594840::sub_01594840(void) { return this; }

// @baa 0x01594850
int sub_01594850(int a0, int a1) { return a1; }

extern undefined * g_0231c6c0;
// @baa 0x01594860
undefined4 * UObject::sub_01594860(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231c6c0);
  return param_1;
}

// @baa 0x01594880
IMPLEMENT_CLASS_AT(URAnimUtil_IKOutput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_IKOutput.cpp", 14);

// @baa 0x015948e0
struct C_01594900 {
    undefined4 sub_01594900();
};

// @baa 0x01594900
undefined4 C_01594900::sub_01594900(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

// @baa 0x01594a30
IMPLEMENT_CLASS_AT(URAnimUtil_AdditiveAnimOutput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_AdditiveAnimOutput.cpp", 9);

// @baa 0x01594a90
struct C_01594ab0 {
    undefined4 sub_01594ab0();
};

// @baa 0x01594ab0
undefined4 C_01594ab0::sub_01594ab0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_01594ac0 { C_01594ac0* sub_01594ac0(void); };

// @baa 0x01594ac0
C_01594ac0* C_01594ac0::sub_01594ac0(void) { return this; }

struct C_01594b00 {
    undefined4 sub_01594b00(int *);
};

// @baa 0x01594b00
undefined4 C_01594b00::sub_01594b00(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && (((param_2[2] ^ param_1[2]) & 1U) == 0)) {
    return 1;
  }
  return 0;
}

struct C_01594b80 { C_01594b80* sub_01594b80(void); };

// @baa 0x01594b80
C_01594b80* C_01594b80::sub_01594b80(void) { return this; }

struct C_01594b90 { C_01594b90* sub_01594b90(void); };

// @baa 0x01594b90
C_01594b90* C_01594b90::sub_01594b90(void) { return this; }

struct C_01594bc0 { void sub_01594bc0(void); };

// @baa 0x01594bc0
void C_01594bc0::sub_01594bc0(void) { *(int*)((char*)this + 0) = 0; }

// @baa 0x01594bd0
int sub_01594bd0(int a0, int a1) { return a1; }

extern undefined * g_0231c8e0;
// @baa 0x01594be0
undefined4 * UObject::sub_01594be0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231c8e0);
  return param_1;
}

// @baa 0x01594c00
IMPLEMENT_CLASS_AT(URAnimUtil_AimingOutput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_AimingOutput.cpp", 14);

// @baa 0x01594c60
struct C_01594c80 {
    undefined4 sub_01594c80();
};

// @baa 0x01594c80
undefined4 C_01594c80::sub_01594c80(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_01594cb0 { C_01594cb0* sub_01594cb0(void); };

// @baa 0x01594cb0
C_01594cb0* C_01594cb0::sub_01594cb0(void) { return this; }

struct C_01594cc0 { C_01594cc0* sub_01594cc0(void); };

// @baa 0x01594cc0
C_01594cc0* C_01594cc0::sub_01594cc0(void) { return this; }

// @baa 0x01594cd0
int sub_01594cd0(int a0, int a1) { return a1; }

// @baa 0x01594d20
void sub_01594d20(void) {  }

// @baa 0x01594d30
int sub_01594d30(int a0, int a1) { return a1; }

// @baa 0x01594d40
int sub_01594d40(int a0, int a1) { return a1; }

struct C_01594d50 { C_01594d50* sub_01594d50(int a0); };

// @baa 0x01594d50
C_01594d50* C_01594d50::sub_01594d50(int a0) { return this; }

struct C_01594d60 { C_01594d60* sub_01594d60(int a0); };

// @baa 0x01594d60
C_01594d60* C_01594d60::sub_01594d60(int a0) { return this; }

struct C_01594e20 { C_01594e20* sub_01594e20(int a0); };

// @baa 0x01594e20
C_01594e20* C_01594e20::sub_01594e20(int a0) { return this; }

// @baa 0x015967b0
int URAnimNotify_Foley::vf_000(void) { return 1; }

// @baa 0x015967c0
bool URAnimNotify_Foley::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01596960
// @baa 0x01596a70
int URAnimNotify_FootPassing::vf_000(void) { return 1; }

// @baa 0x01596a80
bool URAnimNotify_FootPassing::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01596ac0
// @baa 0x01596bd0
int URAnimNotify_FootSyncIn::vf_000(void) { return 1; }

// @baa 0x01596be0
bool URAnimNotify_FootSyncIn::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01596c20
// @baa 0x01596d30
int URAnimNotify_FootSyncOut::vf_000(void) { return 1; }

// @baa 0x01596d40
bool URAnimNotify_FootSyncOut::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01596f90
// @baa 0x015970a0
int URAnimNotify_StrikeContact::vf_000(void) { return 1; }

// @baa 0x015970b0
bool URAnimNotify_StrikeContact::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015973b0
int URAnimNotify_IdleOverlay::vf_000(void) { return 1; }

// @baa 0x015973c0
// @baa 0x015974d0
int URAnimNotify_Rumble::vf_000(void) { return 1; }

// @baa 0x015974e0
bool URAnimNotify_Rumble::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01597680
// @baa 0x01597790
int URAnimNotify_PlayGadgetAnim::vf_000(void) { return 1; }

// @baa 0x015977a0
bool URAnimNotify_PlayGadgetAnim::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015977e0
// @baa 0x015978f0
int URAnimNotify_BeginFixGroup::vf_000(void) { return 1; }

// @baa 0x01597900
bool URAnimNotify_BeginFixGroup::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01597940
// @baa 0x01597a50
int URAnimNotify_EndFixGroup::vf_000(void) { return 1; }

// @baa 0x01597a60
bool URAnimNotify_EndFixGroup::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01597aa0
// @baa 0x01597bb0
int URAnimNotify_Emote::vf_000(void) { return 1; }

// @baa 0x01597bc0
bool URAnimNotify_Emote::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct UPhysicsAssetInstance_ {
    void sub_00a0b500(UBOOL bNewFixed, FName GroupName, USkeletalMeshComponent* SkelComp, UBOOL bSetOtherBodiesToComplement);
};

// @baa 0x01597c00
void URAnimNotify_BeginFixGroup::vf_10c(UINT Context)
{
    USkeletalMeshComponent* SkelComp = *(USkeletalMeshComponent**)Context;
    if (SkelComp && SkelComp->PhysicsAssetInstance)
    {
        ((UPhysicsAssetInstance_*)SkelComp->PhysicsAssetInstance)->sub_00a0b500(1, GroupName, SkelComp, 0);
    }
}

// @baa 0x01597c60
// @baa 0x01597d70
int URAnimNotify_SpawnParticleFX::vf_000(void) { return 1; }

// @baa 0x01597d80
bool URAnimNotify_SpawnParticleFX::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01597dc0
int URAnimNotify_SpawnParticleFX_PCOnly::vf_000(void) { return 1; }

// @baa 0x01597dd0
// @baa 0x01597ee0
int URAnimUtil::vf_000(void) { return 1; }

// @baa 0x01597ef0
bool URAnimUtil::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01599170
// @baa 0x01599280
int URAnimUtil_AdditiveAnimOutput::vf_000(void) { return 1; }

// @baa 0x01599290
bool URAnimUtil_AdditiveAnimOutput::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015992d0
// @baa 0x015993e0
int URAnimUtil_AimingOutput::vf_000(void) { return 1; }

// @baa 0x015993f0
bool URAnimUtil_AimingOutput::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01599720
// @baa 0x01599830
int URAnimUtil_AnimAccumulator::vf_000(void) { return 1; }

// @baa 0x01599840
bool URAnimUtil_AnimAccumulator::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_0159ad30 { int a, b, c; C_0159ad30(); };

// @baa 0x0159ad30
C_0159ad30::C_0159ad30() : a(0), b(0), c(0) {}

struct C_0159ad40 { int sub_0159ad40(void); };

// @baa 0x0159ad40
int C_0159ad40::sub_0159ad40(void) { return *(int*)((char*)this + 4); }

struct C_0159ad50 { int sub_0159ad50(void); };

// @baa 0x0159ad50
int C_0159ad50::sub_0159ad50(void) { return *(int*)((char*)this + 4); }

struct C_0159ad60 { int a, b, c; C_0159ad60(); };

// @baa 0x0159ad60
C_0159ad60::C_0159ad60() : a(0), b(0), c(0) {}

struct C_0159ad70 { int a, b, c; C_0159ad70(); };

// @baa 0x0159ad70
C_0159ad70::C_0159ad70() : a(0), b(0), c(0) {}

struct C_0159ad80 { int sub_0159ad80(void); };

// @baa 0x0159ad80
int C_0159ad80::sub_0159ad80(void) { return *(int*)((char*)this + 4); }

struct C_0159ad90 { int sub_0159ad90(void); };

// @baa 0x0159ad90
int C_0159ad90::sub_0159ad90(void) { return *(int*)((char*)this + 4); }

struct C_0159ada0 { int a, b, c; C_0159ada0(); };

// @baa 0x0159ada0
C_0159ada0::C_0159ada0() : a(0), b(0), c(0) {}

struct C_0159ae20 { int sub_0159ae20(void); };

// @baa 0x0159ae20
int C_0159ae20::sub_0159ae20(void) { return *(int*)((char*)this + 4); }

struct C_0159ae30 { int a, b, c; C_0159ae30(); };

// @baa 0x0159ae30
C_0159ae30::C_0159ae30() : a(0), b(0), c(0) {}

struct C_0159ae40 { int sub_0159ae40(void); };

// @baa 0x0159ae40
int C_0159ae40::sub_0159ae40(void) { return *(int*)((char*)this + 4); }

struct C_0159ae50 { int a, b, c; C_0159ae50(); };

// @baa 0x0159ae50
C_0159ae50::C_0159ae50() : a(0), b(0), c(0) {}

struct C_0159ae60 { int a, b, c; C_0159ae60(); };

// @baa 0x0159ae60
C_0159ae60::C_0159ae60() : a(0), b(0), c(0) {}

struct C_0159ae70 { int a, b, c; C_0159ae70(); };

// @baa 0x0159ae70
C_0159ae70::C_0159ae70() : a(0), b(0), c(0) {}

struct C_0159ae80 { C_0159ae80* sub_0159ae80(int a0); };

// @baa 0x0159ae80
C_0159ae80* C_0159ae80::sub_0159ae80(int a0) { return this; }

struct C_0159ae90 { int sub_0159ae90(void); };

// @baa 0x0159ae90
int C_0159ae90::sub_0159ae90(void) { return *(int*)((char*)this + 0); }

struct C_0159aea0 { int sub_0159aea0(void); };

// @baa 0x0159aea0
int C_0159aea0::sub_0159aea0(void) { return *(int*)((char*)this + 0); }

struct C_0159afd0 {
    int sub_0159afd0(int);
};

// @baa 0x0159afd0
int C_0159afd0::sub_0159afd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0159afe0 { C_0159afe0* sub_0159afe0(int a0); };

// @baa 0x0159afe0
C_0159afe0* C_0159afe0::sub_0159afe0(int a0) { return this; }

struct C_0159aff0 { int sub_0159aff0(void); };

// @baa 0x0159aff0
int C_0159aff0::sub_0159aff0(void) { return *(int*)((char*)this + 0); }

struct C_0159b000 { int sub_0159b000(void); };

// @baa 0x0159b000
int C_0159b000::sub_0159b000(void) { return *(int*)((char*)this + 0); }

struct C_0159b010 {
    int sub_0159b010(int);
};

// @baa 0x0159b010
int C_0159b010::sub_0159b010(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_0159b020 { int sub_0159b020(void); };

// @baa 0x0159b020
int C_0159b020::sub_0159b020(void) { return *(int*)((char*)this + 0); }

int sub_007d94d0(...);
int sub_008aeca0(...);
// @baa 0x0159f000
undefined4 sub_0159f000(undefined4 param_1)
{
  int iVar1;
  
  iVar1 = sub_007d94d0(param_1);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x348);
  }
  iVar1 = sub_008aeca0(param_1);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x1ac);
  }
  return 0;
}

struct FSubStruct_015946e0
{
    INT Field0;
    INT Field4;
    INT Field8;
    INT FieldC;
    INT Field10;
    INT Field14;

    FSubStruct_015946e0* sub_015946e0(INT Unused)
    {
        Field0 = 0;
        Field4 = 0;
        Field8 = 0;
        FieldC = 0;
        Field10 = 0;
        Field14 = 0;
        return this;
    }
};

static FSubStruct_015946e0 g_Sub_015946e0;
// @baa 0x015946e0
FSubStruct_015946e0* CallSub_015946e0(INT Unused)
{
    return g_Sub_015946e0.sub_015946e0(Unused);
}

struct C_0159aca0
{
    char pad[0x70];
    float m_070;

    int sub_0159aca0(float Amount, float Unused);
};

// @baa 0x0159aca0
int C_0159aca0::sub_0159aca0(float Amount, float Unused)
{
    m_070 += Amount;
    return 1;
}

// @baa 0x015925f0
void sub_015925f0(float* Value)
{
    *Value = 0.0f;
}

struct C_015925c0
{
    float Value;

    C_015925c0* sub_015925c0(float* Source);
};

// @baa 0x015925c0
C_015925c0* C_015925c0::sub_015925c0(float* Source)
{
    Value = *Source;
    return this;
}

// @baa 0x015925d0
void sub_015925d0(float* Out, float Value)
{
    *Out = Value;
}

// @baa 0x015925e0
void sub_015925e0(float* Out, float Value)
{
    *Out = Value;
}
