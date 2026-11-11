// UnrealEd_13d0000.cpp (part 1 of 4): 283 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

void sub_013c90d0();
// @baa 0x013d1750
void sub_013d1750(void) { sub_013c90d0(); }

void sub_013c9140();
// @baa 0x013d1790
void sub_013d1790(void) { sub_013c9140(); }

struct C_view {
    int sub_00547da0(int);
    int sub_013c8660(int);
};

// @baa 0x013d17a0
int URFMODSound::sub_013d17a0(int param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00547da0(param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  ((C_view *)(((char *)this + 0x10)))->sub_013c8660(param_2 + 0x10);
  return param_1;
}

void sub_005d9680();
// @baa 0x013d17d0
void sub_013d17d0(void) { sub_005d9680(); }

struct C {
    int sub_013d17e0();
};

int sub_013be8a0(void);
// @baa 0x013d17e0
int C::sub_013d17e0(void)
{
    int param_1 = (int)this;

  sub_013be8a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_013d1800 {
    int sub_013bdbf0();
    int sub_0055ab10(int, int);
};

// @baa 0x013d1800
void UPackageMap::sub_013d1800(void)
{
    int param_1 = (int)this;
  ((C_view_013d1800 *)(this))->sub_013bdbf0();
  ((C_view_013d1800 *)(this))->sub_0055ab10(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_013d1820 {
    int sub_013d1820();
};

int sub_013be900(void);
// @baa 0x013d1820
int C_013d1820::sub_013d1820(void)
{
    int param_1 = (int)this;

  sub_013be900();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013d1840 {
    int sub_013d1840();
};

int sub_013be9c0(void);
// @baa 0x013d1840
int C_013d1840::sub_013d1840(void)
{
    int param_1 = (int)this;

  sub_013be9c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_013d1860 {
    int sub_013be0b0();
    int sub_013c7bc0(int, int);
};

// @baa 0x013d1860
void UPackageMap::sub_013d1860(void)
{
    int param_1 = (int)this;
  ((C_view_013d1860 *)(this))->sub_013be0b0();
  ((C_view_013d1860 *)(this))->sub_013c7bc0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

int sub_013bea20(void);
// @baa 0x013d1880
int UPackageMap::sub_013d1880(void)
{
    int param_1 = (int)this;

  sub_013bea20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_013bea80(void);
// @baa 0x013d18a0
int UPackageMap::sub_013d18a0(void)
{
    int param_1 = (int)this;

  sub_013bea80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_013d19b0 { void sub_013c9bc0(int); C_013d19b0 *sub_013d19b0(int); };

// @baa 0x013d19b0
C_013d19b0 *C_013d19b0::sub_013d19b0(int a) { sub_013c9bc0(a); return this; }

struct C_013d19d0 { void sub_013c9ca0(int); C_013d19d0 *sub_013d19d0(int); };

// @baa 0x013d19d0
C_013d19d0 *C_013d19d0::sub_013d19d0(int a) { sub_013c9ca0(a); return this; }

void sub_013c8e40();
// @baa 0x013d25b0
void sub_013d25b0(void) { sub_013c8e40(); }

extern char g_0226dc74[];
// @baa 0x013d2700
int sub_013d2700(void) { return (int)g_0226dc74; }

// @baa 0x013d2710
int sub_013d2710(void) { return 1; }

// @baa 0x013d2720
int sub_013d2720(void) { return 1; }

struct A_013d2730 { virtual void sub_013d3930(); char pad[320]; };

struct B_013d2730 { virtual void sub_013d3930(); };

struct C_013d2730 : A_013d2730, B_013d2730 { virtual void sub_013d3930(); C_013d2730(); };

C_013d2730::C_013d2730() {}

// @baa 0x013d2730
void C_013d2730::sub_013d3930() {}

struct A_013d2740 { virtual void sub_013d3930(); char pad[324]; };

struct B_013d2740 { virtual void sub_013d3930(); };

struct C_013d2740 : A_013d2740, B_013d2740 { virtual void sub_013d3930(); C_013d2740(); };

C_013d2740::C_013d2740() {}

// @baa 0x013d2740
void C_013d2740::sub_013d3930() {}

struct A_013d2750 { virtual void sub_013d3930(); char pad[388]; };

struct B_013d2750 { virtual void sub_013d3930(); };

struct C_013d2750 : A_013d2750, B_013d2750 { virtual void sub_013d3930(); C_013d2750(); };

C_013d2750::C_013d2750() {}

// @baa 0x013d2750
void C_013d2750::sub_013d3930() {}

struct A_013d2760 { virtual void sub_013d3930(); char pad[392]; };

struct B_013d2760 { virtual void sub_013d3930(); };

struct C_013d2760 : A_013d2760, B_013d2760 { virtual void sub_013d3930(); C_013d2760(); };

C_013d2760::C_013d2760() {}

// @baa 0x013d2760
void C_013d2760::sub_013d3930() {}

// @baa 0x013d2770
void UUnrealEdEngine::sub_013d2770(int a0) { *(int*)((char*)this + 120) = 1; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x013db1b0
void sub_013db1b0(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x013db1d0
void sub_013db1d0(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_013db1f0 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_013db1f0& sub_013db1f0(int Arg);
};

// @baa 0x013db1f0
C_013db1f0& C_013db1f0::sub_013db1f0(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

struct C_013db200 { void sub_013db200(int a0); };

// @baa 0x013db200
void C_013db200::sub_013db200(int a0) { *(int*)((char*)this + 8) = a0; }

struct C_013db210 { int sub_013db210(void); };

// @baa 0x013db210
int C_013db210::sub_013db210(void) { return *(int*)((char*)this + 4); }

struct C_013db220 { int sub_013db220(void); };

// @baa 0x013db220
int C_013db220::sub_013db220(void) { return *(int*)((char*)this + 8); }

extern char g_022743f4[];
struct C_013db230 { void sub_013db230(void); };

// @baa 0x013db230
void C_013db230::sub_013db230(void) { *(int*)((char*)this + 0) = (int)g_022743f4; }

struct C_013db240 {
    void sub_013db240(undefined4 *);
};

// @baa 0x013db240
void C_013db240::sub_013db240(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x4c) = *param_2;
  *(undefined4 *)(param_1 + 0x50) = param_2[1];
  *(undefined4 *)(param_1 + 0x54) = param_2[2];
  return;
}

struct C_013db260 { void sub_013db260(int a0); };

// @baa 0x013db260
void C_013db260::sub_013db260(int a0) { *(int*)((char*)this + 88) = a0; }

struct C_013db270 { void sub_013db270(int a0); };

// @baa 0x013db270
void C_013db270::sub_013db270(int a0) { *(int*)((char*)this + 44) = a0; }

// @baa 0x013db280
int sub_013db280(void) { return 2; }

extern char g_022743f8[];
struct C_013db290 { C_013db290* sub_013db290(void); };

// @baa 0x013db290
C_013db290* C_013db290::sub_013db290(void) { *(int*)((char*)this + 0) = (int)g_022743f8; return this; }

struct C_013db2a0 { void sub_013db2a0(void); };

// @baa 0x013db2a0
void C_013db2a0::sub_013db2a0(void) { *(int*)((char*)this + 0) = (int)g_022743f4; }

struct C_013db2b0 { void sub_013db2b0(void); };

// @baa 0x013db2b0
void C_013db2b0::sub_013db2b0(void) { *(int*)((char*)this + 0) = (int)g_022743f4; }

struct C_013db2c0 { C_013db2c0* sub_013db2c0(void); };

// @baa 0x013db2c0
C_013db2c0* C_013db2c0::sub_013db2c0(void) { *(int*)((char*)this + 0) = (int)g_022743f4; return this; }

struct C_013db2d0 { int sub_013db2d0(void); };

// @baa 0x013db2d0
int C_013db2d0::sub_013db2d0(void) { return *(int*)((char*)this + 852); }

class wxDialog;
class wxDialog {
    public:
    public: __declspec(dllimport) wxDialog();
    friend struct C_013db3e0;
};

struct C_013db3e0 {
    wxDialog * sub_013db3e0();
};

extern undefined * g_02274720;
// @baa 0x013db3e0
wxDialog * C_013db3e0::sub_013db3e0(void)
{
    wxDialog * param_1 = (wxDialog *)this;

  ((wxDialog *)(param_1))->wxDialog::wxDialog();
  *(undefined ***)param_1 = &g_02274720;
  return param_1;
}

extern char g_025e8fe0[];
// @baa 0x013db400
int sub_013db400(void) { return (int)g_025e8fe0; }

extern char g_026d9b88[];
// @baa 0x013db410
int sub_013db410(void) { return (int)g_026d9b88; }

// @baa 0x013db440
void sub_013db440(void) {  }

struct C_013db480 {
    undefined4 * sub_013db480(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
    int sub_01115820(int, int, int, int, int, int);
};

extern undefined * g_02274a38;
extern undefined * g_02274a58;
// @baa 0x013db480
undefined4 * C_013db480::sub_013db480(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_013db480 *)(this))->sub_01115820(param_2, param_3, param_4, param_5, param_6, param_7);
  *param_1 = (undefined4)(&g_02274a58);
  param_1[0x6d] = (undefined4)(&g_02274a38);
  return param_1;
}

void sub_011157c0();
// @baa 0x013db4c0
void sub_013db4c0(void) { sub_011157c0(); }

extern char g_025e8fe8[];
// @baa 0x013db4f0
int sub_013db4f0(void) { return (int)g_025e8fe8; }

extern char g_026d9bdc[];
// @baa 0x013db500
int sub_013db500(void) { return (int)g_026d9bdc; }

extern char g_025e8ff0[];
// @baa 0x013db520
int sub_013db520(void) { return (int)g_025e8ff0; }

extern char g_026d9c1c[];
// @baa 0x013db530
int sub_013db530(void) { return (int)g_026d9c1c; }

extern char g_025e8ff8[];
// @baa 0x013db550
int sub_013db550(void) { return (int)g_025e8ff8; }

extern char g_026d9c5c[];
// @baa 0x013db560
int sub_013db560(void) { return (int)g_026d9c5c; }

extern char g_026d9cb0[];
// @baa 0x013db570
int sub_013db570(void) { return (int)g_026d9cb0; }

extern char g_025e9000[];
// @baa 0x013db580
int sub_013db580(void) { return (int)g_025e9000; }

extern char g_026d9cc8[];
// @baa 0x013db590
int sub_013db590(void) { return (int)g_026d9cc8; }

struct C_013db5a0 { int sub_013db5a0(void); };

// @baa 0x013db5a0
int C_013db5a0::sub_013db5a0(void) { return *(int*)((char*)this + 444); }

// @baa 0x013db5b0
void __stdcall sub_013db5b0(int a0) {  }

extern char g_0226f274[];
// @baa 0x013db5c0
int sub_013db5c0(void) { return (int)g_0226f274; }

extern char g_026d9ed4[];
// @baa 0x013db5d0
int sub_013db5d0(void) { return (int)g_026d9ed4; }

extern char g_026d9f14[];
// @baa 0x013db630
int sub_013db630(void) { return (int)g_026d9f14; }

extern char g_025e9008[];
// @baa 0x013db640
int sub_013db640(void) { return (int)g_025e9008; }

extern char g_026d9f2c[];
// @baa 0x013db650
int sub_013db650(void) { return (int)g_026d9f2c; }

struct C_013db830 {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14();
    void sub_013db830(int x);
};

void C_013db830::v00(){}

void C_013db830::v01(){}

void C_013db830::v02(){}

void C_013db830::v03(){}

void C_013db830::v04(){}

void C_013db830::v05(){}

void C_013db830::v06(){}

void C_013db830::v07(){}

void C_013db830::v08(){}

void C_013db830::v09(){}

void C_013db830::v10(){}

void C_013db830::v11(){}

void C_013db830::v12(){}

void C_013db830::v13(){}

void C_013db830::v14(){}

// @baa 0x013db830
// Thunk: one stack arg (cleaned by the callee, ret 4), forwards to virtual slot 14 (offset 0x38).
void C_013db830::sub_013db830(int x) { v14(); }

extern char g_025e9010[];
// @baa 0x013db840
int sub_013db840(void) { return (int)g_025e9010; }

extern char g_026da020[];
// @baa 0x013db850
int sub_013db850(void) { return (int)g_026da020; }

struct C_013db930 { char* sub_013db930(void); };

// @baa 0x013db930
char* C_013db930::sub_013db930(void) { return (char*)this + 440; }

extern char g_025e9018[];
// @baa 0x013db940
int sub_013db940(void) { return (int)g_025e9018; }

extern char g_026da038[];
// @baa 0x013db950
int sub_013db950(void) { return (int)g_026da038; }

extern char g_025e9020[];
// @baa 0x013db960
int sub_013db960(void) { return (int)g_025e9020; }

extern char g_026da078[];
// @baa 0x013db970
int sub_013db970(void) { return (int)g_026da078; }

extern char g_025e9028[];
// @baa 0x013dba00
int sub_013dba00(void) { return (int)g_025e9028; }

extern char g_026da0f4[];
// @baa 0x013dba10
int sub_013dba10(void) { return (int)g_026da0f4; }

class wxListCtrl;
class wxListCtrl {
    public:
    public: __declspec(dllimport) int GetSelectedItemCount() const;
    friend struct C_013dba20;
};

struct C_013dba20 {
    undefined4 sub_013dba20();
};

// @baa 0x013dba20
undefined4 C_013dba20::sub_013dba20(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(wxListCtrl **)(param_1 + 0x1d4) != (wxListCtrl *)0x0) {
    iVar1 = ((wxListCtrl *)(*(wxListCtrl **)(param_1 + 0x1d4)))->wxListCtrl::GetSelectedItemCount();
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0;
}

extern char g_02270354[];
// @baa 0x013dbb30
int sub_013dbb30(void) { return (int)g_02270354; }

extern char g_026da148[];
// @baa 0x013dbb40
int sub_013dbb40(void) { return (int)g_026da148; }

struct C_013dbb50 { void sub_013dbb50(int a0); };

// @baa 0x013dbb50
void C_013dbb50::sub_013dbb50(int a0) { *(int*)((char*)this + 508) = 1; }

extern char g_025e9030[];
// @baa 0x013dbb60
int sub_013dbb60(void) { return (int)g_025e9030; }

extern char g_026da200[];
// @baa 0x013dbb70
int sub_013dbb70(void) { return (int)g_026da200; }

extern char g_025e9038[];
// @baa 0x013dbc00
int sub_013dbc00(void) { return (int)g_025e9038; }

extern char g_026da31c[];
// @baa 0x013dbc10
int sub_013dbc10(void) { return (int)g_026da31c; }

struct C_013dbc20 { int sub_013dbc20(void); };

// @baa 0x013dbc20
int C_013dbc20::sub_013dbc20(void) { return *(int*)((char*)this + 8); }

struct C_013dbc30 { int sub_013dbc30(void); };

// @baa 0x013dbc30
int C_013dbc30::sub_013dbc30(void) { return *(int*)((char*)this + 12); }

struct C_013dbc60 {
    undefined4 sub_013dbc60();
};

// @baa 0x013dbc60
undefined4 C_013dbc60::sub_013dbc60(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 8);
}

struct C_013dbc70 { char* sub_013dbc70(void); };

// @baa 0x013dbc70
char* C_013dbc70::sub_013dbc70(void) { return (char*)this + 12; }

struct C_013dbc80 { void sub_013dbc80(void); };

// @baa 0x013dbc80
void C_013dbc80::sub_013dbc80(void) { *(int*)((char*)this + 0) = (int)g_022743f4; }

struct C_013dbcc0 {
    void sub_013dbcc0(undefined4, undefined4);
    int sub_014087f0(int, int);
};

// @baa 0x013dbcc0
void C_013dbcc0::sub_013dbcc0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_013dbcc0 *)(this))->sub_014087f0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}

struct C_013dbce0 { void sub_013dbce0(void); };

// @baa 0x013dbce0
void C_013dbce0::sub_013dbce0(void) { *(int*)((char*)this + 116) = 0; }

// @baa 0x013dbe10
int sub_013dbe10(void) { return 2; }

extern char g_026da4c4[];
// @baa 0x013dbe60
int sub_013dbe60(void) { return (int)g_026da4c4; }

extern char g_025e9040[];
// @baa 0x013dbe70
int sub_013dbe70(void) { return (int)g_025e9040; }

extern char g_026da4dc[];
// @baa 0x013dbe80
int sub_013dbe80(void) { return (int)g_026da4dc; }

extern char g_026da4f4[];
// @baa 0x013dbee0
int sub_013dbee0(void) { return (int)g_026da4f4; }

extern char g_025e9048[];
// @baa 0x013dbef0
int sub_013dbef0(void) { return (int)g_025e9048; }

extern char g_026da50c[];
// @baa 0x013dbf00
int sub_013dbf00(void) { return (int)g_026da50c; }

extern char g_026da560[];
// @baa 0x013dbfa0
int sub_013dbfa0(void) { return (int)g_026da560; }

extern char g_026da578[];
// @baa 0x013dbfb0
int sub_013dbfb0(void) { return (int)g_026da578; }

extern char g_025e9050[];
// @baa 0x013dbfc0
int sub_013dbfc0(void) { return (int)g_025e9050; }

extern char g_026da590[];
// @baa 0x013dbfd0
int sub_013dbfd0(void) { return (int)g_026da590; }

extern char g_026da5e4[];
// @baa 0x013dc420
int sub_013dc420(void) { return (int)g_026da5e4; }

extern char g_022724c4[];
// @baa 0x013dc430
int sub_013dc430(void) { return (int)g_022724c4; }

extern char g_026da5fc[];
// @baa 0x013dc440
int sub_013dc440(void) { return (int)g_026da5fc; }

struct C_013dc450 {
    int sub_013dc450();
};

// @baa 0x013dc450
int C_013dc450::sub_013dc450(void)
{
    int param_1 = (int)this;

  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(int *)(param_1 + 0x220) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x220) + 0x310), iVar1 != 0)) {
    iVar2 = iVar1;
  }
  return iVar2;
}

extern char g_026da67c[];
// @baa 0x013dc500
int sub_013dc500(void) { return (int)g_026da67c; }

extern char g_025e9058[];
// @baa 0x013dc510
int sub_013dc510(void) { return (int)g_025e9058; }

extern char g_026da694[];
// @baa 0x013dc520
int sub_013dc520(void) { return (int)g_026da694; }

class wxPanel;
class wxPanel {
    public:
    public: __declspec(dllimport) wxPanel();
    friend struct C_013dc530;
};

struct C_013dc530 {
    wxPanel * sub_013dc530();
};

extern undefined * g_02275170;
// @baa 0x013dc530
wxPanel * C_013dc530::sub_013dc530(void)
{
    wxPanel * param_1 = (wxPanel *)this;

  ((wxPanel *)(param_1))->wxPanel::wxPanel();
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined ***)param_1 = &g_02275170;
  return param_1;
}

struct C_013dc5d0 { void sub_013dc5d0(int a0); };

// @baa 0x013dc5d0
void C_013dc5d0::sub_013dc5d0(int a0) { *(int*)((char*)this + 8) = a0; }

struct C_013dc600 { int sub_013dc600(void); };

// @baa 0x013dc600
int C_013dc600::sub_013dc600(void) { return *(int*)((char*)this + 4); }

struct C_013dc610 { int sub_013dc610(void); };

// @baa 0x013dc610
int C_013dc610::sub_013dc610(void) { return *(int*)((char*)this + 4); }

struct C_013dc620 { int sub_013dc620(void); };

// @baa 0x013dc620
int C_013dc620::sub_013dc620(void) { return *(int*)((char*)this + 4); }

struct C_013dc630 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_013dc630(INT Index);
};

// @baa 0x013dc630
UBOOL C_013dc630::sub_013dc630(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_013dc650 { int sub_013dc650(void); };

// @baa 0x013dc650
int C_013dc650::sub_013dc650(void) { return *(int*)((char*)this + 4); }

struct C_013dc660 { int sub_013dc660(void); };

// @baa 0x013dc660
int C_013dc660::sub_013dc660(void) { return *(int*)((char*)this + 4); }

struct C_013dc670 { int sub_013dc670(void); };

// @baa 0x013dc670
int C_013dc670::sub_013dc670(void) { return *(int*)((char*)this + 4); }

struct C_013dc680 { int sub_013dc680(void); };

// @baa 0x013dc680
int C_013dc680::sub_013dc680(void) { return *(int*)((char*)this + 4); }

struct C_013dc690 { int sub_013dc690(void); };

// @baa 0x013dc690
int C_013dc690::sub_013dc690(void) { return *(int*)((char*)this + 4); }

struct C_013dc6a0 { int sub_013dc6a0(void); };

// @baa 0x013dc6a0
int C_013dc6a0::sub_013dc6a0(void) { return *(int*)((char*)this + 4); }

struct C_013dc710 { int a, b; C_013dc710(int, int); };

// @baa 0x013dc710
C_013dc710::C_013dc710(int x, int y) : a(x), b(y) {}

struct C_013dc730 { int a, b; C_013dc730(int, int); };

// @baa 0x013dc730
C_013dc730::C_013dc730(int x, int y) : a(x), b(y) {}

struct C_013dc750 { int a, b; C_013dc750(int, int); };

// @baa 0x013dc750
C_013dc750::C_013dc750(int x, int y) : a(x), b(y) {}

struct C_013dc770 { int a, b; C_013dc770(int, int); };

// @baa 0x013dc770
C_013dc770::C_013dc770(int x, int y) : a(x), b(y) {}

struct C_013dc790 { int a, b; C_013dc790(int, int); };

// @baa 0x013dc790
C_013dc790::C_013dc790(int x, int y) : a(x), b(y) {}

struct C_013dc7b0 { int a, b; C_013dc7b0(int, int); };

// @baa 0x013dc7b0
C_013dc7b0::C_013dc7b0(int x, int y) : a(x), b(y) {}

// @baa 0x013dc7d0
int sub_013dc7d0(int a0) { return *(int*)a0; }

// @baa 0x013dc7e0
bool sub_013dc7e0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_013dc810 {
    void sub_013dc810(undefined4 *);
};

// @baa 0x013dc810
void C_013dc810::sub_013dc810(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x013dc830
int sub_013dc830(int a0) { return *(int*)a0; }

// @baa 0x013dc840
bool sub_013dc840(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_013dc870 {
    void sub_013dc870(undefined4 *);
};

// @baa 0x013dc870
void C_013dc870::sub_013dc870(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x013dc890
int sub_013dc890(int a0) { return *(int*)a0; }

// @baa 0x013dc8a0
bool sub_013dc8a0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_013dc8b0 {
    void sub_013dc8b0(undefined4 *);
};

// @baa 0x013dc8b0
void C_013dc8b0::sub_013dc8b0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x013dc8d0
int sub_013dc8d0(int a0) { return *(int*)a0; }

// @baa 0x013dc8e0
bool sub_013dc8e0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_013dc910 {
    void sub_013dc910(undefined4 *);
};

// @baa 0x013dc910
void C_013dc910::sub_013dc910(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x013dc930
int sub_013dc930(int a0) { return *(int*)a0; }

// @baa 0x013dc940
bool sub_013dc940(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_013dc970 {
    void sub_013dc970(undefined4 *);
};

// @baa 0x013dc970
void C_013dc970::sub_013dc970(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x013dc990
int sub_013dc990(int a0) { return *(int*)a0; }

// @baa 0x013dc9a0
bool sub_013dc9a0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_013dc9b0 { int a, b; C_013dc9b0(const C_013dc9b0 &); };

// @baa 0x013dc9b0
C_013dc9b0::C_013dc9b0(const C_013dc9b0 &o) : a(o.a), b(o.b) {}

int sub_00627f00(...);
// @baa 0x013dc9f0
void sub_013dc9f0(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

struct C_013dca10 { int a, b; C_013dca10(const C_013dca10 &); };

// @baa 0x013dca10
C_013dca10::C_013dca10(const C_013dca10 &o) : a(o.a), b(o.b) {}

struct C_013dca30 { int a, b; C_013dca30(const C_013dca30 &); };

// @baa 0x013dca30
C_013dca30::C_013dca30(const C_013dca30 &o) : a(o.a), b(o.b) {}

struct C_013dca50 { int a, b; C_013dca50(const C_013dca50 &); };

// @baa 0x013dca50
C_013dca50::C_013dca50(const C_013dca50 &o) : a(o.a), b(o.b) {}

struct C_013dca70 { int a, b; C_013dca70(const C_013dca70 &); };

// @baa 0x013dca70
C_013dca70::C_013dca70(const C_013dca70 &o) : a(o.a), b(o.b) {}

struct C_013dca90 { int a, b; C_013dca90(const C_013dca90 &); };

// @baa 0x013dca90
C_013dca90::C_013dca90(const C_013dca90 &o) : a(o.a), b(o.b) {}

struct C_013dcab0 { int a, b; C_013dcab0(int, int); };

// @baa 0x013dcab0
C_013dcab0::C_013dcab0(int x, int y) : a(x), b(y) {}

// @baa 0x013dcad0
int sub_013dcad0(int a0) { return *(int*)a0; }

struct C_013dcae0 { int a, b; C_013dcae0(const C_013dcae0 &); };

// @baa 0x013dcae0
C_013dcae0::C_013dcae0(const C_013dcae0 &o) : a(o.a), b(o.b) {}

// @baa 0x013dcb00
bool sub_013dcb00(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_013dcb30 { int a, b; C_013dcb30(const C_013dcb30 &); };

// @baa 0x013dcb30
C_013dcb30::C_013dcb30(const C_013dcb30 &o) : a(o.a), b(o.b) {}

// @baa 0x013dcb50
void sub_013dcb50(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x013dcb70
void sub_013dcb70(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct A_013dcb90 { virtual void sub_013dced0(); char pad[432]; };

struct B_013dcb90 { virtual void sub_013dced0(); };

struct C_013dcb90 : A_013dcb90, B_013dcb90 { virtual void sub_013dced0(); C_013dcb90(); };

C_013dcb90::C_013dcb90() {}

// @baa 0x013dcb90
void C_013dcb90::sub_013dced0() {}

// @baa 0x013dcbc0
float10 sub_013dcbc0(double param_1)
{
  return (float10)param_1;
}

// @baa 0x013dcc00
undefined2 sub_013dcc00(void)
{
  return 0x69;
}

// @baa 0x013dcc10
undefined2 sub_013dcc10(void)
{
  return 0x66;
}

// @baa 0x013dcc20
undefined2 sub_013dcc20(void)
{
  return 0x73;
}

struct C_013dccd0 { int sub_013dccd0(void); };

// @baa 0x013dccd0
int C_013dccd0::sub_013dccd0(void) { return *(int*)((char*)this + 0); }

struct C_013dcce0 { int sub_013dcce0(void); };

// @baa 0x013dcce0
int C_013dcce0::sub_013dcce0(void) { return *(int*)((char*)this + 0); }

struct C_013dccf0 { int sub_013dccf0(void); };

// @baa 0x013dccf0
int C_013dccf0::sub_013dccf0(void) { return *(int*)((char*)this + 0); }

struct C_013dcd00 {
    INT Unk00;
    INT Unk04;
    INT Unk08;
    C_013dcd00& sub_013dcd00(int Arg);
};

// @baa 0x013dcd00
C_013dcd00& C_013dcd00::sub_013dcd00(int Arg)
{
    Unk00 = 0;
    Unk04 = 0;
    Unk08 = 0;
    return *this;
}

struct C_013dcd10 {
    undefined4 * sub_013dcd10(byte);
};

int sub_0053dfa0(...);
// @baa 0x013dcd10
undefined4 * C_013dcd10::sub_013dcd10(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022743f4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_013dcd30 {
    int sub_00c407b0(int);
};

extern undefined4 g_02275424;
// @baa 0x013dcd30
undefined4 * UUnrealEdEngine::sub_013dcd30(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_013dcd30 *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  param_1[5] = param_2;
  param_1[6] = param_3;
  *param_1 = (undefined4)(&g_02275424);
  return param_1;
}

int sub_00ddcdc0(void);
extern undefined4 g_026d9b54;
extern undefined4 g_026d9b58;
extern undefined4 g_026d9b5c;
// @baa 0x013dce30
undefined * sub_013dce30(void)
{
  if ((g_026d9b5c & 1) == 0) {
    g_026d9b5c = g_026d9b5c | 1;
    g_026d9b54 = sub_00ddcdc0();
    g_026d9b58 = (undefined4)(L"HUIFocusChainHandleHitProxy");
  }
  return (undefined *)(&g_026d9b54);
}

void sub_00c38ac0();
// @baa 0x013dce60
void sub_013dce60(void) { sub_00c38ac0(); }

extern char g_022754a8[];
struct C_013dce70 { C_013dce70* sub_013dce70(void); };

// @baa 0x013dce70
C_013dce70* C_013dce70::sub_013dce70(void) { *(int*)((char*)this + 0) = (int)g_022754a8; return this; }

struct C_013dce80 {
    undefined4 * sub_013dce80(byte);
};

// @baa 0x013dce80
undefined4 * C_013dce80::sub_013dce80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022743f4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013dceb0 {
    undefined4 sub_013dceb0(byte);
};

int sub_013db370(void);
// @baa 0x013dceb0
undefined4 C_013dceb0::sub_013dceb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013db370();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013dd430 {
    undefined4 * sub_013dd430(byte);
};

int sub_014067f0(void);
extern undefined * g_02274de4;
// @baa 0x013dd430
undefined4 * C_013dd430::sub_013dd430(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02274de4);
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  sub_014067f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013dd5d0 {
    undefined4 * sub_013dd5d0(byte);
};

extern undefined * g_02274e10;
// @baa 0x013dd5d0
undefined4 * C_013dd5d0::sub_013dd5d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02274e10);
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  sub_014067f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013dd600 {
    undefined4 sub_013dd600(byte);
};

int sub_00729530(void);
// @baa 0x013dd600
undefined4 C_013dd600::sub_013dd600(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00729530();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_013dd690 {
    int sub_00c407b0(int);
};

extern undefined * g_0227604c;
// @baa 0x013dd690
undefined4 * UUnrealEdEngine::sub_013dd690(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_013dd690 *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  param_1[5] = param_2;
  param_1[6] = param_3;
  *param_1 = (undefined4)(&g_0227604c);
  return param_1;
}

extern undefined4 g_026d9b60;
extern undefined4 g_026d9b64;
extern undefined4 g_026d9b68;
// @baa 0x013dd6c0
undefined * sub_013dd6c0(void)
{
  if ((g_026d9b68 & 1) == 0) {
    g_026d9b68 = g_026d9b68 | 1;
    g_026d9b60 = sub_00ddcdc0();
    g_026d9b64 = (undefined4)(L"HUICellBoundaryHitProxy");
  }
  return (undefined *)(&g_026d9b60);
}

// @baa 0x013dd6f0
undefined * sub_013dd6f0(void)
{
  if ((g_026d9b68 & 1) == 0) {
    g_026d9b68 = g_026d9b68 | 1;
    g_026d9b60 = sub_00ddcdc0();
    g_026d9b64 = (undefined4)(L"HUICellBoundaryHitProxy");
  }
  return (undefined *)(&g_026d9b60);
}

// @baa 0x013dd720
void sub_013dd720(void) { sub_00c38ac0(); }

// @baa 0x013dd730
int sub_013dd730(void) { return 2; }

struct C_013dda20 {
    undefined4 * sub_013dda20(byte);
};

extern undefined * g_02274e68;
// @baa 0x013dda20
undefined4 * C_013dda20::sub_013dda20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02274e68);
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  sub_014067f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013ddc10 {
    undefined4 sub_013ddc10(byte);
};

int sub_013dc060(void);
// @baa 0x013ddc10
undefined4 C_013ddc10::sub_013ddc10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013dc060();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_011ab200();
// @baa 0x013ddd70
void sub_013ddd70(void) { sub_011ab200(); }

struct C_013de0a0 { C_013de0a0* sub_013de0a0(void); };

// @baa 0x013de0a0
C_013de0a0* C_013de0a0::sub_013de0a0(void) { return this; }

struct T_013de270 { int x; };

// @baa 0x013de270
template T_013de270& TIndirectArray<T_013de270>::operator()(INT);

struct T_013de2c0 { int x; };

// @baa 0x013de2c0
template const T_013de2c0& TIndirectArray<T_013de2c0>::operator()(INT) const;

struct C_013de310 { int a, b, c; C_013de310(); };

// @baa 0x013de310
C_013de310::C_013de310() : a(0), b(0), c(0) {}

struct C_013de320 { int a, b, c; C_013de320(); };

// @baa 0x013de320
C_013de320::C_013de320() : a(0), b(0), c(0) {}

struct C_013de330 { int a, b, c; C_013de330(); };

// @baa 0x013de330
C_013de330::C_013de330() : a(0), b(0), c(0) {}

struct C_013de340 { int a, b, c; C_013de340(); };

// @baa 0x013de340
C_013de340::C_013de340() : a(0), b(0), c(0) {}

struct C_013de350 { int a, b, c; C_013de350(); };

// @baa 0x013de350
C_013de350::C_013de350() : a(0), b(0), c(0) {}

struct C_013de360 { int sub_013de360(void); };

// @baa 0x013de360
int C_013de360::sub_013de360(void) { return *(int*)((char*)this + 0); }

struct C_013de370 { int sub_013de370(void); };

// @baa 0x013de370
int C_013de370::sub_013de370(void) { return *(int*)((char*)this + 0); }

struct C_013de380 { int sub_013de380(void); };

// @baa 0x013de380
int C_013de380::sub_013de380(void) { return *(int*)((char*)this + 0); }

struct C_013de390 { int sub_013de390(void); };

// @baa 0x013de390
int C_013de390::sub_013de390(void) { return *(int*)((char*)this + 0); }

struct C_013de3a0 { int sub_013de3a0(void); };

// @baa 0x013de3a0
int C_013de3a0::sub_013de3a0(void) { return *(int*)((char*)this + 0); }

struct C_013de420 { int sub_013de420(void); };

// @baa 0x013de420
int C_013de420::sub_013de420(void) { return *(int*)((char*)this + 0); }

struct C_013de430 { int sub_013de430(void); };

// @baa 0x013de430
int C_013de430::sub_013de430(void) { return *(int*)((char*)this + 0); }

struct C_013de4b0 {
    int sub_013de4b0(int);
};

// @baa 0x013de4b0
int C_013de4b0::sub_013de4b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_013de4c0 { int sub_013de4c0(void); };

// @baa 0x013de4c0
int C_013de4c0::sub_013de4c0(void) { return *(int*)((char*)this + 0); }

struct C_013de540 { int sub_013de540(void); };

// @baa 0x013de540
int C_013de540::sub_013de540(void) { return *(int*)((char*)this + 0); }

struct C_013de5c0 {
    int sub_013de5c0();
};

// @baa 0x013de5c0
int C_013de5c0::sub_013de5c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_013de5d0 {
    int sub_013de5d0();
};

// @baa 0x013de5d0
int C_013de5d0::sub_013de5d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_013de5e0 {
    int sub_013de5e0();
};

// @baa 0x013de5e0
int C_013de5e0::sub_013de5e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_013de5f0 {
    int sub_013de5f0();
};

// @baa 0x013de5f0
int C_013de5f0::sub_013de5f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_013de600 {
    int sub_013de600();
};

// @baa 0x013de600
int C_013de600::sub_013de600(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_013de610 {
    int sub_013de610();
};

// @baa 0x013de610
int C_013de610::sub_013de610(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_013de620 { int sub_013de620(void); };

// @baa 0x013de620
int C_013de620::sub_013de620(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_013de650 { int sub_013de650(void); };

// @baa 0x013de650
int C_013de650::sub_013de650(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_013de680 { int sub_013de680(void); };

// @baa 0x013de680
int C_013de680::sub_013de680(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_013de690 { int sub_013de690(void); };

// @baa 0x013de690
int C_013de690::sub_013de690(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_013de6c0 { int sub_013de6c0(void); };

// @baa 0x013de6c0
int C_013de6c0::sub_013de6c0(void) { return *(int*)((char*)this + 0); }

struct C_013de6d0 { int sub_013de6d0(void); };

// @baa 0x013de6d0
int C_013de6d0::sub_013de6d0(void) { return *(int*)((char*)this + 0); }

// @baa 0x013de6e0
int sub_013de6e0(int a0) { return a0; }

struct C_013de6f0 { int sub_013de6f0(void); };

// @baa 0x013de6f0
int C_013de6f0::sub_013de6f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_013de720 { int sub_013de720(void); };

// @baa 0x013de720
int C_013de720::sub_013de720(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_013de750 { int sub_013de750(void); };

// @baa 0x013de750
int C_013de750::sub_013de750(void) { return *(int*)((char*)this + 0); }

struct C_013de760 { int sub_013de760(void); };

// @baa 0x013de760
int C_013de760::sub_013de760(void) { return *(int*)((char*)this + 0); }

struct C_013de770 {
    int sub_013de770(int);
};

// @baa 0x013de770
int C_013de770::sub_013de770(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_013de780 {
    int sub_013de780(int);
};

// @baa 0x013de780
int C_013de780::sub_013de780(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_013de790 {
    int sub_013de790(int);
};

// @baa 0x013de790
int C_013de790::sub_013de790(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_013de7a0 {
    int sub_013de7a0(int);
};

// @baa 0x013de7a0
int C_013de7a0::sub_013de7a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x013de7b0
int sub_013de7b0(int a0) { return a0; }

struct C_013de7c0 {
    int sub_013de7c0(int);
};

// @baa 0x013de7c0
int C_013de7c0::sub_013de7c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_013de7d0 {
    int sub_013de7d0(int);
};

// @baa 0x013de7d0
int C_013de7d0::sub_013de7d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_013de7e0 {
    int sub_013de7e0(int);
};

// @baa 0x013de7e0
int C_013de7e0::sub_013de7e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_013de7f0 {
    int sub_013de7f0(int);
};

// @baa 0x013de7f0
int C_013de7f0::sub_013de7f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_013de800 {
    int sub_013de800(int);
};

// @baa 0x013de800
int C_013de800::sub_013de800(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_013de810 {
    int sub_013de810(int);
};

// @baa 0x013de810
int C_013de810::sub_013de810(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_013de820 { int sub_013de820(void); };

// @baa 0x013de820
int C_013de820::sub_013de820(void) { return *(int*)((char*)this + 20); }

struct C_013de830 { int sub_013de830(void); };

// @baa 0x013de830
int C_013de830::sub_013de830(void) { return *(int*)((char*)this + 20); }

struct C_013de840 { int sub_013de840(void); };

// @baa 0x013de840
int C_013de840::sub_013de840(void) { return *(int*)((char*)this + 20); }

struct C_013de850 { int sub_013de850(void); };

// @baa 0x013de850
int C_013de850::sub_013de850(void) { return *(int*)((char*)this + 20); }

struct C_013de860 { int sub_013de860(void); };

// @baa 0x013de860
int C_013de860::sub_013de860(void) { return *(int*)((char*)this + 20); }

struct C_013de870 { int sub_013de870(void); };

// @baa 0x013de870
int C_013de870::sub_013de870(void) { return *(int*)((char*)this + 20); }

struct C_013de880 { int sub_013de880(void); };

// @baa 0x013de880
int C_013de880::sub_013de880(void) { return *(int*)((char*)this + 20); }

struct C_013de890 { int sub_013de890(void); };

// @baa 0x013de890
int C_013de890::sub_013de890(void) { return *(int*)((char*)this + 20); }

struct C_013de8a0 { int sub_013de8a0(void); };

// @baa 0x013de8a0
int C_013de8a0::sub_013de8a0(void) { return *(int*)((char*)this + 20); }

struct C_013de8b0 { int sub_013de8b0(void); };

// @baa 0x013de8b0
int C_013de8b0::sub_013de8b0(void) { return *(int*)((char*)this + 20); }

struct C_013de8c0 { int sub_013de8c0(void); };

// @baa 0x013de8c0
int C_013de8c0::sub_013de8c0(void) { return *(int*)((char*)this + 20); }

struct C_013de8d0 { int sub_013de8d0(void); };

// @baa 0x013de8d0
int C_013de8d0::sub_013de8d0(void) { return *(int*)((char*)this + 20); }

struct C_013de8e0 { int sub_013de8e0(void); };

// @baa 0x013de8e0
int C_013de8e0::sub_013de8e0(void) { return *(int*)((char*)this + 20); }

struct C_013de8f0 {
    int sub_013de8f0(int);
};

// @baa 0x013de8f0
int C_013de8f0::sub_013de8f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x013debc0
void sub_013debc0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x013debe0
void sub_013debe0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x013dec00
void sub_013dec00(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x013dec20
void sub_013dec20(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x013dec40
void sub_013dec40(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct S_013dec60 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_013dec60(INT Index) const;
};

// @baa 0x013dec60
const DWORD* S_013dec60::sub_013dec60(INT Index) const
{
    return &Items(Index);
}

struct S_013ded20 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_013ded20(INT Index) const;
};

// @baa 0x013ded20
const DWORD* S_013ded20::sub_013ded20(INT Index) const
{
    return &Items(Index);
}

struct C_013ded70 { int sub_013ded70(void); };

// @baa 0x013ded70
int C_013ded70::sub_013ded70(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_013deda0 {
    int sub_013deda0(int);
};

// @baa 0x013deda0
int C_013deda0::sub_013deda0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_013dedb0 { int sub_013dedb0(void); };

// @baa 0x013dedb0
int C_013dedb0::sub_013dedb0(void) { return *(int*)((char*)this + 20); }

// @baa 0x013dedc0
void sub_013dedc0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x013dee40
void sub_013dee40(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x013dee60
void sub_013dee60(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct S_013dee80 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_013dee80(INT Index);
};

// @baa 0x013dee80
DWORD* S_013dee80::sub_013dee80(INT Index)
{
    return &Items(Index);
}

struct E { BYTE Bytes[48]; };

struct S_013deed0 {
    TArray<E> Items; // 0x00
    E* sub_013deed0(INT Index);
};

// @baa 0x013deed0
E* S_013deed0::sub_013deed0(INT Index)
{
    return &Items(Index);
}

struct E_013def20 { BYTE Bytes[16]; };

struct S_013def20 {
    TArray<E_013def20> Items; // 0x00
    E_013def20* sub_013def20(INT Index);
};

// @baa 0x013def20
E_013def20* S_013def20::sub_013def20(INT Index)
{
    return &Items(Index);
}

// @baa 0x013defd0
undefined4 * UObject::sub_013defd0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022743f4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013df610 {
    bool sub_013df610();
};

int sub_00dbddd0(...);
// @baa 0x013df610
bool C_013df610::sub_013df610(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = sub_00dbddd0(*(undefined4 *)(param_1 + 0xc));
  return iVar1 != 0;
}

struct C_013df630 {
    undefined4 sub_013df630();
};

int sub_013deb50(...);
// @baa 0x013df630
undefined4 C_013df630::sub_013df630(void)
{
    int param_1 = (int)this;

  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x220) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x220) + 0x310), iVar1 != 0)) {
    uVar2 = sub_013deb50(*(undefined4 *)(iVar1 + 0x400));
  }
  return uVar2;
}

struct C_013df690 {
    undefined4 * sub_013df690(byte);
};

// @baa 0x013df690
undefined4 * C_013df690::sub_013df690(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022743f4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013df710 { C_013df710* sub_013df710(void); };

// @baa 0x013df710
C_013df710* C_013df710::sub_013df710(void) { return this; }

struct C_013df750 { void sub_013df750(void); };

// @baa 0x013df750
void C_013df750::sub_013df750(void) { *(int*)((char*)this + 0) = (int)g_022743f4; }

struct C_013df760 {
    undefined4 * sub_013df760(byte);
};

// @baa 0x013df760
undefined4 * C_013df760::sub_013df760(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022743f4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct E_013dfb20 { BYTE Bytes[12]; };

struct S_013dfb20 {
    TArray<E_013dfb20> Items; // 0x00
    E_013dfb20* sub_013dfb20(INT Index);
};

// @baa 0x013dfb20
E_013dfb20* S_013dfb20::sub_013dfb20(INT Index)
{
    return &Items(Index);
}

struct S_013dfbc0 {
    TArray<E> Items; // 0x00
    E* sub_013dfbc0(INT Index);
};

// @baa 0x013dfbc0
E* S_013dfbc0::sub_013dfbc0(INT Index)
{
    return &Items(Index);
}

struct S_013dfc10 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_013dfc10(INT Index);
};

// @baa 0x013dfc10
DWORD* S_013dfc10::sub_013dfc10(INT Index)
{
    return &Items(Index);
}

struct C_013dfc60{
int sub_013dfc60(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x013dfc60
int C_013dfc60::sub_013dfc60(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct S_013dfcc0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_013dfcc0(INT Index);
};

// @baa 0x013dfcc0
DWORD* S_013dfcc0::sub_013dfcc0(INT Index)
{
    return &Items(Index);
}

struct S_013dfd10 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_013dfd10(INT Index) const;
};

// @baa 0x013dfd10
const DWORD* S_013dfd10::sub_013dfd10(INT Index) const
{
    return &Items(Index);
}

struct C_013dfd60{
int sub_013dfd60(undefined4*);
};

// @baa 0x013dfd60
int C_013dfd60::sub_013dfd60(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct S_013dfdc0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_013dfdc0(INT Index);
};

// @baa 0x013dfdc0
DWORD* S_013dfdc0::sub_013dfdc0(INT Index)
{
    return &Items(Index);
}

struct C_013dfe10{
int sub_013dfe10(undefined4*);
};

// @baa 0x013dfe10
int C_013dfe10::sub_013dfe10(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct S_013dfe70 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_013dfe70(INT Index);
};

// @baa 0x013dfe70
DWORD* S_013dfe70::sub_013dfe70(INT Index)
{
    return &Items(Index);
}

struct C_013dfec0{
int sub_013dfec0(undefined4*);
};

// @baa 0x013dfec0
int C_013dfec0::sub_013dfec0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

// @baa 0x013dff20
void __stdcall sub_013dff20(int a0, int a1) {  }

struct C_013dff30 {
    int sub_013dff30(int);
};

// @baa 0x013dff30
int C_013dff30::sub_013dff30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_013dff40 {
    int sub_013dff40(int);
};

// @baa 0x013dff40
int C_013dff40::sub_013dff40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x013dff50
void __stdcall sub_013dff50(int a0, int a1) {  }

// @baa 0x013dff60
void __stdcall sub_013dff60(int a0, int a1) {  }

struct C_013dff70 {
    int sub_013dff70(int);
};

// @baa 0x013dff70
int C_013dff70::sub_013dff70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x013dff80
void __stdcall sub_013dff80(int a0, int a1) {  }

struct C_013dff90 {
    int sub_013dff90(int);
};

// @baa 0x013dff90
int C_013dff90::sub_013dff90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x013dffa0
void __stdcall sub_013dffa0(int a0, int a1) {  }

struct C_013dffe0 {
    int sub_013dffe0(int);
};

// @baa 0x013dffe0
int C_013dffe0::sub_013dffe0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}
