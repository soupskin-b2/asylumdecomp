// Launch_1ab0000.cpp (part 2 of 4): 8 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01ab2a80(byte);
};

int sub_00402660(...);
int sub_01ab2680(void);
// @baa 0x01ab2a80
undefined4 C::sub_01ab2a80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ab2680();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01ab2aa0 {
    void sub_01ab2aa0();
};

extern undefined4 g_0240d158;
extern undefined4 g_027be3dc;
// @baa 0x01ab2aa0
void C_01ab2aa0::sub_01ab2aa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240d158));
  g_027be3dc = g_027be3dc + -1;
  if (g_027be3dc != 0) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  sub_01ab2680();
  return;
}

struct C_01ab2b00 {
    undefined4 sub_01ab2b00(byte);
};

// @baa 0x01ab2b00
undefined4 C_01ab2b00::sub_01ab2b00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ab2680();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

int sub_01ab3960(...);
extern undefined4 *g_027be4b8;
// @baa 0x01ab42b0
int sub_01ab42b0(int param_1)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(g_027be4b8);
  if (*g_027be4b8 == 0) {
    iVar2 = sub_01ab3960(0xc);
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 4) = 0;
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    *(int *)(*piVar1 + 4) = *piVar1;
    *(int *)(*piVar1 + 8) = *piVar1;
  }
  piVar1 = *(int **)(*piVar1 + 4);
  for (; param_1 != 0; param_1 = param_1 + -1) {
    piVar1 = (int *)piVar1[1];
  }
  return *piVar1 + 8;
}

// @baa 0x01ab4300
undefined4 sub_01ab4300(int param_1)
{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(g_027be4b8);
  if (*g_027be4b8 == 0) {
    iVar1 = sub_01ab3960(0xc);
    *piVar2 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    *(int *)(*piVar2 + 4) = *piVar2;
    *(int *)(*piVar2 + 8) = *piVar2;
  }
  piVar2 = *(int **)(*piVar2 + 4);
  if (param_1 != 0) {
    do {
      param_1 = param_1 + -1;
      piVar2 = (int *)piVar2[1];
    } while (param_1 != 0);
    return *(undefined4 *)(*piVar2 + 4);
  }
  return *(undefined4 *)(*piVar2 + 4);
}

struct C_01ab49f0 {
    void sub_01ab49f0();
};

int sub_01ab3290(...);
int sub_01ab4990(...);
// @baa 0x01ab49f0
void C_01ab49f0::sub_01ab49f0(void)
{
    int * param_1 = (int *)this;

  sub_01ab4990(*param_1,param_1[2] * 0x10 + *param_1);
  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ab4e70 {
    void sub_01ab4e70();
};

// @baa 0x01ab4e70
void C_01ab4e70::sub_01ab4e70(void)
{
    int * param_1 = (int *)this;

  sub_01ab4990(*param_1,param_1[2] * 0x10 + *param_1);
  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

extern undefined4 *g_027ca4d4;
// @baa 0x01ab6020
undefined4 sub_01ab6020(int param_1)
{
  if (g_027ca4d4 != 0) {
    return *(undefined4 *)(*g_027ca4d4 + param_1 * 4);
  }
  return 0;
}
