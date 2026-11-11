// BmGame_1670000.cpp (part 4 of 4): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01676d40(int);
};

int sub_0053df70(...);
// @baa 0x01676d40
void C::sub_01676d40(int param_2)
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

struct C_01674090
{
    INT pad_00[1];
    INT Value;

    C_01674090* sub_01674090();
};

// @baa 0x01674090
C_01674090* C_01674090::sub_01674090()
{
    return Value ? 0 : this;
}

struct C_0167f8e0
{
    INT pad_00[2];
    INT field_08;

    void sub_0167aa60();
    void sub_0167f8e0();
};

// @baa 0x0167f8e0
void C_0167f8e0::sub_0167f8e0()
{
    if (field_08)
        sub_0167aa60();
}
