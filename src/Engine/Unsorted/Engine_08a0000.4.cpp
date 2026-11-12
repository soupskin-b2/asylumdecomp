// Engine_08a0000.cpp (part 4 of 4): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int wcscpy_s(...);
// @baa 0x008aea10
wchar_t * sub_008aea10(wchar_t * param_1, wchar_t * param_2)
{
  wcscpy_s(param_1,0x80,param_2);
  return param_1;
}

struct Sub
{
    void sub_009b0860(INT Value);
};

extern Sub* g_026b62b8;
// @baa 0x008a7800
void sub_008a7800()
{
    g_026b62b8->sub_009b0860(0);
}
