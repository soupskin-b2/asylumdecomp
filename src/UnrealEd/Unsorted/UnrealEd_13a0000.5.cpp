// UnrealEd_13a0000.cpp (part 5 of 5): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_013a87b0(int);
};

int sub_0053df70(...);
// @baa 0x013a87b0
void C::sub_013a87b0(int param_2)
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

struct C_013a8800 {
    void sub_013a8800(int);
};

// @baa 0x013a8800
void C_013a8800::sub_013a8800(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0xc,8);
      *param_1 = iVar1;
    }
  }
  return;
}

class wxListCtrl;
class wxListCtrl {
    public:
    public: __declspec(dllimport) bool DeleteAllItems();
    friend struct C_013a9b10;
};

struct C_013a9b10 {
    void sub_013a9b10();
};

// @baa 0x013a9b10
void C_013a9b10::sub_013a9b10(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  ((wxListCtrl *)(*(wxListCtrl **)(param_1 + 0x194)))->wxListCtrl::DeleteAllItems();
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(int *)(param_1 + 0x1a4) != 0) {
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    if (*(int *)(param_1 + 0x19c) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x19c),0,8);
      *(undefined4 *)(param_1 + 0x19c) = uVar1;
    }
  }
  return;
}

struct C_013ae8d0 {
    void sub_013ae8d0(int);
};

// @baa 0x013ae8d0
void C_013ae8d0::sub_013ae8d0(int param_2)
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

struct C_013ae970 {
    void sub_013ae970(int);
};

// @baa 0x013ae970
void C_013ae970::sub_013ae970(int param_2)
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

struct C_013a7fa0
{
    INT field_00;
    INT field_04;
    INT field_08;
    INT field_0c;
    INT field_10;
    INT Value;

    INT* sub_013a7fa0(INT* Out);
};

// @baa 0x013a7fa0
INT* C_013a7fa0::sub_013a7fa0(INT* Out)
{
    *Out = Value;
    return Out;
}
