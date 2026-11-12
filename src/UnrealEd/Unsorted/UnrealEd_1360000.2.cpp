// UnrealEd_1360000.cpp (part 2 of 3): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C;
};

struct C {
    void sub_01368980(wxUpdateUIEvent *);
};

// @baa 0x01368980
void C::sub_01368980(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(param_1 + 0x20c) == 1);
  return;
}

INT sub_005455d0(void* Object);
struct C_0136a5a0
{
    char pad_00[0xc];
    void* Object;

    INT sub_0136a5a0();
};

// @baa 0x0136a5a0
INT C_0136a5a0::sub_0136a5a0()
{
    return sub_005455d0(Object);
}
