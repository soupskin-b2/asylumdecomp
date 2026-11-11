// UnObj.cpp (part 3 of 3): 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

typedef uint size_t;

typedef size_t rsize_t;

extern "C" __declspec(dllimport) int strcpy_s(...);
// @baa 0x005c1c20
char * sub_005c1c20(char * param_1, rsize_t param_2, char * param_3)
{
  strcpy_s(param_1,param_2,param_3);
  return param_1;
}

extern "C" __declspec(dllimport) int wcscpy_s(...);
// @baa 0x005c1c40
wchar_t * sub_005c1c40(wchar_t * param_1, rsize_t param_2, wchar_t * param_3)
{
  wcscpy_s(param_1,param_2,param_3);
  return param_1;
}
