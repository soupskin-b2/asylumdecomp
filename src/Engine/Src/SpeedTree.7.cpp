// SpeedTree.cpp (part 7 of 8): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01a753c0(float *);
};

// @baa 0x01a753c0
void C::sub_01a753c0(float * param_2)
{
    float * param_1 = (float *)this;

  *param_2 = -*param_1;
  param_2[1] = -param_1[1];
  param_2[2] = -param_1[2];
  return;
}
