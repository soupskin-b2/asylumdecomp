// Core_0530000.cpp (part 2 of 2): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

typedef uint size_t;

typedef size_t rsize_t;

extern "C" __declspec(dllimport) int strncpy_s(...);
// @baa 0x0053e080
char * sub_0053e080(char * param_1, char * param_2, rsize_t param_3)
{
  strncpy_s(param_1,param_3,param_2,param_3 - 1);
  return param_1;
}
