// UnrealEd_13c0000.cpp (part 2 of 2): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_013ca6c0(...);
extern "C" __declspec(dllimport) int _wcsicmp(...);
// @baa 0x013ca8c0
void sub_013ca8c0(undefined4 param_1, undefined4 param_2)
{
  wchar_t *_Str2;
  wchar_t *_Str1;
  
  _Str2 = (wchar_t *)sub_013ca6c0(param_2);
  _Str1 = (wchar_t *)sub_013ca6c0(param_1);
  _wcsicmp(_Str1,_Str2);
  return;
}
