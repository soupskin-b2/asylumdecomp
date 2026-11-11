// fmod_channel_openal.cpp (part 1 of 3): 5 functions
// Placed here by: class 3, neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_017ab751(char, char);
};

int sub_01782a6b(...);
int sub_01782a83(...);
// @baa 0x017ab751
undefined4 C::sub_017ab751(char param_2, char param_3)
{
    int param_1 = (int)this;

  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffff7;
  }
  else {
    if (param_3 != '\0') {
      sub_01782a6b(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1158));
      *(undefined4 *)(param_1 + 0x158) = 0;
      sub_01782a83(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1158));
    }
    if (*(int *)(param_1 + 0x15c) != 0) {
      *(int *)(param_1 + 0x158) = *(int *)(*(int *)(param_1 + 0x15c) + 0x108) + 1;
    }
  }
  return 0;
}

struct C_017ac9fb {
    undefined4 * sub_017ac9fb(byte);
};

int sub_00402660(...);
extern undefined4 g_023dd674;
// @baa 0x017ac9fb
undefined4 * C_017ac9fb::sub_017ac9fb(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dd674));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017c3d71 {
    int sub_017c3d71(undefined4);
    int sub_017bcb6e(int);
};

// @baa 0x017c3d71
int C_017c3d71::sub_017c3d71(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_017c3d71 *)(this))->sub_017bcb6e(param_2);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x2e8) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x2e8) + 0x184) = *(undefined4 *)(param_1 + 0x34);
    }
    iVar1 = 0;
  }
  return iVar1;
}

struct C_017c3d9a {
    int sub_017c3d9a(undefined4);
};

int __stdcall sub_017bccbc(int);
// @baa 0x017c3d9a
int C_017c3d9a::sub_017c3d9a(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = sub_017bccbc(param_2);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x2e8) != 0) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2e8) + 0x188) + 0x18) =
           *(undefined4 *)(param_1 + 0x20);
    }
    iVar1 = 0;
  }
  return iVar1;
}

struct C_017c49f8 {
    undefined4 * sub_017c49f8(byte);
};

// @baa 0x017c49f8
undefined4 * C_017c49f8::sub_017c49f8(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dd674));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
