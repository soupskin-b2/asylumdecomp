// UnrealEd_1170000.cpp: 9 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_0116c5b0(void);
// @baa 0x011765d0
undefined4 UUnrealEdEngine::sub_011765d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0116c5b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C { void sub_00672ad0(int); C *sub_0117a800(int); };

// @baa 0x0117a800
C *C::sub_0117a800(int a) { sub_00672ad0(a); return this; }

extern TArray<int> g_026a1ca4;
struct C_0117a820 {
    int sub_0117a820();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x0117a820
int C_0117a820::sub_0117a820()
{
    return g_026a1ca4(Index);
}

struct C_0117a880 { void sub_011732c0(int); C_0117a880 *sub_0117a880(int); };

// @baa 0x0117a880
C_0117a880 *C_0117a880::sub_0117a880(int a) { sub_011732c0(a); return this; }

struct C_0117afc0 {
    undefined4 sub_0117afc0(byte);
};

int sub_01172b90(void);
// @baa 0x0117afc0
undefined4 C_0117afc0::sub_0117afc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01172b90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0117afe0 {
    undefined4 sub_0117afe0(byte);
};

int sub_011726a0(void);
// @baa 0x0117afe0
undefined4 C_0117afe0::sub_0117afe0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011726a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0117b000 {
    undefined4 sub_0117b000(byte);
};

int sub_01172c00(void);
// @baa 0x0117b000
undefined4 C_0117b000::sub_0117b000(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01172c00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0117b020 {
    undefined4 sub_0117b020(byte);
};

int sub_0117a380(void);
// @baa 0x0117b020
undefined4 C_0117b020::sub_0117b020(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0117a380();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0117b0b0 {
    undefined4 sub_0117b0b0(byte);
    int sub_0040fcc0();
};

// @baa 0x0117b0b0
undefined4 C_0117b0b0::sub_0117b0b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0117b0b0 *)(((char *)this + 8)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
