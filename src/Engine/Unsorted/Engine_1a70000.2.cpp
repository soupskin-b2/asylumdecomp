// Engine_1a70000.cpp (part 2 of 3): 31 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_01a70510();
};

// @baa 0x01a70510
int C::sub_01a70510(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x124) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x128) - *(int *)(param_1 + 0x124) >> 6;
}

struct C_01a70880 { C_01a70880* sub_01a70880(int a0); };

// @baa 0x01a70880
C_01a70880* C_01a70880::sub_01a70880(int a0) { return this; }

struct C_01a70890 { C_01a70890* sub_01a70890(int a0); };

// @baa 0x01a70890
C_01a70890* C_01a70890::sub_01a70890(int a0) { return this; }

struct C_01a708a0 { C_01a708a0* sub_01a708a0(int a0); };

// @baa 0x01a708a0
C_01a708a0* C_01a708a0::sub_01a708a0(int a0) { return this; }

// @baa 0x01a708b0
int sub_01a708b0(void) { return 1073741823; }

// @baa 0x01a708c0
int sub_01a708c0(void) { return 67108863; }

// @baa 0x01a708d0
int sub_01a708d0(void) { return 1073741823; }

// @baa 0x01a70af0
void sub_01a70af0(void) {  }

// @baa 0x01a70b00
void sub_01a70b00(void) {  }

// @baa 0x01a70b40
int sub_01a70b40(int a0) { return *(int*)a0; }

// @baa 0x01a70cb0
void sub_01a70cb0(void) {  }

// @baa 0x01a72910
void sub_01a72910(void) {  }

// @baa 0x01a72c30
void __stdcall sub_01a72c30(int a0, int a1) {  }

void sub_01a72c40();
// @baa 0x01a72db0
void sub_01a72db0(void) { sub_01a72c40(); }

struct C_01a72dc0 {
    void sub_01a72dc0(int *, int, int, int, int);
};

int sub_01a718a0(...);
extern "C" __declspec(dllimport) int _invalid_parameter_noinfo(...);
// @baa 0x01a72dc0
void C_01a72dc0::sub_01a72dc0(int * param_2, int param_3, int param_4, int param_5, int param_6)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((param_3 == 0) || (param_3 != param_5)) {
    _invalid_parameter_noinfo();
  }
  if (param_4 != param_6) {
    uVar1 = sub_01a718a0(param_6,*(undefined4 *)(param_1 + 8),param_4);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  param_2[1] = param_4;
  *param_2 = param_3;
  return;
}

// @baa 0x01a799b0
void sub_01a799b0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}

void sub_01a77a20();
// @baa 0x01a799e0
void sub_01a799e0(void) { sub_01a77a20(); }

// @baa 0x01a79a20
void sub_01a79a20(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x01a79af0
void __stdcall sub_01a79af0(int a0) {  }

// @baa 0x01a79b10
undefined4 sub_01a79b10(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a79bb0
undefined4 sub_01a79bb0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a79bc0
undefined4 sub_01a79bc0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a79c10
undefined4 sub_01a79c10(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a79c20
undefined4 sub_01a79c20(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

int sub_01a78030(...);
// @baa 0x01a79e00
void sub_01a79e00(int param_1, int param_2, int param_3)
{
  if ((param_1 != param_2) && (param_2 != param_3)) {
    sub_01a78030(param_1,param_2,param_3,0,0);
  }
  return;
}

int sub_01a79290(...);
// @baa 0x01a79e30
void sub_01a79e30(undefined4 * param_1, int param_2, undefined4 param_3)
{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + -4);
  *(undefined4 *)(param_2 + -4) = *param_1;
  sub_01a79290(param_1,0,(param_2 - (int)param_1) + -4 >> 2,uVar1,param_3);
  return;
}

// @baa 0x01a7a2c0
void sub_01a7a2c0(int param_1, int param_2)
{
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// @baa 0x01a7a320
void sub_01a7a320(void) {  }

int sub_01a79dc0(...);
// @baa 0x01a7a840
void sub_01a7a840(int param_1, int param_2, undefined4 param_3)
{
  if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
    sub_01a79dc0(param_1,param_2,param_3,0,0);
  }
  return;
}

// @baa 0x01a7a970
void sub_01a7a970(undefined4 * param_1, int param_2, undefined4 param_3)
{
  undefined4 uVar1;
  
  if (4 < (int)(param_2 - (int)param_1 & 0xfffffffcU)) {
    uVar1 = *(undefined4 *)(param_2 + -4);
    *(undefined4 *)(param_2 + -4) = *param_1;
    sub_01a79290(param_1,0,(int)((param_2 - (int)param_1) - 4U) >> 2,uVar1,param_3);
  }
  return;
}

void sub_01a79ff0();
// @baa 0x01a7a9b0
void sub_01a7a9b0(void) { sub_01a79ff0(); }
