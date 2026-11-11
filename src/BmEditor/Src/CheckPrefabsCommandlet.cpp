// CheckPrefabsCommandlet.cpp: 17 functions
// Placed here by: neighbours 10, class 6, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01758c30
IMPLEMENT_CLASS_AT(UCheckPrefabsCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmEditor\\Src\\CheckPrefabsCommandlet.cpp", 17);

// @baa 0x01758d40
int UCheckPrefabsCommandlet::vf_000(void) { return 1; }

// @baa 0x01758d50
bool UCheckPrefabsCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_0053dfa0(...);
int sub_006837e0(void);
// @baa 0x0175e240
undefined4 ULensFlare::sub_0175e240(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006837e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0175e260
undefined4 ULensFlare::sub_0175e260(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006837e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0175e280
undefined4 ULensFlare::sub_0175e280(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006837e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005c7a20(void);
extern undefined * g_023da940;
// @baa 0x0175e2a0
undefined4 * UObject::sub_0175e2a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023da940);
  return param_1;
}

// @baa 0x0175e2c0
IMPLEMENT_CLASS_AT(UChangeDashesToUnderscoresCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmEditor\\Src\\ConvertDashesToUnderscoresCommandlet.cpp", 162);

// @baa 0x0175e320
extern undefined * g_023daa58;
// @baa 0x0175e340
undefined4 * UObject::sub_0175e340(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023daa58);
  return param_1;
}

// @baa 0x0175e360
IMPLEMENT_CLASS_AT(UCheckMapsCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmEditor\\Src\\CheckMapsCommandlet.cpp", 31);

// @baa 0x0175e3c0
extern undefined * g_023dab70;
// @baa 0x0175e3e0
undefined4 * UObject::sub_0175e3e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023dab70);
  return param_1;
}

// @baa 0x0175e400
// @baa 0x0175e460
// @baa 0x0175eb50
// @baa 0x0175ec80
