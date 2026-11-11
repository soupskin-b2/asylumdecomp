// UnrealEd_1420000.cpp (part 4 of 9): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_014234e0(byte);
};

int sub_0053dfa0(...);
int sub_011ee210(void);
// @baa 0x014234e0
undefined4 C::sub_014234e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011ee210();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014237f0 {
    undefined4 sub_014237f0(byte);
};

// @baa 0x014237f0
undefined4 C_014237f0::sub_014237f0(byte param_2)
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
    public: __declspec(dllimport) void Enable(bool);
    friend struct C_014266d0;
};

struct C_014266d0 {
    void sub_014266d0(wxUpdateUIEvent *);
};

// @baa 0x014266d0
void C_014266d0::sub_014266d0(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Enable(*(int *)(param_1 + 0x378) == 1);
  return;
}
