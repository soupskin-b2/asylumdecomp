// UnrealEd_1b70000.cpp (part 3 of 3): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01b78e50(float *);
};

// @baa 0x01b78e50
void C::sub_01b78e50(float * param_2)
{
    float * param_1 = (float *)this;

  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - param_2[1];
  param_1[2] = param_1[2] - param_2[2];
  return;
}
