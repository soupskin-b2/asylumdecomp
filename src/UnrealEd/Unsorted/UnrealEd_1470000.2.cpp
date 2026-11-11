// UnrealEd_1470000.cpp (part 2 of 4): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

class wxDialogBase;
class wxEvent;
class wxDialogBase {
    public:
    protected: __declspec(dllimport) void EndDialog(int);
    friend struct C;
};

class wxEvent {
    public:
    public: __declspec(dllimport) int GetId() const;
    friend struct C;
};

struct C {
    void sub_01476fc0(wxEvent *);
};

// @baa 0x01476fc0
void C::sub_01476fc0(wxEvent * param_2)
{
    wxDialogBase * param_1 = (wxDialogBase *)this;

  int iVar1;
  
  iVar1 = ((wxEvent *)(param_2))->wxEvent::GetId();
  ((wxDialogBase *)(param_1))->wxDialogBase::EndDialog(iVar1);
  return;
}

int sub_0053df70(...);
// @baa 0x0147aa60
void UObject::sub_0147aa60(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x14,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0147e150 {
    void sub_0147e150(int);
};

// @baa 0x0147e150
void C_0147e150::sub_0147e150(int param_2)
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
