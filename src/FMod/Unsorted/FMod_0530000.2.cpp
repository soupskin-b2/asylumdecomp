// FMod_0530000.cpp (part 2 of 2): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int wcscat_s(...);
// @baa 0x0053f9d0
wchar_t * sub_0053f9d0(wchar_t * param_1, wchar_t * param_2)
{
  wcscat_s(param_1,0x100,param_2);
  return param_1;
}
