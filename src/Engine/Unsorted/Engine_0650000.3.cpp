// Engine_0650000.cpp (part 3 of 9): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_007249d0();
// @baa 0x00653540
void sub_00653540(void) { sub_007249d0(); }

// @baa 0x006535b0
void sub_006535b0(void) { sub_007249d0(); }

// @baa 0x006535c0
void sub_006535c0(void) { sub_007249d0(); }

// @baa 0x006535d0
void sub_006535d0(void) { sub_007249d0(); }

struct C {
    void sub_0065fb70(int);
};

int sub_0053df70(...);
// @baa 0x0065fb70
void C::sub_0065fb70(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 6,8);
      *param_1 = iVar1;
    }
  }
  return;
}
