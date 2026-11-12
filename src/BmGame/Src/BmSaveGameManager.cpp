// BmSaveGameManager.cpp: 26 functions
// Placed here by: class 6, file 4, neighbours 3, callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0170a6b0
int sub_0170a6b0(int a0, int a1) { return a1; }

struct C {
    uint sub_0170a6c0();
};

// @baa 0x0170a6c0
uint C::sub_0170a6c0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x34) & 1;
}

int sub_005c7a20(void);
extern undefined * g_023c9990;
// @baa 0x0170a6d0
undefined4 * UObject::sub_0170a6d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023c9990);
  return param_1;
}

// @baa 0x0170a6f0
IMPLEMENT_CLASS_AT(URSaveGameManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSaveGameManager.cpp", 14);

// @baa 0x0170a750
// @baa 0x017189c0
// @baa 0x01718ad0
int URSaveGameManager::vf_000(void) { return 1; }

// @baa 0x01718ae0
bool URSaveGameManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0171a380
// @baa 0x0171afe0
// @baa 0x01723450
IMPLEMENT_CLASS_AT(URSeqVar_DDAIntValue, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSaveGameManager.cpp", 17);

// @baa 0x01725b50
// @baa 0x0172d810
IMPLEMENT_CLASS_AT(URPersistentData, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSaveGameManager.cpp", 15);

// @baa 0x0172e240
IMPLEMENT_CLASS_AT(URPersistentOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSaveGameManager.cpp", 16);

// @baa 0x0172f850
// @baa 0x0172f910

// @baa 0x01718b20

// @baa 0x01718c30
int URPersistentData::vf_000(void) { return 1; }

// @baa 0x01718c40
bool URPersistentData::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01718c80

// @baa 0x01718db0
bool URPersistentOptions::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01718df0

void sub_01729700();
// @baa 0x0172b130
void sub_0172b130(void) { sub_01729700(); }

extern undefined * g_023ca320;
// @baa 0x0172b150
undefined4 * UObject::sub_0172b150(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023ca320);
  return param_1;
}

extern undefined * g_023ca430;
// @baa 0x0172b3c0
undefined4 * UObject::sub_0172b3c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023ca430);
  return param_1;
}

const TCHAR* sub_0170a8d0();
const TCHAR* sub_0053f6c0();
// @baa 0x01718d90
INT URPersistentOptions::vf_000()
{
    return sub_0170a8d0 == sub_0053f6c0;
}
