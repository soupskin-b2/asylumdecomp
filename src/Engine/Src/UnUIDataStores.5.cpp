// UnUIDataStores.cpp (part 5 of 6): 5 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00d92b10(int);
};

int sub_0053df70(...);
// @baa 0x00d92b10
void C::sub_00d92b10(int param_2)
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

struct C_00d940f0 {
    void sub_00d940f0(int);
};

// @baa 0x00d940f0
void C_00d940f0::sub_00d940f0(int param_2)
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

struct C_00d94200 {
    void sub_00d94200(int);
};

// @baa 0x00d94200
void C_00d94200::sub_00d94200(int param_2)
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

// @baa 0x00d92ce0
UINT __cdecl sub_00d92ce0(UINT A, UINT B)
{
    return A <= B ? A : B;
}

// @baa 0x00d9bab0
INT __stdcall sub_00d9bab0(INT A, INT B, INT C, BYTE* Out)
{
    *Out = 0;
    return 1;
}
