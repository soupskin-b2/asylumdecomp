// UnProp.cpp (part 3 of 3): 3 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int wcscpy_s(...);
// @baa 0x0062bab0
wchar_t * sub_0062bab0(wchar_t * param_1, wchar_t * param_2)
{
  wcscpy_s(param_1,0x1000,param_2);
  return param_1;
}

extern "C" __declspec(dllimport) int wcscat_s(...);
// @baa 0x0062bad0
wchar_t * sub_0062bad0(wchar_t * param_1, wchar_t * param_2)
{
  wcscat_s(param_1,0x4000,param_2);
  return param_1;
}

// @baa 0x0062bb30
wchar_t * sub_0062bb30(wchar_t * param_1, wchar_t * param_2)
{
  wcscpy_s(param_1,0x4000,param_2);
  return param_1;
}
