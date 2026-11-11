// Engine_0bf0000.cpp (part 3 of 4): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x00bfb9d0
uint sub_00bfb9d0(uint param_1, uint param_2, uint param_3)
{
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  if (param_1 < param_3) {
    param_1 = param_3;
  }
  return param_1;
}
