// UnrealEd_1b60000.cpp (part 3 of 3): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01b64ac0(float *);
};

// @baa 0x01b64ac0
void C::sub_01b64ac0(float * param_2)
{
    float * param_1 = (float *)this;

  *param_1 = *param_2 + *param_1;
  param_1[1] = param_2[1] + param_1[1];
  param_1[2] = param_2[2] + param_1[2];
  param_1[3] = param_2[3] + param_1[3];
  param_1[4] = param_2[4] + param_1[4];
  param_1[5] = param_2[5] + param_1[5];
  param_1[6] = param_2[6] + param_1[6];
  param_1[7] = param_2[7] + param_1[7];
  param_1[8] = param_2[8] + param_1[8];
  param_1[9] = param_2[9] + param_1[9];
  return;
}
