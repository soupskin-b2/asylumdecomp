// DepthRendering.cpp: 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_00a88470(int);
    int sub_00a7ff60(int, int);
};

// @baa 0x00a88470
int C::sub_00a88470(int param_2)
{
    int * param_1 = (int *)this;
  ((C *)(this))->sub_00a7ff60((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x4c + *param_1;
  }
  return 0;
}

void sub_00a8cee0();
// @baa 0x00a925a0
void sub_00a925a0(void) { sub_00a8cee0(); }
