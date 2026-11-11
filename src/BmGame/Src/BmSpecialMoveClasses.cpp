// BmSpecialMoveClasses.cpp: 44 functions
// Placed here by: neighbours 18, file 12, callers 8, class 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01613290
int ARSpecialMoveInstance_RelativeAnimMove::vf_000(void) { return 1; }

// @baa 0x016132a0
int ARSpecialMoveInstance_CatchLedge::vf_000(void) { return 1; }

// @baa 0x016132b0
IMPLEMENT_CLASS_AT(URSpecialMoveFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 23);

// @baa 0x016133c0
int URSpecialMoveFactoryNew::vf_000(void) { return 1; }

// @baa 0x016133d0
bool URSpecialMoveFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01613410
IMPLEMENT_CLASS_AT(URMatineeSpecialMoveFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 24);

// @baa 0x01613520
int URMatineeSpecialMoveFactoryNew::vf_000(void) { return 1; }

// @baa 0x01613530
bool URMatineeSpecialMoveFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016168b0
IMPLEMENT_CLASS_AT(UREnvironmentSpecialMoveWrapper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 10);

// @baa 0x016168d0
IMPLEMENT_CLASS_AT(UREnvironmentSpecialMoveWrapperFalling, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 11);

// @baa 0x016168f0
// @baa 0x016169b0
// @baa 0x01623020
IMPLEMENT_CLASS_AT(URSpecialMoveConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 13);

// @baa 0x01623040
IMPLEMENT_CLASS_AT(URSpecialMoveConfig_RelativeAnimMove, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 14);

int sub_005c7a20(void);
extern undefined * g_02344d28;
// @baa 0x016230b0
undefined4 * UObject::sub_016230b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02344d28);
  return param_1;
}

// @baa 0x016230d0
extern undefined * g_02344e38;
// @baa 0x01623100
undefined4 * UObject::sub_01623100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02344e38);
  return param_1;
}

// @baa 0x01623120
IMPLEMENT_CLASS_AT(URSimpleSpecialMoveConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 15);

// @baa 0x01623180
// @baa 0x01623210
// @baa 0x01625a00
// @baa 0x01625a20
// @baa 0x01625c30
// @baa 0x01625cf0
// @baa 0x01625e00
bool URSpecialMoveConfig_RelativeAnimMove::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01625e40
// @baa 0x01629830
// @baa 0x01629850
// @baa 0x0162b500
// @baa 0x0162b5c0
// @baa 0x0162d140
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_RelativeAnimMove, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 19);

// @baa 0x0162d1e0
// @baa 0x0162fce0
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 16);

// @baa 0x0162fd20
// @baa 0x0162fd60
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_CatchLedge, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 20);

// @baa 0x0162fda0
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_ResonateObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 17);

// @baa 0x0162fdf0
IMPLEMENT_CLASS_AT(ARSpecialMoveInstance_SwingToVantagePoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmSpecialMoveClasses.cpp", 18);

// @baa 0x0162fe30
// @baa 0x0162fef0
// @baa 0x0162ffb0
// @baa 0x01630070
// @baa 0x01630130
// @baa 0x016318c0
// @baa 0x016319d0
bool ARSpecialMoveInstance_RelativeAnimMove::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
