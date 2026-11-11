// GenericBrowser.cpp (part 2 of 3): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C;
};

struct C {
    void sub_013687b0(wxUpdateUIEvent *);
};

// @baa 0x013687b0
void C::sub_013687b0(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(param_1 + 0x15c) == 1);
  return;
}
