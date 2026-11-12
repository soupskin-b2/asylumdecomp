// Engine_08e0000.cpp (part 1 of 2): 13 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { void sub_008d5060(int); C *sub_008e01f0(int); };

// @baa 0x008e01f0
C *C::sub_008e01f0(int a) { sub_008d5060(a); return this; }

struct C_008e0210 { C_008e0210* sub_008e0210(void); };

// @baa 0x008e0210
C_008e0210* C_008e0210::sub_008e0210(void) { return this; }

struct C_008e0220 { C_008e0220* sub_008e0220(void); };

// @baa 0x008e0220
C_008e0220* C_008e0220::sub_008e0220(void) { return this; }

struct C_008e0230 { C_008e0230* sub_008e0230(void); };

// @baa 0x008e0230
C_008e0230* C_008e0230::sub_008e0230(void) { return this; }

struct C_008e0240 { C_008e0240* sub_008e0240(void); };

// @baa 0x008e0240
C_008e0240* C_008e0240::sub_008e0240(void) { return this; }

struct C_008e0250 { void sub_008dcec0(int); C_008e0250 *sub_008e0250(int); };

// @baa 0x008e0250
C_008e0250 *C_008e0250::sub_008e0250(int a) { sub_008dcec0(a); return this; }

struct C_008e0270 { void sub_008dcfb0(int); C_008e0270 *sub_008e0270(int); };

// @baa 0x008e0270
C_008e0270 *C_008e0270::sub_008e0270(int a) { sub_008dcfb0(a); return this; }

struct C_008e0290 { void sub_008dd0a0(int); C_008e0290 *sub_008e0290(int); };

// @baa 0x008e0290
C_008e0290 *C_008e0290::sub_008e0290(int a) { sub_008dd0a0(a); return this; }

struct C_view {
    int sub_008dcec0(int);
};

// @baa 0x008eed30
undefined4 USeqAct_Switch::sub_008eed30(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(this))->sub_008dcec0(param_2);
  return param_1;
}

struct C_008eed50 { void sub_008dcec0(int); C_008eed50 *sub_008eed50(int); };

// @baa 0x008eed50
C_008eed50 *C_008eed50::sub_008eed50(int a) { sub_008dcec0(a); return this; }

struct C_008eed70 { void sub_008dcfb0(int); C_008eed70 *sub_008eed70(int); };

// @baa 0x008eed70
C_008eed70 *C_008eed70::sub_008eed70(int a) { sub_008dcfb0(a); return this; }

struct C_008eed90 { void sub_008dd0a0(int); C_008eed90 *sub_008eed90(int); };

// @baa 0x008eed90
C_008eed90 *C_008eed90::sub_008eed90(int a) { sub_008dd0a0(a); return this; }

int sub_008a7000(void);
int sub_008e0590(...);
extern undefined4 g_026b5aa8;
// @baa 0x008eedb0
int sub_008eedb0(void)
{
  if (g_026b5aa8 == 0) {
    g_026b5aa8 = sub_008e0590(L"Engine");
    sub_008a7000();
  }
  return g_026b5aa8;
}

