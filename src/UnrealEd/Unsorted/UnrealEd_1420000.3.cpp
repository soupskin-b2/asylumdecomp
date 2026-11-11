// UnrealEd_1420000.cpp (part 3 of 9): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_011ee210();
// @baa 0x014234c0
void sub_014234c0(void) { sub_011ee210(); }

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C;
};

struct C {
    void sub_014266b0(wxUpdateUIEvent *);
};

// @baa 0x014266b0
void C::sub_014266b0(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(param_1 + 1000) == 1);
  return;
}
