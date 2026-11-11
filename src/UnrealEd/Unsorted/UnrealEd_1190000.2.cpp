// UnrealEd_1190000.cpp (part 2 of 5): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C;
};

struct C {
    void sub_01190650(wxCommandEvent *);
};

// @baa 0x01190650
void C::sub_01190650(wxCommandEvent * param_2)
{
    int param_1 = (int)this;

  bool bVar1;
  
  bVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  *(uint *)(*(int *)(param_1 + 0x278) + 0x60) = (uint)bVar1;
  return;
}

class wxTreeItemId;
class wxTreeItemId {
    public:
    public: __declspec(dllimport) wxTreeItemId();
    friend struct C_01193dd0;
};

struct C_01193dd0 {
    int sub_01193dd0();
};

// @baa 0x01193dd0
int C_01193dd0::sub_01193dd0(void)
{
    int param_1 = (int)this;

  ((wxTreeItemId *)((wxTreeItemId *)(param_1 + 4)))->wxTreeItemId::wxTreeItemId();
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return param_1;
}
