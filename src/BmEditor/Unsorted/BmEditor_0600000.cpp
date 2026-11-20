// BmEditor_0600000.cpp: 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C_0060fc10 { int sub_0060fc10(void); };
// @baa 0x0060fc10
int C_0060fc10::sub_0060fc10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0060fc20 { int sub_0060fc20(void); };
// @baa 0x0060fc20
int C_0060fc20::sub_0060fc20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

struct C_0060fc30 { int sub_0060fc30(void); };
// @baa 0x0060fc30
int C_0060fc30::sub_0060fc30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct C_0060fc40 { int sub_0060fc40(void); };
// @baa 0x0060fc40
int C_0060fc40::sub_0060fc40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + 0xc + *(int *)*param_1;
}
