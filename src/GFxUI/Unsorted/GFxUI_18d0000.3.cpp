// GFxUI_18d0000.cpp (part 3 of 3): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_018db7a0();
};

// @baa 0x018db7a0
undefined4 C::sub_018db7a0(void)
{
    float * param_1 = (float *)this;

  if (((((*param_1 == 1.0) && (param_1[2] == 1.0)) && (param_1[4] == 1.0)) &&
      ((param_1[6] == 1.0 && (param_1[1] == 0.0)))) &&
     ((param_1[3] == 0.0 && ((param_1[5] == 0.0 && (param_1[7] == 0.0)))))) {
    return 1;
  }
  return 0;
}
