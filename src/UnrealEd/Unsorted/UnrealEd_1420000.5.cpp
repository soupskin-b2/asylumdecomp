// UnrealEd_1420000.cpp (part 5 of 9): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_011ee210();
// @baa 0x014238c0
void sub_014238c0(void) { sub_011ee210(); }

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Enable(bool);
    friend struct C;
};

struct C {
    void sub_014266f0(wxUpdateUIEvent *);
};

// @baa 0x014266f0
void C::sub_014266f0(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Enable((bool)(~(byte)((uint)*(undefined4 *)(*(int *)(param_1 + 0x354) + 0x20c) >> 0x19
                                   ) & 1));
  return;
}
