// Engine_0780000.cpp (part 5 of 5): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_0078fcf0(int);
};

int sub_0053df70(...);
// @baa 0x0078fcf0
void C::sub_0078fcf0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x1c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0078fd30 {
    void sub_0078fd30(int);
};

// @baa 0x0078fd30
void C_0078fd30::sub_0078fd30(int param_2)
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

// @baa 0x00785620
INT __stdcall sub_00785620(INT Value)
{
    return (Value + 1) & ~1;
}

struct F00788e10 {
    INT FieldA;
    INT FieldB;
    INT FieldC;

    F00788e10* sub_00788e10(const F00788e10* Other);
};

// @baa 0x00788e10
F00788e10* F00788e10::sub_00788e10(const F00788e10* Other)
{
    FieldA = Other->FieldA;
    FieldB = Other->FieldB;
    FieldC = -1;
    return this;
}
