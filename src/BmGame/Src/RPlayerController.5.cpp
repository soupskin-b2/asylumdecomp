// RPlayerController.cpp (part 5 of 6): 6 functions
// Placed here by: neighbours 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01621170(int);
};

int sub_0053df70(...);
// @baa 0x01621170
void C::sub_01621170(int param_2)
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

struct C_01621610 {
    void sub_01621610(int);
};

// @baa 0x01621610
void C_01621610::sub_01621610(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_01621790 {
    void sub_01621790(int);
};

// @baa 0x01621790
void C_01621790::sub_01621790(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x14,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_016243b0 {
    void sub_016243b0(int);
};

// @baa 0x016243b0
void C_016243b0::sub_016243b0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

extern INT g_026e2534;
// @baa 0x01719070
void __stdcall sub_01719070(BYTE Value)
{
    g_026e2534 = Value;
}

struct Sub
{
    void sub_00803c90(INT Value);
};

struct C_016d27b0
{
    char pad_00[0xb0];
    Sub* Object;

    void sub_016d27b0();
};

// @baa 0x016d27b0
void C_016d27b0::sub_016d27b0()
{
    Object->sub_00803c90(0);
}
