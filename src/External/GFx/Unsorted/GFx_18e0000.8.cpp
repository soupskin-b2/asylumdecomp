// GFx_18e0000.cpp (part 8 of 8): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_018eb110(float *);
};

// @baa 0x018eb110
void C::sub_018eb110(float * param_2)
{
    int param_1 = (int)this;

  *param_2 = (float)*(int *)(param_1 + 8);
  param_2[1] = (float)*(int *)(param_1 + 0xc);
  return;
}
