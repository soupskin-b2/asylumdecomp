// UnEdFact.cpp (part 2 of 4): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int _wcsicmp(...);
// @baa 0x00717870
bool sub_00717870(wchar_t * param_1)
{
  int iVar1;
  
  iVar1 = _wcsicmp(L"TF_Linear",param_1);
  return iVar1 == 0;
}
