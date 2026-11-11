// AnimAimOffsetEditor.cpp (part 2 of 2): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C;
};

struct C {
    void sub_013371b0(wxCommandEvent *);
};

// @baa 0x013371b0
void C::sub_013371b0(wxCommandEvent * param_2)
{
    int param_1 = (int)this;

  uint *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  iVar2 = *(int *)(*(int *)(param_1 + 0x1e8) + 0x38);
  puVar1 = (uint *)(iVar2 + 0xd8);
  *puVar1 = *puVar1 ^ ((uint)bVar3 ^ *(uint *)(iVar2 + 0xd8)) & 1;
  return;
}
