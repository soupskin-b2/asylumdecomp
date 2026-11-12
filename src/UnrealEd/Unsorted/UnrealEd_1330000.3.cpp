// UnrealEd_1330000.cpp (part 3 of 3): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_0133b550(int);
};

int sub_0053df70(...);
// @baa 0x0133b550
void C::sub_0133b550(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

class wxMenu
{
public:
    __declspec(dllimport) virtual ~wxMenu();
};

extern void* g_022570a8[];
struct C_01336f10 : public wxMenu
{
    void sub_01336f10();
};

// @baa 0x01336f10
void C_01336f10::sub_01336f10()
{
    *(void**)this = g_022570a8;
    ((wxMenu*)this)->wxMenu::~wxMenu();
}

struct Inner
{
    char pad_00[8];
    void* Pointer;
};

struct Sub
{
    void sub_00cc65f0();
};

struct C_01337490
{
    char pad_00[0x350];
    Inner* Object;

    void sub_01337490();
};

// @baa 0x01337490
void C_01337490::sub_01337490()
{
    ((Sub*)Object->Pointer)->sub_00cc65f0();
}
