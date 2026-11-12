// Engine_0770000.cpp (part 1 of 55): 243 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern "C" int __cdecl sub_0053df40(int Size, int Alignment);
struct FGameplayObject
{
    FGameplayObject * sub_0076d830();
};

// @baa 0x00770790
FGameplayObject * sub_00770790()
{
    FGameplayObject * pObject = (FGameplayObject *)sub_0053df40(0xdc, 8);
    if (pObject)
        return pObject->sub_0076d830();
    return 0;
}

struct FGameplayObject_007707b0
{
    FGameplayObject_007707b0 * sub_0076d8c0();
};

// @baa 0x007707b0
FGameplayObject_007707b0 * sub_007707b0()
{
    FGameplayObject_007707b0 * pObject = (FGameplayObject_007707b0 *)sub_0053df40(0xdc, 8);
    if (pObject)
        return pObject->sub_0076d8c0();
    return 0;
}

struct C {
    void sub_00770950();
    int sub_0076da40(int);
};

// @baa 0x00770950
void C::sub_00770950(void)
{
    int param_1 = (int)this;
  ((C *)((*(char **)((char *)this + 0x10))))->sub_0076da40(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00770970 {
    void sub_00770970();
    int sub_0076dc90(int);
};

// @baa 0x00770970
void C_00770970::sub_00770970(void)
{
    int param_1 = (int)this;
  ((C_00770970 *)((*(char **)((char *)this + 0x10))))->sub_0076dc90(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00770990 {
    undefined4 sub_00770990(byte);
};

int sub_0053dfa0(...);
int sub_0076a6b0(void);
// @baa 0x00770990
undefined4 C_00770990::sub_00770990(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0076a6b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00770520();
// @baa 0x00771310
void sub_00771310(void) { sub_00770520(); }

void sub_007705f0();
// @baa 0x00771320
void sub_00771320(void) { sub_007705f0(); }

int sub_00756960(void);
int sub_0076f540(...);
extern undefined4 g_026b3b9c;
// @baa 0x00771330
int sub_00771330(void)
{
  if (g_026b3b9c == 0) {
    g_026b3b9c = sub_0076f540(L"Engine");
    sub_00756960();
  }
  return g_026b3b9c;
}

void sub_007706c0();
// @baa 0x00771370
void sub_00771370(void) { sub_007706c0(); }

struct C_00772590 { C_00772590* sub_00772590(void); };

// @baa 0x00772590
C_00772590* C_00772590::sub_00772590(void) { return this; }

struct C_007725a0 { C_007725a0* sub_007725a0(void); };

// @baa 0x007725a0
C_007725a0* C_007725a0::sub_007725a0(void) { return this; }

struct C_007725b0 { C_007725b0* sub_007725b0(void); };

// @baa 0x007725b0
C_007725b0* C_007725b0::sub_007725b0(void) { return this; }

struct C_007725c0 { C_007725c0* sub_007725c0(void); };

// @baa 0x007725c0
C_007725c0* C_007725c0::sub_007725c0(void) { return this; }

void sub_00770850();
// @baa 0x007725d0
void sub_007725d0(void) { sub_00770850(); }

void sub_007708d0();
// @baa 0x007725e0
void sub_007725e0(void) { sub_007708d0(); }

struct S_00772a40 { int sub_007711f0(); };

struct C_00772a40 { int a; C_00772a40(S_00772a40 *); };

// @baa 0x00772a40
C_00772a40::C_00772a40(S_00772a40 *s) : a(s->sub_007711f0()) {}

struct S_00772a60 { int sub_00771250(); };

struct C_00772a60 { int a; C_00772a60(S_00772a60 *); };

// @baa 0x00772a60
C_00772a60::C_00772a60(S_00772a60 *s) : a(s->sub_00771250()) {}

struct S_00772a80 { int sub_007712b0(); };

struct C_00772a80 { int a; C_00772a80(S_00772a80 *); };

// @baa 0x00772a80
C_00772a80::C_00772a80(S_00772a80 *s) : a(s->sub_007712b0()) {}

struct C_00772b60 {
    int sub_00772b60();
};

int sub_0076de20(void);
// @baa 0x00772b60
int C_00772b60::sub_00772b60(void)
{
    int param_1 = (int)this;

  sub_0076de20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00772e00 {
    int sub_00772e00();
};

int sub_0076e060(void);
// @baa 0x00772e00
int C_00772e00::sub_00772e00(void)
{
    int param_1 = (int)this;

  sub_0076e060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00772e20 {
    int sub_00772e20();
};

int sub_0076e0c0(void);
// @baa 0x00772e20
int C_00772e20::sub_00772e20(void)
{
    int param_1 = (int)this;

  sub_0076e0c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00772e40 {
    int sub_00772e40();
};

int sub_0076e120(void);
// @baa 0x00772e40
int C_00772e40::sub_00772e40(void)
{
    int param_1 = (int)this;

  sub_0076e120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00772e60 {
    int sub_00772e60();
};

int sub_0076e180(void);
// @baa 0x00772e60
int C_00772e60::sub_00772e60(void)
{
    int param_1 = (int)this;

  sub_0076e180();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00772e80 {
    int sub_00772e80();
};

int sub_0076e1e0(void);
// @baa 0x00772e80
int C_00772e80::sub_00772e80(void)
{
    int param_1 = (int)this;

  sub_0076e1e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00772ea0
IMPLEMENT_CLASS_AT(ABlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 98);

// @baa 0x00772f00
// @baa 0x00772f90
IMPLEMENT_CLASS_AT(ADynamicBlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 110);

// @baa 0x00772ff0
// @baa 0x00773050
IMPLEMENT_CLASS_AT(ACullDistanceVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 115);

// @baa 0x007730c0
// @baa 0x00773120
IMPLEMENT_CLASS_AT(ALevelStreamingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 113);

// @baa 0x007731a0
// @baa 0x007731d0
IMPLEMENT_CLASS_AT(APhysicsVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 92);

#define VF(n) virtual void v##n(){}
struct S {
    VF(0) VF(1) VF(2) VF(3) VF(4) VF(5) VF(6) VF(7) VF(8) VF(9)
    VF(10) VF(11) VF(12) VF(13) VF(14) VF(15) VF(16) VF(17) VF(18) VF(19)
    VF(20) VF(21) VF(22) VF(23) VF(24) VF(25) VF(26) VF(27) VF(28) VF(29)
    VF(30) VF(31) VF(32) VF(33) VF(34) VF(35) VF(36) VF(37) VF(38) VF(39)
    VF(40) VF(41) VF(42) VF(43) VF(44) VF(45) VF(46) VF(47) VF(48) VF(49)
    VF(50) VF(51) VF(52) VF(53) VF(54) VF(55) VF(56) VF(57) VF(58) VF(59)
    VF(60) VF(61) VF(62) VF(63) VF(64) VF(65) VF(66) VF(67) VF(68) VF(69)
    VF(70) VF(71) VF(72) VF(73) VF(74) VF(75) VF(76) VF(77) VF(78) VF(79)
    VF(80) VF(81) VF(82) VF(83) VF(84) VF(85) VF(86) VF(87) VF(88) VF(89)
    VF(90) VF(91) VF(92) VF(93) VF(94) VF(95) VF(96) VF(97) VF(98) VF(99)
    void sub_00773230() { this->v78(); }
};

// @baa 0x00773230
__declspec(noinline) void ref_sink(S* p)
{
    p->sub_00773230();
}

// @baa 0x00773240
// @baa 0x007732d0
IMPLEMENT_CLASS_AT(ADefaultPhysicsVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 95);

// @baa 0x00773330
// @baa 0x00773390
float AGravityVolume::GetGravityZ(void) { return *(float*)((char*)this + 540); }

// @baa 0x007733a0
IMPLEMENT_CLASS_AT(AGravityVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 94);

// @baa 0x00773400
// @baa 0x00773460
IMPLEMENT_CLASS_AT(ALadderVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 96);

// @baa 0x007734c0
// @baa 0x00773520
IMPLEMENT_CLASS_AT(AWaterVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 93);

// @baa 0x00773580
// @baa 0x007735e0
IMPLEMENT_CLASS_AT(ATriggerVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 107);

// @baa 0x00773640
// @baa 0x00773670
AController::AController()
{
    DestinationPosition.Base = 0;
    DestinationPosition.Position.X = 0.0f;
    DestinationPosition.Position.Y = 0.0f;
    DestinationPosition.Position.Z = 0.0f;
    FocalPosition.Position.X = 0.0f;
    FocalPosition.Base = 0;
    FocalPosition.Position.Y = 0.0f;
    FocalPosition.Position.Z = 0.0f;
    AdjustPosition.Base = 0;
    AdjustPosition.Position.X = 0.0f;
    AdjustPosition.Position.Y = 0.0f;
    AdjustPosition.Position.Z = 0.0f;
}

#define D(n) virtual DWORD d##n();
struct C_007736f0 {
    D(1) D(2) D(3) D(4) D(5) D(6) D(7) D(8) D(9) D(10) D(11) D(12) D(13) D(14) D(15) D(16) D(17) D(18) D(19) D(20) D(21) D(22) D(23) D(24) D(25) D(26) D(27) D(28) D(29) D(30) D(31) D(32) D(33) D(34) D(35) D(36) D(37) D(38) D(39) D(40) D(41) D(42) D(43) D(44) D(45) D(46) D(47) D(48) D(49) D(50) D(51) D(52) D(53) D(54) D(55) D(56) D(57) D(58) D(59) D(60) D(61) D(62) D(63) D(64) D(65) D(66) D(67) D(68) D(69) D(70) D(71) D(72) D(73) D(74) D(75) D(76) D(77) D(78) D(79) D(80) D(81) D(82) D(83) D(84) D(85) D(86) D(87) D(88) D(89) D(90) D(91) D(92) D(93) D(94) D(95) D(96) D(97) D(98) D(99) D(100) D(101) D(102) D(103) D(104) D(105) D(106) D(107) D(108) D(109) D(110) D(111) D(112) D(113) D(114) D(115) D(116) D(117) D(118) D(119) D(120) D(121) D(122) D(123) D(124) D(125) D(126) D(127) D(128) D(129) D(130) D(131) D(132) D(133) D(134) D(135) D(136) D(137) D(138) D(139) D(140) D(141) D(142) D(143) D(144) D(145) D(146) D(147) D(148) D(149) D(150) D(151) D(152) D(153) D(154) D(155) D(156) D(157) D(158) D(159) D(160) D(161) D(162) D(163) D(164) D(165) D(166) D(167) D(168) D(169) D(170) D(171) D(172) D(173) D(174) D(175) D(176) D(177) D(178) D(179) D(180) D(181) D(182) D(183) D(184) D(185) D(186) D(187) D(188) D(189) D(190) D(191) D(192) D(193) D(194) D(195) D(196) D(197) D(198) D(199) D(200) D(201) D(202) D(203) D(204) D(205) D(206) D(207) D(208) D(209) D(210) D(211) D(212) D(213) D(214) D(215) D(216) D(217) D(218) D(219) D(220) D(221) D(222)
    virtual DWORD sub_007736f0();
};

// @baa 0x007736f0
DWORD C_007736f0::sub_007736f0()
{
    return d222();
}

int sub_005c7a70(...);

// @baa 0x00773930
IMPLEMENT_CLASS_AT(ADroppedPickup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 79);

// @baa 0x00773990
// @baa 0x007739f0
IMPLEMENT_CLASS_AT(AEmitterPool, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 116);

// @baa 0x00773c50
IMPLEMENT_CLASS_AT(ANavigationPoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 62);

// @baa 0x00773d10
int ANavigationPoint::vf_35c(int a0, int a1) { return 0; }

// @baa 0x00773d20
int ANavigationPoint::vf_360(int a0) { return 1; }

// @baa 0x00773d30
UClass* ANavigationPoint::GetReachSpecClass(ANavigationPoint* a0, UClass* a1) { return a1; }

// @baa 0x00773d50
int ANavigationPoint::vf_374(int a0) { return 1; }

// @baa 0x00773d60
void* ANavigationPoint::vf_384() { return 0; }

// @baa 0x00773d70
int ANavigationPoint::vf_398(int a0) { return 0; }

// @baa 0x00773d80
ANSICHAR * ANavigationPoint::vf_32c() { return (char*)this + 600; }

// @baa 0x00773d90
// @baa 0x00773e40
IMPLEMENT_CLASS_AT(ADoorMarker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 109);

// @baa 0x00773ea0
// @baa 0x00773ed0
IMPLEMENT_CLASS_AT(ALadder, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 87);

// @baa 0x00773f30
// @baa 0x00773fe0
IMPLEMENT_CLASS_AT(AAutoLadder, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 99);

// @baa 0x00774040
// @baa 0x007740b0
IMPLEMENT_CLASS_AT(ALiftCenter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 103);

// @baa 0x00774110
// @baa 0x00774180
IMPLEMENT_CLASS_AT(ALiftExit, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 104);

// @baa 0x007741e0
// @baa 0x00774250
IMPLEMENT_CLASS_AT(AObjective, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 101);

// @baa 0x007742b0
// @baa 0x007742e0
IMPLEMENT_CLASS_AT(APathNode, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 61);

// @baa 0x00774340
// @baa 0x007743f0
IMPLEMENT_CLASS_AT(AAirNode, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 125);

// @baa 0x00774450
// @baa 0x007744c0
IMPLEMENT_CLASS_AT(AVolumePathNode, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 108);

// @baa 0x00774520
// @baa 0x00774590
void* APickupFactory::vf_384() { return this; }

// @baa 0x007745a0
IMPLEMENT_CLASS_AT(APickupFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 70);

// @baa 0x00774600
// @baa 0x00774670
IMPLEMENT_CLASS_AT(APlayerStart, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 66);

// @baa 0x007746d0
// @baa 0x00774740
IMPLEMENT_CLASS_AT(APortalMarker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 111);

// @baa 0x007747a0
// @baa 0x00774810
IMPLEMENT_CLASS_AT(ATeleporter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 65);

// @baa 0x00774880
// @baa 0x007748e0
void AGameInfo::vf_378(int a0, int a1) {  }

// @baa 0x00774a70
IMPLEMENT_CLASS_AT(AGameInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 47);

// @baa 0x00774b30
IMPLEMENT_CLASS_AT(AInternetInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 77);

// @baa 0x00774e10
IMPLEMENT_CLASS_AT(AReplicationInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 75);

// @baa 0x00775240
IMPLEMENT_CLASS_AT(AZoneInfo, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 48);

// @baa 0x00775270
IMPLEMENT_CLASS_AT(AInventory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 68);

// @baa 0x00775300
// @baa 0x00775390
IMPLEMENT_CLASS_AT(AWeapon, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 44);

// @baa 0x00775480
// @baa 0x007754e0
IMPLEMENT_CLASS_AT(AInventoryManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 69);

// @baa 0x00775550
// @baa 0x00775580
IMPLEMENT_CLASS_AT(AKeypoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 67);

// @baa 0x00775610
// @baa 0x00775670
IMPLEMENT_CLASS_AT(AClipMarker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 42);

// @baa 0x007756d0
// @baa 0x00775730
IMPLEMENT_CLASS_AT(APolyMarker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 43);

// @baa 0x00775790
// @baa 0x007757c0
IMPLEMENT_CLASS_AT(ALight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 33);

// @baa 0x00775820
int ALight::vf_364(void) { return 0; }

// @baa 0x00775830
// @baa 0x00775890
IMPLEMENT_CLASS_AT(ADirectionalLight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 34);

// @baa 0x007758f0
// @baa 0x00775980
int ADirectionalLightToggleable::vf_364(void) { return 1; }

// @baa 0x00775990
IMPLEMENT_CLASS_AT(ADirectionalLightToggleable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 35);

// @baa 0x007759f0
// @baa 0x00775a20
IMPLEMENT_CLASS_AT(APointLight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 36);

// @baa 0x00775a80
// @baa 0x00775b10
int APointLightMovable::vf_364(void) { return 1; }

// @baa 0x00775b20
IMPLEMENT_CLASS_AT(APointLightMovable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 37);

// @baa 0x00775b80
// @baa 0x00775be0
int APointLightToggleable::vf_364(void) { return 1; }

// @baa 0x00775bf0
IMPLEMENT_CLASS_AT(APointLightToggleable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 38);

// @baa 0x00775c50
// @baa 0x00775c80
IMPLEMENT_CLASS_AT(ASkyLight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 117);

// @baa 0x00775d10
// @baa 0x00775d70
int ASkyLightToggleable::vf_364(void) { return 1; }

// @baa 0x00775d80
IMPLEMENT_CLASS_AT(ASkyLightToggleable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 118);

// @baa 0x00775de0
// @baa 0x00775e10
IMPLEMENT_CLASS_AT(ASpotLight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 39);

// @baa 0x00775e70
// @baa 0x00775f00
IMPLEMENT_CLASS_AT(ASpotLightMovable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 40);

// @baa 0x00775f60
// @baa 0x00775fc0
int ASpotLightToggleable::vf_364(void) { return 1; }

// @baa 0x00775fd0
IMPLEMENT_CLASS_AT(ASpotLightToggleable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 41);

// @baa 0x00776030
// @baa 0x00776090
IMPLEMENT_CLASS_AT(ANote, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 45);

// @baa 0x00776100
// @baa 0x00776430
void AScout::vf_47c(int a0, int a1) {  }

// @baa 0x00776470
int AScout::vf_484(void) { return *(int*)((char*)this + 988); }

// @baa 0x00776480
int AScout::vf_4a8(int a0) { return 0; }

// @baa 0x00776490
int AScout::sub_00776490(void) { return *(int*)((char*)this + 4); }

// @baa 0x00776620
IMPLEMENT_CLASS_AT(AScout, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 63);

// @baa 0x00776690
// @baa 0x007766f0
IMPLEMENT_CLASS_AT(AVehicle, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 86);

// @baa 0x00776750
// @baa 0x007767b0
void* AProjectile::vf_300() { return this; }

// @baa 0x007767c0
void* AProjectile::vf_2fc() { return this; }

// @baa 0x007767d0
IMPLEMENT_CLASS_AT(AProjectile, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 64);

// @baa 0x00776830
// @baa 0x00776890
IMPLEMENT_CLASS_AT(ATrigger, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 71);

// @baa 0x00776970
IMPLEMENT_CLASS_AT(AAIController, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 81);

// @baa 0x007769d0
// @baa 0x00776a00
IMPLEMENT_CLASS_AT(USlotToSlotReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 54);

struct C_00778110 {
    int sub_00778110();
};

// @baa 0x00778110
int C_00778110::sub_00778110(void)
{
    int param_1 = (int)this;

  sub_0076de20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00778270 {
    int sub_00778270(undefined4, undefined4);
    int sub_00772d00(int, int);
};

// @baa 0x00778270
int C_00778270::sub_00778270(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00778270 *)(this))->sub_00772d00(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00778290 {
    int sub_00778290(undefined4, undefined4);
    int sub_00772d80(int, int);
};

// @baa 0x00778290
int C_00778290::sub_00778290(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00778290 *)(this))->sub_00772d80(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_007782b0 {
    int sub_007782b0();
};

// @baa 0x007782b0
int C_007782b0::sub_007782b0(void)
{
    int param_1 = (int)this;

  sub_0076e060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007782d0 {
    int sub_007782d0();
};

// @baa 0x007782d0
int C_007782d0::sub_007782d0(void)
{
    int param_1 = (int)this;

  sub_0076e0c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_007782f0 {
    int sub_007782f0();
};

// @baa 0x007782f0
int C_007782f0::sub_007782f0(void)
{
    int param_1 = (int)this;

  sub_0076e120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00778310 {
    int sub_00778310();
};

// @baa 0x00778310
int C_00778310::sub_00778310(void)
{
    int param_1 = (int)this;

  sub_0076e180();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00778330 {
    int sub_00778330();
};

// @baa 0x00778330
int C_00778330::sub_00778330(void)
{
    int param_1 = (int)this;

  sub_0076e1e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_007776e0();
// @baa 0x00778350
void sub_00778350(void) { sub_007776e0(); }

void sub_00777750();
// @baa 0x00778360
void sub_00778360(void) { sub_00777750(); }

void sub_007777c0();
// @baa 0x00778370
void sub_00778370(void) { sub_007777c0(); }

void sub_00777f10();
// @baa 0x0077c130
void sub_0077c130(void) { sub_00777f10(); }

void sub_00777f80();
// @baa 0x0077c140
void sub_0077c140(void) { sub_00777f80(); }

struct C_0077c150 { C_0077c150* sub_0077c150(void); };

// @baa 0x0077c150
C_0077c150* C_0077c150::sub_0077c150(void) { return this; }

struct C_0077c930 {
    int sub_0077c930();
};

// @baa 0x0077c930
int C_0077c930::sub_0077c930(void)
{
    int param_1 = (int)this;

  sub_0076de20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return param_1;
}

struct C_0077ca10 {
    int sub_0077ca10();
};

// @baa 0x0077ca10
int C_0077ca10::sub_0077ca10(void)
{
    int param_1 = (int)this;

  sub_0076e060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0077ca30 {
    int sub_0077ca30();
};

// @baa 0x0077ca30
int C_0077ca30::sub_0077ca30(void)
{
    int param_1 = (int)this;

  sub_0076e0c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0077ca50 {
    int sub_0077ca50();
};

// @baa 0x0077ca50
int C_0077ca50::sub_0077ca50(void)
{
    int param_1 = (int)this;

  sub_0076e120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0077ca70 {
    int sub_0077ca70();
};

// @baa 0x0077ca70
int C_0077ca70::sub_0077ca70(void)
{
    int param_1 = (int)this;

  sub_0076e180();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0077ca90 {
    int sub_0077ca90();
};

// @baa 0x0077ca90
int C_0077ca90::sub_0077ca90(void)
{
    int param_1 = (int)this;

  sub_0076e1e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0077cab0
void sub_0077cab0(void) { sub_007776e0(); }

// @baa 0x0077cac0
void sub_0077cac0(void) { sub_00777750(); }

// @baa 0x0077cad0
void sub_0077cad0(void) { sub_007777c0(); }

// @baa 0x0077cc70
APlayerController* APlayerController::GetAPlayerController() { return this; }

// @baa 0x0077cc80
UBOOL APlayerController::ShouldCheckVisibilityOf(AController* C) { return FALSE; }

// @baa 0x0077cc90
void APlayerController::vf_468(int a0, int a1, int a2) {  }

int sub_0077cae0(void);
// @baa 0x0077cca0
undefined4 APlayerController::sub_0077cca0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0077cae0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x5b0);
  }
  return param_1;
}

int sub_0077ccd0(void);
extern undefined * g_01f0ead8;
// @baa 0x0077cd70
undefined4 * APlayerController::sub_0077cd70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0077ccd0();
  *param_1 = (undefined4)(&g_01f0ead8);
  return param_1;
}

// @baa 0x0077cd90
IMPLEMENT_CLASS_AT(ADebugCameraController, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnActor.cpp", 84);

// @baa 0x0077ce60
// @baa 0x0077cf70
bool ALight::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077cfb0
// @baa 0x0077d0c0
bool ANote::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077d100
// @baa 0x0077d210
bool ANavigationPoint::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077d250
// @baa 0x0077d360
bool AProjectile::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077d3a0
// @baa 0x0077d4b0
bool AKeypoint::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077d4f0
// @baa 0x0077d600
bool AInventory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077d640
// @baa 0x0077d750
bool AInventoryManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077d790
// @baa 0x0077d8a0
bool ATrigger::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077db80
// @baa 0x0077dc90
bool ADroppedPickup::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077df70
// @baa 0x0077e080
bool AEmitterPool::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077e340
void sub_0077e340(void) { sub_00777f80(); }

struct C_0077e470 {
    int sub_0077e470();
};

// @baa 0x0077e470
int C_0077e470::sub_0077e470(void)
{
    int param_1 = (int)this;

  sub_0076e060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0077e490 {
    int sub_0077e490();
};

// @baa 0x0077e490
int C_0077e490::sub_0077e490(void)
{
    int param_1 = (int)this;

  sub_0076e0c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0077e4b0 {
    int sub_0077e4b0();
};

// @baa 0x0077e4b0
int C_0077e4b0::sub_0077e4b0(void)
{
    int param_1 = (int)this;

  sub_0076e120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0077e4d0 {
    int sub_0077e4d0();
};

// @baa 0x0077e4d0
int C_0077e4d0::sub_0077e4d0(void)
{
    int param_1 = (int)this;

  sub_0076e180();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0077e4f0 {
    int sub_0077e4f0();
};

// @baa 0x0077e4f0
int C_0077e4f0::sub_0077e4f0(void)
{
    int param_1 = (int)this;

  sub_0076e1e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_007566d0(void);
int sub_00779070(...);
int sub_0077e55f(...);
extern undefined4 g_026b3b58;
// @baa 0x0077e510
undefined4 AActor::sub_0077e510(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (g_026b3b58 == 0) {
      g_026b3b58 = sub_00779070(L"Engine");
      sub_007566d0();
      if (g_026b3b58 == 0) {
sub_0077e55f:
        return *(undefined4 *)(param_1 + 0x2c);
      }
    }
    for (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x28); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x30)) {
      if (iVar1 == g_026b3b58) goto sub_0077e55f;
    }
  }
  return 0;
}

// @baa 0x0077e570
void sub_0077e570(void) { sub_007776e0(); }

// @baa 0x0077e580
void sub_0077e580(void) { sub_00777750(); }

// @baa 0x0077e590
void sub_0077e590(void) { sub_007777c0(); }

int sub_0077adb0(...);
int sub_0077de20(void);
extern undefined4 g_026b3c3c;
// @baa 0x0077e660
int sub_0077e660(void)
{
  if (g_026b3c3c == 0) {
    g_026b3c3c = sub_0077adb0(L"Engine");
    sub_0077de20();
  }
  return g_026b3c3c;
}

int sub_0077a9f0(...);
int sub_0077dcd0(void);
extern undefined4 g_026b3c18;
// @baa 0x0077e690
int sub_0077e690(void)
{
  if (g_026b3c18 == 0) {
    g_026b3c18 = sub_0077a9f0(L"Engine");
    sub_0077dcd0();
  }
  return g_026b3c18;
}

// @baa 0x0077e7e0
// @baa 0x0077e8f0
bool ADirectionalLight::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077e930
// @baa 0x0077ea80
// @baa 0x0077eb90
bool ASpotLight::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077ebd0
// @baa 0x0077ece0
bool AClipMarker::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077ed20
// @baa 0x0077ee30
bool APolyMarker::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077ee70
// @baa 0x0077ef80
bool AWeapon::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077efc0
// @baa 0x0077f0d0
bool AGameInfo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077f110
// @baa 0x0077f220
bool AZoneInfo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077f260
// @baa 0x0077f370
bool APathNode::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077f3b0
// @baa 0x0077f4c0
bool ATeleporter::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077f500
// @baa 0x0077f610
bool APlayerStart::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077f650
// @baa 0x0077f760
bool APickupFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077f7a0
// @baa 0x0077f8b0
bool AReplicationInfo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077f8f0
// @baa 0x0077fa00
bool AInternetInfo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0077fa40
// @baa 0x0077fb50
bool AAIController::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
