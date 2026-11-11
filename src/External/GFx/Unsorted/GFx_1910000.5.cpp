// GFx_1910000.cpp (part 5 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_0191f8a0(float *, float *);
};

// @baa 0x0191f8a0
void C::sub_0191f8a0(float * param_2, float * param_3)
{
    int param_1 = (int)this;

  *param_2 = (float)*(int *)(param_1 + 0xc) * *(float *)(param_1 + 0x24);
  *param_3 = (float)*(int *)(param_1 + 0x10) * *(float *)(param_1 + 0x24);
  return;
}
