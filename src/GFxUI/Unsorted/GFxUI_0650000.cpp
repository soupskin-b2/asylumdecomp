// GFxUI_0650000.cpp (part 1 of 2): 22 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00650630
int sub_00650630(void) { return 1; }

// @baa 0x00650640
void sub_00650640(void) {  }

void sub_007249d0();
// @baa 0x006506d0
void sub_006506d0(void) { sub_007249d0(); }

struct C_view {
    int sub_0073f030(int);
};

int sub_00716170(...);
// @baa 0x006506e0
undefined4 UMorphWeightSequence::sub_006506e0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

extern char g_01ebbe1c[];
struct C { void sub_00650830(void); };

// @baa 0x00650830
void C::sub_00650830(void) { *(int*)((char*)this + 0) = (int)g_01ebbe1c; }

struct C_006508f0 { int a, b, c; C_006508f0(); };

// @baa 0x006508f0
C_006508f0::C_006508f0() : a(0), b(0), c(0) {}

struct C_00650900 { int a, b, c; C_00650900(); };

// @baa 0x00650900
C_00650900::C_00650900() : a(0), b(0), c(0) {}

struct C_00650910 { int sub_00650910(void); };

// @baa 0x00650910
int C_00650910::sub_00650910(void) { return *(int*)((char*)this + 4); }

struct C_00650920 { int sub_00650920(void); };

// @baa 0x00650920
int C_00650920::sub_00650920(void) { return *(int*)((char*)this + 112); }

struct C_00650930 { int sub_00650930(void); };

// @baa 0x00650930
int C_00650930::sub_00650930(void) { return *(int*)((char*)this + 144); }

struct C_00650940 { int a, b, c; C_00650940(); };

// @baa 0x00650940
C_00650940::C_00650940() : a(0), b(0), c(0) {}

struct C_00650950 { int sub_00650950(void); };

// @baa 0x00650950
int C_00650950::sub_00650950(void) { return *(int*)((char*)this + 4); }

struct C_006509e0 { int sub_006509e0(void); };

// @baa 0x006509e0
int C_006509e0::sub_006509e0(void) { return *(int*)((char*)this + 0); }

struct C_006509f0 { int sub_006509f0(void); };

// @baa 0x006509f0
int C_006509f0::sub_006509f0(void) { return *(int*)((char*)this + 0); }

struct C_00650a00 { int sub_00650a00(void); };

// @baa 0x00650a00
int C_00650a00::sub_00650a00(void) { return *(int*)((char*)this + 0); }

struct C_00650a10 { int sub_00650a10(void); };

// @baa 0x00650a10
int C_00650a10::sub_00650a10(void) { return *(int*)((char*)this + 0); }

struct C_00650a20 { int sub_00650a20(void); };

// @baa 0x00650a20
int C_00650a20::sub_00650a20(void) { return *(int*)((char*)this + 0); }

struct C_00650a30 { C_00650a30* sub_00650a30(void); };

// @baa 0x00650a30
C_00650a30* C_00650a30::sub_00650a30(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00650a40 { int sub_00650a40(void); };

// @baa 0x00650a40
int C_00650a40::sub_00650a40(void) { return *(int*)((char*)this + 0); }

struct C_00650a50 { C_00650a50* sub_00650a50(void); };

// @baa 0x00650a50
C_00650a50* C_00650a50::sub_00650a50(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00650a60 { int sub_00650a60(void); };

// @baa 0x00650a60
int C_00650a60::sub_00650a60(void) { return *(int*)((char*)this + 0); }

struct C_00650a70 { C_00650a70* sub_00650a70(void); };

// @baa 0x00650a70
C_00650a70* C_00650a70::sub_00650a70(void) { *(int*)((char*)this + 0) = 0; return this; }
