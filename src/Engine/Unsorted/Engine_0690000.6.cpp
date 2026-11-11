// Engine_0690000.cpp (part 6 of 8): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 * sub_006975d0();
};

int sub_005c7a20(void);
extern undefined * g_01ec0c78;
// @baa 0x006975d0
undefined4 * C::sub_006975d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *param_1 = (undefined4)(&g_01ec0c78);
  return param_1;
}

// @baa 0x00697690
IMPLEMENT_CLASS_AT(AFileLog, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AFileLog.cpp", 13);

// @baa 0x006977a0
bool AFileLog::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
