// UnrealEd_14d0000.cpp (part 1 of 2): 114 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_014d4a80(); };

// @baa 0x014d4a80
void C::sub_014d4a80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_014d4ae0 {
    int sub_014d4ae0();
};

// @baa 0x014d4ae0
int C_014d4ae0::sub_014d4ae0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_014d4b00 {
    undefined4 sub_014d4b00(byte);
    int sub_014a5c40();
};

int sub_0053dfa0(...);
// @baa 0x014d4b00
undefined4 C_014d4b00::sub_014d4b00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_014d4b00 *)(((char *)this + 4)))->sub_014a5c40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014d4b70 {
    undefined4 * sub_014d4b70();
};

int sub_005c7a20(void);
extern undefined * g_022ba248;
// @baa 0x014d4b70
undefined4 * C_014d4b70::sub_014d4b70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = (undefined4)(&g_022ba248);
  return param_1;
}

// @baa 0x014d4b90
IMPLEMENT_CLASS_AT(UUIState_CustomInputProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorProperties.cpp", 22);

// @baa 0x014d4bf0
struct C_014d4c10 {
    undefined4 * sub_014d4c10();
};

extern undefined * g_022ba390;
// @baa 0x014d4c10
undefined4 * C_014d4c10::sub_014d4c10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = (undefined4)(&g_022ba390);
  return param_1;
}

// @baa 0x014d4c30
IMPLEMENT_CLASS_AT(UUIStateClass_CustomInputProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorProperties.cpp", 23);

// @baa 0x014d4c90
struct C_014d4cb0 {
    undefined4 * sub_014d4cb0();
};

extern undefined * g_022ba4d8;
// @baa 0x014d4cb0
undefined4 * C_014d4cb0::sub_014d4cb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = (undefined4)(&g_022ba4d8);
  return param_1;
}

struct C_014d7170 { void sub_014d6d20(); void sub_014d7170(int); };

// @baa 0x014d7170
void C_014d7170::sub_014d7170(int) { sub_014d6d20(); }

struct C_view {
    int sub_014acd80(int, int);
};

// @baa 0x014d7910
int UTexture2D::sub_014d7910(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_014acd80((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x24;
  }
  return 0;
}

struct C_014d7940 {
    int sub_014d7940(int);
    int sub_014acde0(int, int);
};

// @baa 0x014d7940
int C_014d7940::sub_014d7940(int param_2)
{
    int * param_1 = (int *)this;
  ((C_014d7940 *)(this))->sub_014acde0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x50 + *param_1;
  }
  return 0;
}

int sub_014d7a80(void);
// @baa 0x014dbb40
int UTexture2D::sub_014dbb40(void)
{
    int param_1 = (int)this;

  sub_014d7a80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_014db1c0();
// @baa 0x014dbb60
void sub_014dbb60(void) { sub_014db1c0(); }

// @baa 0x014dbb70
int UTexture2D::sub_014dbb70(void)
{
    int param_1 = (int)this;

  sub_014d7a80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x014dbb90
void sub_014dbb90(void) { sub_014db1c0(); }

struct A_014dbd40 { virtual void sub_014dc0d0(); char pad[416]; };

struct B_014dbd40 { virtual void sub_014dc0d0(); };

struct C_014dbd40 : A_014dbd40, B_014dbd40 { virtual void sub_014dc0d0(); C_014dbd40(); };

C_014dbd40::C_014dbd40() {}

// @baa 0x014dbd40
void C_014dbd40::sub_014dc0d0() {}

struct A_014dbd50 { virtual void sub_014dc0d0(); char pad[424]; };

struct B_014dbd50 { virtual void sub_014dc0d0(); };

struct C_014dbd50 : A_014dbd50, B_014dbd50 { virtual void sub_014dc0d0(); C_014dbd50(); };

C_014dbd50::C_014dbd50() {}

// @baa 0x014dbd50
void C_014dbd50::sub_014dc0d0() {}

struct A_014dbd60 { virtual void sub_014dc0d0(); char pad[428]; };

struct B_014dbd60 { virtual void sub_014dc0d0(); };

struct C_014dbd60 : A_014dbd60, B_014dbd60 { virtual void sub_014dc0d0(); C_014dbd60(); };

C_014dbd60::C_014dbd60() {}

// @baa 0x014dbd60
void C_014dbd60::sub_014dc0d0() {}

struct A_014dbd70 { virtual void sub_014dc0d0(); char pad[436]; };

struct B_014dbd70 { virtual void sub_014dc0d0(); };

struct C_014dbd70 : A_014dbd70, B_014dbd70 { virtual void sub_014dc0d0(); C_014dbd70(); };

C_014dbd70::C_014dbd70() {}

// @baa 0x014dbd70
void C_014dbd70::sub_014dc0d0() {}

struct A_014dbd80 { virtual void sub_014dc0d0(); char pad[408]; };

struct B_014dbd80 { virtual void sub_014dc0d0(); };

struct C_014dbd80 : A_014dbd80, B_014dbd80 { virtual void sub_014dc0d0(); C_014dbd80(); };

C_014dbd80::C_014dbd80() {}

// @baa 0x014dbd80
void C_014dbd80::sub_014dc0d0() {}

// @baa 0x014dc1b0
void __stdcall sub_014dc1b0(int a0, int a1, int a2) {  }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x014dc1c0
void sub_014dc1c0(S* p, INT Value)
{
    p->vf_18(Value);
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) ~wxString();
    friend struct C_014dc1e0;
};

struct C_014dc1e0 {
    void sub_014dc1e0();
};

// @baa 0x014dc1e0
void C_014dc1e0::sub_014dc1e0(void)
{
    int param_1 = (int)this;
  ((wxString *)((wxString *)(param_1 + 4)))->~wxString();
  return;
}

extern char g_026de6d0[];
// @baa 0x014dc2f0
int sub_014dc2f0(void) { return (int)g_026de6d0; }

extern char g_025e9410[];
// @baa 0x014dc300
int sub_014dc300(void) { return (int)g_025e9410; }

extern char g_026de6e8[];
// @baa 0x014dc310
int sub_014dc310(void) { return (int)g_026de6e8; }

// @baa 0x014dc320
void __stdcall sub_014dc320(int a0) {  }

// @baa 0x014dc340
void sub_014dc340(void) {  }

extern char g_026de73c[];
// @baa 0x014dc3a0
int sub_014dc3a0(void) { return (int)g_026de73c; }

extern char g_025e9418[];
// @baa 0x014dc3b0
int sub_014dc3b0(void) { return (int)g_025e9418; }

extern char g_026de754[];
// @baa 0x014dc3c0
int sub_014dc3c0(void) { return (int)g_026de754; }

// @baa 0x014dc410
void __stdcall sub_014dc410(int a0) {  }

// @baa 0x014dc420
int sub_014dc420(void) { return 0; }

// @baa 0x014dc480
void __stdcall sub_014dc480(int a0) {  }

extern char g_022bb8a8[];
// @baa 0x014dc4b0
int sub_014dc4b0(void) { return (int)g_022bb8a8; }

extern char g_026de794[];
// @baa 0x014dc4c0
int sub_014dc4c0(void) { return (int)g_026de794; }

extern char g_026de7d4[];
// @baa 0x014dc4d0
int sub_014dc4d0(void) { return (int)g_026de7d4; }

extern char g_022bb8ec[];
// @baa 0x014dc4e0
int sub_014dc4e0(void) { return (int)g_022bb8ec; }

extern char g_026de7ec[];
// @baa 0x014dc4f0
int sub_014dc4f0(void) { return (int)g_026de7ec; }

extern char g_026de82c[];
// @baa 0x014dc500
int sub_014dc500(void) { return (int)g_026de82c; }

extern char g_022bb984[];
// @baa 0x014dc510
int sub_014dc510(void) { return (int)g_022bb984; }

extern char g_026de844[];
// @baa 0x014dc520
int sub_014dc520(void) { return (int)g_026de844; }

extern char g_026de884[];
// @baa 0x014dc530
int sub_014dc530(void) { return (int)g_026de884; }

extern char g_025e9420[];
// @baa 0x014dc540
int sub_014dc540(void) { return (int)g_025e9420; }

extern char g_026de89c[];
// @baa 0x014dc550
int sub_014dc550(void) { return (int)g_026de89c; }

extern char g_026def60[];
// @baa 0x014dced0
int sub_014dced0(void) { return (int)g_026def60; }

extern char g_025e9440[];
// @baa 0x014dcee0
int sub_014dcee0(void) { return (int)g_025e9440; }

extern char g_026def78[];
// @baa 0x014dcef0
int sub_014dcef0(void) { return (int)g_026def78; }

class wxDialog;
class wxDialog {
    public:
    public: __declspec(dllimport) wxDialog();
    friend struct C_014dcf00;
};

struct C_014dcf00 {
    wxDialog * sub_014dcf00();
};

extern undefined * g_022c58b8;
// @baa 0x014dcf00
wxDialog * C_014dcf00::sub_014dcf00(void)
{
    wxDialog * param_1 = (wxDialog *)this;

  ((wxDialog *)(param_1))->wxDialog::wxDialog();
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined ***)param_1 = &g_022c58b8;
  *(undefined4 *)(param_1 + 0x1ac) = 4;
  return param_1;
}

struct C_014dcf50 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_014dcf50(INT Index);
};

// @baa 0x014dcf50
UBOOL C_014dcf50::sub_014dcf50(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_014dcf70 { int sub_014dcf70(void); };

// @baa 0x014dcf70
int C_014dcf70::sub_014dcf70(void) { return *(int*)((char*)this + 4); }

struct C_014dcf80 { int sub_014dcf80(void); };

// @baa 0x014dcf80
int C_014dcf80::sub_014dcf80(void) { return *(int*)((char*)this + 4); }

struct C_014dcf90 { int sub_014dcf90(void); };

// @baa 0x014dcf90
int C_014dcf90::sub_014dcf90(void) { return *(int*)((char*)this + 4); }

struct C_014dcfa0 { int sub_014dcfa0(void); };

// @baa 0x014dcfa0
int C_014dcfa0::sub_014dcfa0(void) { return *(int*)((char*)this + 4); }

struct C_014dcfb0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_014dcfb0* sub_014dcfb0(INT value);
};

// @baa 0x014dcfb0
C_014dcfb0* C_014dcfb0::sub_014dcfb0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_014dcfd0 {
    C_014dcfd0 *sub_014dcfd0();
};

// @baa 0x014dcfd0
C_014dcfd0 *C_014dcfd0::sub_014dcfd0()
{
    ((int *)this)[1]++;
    return this;
}

struct C_014dcfe0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_014dcfe0* sub_014dcfe0(INT value);
};

// @baa 0x014dcfe0
C_014dcfe0* C_014dcfe0::sub_014dcfe0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_014dd000 {
    int sub_014dd000();
};

// @baa 0x014dd000
int C_014dd000::sub_014dd000(void)
{
    int* p = (int*)((char*)this + 4);
    ++*p;
    return (int)this;
}

struct C_014dd010 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_014dd010* sub_014dd010(INT value);
};

// @baa 0x014dd010
C_014dd010* C_014dd010::sub_014dd010(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_014dd030 {
    int f0;
    int f4;
    C_014dd030* sub_014dd030();
};

// @baa 0x014dd030
C_014dd030* C_014dd030::sub_014dd030()
{
    f4++;
    return this;
}

struct C_014dd040 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_014dd040* sub_014dd040(INT value);
};

// @baa 0x014dd040
C_014dd040* C_014dd040::sub_014dd040(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_014dd060 {
    int pad;
    int count;
    C_014dd060* sub_014dd060();
};

// @baa 0x014dd060
C_014dd060* C_014dd060::sub_014dd060()
{
    count++;
    return this;
}

struct C_014dd070 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_014dd070* sub_014dd070(INT value);
};

// @baa 0x014dd070
C_014dd070* C_014dd070::sub_014dd070(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_014dd090 {
    C_014dd090* sub_014dd090();
};

// @baa 0x014dd090
C_014dd090* C_014dd090::sub_014dd090()
{
    ((DWORD*)this)[1] += 1;
    return this;
}

struct C_014dd0d0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_014dd0d0(INT Index);
};

// @baa 0x014dd0d0
UBOOL C_014dd0d0::sub_014dd0d0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_014dd0f0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_014dd0f0(INT Index);
};

// @baa 0x014dd0f0
UBOOL C_014dd0f0::sub_014dd0f0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_014dd110 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_014dd110(INT Index);
};

// @baa 0x014dd110
UBOOL C_014dd110::sub_014dd110(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_014dd190 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_014dd190(INT Index);
};

// @baa 0x014dd190
UBOOL C_014dd190::sub_014dd190(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_014dd1e0 { int a, b; C_014dd1e0(int, int); };

// @baa 0x014dd1e0
C_014dd1e0::C_014dd1e0(int x, int y) : a(x), b(y) {}

// @baa 0x014dd200
int sub_014dd200(int a0) { return *(int*)a0; }

// @baa 0x014dd210
bool sub_014dd210(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_014dd220 { int a, b; C_014dd220(const C_014dd220 &); };

// @baa 0x014dd220
C_014dd220::C_014dd220(const C_014dd220 &o) : a(o.a), b(o.b) {}

void sub_00572b30();
// @baa 0x014dd2e0
void sub_014dd2e0(void) { sub_00572b30(); }

int sub_00627f00(...);
// @baa 0x014dd2f0
void sub_014dd2f0(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

struct C_014dd310 { int a, b; C_014dd310(const C_014dd310 &); };

// @baa 0x014dd310
C_014dd310::C_014dd310(const C_014dd310 &o) : a(o.a), b(o.b) {}

// @baa 0x014dd330
void sub_014dd330(void) {  }

// @baa 0x014dd340
void sub_014dd340(void) {  }

// @baa 0x014dd350
void sub_014dd350(void) {  }

// @baa 0x014dd3e0
undefined2 sub_014dd3e0(void)
{
  return 0x73;
}

struct A_014dd560 { virtual void sub_014de180(); char pad[336]; };

struct B_014dd560 { virtual void sub_014de180(); };

struct C_014dd560 : A_014dd560, B_014dd560 { virtual void sub_014de180(); C_014dd560(); };

C_014dd560::C_014dd560() {}

// @baa 0x014dd560
void C_014dd560::sub_014de180() {}

struct T_014ddb50 { BYTE b[4]; };

// @baa 0x014ddb50
template T_014ddb50& TArray<T_014ddb50>::Last(INT);

struct C_014ddbb0 { int a, b, c; C_014ddbb0(); };

// @baa 0x014ddbb0
C_014ddbb0::C_014ddbb0() : a(0), b(0), c(0) {}

struct C_014ddbc0 { int a, b, c; C_014ddbc0(); };

// @baa 0x014ddbc0
C_014ddbc0::C_014ddbc0() : a(0), b(0), c(0) {}

struct C_014ddbd0 { int a, b, c; C_014ddbd0(); };

// @baa 0x014ddbd0
C_014ddbd0::C_014ddbd0() : a(0), b(0), c(0) {}

struct C_014ddbe0 { int a, b, c; C_014ddbe0(); };

// @baa 0x014ddbe0
C_014ddbe0::C_014ddbe0() : a(0), b(0), c(0) {}

struct C_014ddbf0 { int a, b, c; C_014ddbf0(); };

// @baa 0x014ddbf0
C_014ddbf0::C_014ddbf0() : a(0), b(0), c(0) {}

struct C_014ddcc0 { int sub_014ddcc0(void); };

// @baa 0x014ddcc0
int C_014ddcc0::sub_014ddcc0(void) { return *(int*)((char*)this + 0); }

struct C_014ddcd0 { int sub_014ddcd0(void); };

// @baa 0x014ddcd0
int C_014ddcd0::sub_014ddcd0(void) { return *(int*)((char*)this + 0); }

struct C_014ddd50 {
    int sub_014ddd50(int);
};

// @baa 0x014ddd50
int C_014ddd50::sub_014ddd50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_014ddd60 { int sub_014ddd60(void); };

// @baa 0x014ddd60
int C_014ddd60::sub_014ddd60(void) { return *(int*)((char*)this + 0); }

struct C_014ddd70 { int sub_014ddd70(void); };

// @baa 0x014ddd70
int C_014ddd70::sub_014ddd70(void) { return *(int*)((char*)this + 0); }

struct C_014ddd80 { int sub_014ddd80(void); };

// @baa 0x014ddd80
int C_014ddd80::sub_014ddd80(void) { return *(int*)((char*)this + 0); }

struct C_014dde00 {
    int sub_014dde00(int);
};

// @baa 0x014dde00
int C_014dde00::sub_014dde00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_014dde10 { int sub_014dde10(void); };

// @baa 0x014dde10
int C_014dde10::sub_014dde10(void) { return *(int*)((char*)this + 0); }

struct C_014dde20 { int sub_014dde20(void); };

// @baa 0x014dde20
int C_014dde20::sub_014dde20(void) { return *(int*)((char*)this + 0); }

struct C_014dde30 { int sub_014dde30(void); };

// @baa 0x014dde30
int C_014dde30::sub_014dde30(void) { return *(int*)((char*)this + 0); }

struct C_014ddeb0 {
    int sub_014ddeb0(int);
};

// @baa 0x014ddeb0
int C_014ddeb0::sub_014ddeb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_014ddec0 { int sub_014ddec0(void); };

// @baa 0x014ddec0
int C_014ddec0::sub_014ddec0(void) { return *(int*)((char*)this + 0); }

struct C_014dded0 { int sub_014dded0(void); };

// @baa 0x014dded0
int C_014dded0::sub_014dded0(void) { return *(int*)((char*)this + 0); }

struct C_014ddee0 { int sub_014ddee0(void); };

// @baa 0x014ddee0
int C_014ddee0::sub_014ddee0(void) { return *(int*)((char*)this + 0); }

struct C_014ddf60 {
    int sub_014ddf60(int);
};

// @baa 0x014ddf60
int C_014ddf60::sub_014ddf60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_014ddf70 {
    int sub_014ddf70();
};

// @baa 0x014ddf70
int C_014ddf70::sub_014ddf70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_014ddf80 { int sub_014ddf80(void); };

// @baa 0x014ddf80
int C_014ddf80::sub_014ddf80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_014ddfb0 {
    int sub_014ddfb0(int);
};

// @baa 0x014ddfb0
int C_014ddfb0::sub_014ddfb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_014ddfc0 {
    int sub_014ddfc0(int);
};

// @baa 0x014ddfc0
int C_014ddfc0::sub_014ddfc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_014ddfd0 { int sub_014ddfd0(void); };

// @baa 0x014ddfd0
int C_014ddfd0::sub_014ddfd0(void) { return *(int*)((char*)this + 20); }

struct C_014ddfe0 { int sub_014ddfe0(void); };

// @baa 0x014ddfe0
int C_014ddfe0::sub_014ddfe0(void) { return *(int*)((char*)this + 20); }

int sub_0059c600(void);
int sub_005b3970(...);
int sub_005d8a20(...);
extern undefined4 g_0268d07c;
// @baa 0x014de050
void sub_014de050(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_0268d07c == 0) {
    g_0268d07c = sub_005b3970(L"Core");
    sub_0059c600();
  }
  sub_005d8a20(g_0268d07c,param_1,param_2,param_3);
  return;
}

struct C_014de180 {
    undefined4 sub_014de180(byte);
};

int sub_014dd4d0(void);
// @baa 0x014de180
undefined4 C_014de180::sub_014de180(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014dd4d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014df090 {
    void sub_014df090(int);
};

int sub_0053df70(...);
// @baa 0x014df090
void C_014df090::sub_014df090(int param_2)
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

struct UTexture2D_ : public UTexture2D {
    void* sub_014d79d0(void);
};

// @baa 0x014d79d0
void* UTexture2D_::sub_014d79d0(void)
{
    DWORD z = 0;
    *(DWORD*)((char*)this + 0x4)  = z;
    *(DWORD*)((char*)this + 0x8)  = z;
    *(DWORD*)((char*)this + 0xc)  = z;
    *(DWORD*)((char*)this + 0x10) = z;
    *(DWORD*)((char*)this + 0x14) = -1;
    return this;
}

class wxEvent
{
public:
    __declspec(dllimport) void Skip(bool Skip);
};

// @baa 0x014dc330
void __stdcall sub_014dc330(wxEvent* Event)
{
    Event->Skip(true);
}
