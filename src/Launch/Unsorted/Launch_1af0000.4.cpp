// Launch_1af0000.cpp (part 4 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01af54f0
float10 sub_01af54f0(double * param_1, double * param_2)
{
  if (*param_1 < *param_2) {
    return (float10)*param_2;
  }
  return (float10)*param_1;
}
