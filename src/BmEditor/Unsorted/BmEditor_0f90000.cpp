// BmEditor_0f90000.cpp: 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

void sub_00f8f4e0();
// @baa 0x00f90340
void sub_00f90340(void) { sub_00f8f4e0(); }

void sub_00f8f550();
// @baa 0x00f90350
void sub_00f90350(void) { sub_00f8f550(); }

void sub_00f8f5c0();
// @baa 0x00f90a80
void sub_00f90a80(void) { sub_00f8f5c0(); }

void sub_00f8f630();
// @baa 0x00f90a90
void sub_00f90a90(void) { sub_00f8f630(); }

struct C_view {
    int sub_00f8fc30(int);
};

// @baa 0x00f945a0
void UState::sub_00f945a0(void)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00f8fc30(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c));
  return;
}

int sub_00f88e60(void);
// @baa 0x00f945b0
int UState::sub_00f945b0(void)
{
    int param_1 = (int)this;

  sub_00f88e60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00f88ec0(void);
// @baa 0x00f945d0
int UState::sub_00f945d0(void)
{
    int param_1 = (int)this;

  sub_00f88ec0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C { void sub_00f91d90(int); C *sub_00f945f0(int); };

// @baa 0x00f945f0
C *C::sub_00f945f0(int a) { sub_00f91d90(a); return this; }

extern char g_021625b0[];
// @baa 0x00f946a0
int sub_00f946a0(void) { return (int)g_021625b0; }

// @baa 0x00f9f830
int USkeletalMeshFactory::vf_000(void) { return 1; }

// @baa 0x00f9f840
bool USkeletalMeshFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
