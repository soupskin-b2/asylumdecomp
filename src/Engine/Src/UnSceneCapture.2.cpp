// UnSceneCapture.cpp (part 2 of 2): 5 functions
// Placed here by: neighbours 4, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_008c10e0(int);
};

int sub_0053df70(...);
// @baa 0x008c10e0
void C::sub_008c10e0(int param_2)
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

void sub_008c5a00();
// @baa 0x008cdf50
void sub_008cdf50(void) { sub_008c5a00(); }

// @baa 0x008ce000
void sub_008ce000(void) { sub_008c5a00(); }

// @baa 0x008ce0f0
void sub_008ce0f0(void) { sub_008c5a00(); }

// @baa 0x008ce1c0
void sub_008ce1c0(void) { sub_008c5a00(); }
