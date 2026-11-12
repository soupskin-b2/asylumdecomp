// Engine_1a90000.cpp (part 3 of 4): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int memmove_s(...);
// @baa 0x01a9c190
void * sub_01a9c190(void * param_1, int param_2, int param_3)
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

struct C
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C* sub_01a9e6f0();
};

// @baa 0x01a9e6f0
C* C::sub_01a9e6f0()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}
