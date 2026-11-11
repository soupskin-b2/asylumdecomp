// Editor_1080000.cpp (part 1 of 2): 14 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_01083ab0(byte);
};

int sub_0053dfa0(...);
int sub_0107fc10(void);
// @baa 0x01083ab0
undefined4 C::sub_01083ab0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0107fc10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0107ea80(void);
// @baa 0x01083ad0
undefined4 UObject::sub_01083ad0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0107ea80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0107eae0(void);
// @baa 0x01083af0
undefined4 UObject::sub_01083af0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0107eae0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01083b10 { void sub_01077040(int); C_01083b10 *sub_01083b10(int); };

// @baa 0x01083b10
C_01083b10 *C_01083b10::sub_01083b10(int a) { sub_01077040(a); return this; }

// @baa 0x01083f60
IMPLEMENT_CLASS_AT(UChangePrefabSequenceClassCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UContentCommandlets.cpp", 952);

// @baa 0x01084070
bool UChangePrefabSequenceClassCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_01069710(void);
// @baa 0x0108a190
int UContentTagIndex::sub_0108a190(void)
{
    int param_1 = (int)this;

  sub_01069710();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0108a220
int UContentTagIndex::sub_0108a220(void)
{
    int param_1 = (int)this;

  sub_01069710();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_0108a1b0();
// @baa 0x0108a240
void sub_0108a240(void) { sub_0108a1b0(); }

// @baa 0x0108a250
int UContentTagIndex::sub_0108a250(void)
{
    int param_1 = (int)this;

  sub_01069710();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0108a270
void sub_0108a270(void) { sub_0108a1b0(); }

// @baa 0x0108a280
int UContentTagIndex::sub_0108a280(void)
{
    int param_1 = (int)this;

  sub_01069710();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0108a2a0
void sub_0108a2a0(void) { sub_0108a1b0(); }

// @baa 0x0108a2b0
int UContentTagIndex::sub_0108a2b0(void)
{
    int param_1 = (int)this;

  sub_01069710();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}
