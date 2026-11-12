// UnrealEd_1470000.cpp (part 2 of 4): 7 functions
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

class wxTreeItemData
{
public:
    __declspec(dllimport) virtual ~wxTreeItemData();
};

extern void* g_022a6edc[];
struct C_01477010 : public wxTreeItemData
{
    void sub_01477010();
};

// @baa 0x01477010
void C_01477010::sub_01477010()
{
    *(void**)this = g_022a6edc;
    ((wxTreeItemData*)this)->wxTreeItemData::~wxTreeItemData();
}

class wxTreeItemId
{
public:
    __declspec(dllimport) operator bool() const;
};

// @baa 0x01479380
INT sub_01479380(wxTreeItemId* Id)
{
    return *Id;
}

struct C_0147ab40
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_0147ab40* sub_0147ab40();
};

// @baa 0x0147ab40
C_0147ab40* C_0147ab40::sub_0147ab40()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_0147abd0
{
    char pad_0[0xc];
    INT Value_c;
    INT Value_10;
    INT Value_14;

    C_0147abd0* sub_0147abd0();
};

// @baa 0x0147abd0
C_0147abd0* C_0147abd0::sub_0147abd0()
{
    Value_c = 0;
    Value_10 = 0;
    Value_14 = 0;
    return this;
}
