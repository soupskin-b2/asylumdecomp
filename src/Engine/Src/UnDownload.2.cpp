// UnDownload.cpp (part 2 of 3): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00df9b90(wchar_t *);
};

extern "C" __declspec(dllimport) int wcscpy_s(...);
// @baa 0x00df9b90
void C::sub_00df9b90(wchar_t * param_2)
{
    int param_1 = (int)this;

  wcscpy_s((wchar_t *)(param_1 + 0x850),0x100,param_2);
  return;
}
