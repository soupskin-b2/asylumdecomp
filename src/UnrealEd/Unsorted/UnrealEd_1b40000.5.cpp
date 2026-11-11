// UnrealEd_1b40000.cpp (part 5 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01b49d70
float10 sub_01b49d70(double * param_1, double * param_2)
{
  if (*param_1 < *param_2) {
    return (float10)*param_1;
  }
  return (float10)*param_2;
}
