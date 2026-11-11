// UnrealEd_0440000.cpp (part 1 of 2): 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct A_00442d00 { virtual void sub_00442d10(); char pad[332]; };

struct B_00442d00 { virtual void sub_00442d10(); };

struct C_00442d00 : A_00442d00, B_00442d00 { virtual void sub_00442d10(); C_00442d00(); };

C_00442d00::C_00442d00() {}

// @baa 0x00442d00
void C_00442d00::sub_00442d10() {}

struct C {
    undefined4 sub_00442d30(byte);
};

int sub_00442c80(void);
int sub_0053dfa0(...);
// @baa 0x00442d30
undefined4 C::sub_00442d30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00442c80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00443d70 {
    undefined4 sub_00443d70(byte);
};

int sub_00443cb0(void);
// @baa 0x00443d70
undefined4 C_00443d70::sub_00443d70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00443cb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_004499d0 {
    undefined4 sub_004499d0(byte);
};

int sub_0043e380(void);
// @baa 0x004499d0
undefined4 C_004499d0::sub_004499d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0043e380();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00449e20 {
    undefined4 sub_00449e20(byte);
};

int sub_0043e450(void);
// @baa 0x00449e20
undefined4 C_00449e20::sub_00449e20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0043e450();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0044b890 {
    undefined4 sub_0044b890(byte);
};

int sub_0043e590(void);
// @baa 0x0044b890
undefined4 C_0044b890::sub_0044b890(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0043e590();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

class wxDialogBase;
class wxGrid;
class wxDialogBase {
    public:
    protected: __declspec(dllimport) void EndDialog(int);
    friend struct C_0044c530;
};

class wxGrid {
    public:
    public: __declspec(dllimport) bool IsCellEditControlShown() const;
    public: __declspec(dllimport) void SaveEditControlValue();
    public: __declspec(dllimport) void HideCellEditControl();
    friend struct C_0044c530;
};

struct C_0044c530 {
    void sub_0044c530(undefined4);
    int sub_0044be40(int);
};

// @baa 0x0044c530
void C_0044c530::sub_0044c530(undefined4 param_2)
{
    wxDialogBase * param_1 = (wxDialogBase *)this;
  bool bVar1;
  bVar1 = ((wxGrid *)(*(wxGrid **)(param_1 + 0x1ac)))->wxGrid::IsCellEditControlShown();
  if (bVar1) {
    ((wxGrid *)(*(wxGrid **)(param_1 + 0x1ac)))->wxGrid::SaveEditControlValue();
    ((wxGrid *)(*(wxGrid **)(param_1 + 0x1ac)))->wxGrid::HideCellEditControl();
  }
  ((C_0044c530 *)(this))->sub_0044be40(param_2);
  ((C_0044c530 *)(this))->sub_0044be40(param_2);
  ((wxDialogBase *)(param_1))->wxDialogBase::EndDialog(0x13ec);
  return;
}

struct C_0044d240 {
    undefined4 sub_0044d240(byte);
};

int sub_0043f110(void);
// @baa 0x0044d240
undefined4 C_0044d240::sub_0044d240(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0043f110();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0044ead0 {
    undefined4 sub_0044ead0(byte);
};

int sub_0043f6f0(void);
// @baa 0x0044ead0
undefined4 C_0044ead0::sub_0044ead0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0043f6f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_02617620;
int sub_0043f7e0();
// @baa 0x0044eaf0
int sub_0044eaf0() { if (!g_02617620) g_02617620 = sub_0043f7e0(); return g_02617620; }

struct C_0044f1d0 {
    undefined4 sub_0044f1d0(byte);
};

int sub_0044f170(void);
// @baa 0x0044f1d0
undefined4 C_0044f1d0::sub_0044f1d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0044f170();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
