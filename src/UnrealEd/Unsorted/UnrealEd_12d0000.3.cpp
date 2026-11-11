// UnrealEd_12d0000.cpp (part 3 of 3): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Enable(bool);
    public: __declspec(dllimport) void Check(bool);
    friend struct C;
};

struct C {
    void sub_012deeb0(wxUpdateUIEvent *);
};

// @baa 0x012deeb0
void C::sub_012deeb0(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Enable(true);
  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(param_1 + 900) != 0);
  return;
}
