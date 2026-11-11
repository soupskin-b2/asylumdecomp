// GFxUI_18f0000.cpp (part 1 of 3): 24 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { int sub_018f0dc0(void); };

// @baa 0x018f0dc0
int C::sub_018f0dc0(void) { return *(int*)((char*)this + 0); }

struct C_018f0dd0 { int sub_018f0dd0(void); };

// @baa 0x018f0dd0
int C_018f0dd0::sub_018f0dd0(void) { return *(int*)((char*)this + 0); }

struct C_018f0df0 {
    bool sub_018f0df0();
};

// @baa 0x018f0df0
bool C_018f0df0::sub_018f0df0(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_018f0e00 { int sub_018f0e00(void); };

// @baa 0x018f0e00
int C_018f0e00::sub_018f0e00(void) { return *(int*)((char*)this + 0); }

struct C_018f0e10 { int sub_018f0e10(void); };

// @baa 0x018f0e10
int C_018f0e10::sub_018f0e10(void) { return *(int*)((char*)this + 0); }

struct C_018f0e20 {
    undefined4 sub_018f0e20();
};

// @baa 0x018f0e20
undefined4 C_018f0e20::sub_018f0e20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *(undefined1 *)(param_1 + 1) = 0;
  return *param_1;
}

struct C_018f12a0 {
    void sub_018f12a0();
};

// @baa 0x018f12a0
void C_018f12a0::sub_018f12a0(void)
{
    int * param_1 = (int *)this;

  param_1[3] = param_1[3] + param_1[2];
  param_1[4] = param_1[4] + param_1[1];
  if (0 < param_1[3]) {
    param_1[3] = param_1[3] - *param_1;
    param_1[4] = param_1[4] + 1;
  }
  return;
}

struct C_018f12d0 { int sub_018f12d0(void); };

// @baa 0x018f12d0
int C_018f12d0::sub_018f12d0(void) { return *(int*)((char*)this + 16); }

struct C_018f12e0 { int sub_018f12e0(void); };

// @baa 0x018f12e0
int C_018f12e0::sub_018f12e0(void) { return *(int*)((char*)this + 4); }

struct C_018f12f0 { int sub_018f12f0(void); };

// @baa 0x018f12f0
int C_018f12f0::sub_018f12f0(void) { return *(int*)((char*)this + 8); }

// @baa 0x018f1300
void sub_018f1300(undefined1 * param_1, undefined1 * param_2)
{
  *param_1 = *param_2;
  return;
}

// @baa 0x018f1310
void sub_018f1310(undefined1 * param_1, undefined1 * param_2)
{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}

// @baa 0x018f1330
void sub_018f1330(undefined1 * param_1, undefined1 * param_2)
{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}

// @baa 0x018f1360
void sub_018f1360(undefined1 * param_1, undefined1 * param_2)
{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = 0xff;
  return;
}

// @baa 0x018f16b0
void sub_018f16b0(undefined1 * param_1, undefined1 * param_2)
{
  *param_1 = *param_2;
  return;
}

// @baa 0x018f1740
void sub_018f1740(undefined1 * param_1, undefined1 * param_2)
{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}

// @baa 0x018f1840
void sub_018f1840(undefined1 * param_1, undefined1 * param_2)
{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}

// @baa 0x018f19b0
void sub_018f19b0(undefined1 * param_1, undefined1 * param_2)
{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}

struct C_018f1ab0 { int sub_018f1ab0(void); };

// @baa 0x018f1ab0
int C_018f1ab0::sub_018f1ab0(void) { return *(int*)((char*)this + 0); }

struct C_018f1ac0 {
    int sub_018f1ac0(int);
};

// @baa 0x018f1ac0
int C_018f1ac0::sub_018f1ac0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2 * 2;
}

struct C_018f1ad0 {
    int sub_018f1ad0(int);
};

// @baa 0x018f1ad0
int C_018f1ad0::sub_018f1ad0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2 * 2;
}

struct C_018f1ae0 {
    int sub_018f1ae0(int);
};

// @baa 0x018f1ae0
int C_018f1ae0::sub_018f1ae0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2 * 4;
}

struct C_018f1b70 {
    int sub_018f1b70(int);
};

// @baa 0x018f1b70
int C_018f1b70::sub_018f1b70(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2;
}

struct C_018f1ba0 { int sub_018f1ba0(void); };

// @baa 0x018f1ba0
int C_018f1ba0::sub_018f1ba0(void) { return *(int*)((char*)this + 20); }
