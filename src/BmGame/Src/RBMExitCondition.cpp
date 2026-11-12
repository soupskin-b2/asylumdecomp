// RBMExitCondition.cpp: 9 functions
// Placed here by: callers 2, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x015fee60
IMPLEMENT_CLASS_AT(URBMExitCondition, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMExitCondition.cpp", 8);

// @baa 0x015fee80
IMPLEMENT_CLASS_AT(URBMExitConditionCombiner, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBMExitCondition.cpp", 9);

// @baa 0x01601240
// @baa 0x01601300

// @baa 0x015dec60

int sub_005c7a20(void);
extern undefined * g_0233c520;
// @baa 0x015fbd40
undefined4 * UObject::sub_015fbd40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0233c520);
  return param_1;
}

extern undefined * g_0233c6c8;
// @baa 0x015fbd60
undefined4 * UObject::sub_015fbd60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0233c6c8);
  return param_1;
}

// @baa 0x01605690

// @baa 0x016057a0
bool URBMExitConditionCombiner::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
