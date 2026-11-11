// Editor_10f0000.cpp (part 1 of 2): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

void sub_010eee30();
// @baa 0x010f6120
void sub_010f6120(void) { sub_010eee30(); }

void sub_010eeea0();
// @baa 0x010f6280
void sub_010f6280(void) { sub_010eeea0(); }

void sub_010eef10();
// @baa 0x010f6290
void sub_010f6290(void) { sub_010eef10(); }

struct C {
    undefined4 sub_010fd2e0(byte);
};

int sub_0053dfa0(...);
int sub_010f8110(void);
// @baa 0x010fd2e0
undefined4 C::sub_010fd2e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_010f8110();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view {
    int sub_010feec0(int);
};

// @baa 0x010fef40
int UObject::sub_010fef40(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_010feec0(param_2);
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  return param_1;
}

struct C_view_010fef60 {
    int sub_010fe930(int);
};

extern undefined4 g_021a7980;
// @baa 0x010fef60
undefined4 * UObject::sub_010fef60(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_010fef60 *)(this))->sub_010fe930(param_2);
  *param_1 = (undefined4)(&g_021a7980);
  return param_1;
}

void sub_010fee60();
// @baa 0x010fef80
void sub_010fef80(void) { sub_010fee60(); }
