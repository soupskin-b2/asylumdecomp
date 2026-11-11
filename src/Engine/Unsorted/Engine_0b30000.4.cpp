// Engine_0b30000.cpp (part 4 of 4): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00b3c150(int);
};

int sub_0053df70(...);
// @baa 0x00b3c150
void C::sub_00b3c150(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x28,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00b3d310 {
    void sub_00b3d310(int);
};

// @baa 0x00b3d310
void C_00b3d310::sub_00b3d310(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00b3de60 {
    undefined4 sub_00b3de60(byte);
};

int sub_0053dfa0(...);
int sub_00b3d3a0(void);
// @baa 0x00b3de60
undefined4 C_00b3de60::sub_00b3de60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b3d3a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
