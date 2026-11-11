// fmod_dsp_resampler.cpp (part 1 of 2): 11 functions
// Placed here by: neighbours 10, class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_0177910a(undefined4 *, char);
    int sub_0176b9e4(int);
};

int sub_01782a6b(...);
int sub_01782a83(...);
// @baa 0x0177910a
undefined4 C::sub_0177910a(undefined4 * param_2, char param_3)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    if (param_3 != '\0') {
      ((C *)((*(char **)((char *)this + 0x14))))->sub_0176b9e4(1);
      sub_01782a6b(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1160));
    }
    *param_2 = *(undefined4 *)(param_1 + 0x44);
    if (param_3 != '\0') {
      sub_01782a83(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1160));
    }
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0177915d {
    undefined4 sub_0177915d(undefined4 *, char);
    int sub_0176b9e4(int);
};

// @baa 0x0177915d
undefined4 C_0177915d::sub_0177915d(undefined4 * param_2, char param_3)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    if (param_3 != '\0') {
      ((C_0177915d *)((*(char **)((char *)this + 0x14))))->sub_0176b9e4(1);
      sub_01782a6b(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1160));
    }
    *param_2 = *(undefined4 *)(param_1 + 0x48);
    if (param_3 != '\0') {
      sub_01782a83(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1160));
    }
    uVar1 = 0;
  }
  return uVar1;
}

struct C_017792c6 {
    undefined4 sub_017792c6(undefined4 *);
};

// @baa 0x017792c6
undefined4 C_017792c6::sub_017792c6(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x98);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_017793ce {
    undefined4 sub_017793ce(int, undefined4 *, undefined4 *, undefined4 *, undefined4 *);
};

int sub_017975ef(...);
// @baa 0x017793ce
undefined4 C_017793ce::sub_017793ce(int param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5, undefined4 * param_6)
{
    int param_1 = (int)this;

  if (param_2 != 0) {
    sub_017975ef(param_2,param_1 + 0x5c,0x20);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x7c);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x80);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_1 + 0xac);
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = *(undefined4 *)(param_1 + 0xb0);
  }
  return 0;
}

struct C_0177951c {
    undefined4 sub_0177951c(undefined4 *);
};

// @baa 0x0177951c
undefined4 C_0177951c::sub_0177951c(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0xb4);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_017795f3 {
    undefined4 * sub_017795f3(undefined4, char);
};

// @baa 0x017795f3
undefined4 * C_017795f3::sub_017795f3(undefined4 param_2, char param_3)
{
    undefined4 * param_1 = (undefined4 *)this;

  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  if (param_3 != '\0') {
    sub_01782a6b(param_2);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return param_1;
}

struct C_01779618 {
    void sub_01779618();
};

// @baa 0x01779618
void C_01779618::sub_01779618(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if (*(char *)(param_1 + 1) != '\0') {
    sub_01782a83(*param_1);
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}

struct S {
    int __thiscall sub_017a5fc0(int arg1);
};

// @baa 0x017a5fc0
int S::sub_017a5fc0(int arg1)
{
    return 0xe;
}

struct C_017a603d {
    int sub_017a603d(undefined4, undefined4);
    int sub_0177976b(int, int);
};

// @baa 0x017a603d
int C_017a603d::sub_017a603d(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_017a603d *)(this))->sub_0177976b(param_2, param_3);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x164) = 0;
    *(undefined4 *)(param_1 + 0x174) = 2;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x134) = param_2;
    *(undefined4 *)(param_1 + 0x130) = 0;
    iVar1 = 0;
  }
  return iVar1;
}

struct C_017a60f9 {
    undefined4 sub_017a60f9(undefined1 *);
};

// @baa 0x017a60f9
undefined4 C_017a60f9::sub_017a60f9(undefined1 * param_2)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x178) == 0) ||
     (((*(uint *)(*(int *)(param_1 + 0x188) + 0x24) < *(uint *)(*(int *)(param_1 + 0x178) + 0x108)
       || ((*(byte *)(param_1 + 0x10c) & 8) != 0)) && ((*(ushort *)(param_1 + 0x10c) & 0x100) == 0))
     )) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
  }
  return 0;
}

typedef uint size_t;

struct C_017a6142 {
    undefined4 * sub_017a6142();
    int sub_01779bd0();
};

void * sub_01a37612(void *, int, size_t);
extern undefined4 g_023dd984;
// @baa 0x017a6142
undefined4 * C_017a6142::sub_017a6142(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_017a6142 *)(this))->sub_01779bd0();
  param_1[0x5a] = 0xffffffff;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x51] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x59] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x62] = 0;
  *param_1 = (undefined4)((&g_023dd984));
  param_1[0x5b] = 4;
  param_1[0x5d] = 2;
  sub_01a37612(param_1 + 100,0,0x38);
  return param_1;
}
