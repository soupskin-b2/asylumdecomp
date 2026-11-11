// UnrealEd_11f0000.cpp (part 2 of 5): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern undefined4 g_026b62b8;
// @baa 0x011f2d80
undefined4 sub_011f2d80(void)
{
  return g_026b62b8;
}

class wxWindow;
class wxWindowBase;
class wxWindow {
    public:
};

class wxWindowBase {
    public:
    public: __declspec(dllimport) wxWindow * FindWindow(long) const;
    friend struct C;
};

struct C {
    void sub_011f3fb0(undefined4 *, long);
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x011f3fb0
void C::sub_011f3fb0(undefined4 * param_2, long param_3)
{
    wxWindowBase * param_1 = (wxWindowBase *)this;

  wxWindow *pwVar1;
  
  pwVar1 = ((wxWindowBase *)(param_1))->wxWindowBase::FindWindow(param_3);
  *param_2 = (undefined4)(pwVar1);
  if (pwVar1 == (wxWindow *)0x0) {
    sub_006311e0("NULL != Control",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\unrealed\\inc\\RemoteControlPage.h"
                 ,0x31,&g_01e3f3dc);
  }
  return;
}

int sub_0053dfa0(...);
int sub_00c38ac0(void);
// @baa 0x011f7950
undefined4 UObject::sub_011f7950(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
