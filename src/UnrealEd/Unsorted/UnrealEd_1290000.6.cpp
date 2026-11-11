// UnrealEd_1290000.cpp (part 6 of 8): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C;
};

struct C {
    void sub_0129e470(wxCommandEvent *);
    int sub_005df020(int, int, int);
};

// @baa 0x0129e470
void C::sub_0129e470(wxCommandEvent * param_2)
{
    int param_1 = (int)this;
  uint *puVar1;
  bool bVar2;
  bVar2 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  *(uint *)(*(int *)(param_1 + 0x314) + 0x39c) = (uint)bVar2;
  puVar1 = (uint *)(*(int *)(param_1 + 900) + 0x30);
  *puVar1 = *puVar1 ^ (*(int *)(*(int *)(param_1 + 0x314) + 0x39c) << 6 ^
                      *(uint *)(*(int *)(param_1 + 900) + 0x30)) & 0x40;
  ((C *)((*(char **)((char *)this + 0x384))))->sub_005df020(0x4000, 0, 0);
  return;
}
