// UnEngine.cpp: 29 functions
// Placed here by: callers 9, file 7, neighbours 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00c8f970
IMPLEMENT_CLASS_AT(UGameEngine, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnEngine.cpp", 236);

// @baa 0x00c8f980
int sub_00c8f980(int a0, int a1) { return a1; }

struct C {
    void sub_00c8f990();
};

// @baa 0x00c8f990
void C::sub_00c8f990(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffff9 | 8;
  return;
}

struct C_00c8f9a0 {
    void sub_00c8f9a0();
};

// @baa 0x00c8f9a0
void C_00c8f9a0::sub_00c8f9a0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffff9 | 0x19;
  return;
}

// @baa 0x00c8f9b0
int sub_00c8f9b0(int a0, int a1) { return a1; }

struct C_00c8f9c0 {
    void sub_00c8f9c0();
};

// @baa 0x00c8f9c0
void C_00c8f9c0::sub_00c8f9c0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffff9 | 8;
  return;
}

struct C_00c8f9d0 {
    void sub_00c8f9d0();
};

// @baa 0x00c8f9d0
void C_00c8f9d0::sub_00c8f9d0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffff9 | 0x19;
  return;
}

// @baa 0x00cb0250
void sub_00cb0250(void) {  }

// @baa 0x00cb21a0
IMPLEMENT_CLASS_AT(UDebugManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnEngine.cpp", 237);

// @baa 0x00cb40c0
// @baa 0x00cb4180
// @baa 0x00cc0510
IMPLEMENT_CLASS_AT(USaveGameSummary, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnEngine.cpp", 238);

// @baa 0x00cc4620
// @baa 0x00cc5a10
IMPLEMENT_CLASS_AT(UObjectReferencer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnEngine.cpp", 239);

// @baa 0x00cc7830
// @baa 0x00cd01b0
IMPLEMENT_CLASS_AT(UServerCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnEngine.cpp", 2189);

// @baa 0x00cd01c0
IMPLEMENT_CLASS_AT(USmokeTestCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnEngine.cpp", 2233);

// @baa 0x00cd1410
// @baa 0x00cd14d0
// @baa 0x00cdb950
IMPLEMENT_CLASS_AT(UEngine, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnEngine.cpp", 235);

// @baa 0x00cafcb0

// @baa 0x00cafe30

// @baa 0x00caff40
int UDebugManager::vf_000(void) { return 1; }

// @baa 0x00caff50
bool UDebugManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00caff90

// @baa 0x00cb00f0

// @baa 0x00cb0200
int UObjectReferencer::vf_000(void) { return 1; }

// @baa 0x00cb0210
bool UObjectReferencer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern undefined4 g_026c3cdc;
// @baa 0x00cb42b0
bool sub_00cb42b0(void)
{
  return 1 < *(int *)(g_026c3cdc + 0x328);
}
