// fmod_output_dsound.cpp: 6 functions
// Placed here by: neighbours 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_017b9b4c(undefined4 *);
};

int sub_017b9ad6(void);
// @baa 0x017b9b4c
int C::sub_017b9b4c(undefined4 * param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = 0x25;
  }
  else {
    if ((*(char *)(param_1 + 0x2c) == '\0') && (iVar1 = sub_017b9ad6(), iVar1 != 0)) {
      return iVar1;
    }
    *param_2 = *(undefined4 *)(param_1 + 0x3ac);
    iVar1 = 0;
  }
  return iVar1;
}

struct C_017b9d2f {
    undefined4 sub_017b9d2f(undefined4 *);
};

// @baa 0x017b9d2f
undefined4 C_017b9d2f::sub_017b9d2f(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x254);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_017ba987 {
    undefined4 * sub_017ba987(byte);
};

int sub_00402660(...);
extern undefined4 g_023dd674;
// @baa 0x017ba987
undefined4 * C_017ba987::sub_017ba987(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dd674));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017ba9a4 {
    undefined4 * sub_017ba9a4(byte);
};

// @baa 0x017ba9a4
undefined4 * C_017ba9a4::sub_017ba9a4(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dd674));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017ba9c1 {
    undefined4 * sub_017ba9c1(byte);
};

// @baa 0x017ba9c1
undefined4 * C_017ba9c1::sub_017ba9c1(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dd674));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017ba9de {
    undefined4 * sub_017ba9de(byte);
};

// @baa 0x017ba9de
undefined4 * C_017ba9de::sub_017ba9de(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dd674));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
