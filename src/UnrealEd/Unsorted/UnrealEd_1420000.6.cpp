// UnrealEd_1420000.cpp (part 6 of 9): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_014238d0(byte);
};

int sub_0053dfa0(...);
int sub_011ee210(void);
// @baa 0x014238d0
undefined4 C::sub_014238d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011ee210();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C_01427e70;
};

struct C_01427e70 {
    void sub_01427e70(wxUpdateUIEvent *);
};

// @baa 0x01427e70
void C_01427e70::sub_01427e70(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(*(int *)(param_1 + 0x35c) + 0x300) == 1);
  return;
}
