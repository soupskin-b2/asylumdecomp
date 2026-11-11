// UnrealEd_1460000.cpp (part 1 of 2): 45 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_01460100(byte);
};

int sub_0053dfa0(...);
int sub_01453170(void);
// @baa 0x01460100
undefined4 C::sub_01460100(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01453170();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01460120 {
    undefined4 sub_01460120(byte);
};

int sub_014537a0(void);
// @baa 0x01460120
undefined4 C_01460120::sub_01460120(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014537a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01460140 {
    undefined4 sub_01460140(byte);
};

int sub_0112e260(void);
// @baa 0x01460140
undefined4 C_01460140::sub_01460140(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0112e260();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01460540 {
    undefined4 sub_01460540(byte);
};

int sub_01453c20(void);
// @baa 0x01460540
undefined4 C_01460540::sub_01460540(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01453c20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01460610 {
    undefined4 sub_01460610(byte);
};

int sub_01454df0(void);
// @baa 0x01460610
undefined4 C_01460610::sub_01460610(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01454df0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_01455ca0(void);
// @baa 0x01460630
undefined4 UUnrealEdEngine::sub_01460630(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01455ca0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01460bb0 {
    void sub_01460bb0(undefined4);
};

int sub_007e3de0(...);
// @baa 0x01460bb0
void C_01460bb0::sub_01460bb0(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_007e3de0(param_2,param_1 + 0xc);
  return;
}

struct C_01460e10 {
    undefined4 sub_01460e10(byte);
};

int sub_014566e0(void);
// @baa 0x01460e10
undefined4 C_01460e10::sub_01460e10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014566e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01460e60 {
    undefined4 sub_01460e60(byte);
};

int sub_01456fa0(void);
// @baa 0x01460e60
undefined4 C_01460e60::sub_01460e60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01456fa0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01460e80 {
    undefined4 sub_01460e80(byte);
};

int sub_01457420(void);
// @baa 0x01460e80
undefined4 C_01460e80::sub_01460e80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01457420();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01460f20 {
    undefined4 sub_01460f20(byte);
};

int sub_01457a50(void);
// @baa 0x01460f20
undefined4 C_01460f20::sub_01460f20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01457a50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01461030 {
    undefined4 sub_01461030(byte);
};

int sub_01459ec0(void);
// @baa 0x01461030
undefined4 C_01461030::sub_01461030(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01459ec0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01461d00 { void sub_01461710(); void sub_01461d00(int); };

// @baa 0x01461d00
void C_01461d00::sub_01461d00(int) { sub_01461710(); }

struct A_01461f90 { virtual void sub_01468650(); char pad[416]; };

struct B_01461f90 { virtual void sub_01468650(); };

struct C_01461f90 : A_01461f90, B_01461f90 { virtual void sub_01468650(); C_01461f90(); };

C_01461f90::C_01461f90() {}

// @baa 0x01461f90
void C_01461f90::sub_01468650() {}

struct A_01461fa0 { virtual void sub_01468650(); char pad[748]; };

struct B_01461fa0 { virtual void sub_01468650(); };

struct C_01461fa0 : A_01461fa0, B_01461fa0 { virtual void sub_01468650(); C_01461fa0(); };

C_01461fa0::C_01461fa0() {}

// @baa 0x01461fa0
void C_01461fa0::sub_01468650() {}

struct A_01461fb0 { virtual void sub_01468650(); char pad[412]; };

struct B_01461fb0 { virtual void sub_01468650(); };

struct C_01461fb0 : A_01461fb0, B_01461fb0 { virtual void sub_01468650(); C_01461fb0(); };

C_01461fb0::C_01461fb0() {}

// @baa 0x01461fb0
void C_01461fb0::sub_01468650() {}

// @baa 0x01461fc0
int sub_01461fc0(void) { return 1; }

// @baa 0x01461fd0
int sub_01461fd0(void) { return 1; }

// @baa 0x01461fe0
int sub_01461fe0(void) { return 1; }

struct C_014637a0 { int sub_014637a0(void); };

// @baa 0x014637a0
int C_014637a0::sub_014637a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

extern TArray<int> g_026a1ca4;
struct C_01463900 {
    int sub_01463900();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x01463900
int C_01463900::sub_01463900()
{
    return g_026a1ca4(Index);
}

struct C_01463960 {
    int sub_01463960();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x01463960
int C_01463960::sub_01463960()
{
    return g_026a1ca4(Index);
}

struct C_014639c0 {
    undefined4 sub_014639c0(byte);
};

int sub_0145eb70(void);
// @baa 0x014639c0
undefined4 C_014639c0::sub_014639c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0145eb70();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

class wxDialog;
class wxDialog {
    public:
    public: __declspec(dllimport) virtual bool Show(bool);
    friend struct C_01465940;
};

struct C_01465940 {
    void sub_01465940(bool);
};

int sub_01460650(void);
// @baa 0x01465940
void C_01465940::sub_01465940(bool param_2)
{
    wxDialog * param_1 = (wxDialog *)this;

  if (param_2 != false) {
    sub_01460650();
  }
  ((wxDialog *)(param_1))->wxDialog::Show(param_2);
  return;
}

struct A_01468230 { virtual void sub_014753b0(); char pad[412]; };

struct B_01468230 { virtual void sub_014753b0(); };

struct C_01468230 : A_01468230, B_01468230 { virtual void sub_014753b0(); C_01468230(); };

C_01468230::C_01468230() {}

// @baa 0x01468230
void C_01468230::sub_014753b0() {}

struct A_01468240 { virtual void sub_014753b0(); char pad[416]; };

struct B_01468240 { virtual void sub_014753b0(); };

struct C_01468240 : A_01468240, B_01468240 { virtual void sub_014753b0(); C_01468240(); };

C_01468240::C_01468240() {}

// @baa 0x01468240
void C_01468240::sub_014753b0() {}

struct C_01468610 {
    undefined4 sub_01468610(byte);
};

int sub_01460fc0(void);
// @baa 0x01468610
undefined4 C_01468610::sub_01468610(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01460fc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01468630 {
    void sub_01468630(undefined4);
};

int sub_01461050(void);
// @baa 0x01468630
void C_01468630::sub_01468630(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1a0) = param_2;
  sub_01461050();
  return;
}

struct C_01468650 {
    undefined4 sub_01468650(byte);
};

int sub_01461dd0(void);
// @baa 0x01468650
undefined4 C_01468650::sub_01468650(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01461dd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_01463a40();
// @baa 0x01468f20
void sub_01468f20(void) { sub_01463a40(); }

int sub_006f7810(void);
extern undefined * g_022a0f08;
// @baa 0x01468f30
undefined4 * UPrimitiveComponent::sub_01468f30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_022a0f08);
  return param_1;
}

// @baa 0x01468f50
IMPLEMENT_CLASS_AT(ULensFlarePreviewComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\LensFlareEditor.cpp", 17);

// @baa 0x01468fb0
struct C_0146a370 {
    undefined4 sub_0146a370(byte);
};

int sub_01467480(void);
// @baa 0x0146a370
undefined4 C_0146a370::sub_0146a370(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01467480();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0146a940 { void sub_0146a560(); void sub_0146a940(int); };

// @baa 0x0146a940
void C_0146a940::sub_0146a940(int) { sub_0146a560(); }

int sub_005c7a20(void);
extern undefined * g_022a11b8;
// @baa 0x0146b040
undefined4 * UObject::sub_0146b040(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022a11b8);
  return param_1;
}

// @baa 0x0146b060
IMPLEMENT_CLASS_AT(ULensFlareEditorPropertyWrapper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\LensFlareEditor.cpp", 18);

// @baa 0x0146b0d0
extern "C" void sub_01132770();
// @baa 0x0146ca00
void sub_0146ca00()
{
    sub_01132770();
}

// @baa 0x0146f3a0
int sub_0146f3a0(void) { return 0; }

extern char g_022a1884[];
// @baa 0x0146f3b0
int sub_0146f3b0(void) { return (int)g_022a1884; }

struct A_0146f3c0 { virtual void sub_01470590(); char pad[320]; };

struct B_0146f3c0 { virtual void sub_01470590(); };

struct C_0146f3c0 : A_0146f3c0, B_0146f3c0 { virtual void sub_01470590(); C_0146f3c0(); };

C_0146f3c0::C_0146f3c0() {}

// @baa 0x0146f3c0
void C_0146f3c0::sub_01470590() {}

struct A_0146f3d0 { virtual void sub_01470590(); char pad[324]; };

struct B_0146f3d0 { virtual void sub_01470590(); };

struct C_0146f3d0 : A_0146f3d0, B_0146f3d0 { virtual void sub_01470590(); C_0146f3d0(); };

C_0146f3d0::C_0146f3d0() {}

// @baa 0x0146f3d0
void C_0146f3d0::sub_01470590() {}

struct C_0146f5e0 { void sub_0146af30(int); C_0146f5e0 *sub_0146f5e0(int); };

// @baa 0x0146f5e0
C_0146f5e0 *C_0146f5e0::sub_0146f5e0(int a) { sub_0146af30(a); return this; }

int sub_01121530(void);
// @baa 0x0146f7b0
undefined4 ULensFlareEditorPropertyWrapper::sub_0146f7b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01121530();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
