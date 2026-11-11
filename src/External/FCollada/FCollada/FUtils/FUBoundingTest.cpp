// FUBoundingTest.cpp (part 1 of 2): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01878db0(float *);
};

// @baa 0x01878db0
undefined4 C::sub_01878db0(float * param_2)
{
    float * param_1 = (float *)this;

  if ((((*param_1 <= *param_2) && (*param_2 <= param_1[4])) && (param_1[1] <= param_2[1])) &&
     (((param_2[1] <= param_1[5] && (param_1[2] <= param_2[2])) && (param_2[2] <= param_1[6])))) {
    return 1;
  }
  return 0;
}
