// MaterialInstanceConstantEditor.cpp (part 6 of 6): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C;
};

struct C {
    void sub_0140a340(wxUpdateUIEvent *);
};

// @baa 0x0140a340
void C::sub_0140a340(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(*(int *)(param_1 + 0x1a0) + 0x300) == 1);
  return;
}
