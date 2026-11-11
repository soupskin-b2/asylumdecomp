// UnUIEditorWindows.cpp (part 2 of 4): 2 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEvent;
class wxUpdateUIEvent;
class wxEvent {
    public:
    public: __declspec(dllimport) int GetId() const;
    friend struct C;
};

class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Enable(bool);
    friend struct C;
};

struct C {
    void sub_014c6e00(wxEvent *);
};

// @baa 0x014c6e00
void C::sub_014c6e00(wxEvent * param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = ((wxEvent *)(param_2))->wxEvent::GetId();
  if (iVar1 == 0x653b) {
    ((wxUpdateUIEvent *)((wxUpdateUIEvent *)param_2))->wxUpdateUIEvent::Enable(*(int *)(*(int *)(param_1 + 0x30c) + 0x3c) != 0);
  }
  return;
}

// 014d3670: a member that calls two sibling methods on `this`.
struct USubWindow_
{
    void sub_014c9290(int Arg);
    void sub_014d2570();
    void sub_014d3670(int Arg);
};

// @baa 0x014d3670
void USubWindow_::sub_014d3670(int Arg)
{
    sub_014c9290(Arg);
    sub_014d2570();
}
