// Engine_1a70000.cpp (part 3 of 3): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int memmove_s(...);
// @baa 0x01a70bc0
void * sub_01a70bc0(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

// @baa 0x01a79a40
void * sub_01a79a40(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

struct Sub
{
    void sub_01a76240();
};

// @baa 0x01a79b00
void __stdcall sub_01a79b00(Sub* Object)
{
    Object->sub_01a76240();
}
