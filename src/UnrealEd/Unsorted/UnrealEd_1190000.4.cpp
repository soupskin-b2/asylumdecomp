// UnrealEd_1190000.cpp (part 4 of 5): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C;
};

struct C {
    void sub_01192c50(wxCommandEvent *);
    int sub_00f78160(int, int);
};

// @baa 0x01192c50
void C::sub_01192c50(wxCommandEvent * param_2)
{
    int param_1 = (int)this;
  bool bVar1;
  bVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  *(uint *)(*(int *)(param_1 + 0x278) + 0x310) = (uint)bVar1;
  ((C *)((*(char **)((char *)this + 0x278))))->sub_00f78160(0, 1);
  return;
}

extern void __stdcall sub_01198290(INT Value);
struct C_0119be60
{
    char pad_00[0x334];
    INT Object;

    void sub_0119be60(INT Unused);
};

// @baa 0x0119be60
void C_0119be60::sub_0119be60(INT)
{
    sub_01198290(Object);
}
