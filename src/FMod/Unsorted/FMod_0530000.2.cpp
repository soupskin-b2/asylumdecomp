// FMod_0530000.cpp (part 2 of 2): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int wcscat_s(...);
// @baa 0x0053f9d0
wchar_t * sub_0053f9d0(wchar_t * param_1, wchar_t * param_2)
{
  wcscat_s(param_1,0x100,param_2);
  return param_1;
}

typedef unsigned long DWORD;

extern "C" __declspec(dllimport) void* __stdcall TlsGetValue(DWORD Index);
// @baa 0x0053f320
void sub_0053f320(DWORD Index)
{
    TlsGetValue(Index);
}

extern "C" __declspec(dllimport) int __stdcall TlsFree(DWORD Index);
// @baa 0x0053f330
void sub_0053f330(DWORD Index)
{
    TlsFree(Index);
}
