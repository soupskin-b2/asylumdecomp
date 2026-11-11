// DlgSelectGroup.cpp: 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C;
};

struct C {
    void sub_0146d370(wxCommandEvent *);
    int sub_0146d1f0();
};

// @baa 0x0146d370
void C::sub_0146d370(wxCommandEvent * param_2)
{
    int param_1 = (int)this;
  bool bVar1;
  bVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  *(uint *)(param_1 + 0x1b8) = (uint)bVar1;
  ((C *)(this))->sub_0146d1f0();
  return;
}
