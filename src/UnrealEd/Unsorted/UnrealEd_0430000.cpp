// UnrealEd_0430000.cpp (part 1 of 4): 220 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    void sub_004300a0();
};

// @baa 0x004300a0
void C::sub_004300a0(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x187) = 1;
  return;
}

struct C_004300b0 {
    undefined1 sub_004300b0();
};

// @baa 0x004300b0
undefined1 C_004300b0::sub_004300b0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x186);
}

class wxObject;
class wxObject {
    public:
    public: __declspec(dllimport) void Ref(wxObject const &);
    friend struct C_00430120;
};

struct C_00430120 {
    void sub_00430120(wxObject *);
};

// @baa 0x00430120
void C_00430120::sub_00430120(wxObject * param_2)
{
    int param_1 = (int)this;
  if ((wxObject *)(param_1 + 0x18c) != param_2) {
    ((wxObject *)((wxObject *)(param_1 + 0x18c)))->wxObject::Ref(*(const wxObject *)(param_2));
    return;
  }
  return;
}

struct C_004301e0 {
    undefined1 sub_004301e0();
};

// @baa 0x004301e0
undefined1 C_004301e0::sub_004301e0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x189);
}

extern char g_025d4988[];
// @baa 0x00430ab0
int sub_00430ab0(void) { return (int)g_025d4988; }

extern char g_026183c0[];
// @baa 0x00430ac0
int sub_00430ac0(void) { return (int)g_026183c0; }

extern char g_026183f0[];
// @baa 0x00430b30
int sub_00430b30(void) { return (int)g_026183f0; }

extern char g_025d4918[];
// @baa 0x004315c0
int sub_004315c0(void) { return (int)g_025d4918; }

extern char g_02618578[];
// @baa 0x004315d0
int sub_004315d0(void) { return (int)g_02618578; }

struct C_00431c70 { void sub_00431c70(int a0); };

// @baa 0x00431c70
void C_00431c70::sub_00431c70(int a0) { *(int*)((char*)this + 352) = a0; }

struct C_00431c80 { void sub_00431c80(int a0); };

// @baa 0x00431c80
void C_00431c80::sub_00431c80(int a0) { *(int*)((char*)this + 356) = a0; }

struct C_00431c90 { void sub_00431c90(int a0); };

// @baa 0x00431c90
void C_00431c90::sub_00431c90(int a0) { *(int*)((char*)this + 360) = a0; }

struct C_00431ca0 { int sub_00431ca0(void); };

// @baa 0x00431ca0
int C_00431ca0::sub_00431ca0(void) { return *(int*)((char*)this + 352); }

struct RadioBoxBase {
    virtual int v0();
    virtual int v1();
    virtual int v2();
    virtual int v3();
    virtual int v4();
    virtual int v5();
    virtual int v6();
};

struct StaticBox {
    char pad[0x150];
    RadioBoxBase rbb;
};

struct SizerObj {
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual void s5();
    virtual void s6();
    virtual void s7();
    virtual void s8();
    virtual void s9();
    virtual void s10();
    virtual void s11();
    virtual void s12();
    virtual void s13();
    virtual void s14();
    virtual void s15();
    virtual void s16();
    virtual void s17();
    virtual void s18();
    virtual void s19();
    virtual void s20();
    virtual void s21();
    virtual void s22();
    virtual void s23();
    virtual void s24();
    virtual void s25();
    virtual void s26();
    virtual void s27();
    virtual void s28();
    virtual void s29();
    virtual void s30();
    virtual void s31();
    virtual void s32();
    virtual void s33();
    virtual void s34();
    virtual void s35();
    virtual void s36();
    virtual void s37();
    virtual void s38();
    virtual void s39(bool);
};

struct C_00431ce0 {
    char pad[0x158];
    StaticBox* sb;
    SizerObj* so;
    void sub_00431ce0(int arg);
};

// @baa 0x00431ce0
void C_00431ce0::sub_00431ce0(int arg) {
    so->s39(sb->rbb.v6() == 1);
}

extern char g_025d4958[];
// @baa 0x00431d20
int sub_00431d20(void) { return (int)g_025d4958; }

extern char g_02617c68[];
// @baa 0x00431d30
int sub_00431d30(void) { return (int)g_02617c68; }

struct C_00431d40 { void sub_00431d40(int a0); };

// @baa 0x00431d40
void C_00431d40::sub_00431d40(int a0) { *(int*)((char*)this + 344) = a0; }

struct C_00431d50 { void sub_00431d50(int a0); };

// @baa 0x00431d50
void C_00431d50::sub_00431d50(int a0) { *(int*)((char*)this + 348) = a0; }

struct C_00431d60 { int sub_00431d60(void); };

// @baa 0x00431d60
int C_00431d60::sub_00431d60(void) { return *(int*)((char*)this + 344); }

struct C_00431d70 { int sub_00431d70(void); };

// @baa 0x00431d70
int C_00431d70::sub_00431d70(void) { return *(int*)((char*)this + 348); }

struct C_00431d80 {
    undefined1 sub_00431d80();
};

// @baa 0x00431d80
undefined1 C_00431d80::sub_00431d80(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x170);
}

struct C_00431d90 {
    undefined1 sub_00431d90();
};

// @baa 0x00431d90
undefined1 C_00431d90::sub_00431d90(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x171);
}

struct C_00431da0 {
    undefined1 sub_00431da0();
};

// @baa 0x00431da0
undefined1 C_00431da0::sub_00431da0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x172);
}

// @baa 0x00431f10
void __stdcall sub_00431f10(int a0) {  }

extern char g_025d4910[];
// @baa 0x00432050
int sub_00432050(void) { return (int)g_025d4910; }

extern char g_02618170[];
// @baa 0x00432060
int sub_00432060(void) { return (int)g_02618170; }

struct C_00432860 { void sub_00432860(int a0); };

// @baa 0x00432860
void C_00432860::sub_00432860(int a0) { *(int*)((char*)this + 344) = a0; }

struct C_00432870 { void sub_00432870(int a0); };

// @baa 0x00432870
void C_00432870::sub_00432870(int a0) { *(int*)((char*)this + 348) = a0; }

struct C_00432880 { int sub_00432880(void); };

// @baa 0x00432880
int C_00432880::sub_00432880(void) { return *(int*)((char*)this + 344); }

extern char g_025d48d8[];
// @baa 0x004328e0
int sub_004328e0(void) { return (int)g_025d48d8; }

extern char g_02617d14[];
// @baa 0x004328f0
int sub_004328f0(void) { return (int)g_02617d14; }

struct C_00432e50 { void sub_00432e50(int a0); };

// @baa 0x00432e50
void C_00432e50::sub_00432e50(int a0) { *(int*)((char*)this + 344) = a0; }

struct C_00432e60 { void sub_00432e60(int a0); };

// @baa 0x00432e60
void C_00432e60::sub_00432e60(int a0) { *(int*)((char*)this + 348) = a0; }

struct C_00432e70 { int sub_00432e70(void); };

// @baa 0x00432e70
int C_00432e70::sub_00432e70(void) { return *(int*)((char*)this + 344); }

extern char g_025d4938[];
// @baa 0x00433090
int sub_00433090(void) { return (int)g_025d4938; }

extern char g_026185d0[];
// @baa 0x004330a0
int sub_004330a0(void) { return (int)g_026185d0; }

struct C_00433870 { void sub_00433870(int a0); };

// @baa 0x00433870
void C_00433870::sub_00433870(int a0) { *(int*)((char*)this + 344) = a0; }

struct C_00433880 { void sub_00433880(int a0); };

// @baa 0x00433880
void C_00433880::sub_00433880(int a0) { *(int*)((char*)this + 348) = a0; }

struct C_00433890 { int sub_00433890(void); };

// @baa 0x00433890
int C_00433890::sub_00433890(void) { return *(int*)((char*)this + 344); }

struct C_004338a0 { int sub_004338a0(void); };

// @baa 0x004338a0
int C_004338a0::sub_004338a0(void) { return *(int*)((char*)this + 348); }

extern char g_025d4900[];
// @baa 0x004338c0
int sub_004338c0(void) { return (int)g_025d4900; }

extern char g_02617fac[];
// @baa 0x004338d0
int sub_004338d0(void) { return (int)g_02617fac; }

struct C_004338e0 { void sub_004338e0(int a0); };

// @baa 0x004338e0
void C_004338e0::sub_004338e0(int a0) { *(int*)((char*)this + 344) = a0; }

struct C_004338f0 { void sub_004338f0(int a0); };

// @baa 0x004338f0
void C_004338f0::sub_004338f0(int a0) { *(int*)((char*)this + 348) = a0; }

struct C_00433970 { void sub_00433970(int a0); };

// @baa 0x00433970
void C_00433970::sub_00433970(int a0) { *(int*)((char*)this + 352) = a0; }

struct C_00433980 { void sub_00433980(int a0); };

// @baa 0x00433980
void C_00433980::sub_00433980(int a0) { *(int*)((char*)this + 356) = a0; }

struct C_00433990 {
    undefined1 sub_00433990();
};

// @baa 0x00433990
undefined1 C_00433990::sub_00433990(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x19c);
}

extern char g_025d4960[];
// @baa 0x004339d0
int sub_004339d0(void) { return (int)g_025d4960; }

extern char g_02617ce4[];
// @baa 0x004339e0
int sub_004339e0(void) { return (int)g_02617ce4; }

struct C_004339f0 { void sub_004339f0(int a0); };

// @baa 0x004339f0
void C_004339f0::sub_004339f0(int a0) { *(int*)((char*)this + 344) = a0; }

struct C_00433a00 { void sub_00433a00(int a0); };

// @baa 0x00433a00
void C_00433a00::sub_00433a00(int a0) { *(int*)((char*)this + 348) = a0; }

struct C_00433aa0 { int sub_00433aa0(void); };

// @baa 0x00433aa0
int C_00433aa0::sub_00433aa0(void) { return *(int*)((char*)this + 348); }

extern char g_025d49a0[];
// @baa 0x00433ab0
int sub_00433ab0(void) { return (int)g_025d49a0; }

extern char g_0261867c[];
// @baa 0x00433ac0
int sub_00433ac0(void) { return (int)g_0261867c; }

extern char g_02617d98[];
// @baa 0x00433b50
int sub_00433b50(void) { return (int)g_02617d98; }

struct C_00433b70 {
    void sub_00433b70(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00433b70
void C_00433b70::sub_00433b70(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1c8) = param_2;
  *(undefined4 *)(param_1 + 0x1b8) = param_3;
  *(undefined4 *)(param_1 + 0x1bc) = param_4;
  *(undefined4 *)(param_1 + 0x1c0) = param_5;
  *(undefined4 *)(param_1 + 0x1c4) = param_6;
  return;
}

// @baa 0x00433bb0
undefined1 sub_00433bb0(void)
{
  return 1;
}

extern char g_025d4968[];
// @baa 0x00433c20
int sub_00433c20(void) { return (int)g_025d4968; }

extern char g_02617690[];
// @baa 0x00433c30
int sub_00433c30(void) { return (int)g_02617690; }

extern char g_02617c50[];
// @baa 0x00433cb0
int sub_00433cb0(void) { return (int)g_02617c50; }

struct C_00433cd0 {
    void sub_00433cd0(undefined4, undefined4, undefined4);
};

// @baa 0x00433cd0
void C_00433cd0::sub_00433cd0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1a0) = param_2;
  *(undefined4 *)(param_1 + 0x1a4) = param_3;
  *(undefined4 *)(param_1 + 0x1a8) = param_4;
  return;
}

// @baa 0x00433d00
undefined1 sub_00433d00(void)
{
  return 1;
}

extern char g_025d4950[];
// @baa 0x00433d60
int sub_00433d60(void) { return (int)g_025d4950; }

extern char g_02617a98[];
// @baa 0x00433d70
int sub_00433d70(void) { return (int)g_02617a98; }

extern char g_026186a8[];
// @baa 0x00433e20
int sub_00433e20(void) { return (int)g_026186a8; }

struct C_00433e30 {
    undefined4 sub_00433e30(byte);
};

int sub_00405ba0(void);
int sub_0053dfa0(...);
// @baa 0x00433e30
undefined4 C_00433e30::sub_00433e30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00405ba0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_025d4970[];
// @baa 0x00433f80
int sub_00433f80(void) { return (int)g_025d4970; }

extern char g_026176e4[];
// @baa 0x00433f90
int sub_00433f90(void) { return (int)g_026176e4; }

extern char g_02617fc4[];
// @baa 0x00434050
int sub_00434050(void) { return (int)g_02617fc4; }

// @baa 0x00434a70
undefined1 sub_00434a70(void)
{
  return 1;
}

struct C_00434b30 {
    undefined1 sub_00434b30();
};

// @baa 0x00434b30
undefined1 C_00434b30::sub_00434b30(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x1b4);
}

extern char g_025d48e0[];
// @baa 0x00434ce0
int sub_00434ce0(void) { return (int)g_025d48e0; }

extern char g_02617ac8[];
// @baa 0x00434cf0
int sub_00434cf0(void) { return (int)g_02617ac8; }

extern char g_026181f0[];
// @baa 0x00434ec0
int sub_00434ec0(void) { return (int)g_026181f0; }

struct C_00434fe0 {
    void sub_00434fe0();
};

// @baa 0x00434fe0
void C_00434fe0::sub_00434fe0(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x187) = 1;
  return;
}

struct C_00434ff0 {
    undefined1 sub_00434ff0();
};

// @baa 0x00434ff0
undefined1 C_00434ff0::sub_00434ff0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x186);
}

struct C_00435120 {
    undefined1 sub_00435120();
};

// @baa 0x00435120
undefined1 C_00435120::sub_00435120(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x189);
}

extern char g_025d48f0[];
// @baa 0x00435aa0
int sub_00435aa0(void) { return (int)g_025d48f0; }

extern char g_02617be8[];
// @baa 0x00435ab0
int sub_00435ab0(void) { return (int)g_02617be8; }

// @baa 0x00435ae0
void sub_00435ae0(void) {  }

// @baa 0x00435af0
void sub_00435af0(void) {  }

struct C_00435b00 {
    undefined1 sub_00435b00();
};

// @baa 0x00435b00
undefined1 C_00435b00::sub_00435b00(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x144);
}

// @baa 0x00435b20
void sub_00435b20(void) {  }

extern char g_025d4990[];
// @baa 0x00435ef0
int sub_00435ef0(void) { return (int)g_025d4990; }

extern char g_026183d8[];
// @baa 0x00435f00
int sub_00435f00(void) { return (int)g_026183d8; }

struct C_00435f10 {
    undefined1 sub_00435f10();
};

// @baa 0x00435f10
undefined1 C_00435f10::sub_00435f10(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x1c0);
}

extern char g_025d4980[];
// @baa 0x004360b0
int sub_004360b0(void) { return (int)g_025d4980; }

extern char g_02618590[];
// @baa 0x004360c0
int sub_004360c0(void) { return (int)g_02618590; }

extern char g_02617a38[];
// @baa 0x00436130
int sub_00436130(void) { return (int)g_02617a38; }

// @baa 0x00437de0
undefined1 sub_00437de0(void)
{
  return 1;
}

class wxWindowBase;
class wxWindowBase {
    public:
    public: __declspec(dllimport) bool Close(bool);
    friend struct C_00437df0;
};

struct C_00437df0 {
    void sub_00437df0(int);
};

// @baa 0x00437df0
void C_00437df0::sub_00437df0(int param_2)
{
    wxWindowBase * param_1 = (wxWindowBase *)this;

  ((wxWindowBase *)(param_1))->wxWindowBase::Close(false);
  *(undefined1 *)(param_2 + 0x20) = 1;
  return;
}

extern char g_025d4930[];
// @baa 0x00437ec0
int sub_00437ec0(void) { return (int)g_025d4930; }

extern char g_026178e0[];
// @baa 0x00437ed0
int sub_00437ed0(void) { return (int)g_026178e0; }

struct wxFrame
{
    virtual __declspec(dllimport) ~wxFrame();
};

extern char g_01e4b000[4];
 // this class's vtable, at 0x01e4b000
struct C_004381f0 : wxFrame
{
    void sub_004381f0();
};

// @baa 0x004381f0
void C_004381f0::sub_004381f0()
{
    ((void**)this)[0] = (void*)g_01e4b000;
    this->wxFrame::~wxFrame();
}

struct C_004382b0 {
    undefined1 sub_004382b0();
};

// @baa 0x004382b0
undefined1 C_004382b0::sub_004382b0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x1a1);
}

extern char g_025d4998[];
// @baa 0x004387b0
int sub_004387b0(void) { return (int)g_025d4998; }

extern char g_02617a68[];
// @baa 0x004387c0
int sub_004387c0(void) { return (int)g_02617a68; }

extern char g_025d4940[];
// @baa 0x00438890
int sub_00438890(void) { return (int)g_025d4940; }

extern char g_02618560[];
// @baa 0x004388a0
int sub_004388a0(void) { return (int)g_02618560; }

extern char g_02618548[];
// @baa 0x00438950
int sub_00438950(void) { return (int)g_02618548; }

class wxGrid;
class wxGrid {
    public:
    public: __declspec(dllimport) bool IsCellEditControlShown() const;
    public: __declspec(dllimport) void SaveEditControlValue();
    public: __declspec(dllimport) void HideCellEditControl();
    friend struct C_00438a00;
};

struct C_00438a00 {
    void sub_00438a00(int);
};

// @baa 0x00438a00
void C_00438a00::sub_00438a00(int param_2)
{
    int param_1 = (int)this;

  bool bVar1;
  
  bVar1 = ((wxGrid *)(*(wxGrid **)(param_1 + 0x1ac)))->wxGrid::IsCellEditControlShown();
  if (bVar1) {
    ((wxGrid *)(*(wxGrid **)(param_1 + 0x1ac)))->wxGrid::SaveEditControlValue();
    ((wxGrid *)(*(wxGrid **)(param_1 + 0x1ac)))->wxGrid::HideCellEditControl();
    *(undefined1 *)(param_2 + 0x20) = 1;
    return;
  }
  *(undefined1 *)(param_2 + 0x20) = 1;
  return;
}

struct V_00438a50 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void g();
    void sub_00438a50();
};

// @baa 0x00438a50
void V_00438a50::sub_00438a50() { g(); }

struct D {
    virtual void d0() {}
    virtual void d1() {}
    virtual void d2() {}
    virtual void d3() {}
    virtual void d4() {}
    virtual void d5() {}
    virtual void d6() {}
    virtual void d7() {}
    virtual void d8() {}
    virtual void d9() {}
    virtual void d10() {}
    virtual void d11() {}
    virtual void d12() {}
    virtual void d13() {}
    virtual void d14() {}
};

struct C_00438b40 {
    char pad[8];
    D d;
    void sub_00438b40();
};

// @baa 0x00438b40
void C_00438b40::sub_00438b40()
{
    d.d14();
}

extern char g_025d4978[];
// @baa 0x00438d80
int sub_00438d80(void) { return (int)g_025d4978; }

extern char g_02617d44[];
// @baa 0x00438d90
int sub_00438d90(void) { return (int)g_02617d44; }

struct C_00438da0 {
    undefined1 sub_00438da0();
};

// @baa 0x00438da0
undefined1 C_00438da0::sub_00438da0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x1b0);
}

struct C_00438e00 {
    void sub_00438e00(int);
};

extern undefined1 g_02617624;
// @baa 0x00438e00
void C_00438e00::sub_00438e00(int param_2)
{
    int param_1 = (int)this;

  if (g_02617624 == '\0') {
    if (*(int *)(param_1 + 0x1a0) == 0) {
      if (*(char *)(param_2 + 0x26) != '\0') {
        *(undefined1 *)(param_2 + 0x25) = 1;
        return;
      }
    }
    else {
      *(undefined1 *)(param_2 + 0x20) = 1;
    }
  }
  return;
}

struct C_00438e30 {
    void sub_00438e30(int param);
};

// @baa 0x00438e30
void C_00438e30::sub_00438e30(int param)
{
    *(BYTE *)(this + 0x1b0) = 1;
}

class wxWindowDisabler;
class wxWindowDisabler {
    public:
    public: __declspec(dllimport) ~wxWindowDisabler();
    friend struct C_00438e40;
};

struct C_00438e40 {
    wxWindowDisabler * sub_00438e40(byte);
};

// @baa 0x00438e40
wxWindowDisabler * C_00438e40::sub_00438e40(byte param_2)
{
    wxWindowDisabler * param_1 = (wxWindowDisabler *)this;

  ((wxWindowDisabler *)(param_1))->~wxWindowDisabler();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00438e60 {
    undefined4 * sub_00438e60(undefined4, undefined4);
    int sub_00524d90(int);
};

extern undefined * g_01e4b708;
// @baa 0x00438e60
undefined4 * C_00438e60::sub_00438e60(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00438e60 *)(this))->sub_00524d90(param_2);
  *param_1 = (undefined4)(&g_01e4b708);
  param_1[2] = param_3;
  return param_1;
}

struct C_00438e80 {
    void sub_00438e80();
};

int sub_00523260(void);
// @baa 0x00438e80
void C_00438e80::sub_00438e80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e4b708);
  sub_00523260();
  return;
}

extern char g_025d4920[];
// @baa 0x00438e90
int sub_00438e90(void) { return (int)g_025d4920; }

extern char g_02617e50[];
// @baa 0x00438ea0
int sub_00438ea0(void) { return (int)g_02617e50; }

struct C_00438fd0 { char* sub_00438fd0(void); };

// @baa 0x00438fd0
char* C_00438fd0::sub_00438fd0(void) { return (char*)this + 432; }

// @baa 0x00438fe0
undefined1 sub_00438fe0(void)
{
  return 1;
}

struct C_00439000 { int sub_00439000(void); };

// @baa 0x00439000
int C_00439000::sub_00439000(void) { return *(int*)((char*)this + 4); }

struct S {
    TArray<WORD> Items; // 0x00
    const WORD* sub_00439010(INT Index) const;
};

// @baa 0x00439010
const WORD* S::sub_00439010(INT Index) const
{
    return &Items(Index);
}

struct C_00439060 {
    void sub_00439060();
};

// @baa 0x00439060
void C_00439060::sub_00439060(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if ((iVar1 != param_1) && (iVar1 != 0)) {
    sub_0053dfa0(iVar1);
  }
  return;
}

struct C_00439080 { int sub_00439080(void); };

// @baa 0x00439080
int C_00439080::sub_00439080(void) { return *(int*)((char*)this + 256); }

struct C_00439090 {
    undefined1 sub_00439090();
};

// @baa 0x00439090
undefined1 C_00439090::sub_00439090(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 4);
}

class std;
class std {
    public:
    class _Mutex {
        public:
        public: __declspec(dllimport) void _Lock();
        friend struct C_004390a0;
    };
};

#pragma pack(push, 1)
struct _Mutex { char _pad0[1]; };

#pragma pack(pop)
struct C_004390a0 {
    undefined4 * sub_004390a0(int *);
};

// @baa 0x004390a0
undefined4 * C_004390a0::sub_004390a0(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  int iVar1;
  
  *param_1 = (undefined4)(param_2);
  iVar1 = *(int *)(*(int *)(*param_2 + 4) + 0x28 + (int)param_2);
  if (iVar1 != 0) {
    ((std::_Mutex *)((_Mutex *)(iVar1 + 4)))->std::_Mutex::_Lock();
  }
  return param_1;
}

struct C_004390f0 {
    bool sub_004390f0();
};

// @baa 0x004390f0
bool C_004390f0::sub_004390f0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_00439100 { int sub_00439100(void); };

// @baa 0x00439100
int C_00439100::sub_00439100(void) { return *(int*)((char*)this + 8); }

struct C_00439110 {
    int sub_00439110(int);
};

// @baa 0x00439110
int C_00439110::sub_00439110(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00439120 { int sub_00439120(void); };

// @baa 0x00439120
int C_00439120::sub_00439120(void) { return *(int*)((char*)this + 8); }

struct C_00439130 {
    int sub_00439130(int);
};

// @baa 0x00439130
int C_00439130::sub_00439130(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_00439140 { int sub_00439140(void); };

// @baa 0x00439140
int C_00439140::sub_00439140(void) { return *(int*)((char*)this + 8); }

struct C_00439150 {
    int sub_00439150(int);
};

// @baa 0x00439150
int C_00439150::sub_00439150(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00439160 {
    int sub_00439160(int);
};

// @baa 0x00439160
int C_00439160::sub_00439160(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00439170 { int sub_00439170(void); };

// @baa 0x00439170
int C_00439170::sub_00439170(void) { return *(int*)((char*)this + 8); }

struct C_00439180 {
    int sub_00439180(int);
};

// @baa 0x00439180
int C_00439180::sub_00439180(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00439190 {
    int sub_00439190();
};

// @baa 0x00439190
int C_00439190::sub_00439190(void)
{
    int * param_1 = (int *)this;

  return *param_1 + -4 + param_1[2] * 4;
}

struct C_004391d0 { int sub_004391d0(void); };

// @baa 0x004391d0
int C_004391d0::sub_004391d0(void) { return *(int*)((char*)this + 8); }

struct C_004391e0 {
    int sub_004391e0(int);
};

// @baa 0x004391e0
int C_004391e0::sub_004391e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

int sub_005eae70(...);
int sub_00c93400(void);
int sub_00cdbdc0(...);
extern undefined4 g_026c3c9c;
// @baa 0x004391f0
void sub_004391f0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c3c9c == 0) {
    g_026c3c9c = sub_00cdbdc0(L"Engine");
    sub_00c93400();
  }
  sub_005eae70(g_026c3c9c,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

struct C_00439240 { int sub_00439240(void); };

// @baa 0x00439240
int C_00439240::sub_00439240(void) { return *(int*)((char*)this + 8); }

struct C_00439250 {
    int sub_00439250(int);
};

// @baa 0x00439250
int C_00439250::sub_00439250(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2;
}

struct C_00439260 { int sub_00439260(void); };

// @baa 0x00439260
int C_00439260::sub_00439260(void) { return *(int*)((char*)this + 8); }

struct C_00439270 {
    int sub_00439270(int);
};

// @baa 0x00439270
int C_00439270::sub_00439270(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x004394e0
int sub_004394e0(int a0) { return a0; }

struct C_00439510 {
    void sub_00439510(undefined4, undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x00439510
void C_00439510::sub_00439510(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4);
  return;
}

// @baa 0x00439530
void sub_00439530(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x00439550
void sub_00439550(void) {  }

extern undefined4 wxEmptyString_exref;
// @baa 0x00439560
void sub_00439560(int * param_1, int * param_2)
{
  int iVar1;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_2;
    if (*(int *)(iVar1 + -8) == 0) {
      *param_1 = *(int *)wxEmptyString_exref;
      return;
    }
    *param_1 = iVar1;
    if (*(int *)(iVar1 + -0xc) != -1) {
      *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0xc) + 1;
    }
  }
  return;
}

// @baa 0x00439590
void sub_00439590(undefined1 * param_1, undefined1 * param_2)
{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x004395b0
void sub_004395b0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x004395f0
void sub_004395f0(void) {  }

// @baa 0x00439600
void sub_00439600(void) {  }

// @baa 0x00439610
void sub_00439610(void) {  }

// @baa 0x00439620
void sub_00439620(void) {  }

// @baa 0x00439630
void sub_00439630(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00439650
void sub_00439650(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00439670
void sub_00439670(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00439690
void sub_00439690(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x004396b0
void sub_004396b0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x004396d0
void sub_004396d0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct A_004396f0 { virtual void sub_00439770(); char pad[332]; };

struct B_004396f0 { virtual void sub_00439770(); };

struct C_004396f0 : A_004396f0, B_004396f0 { virtual void sub_00439770(); C_004396f0(); };

C_004396f0::C_004396f0() {}

// @baa 0x004396f0
void C_004396f0::sub_00439770() {}

struct A_00439700 { virtual void sub_00439730(); char pad[332]; };

struct B_00439700 { virtual void sub_00439730(); };

struct C_00439700 : A_00439700, B_00439700 { virtual void sub_00439730(); C_00439700(); };

C_00439700::C_00439700() {}

// @baa 0x00439700
void C_00439700::sub_00439730() {}

struct C_00439790 {
    void sub_00439790(undefined4);
};

int sub_0042ee30(void);
// @baa 0x00439790
void C_00439790::sub_00439790(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = param_2;
  sub_0042ee30();
  return;
}

struct C_00439800 {
    float10 sub_00439800(int);
};

// @baa 0x00439800
float10 C_00439800::sub_00439800(int param_2)
{
    int * param_1 = (int *)this;

  return (float10)(param_1[8] * param_2) / (float10)*param_1;
}

// @baa 0x00439b80
int URFMODSound::sub_00439b80(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    return *(int *)(param_1 + 4) + -1;
  }
  return 0;
}

struct C_00439b90 { int sub_00439b90(void); };

// @baa 0x00439b90
int C_00439b90::sub_00439b90(void) { return *(int*)((char*)this + 28); }

struct C_00439ba0 {
    undefined4 sub_00439ba0(int);
};

// @baa 0x00439ba0
undefined4 C_00439ba0::sub_00439ba0(int param_2)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_2 * 0x10 + *(int *)(param_1 + 0x14));
}

struct C_00439bb0 {
    int sub_00439bb0(int);
};

// @baa 0x00439bb0
int C_00439bb0::sub_00439bb0(int param_2)
{
    int param_1 = (int)this;
  return param_2 * 0x20 + *(int *)(param_1 + 0xc);
}

struct C_00439bc0 {
    int sub_00439bc0(int);
};

// @baa 0x00439bc0
int C_00439bc0::sub_00439bc0(int param_2)
{
    int param_1 = (int)this;

  return param_2 * 0x54 + *(int *)(param_1 + 8);
}

struct C_00439bd0 {
    undefined4 * sub_00439bd0(byte);
};

int sub_0040cdb0(void);
int sub_01ab3290(...);
extern undefined * g_01e479d8;
// @baa 0x00439bd0
undefined4 * C_00439bd0::sub_00439bd0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e479d8);
  sub_0040cdb0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x2c);
  }
  return param_1;
}

struct C_00439c70 {
    undefined4 sub_00439c70(byte);
};

int sub_00405b50(void);
// @baa 0x00439c70
undefined4 C_00439c70::sub_00439c70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00405b50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0043a1c0 {
    undefined4 sub_0043a1c0(byte);
};

int sub_0042ff90(void);
// @baa 0x0043a1c0
undefined4 C_0043a1c0::sub_0043a1c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0042ff90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0043a3a0 {
    undefined4 sub_0043a3a0(byte);
};

int sub_00431c10(void);
// @baa 0x0043a3a0
undefined4 C_0043a3a0::sub_0043a3a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00431c10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0043a430 {
    undefined4 sub_0043a430(byte);
};

int sub_004327e0(void);
// @baa 0x0043a430
undefined4 C_0043a430::sub_0043a430(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004327e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0043a450 {
    undefined4 sub_0043a450(byte);
};

int sub_00432dd0(void);
// @baa 0x0043a450
undefined4 C_0043a450::sub_0043a450(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00432dd0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0043a470 {
    undefined4 sub_0043a470(byte);
};

int sub_004337f0(void);
// @baa 0x0043a470
undefined4 C_0043a470::sub_0043a470(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004337f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0043a620 { void sub_00433f00(); void sub_0043a620(int); };

// @baa 0x0043a620
void C_0043a620::sub_0043a620(int) { sub_00433f00(); }

struct C_0043a6a0 {
    undefined4 sub_0043a6a0(byte);
};

int sub_00434060(void);
// @baa 0x0043a6a0
undefined4 C_0043a6a0::sub_0043a6a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00434060();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0043a840 {
    undefined4 sub_0043a840(byte);
};

int sub_00434ed0(void);
// @baa 0x0043a840
undefined4 C_0043a840::sub_0043a840(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00434ed0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0043aaf0 {
    undefined4 sub_0043aaf0();
};

// @baa 0x0043aaf0
undefined4 C_0043aaf0::sub_0043aaf0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x1b8);
}

struct C_0043ab00 {
    undefined4 sub_0043ab00(uint);
};

// @baa 0x0043ab00
undefined4 C_0043ab00::sub_0043ab00(uint param_2)
{
    int param_1 = (int)this;

  if (param_2 < *(uint *)(param_1 + 0x1b8)) {
    return *(undefined4 *)(*(int *)(param_1 + 0x1b0) + param_2 * 4);
  }
  return 0;
}

struct C_0043b090 { void sub_00437e40(); void sub_0043b090(int); };

// @baa 0x0043b090
void C_0043b090::sub_0043b090(int) { sub_00437e40(); }

struct C_0043b140 {
    undefined4 sub_0043b140(byte);
};

int sub_00438960(void);
// @baa 0x0043b140
undefined4 C_0043b140::sub_0043b140(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00438960();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0043b160 {
    undefined4 sub_0043b160(byte);
};

int sub_00438ad0(void);
// @baa 0x0043b160
undefined4 C_0043b160::sub_0043b160(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00438ad0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0043b1b0 {
    undefined4 * sub_0043b1b0(byte);
};

// @baa 0x0043b1b0
undefined4 * C_0043b1b0::sub_0043b1b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e4b708);
  sub_00523260();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0043b670 {
    void sub_0043b670();
};

// @baa 0x0043b670
void C_0043b670::sub_0043b670(void)
{
    int * param_1 = (int *)this;

  param_1[2] = param_1[2] + -1;
  *(undefined4 *)(*param_1 + param_1[2] * 4) = 0;
  return;
}

// @baa 0x0043b860
void sub_0043b860(void) {  }

// @baa 0x0043b870
void sub_0043b870(void) {  }

// @baa 0x0043b880
void sub_0043b880(void) {  }

// @baa 0x0043b890
void sub_0043b890(void) {  }

// @baa 0x0043b8a0
void sub_0043b8a0(void) {  }

struct FFaceData {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0043b8b0(volatile FFaceData *Other);
};

// @baa 0x0043b8b0
void FFaceData::sub_0043b8b0(volatile FFaceData *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0043b8e0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0043b8e0(volatile FFaceData_0043b8e0 *Other);
};

// @baa 0x0043b8e0
void FFaceData_0043b8e0::sub_0043b8e0(volatile FFaceData_0043b8e0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0043b910 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0043b910(volatile FFaceData_0043b910 *Other);
};

// @baa 0x0043b910
void FFaceData_0043b910::sub_0043b910(volatile FFaceData_0043b910 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0043b940 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0043b940(volatile FFaceData_0043b940 *Other);
};

// @baa 0x0043b940
void FFaceData_0043b940::sub_0043b940(volatile FFaceData_0043b940 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0043b970 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0043b970(volatile FFaceData_0043b970 *Other);
};

// @baa 0x0043b970
void FFaceData_0043b970::sub_0043b970(volatile FFaceData_0043b970 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0043b9a0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0043b9a0(volatile FFaceData_0043b9a0 *Other);
};

// @baa 0x0043b9a0
void FFaceData_0043b9a0::sub_0043b9a0(volatile FFaceData_0043b9a0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0043b9d0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0043b9d0(volatile FFaceData_0043b9d0 *Other);
};

// @baa 0x0043b9d0
void FFaceData_0043b9d0::sub_0043b9d0(volatile FFaceData_0043b9d0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0043ba00 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0043ba00(volatile FFaceData_0043ba00 *Other);
};

// @baa 0x0043ba00
void FFaceData_0043ba00::sub_0043ba00(volatile FFaceData_0043ba00 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_0043ba30 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0043ba30(volatile FFaceData_0043ba30 *Other);
};

// @baa 0x0043ba30
void FFaceData_0043ba30::sub_0043ba30(volatile FFaceData_0043ba30 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct C_0043ba60 {
    undefined4 * sub_0043ba60(undefined4, undefined4);
    int sub_00439820();
};

// @baa 0x0043ba60
undefined4 * C_0043ba60::sub_0043ba60(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = param_2;
  param_1[8] = param_3;
  param_1[1] = 0;
  param_1[2] = 3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  ((C_0043ba60 *)(this))->sub_00439820();
  return param_1;
}

struct C_0043bab0 {
    void sub_0043bab0(undefined4);
};

int sub_00439820(void);
// @baa 0x0043bab0
void C_0043bab0::sub_0043bab0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = param_2;
  sub_00439820();
  return;
}

extern char g_02617864[];
// @baa 0x0043cee0
int sub_0043cee0(void) { return (int)g_02617864; }

struct C_0043d1e0 {
    void sub_0043d1e0();
};

// @baa 0x0043d1e0
void C_0043d1e0::sub_0043d1e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0043d210 {
    void sub_0043d210();
};

// @baa 0x0043d210
void C_0043d210::sub_0043d210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0043d240 {
    void sub_0043d240();
};

// @baa 0x0043d240
void C_0043d240::sub_0043d240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0043d270 {
    void sub_0043d270();
};

// @baa 0x0043d270
void C_0043d270::sub_0043d270(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0043d290 {
    void sub_0043d290();
};

// @baa 0x0043d290
void C_0043d290::sub_0043d290(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0043db00 {
    int * sub_0043db00(undefined4 *);
};

void * sub_01a375f0(void *, void *, size_t);
int sub_01ab3960(...);
// @baa 0x0043db00
int * C_0043db00::sub_0043db00(undefined4 * param_2)
{
    int * param_1 = (int *)this;

  void *_Dst;
  int iVar1;
  
  if (param_2[2] == 0) {
    iVar1 = 0;
    _Dst = (void *)0x0;
  }
  else {
    iVar1 = param_2[2] + 1;
    if (iVar1 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)sub_01ab3960(iVar1 * 2);
    }
  }
  *param_1 = (int)_Dst;
  param_1[1] = iVar1;
  param_1[2] = 0;
  sub_01a375f0(_Dst,(void *)*param_2,param_2[2] * 2);
  iVar1 = param_2[2];
  param_1[2] = iVar1;
  if (iVar1 != 0) {
    *(undefined2 *)(*param_1 + iVar1 * 2) = 0;
  }
  return param_1;
}

struct FFaceData_0043db70 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_0043db70(volatile FFaceData_0043db70 *Other);
};

// @baa 0x0043db70
void FFaceData_0043db70::sub_0043db70(volatile FFaceData_0043db70 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct C_0043dc50 {
    void sub_0043dc50();
};

// @baa 0x0043dc50
void C_0043dc50::sub_0043dc50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0043e300 {
    void sub_0043e300();
};

// @baa 0x0043e300
void C_0043e300::sub_0043e300(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0043e320 {
    void sub_0043e320();
};

// @baa 0x0043e320
void C_0043e320::sub_0043e320(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0043e350 {
    void sub_0043e350();
};

// @baa 0x0043e350
void C_0043e350::sub_0043e350(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

extern char g_02618158[];
// @baa 0x0043e410
int sub_0043e410(void) { return (int)g_02618158; }

struct C_0043e420 {
    void sub_0043e420();
};

// @baa 0x0043e420
void C_0043e420::sub_0043e420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

extern char g_02617a50[];
// @baa 0x0043e4e0
int sub_0043e4e0(void) { return (int)g_02617a50; }

struct A_0043e4f0 { virtual void sub_00449e20(); char pad[332]; };

struct B_0043e4f0 { virtual void sub_00449e20(); };

struct C_0043e4f0 : A_0043e4f0, B_0043e4f0 { virtual void sub_00449e20(); C_0043e4f0(); };

C_0043e4f0::C_0043e4f0() {}

// @baa 0x0043e4f0
void C_0043e4f0::sub_00449e20() {}

struct C_0043e550 { int a, b, c; C_0043e550(); };

// @baa 0x0043e550
C_0043e550::C_0043e550() : a(0), b(0), c(0) {}

struct C_0043e560 {
    void sub_0043e560();
};

// @baa 0x0043e560
void C_0043e560::sub_0043e560(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

extern char g_02618650[];
// @baa 0x0043e640
int sub_0043e640(void) { return (int)g_02618650; }

struct C_0043e650 { void sub_0043d3d0(int); C_0043e650 *sub_0043e650(int); };

// @baa 0x0043e650
C_0043e650 *C_0043e650::sub_0043e650(int a) { sub_0043d3d0(a); return this; }

struct C_0043eec0 {
    undefined4 sub_0043eec0(byte);
};

int sub_0043ce30(void);
// @baa 0x0043eec0
undefined4 C_0043eec0::sub_0043eec0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0043ce30();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_026181d8[];
// @baa 0x0043f100
int sub_0043f100(void) { return (int)g_026181d8; }
