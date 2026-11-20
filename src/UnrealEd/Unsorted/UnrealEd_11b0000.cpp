// UnrealEd_11b0000.cpp: 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C11b {
    void sub_011b5660();
    void sub_011b6300();
};

// @baa 0x011b6300
void C11b::sub_011b6300() {
    sub_011b5660();
}

void sub_011b56d0();
// @baa 0x011b6310
void sub_011b6310(void) { sub_011b56d0(); }

void sub_011b5740();
// @baa 0x011b6320
void sub_011b6320(void) { sub_011b5740(); }

void sub_011b57b0();
// @baa 0x011b6330
void sub_011b6330(void) { sub_011b57b0(); }

struct C {
    void sub_011b9970(undefined4);
};

int sub_011b5940(...);
// @baa 0x011b9970
void C::sub_011b9970(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_011b5940(param_2,param_1 + 8);
  return;
}

int sub_011adc80(void);
struct C_011ba050 { int sub_011ba050(void); };
// @baa 0x011ba050
int C_011ba050::sub_011ba050(void)
{
    int param_1 = (int)this;

  sub_011adc80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_011adce0(void);
struct C_011ba070 { int sub_011ba070(void); };
// @baa 0x011ba070
int C_011ba070::sub_011ba070(void)
{
    int param_1 = (int)this;

  sub_011adce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_011add40(void);
struct C_011ba090 { int sub_011ba090(void); };
// @baa 0x011ba090
int C_011ba090::sub_011ba090(void)
{
    int param_1 = (int)this;

  sub_011add40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_011adda0(void);
struct C_011ba0b0 { int sub_011ba0b0(void); };
// @baa 0x011ba0b0
int C_011ba0b0::sub_011ba0b0(void)
{
    int param_1 = (int)this;

  sub_011adda0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_011ade00(void);
struct C_011ba0d0 { int sub_011ba0d0(void); };
// @baa 0x011ba0d0
int C_011ba0d0::sub_011ba0d0(void)
{
    int param_1 = (int)this;

  sub_011ade00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_011b55f0();
// @baa 0x011ba0f0
void sub_011ba0f0(void) { sub_011b55f0(); }
