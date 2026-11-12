// GenericBrowser.cpp (part 2 of 3): 4 functions
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

class wxEvent
{
public:
    __declspec(dllimport) void Skip(bool Skip);
};

// @baa 0x01368180
void __stdcall sub_01368180(wxEvent* Event)
{
    Event->Skip(true);
}

extern INT g_026d8d94;
extern void sub_01381e30(INT Value);
// @baa 0x01382090
void __stdcall sub_01382090(INT Unused)
{
    sub_01381e30(g_026d8d94);
}

void __stdcall sub_01390590(INT A, INT B);
// @baa 0x013931e0
void __stdcall sub_013931e0(INT Value)
{
    sub_01390590(Value, 1);
}
