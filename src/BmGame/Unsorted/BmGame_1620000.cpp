// BmGame_1620000.cpp (part 1 of 18): 131 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01621a20
void __stdcall sub_01621a20(int a0, int a1) {  }

// @baa 0x01621a30
void __stdcall sub_01621a30(int a0, int a1) {  }

// @baa 0x01621a40
void __stdcall sub_01621a40(int a0, int a1) {  }

// @baa 0x01621a50
void __stdcall sub_01621a50(int a0, int a1) {  }

// @baa 0x01621a60
void __stdcall sub_01621a60(int a0, int a1) {  }

struct C {
    undefined4 sub_01621a70(byte);
    int sub_0040fcc0();
};

int sub_0053dfa0(...);
// @baa 0x01621a70
undefined4 C::sub_01621a70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C *)(((char *)this + 0x1c)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_01621be0 { void sub_0040fcc0(); };

struct C_01621be0 { char pad[8]; M_01621be0 m; void sub_01621be0(); };

// @baa 0x01621be0
void C_01621be0::sub_01621be0() { m.sub_0040fcc0(); }

void sub_01621050();
// @baa 0x01621bf0
void sub_01621bf0(void) { sub_01621050(); }

void sub_016210b0();
// @baa 0x01621c00
void sub_01621c00(void) { sub_016210b0(); }

void sub_01621110();
// @baa 0x01621c10
void sub_01621c10(void) { sub_01621110(); }

void sub_016211b0();
// @baa 0x01621c20
void sub_01621c20(void) { sub_016211b0(); }

void sub_01621210();
// @baa 0x01621c30
void sub_01621c30(void) { sub_01621210(); }

void sub_01621270();
// @baa 0x01621c40
void sub_01621c40(void) { sub_01621270(); }

void sub_016212d0();
// @baa 0x01621c50
void sub_01621c50(void) { sub_016212d0(); }

void sub_01621410();
// @baa 0x01621c60
void sub_01621c60(void) { sub_01621410(); }

void sub_01621550();
// @baa 0x01621c70
void sub_01621c70(void) { sub_01621550(); }

void sub_016215b0();
// @baa 0x01621c80
void sub_01621c80(void) { sub_016215b0(); }

// @baa 0x01621cc0
IMPLEMENT_CLASS_AT(URBMRouterPath, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 967);

// @baa 0x01621d40
struct C_01621d60 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_01621d60& sub_01621d60(int Arg);
};

// @baa 0x01621d60
C_01621d60& C_01621d60::sub_01621d60(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

// @baa 0x01621d70
IMPLEMENT_CLASS_AT(URIdleConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 8);

// @baa 0x01621df0
int sub_005c7a20(void);
extern undefined * g_02344c08;
// @baa 0x01621e20
undefined4 * UObject::sub_01621e20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02344c08);
  return param_1;
}

void sub_016217d0();
// @baa 0x01621e40
void sub_01621e40(void) { sub_016217d0(); }

void sub_01621830();
// @baa 0x01622dc0
void sub_01622dc0(void) { sub_01621830(); }

struct C_01624560 {
    undefined4 sub_01624560();
};

// @baa 0x01624560
undefined4 C_01624560::sub_01624560(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_01624570 { void* Data; int Num; int Max; void sub_01624570(); };

// @baa 0x01624570
void C_01624570::sub_01624570() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_016245d0 { void sub_00d29cd0(int); C_016245d0 *sub_016245d0(int); };

// @baa 0x016245d0
C_016245d0 *C_016245d0::sub_016245d0(int a) { sub_00d29cd0(a); return this; }

int sub_01622dd0(void);
// @baa 0x01624650
undefined4 UObject::sub_01624650(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01622dd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_01621aa0(void);
// @baa 0x01624670
undefined4 UObject::sub_01624670(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01621aa0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_01621b00(void);
// @baa 0x01624690
undefined4 UObject::sub_01624690(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01621b00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_01621b60(void);
// @baa 0x016246b0
undefined4 UObject::sub_016246b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01621b60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view {
    int sub_0040fcc0();
};

// @baa 0x016246d0
undefined4 UObject::sub_016246d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(((char *)this + 8)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_02344f68;
// @baa 0x01624700
undefined4 * UObject::sub_01624700(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02344f68);
  return param_1;
}

// @baa 0x01624720
IMPLEMENT_CLASS_AT(UComparisonListSharedDataCache, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 2102);

// @baa 0x016247d0
IMPLEMENT_CLASS_AT(URPathGateComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 12);

// @baa 0x016248b0
IMPLEMENT_CLASS_AT(URBMReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 13);

// @baa 0x01624910
// @baa 0x01624a10
IMPLEMENT_CLASS_AT(URSimpleIdleConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 9);

// @baa 0x01624b00
IMPLEMENT_CLASS_AT(URIdleTransitionConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 10);

// @baa 0x01624bc0
IMPLEMENT_CLASS_AT(URIdleWithDeathConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 12);

// @baa 0x01624c70
IMPLEMENT_CLASS_AT(URPairedIdleConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RIdleConfig.cpp", 11);

struct C_016258f0 { C_016258f0* sub_016258f0(void); };

// @baa 0x016258f0
C_016258f0* C_016258f0::sub_016258f0(void) { return this; }

void sub_01624350();
// @baa 0x01625900
void sub_01625900(void) { sub_01624350(); }

void sub_016244a0();
// @baa 0x01625990
void sub_01625990(void) { sub_016244a0(); }

void sub_01624500();
// @baa 0x016259a0
void sub_016259a0(void) { sub_01624500(); }

void sub_01624280();
// @baa 0x016259b0
void sub_016259b0(void) { sub_01624280(); }

void sub_01624570();
// @baa 0x016259c0
void sub_016259c0(void) { sub_01624570(); }

int sub_01612f90(void);
int sub_01623210(...);
extern undefined4 g_026e1a20;
// @baa 0x016259d0
int sub_016259d0(void)
{
  if (g_026e1a20 == 0) {
    g_026e1a20 = sub_01623210(L"BmGame");
    sub_01612f90();
  }
  return g_026e1a20;
}

struct C_01626060 { void sub_00d29cd0(int); C_01626060 *sub_01626060(int); };

// @baa 0x01626060
C_01626060 *C_01626060::sub_01626060(int a) { sub_00d29cd0(a); return this; }

struct C_01626080 { C_01626080* sub_01626080(void); };

// @baa 0x01626080
C_01626080* C_01626080::sub_01626080(void) { return this; }

struct C_016262a0 { C_016262a0* sub_016262a0(void); };

// @baa 0x016262a0
C_016262a0* C_016262a0::sub_016262a0(void) { return this; }

struct C_016262b0 { C_016262b0* sub_016262b0(void); };

// @baa 0x016262b0
C_016262b0* C_016262b0::sub_016262b0(void) { return this; }

struct C_016262c0 { C_016262c0* sub_016262c0(void); };

// @baa 0x016262c0
C_016262c0* C_016262c0::sub_016262c0(void) { return this; }

int sub_01611750(void);
int sub_01624f00(...);
extern undefined4 g_026e19e8;
// @baa 0x01626a00
int sub_01626a00(void)
{
  if (g_026e19e8 == 0) {
    g_026e19e8 = sub_01624f00(L"BmGame");
    sub_01611750();
  }
  return g_026e19e8;
}

void sub_01626090();
// @baa 0x016290a0
void sub_016290a0(void) { sub_01626090(); }

int sub_01625c30(...);
int sub_01625cf0(void);
extern undefined4 g_026e1a24;
// @baa 0x016290b0
int sub_016290b0(void)
{
  if (g_026e1a24 == 0) {
    g_026e1a24 = sub_01625c30(L"BmGame");
    sub_01625cf0();
  }
  return g_026e1a24;
}

int sub_0160e9f0(void);
int sub_01626ab0(...);
extern undefined4 g_026e1994;
// @baa 0x01629870
int sub_01629870(void)
{
  if (g_026e1994 == 0) {
    g_026e1994 = sub_01626ab0(L"BmGame");
    sub_0160e9f0();
  }
  return g_026e1994;
}

int sub_01626df0(...);
int sub_01626eb0(void);
extern undefined4 g_026e19ec;
// @baa 0x016298a0
int sub_016298a0(void)
{
  if (g_026e19ec == 0) {
    g_026e19ec = sub_01626df0(L"BmGame");
    sub_01626eb0();
  }
  return g_026e19ec;
}

// @baa 0x0162ac80
// @baa 0x0162ad90
bool URIdleTransitionConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0162add0
// @baa 0x0162aee0
bool URPairedIdleConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0162af20
// @baa 0x0162b030
bool URIdleWithDeathConfig::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_view_0162b260 {
    int sub_01628aa0(int);
};

// @baa 0x0162b260
void URIdleWithDeathConfig::vf_11c(int param_2)
{
    int param_1 = (int)this;
  ((C_view_0162b260 *)(this))->sub_01628aa0(param_2);
  *(int *)(param_1 + 200) = *(int *)(param_2 + 0x1dc) + *(int *)(param_2 + 0x204);
  *(int *)(param_2 + 0x204) = *(int *)(param_2 + 0x204) + 1;
  return;
}

void sub_01629230();
// @baa 0x0162b480
void sub_0162b480(void) { sub_01629230(); }

void sub_01629300();
// @baa 0x0162b490
void sub_0162b490(void) { sub_01629300(); }

void sub_016293d0();
// @baa 0x0162b4a0
void sub_0162b4a0(void) { sub_016293d0(); }

void sub_016294b0();
// @baa 0x0162b4b0
void sub_0162b4b0(void) { sub_016294b0(); }

void sub_01629580();
// @baa 0x0162b4c0
void sub_0162b4c0(void) { sub_01629580(); }

int sub_01625e40(...);
int sub_016290e0(void);
extern undefined4 g_026e1a28;
// @baa 0x0162b4d0
int sub_0162b4d0(void)
{
  if (g_026e1a28 == 0) {
    g_026e1a28 = sub_01625e40(L"BmGame");
    sub_016290e0();
  }
  return g_026e1a28;
}

struct C_0162b790 { C_0162b790* sub_0162b790(void); };

// @baa 0x0162b790
C_0162b790* C_0162b790::sub_0162b790(void) { return this; }

struct C_0162b7a0 { C_0162b7a0* sub_0162b7a0(void); };

// @baa 0x0162b7a0
C_0162b7a0* C_0162b7a0::sub_0162b7a0(void) { return this; }

struct C_0162b7b0 { C_0162b7b0* sub_0162b7b0(void); };

// @baa 0x0162b7b0
C_0162b7b0* C_0162b7b0::sub_0162b7b0(void) { return this; }

struct C_0162b7c0 { C_0162b7c0* sub_0162b7c0(void); };

// @baa 0x0162b7c0
C_0162b7c0* C_0162b7c0::sub_0162b7c0(void) { return this; }

struct C_0162b7d0 { C_0162b7d0* sub_0162b7d0(void); };

// @baa 0x0162b7d0
C_0162b7d0* C_0162b7d0::sub_0162b7d0(void) { return this; }

int sub_01629650(void);
// @baa 0x0162b7e0
undefined4 UObject::sub_0162b7e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01629650();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_016296b0(void);
// @baa 0x0162b800
undefined4 UObject::sub_0162b800(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_016296b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0162b850
IMPLEMENT_CLASS_AT(ARJokerTannoy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RJokerTannoy.cpp", 4);

// @baa 0x0162b8d0
// @baa 0x0162b940
IMPLEMENT_CLASS_AT(ARPathNode_DynamicFractureWall, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 14);

// @baa 0x0162b9a0
// @baa 0x0162ba10
IMPLEMENT_CLASS_AT(ARPathNode_Pontoon, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 3151);

// @baa 0x0162ba70
// @baa 0x0162bad0
IMPLEMENT_CLASS_AT(ARBMScout, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 11);

// @baa 0x0162bb30
// @baa 0x0162bb60
IMPLEMENT_CLASS_AT(ARBMRouter_DynamicObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 116);

// @baa 0x0162bbf0
// @baa 0x0162bc50
IMPLEMENT_CLASS_AT(ARBMRouter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 140);

// @baa 0x0162bcd0
// @baa 0x0162bd30
IMPLEMENT_CLASS_AT(ARBMRouter_NoPawn, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 133);

// @baa 0x0162bd90
// @baa 0x0162bdc0
IMPLEMENT_CLASS_AT(ARBMRouteRequest, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 1654);

// @baa 0x0162be20
// @baa 0x0162beb0
IMPLEMENT_CLASS_AT(ARBMRouteRequest_BuildComparisonList, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 2103);

// @baa 0x0162bf20
// @baa 0x0162bf50
IMPLEMENT_CLASS_AT(ARBMRouteRequest_FindShortestPath, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 1844);

// @baa 0x0162bfd0
// @baa 0x0162c060
IMPLEMENT_CLASS_AT(ARBMRouteRequest_FindShortestPathAvoidingLadder, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 2068);

// @baa 0x0162c0c0
// @baa 0x0162c120
IMPLEMENT_CLASS_AT(ARBMRouteRequest_FindSinglePath, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 1678);

// @baa 0x0162c180
// @baa 0x0162c1e0
IMPLEMENT_CLASS_AT(ARBMRouteRequest_HideOnCorner, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 2361);

// @baa 0x0162c250
// @baa 0x0162c2b0
IMPLEMENT_CLASS_AT(ARBMRouteRequest_NervousSearch, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 2474);

// @baa 0x0162c330
// @baa 0x0162c390
IMPLEMENT_CLASS_AT(ARBMRouteRequest_PerimeterBuilderWrapper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 3126);

// @baa 0x0162c3f0
// @baa 0x0162c450
IMPLEMENT_CLASS_AT(ARBMRouteRequest_RunAway, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 2995);

// @baa 0x0162c4c0
// @baa 0x0162c520
IMPLEMENT_CLASS_AT(ARBMRouteRequest_TerrifiedSearch, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 2752);

// @baa 0x0162c5a0
// @baa 0x0162c600
IMPLEMENT_CLASS_AT(ARBMRouterManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 16);

// @baa 0x0162c670
// @baa 0x0162c6d0
IMPLEMENT_CLASS_AT(ARPontoonBridgeManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmRouterClass.cpp", 17);

// @baa 0x0162d070
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 16);

// @baa 0x0162d110
// @baa 0x0162d250
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_CatchLedge, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 20);

// @baa 0x0162d2b0
// @baa 0x0162d320
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_ResonateObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 17);

// @baa 0x0162d380
// @baa 0x0162d3f0
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_SwingToVantagePoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 18);

