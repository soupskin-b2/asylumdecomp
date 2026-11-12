// UnUIEditor.cpp (part 4 of 5): 3 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_014a0e40(int);
};

int sub_0053df70(...);
// @baa 0x014a0e40
void C::sub_014a0e40(int param_2)
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

// UnrealEd_14a0000.cpp (part 4 of 6): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
struct C_014adc00 {
    undefined4 sub_014adc00(byte);
};

int sub_0053dfa0(...);
int sub_013e9bc0(void);
// @baa 0x014adc00
undefined4 C_014adc00::sub_014adc00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013e9bc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// UnrealEd_14a0000.cpp (part 6 of 6): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
struct C_014adc60 {
    undefined4 sub_014adc60(byte);
};

// @baa 0x014adc60
undefined4 C_014adc60::sub_014adc60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013e9bc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
