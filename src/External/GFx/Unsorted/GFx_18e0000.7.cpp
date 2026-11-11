// GFx_18e0000.cpp (part 7 of 8): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_018eb0f0(float *);
};

// @baa 0x018eb0f0
void C::sub_018eb0f0(float * param_2)
{
    int param_1 = (int)this;

  *param_2 = (float)*(int *)(param_1 + 8);
  param_2[1] = (float)*(int *)(param_1 + 0xc);
  return;
}
