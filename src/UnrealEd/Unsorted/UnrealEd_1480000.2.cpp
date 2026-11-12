// UnrealEd_1480000.cpp (part 2 of 2): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_014824d0(void);
// @baa 0x01482db0
undefined4 UObject::sub_01482db0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014824d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_01489bb0(void);
// @baa 0x0148a4b0
undefined4 UObject::sub_0148a4b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01489bb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0148b730
undefined4 UObject::sub_0148b730(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01489bb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C
{
    char pad_0[0x8];
    INT Value_8;
    INT Value_c;
    INT Value_10;

    C* sub_01489020();
};

// @baa 0x01489020
C* C::sub_01489020()
{
    Value_8 = 0;
    Value_c = 0;
    Value_10 = 0;
    return this;
}

struct M_0175d690
{
	void* Data;
	INT	 Num;
	INT	 _pad;

	void sub_014820e0(void);
};

extern M_0175d690 g_026dd844;
extern M_0175d690 g_026dd850;
void sub_0147d490(void);
// @baa 0x014843d0
void sub_014843d0(void)
{
	sub_0147d490();
	g_026dd844.sub_014820e0();
	g_026dd850.sub_014820e0();
}
