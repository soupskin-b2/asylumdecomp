// UnrealEd_1b40000.cpp (part 4 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int * sub_01b44260(int *, undefined4);
    int sub_01b43fe0(int);
};

extern "C" __declspec(dllimport) int _invalid_parameter_noinfo(...);
// @baa 0x01b44260
int * C::sub_01b44260(int * param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C *)(this))->sub_01b43fe0(param_3);
  *param_2 = 0;
  param_2[1] = iVar1;
  if (param_1 == 0) {
    _invalid_parameter_noinfo();
  }
  *param_2 = param_1;
  return param_2;
}
