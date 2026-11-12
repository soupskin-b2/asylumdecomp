// UnDownload.cpp (part 2 of 3): 2 functions
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

struct Sub
{
    void sub_00544ab0(const wchar_t* Name);
};

struct C_00dfa3e0
{
    char pad_00[0x3c];
    Sub Marker;

    void sub_00dfa3e0();
};

// @baa 0x00dfa3e0
void C_00dfa3e0::sub_00dfa3e0()
{
    ((Sub*)((char*)this + 0x3c))->sub_00544ab0(L"Enabled");
}
