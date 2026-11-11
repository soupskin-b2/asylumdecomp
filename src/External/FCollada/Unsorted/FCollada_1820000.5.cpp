// FCollada_1820000.cpp (part 5 of 6): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01826140
undefined4 sub_01826140(double param_1, double param_2, double param_3)
{
  if ((param_1 - param_2 < param_3) && (param_2 - param_1 < param_3)) {
    return 1;
  }
  return 0;
}
