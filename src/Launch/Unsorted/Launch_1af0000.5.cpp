// Launch_1af0000.cpp (part 5 of 5): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01af8270
float10 sub_01af8270(double param_1)
{
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  if (fVar1 < (float10)-1.0) {
    return (float10)0;
  }
  if (fVar1 < (float10)0) {
    return fVar1 + (float10)1.0;
  }
  if (fVar1 < (float10)1) {
    return (float10)1 - fVar1;
  }
  return (float10)0;
}
