// Editor_1070000.cpp (part 1 of 2): 32 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x010727b0
UTestCompressionCommandlet::UTestCompressionCommandlet()
{
    if (!(*(QWORD*)&ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x01072810
int sub_01072810(void);
int sub_005c7a70(...);
// @baa 0x01072870
undefined4 UTestCompressionCommandlet::sub_01072870(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01072810();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x70);
  }
  return param_1;
}

// @baa 0x01072890
UMergePackagesCommandlet::UMergePackagesCommandlet()
{
    if (!(*(QWORD*)&ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x010728f0
int sub_010728f0(void);
// @baa 0x01072950
undefined4 UMergePackagesCommandlet::sub_01072950(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_010728f0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x70);
  }
  return param_1;
}

// @baa 0x01072a50
UCreateDefaultStyleCommandlet::UCreateDefaultStyleCommandlet()
{
    if (!(*(QWORD*)&ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x01072ab0
int sub_01072ab0(void);
// @baa 0x01072b10
undefined4 UCreateDefaultStyleCommandlet::sub_01072b10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01072ab0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x74);
  }
  return param_1;
}

// @baa 0x01072b30
UExamineOutersCommandlet::UExamineOutersCommandlet()
{
    if (!(*(QWORD*)&ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x01072b90
int sub_01072b90(void);
// @baa 0x01072bf0
undefined4 UExamineOutersCommandlet::sub_01072bf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01072b90();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x70);
  }
  return param_1;
}

// @baa 0x01072c10
UFindDuplicateKismetObjectsCommandlet::UFindDuplicateKismetObjectsCommandlet()
{
    if (!(*(QWORD*)&ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x01072c70
int sub_01072c70(void);
// @baa 0x01072cd0
undefined4 UFindDuplicateKismetObjectsCommandlet::sub_01072cd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01072c70();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x70);
  }
  return param_1;
}

int sub_010695f0(void);

int sub_01069770(void);

int sub_010697d0(void);

void sub_010767a0();

void sub_01076810();

void sub_01076880();

// @baa 0x01078d20
void sub_01078d20(void) { sub_010767a0(); }

// @baa 0x010792d0
void sub_010792d0(void) { sub_01076810(); }

// @baa 0x01079a40
void sub_01079a40(void) { sub_01076880(); }

// @baa 0x01079e10
int UContentTagIndex::sub_01079e10(void)
{
    int param_1 = (int)this;

  sub_010695f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_01079e30 {
    int sub_01068fb0();
    int sub_00fbc640(int, int);
};

// @baa 0x01079e30
void UContentTagIndex::sub_01079e30(void)
{
    int param_1 = (int)this;
  ((C_view_01079e30 *)(this))->sub_01068fb0();
  ((C_view_01079e30 *)(this))->sub_00fbc640(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01079e50 {
    int sub_010690b0();
    int sub_00fbc700(int, int);
};

// @baa 0x01079e50
void UContentTagIndex::sub_01079e50(void)
{
    int param_1 = (int)this;
  ((C_view_01079e50 *)(this))->sub_010690b0();
  ((C_view_01079e50 *)(this))->sub_00fbc700(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01079e70 {
    int sub_010691b0();
    int sub_00fbc7c0(int, int);
};

// @baa 0x01079e70
void UContentTagIndex::sub_01079e70(void)
{
    int param_1 = (int)this;
  ((C_view_01079e70 *)(this))->sub_010691b0();
  ((C_view_01079e70 *)(this))->sub_00fbc7c0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

// @baa 0x01079e90
int UContentTagIndex::sub_01079e90(void)
{
    int param_1 = (int)this;

  sub_01069770();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01079eb0
int UContentTagIndex::sub_01079eb0(void)
{
    int param_1 = (int)this;

  sub_010697d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01079ef0 { void sub_01077040(int); C_01079ef0 *sub_01079ef0(int); };

// @baa 0x01079ef0
C_01079ef0 *C_01079ef0::sub_01079ef0(int a) { sub_01077040(a); return this; }

// @baa 0x0107a130
void sub_0107a130(void) { sub_010767a0(); }

// @baa 0x0107a140
void sub_0107a140(void) { sub_010767a0(); }

// @baa 0x0107a2f0
void sub_0107a2f0(void) { sub_01076810(); }

// @baa 0x0107ea60
int UContentTagIndex::sub_0107ea60(void)
{
    int param_1 = (int)this;

  sub_01069770();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_0107ea80();
// @baa 0x0107eb40
void sub_0107eb40(void) { sub_0107ea80(); }

void sub_0107eae0();
// @baa 0x0107eb50
void sub_0107eb50(void) { sub_0107eae0(); }

struct C_0107eb80 { void sub_01077040(int); C_0107eb80 *sub_0107eb80(int); };

// @baa 0x0107eb80
C_0107eb80 *C_0107eb80::sub_0107eb80(int a) { sub_01077040(a); return this; }

