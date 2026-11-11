// UnUIStyleEditor.cpp (part 2 of 5): 6 functions
// Placed here by: neighbours 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_014dc1f0();
// @baa 0x014dfcf0
void sub_014dfcf0(void) { sub_014dc1f0(); }

struct C {
    void sub_014e40b0(int);
};

int sub_0053df70(...);
// @baa 0x014e40b0
void C::sub_014e40b0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_014e41b0 {
    void sub_014e41b0(int);
};

// @baa 0x014e41b0
void C_014e41b0::sub_014e41b0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_014e4250 {
    void sub_014e4250(int);
};

// @baa 0x014e4250
void C_014e4250::sub_014e4250(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_014e42f0 {
    void sub_014e42f0(int);
};

// @baa 0x014e42f0
void C_014e42f0::sub_014e42f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

void sub_014dd570();
// @baa 0x014e8b60
void sub_014e8b60(void) { sub_014dd570(); }
