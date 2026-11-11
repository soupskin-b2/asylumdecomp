// UnrealEd_1b60000.cpp (part 1 of 3): 242 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01b60190(undefined4 *);
};

// @baa 0x01b60190
void C::sub_01b60190(undefined4 * param_2)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x270);
  param_2[1] = *(undefined4 *)(param_1 + 0x274);
  param_2[2] = *(undefined4 *)(param_1 + 0x278);
  param_2[3] = *(undefined4 *)(param_1 + 0x27c);
  param_2[4] = *(undefined4 *)(param_1 + 0x280);
  param_2[5] = *(undefined4 *)(param_1 + 0x284);
  return;
}

struct C_01b601f0 {
    void sub_01b601f0();
};

// @baa 0x01b601f0
void C_01b601f0::sub_01b601f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  return;
}

struct C_01b60210 {
    void sub_01b60210(undefined4, undefined4, undefined4);
};

// @baa 0x01b60210
void C_01b60210::sub_01b60210(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

struct C_01b60240 {
    void sub_01b60240(undefined4);
};

// @baa 0x01b60240
void C_01b60240::sub_01b60240(undefined4 param_2)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 0xc) == -1) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    return;
  }
  if (*(int *)(param_1 + 0x10) == -1) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    return;
  }
  if (*(int *)(param_1 + 0x14) == -1) {
    *(undefined4 *)(param_1 + 0x14) = param_2;
  }
  return;
}

struct C_01b60270 {
    void sub_01b60270(int, int, int);
};

// @baa 0x01b60270
void C_01b60270::sub_01b60270(int param_2, int param_3, int param_4)
{
    int * param_1 = (int *)this;
  if (param_2 < param_3) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    return;
  }
  *param_1 = param_3;
  param_1[1] = param_2;
  param_1[2] = param_4;
  return;
}

struct C_01b602d0 {
    undefined4 sub_01b602d0(int *);
};

// @baa 0x01b602d0
undefined4 C_01b602d0::sub_01b602d0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

// @baa 0x01b603e0
void __stdcall sub_01b603e0(int a0, int a1) {  }

struct C_01b603f0 {
    int sub_01b603f0();
};

// @baa 0x01b603f0
int C_01b603f0::sub_01b603f0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
}

struct C_01b60470 {
    int sub_01b60470();
};

// @baa 0x01b60470
int C_01b60470::sub_01b60470(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}

struct C_01b604d0 {
    int sub_01b604d0();
};

// @baa 0x01b604d0
int C_01b604d0::sub_01b604d0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
}

struct C_01b604f0 {
    int sub_01b604f0();
};

// @baa 0x01b604f0
int C_01b604f0::sub_01b604f0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x1c;
}

struct C_01b60560 {
    int sub_01b60560();
};

// @baa 0x01b60560
int C_01b60560::sub_01b60560(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0xc;
}

struct C_01b60580 {
    int sub_01b60580();
};

// @baa 0x01b60580
int C_01b60580::sub_01b60580(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 4;
}

struct C_01b605d0 {
    int sub_01b605d0(int *);
};

extern "C" __declspec(dllimport) int _invalid_parameter_noinfo(...);
// @baa 0x01b605d0
int C_01b605d0::sub_01b605d0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x1c;
}

struct C_01b60640 {
    int sub_01b60640(int *);
};

// @baa 0x01b60640
int C_01b60640::sub_01b60640(int * param_2)
{
    int * param_1 = (int *)this;
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0xc;
}

struct C_01b606b0 { C_01b606b0* sub_01b606b0(void); };

// @baa 0x01b606b0
C_01b606b0* C_01b606b0::sub_01b606b0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01b606c0 { C_01b606c0* sub_01b606c0(void); };

// @baa 0x01b606c0
C_01b606c0* C_01b606c0::sub_01b606c0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01b606d0 { C_01b606d0* sub_01b606d0(void); };

// @baa 0x01b606d0
C_01b606d0* C_01b606d0::sub_01b606d0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01b607b0
int sub_01b607b0(int a0) { return a0; }

// @baa 0x01b607c0
int sub_01b607c0(int a0) { return a0; }

// @baa 0x01b607d0
int sub_01b607d0(int a0) { return a0; }

// @baa 0x01b607e0
void sub_01b607e0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}

struct E_01b60810 {};

// @baa 0x01b60810
E_01b60810 sub_01b60810() { E_01b60810 e; return e; }

struct E_01b60850 {};

// @baa 0x01b60850
E_01b60850 sub_01b60850() { E_01b60850 e; return e; }

// @baa 0x01b60860
void sub_01b60860(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}

struct E_01b60890 {};

// @baa 0x01b60890
E_01b60890 sub_01b60890() { E_01b60890 e; return e; }

// @baa 0x01b608a0
int sub_01b608a0(int a0) { return *(int*)a0; }

// @baa 0x01b608f0
int sub_01b608f0(int a0) { return *(int*)a0; }

// @baa 0x01b60930
int sub_01b60930(int a0) { return *(int*)a0; }

// @baa 0x01b60970
void sub_01b60970(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

// @baa 0x01b609c0
void sub_01b609c0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

struct C_01b60fd0 {
    int sub_01b60fd0(int *);
};

// @baa 0x01b60fd0
int C_01b60fd0::sub_01b60fd0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x1c;
}

struct C_01b61040 {
    int sub_01b61040(int *);
};

// @baa 0x01b61040
int C_01b61040::sub_01b61040(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0xc;
}

// @baa 0x01b61240
int sub_01b61240(int a0) { return *(int*)a0; }

// @baa 0x01b612a0
int sub_01b612a0(int a0) { return *(int*)a0; }

// @baa 0x01b61310
int sub_01b61310(int a0) { return *(int*)a0; }

// @baa 0x01b61b20
void sub_01b61b20(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}

// @baa 0x01b61b80
void sub_01b61b80(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}

struct C_01b64c30 {
    undefined4 sub_01b64c30(int *);
};

// @baa 0x01b64c30
undefined4 C_01b64c30::sub_01b64c30(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_01b64c50 {
    int sub_01b64c50(int);
};

// @baa 0x01b64c50
int C_01b64c50::sub_01b64c50(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == param_2) {
    iVar1 = param_1[1];
  }
  return iVar1;
}

struct C_01b64c90 {
    void sub_01b64c90(undefined4, undefined4, undefined4);
};

// @baa 0x01b64c90
void C_01b64c90::sub_01b64c90(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}

struct C_01b64cb0 {
    undefined4 sub_01b64cb0(int);
};

// @baa 0x01b64cb0
undefined4 C_01b64cb0::sub_01b64cb0(int param_2)
{
    int * param_1 = (int *)this;

  if (((*param_1 != param_2) && (param_1[1] != param_2)) && (param_1[2] != param_2)) {
    return 0;
  }
  return 1;
}

struct C_01b64cd0 {
    void sub_01b64cd0(int, int);
};

// @baa 0x01b64cd0
void C_01b64cd0::sub_01b64cd0(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  if (*param_1 == param_2) {
    *param_1 = param_3;
    return;
  }
  if (param_1[1] == param_2) {
    param_1[1] = param_3;
    return;
  }
  if (param_1[2] == param_2) {
    param_1[2] = param_3;
  }
  return;
}

struct C_01b64d00 {
    void sub_01b64d00(undefined4 *, undefined4);
};

// @baa 0x01b64d00
void C_01b64d00::sub_01b64d00(undefined4 * param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_3;
  return;
}

struct C_01b64d40 { C_01b64d40* sub_01b64d40(void); };

// @baa 0x01b64d40
C_01b64d40* C_01b64d40::sub_01b64d40(void) { return this; }

struct C_01b64d80 {
    int sub_01b64d80();
};

// @baa 0x01b64d80
int C_01b64d80::sub_01b64d80(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}

struct C_01b64e40 {
    int sub_01b64e40();
};

// @baa 0x01b64e40
int C_01b64e40::sub_01b64e40(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

struct C_01b64e90 {
    int sub_01b64e90();
};

// @baa 0x01b64e90
int C_01b64e90::sub_01b64e90(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
}

struct C_01b64f10 {
    int sub_01b64f10();
};

// @baa 0x01b64f10
int C_01b64f10::sub_01b64f10(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}

struct C_01b64f30 {
    int sub_01b64f30();
};

// @baa 0x01b64f30
int C_01b64f30::sub_01b64f30(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x18;
}

struct C_01b64f50 {
    int sub_01b64f50();
};

// @baa 0x01b64f50
int C_01b64f50::sub_01b64f50(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 4;
}

struct C_01b64f70 {
    int sub_01b64f70();
};

// @baa 0x01b64f70
int C_01b64f70::sub_01b64f70(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}

struct C_01b64fc0 {
    int sub_01b64fc0();
};

// @baa 0x01b64fc0
int C_01b64fc0::sub_01b64fc0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 4;
}

struct C_01b64fe0 {
    int sub_01b64fe0(int *);
};

// @baa 0x01b64fe0
int C_01b64fe0::sub_01b64fe0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01b65040 {
    int sub_01b65040(int *);
};

// @baa 0x01b65040
int C_01b65040::sub_01b65040(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x18;
}

struct C_01b650b0 {
    int sub_01b650b0(int *);
};

// @baa 0x01b650b0
int C_01b650b0::sub_01b650b0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 4;
}

struct C_01b65110 {
    int sub_01b65110(int *);
};

// @baa 0x01b65110
int C_01b65110::sub_01b65110(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01b65170 {
    int sub_01b65170(int *);
};

// @baa 0x01b65170
int C_01b65170::sub_01b65170(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 4;
}

struct C_01b651d0 { C_01b651d0* sub_01b651d0(void); };

// @baa 0x01b651d0
C_01b651d0* C_01b651d0::sub_01b651d0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01b651e0 { C_01b651e0* sub_01b651e0(void); };

// @baa 0x01b651e0
C_01b651e0* C_01b651e0::sub_01b651e0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01b651f0 { C_01b651f0* sub_01b651f0(void); };

// @baa 0x01b651f0
C_01b651f0* C_01b651f0::sub_01b651f0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01b65200 { C_01b65200* sub_01b65200(void); };

// @baa 0x01b65200
C_01b65200* C_01b65200::sub_01b65200(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01b65210 { C_01b65210* sub_01b65210(void); };

// @baa 0x01b65210
C_01b65210* C_01b65210::sub_01b65210(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x01b65360
int sub_01b65360(int a0) { return a0; }

// @baa 0x01b653b0
int sub_01b653b0(int a0) { return a0; }

// @baa 0x01b653c0
int sub_01b653c0(int a0) { return a0; }

// @baa 0x01b653d0
int sub_01b653d0(int a0) { return a0; }

// @baa 0x01b65420
int sub_01b65420(int a0) { return a0; }

// @baa 0x01b65430
void sub_01b65430(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

struct E_01b65450 {};

// @baa 0x01b65450
E_01b65450 sub_01b65450() { E_01b65450 e; return e; }

// @baa 0x01b65460
void sub_01b65460(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    param_1[4] = param_3[4];
    param_1[5] = param_3[5];
  }
  return;
}

struct E_01b654a0 {};

// @baa 0x01b654a0
E_01b654a0 sub_01b654a0() { E_01b654a0 e; return e; }

// @baa 0x01b654b0
void sub_01b654b0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}

struct E_01b654e0 {};

// @baa 0x01b654e0
E_01b654e0 sub_01b654e0() { E_01b654e0 e; return e; }

// @baa 0x01b654f0
void sub_01b654f0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

struct E_01b65510 {};

// @baa 0x01b65510
E_01b65510 sub_01b65510() { E_01b65510 e; return e; }

// @baa 0x01b65520
void sub_01b65520(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}

struct E_01b65550 {};

// @baa 0x01b65550
E_01b65550 sub_01b65550() { E_01b65550 e; return e; }

// @baa 0x01b65560
int sub_01b65560(int a0) { return *(int*)a0; }

// @baa 0x01b65570
int sub_01b65570(int a0) { return *(int*)a0; }

// @baa 0x01b655c0
int sub_01b655c0(int a0) { return *(int*)a0; }

// @baa 0x01b65610
int sub_01b65610(int a0) { return *(int*)a0; }

// @baa 0x01b65620
int sub_01b65620(int a0) { return *(int*)a0; }

extern "C" __declspec(dllimport) int memmove_s(...);
// @baa 0x01b65670
void * sub_01b65670(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

// @baa 0x01b656a0
void * sub_01b656a0(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

// @baa 0x01b656d0
void sub_01b656d0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
  }
  return;
}

// @baa 0x01b65700
void sub_01b65700(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

// @baa 0x01b65730
void sub_01b65730(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

// @baa 0x01b65760
int sub_01b65760(int a0) { return a0; }

// @baa 0x01b65770
int sub_01b65770(int a0) { return a0; }

struct C_01b66860 {
    int sub_01b66860(int *);
};

// @baa 0x01b66860
int C_01b66860::sub_01b66860(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01b668c0 {
    int sub_01b668c0(int *);
};

// @baa 0x01b668c0
int C_01b668c0::sub_01b668c0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x18;
}

struct C_01b66930 {
    int sub_01b66930(int *);
};

// @baa 0x01b66930
int C_01b66930::sub_01b66930(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 4;
}

struct C_01b66990 {
    int sub_01b66990(int *);
};

// @baa 0x01b66990
int C_01b66990::sub_01b66990(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01b669f0 {
    int sub_01b669f0(int *);
};

// @baa 0x01b669f0
int C_01b669f0::sub_01b669f0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 4;
}

// @baa 0x01b66cd0
int sub_01b66cd0(int a0) { return *(int*)a0; }

// @baa 0x01b66ce0
int sub_01b66ce0(int a0) { return *(int*)a0; }

// @baa 0x01b66d50
int sub_01b66d50(int a0) { return *(int*)a0; }

// @baa 0x01b66db0
int sub_01b66db0(int a0) { return *(int*)a0; }

// @baa 0x01b66dc0
int sub_01b66dc0(int a0) { return *(int*)a0; }

// @baa 0x01b66e20
void * sub_01b66e20(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

// @baa 0x01b66e50
void * sub_01b66e50(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

// @baa 0x01b67570
void sub_01b67570(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x01b67590
void * sub_01b67590(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

// @baa 0x01b675d0
void sub_01b675d0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}

// @baa 0x01b67600
void sub_01b67600(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x01b67620
void * sub_01b67620(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

// @baa 0x01b67650
void sub_01b67650(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}

struct C_01b683e0 {
    void sub_01b683e0(int *, int, int, int, int);
};

int sub_01b67470(...);
// @baa 0x01b683e0
void C_01b683e0::sub_01b683e0(int * param_2, int param_3, int param_4, int param_5, int param_6)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((param_3 == 0) || (param_3 != param_5)) {
    _invalid_parameter_noinfo();
  }
  if (param_4 != param_6) {
    uVar1 = sub_01b67470(param_6,*(undefined4 *)(param_1 + 8),param_4);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  param_2[1] = param_4;
  *param_2 = param_3;
  return;
}

struct C_01b6b470 {
    undefined4 sub_01b6b470(int);
};

// @baa 0x01b6b470
undefined4 C_01b6b470::sub_01b6b470(int param_2)
{
    int * param_1 = (int *)this;

  if (((param_2 != *param_1) && (param_2 != param_1[1])) && (param_2 != param_1[2])) {
    return 0;
  }
  return 1;
}

struct C_01b6b490 { char* sub_01b6b490(void); };

// @baa 0x01b6b490
char* C_01b6b490::sub_01b6b490(void) { return (char*)this + 112; }

struct C_01b6b4a0 {
    undefined4 sub_01b6b4a0(int);
};

// @baa 0x01b6b4a0
undefined4 C_01b6b4a0::sub_01b6b4a0(int param_2)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x21408) <= param_2) && (param_2 <= *(int *)(param_1 + 0x2140c))) {
    return 1;
  }
  return 0;
}

struct C_01b6b5c0 {
    undefined4 sub_01b6b5c0(int);
};

// @baa 0x01b6b5c0
undefined4 C_01b6b5c0::sub_01b6b5c0(int param_2)
{
    int * param_1 = (int *)this;

  if ((((*param_1 != param_2) && (param_1[1] != param_2)) && (param_1[2] != param_2)) &&
     (param_1[3] != param_2)) {
    return 0;
  }
  return 1;
}

struct C_01b6b5f0 {
    void sub_01b6b5f0(int, int);
};

// @baa 0x01b6b5f0
void C_01b6b5f0::sub_01b6b5f0(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  if (*param_1 == param_2) {
    *param_1 = param_3;
    return;
  }
  if (param_1[1] == param_2) {
    param_1[1] = param_3;
    return;
  }
  if (param_1[2] == param_2) {
    param_1[2] = param_3;
    return;
  }
  if (param_1[3] == param_2) {
    param_1[3] = param_3;
  }
  return;
}

struct C_01b6b6e0 {
    void sub_01b6b6e0(int, int, int);
};

// @baa 0x01b6b6e0
void C_01b6b6e0::sub_01b6b6e0(int param_2, int param_3, int param_4)
{
    int * param_1 = (int *)this;

  if ((param_2 < param_3) && (param_2 < param_4)) {
    param_1[2] = param_4;
    *param_1 = param_2;
    param_1[1] = param_3;
    return;
  }
  if (param_3 < param_4) {
    param_1[1] = param_4;
    *param_1 = param_3;
    param_1[2] = param_2;
    return;
  }
  *param_1 = param_4;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return;
}

struct C_01b6b7c0 {
    undefined4 sub_01b6b7c0(int *);
};

// @baa 0x01b6b7c0
undefined4 C_01b6b7c0::sub_01b6b7c0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_01b6b7e0 { int sub_01b6b7e0(void); };

// @baa 0x01b6b7e0
int C_01b6b7e0::sub_01b6b7e0(void) { return *(int*)((char*)this + 136208); }

struct C_01b6b7f0 { void sub_01b6b7f0(int a0); };

// @baa 0x01b6b7f0
void C_01b6b7f0::sub_01b6b7f0(int a0) { *(int*)((char*)this + 136208) = a0; }

struct C_01b6b800 {
    void sub_01b6b800();
};

// @baa 0x01b6b800
void C_01b6b800::sub_01b6b800(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x21414) = 1;
  return;
}

struct C_01b6b810 { C_01b6b810* sub_01b6b810(void); };

// @baa 0x01b6b810
C_01b6b810* C_01b6b810::sub_01b6b810(void) { return this; }

struct S0051d120 {
    double sub_01b8b9f0();
};

struct S0051d690 {
    char _pad[0x213e4];
    S0051d120 *p;
    double sub_01b6b820();
};

// @baa 0x01b6b820
double S0051d690::sub_01b6b820() {
    return p->sub_01b8b9f0();
}

struct C_01b6b830 { C_01b6b830* sub_01b6b830(void); };

// @baa 0x01b6b830
C_01b6b830* C_01b6b830::sub_01b6b830(void) { return this; }

struct C_01b6b840 { C_01b6b840* sub_01b6b840(void); };

// @baa 0x01b6b840
C_01b6b840* C_01b6b840::sub_01b6b840(void) { return this; }

struct C_01b6b8d0 {
    int sub_01b6b8d0();
};

// @baa 0x01b6b8d0
int C_01b6b8d0::sub_01b6b8d0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
}

struct C_01b6b920 {
    int sub_01b6b920();
};

// @baa 0x01b6b920
int C_01b6b920::sub_01b6b920(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28;
}

struct C_01b6b980 {
    int sub_01b6b980();
};

// @baa 0x01b6b980
int C_01b6b980::sub_01b6b980(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}

struct C_01b6b9e0 {
    int sub_01b6b9e0();
};

// @baa 0x01b6b9e0
int C_01b6b9e0::sub_01b6b9e0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}

struct C_01b6ba40 {
    int sub_01b6ba40();
};

// @baa 0x01b6ba40
int C_01b6ba40::sub_01b6ba40(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x24;
}

struct C_01b6baa0 { C_01b6baa0* sub_01b6baa0(void); };

// @baa 0x01b6baa0
C_01b6baa0* C_01b6baa0::sub_01b6baa0(void) { return this; }

struct C_01b6bab0 {
    int sub_01b6bab0();
};

// @baa 0x01b6bab0
int C_01b6bab0::sub_01b6bab0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 4;
}

struct C_01b6bad0 { C_01b6bad0* sub_01b6bad0(void); };

// @baa 0x01b6bad0
C_01b6bad0* C_01b6bad0::sub_01b6bad0(void) { return this; }

struct C_01b6bae0 {
    int sub_01b6bae0();
};

// @baa 0x01b6bae0
int C_01b6bae0::sub_01b6bae0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x28;
}

struct C_01b6bb40 { C_01b6bb40* sub_01b6bb40(void); };

// @baa 0x01b6bb40
C_01b6bb40* C_01b6bb40::sub_01b6bb40(void) { return this; }

struct C_01b6bb50 { C_01b6bb50* sub_01b6bb50(void); };

// @baa 0x01b6bb50
C_01b6bb50* C_01b6bb50::sub_01b6bb50(void) { return this; }

struct C_01b6bb60 { C_01b6bb60* sub_01b6bb60(void); };

// @baa 0x01b6bb60
C_01b6bb60* C_01b6bb60::sub_01b6bb60(void) { return this; }

struct C_01b6bb70 {
    int sub_01b6bb70();
};

// @baa 0x01b6bb70
int C_01b6bb70::sub_01b6bb70(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0xc;
}

struct C_01b6bb90 { C_01b6bb90* sub_01b6bb90(void); };

// @baa 0x01b6bb90
C_01b6bb90* C_01b6bb90::sub_01b6bb90(void) { return this; }

struct C_01b6bba0 {
    int sub_01b6bba0();
};

// @baa 0x01b6bba0
int C_01b6bba0::sub_01b6bba0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0xc;
}

struct C_01b6bbf0 {
    undefined4 sub_01b6bbf0();
};

// @baa 0x01b6bbf0
undefined4 C_01b6bbf0::sub_01b6bbf0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

// @baa 0x01b6bf80
int sub_01b6bf80(void) { return 119304647; }

// @baa 0x01b6bf90
int sub_01b6bf90(void) { return 268435455; }

// @baa 0x01b6bfa0
int sub_01b6bfa0(void) { return 107374182; }

// @baa 0x01b6bfb0
int sub_01b6bfb0(void) { return 16268815; }

// @baa 0x01b6bfc0
int sub_01b6bfc0(void) { return 178956970; }

// @baa 0x01b6bfd0
int sub_01b6bfd0(void) { return 357913941; }

// @baa 0x01b6bfe0
int sub_01b6bfe0(void) { return 357913941; }

struct C_01b6bff0 {
    int sub_01b6bff0(int *);
};

// @baa 0x01b6bff0
int C_01b6bff0::sub_01b6bff0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x24;
}

struct C_01b6c060 {
    int sub_01b6c060(int *);
};

// @baa 0x01b6c060
int C_01b6c060::sub_01b6c060(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 4;
}

struct C_01b6c0c0 {
    int sub_01b6c0c0(int *);
};

// @baa 0x01b6c0c0
int C_01b6c0c0::sub_01b6c0c0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x28;
}

struct C_01b6c130 {
    int sub_01b6c130(int *);
};

// @baa 0x01b6c130
int C_01b6c130::sub_01b6c130(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0xc;
}

struct C_01b6c170 {
    int sub_01b6c170(int *);
};

// @baa 0x01b6c170
int C_01b6c170::sub_01b6c170(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01b6c1a0 {
    int sub_01b6c1a0(int *);
};

// @baa 0x01b6c1a0
int C_01b6c1a0::sub_01b6c1a0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0xc;
}

struct C_01b6c210 { C_01b6c210* sub_01b6c210(void); };

// @baa 0x01b6c210
C_01b6c210* C_01b6c210::sub_01b6c210(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01b6c220 { C_01b6c220* sub_01b6c220(void); };

// @baa 0x01b6c220
C_01b6c220* C_01b6c220::sub_01b6c220(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01b6c230 { C_01b6c230* sub_01b6c230(void); };

// @baa 0x01b6c230
C_01b6c230* C_01b6c230::sub_01b6c230(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01b6c240 { C_01b6c240* sub_01b6c240(void); };

// @baa 0x01b6c240
C_01b6c240* C_01b6c240::sub_01b6c240(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01b6c250 { C_01b6c250* sub_01b6c250(void); };

// @baa 0x01b6c250
C_01b6c250* C_01b6c250::sub_01b6c250(void) { *(int*)((char*)this + 0) = 0; return this; }

struct E_01b6c650 {};

// @baa 0x01b6c650
E_01b6c650 sub_01b6c650() { E_01b6c650 e; return e; }

// @baa 0x01b6c660
int sub_01b6c660(int a0) { return a0; }

struct E_01b6c670 {};

// @baa 0x01b6c670
E_01b6c670 sub_01b6c670() { E_01b6c670 e; return e; }

// @baa 0x01b6c680
int sub_01b6c680(int a0) { return a0; }

struct E_01b6c690 {};

// @baa 0x01b6c690
E_01b6c690 sub_01b6c690() { E_01b6c690 e; return e; }

struct E_01b6c6a0 {};

// @baa 0x01b6c6a0
E_01b6c6a0 sub_01b6c6a0() { E_01b6c6a0 e; return e; }

// @baa 0x01b6c6b0
int sub_01b6c6b0(int a0) { return a0; }

struct E_01b6c6c0 {};

// @baa 0x01b6c6c0
E_01b6c6c0 sub_01b6c6c0() { E_01b6c6c0 e; return e; }

struct E_01b6c700 {};

// @baa 0x01b6c700
E_01b6c700 sub_01b6c700() { E_01b6c700 e; return e; }

// @baa 0x01b6c710
void sub_01b6c710(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}

struct E_01b6c740 {};

// @baa 0x01b6c740
E_01b6c740 sub_01b6c740() { E_01b6c740 e; return e; }

struct E_01b6c780 {};

// @baa 0x01b6c780
E_01b6c780 sub_01b6c780() { E_01b6c780 e; return e; }

struct E_01b6c790 {};

// @baa 0x01b6c790
E_01b6c790 sub_01b6c790() { E_01b6c790 e; return e; }

struct E_01b6c7a0 {};

// @baa 0x01b6c7a0
E_01b6c7a0 sub_01b6c7a0() { E_01b6c7a0 e; return e; }

// @baa 0x01b6c7b0
void sub_01b6c7b0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}

// @baa 0x01b6c7e0
int sub_01b6c7e0(int a0) { return a0; }

struct E_01b6c7f0 {};

// @baa 0x01b6c7f0
E_01b6c7f0 sub_01b6c7f0() { E_01b6c7f0 e; return e; }

// @baa 0x01b6c800
void sub_01b6c800(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}

struct E_01b6c830 {};

// @baa 0x01b6c830
E_01b6c830 sub_01b6c830() { E_01b6c830 e; return e; }

// @baa 0x01b6c840
int sub_01b6c840(int a0) { return *(int*)a0; }

// @baa 0x01b6c880
int sub_01b6c880(int a0) { return *(int*)a0; }

// @baa 0x01b6c8d0
int sub_01b6c8d0(int a0) { return *(int*)a0; }

// @baa 0x01b6c910
int sub_01b6c910(int a0) { return *(int*)a0; }

// @baa 0x01b6c950
int sub_01b6c950(int a0) { return *(int*)a0; }

// @baa 0x01b6c980
void sub_01b6c980(void) {  }

// @baa 0x01b6c990
void sub_01b6c990(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

// @baa 0x01b6c9c0
void sub_01b6c9c0(void) {  }

// @baa 0x01b6c9f0
void sub_01b6c9f0(void) {  }

// @baa 0x01b6ca00
void sub_01b6ca00(void) {  }

// @baa 0x01b6ca10
void sub_01b6ca10(void) {  }

// @baa 0x01b6ca20
void sub_01b6ca20(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x01b6ca40
void sub_01b6ca40(void) {  }

// @baa 0x01b6ca50
void sub_01b6ca50(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x01b6ca70
void sub_01b6ca70(void) {  }

struct C_01b6cb80 {
    int sub_01b6cb80();
};

// @baa 0x01b6cb80
int C_01b6cb80::sub_01b6cb80(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}

struct C_01b6e4e0 { C_01b6e4e0* sub_01b6e4e0(int a0); };

// @baa 0x01b6e4e0
C_01b6e4e0* C_01b6e4e0::sub_01b6e4e0(int a0) { return this; }

struct C_01b6e4f0 { C_01b6e4f0* sub_01b6e4f0(int a0); };

// @baa 0x01b6e4f0
C_01b6e4f0* C_01b6e4f0::sub_01b6e4f0(int a0) { return this; }

struct C_01b6e500 { C_01b6e500* sub_01b6e500(int a0); };

// @baa 0x01b6e500
C_01b6e500* C_01b6e500::sub_01b6e500(int a0) { return this; }

struct C_01b6e510 { C_01b6e510* sub_01b6e510(int a0); };

// @baa 0x01b6e510
C_01b6e510* C_01b6e510::sub_01b6e510(int a0) { return this; }

struct C_01b6e520 { C_01b6e520* sub_01b6e520(int a0); };

// @baa 0x01b6e520
C_01b6e520* C_01b6e520::sub_01b6e520(int a0) { return this; }

struct C_01b6e530 { C_01b6e530* sub_01b6e530(int a0); };

// @baa 0x01b6e530
C_01b6e530* C_01b6e530::sub_01b6e530(int a0) { return this; }

struct C_01b6e540 { C_01b6e540* sub_01b6e540(int a0); };

// @baa 0x01b6e540
C_01b6e540* C_01b6e540::sub_01b6e540(int a0) { return this; }

// @baa 0x01b6e550
int sub_01b6e550(void) { return 119304647; }

struct S {
    int Unk00;
};

extern void __cdecl sub_01b6c3a0(struct S const &Ref, int Value);
// @baa 0x01b6e560
void __stdcall sub_01b6e560(struct S const &Ref)
{
    sub_01b6c3a0(Ref, 0);
}

// @baa 0x01b6e580
int sub_01b6e580(void) { return 268435455; }

extern void __cdecl sub_01b6c400(struct S const &Ref, int Value);
// @baa 0x01b6e590
void __stdcall sub_01b6e590(struct S const &Ref)
{
    sub_01b6c400(Ref, 0);
}

// @baa 0x01b6e5b0
int sub_01b6e5b0(void) { return 107374182; }

extern void __cdecl sub_01b6c460(struct S const &Ref, int Value);
// @baa 0x01b6e5c0
void __stdcall sub_01b6e5c0(struct S const &Ref)
{
    sub_01b6c460(Ref, 0);
}

// @baa 0x01b6e5e0
int sub_01b6e5e0(void) { return 16268815; }

extern void __cdecl sub_01b6c4c0(struct S const &Ref, int Value);
// @baa 0x01b6e5f0
void __stdcall sub_01b6e5f0(struct S const &Ref)
{
    sub_01b6c4c0(Ref, 0);
}

// @baa 0x01b6e610
int sub_01b6e610(void) { return 178956970; }

extern void __cdecl sub_01b6c520(struct S const &Ref, int Value);
// @baa 0x01b6e620
void __stdcall sub_01b6e620(struct S const &Ref)
{
    sub_01b6c520(Ref, 0);
}

// @baa 0x01b6e640
int sub_01b6e640(void) { return 357913941; }

extern void __cdecl sub_01b6c580(struct S const &Ref, int Value);
// @baa 0x01b6e650
void __stdcall sub_01b6e650(struct S const &Ref)
{
    sub_01b6c580(Ref, 0);
}

// @baa 0x01b6e670
int sub_01b6e670(void) { return 357913941; }

extern void __cdecl sub_01b6c5e0(struct S const &Ref, int Value);
// @baa 0x01b6e680
void __stdcall sub_01b6e680(struct S const &Ref)
{
    sub_01b6c5e0(Ref, 0);
}

struct C_01b6e6a0 {
    int sub_01b6e6a0(int *);
};

// @baa 0x01b6e6a0
int C_01b6e6a0::sub_01b6e6a0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x24;
}

struct C_01b6e710 {
    int sub_01b6e710(int *);
};

// @baa 0x01b6e710
int C_01b6e710::sub_01b6e710(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 4;
}

struct C_01b6e770 {
    int sub_01b6e770(int *);
};

// @baa 0x01b6e770
int C_01b6e770::sub_01b6e770(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0x28;
}

struct C_01b6e7e0 {
    int sub_01b6e7e0(int *);
};

// @baa 0x01b6e7e0
int C_01b6e7e0::sub_01b6e7e0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0xc;
}

struct C_01b6e820 {
    int sub_01b6e820(int *);
};

// @baa 0x01b6e820
int C_01b6e820::sub_01b6e820(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_01b6e850 {
    int sub_01b6e850(int *);
};

// @baa 0x01b6e850
int C_01b6e850::sub_01b6e850(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return (param_1[1] - param_2[1]) / 0xc;
}

// @baa 0x01b6eb40
int sub_01b6eb40(int a0) { return *(int*)a0; }

// @baa 0x01b6eba0
int sub_01b6eba0(int a0) { return *(int*)a0; }

// @baa 0x01b6ec00
int sub_01b6ec00(int a0) { return *(int*)a0; }

// @baa 0x01b6ec60
int sub_01b6ec60(int a0) { return *(int*)a0; }

// @baa 0x01b6ecc0
int sub_01b6ecc0(int a0) { return *(int*)a0; }

// @baa 0x01b6ecf0
void __stdcall sub_01b6ecf0(int a0) {  }

// @baa 0x01b6ed30
void __stdcall sub_01b6ed30(int a0) {  }

// @baa 0x01b6ed60
void __stdcall sub_01b6ed60(int a0) {  }

// @baa 0x01b6ed70
void __stdcall sub_01b6ed70(int a0) {  }

// @baa 0x01b6ed80
void __stdcall sub_01b6ed80(int a0) {  }

// @baa 0x01b6edb0
void __stdcall sub_01b6edb0(int a0) {  }

// @baa 0x01b6ede0
void __stdcall sub_01b6ede0(int a0) {  }

struct C_01b6f0e0 {
    void sub_01b6f0e0();
    int sub_01b6ce60(int, int);
};

// @baa 0x01b6f0e0
void C_01b6f0e0::sub_01b6f0e0(void)
{
    int param_1 = (int)this;
  int iVar1;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
    if (iVar1 != 0) {
      ((C_01b6f0e0 *)(this))->sub_01b6ce60(0, iVar1 + -1);
    }
  }
  return;
}

// @baa 0x01b6fc10
void sub_01b6fc10(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}

// @baa 0x01b6fc70
void sub_01b6fc70(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}

// @baa 0x01b6fca0
void sub_01b6fca0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}

// @baa 0x01b6fcd0
void sub_01b6fcd0(void) {  }

// @baa 0x01b6fd50
void sub_01b6fd50(void) {  }

// @baa 0x01b6fdd0
void sub_01b6fdd0(void) {  }

// @baa 0x01b6fe40
void sub_01b6fe40(void) {  }

// @baa 0x01b6fe90
void sub_01b6fe90(void) {  }

// @baa 0x01b6fea0
void sub_01b6fea0(void) {  }

// @baa 0x01b6feb0
void sub_01b6feb0(void) {  }
