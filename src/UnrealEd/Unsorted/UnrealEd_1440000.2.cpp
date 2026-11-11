// UnrealEd_1440000.cpp (part 2 of 3): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C;
};

struct C {
    void sub_0144e330(wxCommandEvent *);
};

// @baa 0x0144e330
void C::sub_0144e330(wxCommandEvent * param_2)
{
    int param_1 = (int)this;

  bool bVar1;
  
  bVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  *(uint *)(param_1 + 0x354) = (uint)bVar1;
  *(uint *)(*(int *)(param_1 + 0x310) + 0x39c) = (uint)bVar1;
  return;
}
