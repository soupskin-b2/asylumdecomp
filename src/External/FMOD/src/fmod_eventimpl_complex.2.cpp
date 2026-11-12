// fmod_eventimpl_complex.cpp (part 2 of 2): 3 functions
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_017d7170();
    int sub_017d6bb0(int);
};

extern undefined4 g_023df834;
// @baa 0x017d7170
undefined4 * C::sub_017d7170(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023df834));
  ((C *)(this))->sub_017d6bb0(0);
  return param_1;
}

struct C_017e5c20
{
    char pad_00[0x20];
    INT Flags;

    bool sub_017e5c20();
};

// @baa 0x017e5c20
bool C_017e5c20::sub_017e5c20()
{
    return (Flags & 0x20) == 0x20;
}

// @baa 0x017f5020
// sub_017f5020
// FMOD complex event: read the source pointer at +0x18, its channel count at +0x30.
int __stdcall sub_017f5020(int Event, char* HasVoice)
{
    int Source = *(int*)(Event + 0x18);
    *HasVoice = (*(int*)(Source + 0x30) != 0);
    return 0;
}
