// GFx_1920000.cpp (part 5 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_0192aa70(float);
};

// @baa 0x0192aa70
void C::sub_0192aa70(float param_2)
{
    int param_1 = (int)this;

  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 4) + param_2;
  return;
}
