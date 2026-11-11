// Viewports.cpp (part 2 of 3): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxSplitterEvent;
class wxSplitterWindow;
class wxSplitterEvent {
    public:
    public: __declspec(dllimport) int GetSashPosition() const;
    friend struct C;
};

class wxSplitterWindow {
    public:
    public: __declspec(dllimport) void SetSashPosition(int,bool);
    friend struct C;
};

struct C {
    void sub_012a0920(wxSplitterEvent *);
};

extern undefined4 g_026d4e00;
// @baa 0x012a0920
void C::sub_012a0920(wxSplitterEvent * param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(*(int *)(g_026d4e00 + 0x58) + 0x1e8) != 0) {
    iVar1 = ((wxSplitterEvent *)(param_2))->wxSplitterEvent::GetSashPosition();
    ((wxSplitterWindow *)(*(wxSplitterWindow **)(param_1 + 0x144)))->wxSplitterWindow::SetSashPosition(iVar1, true);
  }
  return;
}
