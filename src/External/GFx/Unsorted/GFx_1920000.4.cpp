// GFx_1920000.cpp (part 4 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_0192aa60(float);
};

// @baa 0x0192aa60
void C::sub_0192aa60(float param_2)
{
    float * param_1 = (float *)this;

  param_1[2] = *param_1 + param_2;
  return;
}
