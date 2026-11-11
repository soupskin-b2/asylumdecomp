// Engine_0cd0000.cpp (part 5 of 5): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_005c7a20(void);
extern undefined * g_02088a08;
// @baa 0x00cd8c00
undefined4 * UObject::sub_00cd8c00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02088a08);
  return param_1;
}

struct C
{
    char pad_00[0x1944];
    INT Counter;

    void sub_00ccf500();
    void sub_00cd1970();
};

// @baa 0x00cd1970
void C::sub_00cd1970()
{
    ++Counter;
    sub_00ccf500();
}
