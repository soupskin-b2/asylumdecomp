// FMOD_17a0000.cpp (part 1 of 3): 14 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x017a2ec9
undefined4 sub_017a2ec9(int param_1, int * param_2)
{
  if (param_2 == (int *)0x0) {
    return 0x25;
  }
  if (param_1 == 0) {
    return 0x24;
  }
  *param_2 = param_1;
  return 0;
}

struct C {
    undefined4 sub_017a2f58(undefined4 *);
};

// @baa 0x017a2f58
undefined4 C::sub_017a2f58(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0xe8);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_017a2f72 {
    undefined4 sub_017a2f72(undefined4 *);
};

// @baa 0x017a2f72
undefined4 C_017a2f72::sub_017a2f72(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0xec);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_017a3bd7 {
    undefined4 sub_017a3bd7(undefined4 *);
};

// @baa 0x017a3bd7
undefined4 C_017a3bd7::sub_017a3bd7(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0xf8);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_017a76b2 {
    undefined4 sub_017a76b2(undefined4 *);
};

// @baa 0x017a76b2
undefined4 C_017a76b2::sub_017a76b2(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x178);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_017a7765 {
    undefined4 * sub_017a7765(byte);
};

int sub_00402660(...);
extern undefined4 g_023dd674;
// @baa 0x017a7765
undefined4 * C_017a7765::sub_017a7765(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dd674));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017a8e77 {
    int sub_017a8e77(undefined4);
};

int __stdcall sub_017bccbc(int);
// @baa 0x017a8e77
int C_017a8e77::sub_017a8e77(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = sub_017bccbc(param_2);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x2f4) != 0) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2f4) + 0x188) + 0x18) =
           *(undefined4 *)(param_1 + 0x20);
    }
    iVar1 = 0;
  }
  return iVar1;
}

struct T { int sub_017aa40f(); };

struct S { int sub_017aabd5(int a, int b, int c, int d); };

// @baa 0x017aabd5
int S::sub_017aabd5(int a, int b, int c, int d)
{
  return ((T *)this)->sub_017aa40f();
}

struct C_017aabdd {
    undefined4 sub_017aabdd(uint, int);
    int sub_017aa84b();
    int sub_017aa40f();
};

// @baa 0x017aabdd
undefined4 C_017aabdd::sub_017aabdd(uint param_2, int param_3)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  if ((param_2 < *(uint *)(param_1 + 0x28)) && (param_2 + param_3 <= *(uint *)(param_1 + 0x28))) {
    ((C_017aabdd *)(this))->sub_017aa84b();
    *(uint *)(param_1 + 0x30) = param_2;
    *(int *)(param_1 + 0x34) = param_3;
    ((C_017aabdd *)(this))->sub_017aa40f();
    uVar1 = 0;
  }
  else {
    uVar1 = 0x25;
  }
  return uVar1;
}

// @baa 0x017ab6bc
int __stdcall sub_017ab6bc(unsigned a, unsigned b)
{
    return 0x25;
}

// @baa 0x017ab6c2
int __stdcall sub_017ab6c2(int a, int b, int c)
{
    return 0x25;
}

struct C_017ac9de {
    undefined4 * sub_017ac9de(byte);
};

// @baa 0x017ac9de
undefined4 * C_017ac9de::sub_017ac9de(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dd674));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017aca18 {
    undefined4 * sub_017aca18(byte);
};

// @baa 0x017aca18
undefined4 * C_017aca18::sub_017aca18(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dd674));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017aca35 {
    undefined4 * sub_017aca35(byte);
};

// @baa 0x017aca35
undefined4 * C_017aca35::sub_017aca35(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dd674));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
