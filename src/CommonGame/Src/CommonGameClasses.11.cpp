// CommonGameClasses.cpp (part 11 of 12): 16 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005c7a20(void);
extern undefined * g_022e0a10;
// @baa 0x01533770
undefined4 * UObject::sub_01533770(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e0a10);
  return param_1;
}

extern undefined * g_022e0b20;
// @baa 0x01533840
undefined4 * UObject::sub_01533840(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e0b20);
  return param_1;
}

extern undefined * g_022e0cc0;
// @baa 0x01534ca0
undefined4 * UObject::sub_01534ca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e0cc0);
  return param_1;
}

// @baa 0x0150f010
IMPLEMENT_CLASS_AT(URScriptConversationFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 40);

// @baa 0x0150f120
int URScriptConversationFactoryNew::vf_000(void) { return 1; }

// @baa 0x0150f130
bool URScriptConversationFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0150f2c0
int sub_0150f2c0(void) { return 1; }

int sub_005fbe20(void);
int sub_0060f890(...);
extern undefined4 g_026a4b38;
// @baa 0x0150f2d0
bool URScriptConversationFactoryNew::sub_0150f2d0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x30);
  if (g_026a4b38 == 0) {
    g_026a4b38 = sub_0060f890(L"Core");
    sub_005fbe20();
  }
  return iVar1 != g_026a4b38;
}

extern undefined4 g_026c3cdc;
// @baa 0x0150f350
INT ARGameInfoBase::vf_37c() {
  return g_026c3cdc;
}

extern undefined4 g_026cbfb4;
// @baa 0x0150f3f0
INT ARGameInfoBase::vf_3a8() {
  return g_026cbfb4;
}

// @baa 0x0150f400
void ARDebugMenu::vf_360(void) {  }

extern INT g_026e0b78;
// @baa 0x0150f470
INT ARDebugMenu::vf_384(INT Value)
{
    g_026e0b78 = Value;
    return Value;
}

// @baa 0x0150f500
void ARPlayerControllerBase::vf_478(void) {  }

extern undefined4 g_025da74c;
// @baa 0x0150f510
void sub_0150f510(void)
{
  g_025da74c = (uint)(g_025da74c == 0);
  return;
}

// @baa 0x0150f530
void ARDebugMenu::vf_378(void) {  }

// @baa 0x01537f40
IMPLEMENT_CLASS_AT(URPlayerInputBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 25);
